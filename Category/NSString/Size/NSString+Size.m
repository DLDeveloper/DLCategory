//
//  NSString+Size.m
//  DLCategory
//
//  Created by 张德龙 on 15/7/17.
//  Copyright (c) 2015年 zhangdelong. All rights reserved.
//

#import "NSString+Size.h"

#define iOS7  [[[UIDevice currentDevice] systemVersion] floatValue] > 7.0
@implementation NSString (Size)

- (CGSize)sizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode options:(NSStringDrawingOptions)options context:(NSStringDrawingContext *)context
{
    if (!iOS7) {
        /**
         *  计算显示文字所需的大小， NSString的方法
         *
         *  参数1 : 字体
         *  参数2 : 显示文字的约束区域
         *  参数3 : 换行模式
         */
        return  [self sizeWithFont:font constrainedToSize:size lineBreakMode:lineBreakMode];
    }
    else
    {
        NSDictionary *dict = @{ NSFontAttributeName : font };
        
        //计算显示文字所需的大小( IOS7 以及7以后的版本)
        //参数1 : 显示文字的约束区域
        //参数2 : 描绘选项 填 NSStringDrawingUsesLineFragmentOrigin
        //参数3 : 包含字体键值对的字典
        //参数4 : 描绘上下文  填 nil
        return  [self boundingRectWithSize:size options:options attributes:dict context:context].size;
    }

}
@end
