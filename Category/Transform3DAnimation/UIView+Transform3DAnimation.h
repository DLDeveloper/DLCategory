//
//  UIView+Transform3DAnimation.h
//  DLCategory
//
//  Created by 张德龙 on 15/7/18.
//  Copyright (c) 2015年 zhangdelong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Transform3DAnimation)
/**
 *  旋转动画效果
 
 使用示例（每个单元格出现时旋转）：
 
 - (void)tableView:(UITableView *)tableView willDisplayCell:(UITableViewCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPath {
 
 [cell transform3DAnimation];
 
 }
 *
 *  @return 当前视图
 */
- (instancetype)transform3DAnimation;

@end
