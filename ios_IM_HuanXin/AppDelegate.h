//
//  AppDelegate.h
//  ios_IM_HuanXin
//
//  Created by 马淑栋 on 2021/3/22.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

