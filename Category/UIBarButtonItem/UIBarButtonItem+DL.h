//
//  UIBarButtonItem+DL.h
//  DLCategory
//
//  Created by 张德龙 on 15/7/17.
//  Copyright (c) 2015年 zhangdelong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (DL)
/**
 *  快速创建一个显示图片的item
 *
 *  @param action   监听方法
 */
+ (UIBarButtonItem *)itemWithIcon:(NSString *)icon highIcon:(NSString *)highIcon target:(id)target action:(SEL)action;

@end
