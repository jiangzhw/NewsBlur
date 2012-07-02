//
//  SocialBadge.h
//  NewsBlur
//
//  Created by Roy Yang on 7/2/12.
//  Copyright (c) 2012 NewsBlur. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NewsBlurAppDelegate.h"

@class NewsBlurAppDelegate;

@interface SocialBadge : UIView {
    NewsBlurAppDelegate *appDelegate;
    
    UIImageView *UserAvatar;
    UILabel *username;
    UILabel *userLocation;
    UILabel *userDescription;
    UILabel *userStats;
    UIButton *followButton;
}

@property (nonatomic, retain) NewsBlurAppDelegate *appDelegate;
@property (retain, nonatomic) UIImageView *userAvatar;
@property (retain, nonatomic) UILabel *username;
@property (retain, nonatomic) UILabel *userLocation;
@property (retain, nonatomic) UILabel *userDescription;
@property (retain, nonatomic) UILabel *userStats;
@property (retain, nonatomic) UIButton *followButton;

@end
