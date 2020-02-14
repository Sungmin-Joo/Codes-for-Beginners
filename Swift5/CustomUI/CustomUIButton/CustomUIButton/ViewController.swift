//
//  ViewController.swift
//  CustomButton
//
//  Created by Naver on 2020/02/15.
//  Copyright © 2020 Naver. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    let circleButton = UIButton(center: CGPoint(x: 150, y: 200), radius: 100)
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.

        circleButton.backgroundColor = .darkGray
        circleButton.borderAndUIColor(borderWith: 3, color: .red)
        circleButton.addTarget(self, action: #selector(self.samplebuttonDidTapped(_:)), for: .touchUpInside)
        self.view.addSubview(circleButton)

        let button = UIButton(frame: CGRect(center: self.view.center, size: CGSize(width: 150, height: 30)))
        button.addTarget(self, action: #selector(self.buttonDidTapped(_:)), for: .touchUpInside)
        button.backgroundColor = .green
        button.setTitle("Move and Chage", for: .normal)
        self.view.addSubview(button)
    }

    @objc func buttonDidTapped(_ sender: UIButton) {
        if circleButton.radius == 100 {
            circleButton.radius = 40
            circleButton.center = CGPoint(x: 300, y: 200)
        } else {
            circleButton.radius = 100
            circleButton.center = CGPoint(x: 150, y: 200)
        }
    }

    @objc func samplebuttonDidTapped(_ sender: UIButton) {
        print("Circle button is clicked")
    }
}
