#import "HelloWorld.h"

@implementation HelloWorld
- (NSString *)hello:(NSString *) name {
    if(name != nil) {
        return [NSString stringWithFormat: @"Hello, %@!", name];
    } else {
        return @"Hello, World!";
    }
}
@end