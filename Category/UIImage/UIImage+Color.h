//
//  UIImage+Color.h
//  DLCategory
//
//  Created by 张德龙 on 15/7/18.
//  Copyright (c) 2015年 zhangdelong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Color)

+ (UIImage *)imageWithColor:(UIColor *)color imageWidth:(NSInteger)width imageHeight:(NSInteger)height withOpaque:(BOOL)opaque scale:(CGFloat)scale;

@end
