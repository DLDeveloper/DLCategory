//
//  NSString+Bundle.h
//  DLCategory
//
//  Created by 张德龙 on 15/7/17.
//  Copyright (c) 2015年 zhangdelong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Bundle)
/**
 *  根据main bundle 读取文件内容
 *
 *  @param fileName 文件名
 *
 *  @return 文件内容
 */
+ (NSString *)stringFromMainBundleWithFilename:(NSString *)fileName;

@end
