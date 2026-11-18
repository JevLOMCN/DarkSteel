// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 14773a110

UClass * __cdecl UBoundsCopyComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoundsCopyComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BoundsCopyComponent",
               &Z_Registration_Info_UClass_UBoundsCopyComponent.InnerSingleton,
               StaticRegisterNativesUBoundsCopyComponent,0x160,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UBoundsCopyComponent>,
               InternalVTableHelperCtorCaller<UBoundsCopyComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoundsCopyComponent.InnerSingleton;
}

// UBoundsCopyComponent @ 1477ef690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UBoundsCopyComponent * __thiscall
UBoundsCopyComponent::UBoundsCopyComponent(UBoundsCopyComponent *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this_00 = &(this->BoundsSourceActor).SoftObjectPtr.field_0x18;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->BoundsSourceActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->BoundsSourceActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->BoundsSourceActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->BoundsSourceActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->BoundsSourceActor).SoftObjectPtr,(FObjectPtr)&local_res8);
  this->bUseCollidingComponentsForSourceBounds = false;
  this->bKeepOwnBoundsScale = false;
  this->bUseCollidingComponentsForOwnBounds = false;
  *&(this->PostTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->PostTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->PostTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->PostTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->PostTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->PostTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->bCopyXBounds = true;
  this->bCopyYBounds = true;
  this->bCopyZBounds = true;
  return this;
}

// UBoundsCopyComponent @ 1477ef7a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UBoundsCopyComponent * __thiscall
UBoundsCopyComponent::UBoundsCopyComponent(UBoundsCopyComponent *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  __m128d _Var1;
  undefined8 local_res8;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this_00 = &(this->BoundsSourceActor).SoftObjectPtr.field_0x18;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->BoundsSourceActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->BoundsSourceActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->BoundsSourceActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->BoundsSourceActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->BoundsSourceActor).SoftObjectPtr,(FObjectPtr)&local_res8);
  this->bUseCollidingComponentsForSourceBounds = false;
  this->bKeepOwnBoundsScale = false;
  this->bUseCollidingComponentsForOwnBounds = false;
  *&(this->PostTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->PostTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->PostTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->PostTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->PostTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  this->field_0x9b = this->field_0x9b | 2;
  *&(this->PostTransform).Scale3D.ZW.m128d_f64 = _Var1.m128d_f64;
  this->bCopyXBounds = true;
  this->bCopyYBounds = true;
  this->bCopyZBounds = true;
  return this;
}

// ~UBoundsCopyComponent @ 1477f44e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UBoundsCopyComponent::~UBoundsCopyComponent(UBoundsCopyComponent *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->BoundsSourceActor).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14783c1a0

UClass * __cdecl UBoundsCopyComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoundsCopyComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BoundsCopyComponent",
               &Z_Registration_Info_UClass_UBoundsCopyComponent.InnerSingleton,
               StaticRegisterNativesUBoundsCopyComponent,0x160,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UBoundsCopyComponent>,
               InternalVTableHelperCtorCaller<UBoundsCopyComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoundsCopyComponent.InnerSingleton;
}

// IsEditorOnly @ 1478403d0

bool __thiscall UBoundsCopyComponent::IsEditorOnly(UBoundsCopyComponent *this)

{
  return true;
}

// StaticRegisterNativesUBoundsCopyComponent @ 1478759a0

void __cdecl UBoundsCopyComponent::StaticRegisterNativesUBoundsCopyComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

