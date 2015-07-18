//
//  CAAnimation+DL.m
//  DLCategory
//
//  Created by 张德龙 on 15/7/18.
//  Copyright (c) 2015年 zhangdelong. All rights reserved.
//

#import "CAAnimation+DL.h"

@implementation CAAnimation (DL)

+ (CABasicAnimation *)basicAnimationWithKeyPath:(NSString *)keyPath fromValue:(CGFloat)fromValue toValue:(CGFloat)toValue duration:(CFTimeInterval)duration repeatCount:(float)repeatCount {
    CABasicAnimation *animation = [CABasicAnimation animationWithKeyPath:keyPath];
    animation.fromValue = [NSNumber numberWithDouble:fromValue];
    animation.toValue = [NSNumber numberWithDouble:toValue];
    animation.duration = duration;
    animation.repeatCount = repeatCount;
    return animation;
}

+ (CAKeyframeAnimation *)keyframeAnimationWithKeyPath:(NSString *)keyPath values:(NSArray *)values duration:(CFTimeInterval)duration repeatCount:(float)repeatCount {
    CAKeyframeAnimation *animation = [CAKeyframeAnimation animationWithKeyPath:keyPath];
    animation.values = values;
    animation.duration = duration;
    animation.calculationMode = kCAAnimationCubic;
    animation.fillMode = kCAFillModeForwards;
    return animation;
}

@end
