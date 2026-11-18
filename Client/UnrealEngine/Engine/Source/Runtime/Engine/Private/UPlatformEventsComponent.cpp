// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 14788e860

UClass * __cdecl UPlatformEventsComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlatformEventsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlatformEventsComponent",
               &Z_Registration_Info_UClass_UPlatformEventsComponent.InnerSingleton,
               StaticRegisterNativesUPlatformEventsComponent,0xf0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPlatformEventsComponent>,
               InternalVTableHelperCtorCaller<UPlatformEventsComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlatformEventsComponent.InnerSingleton;
}

// UPlatformEventsComponent @ 1478aa880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPlatformEventsComponent * __thiscall
UPlatformEventsComponent::UPlatformEventsComponent
          (UPlatformEventsComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->PlatformChangedToLaptopModeDelegate = 0;
  *(undefined8 *)&(this->PlatformChangedToLaptopModeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformChangedToLaptopModeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->PlatformChangedToTabletModeDelegate = 0;
  *(undefined8 *)&(this->PlatformChangedToTabletModeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformChangedToTabletModeDelegate).field_0x10 = 0;
  return this;
}

// UPlatformEventsComponent @ 1478aa8f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPlatformEventsComponent * __thiscall
UPlatformEventsComponent::UPlatformEventsComponent
          (UPlatformEventsComponent *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->PlatformChangedToLaptopModeDelegate = 0;
  *(undefined8 *)&(this->PlatformChangedToLaptopModeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformChangedToLaptopModeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->PlatformChangedToTabletModeDelegate = 0;
  *(undefined8 *)&(this->PlatformChangedToTabletModeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformChangedToTabletModeDelegate).field_0x10 = 0;
  return this;
}

// ~UPlatformEventsComponent @ 1478ac500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPlatformEventsComponent::~UPlatformEventsComponent(UPlatformEventsComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->PlatformChangedToTabletModeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PlatformChangedToTabletModeDelegate);
  pvVar1 = *(void **)&(this->PlatformChangedToLaptopModeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PlatformChangedToLaptopModeDelegate);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// FPlatformEventDelegate_DelegateWrapper @ 1478cd410

void __cdecl
UPlatformEventsComponent::FPlatformEventDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// GetPrivateStaticClass @ 1478d9e30

UClass * __cdecl UPlatformEventsComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlatformEventsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlatformEventsComponent",
               &Z_Registration_Info_UClass_UPlatformEventsComponent.InnerSingleton,
               StaticRegisterNativesUPlatformEventsComponent,0xf0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPlatformEventsComponent>,
               InternalVTableHelperCtorCaller<UPlatformEventsComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlatformEventsComponent.InnerSingleton;
}

// HandlePlatformChangedLaptopMode @ 1478df390

void __thiscall
UPlatformEventsComponent::HandlePlatformChangedLaptopMode
          (UPlatformEventsComponent *this,EConvertibleLaptopMode param_1)

{
  if (param_1 == Laptop) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->PlatformChangedToLaptopModeDelegate,(void *)0x0);
    return;
  }
  if (param_1 == Tablet) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->PlatformChangedToTabletModeDelegate,(void *)0x0);
    return;
  }
  return;
}

// IsInLaptopMode @ 1478e1220

bool __thiscall UPlatformEventsComponent::IsInLaptopMode(UPlatformEventsComponent *this)

{
  EConvertibleLaptopMode EVar1;
  
  EVar1 = FWindowsPlatformMisc::GetConvertibleLaptopMode();
  return EVar1 == Laptop;
}

// IsInTabletMode @ 1478e1240

bool __thiscall UPlatformEventsComponent::IsInTabletMode(UPlatformEventsComponent *this)

{
  EConvertibleLaptopMode EVar1;
  
  EVar1 = FWindowsPlatformMisc::GetConvertibleLaptopMode();
  return EVar1 == Tablet;
}

// OnRegister @ 1478e6120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPlatformEventsComponent::OnRegister(UPlatformEventsComponent *this)

{
  UActorComponent::OnRegister((UActorComponent *)this);
  TMulticastDelegateRegistration<void___cdecl(enum_EConvertibleLaptopMode),FDefaultDelegateUserPolicy>
  ::AddUObject<UPlatformEventsComponent>
            (&FCoreDelegates::PlatformChangedLaptopMode,(UPlatformEventsComponent *)&stack0x00000010
             ,(pmf_43dcc25b *)this);
  return;
}

// OnUnregister @ 1478e6540

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPlatformEventsComponent::OnUnregister(UPlatformEventsComponent *this)

{
  UActorComponent::OnUnregister((UActorComponent *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::PlatformChangedLaptopMode,this);
  return;
}

// StaticRegisterNativesUPlatformEventsComponent @ 1478f8230

void __cdecl UPlatformEventsComponent::StaticRegisterNativesUPlatformEventsComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UPlatformEventsComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsConvertibleLaptops @ 1478f85f0

bool __thiscall UPlatformEventsComponent::SupportsConvertibleLaptops(UPlatformEventsComponent *this)

{
  EConvertibleLaptopMode EVar1;
  
  EVar1 = FWindowsPlatformMisc::GetConvertibleLaptopMode();
  return EVar1 != NotSupported;
}

// execIsInLaptopMode @ 147905820

void __cdecl
UPlatformEventsComponent::execIsInLaptopMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  EConvertibleLaptopMode EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = FWindowsPlatformMisc::GetConvertibleLaptopMode();
  *(bool *)param_3 = EVar1 == Laptop;
  return;
}

// execIsInTabletMode @ 147905860

void __cdecl
UPlatformEventsComponent::execIsInTabletMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  EConvertibleLaptopMode EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = FWindowsPlatformMisc::GetConvertibleLaptopMode();
  *(bool *)param_3 = EVar1 == Tablet;
  return;
}

// execSupportsConvertibleLaptops @ 147913e80

void __cdecl
UPlatformEventsComponent::execSupportsConvertibleLaptops
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  EConvertibleLaptopMode EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = FWindowsPlatformMisc::GetConvertibleLaptopMode();
  *(bool *)param_3 = EVar1 != NotSupported;
  return;
}

