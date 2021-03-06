//
//  CDStyle+CoreDataProperties.h
//  Track
//
//  Created by wufei on 15/11/22.
//  Copyright © 2015年 Wuffy. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "CDStyle.h"

NS_ASSUME_NONNULL_BEGIN

@interface CDStyle (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *iconUrl;
@property (nullable, nonatomic, retain) NSString *lineColor;
@property (nonatomic) float scale;
@property (nullable, nonatomic, retain) NSString *sid;

@end

NS_ASSUME_NONNULL_END
