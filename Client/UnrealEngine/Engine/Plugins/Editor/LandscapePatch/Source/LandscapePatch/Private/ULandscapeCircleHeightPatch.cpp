// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LandscapePatch
// Functions: 9

// StaticClass @ 14db0b250

UClass * __cdecl ULandscapeCircleHeightPatch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeCircleHeightPatch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapeCircleHeightPatch",
               &Z_Registration_Info_UClass_ULandscapeCircleHeightPatch.InnerSingleton,
               StaticRegisterNativesULandscapeCircleHeightPatch,0x2c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeCircleHeightPatch>,
               InternalVTableHelperCtorCaller<ULandscapeCircleHeightPatch>,local_res8,
               ULandscapePatchComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeCircleHeightPatch.InnerSingleton;
}

// ULandscapeCircleHeightPatch @ 14db12c80

ULandscapeCircleHeightPatch * __thiscall
ULandscapeCircleHeightPatch::ULandscapeCircleHeightPatch
          (ULandscapeCircleHeightPatch *this,FVTableHelper *param_1)

{
  ULandscapePatchComponent::ULandscapePatchComponent((ULandscapePatchComponent *)this,param_1);
  this->Radius = 500.0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7ULandscapeCircleHeightPatch__6B_;
  this->Falloff = 500.0;
  this->bEditVisibility = false;
  this->bExclusiveRadius = false;
  return this;
}

// ULandscapeCircleHeightPatch @ 14db12cf0

ULandscapeCircleHeightPatch * __thiscall
ULandscapeCircleHeightPatch::ULandscapeCircleHeightPatch
          (ULandscapeCircleHeightPatch *this,FObjectInitializer *param_1)

{
  ULandscapePatchComponent::ULandscapePatchComponent((ULandscapePatchComponent *)this,param_1);
  this->Radius = 500.0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7ULandscapeCircleHeightPatch__6B_;
  this->Falloff = 500.0;
  this->bEditVisibility = false;
  this->bExclusiveRadius = false;
  return this;
}

// ~ULandscapeCircleHeightPatch @ 14db13470

void __thiscall
ULandscapeCircleHeightPatch::~ULandscapeCircleHeightPatch(ULandscapeCircleHeightPatch *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7ULandscapeCircleHeightPatch__6B_;
  ULandscapePatchComponent::~ULandscapePatchComponent((ULandscapePatchComponent *)this);
  return;
}

// CanAffectHeightmap @ 14db154e0

bool __thiscall ULandscapeCircleHeightPatch::CanAffectHeightmap(ULandscapeCircleHeightPatch *this)

{
  return this->bEditVisibility == false;
}

// CanAffectVisibilityLayer @ 14db15510

bool __thiscall
ULandscapeCircleHeightPatch::CanAffectVisibilityLayer(ULandscapeCircleHeightPatch *this)

{
  return this->bEditVisibility;
}

// GetPrivateStaticClass @ 14db18cb0

UClass * __cdecl ULandscapeCircleHeightPatch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeCircleHeightPatch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapeCircleHeightPatch",
               &Z_Registration_Info_UClass_ULandscapeCircleHeightPatch.InnerSingleton,
               StaticRegisterNativesULandscapeCircleHeightPatch,0x2c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeCircleHeightPatch>,
               InternalVTableHelperCtorCaller<ULandscapeCircleHeightPatch>,local_res8,
               ULandscapePatchComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeCircleHeightPatch.InnerSingleton;
}

// OnComponentCreated @ 14db1bad0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULandscapeCircleHeightPatch::OnComponentCreated(ULandscapeCircleHeightPatch *this)

{
  AActor *pAVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double local_58;
  double dStack_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  TVector<double>_u_0 local_28;
  
  UActorComponent::OnComponentCreated((UActorComponent *)this);
  if (this->field_0x2a1 == '\0') {
    pAVar1 = USceneComponent::GetAttachParentActor((USceneComponent *)this);
    if (pAVar1 != (AActor *)0x0) {
      pAVar1 = USceneComponent::GetAttachParentActor((USceneComponent *)this);
      (**(code **)(pAVar1->_padding_ + 0x358))(pAVar1,0,&local_58,&local_40,0);
      local_48 = local_48 - local_30;
      local_28._s_0.X = local_58;
      local_28._s_0.Y = dStack_50;
      local_28._s_0.Z = local_48;
      USceneComponent::SetWorldLocation
                ((USceneComponent *)this,(TVector<double> *)&local_28._s_0,false,(FHitResult *)0x0,
                 None);
      auVar2._0_8_ = local_40 * local_40;
      auVar2._8_8_ = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_38 * local_38 + auVar2._0_8_;
      auVar3 = sqrtpd(auVar2,auVar3);
      this->Radius = (float)auVar3._0_8_;
      this->Falloff = (float)auVar3._0_8_ * __real_3f000000;
    }
  }
  return;
}

// StaticRegisterNativesULandscapeCircleHeightPatch @ 14db1d4e0

void __cdecl ULandscapeCircleHeightPatch::StaticRegisterNativesULandscapeCircleHeightPatch(void)

{
  return;
}

