//
//  NSString+Bundle.m
//  DLCategory
//
//  Created by 张德龙 on 15/7/17.
//  Copyright (c) 2015年 zhangdelong. All rights reserved.
//

#import "NSString+Bundle.h"

@implementation NSString (Bundle)

+ (NSString *)stringFromMainBundleWithFilename:(NSString *)fileName
{
    NSString *filePath = [[NSBundle mainBundle] pathForResource:fileName ofType:nil];
    NSString *content = [NSString stringWithContentsOfFile:filePath encoding:NSUTF8StringEncoding error:nil];
    
    return content;
}
@end
