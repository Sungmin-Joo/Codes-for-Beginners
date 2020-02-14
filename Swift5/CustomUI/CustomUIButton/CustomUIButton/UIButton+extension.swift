//
//  UIButton+extension.swift
//  CustomUIButton
//
//  Created by Naver on 2020/02/15.
//  Copyright © 2020 Naver. All rights reserved.
//

import UIKit

protocol isCircle {
    var radius: CGFloat { get set }
}

extension CGRect {
    init(center: CGPoint, size: CGSize) {
        self.init(x: center.x - size.width / 2, y: center.y - size.height / 2, width: size.width, height: size.height)
    }
}

extension UIButton: isCircle {
    var radius: CGFloat {
        get {
            return frame.width * 0.5
        }
        set {
            redrawView(radius: newValue)
        }
    }

    convenience init(center: CGPoint, radius: CGFloat) {
        self.init(frame: CGRect(center: center, size: CGSize(width: radius * 2, height: radius * 2)))
        layer.cornerRadius = radius
    }

    func redrawView(radius: CGFloat) {
        let nowCenter = center
        defer { center = nowCenter }
        frame.size = CGSize(width: radius * 2, height: radius * 2)
        layer.cornerRadius = radius
    }

    func borderUIColor(color: UIColor) {
        layer.borderColor = color.cgColor
    }

    func borderAndUIColor(borderWith: CGFloat, color: UIColor) {
        layer.borderWidth = borderWith
        layer.borderColor = color.cgColor
    }

    func borderAndCGColor(borderWith: CGFloat, color: CGColor) {
        layer.borderWidth = borderWith
        layer.borderColor = color
    }
}
