//
//  ViewController.swift
//  CircleView
//
//  Created by Naver on 2020/02/14.
//  Copyright © 2020 Naver. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    let circleView = UIView(center: CGPoint(x: 150, y: 200), radius: 100)
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.

        circleView.backgroundColor = .darkGray
        circleView.borderAndUIColor(borderWith: 3, color: .red)
        self.view.addSubview(circleView)

        let button = UIButton(frame: CGRect(center: self.view.center, size: CGSize(width: 150, height: 30)))
        button.addTarget(self, action: #selector(self.buttonDidTapped(_:)), for: .touchUpInside)
        button.backgroundColor = .green
        button.setTitle("Move and Chage", for: .normal)
        self.view.addSubview(button)
    }

    @objc func buttonDidTapped(_ sender: UIButton) {
        if circleView.radius == 100 {
            circleView.radius = 40
            circleView.center = CGPoint(x: 300, y: 200)
        } else {
            circleView.radius = 100
            circleView.center = CGPoint(x: 150, y: 200)
        }
    }
}
