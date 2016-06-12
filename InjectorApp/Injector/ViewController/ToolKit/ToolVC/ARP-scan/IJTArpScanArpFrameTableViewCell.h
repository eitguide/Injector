//
//  IJTArpFrameTableViewCell.h
//  Injector
//
//  Created by 聲華 陳 on 2015/7/23.
//  Copyright (c) 2015年 Qbsuran Alang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IJTArpScanArpFrameTableViewCell : UITableViewCell


@property (weak, nonatomic) IBOutlet UILabel *timeLabel;
@property (weak, nonatomic) IBOutlet UILabel *ipAddressLabel;
@property (weak, nonatomic) IBOutlet UILabel *macAddressLabel;

@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *labels;

@end
