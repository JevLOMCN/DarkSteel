// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 10

// StaticClass @ 14d2a51d0

UClass * __cdecl UDragonIKFootStepsComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDragonIKFootStepsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DragonIKPlugin",L"DragonIKFootStepsComponent",
               &Z_Registration_Info_UClass_UDragonIKFootStepsComponent.InnerSingleton,
               StaticRegisterNativesUDragonIKFootStepsComponent,0x270,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDragonIKFootStepsComponent>,
               InternalVTableHelperCtorCaller<UDragonIKFootStepsComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDragonIKFootStepsComponent.InnerSingleton;
}

// UDragonIKFootStepsComponent @ 14d2a5bc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDragonIKFootStepsComponent * __thiscall
UDragonIKFootStepsComponent::UDragonIKFootStepsComponent
          (UDragonIKFootStepsComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->OnCharacterFootStep = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&(this->OnCharacterFootStep).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&(this->OnCharacterFootStep).field_0x10 = 0;
  ::FName::FName(&this->bone_name_input,"None");
  *&(this->foot_transform_input).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->foot_transform_input).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->foot_transform_input).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->foot_transform_input).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->foot_transform_input).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->foot_transform_input).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->height_difference_input = 0.0;
  memset(&this->hit_info_input,0,0x100);
  (this->hit_info_input).Time = 1.0;
  (this->hit_info_input).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->hit_info_input).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->hit_info_input).MyItem = -1;
  (this->hit_info_input).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->hit_info_input).HitObjectHandle.InstanceIndex = -1;
  (this->hit_info_input).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->hit_info_input).HitObjectHandle.field_0x1d = 0;
  this->allow_broadcast = false;
  ::FName::FName(&this->read_this,"A description on how to use the dragonik footsteps component");
  (this->foot_socket).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->foot_socket).ArrayNum = 0;
  (this->foot_socket).ArrayMax = 0;
  this->foot_enter_height = 18.0;
  this->foot_exit_height = 20.0;
  return this;
}

// ~UDragonIKFootStepsComponent @ 14d2a6790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKFootStepsComponent::~UDragonIKFootStepsComponent(UDragonIKFootStepsComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->foot_socket).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OnCharacterFootStep).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCharacterFootStep);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// CallFootSteps @ 14d2a8ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDragonIKFootStepsComponent::CallFootSteps
          (UDragonIKFootStepsComponent *this,FName param_1,TTransform<double> *param_2,float param_3
          ,FHitResult *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  UFunction *pUVar6;
  longlong lVar7;
  undefined1 auStack_1d8 [32];
  FName local_1b8 [2];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  float local_148;
  undefined8 local_140 [33];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  memset(local_140,0,0x100);
  local_1a8 = (param_2->Rotation).XY.m128d_f64[0];
  dStack_1a0 = (param_2->Rotation).XY.m128d_f64[1];
  local_198 = (param_2->Rotation).ZW.m128d_f64[0];
  dStack_190 = (param_2->Rotation).ZW.m128d_f64[1];
  lVar7 = 2;
  local_188 = (param_2->Translation).XY.m128d_f64[0];
  dStack_180 = (param_2->Translation).XY.m128d_f64[1];
  local_178 = (param_2->Translation).ZW.m128d_f64[0];
  dStack_170 = (param_2->Translation).ZW.m128d_f64[1];
  local_168 = (param_2->Scale3D).XY.m128d_f64[0];
  dStack_160 = (param_2->Scale3D).XY.m128d_f64[1];
  local_158 = (param_2->Scale3D).ZW.m128d_f64[0];
  dStack_150 = (param_2->Scale3D).ZW.m128d_f64[1];
  puVar5 = local_140;
  do {
    uVar1 = *(undefined8 *)&param_4->Distance;
    uVar2 = *(undefined8 *)&param_4->Location;
    uVar3 = *(undefined8 *)&(param_4->Location).field_0x8;
    *puVar5 = *(undefined8 *)param_4;
    puVar5[1] = uVar1;
    uVar1 = *(undefined8 *)&(param_4->Location).field_0x10;
    uVar4 = *(undefined8 *)&param_4->ImpactPoint;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    uVar2 = *(undefined8 *)&(param_4->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(param_4->ImpactPoint).field_0x10;
    puVar5[4] = uVar1;
    puVar5[5] = uVar4;
    uVar1 = *(undefined8 *)&param_4->Normal;
    uVar4 = *(undefined8 *)&(param_4->Normal).field_0x8;
    puVar5[6] = uVar2;
    puVar5[7] = uVar3;
    uVar2 = *(undefined8 *)&(param_4->Normal).field_0x10;
    uVar3 = *(undefined8 *)&param_4->ImpactNormal;
    puVar5[8] = uVar1;
    puVar5[9] = uVar4;
    uVar1 = *(undefined8 *)&(param_4->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(param_4->ImpactNormal).field_0x10;
    puVar5[10] = uVar2;
    puVar5[0xb] = uVar3;
    uVar2 = *(undefined8 *)&param_4->TraceStart;
    uVar3 = *(undefined8 *)&(param_4->TraceStart).field_0x8;
    puVar5[0xc] = uVar1;
    puVar5[0xd] = uVar4;
    puVar5[0xe] = uVar2;
    puVar5[0xf] = uVar3;
    lVar7 = lVar7 + -1;
    puVar5 = puVar5 + 0x10;
    param_4 = (FHitResult *)&(param_4->TraceStart).field_0x10;
  } while (lVar7 != 0);
  local_1b8[0] = param_1;
  local_148 = param_3;
  pUVar6 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKFootStepsComponent_CallFootSteps);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar6,local_1b8);
  return;
}

// GetPrivateStaticClass @ 14d2a9360

UClass * __cdecl UDragonIKFootStepsComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDragonIKFootStepsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DragonIKPlugin",L"DragonIKFootStepsComponent",
               &Z_Registration_Info_UClass_UDragonIKFootStepsComponent.InnerSingleton,
               StaticRegisterNativesUDragonIKFootStepsComponent,0x270,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDragonIKFootStepsComponent>,
               InternalVTableHelperCtorCaller<UDragonIKFootStepsComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDragonIKFootStepsComponent.InnerSingleton;
}

// StaticRegisterNativesUDragonIKFootStepsComponent @ 14d2a9e70

void __cdecl UDragonIKFootStepsComponent::StaticRegisterNativesUDragonIKFootStepsComponent(void)

{
  return;
}

// UDragonIKFootStepsComponent @ 14d32df70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDragonIKFootStepsComponent * __thiscall
UDragonIKFootStepsComponent::UDragonIKFootStepsComponent(UDragonIKFootStepsComponent *this)

{
  byte *pbVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar2);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->OnCharacterFootStep = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&(this->OnCharacterFootStep).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&(this->OnCharacterFootStep).field_0x10 = 0;
  ::FName::FName(&this->bone_name_input,"None");
  *&(this->foot_transform_input).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->foot_transform_input).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->foot_transform_input).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->foot_transform_input).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->foot_transform_input).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->foot_transform_input).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->height_difference_input = 0.0;
  memset(&this->hit_info_input,0,0x100);
  (this->hit_info_input).Time = 1.0;
  (this->hit_info_input).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->hit_info_input).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->hit_info_input).MyItem = -1;
  (this->hit_info_input).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->hit_info_input).HitObjectHandle.InstanceIndex = -1;
  (this->hit_info_input).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->hit_info_input).HitObjectHandle.field_0x1d = 0;
  this->allow_broadcast = false;
  ::FName::FName(&this->read_this,"A description on how to use the dragonik footsteps component");
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  (this->foot_socket).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->foot_socket).ArrayNum = 0;
  (this->foot_socket).ArrayMax = 0;
  this->foot_enter_height = 18.0;
  this->foot_exit_height = 20.0;
  return this;
}

// BeginPlay @ 14d336120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDragonIKFootStepsComponent::BeginPlay(UDragonIKFootStepsComponent *this)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  UObject *this_00;
  UFunction *pUVar4;
  char *pcVar5;
  FName local_res8;
  FName local_res10;
  UDragonIKFootStepsComponent *local_res18;
  FName *local_res20;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_68;
  FReadAccessScope local_50;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  pcVar3 = strstr("&UDragonIKFootStepsComponent::CallFootSteps","::");
  if (pcVar3 == (char *)0x0) {
LAB_14d33618b:
    pcVar5 = &DAT_00000002;
LAB_14d336190:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar5 = pcVar3;
      pcVar3 = strstr(pcVar5 + 1,"::");
    } while (pcVar3 != (char *)0x0);
    if (pcVar5 == (char *)0x0) goto LAB_14d33618b;
    pcVar5 = pcVar5 + 2;
    if (*pcVar5 == '0') goto LAB_14d336190;
  }
  ::FName::FName(&local_res10,pcVar5);
  if ((this == (UDragonIKFootStepsComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res8 = local_res10;
  local_68._padding_ = 0;
  local_68.Object.ObjectIndex = 0;
  local_68.Object.ObjectSerialNumber = 0;
  local_68.FunctionName.ComparisonIndex.Value = 0;
  local_68.FunctionName.Number = 0;
  if ((this == (UDragonIKFootStepsComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDragonIKFootStepsComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_68.Object,(FObjectPtr)&local_res18);
  local_68.FunctionName = local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_68,&local_50);
  if ((local_68.FunctionName == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_68.Object), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
  }
  else {
    pUVar4 = UObject::FindFunction(this_00,local_68.FunctionName);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    if (pUVar4 != (UFunction *)0x0) goto LAB_14d3362c1;
  }
  local_res20 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FName,UE::Math::TTransform<double>,float,FHitResult>
  ::__Internal_BindDynamic<UDragonIKFootStepsComponent>'::__l2::<lambda_1>::operator()(&local_res20)
  ;
LAB_14d3362c1:
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Add
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnCharacterFootStep,
             &local_68);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_68);
  return;
}

// SendInfoToDelegate @ 14d357450

void __thiscall
UDragonIKFootStepsComponent::SendInfoToDelegate
          (UDragonIKFootStepsComponent *this,FName param_1,TTransform<double> *param_2,float param_3
          ,FHitResult *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  FHitResult *pFVar9;
  longlong lVar10;
  
  dVar1 = (param_2->Rotation).XY.m128d_f64[1];
  dVar2 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar3 = (param_2->Rotation).ZW.m128d_f64[1];
  (this->foot_transform_input).Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (this->foot_transform_input).Rotation.XY.m128d_f64[1] = dVar1;
  this->bone_name_input = param_1;
  lVar10 = 2;
  dVar1 = (param_2->Translation).XY.m128d_f64[0];
  dVar4 = (param_2->Translation).XY.m128d_f64[1];
  (this->foot_transform_input).Rotation.ZW.m128d_f64[0] = dVar2;
  (this->foot_transform_input).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_2->Translation).ZW.m128d_f64[0];
  dVar3 = (param_2->Translation).ZW.m128d_f64[1];
  (this->foot_transform_input).Translation.XY.m128d_f64[0] = dVar1;
  (this->foot_transform_input).Translation.XY.m128d_f64[1] = dVar4;
  dVar1 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar4 = (param_2->Scale3D).XY.m128d_f64[1];
  (this->foot_transform_input).Translation.ZW.m128d_f64[0] = dVar2;
  (this->foot_transform_input).Translation.ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar3 = (param_2->Scale3D).ZW.m128d_f64[1];
  (this->foot_transform_input).Scale3D.XY.m128d_f64[0] = dVar1;
  (this->foot_transform_input).Scale3D.XY.m128d_f64[1] = dVar4;
  (this->foot_transform_input).Scale3D.ZW.m128d_f64[0] = dVar2;
  (this->foot_transform_input).Scale3D.ZW.m128d_f64[1] = dVar3;
  this->height_difference_input = param_3;
  pFVar9 = &this->hit_info_input;
  do {
    fVar6 = param_4->Time;
    fVar7 = param_4->Distance;
    iVar8 = param_4->_padding_;
    pFVar9->FaceIndex = param_4->FaceIndex;
    pFVar9->Time = fVar6;
    pFVar9->Distance = fVar7;
    pFVar9->_padding_ = iVar8;
    uVar5 = *(undefined8 *)&(param_4->Location).field_0x8;
    *(undefined8 *)&pFVar9->Location = *(undefined8 *)&param_4->Location;
    *(undefined8 *)&(pFVar9->Location).field_0x8 = uVar5;
    uVar5 = *(undefined8 *)&param_4->ImpactPoint;
    *(undefined8 *)&(pFVar9->Location).field_0x10 = *(undefined8 *)&(param_4->Location).field_0x10;
    *(undefined8 *)&pFVar9->ImpactPoint = uVar5;
    uVar5 = *(undefined8 *)&(param_4->ImpactPoint).field_0x10;
    *(undefined8 *)&(pFVar9->ImpactPoint).field_0x8 =
         *(undefined8 *)&(param_4->ImpactPoint).field_0x8;
    *(undefined8 *)&(pFVar9->ImpactPoint).field_0x10 = uVar5;
    uVar5 = *(undefined8 *)&(param_4->Normal).field_0x8;
    *(undefined8 *)&pFVar9->Normal = *(undefined8 *)&param_4->Normal;
    *(undefined8 *)&(pFVar9->Normal).field_0x8 = uVar5;
    uVar5 = *(undefined8 *)&param_4->ImpactNormal;
    *(undefined8 *)&(pFVar9->Normal).field_0x10 = *(undefined8 *)&(param_4->Normal).field_0x10;
    *(undefined8 *)&pFVar9->ImpactNormal = uVar5;
    uVar5 = *(undefined8 *)&(param_4->ImpactNormal).field_0x10;
    *(undefined8 *)&(pFVar9->ImpactNormal).field_0x8 =
         *(undefined8 *)&(param_4->ImpactNormal).field_0x8;
    *(undefined8 *)&(pFVar9->ImpactNormal).field_0x10 = uVar5;
    uVar5 = *(undefined8 *)&(param_4->TraceStart).field_0x8;
    *(undefined8 *)&pFVar9->TraceStart = *(undefined8 *)&param_4->TraceStart;
    *(undefined8 *)&(pFVar9->TraceStart).field_0x8 = uVar5;
    lVar10 = lVar10 + -1;
    pFVar9 = (FHitResult *)&(pFVar9->TraceStart).field_0x10;
    param_4 = (FHitResult *)&(param_4->TraceStart).field_0x10;
  } while (lVar10 != 0);
  this->allow_broadcast = true;
  return;
}

// TickComponent @ 14d35c3f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKFootStepsComponent::TickComponent
          (UDragonIKFootStepsComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  float fVar1;
  FName FVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  FHitResult *pFVar15;
  TTransform<double> local_2d8;
  FHitResult local_278;
  FHitResult local_178;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if (this->allow_broadcast != false) {
    pFVar15 = FHitResult::FHitResult(&local_278,&this->hit_info_input);
    fVar1 = this->height_difference_input;
    FVar2 = this->bone_name_input;
    dVar3 = (this->foot_transform_input).Rotation.XY.m128d_f64[0];
    dVar4 = (this->foot_transform_input).Rotation.XY.m128d_f64[1];
    dVar5 = (this->foot_transform_input).Rotation.ZW.m128d_f64[0];
    dVar6 = (this->foot_transform_input).Rotation.ZW.m128d_f64[1];
    dVar7 = (this->foot_transform_input).Translation.XY.m128d_f64[0];
    dVar8 = (this->foot_transform_input).Translation.XY.m128d_f64[1];
    dVar9 = (this->foot_transform_input).Translation.ZW.m128d_f64[0];
    dVar10 = (this->foot_transform_input).Translation.ZW.m128d_f64[1];
    dVar11 = (this->foot_transform_input).Scale3D.XY.m128d_f64[0];
    dVar12 = (this->foot_transform_input).Scale3D.XY.m128d_f64[1];
    dVar13 = (this->foot_transform_input).Scale3D.ZW.m128d_f64[0];
    dVar14 = (this->foot_transform_input).Scale3D.ZW.m128d_f64[1];
    pFVar15 = FHitResult::FHitResult(&local_178,pFVar15);
    local_2d8.Rotation.XY.m128d_f64[0] = dVar3;
    local_2d8.Rotation.XY.m128d_f64[1] = dVar4;
    local_2d8.Rotation.ZW.m128d_f64[0] = dVar5;
    local_2d8.Rotation.ZW.m128d_f64[1] = dVar6;
    local_2d8.Translation.XY.m128d_f64[0] = dVar7;
    local_2d8.Translation.XY.m128d_f64[1] = dVar8;
    local_2d8.Translation.ZW.m128d_f64[0] = dVar9;
    local_2d8.Translation.ZW.m128d_f64[1] = dVar10;
    local_2d8.Scale3D.XY.m128d_f64[0] = dVar11;
    local_2d8.Scale3D.XY.m128d_f64[1] = dVar12;
    local_2d8.Scale3D.ZW.m128d_f64[0] = dVar13;
    local_2d8.Scale3D.ZW.m128d_f64[1] = dVar14;
    FCharacterFootStep_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnCharacterFootStep,
               FVar2,&local_2d8,fVar1,pFVar15);
    this->allow_broadcast = false;
  }
  return;
}

