// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AndroidPermission
// Functions: 2

// StartupModule @ 14f00be20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAndroidPermissionModule::StartupModule(FAndroidPermissionModule *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAndroidPermissionCallbackProxy *pUVar3;
  FUObjectItem *this_00;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (pProxy == (UAndroidPermissionCallbackProxy *)0x0) {
    pUVar1 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UAndroidPermissionCallbackProxy::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_98,pUVar2);
    auStack_98._8_8_ = pUVar1;
    pUVar3 = (UAndroidPermissionCallbackProxy *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
    if (auStack_98._64_8_ != 0) {
      plVar4 = (longlong *)(auStack_98 + 0x50);
      if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)auStack_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    pProxy = pUVar3;
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_00,RootSet);
  }
  if (4 < (byte)LogAndroidPermission._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAndroidPermission);
  }
  return;
}

// ShutdownModule @ 14f00be30

void __thiscall FAndroidPermissionModule::ShutdownModule(FAndroidPermissionModule *this)

{
  return;
}

