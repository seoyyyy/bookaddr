//
//  AppDelegate.h
//  SignUpScreen
//
//  Created by 김서영 on 2020/08/30.
//  Copyright © 2020 김서영. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentCloudKitContainer *persistentContainer;

- (void)saveContext;


@end

