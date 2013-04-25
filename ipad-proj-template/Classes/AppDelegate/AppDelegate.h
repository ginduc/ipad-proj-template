//
//  AppDelegate.h
//  ipad-proj-template
//
//  http://akosma.com/2009/07/28/code-organization-in-xcode-projects/
//
//  Created by Giancarlo Inductivo on 4/25/13.
//  Copyright (c) 2013 DYNOBJX. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
