//
//  DetailViewController.h
//  b
//
//  Created by Humed Habib on 2014-11-09.
//  Copyright (c) 2014 Humed Habib. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

