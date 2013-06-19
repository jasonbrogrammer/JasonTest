//
//  JasonTemp.h
//  JasonTest
//
//  Created by Jason Chang on 6/14/13.
//  Copyright (c) 2013 Jason Chang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JasonTemp : NSObject
{
}

// assign pass by reference
// copy pass by value



@property (nonatomic,assign) CGPoint position;

-(id)initWithString:(NSString*)s;

-(void)intiHelper:(NSString*)s;


@end
