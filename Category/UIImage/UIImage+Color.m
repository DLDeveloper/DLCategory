//
//  UIImage+Color.m
//  DLCategory
//
//  Created by 张德龙 on 15/7/18.
//  Copyright (c) 2015年 zhangdelong. All rights reserved.
//

#import "UIImage+Color.h"

@implementation UIImage (Color)

+ (UIImage *)imageWithColor:(UIColor *)color imageWidth:(NSInteger)width imageHeight:(NSInteger)height withOpaque:(BOOL)opaque scale:(CGFloat)scale
{
    UIGraphicsBeginImageContextWithOptions(CGSizeMake(width, height),opaque, scale);
    [color set];
    UIRectFill(CGRectMake(0, 0, width, height));
    
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    
    UIGraphicsEndImageContext();
    
    return image;
}
@end
