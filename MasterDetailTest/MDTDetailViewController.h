//
//  MDTDetailViewController.h
//  MasterDetailTest
//
//  Created by David Bernard on 4/08/2014.
//  Copyright (c) 2014 David Bernard. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MDTDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
