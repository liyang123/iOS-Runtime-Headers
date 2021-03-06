/* Generated by RuntimeBrowser.
 */

@protocol ICLegacyAccount <NSObject>

@required

- (NSString *)accountIdentifier;
- (<ICLegacyFolder> *)defaultFolder;
- (NSString *)emailAddress;
- (NSSet *)folders;
- (NSManagedObjectContext *)managedObjectContext;
- (NSString *)name;
- (NSManagedObjectID *)objectID;
- (NSString *)objectIdentifier;
- (BOOL)supportsAttachments;

@end
