//
//  MGPassThroughDataSource.h
//  Mytograph
//
//  Created by Adam Iredale on 22/01/2015.
//  Copyright (c) 2015 Bionic Monocle Pty Ltd. All rights reserved.
//

/**
 *  This is a datasource do-nothing adapter, which implements the same
 *  interfaces as the datasource it wraps (and possibly others). The
 *  intention behind this is to provide a superclass for a bunch of
 *  boilerplate when creating datasources that transform datasources.
 */

@interface MGPassThroughDataSource : NSObject <MGChangingDataSource, MGDataSourceChangeListener>

- (instancetype)initWithDataSource:(id <MGDataSource>)dataSource NS_DESIGNATED_INITIALIZER;

+ (instancetype)dataSourceWithDataSource:(id <MGDataSource>)dataSource;

@end

@interface MGPassThroughDataSource (ReadOnly)

@property (nonatomic, readonly) id <MGDataSource> dataSource;

@end