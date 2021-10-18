//
//  AppDelegate.h
//  zadanieios
//
//  Created by student on 06/10/2021.
//  Copyright © 2021 PB WI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

