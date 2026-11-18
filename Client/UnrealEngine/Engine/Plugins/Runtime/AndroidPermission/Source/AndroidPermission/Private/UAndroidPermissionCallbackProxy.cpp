// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AndroidPermission
// Functions: 7

// StaticClass @ 14f00bff0

UClass * __cdecl UAndroidPermissionCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAndroidPermissionCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AndroidPermission",L"AndroidPermissionCallbackProxy",
               &Z_Registration_Info_UClass_UAndroidPermissionCallbackProxy.InnerSingleton,
               StaticRegisterNativesUAndroidPermissionCallbackProxy,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAndroidPermissionCallbackProxy>,
               InternalVTableHelperCtorCaller<UAndroidPermissionCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAndroidPermissionCallbackProxy.InnerSingleton;
}

// UAndroidPermissionCallbackProxy @ 14f00c460

UAndroidPermissionCallbackProxy * __thiscall
UAndroidPermissionCallbackProxy::UAndroidPermissionCallbackProxy
          (UAndroidPermissionCallbackProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAndroidPermissionCallbackProxy__6B_;
  *(undefined8 *)&this->OnPermissionsGrantedDynamicDelegate = 0;
  *(undefined8 *)&(this->OnPermissionsGrantedDynamicDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPermissionsGrantedDynamicDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPermissionsGrantedDelegate = 0;
  *(undefined8 *)&(this->OnPermissionsGrantedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPermissionsGrantedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnPermissionsGrantedDelegate).field_0x18 = 2;
  return this;
}

// UAndroidPermissionCallbackProxy @ 14f00c4b0

UAndroidPermissionCallbackProxy * __thiscall
UAndroidPermissionCallbackProxy::UAndroidPermissionCallbackProxy
          (UAndroidPermissionCallbackProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAndroidPermissionCallbackProxy__6B_;
  *(undefined8 *)&this->OnPermissionsGrantedDynamicDelegate = 0;
  *(undefined8 *)&(this->OnPermissionsGrantedDynamicDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPermissionsGrantedDynamicDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPermissionsGrantedDelegate = 0;
  *(undefined8 *)&(this->OnPermissionsGrantedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPermissionsGrantedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnPermissionsGrantedDelegate).field_0x18 = 2;
  return this;
}

// ~UAndroidPermissionCallbackProxy @ 14f00c560

void __thiscall
UAndroidPermissionCallbackProxy::~UAndroidPermissionCallbackProxy
          (UAndroidPermissionCallbackProxy *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAndroidPermissionCallbackProxy__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPermissionsGrantedDelegate).field_0x8,
             *(int *)&(this->OnPermissionsGrantedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnPermissionsGrantedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPermissionsGrantedDelegate);
  pvVar1 = *(void **)&(this->OnPermissionsGrantedDynamicDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPermissionsGrantedDynamicDelegate);
  UObject::~UObject((UObject *)this);
  return;
}

// GetInstance @ 14f00c9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UAndroidPermissionCallbackProxy * __cdecl UAndroidPermissionCallbackProxy::GetInstance(void)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAndroidPermissionCallbackProxy *pUVar3;
  FUObjectItem *this;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (pProxy == (UAndroidPermissionCallbackProxy *)0x0) {
    pUVar1 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._8_8_ = pUVar1;
    pUVar3 = (UAndroidPermissionCallbackProxy *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    pProxy = pUVar3;
    this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
    FUObjectItem::SetRootFlags(this,RootSet);
  }
  if (4 < (byte)LogAndroidPermission._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAndroidPermission);
  }
  return pProxy;
}

// GetPrivateStaticClass @ 14f00caf0

UClass * __cdecl UAndroidPermissionCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAndroidPermissionCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AndroidPermission",L"AndroidPermissionCallbackProxy",
               &Z_Registration_Info_UClass_UAndroidPermissionCallbackProxy.InnerSingleton,
               StaticRegisterNativesUAndroidPermissionCallbackProxy,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAndroidPermissionCallbackProxy>,
               InternalVTableHelperCtorCaller<UAndroidPermissionCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAndroidPermissionCallbackProxy.InnerSingleton;
}

// StaticRegisterNativesUAndroidPermissionCallbackProxy @ 14f00cca0

void __cdecl
UAndroidPermissionCallbackProxy::StaticRegisterNativesUAndroidPermissionCallbackProxy(void)

{
  return;
}

