//
//  CAAnimation+DL.h
//  DLCategory
//
//  Created by 张德龙 on 15/7/18.
//  Copyright (c) 2015年 zhangdelong. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@interface CAAnimation (DL)
/*
 eg:
 
 CABasicAnimation *TransformAnim = [CABasicAnimation animationWithKeyPath:@"transform"];
 
 TransformAnim.fromValue = [NSValue valueWithCATransform3D:CATransform3DIdentity];
 TransformAnim.toValue = [NSValue valueWithCATransform3D:CATransform3DMakeRotation(M_PI, 0, 1, 0)];
 
 TransformAnim.cumulative = YES;
 TransformAnim.duration = 3;
 TransformAnim.repeatCount = 2;
 */
+ (CABasicAnimation *)basicAnimationWithKeyPath:(NSString *)keyPath fromValue:(CGFloat)fromValue toValue:(CGFloat)toValue duration:(CFTimeInterval)duration repeatCount:(NSInteger)repeatCount;
/*
 eg:抖动
 
 CAKeyframeAnimation *animation = [CAKeyframeAnimation animation];
 animation.keyPath = @"position.x";
 animation.values = @[ @0, @10, @-10, @10, @0 ];
 animation.keyTimes = @[ @0, @(1 / 6.0), @(3 / 6.0), @(5 / 6.0), @1 ];
 animation.duration = 0.4;
 
 animation.additive = YES;
 
 [self.tracker.layer addAnimation:animation forKey:@"shake"];
 */
+ (CAKeyframeAnimation *)keyFrameAnimationWithKeyPath:(NSString *)keyPath values:(NSArray *)values duration:(CFTimeInterval)duration repeatCount:(NSInteger)repeatCount;

@end
