//
//  Autor.h
//  Libros
//
//  Created by iMac 9 on 17/03/14.
//  Copyright (c) 2014 javi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Libro;

@interface Autor : NSManagedObject

@property (nonatomic, retain) NSString * libros;
@property (nonatomic, retain) Libro *nombre;


@end
