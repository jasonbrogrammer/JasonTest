//
//  DetailViewController.h
//  JasonTest
//
//  Created by Jason Chang on 6/3/13.
//  Copyright (c) 2013 Jason Chang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
