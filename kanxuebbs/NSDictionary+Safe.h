//
//  NSDictionary+Safe.h
//
//  Created by sgl on 13-1-11.
//  Copyright (c) 2013年 sgl. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (Safe)
- (id)objectForKeyNotNull:(id)key;
@end
