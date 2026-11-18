// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b5477d0

UClass * __cdecl UDS_NpcTalkCameraComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcTalkCameraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcTalkCameraComponent",
               &Z_Registration_Info_UClass_UDS_NpcTalkCameraComponent.InnerSingleton,
               StaticRegisterNativesUDS_NpcTalkCameraComponent,0xad0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NpcTalkCameraComponent>,
               InternalVTableHelperCtorCaller<UDS_NpcTalkCameraComponent>,local_res8,
               UDS_CameraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcTalkCameraComponent.InnerSingleton;
}

// UDS_NpcTalkCameraComponent @ 14b54afd0

UDS_NpcTalkCameraComponent * __thiscall
UDS_NpcTalkCameraComponent::UDS_NpcTalkCameraComponent
          (UDS_NpcTalkCameraComponent *this,FVTableHelper *param_1)

{
  UDS_CameraComponent::UDS_CameraComponent((UDS_CameraComponent *)this,param_1);
  this->NpcTalkCameraTableID = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UDS_NpcTalkCameraComponent @ 14b54b930

void __thiscall
UDS_NpcTalkCameraComponent::~UDS_NpcTalkCameraComponent(UDS_NpcTalkCameraComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  UDS_CameraComponent::~UDS_CameraComponent((UDS_CameraComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b54d030

UClass * __cdecl UDS_NpcTalkCameraComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcTalkCameraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcTalkCameraComponent",
               &Z_Registration_Info_UClass_UDS_NpcTalkCameraComponent.InnerSingleton,
               StaticRegisterNativesUDS_NpcTalkCameraComponent,0xad0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NpcTalkCameraComponent>,
               InternalVTableHelperCtorCaller<UDS_NpcTalkCameraComponent>,local_res8,
               UDS_CameraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcTalkCameraComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcTalkCameraComponent @ 14b54d7f0

void __cdecl UDS_NpcTalkCameraComponent::StaticRegisterNativesUDS_NpcTalkCameraComponent(void)

{
  return;
}

// UDS_NpcTalkCameraComponent @ 14bc2b490

UDS_NpcTalkCameraComponent * __thiscall
UDS_NpcTalkCameraComponent::UDS_NpcTalkCameraComponent
          (UDS_NpcTalkCameraComponent *this,FObjectInitializer *param_1)

{
  UDS_CameraComponent::UDS_CameraComponent((UDS_CameraComponent *)this,param_1);
  this->NpcTalkCameraTableID = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// SetNpcTalkCamera @ 14bc61820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_NpcTalkCameraComponent::SetNpcTalkCamera(UDS_NpcTalkCameraComponent *this,int param_1)

{
  FDS_NpcCameraTableRow *pFVar1;
  double local_28;
  double dStack_20;
  undefined8 local_18;
  
  if (0 < param_1) {
    this->NpcTalkCameraTableID = param_1;
    pFVar1 = FDS_NpcCameraTableRow::Get((longlong)param_1,true);
    if (pFVar1 != (FDS_NpcCameraTableRow *)0x0) {
      local_18 = (undefined8)pFVar1->TargetHeightOffset;
      dStack_20 = (double)pFVar1->TargetWidthOffset;
      local_28 = (double)pFVar1->Distance;
      USceneComponent::SetRelativeLocation
                ((USceneComponent *)this,(TVector<double> *)&local_28,false,(FHitResult *)0x0,None);
      local_18 = *(undefined8 *)&this->field_0x170;
      unique0x10000050 = *(undefined4 *)&this->field_0x168;
      local_28 = (double)pFVar1->Pitch;
      unique0x10000054 = *(undefined4 *)&this->field_0x16c;
      USceneComponent::SetRelativeRotation
                ((USceneComponent *)this,(TRotator<double> *)&local_28,false,(FHitResult *)0x0,None)
      ;
      (**(code **)(*(longlong *)this + 0x640))(this,pFVar1->FieldOfView);
    }
  }
  return;
}

