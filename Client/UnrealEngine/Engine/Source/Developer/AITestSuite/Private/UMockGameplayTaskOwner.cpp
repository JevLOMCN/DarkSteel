// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 9

// StaticClass @ 146ff7150

UClass * __cdecl UMockGameplayTaskOwner::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockGameplayTaskOwner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"MockGameplayTaskOwner",
               &Z_Registration_Info_UClass_UMockGameplayTaskOwner.InnerSingleton,
               StaticRegisterNativesUMockGameplayTaskOwner,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockGameplayTaskOwner>,
               InternalVTableHelperCtorCaller<UMockGameplayTaskOwner>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockGameplayTaskOwner.InnerSingleton;
}

// UMockGameplayTaskOwner @ 14704a3b0

UMockGameplayTaskOwner * __thiscall
UMockGameplayTaskOwner::UMockGameplayTaskOwner(UMockGameplayTaskOwner *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->GTComponent).field0_0x0.DebugPtr = (UGameplayTasksComponent *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UMockGameplayTaskOwner @ 14704a3f0

UMockGameplayTaskOwner * __thiscall
UMockGameplayTaskOwner::UMockGameplayTaskOwner
          (UMockGameplayTaskOwner *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->GTComponent).field0_0x0.DebugPtr = (UGameplayTasksComponent *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UMockGameplayTaskOwner @ 14704b910

void __thiscall UMockGameplayTaskOwner::~UMockGameplayTaskOwner(UMockGameplayTaskOwner *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetGameplayTaskOwner @ 1470522b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall
UMockGameplayTaskOwner::GetGameplayTaskOwner(UMockGameplayTaskOwner *this,UGameplayTask *param_1)

{
  return (AActor *)0x0;
}

// GetGameplayTasksComponent @ 1470522c0

UGameplayTasksComponent * __thiscall
UMockGameplayTaskOwner::GetGameplayTasksComponent
          (UMockGameplayTaskOwner *this,UGameplayTask *param_1)

{
  return (UGameplayTasksComponent *)this->_padding_;
}

// GetPrivateStaticClass @ 1470524c0

UClass * __cdecl UMockGameplayTaskOwner::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockGameplayTaskOwner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"MockGameplayTaskOwner",
               &Z_Registration_Info_UClass_UMockGameplayTaskOwner.InnerSingleton,
               StaticRegisterNativesUMockGameplayTaskOwner,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMockGameplayTaskOwner>,
               InternalVTableHelperCtorCaller<UMockGameplayTaskOwner>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockGameplayTaskOwner.InnerSingleton;
}

// StaticRegisterNativesUMockGameplayTaskOwner @ 147059920

void __cdecl UMockGameplayTaskOwner::StaticRegisterNativesUMockGameplayTaskOwner(void)

{
  return;
}

// _getUObject @ 14705c760

UObject * __thiscall UMockGameplayTaskOwner::_getUObject(UMockGameplayTaskOwner *this)

{
  return (UObject *)&this[-1]._padding_;
}

