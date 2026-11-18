// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 8

// StaticClass @ 14a76d200

UClass * __cdecl UCommonInputActionDomain::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputActionDomain.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputActionDomain",
               &Z_Registration_Info_UClass_UCommonInputActionDomain.InnerSingleton,
               StaticRegisterNativesUCommonInputActionDomain,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonInputActionDomain>,
               InternalVTableHelperCtorCaller<UCommonInputActionDomain>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputActionDomain.InnerSingleton;
}

// UCommonInputActionDomain @ 14a771940

UCommonInputActionDomain * __thiscall
UCommonInputActionDomain::UCommonInputActionDomain
          (UCommonInputActionDomain *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->Behavior = BlockIfActive;
  this->_padding_ = (longlong)&___7UCommonInputActionDomain__6B_;
  this->InnerBehavior = BlockIfHandled;
  this->InputMode = Game;
  this->MouseCaptureMode = CapturePermanently;
  return this;
}

// UCommonInputActionDomain @ 14a771980

UCommonInputActionDomain * __thiscall
UCommonInputActionDomain::UCommonInputActionDomain
          (UCommonInputActionDomain *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->Behavior = BlockIfActive;
  this->_padding_ = (longlong)&___7UCommonInputActionDomain__6B_;
  this->InnerBehavior = BlockIfHandled;
  this->InputMode = Game;
  this->MouseCaptureMode = CapturePermanently;
  return this;
}

// ~UCommonInputActionDomain @ 14a7724c0

void __thiscall UCommonInputActionDomain::~UCommonInputActionDomain(UCommonInputActionDomain *this)

{
  this->_padding_ = (longlong)&___7UCommonInputActionDomain__6B_;
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14a775b60

UClass * __cdecl UCommonInputActionDomain::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputActionDomain.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputActionDomain",
               &Z_Registration_Info_UClass_UCommonInputActionDomain.InnerSingleton,
               StaticRegisterNativesUCommonInputActionDomain,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonInputActionDomain>,
               InternalVTableHelperCtorCaller<UCommonInputActionDomain>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputActionDomain.InnerSingleton;
}

// ShouldBreakEventFlow @ 14a778f80

bool __thiscall
UCommonInputActionDomain::ShouldBreakEventFlow
          (UCommonInputActionDomain *this,bool param_1,bool param_2)

{
  if (this->Behavior == BlockIfActive) {
    return param_1;
  }
  if (this->Behavior != BlockIfHandled) {
    return false;
  }
  return param_2;
}

// ShouldBreakInnerEventFlow @ 14a778fb0

bool __thiscall
UCommonInputActionDomain::ShouldBreakInnerEventFlow(UCommonInputActionDomain *this,bool param_1)

{
  if (this->InnerBehavior == BlockIfActive) {
    return true;
  }
  if (this->InnerBehavior != BlockIfHandled) {
    return false;
  }
  return param_1;
}

// StaticRegisterNativesUCommonInputActionDomain @ 14a7791b0

void __cdecl UCommonInputActionDomain::StaticRegisterNativesUCommonInputActionDomain(void)

{
  return;
}

