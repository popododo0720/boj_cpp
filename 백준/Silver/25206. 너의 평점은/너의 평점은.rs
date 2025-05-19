use std::io::{stdin, prelude::*};

fn get_grade_point(grade: &str) -> f32 {
    match grade {
        "A+" => 4.5,
        "A0" => 4.0,
        "B+" => 3.5,
        "B0" => 3.0,
        "C+" => 2.5,
        "C0" => 2.0,
        "D+" => 1.5,
        "D0" => 1.0,
        "F"  => 0.0,
        _    => 0.0, 
    }
}

fn main() {
    let stdin = stdin();
    let mut total_weighted_grade_points: f32 = 0.0;
    let mut total_credits_for_gpa: f32 = 0.0;

    for line_result in stdin.lock().lines() {
        let line = match line_result {
            Ok(l) => l,
            Err(_) => break, 
        };

        if line.trim().is_empty() {
            continue;
        }

        let parts: Vec<&str> = line.split_whitespace().collect();

        if parts.len() < 3 {
            continue;
        }

        let grade_str = parts[parts.len() - 1];
        let credit_str = parts[parts.len() - 2];

        if grade_str == "P" {
            continue; 
        }

        let credit: f32 = match credit_str.parse() {
            Ok(c) => c,
            Err(_) => {
                continue;
            }
        };

        let grade_point = get_grade_point(grade_str);

        total_weighted_grade_points += credit * grade_point;
        total_credits_for_gpa += credit;
    }

    if total_credits_for_gpa == 0.0 {
        println!("0.000000"); 
    } else {
        let gpa = total_weighted_grade_points / total_credits_for_gpa;
        println!("{:.6}", gpa);
    }
}