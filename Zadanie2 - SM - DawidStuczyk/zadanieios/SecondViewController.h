//
//  SecondViewController.h
//  zadanieios
//
//  Created by student on 13/10/2021.
//  Copyright © 2021 PB WI. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SecondViewController;

@protocol SecondViewControllerDelegate <NSObject>

- (void) addItemViewController:(SecondViewController *) controller didFinishEnteringItem: (NSString *) item;

@end

@interface SecondViewController : UIViewController

@property (nonatomic, weak) IBOutlet UITextField *modifiedSurnameTextField;

@property (nonatomic, weak) NSString *surname;

@property (nonatomic, weak) id <SecondViewControllerDelegate> delegate;


@end

NS_ASSUME_NONNULL_END
