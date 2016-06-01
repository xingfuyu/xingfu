//
//  DetailViewController.h
//  wiki
//
//  Created by 天蓝 on 16/6/1.
//  Copyright © 2016年 xingfuyu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

