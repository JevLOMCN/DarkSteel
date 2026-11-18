// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1482ceca0

UClass * __cdecl UNetworkPhysicsSettingsDataAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkPhysicsSettingsDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkPhysicsSettingsDataAsset",
               &Z_Registration_Info_UClass_UNetworkPhysicsSettingsDataAsset.InnerSingleton,
               StaticRegisterNativesUNetworkPhysicsSettingsDataAsset,400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetworkPhysicsSettingsDataAsset>,
               InternalVTableHelperCtorCaller<UNetworkPhysicsSettingsDataAsset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkPhysicsSettingsDataAsset.InnerSingleton;
}

// UNetworkPhysicsSettingsDataAsset @ 1482db4c0

UNetworkPhysicsSettingsDataAsset * __thiscall
UNetworkPhysicsSettingsDataAsset::UNetworkPhysicsSettingsDataAsset
          (UNetworkPhysicsSettingsDataAsset *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->bInitialized = false;
  this->_padding_ = (longlong)&___7UNetworkPhysicsSettingsDataAsset__6B_;
  FNetworkPhysicsSettingsData::FNetworkPhysicsSettingsData(&this->Settings);
  (this->Settings_Internal).Object = (FNetworkPhysicsSettingsData *)0x0;
  (this->Settings_Internal).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UNetworkPhysicsSettingsDataAsset @ 1482db510

UNetworkPhysicsSettingsDataAsset * __thiscall
UNetworkPhysicsSettingsDataAsset::UNetworkPhysicsSettingsDataAsset
          (UNetworkPhysicsSettingsDataAsset *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->bInitialized = false;
  this->_padding_ = (longlong)&___7UNetworkPhysicsSettingsDataAsset__6B_;
  FNetworkPhysicsSettingsData::FNetworkPhysicsSettingsData(&this->Settings);
  (this->Settings_Internal).Object = (FNetworkPhysicsSettingsData *)0x0;
  (this->Settings_Internal).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UNetworkPhysicsSettingsDataAsset @ 1482ddf20

void __thiscall
UNetworkPhysicsSettingsDataAsset::~UNetworkPhysicsSettingsDataAsset
          (UNetworkPhysicsSettingsDataAsset *this)

{
  this->_padding_ = (longlong)&___7UNetworkPhysicsSettingsDataAsset__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Settings_Internal).SharedReferenceCount.ReferenceController);
  FNetworkPhysicsSettingsData::~FNetworkPhysicsSettingsData(&this->Settings);
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14830c080

UClass * __cdecl UNetworkPhysicsSettingsDataAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkPhysicsSettingsDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkPhysicsSettingsDataAsset",
               &Z_Registration_Info_UClass_UNetworkPhysicsSettingsDataAsset.InnerSingleton,
               StaticRegisterNativesUNetworkPhysicsSettingsDataAsset,400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetworkPhysicsSettingsDataAsset>,
               InternalVTableHelperCtorCaller<UNetworkPhysicsSettingsDataAsset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkPhysicsSettingsDataAsset.InnerSingleton;
}

// PostInitProperties @ 148317d90

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNetworkPhysicsSettingsDataAsset::PostInitProperties(UNetworkPhysicsSettingsDataAsset *this)

{
  FRuntimeFloatCurve *this_00;
  FRichCurve *pFVar1;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle local_res8 [4];
  uint in_stack_ffffffffffffffe8;
  FKeyHandle FVar2;
  
  UObject::PostInitProperties((UObject *)this);
  if (((this->_padding_ & 0x10) == 0) &&
     (this_00 = &(this->Settings).NetworkPhysicsComponentSettings.InputDecayCurve,
     (this->Settings).NetworkPhysicsComponentSettings.InputDecayCurve.EditorCurveData.Keys.ArrayNum
     == 0)) {
    pFVar1 = FRuntimeFloatCurve::GetRichCurve(this_00);
    FKeyHandle::FKeyHandle(local_res8);
    FVar2.Index = in_stack_ffffffffffffffe8 & 0xffffff00;
    FRichCurve::AddKey(pFVar1,in_XMM1_Da,0.0,(bool)in_R9B,FVar2);
    pFVar1 = FRuntimeFloatCurve::GetRichCurve(this_00);
    FKeyHandle::FKeyHandle(local_res8);
    FVar2.Index = FVar2.Index & 0xffffff00;
    FRichCurve::AddKey(pFVar1,in_XMM1_Da,__real_3f000000,(bool)in_R9B,FVar2);
    pFVar1 = FRuntimeFloatCurve::GetRichCurve(this_00);
    FKeyHandle::FKeyHandle(local_res8);
    FRichCurve::AddKey(pFVar1,in_XMM1_Da,__real_3f800000,(bool)in_R9B,
                       (FKeyHandle)(FVar2.Index & 0xffffff00));
  }
  return;
}

// StaticRegisterNativesUNetworkPhysicsSettingsDataAsset @ 148323a80

void __cdecl
UNetworkPhysicsSettingsDataAsset::StaticRegisterNativesUNetworkPhysicsSettingsDataAsset(void)

{
  return;
}

