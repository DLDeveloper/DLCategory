//
//  UITabBarController+UINavigationController.h
//  DLCategory
//
//  Created by 张德龙 on 15/7/17.
//  Copyright (c) 2015年 zhangdelong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITabBarController (UINavigationController)
/**
 *  用UINavigationController将childViewController并加到UITabBarController中
 *
 *  @param childViewController     当成UINavigationController rootViewController的UIViewController
 *  @param title                   导航栏标题
 *  @param tabBarItemImage         默认TabBarItem图片
 *
 *  @return 持有装载childViewController的UINavigationController的UITabBarController实例
 */
- (instancetype)addChildViewController:(UIViewController *)childViewController
         withNavigationControllerTitle:(NSString *)title
                       tabBarItemImage:(UIImage *)tabBarItemImage;
/**
 *  用UINavigationController将childViewController并加到UITabBarController中
 *
 *  @param childViewController     当成UINavigationController rootViewController的UIViewController
 *  @param title                   导航栏标题
 *  @param tabBarItemImage         默认TabBarItem图片
 *  @param tabBarItemSelectedImage 选中时TabBarItem图片
 *
 *  @return 持有装载childViewController的UINavigationController的UITabBarController实例
 */
- (instancetype)addChildViewController:(UIViewController *)childViewController
         withNavigationControllerTitle:(NSString *)title
                       tabBarItemImage:(UIImage *)tabBarItemImage
               tabBarItemSelectedImage:(UIImage *)tabBarItemSelectedImage;

@end
