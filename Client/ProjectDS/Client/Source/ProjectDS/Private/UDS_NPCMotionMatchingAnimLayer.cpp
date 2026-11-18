// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// StaticClass @ 14b53d960

UClass * __cdecl UDS_NPCMotionMatchingAnimLayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCMotionMatchingAnimLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCMotionMatchingAnimLayer",
               &Z_Registration_Info_UClass_UDS_NPCMotionMatchingAnimLayer.InnerSingleton,
               StaticRegisterNativesUDS_NPCMotionMatchingAnimLayer,0x530,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NPCMotionMatchingAnimLayer>,
               InternalVTableHelperCtorCaller<UDS_NPCMotionMatchingAnimLayer>,local_res8,
               UDS_MotionMatchingAnimLayer::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCMotionMatchingAnimLayer.InnerSingleton;
}

// UDS_NPCMotionMatchingAnimLayer @ 14b540580

UDS_NPCMotionMatchingAnimLayer * __thiscall
UDS_NPCMotionMatchingAnimLayer::UDS_NPCMotionMatchingAnimLayer
          (UDS_NPCMotionMatchingAnimLayer *this,FVTableHelper *param_1)

{
  UDS_MotionMatchingAnimLayer::UDS_MotionMatchingAnimLayer
            ((UDS_MotionMatchingAnimLayer *)this,param_1);
  this->NpcRotationPlace = -1;
  *(undefined ***)this = &___7UDS_NPCMotionMatchingAnimLayer__6B_;
  (this->NpcBattleData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->EntityData).WeakPtr = (FWeakObjectPtr)0x0;
  this->MoveMode = Idle;
  this->HeightConditionType = Ground;
  this->NpcRotationDirection = Forward;
  this->bIsNPCRotationPlace = false;
  return this;
}

// ~UDS_NPCMotionMatchingAnimLayer @ 14b5417d0

void __thiscall
UDS_NPCMotionMatchingAnimLayer::~UDS_NPCMotionMatchingAnimLayer
          (UDS_NPCMotionMatchingAnimLayer *this)

{
  *(undefined ***)this = &___7UDS_NPCMotionMatchingAnimLayer__6B_;
  UDS_MotionMatchingAnimLayer::~UDS_MotionMatchingAnimLayer((UDS_MotionMatchingAnimLayer *)this);
  return;
}

// GetPrivateStaticClass @ 14b542e80

UClass * __cdecl UDS_NPCMotionMatchingAnimLayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCMotionMatchingAnimLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCMotionMatchingAnimLayer",
               &Z_Registration_Info_UClass_UDS_NPCMotionMatchingAnimLayer.InnerSingleton,
               StaticRegisterNativesUDS_NPCMotionMatchingAnimLayer,0x530,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NPCMotionMatchingAnimLayer>,
               InternalVTableHelperCtorCaller<UDS_NPCMotionMatchingAnimLayer>,local_res8,
               UDS_MotionMatchingAnimLayer::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCMotionMatchingAnimLayer.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCMotionMatchingAnimLayer @ 14b543ab0

void __cdecl
UDS_NPCMotionMatchingAnimLayer::StaticRegisterNativesUDS_NPCMotionMatchingAnimLayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UDS_NPCMotionMatchingAnimLayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetHeightConditionType @ 14b545260

void __cdecl
UDS_NPCMotionMatchingAnimLayer::execGetHeightConditionType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x20].field_0x19;
  return;
}

// execGetNPCRotationCardinalDirection @ 14b545290

void __cdecl
UDS_NPCMotionMatchingAnimLayer::execGetNPCRotationCardinalDirection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x20].field_0x1a;
  return;
}

// execGetNPCRotationPlace @ 14b5452c0

void __cdecl
UDS_NPCMotionMatchingAnimLayer::execGetNPCRotationPlace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x20].field_0x1c;
  return;
}

// execIsNPCRotationPlace @ 14b5452f0

void __cdecl
UDS_NPCMotionMatchingAnimLayer::execIsNPCRotationPlace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x20].field_0x20;
  return;
}

// execIsRunState @ 14b545320

void __cdecl
UDS_NPCMotionMatchingAnimLayer::execIsRunState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsRunState((UDS_NPCMotionMatchingAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsWalkState @ 14b545360

void __cdecl
UDS_NPCMotionMatchingAnimLayer::execIsWalkState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsWalkState((UDS_NPCMotionMatchingAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execShouldActivateMotionMatching @ 14b545670

void __cdecl
UDS_NPCMotionMatchingAnimLayer::execShouldActivateMotionMatching
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = ShouldActivateMotionMatching((UDS_NPCMotionMatchingAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// UDS_NPCMotionMatchingAnimLayer @ 14b8652c0

UDS_NPCMotionMatchingAnimLayer * __thiscall
UDS_NPCMotionMatchingAnimLayer::UDS_NPCMotionMatchingAnimLayer
          (UDS_NPCMotionMatchingAnimLayer *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  *(undefined8 *)&this->field_0x448 = 0;
  *(undefined8 *)&this->field_0x450 = 0;
  *(undefined ***)this = &___7UDS_MotionMatchingAnimLayer__6B_;
  *(undefined8 *)&this->field_0x458 = 0;
  *(undefined8 *)&this->field_0x478 = 0;
  *(undefined8 *)&this->field_0x480 = 0;
  *(undefined8 *)&this->field_0x498 = 0;
  *(undefined8 *)&this->field_0x468 = 0x3e99999a;
  *(undefined4 *)&this->field_0x470 = 0;
  *(undefined8 *)&this->field_0x430 = 0;
  *(undefined4 *)&this->field_0x4a0 = 0;
  *(undefined4 *)&this->field_0x4a4 = 0x80;
  *(undefined4 *)&this->field_0x4a8 = 0xffffffff;
  *(undefined4 *)&this->field_0x4ac = 0;
  *(undefined8 *)&this->field_0x4b8 = 0;
  *(undefined4 *)&this->field_0x4c0 = 0;
  *(undefined8 *)&this->field_0x4c8 = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x4d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0x4d8 = uVar1;
  *(double *)&this->field_0x4e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined ***)this = &___7UDS_NPCMotionMatchingAnimLayer__6B_;
  (this->NpcBattleData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->EntityData).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->field_0x4e8 = 0;
  this->field_0x4f0 = 0;
  *(undefined8 *)&this->field_0x4f4 = 0;
  *(undefined8 *)&this->field_0x500 = 0;
  this->MoveMode = Idle;
  this->HeightConditionType = Ground;
  this->NpcRotationDirection = Forward;
  this->NpcRotationPlace = -1;
  this->bIsNPCRotationPlace = false;
  return this;
}

// GetMotionMatchingBlendTime @ 14b878180

float __thiscall
UDS_NPCMotionMatchingAnimLayer::GetMotionMatchingBlendTime(UDS_NPCMotionMatchingAnimLayer *this)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double *pdVar13;
  char cVar14;
  FDS_AnimSharedData *pFVar15;
  FDS_AnimSharedData *pFVar16;
  double *pdVar17;
  longlong lVar18;
  float fVar19;
  double local_148 [36];
  float local_24;
  
  if (-1 < this->NpcRotationPlace) {
    return __real_3cf5c28f;
  }
  pFVar15 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  lVar18 = 2;
  pdVar13 = local_148;
  do {
    pdVar17 = pdVar13;
    pFVar16 = pFVar15;
    dVar1 = (pFVar16->ActorLocation).field0_0x0._s_0.X;
    dVar10 = (pFVar16->ActorLocation).field0_0x0._s_0.Y;
    dVar11 = (pFVar16->ActorLocation).field0_0x0._s_0.Z;
    pFVar15 = (FDS_AnimSharedData *)((pFVar16->LastNonZeroVelocity).field0_0x0.XYZ + 2);
    *pdVar17 = *(double *)pFVar16;
    pdVar17[1] = dVar1;
    dVar1 = (pFVar16->ActorRotation).Pitch;
    dVar12 = (pFVar16->ActorRotation).Yaw;
    pdVar17[2] = dVar10;
    pdVar17[3] = dVar11;
    dVar10 = (pFVar16->ActorRotation).Roll;
    dVar11 = *(double *)&pFVar16->RotationVelocity;
    pdVar17[4] = dVar1;
    pdVar17[5] = dVar12;
    dVar1 = (pFVar16->Velocity).field0_0x0._s_0.X;
    dVar12 = (pFVar16->Velocity).field0_0x0._s_0.Y;
    pdVar17[6] = dVar10;
    pdVar17[7] = dVar11;
    dVar10 = (pFVar16->Velocity).field0_0x0._s_0.Z;
    dVar11 = (pFVar16->VelocityLastFrame).field0_0x0._s_0.X;
    pdVar17[8] = dVar1;
    pdVar17[9] = dVar12;
    dVar1 = (pFVar16->VelocityLastFrame).field0_0x0._s_0.Y;
    dVar12 = (pFVar16->VelocityLastFrame).field0_0x0._s_0.Z;
    pdVar17[10] = dVar10;
    pdVar17[0xb] = dVar11;
    dVar10 = (pFVar16->LastNonZeroVelocity).field0_0x0._s_0.X;
    dVar11 = (pFVar16->LastNonZeroVelocity).field0_0x0._s_0.Y;
    pdVar17[0xc] = dVar1;
    pdVar17[0xd] = dVar12;
    pdVar17[0xe] = dVar10;
    pdVar17[0xf] = dVar11;
    lVar18 = lVar18 + -1;
    pdVar13 = pdVar17 + 0x10;
  } while (lVar18 != 0);
  dVar1 = (pFVar16->VelocityAcceleration).field0_0x0._s_0.X;
  uVar2 = *(undefined4 *)((longlong)&(pFVar16->VelocityAcceleration).field0_0x0 + 8);
  uVar3 = *(undefined4 *)((longlong)&(pFVar16->VelocityAcceleration).field0_0x0 + 0xc);
  uVar4 = *(undefined4 *)((longlong)&(pFVar16->VelocityAcceleration).field0_0x0 + 0x10);
  uVar5 = *(undefined4 *)((longlong)&(pFVar16->VelocityAcceleration).field0_0x0 + 0x14);
  pdVar17[0x10] = *(double *)pFVar15;
  pdVar17[0x11] = dVar1;
  uVar6 = *(undefined4 *)&(pFVar16->LocalVelocity2D).field0_0x0;
  uVar7 = *(undefined4 *)((longlong)&(pFVar16->LocalVelocity2D).field0_0x0 + 4);
  uVar8 = *(undefined4 *)((longlong)&(pFVar16->LocalVelocity2D).field0_0x0 + 8);
  uVar9 = *(undefined4 *)((longlong)&(pFVar16->LocalVelocity2D).field0_0x0 + 0xc);
  dVar1 = (pFVar16->LocalVelocity2D).field0_0x0._s_0.Z;
  *(undefined4 *)(pdVar17 + 0x12) = uVar2;
  *(undefined4 *)((longlong)pdVar17 + 0x94) = uVar3;
  *(undefined4 *)(pdVar17 + 0x13) = uVar4;
  *(undefined4 *)((longlong)pdVar17 + 0x9c) = uVar5;
  *(undefined4 *)(pdVar17 + 0x14) = uVar6;
  *(undefined4 *)((longlong)pdVar17 + 0xa4) = uVar7;
  *(undefined4 *)(pdVar17 + 0x15) = uVar8;
  *(undefined4 *)((longlong)pdVar17 + 0xac) = uVar9;
  pdVar17[0x16] = dVar1;
  cVar14 = (**(code **)(*(longlong *)this + 0x3f0))(this);
  fVar19 = *(float *)&this->field_0x468;
  if ((cVar14 != '\0') && (local_24 < __real_42c80000)) {
    fVar19 = fVar19 * __real_3f000000;
  }
  return fVar19;
}

// GetPoseSearchInterruptMode @ 14b8791d0

EPoseSearchInterruptMode __thiscall
UDS_NPCMotionMatchingAnimLayer::GetPoseSearchInterruptMode(UDS_NPCMotionMatchingAnimLayer *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  FDS_AnimSharedData *pFVar7;
  FDS_AnimSharedData *pFVar8;
  double *pdVar9;
  longlong lVar10;
  double local_148 [25];
  char local_80;
  char local_7f;
  
  if (this->bIsNPCRotationPlace != true) {
    pFVar7 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
    lVar10 = 2;
    pdVar6 = local_148;
    do {
      pdVar9 = pdVar6;
      pFVar8 = pFVar7;
      dVar1 = (pFVar8->ActorLocation).field0_0x0._s_0.X;
      dVar2 = (pFVar8->ActorLocation).field0_0x0._s_0.Y;
      dVar3 = (pFVar8->ActorLocation).field0_0x0._s_0.Z;
      pFVar7 = (FDS_AnimSharedData *)((pFVar8->LastNonZeroVelocity).field0_0x0.XYZ + 2);
      *pdVar9 = *(double *)pFVar8;
      pdVar9[1] = dVar1;
      dVar1 = (pFVar8->ActorRotation).Pitch;
      dVar4 = (pFVar8->ActorRotation).Yaw;
      pdVar9[2] = dVar2;
      pdVar9[3] = dVar3;
      dVar2 = (pFVar8->ActorRotation).Roll;
      dVar3 = *(double *)&pFVar8->RotationVelocity;
      pdVar9[4] = dVar1;
      pdVar9[5] = dVar4;
      dVar1 = (pFVar8->Velocity).field0_0x0._s_0.X;
      dVar4 = (pFVar8->Velocity).field0_0x0._s_0.Y;
      pdVar9[6] = dVar2;
      pdVar9[7] = dVar3;
      dVar2 = (pFVar8->Velocity).field0_0x0._s_0.Z;
      dVar3 = (pFVar8->VelocityLastFrame).field0_0x0._s_0.X;
      pdVar9[8] = dVar1;
      pdVar9[9] = dVar4;
      dVar1 = (pFVar8->VelocityLastFrame).field0_0x0._s_0.Y;
      dVar4 = (pFVar8->VelocityLastFrame).field0_0x0._s_0.Z;
      pdVar9[10] = dVar2;
      pdVar9[0xb] = dVar3;
      dVar2 = (pFVar8->LastNonZeroVelocity).field0_0x0._s_0.X;
      dVar3 = (pFVar8->LastNonZeroVelocity).field0_0x0._s_0.Y;
      pdVar9[0xc] = dVar1;
      pdVar9[0xd] = dVar4;
      pdVar9[0xe] = dVar2;
      pdVar9[0xf] = dVar3;
      lVar10 = lVar10 + -1;
      pdVar6 = pdVar9 + 0x10;
    } while (lVar10 != 0);
    dVar1 = (pFVar8->VelocityAcceleration).field0_0x0._s_0.X;
    dVar2 = (pFVar8->VelocityAcceleration).field0_0x0._s_0.Y;
    dVar3 = (pFVar8->VelocityAcceleration).field0_0x0._s_0.Z;
    pdVar9[0x10] = *(double *)pFVar7;
    pdVar9[0x11] = dVar1;
    dVar4 = (pFVar8->LocalVelocity2D).field0_0x0._s_0.X;
    dVar5 = (pFVar8->LocalVelocity2D).field0_0x0._s_0.Y;
    dVar1 = (pFVar8->LocalVelocity2D).field0_0x0._s_0.Z;
    pdVar9[0x12] = dVar2;
    pdVar9[0x13] = dVar3;
    pdVar9[0x14] = dVar4;
    pdVar9[0x15] = dVar5;
    pdVar9[0x16] = dVar1;
    if ((local_7f == local_80) && (this->field_0x4ea == this->field_0x4e9)) {
      return DoNotInterrupt;
    }
  }
  return InterruptOnDatabaseChange;
}

// IsRunState @ 14b87de60

bool __thiscall UDS_NPCMotionMatchingAnimLayer::IsRunState(UDS_NPCMotionMatchingAnimLayer *this)

{
  return this->MoveMode == Run;
}

// IsValidReferencedPtr @ 14b87ec90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_NPCMotionMatchingAnimLayer::IsValidReferencedPtr(UDS_NPCMotionMatchingAnimLayer *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UDS_AnimInstanceBase::IsValidReferencedPtr((UDS_AnimInstanceBase *)this);
  if (bVar2) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x450);
    if (bVar2) {
      bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x448);
      if (bVar2) {
        bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x458);
        if (bVar2) {
          return true;
        }
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7274884785003036767>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\DS_MotionMatchingAnimLayer.cpp"
                           ,0x5f,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
    }
  }
  return false;
}

// IsWalkState @ 14b87ed40

bool __thiscall UDS_NPCMotionMatchingAnimLayer::IsWalkState(UDS_NPCMotionMatchingAnimLayer *this)

{
  return this->MoveMode == Walk;
}

// OnBindAnimationEvents @ 14b881610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_NPCMotionMatchingAnimLayer::OnBindAnimationEvents(UDS_NPCMotionMatchingAnimLayer *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [2];
  
  UDS_AnimInstanceBase::OnBindAnimationEvents((UDS_AnimInstanceBase *)this);
  UDS_CharInfoData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x10,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WeaponType),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_MotionMatchingAnimLayer>
              (&pUVar2[7].field_0x10,(UDS_MotionMatchingAnimLayer *)(local_res8 + 1),
               (pmf_034ee98d)this);
  }
  return;
}

// OnClearVariables @ 14b887ae0

void __thiscall
UDS_NPCMotionMatchingAnimLayer::OnClearVariables(UDS_NPCMotionMatchingAnimLayer *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  UDS_AnimLayerBase::OnClearVariables((UDS_AnimLayerBase *)this);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->NpcBattleData).WeakPtr = local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->EntityData).WeakPtr = local_res8;
  return;
}

// OnInitVariables @ 14b889ec0

void __thiscall
UDS_NPCMotionMatchingAnimLayer::OnInitVariables(UDS_NPCMotionMatchingAnimLayer *this)

{
  longlong *plVar1;
  ulong64 uVar2;
  undefined8 *puVar3;
  TWeakObjectPtr<UDS_NPCBattleData,FWeakObjectPtr> TVar4;
  TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> TVar5;
  undefined1 local_res8 [8];
  
  UDS_AnimLayerBase::OnInitVariables((UDS_AnimLayerBase *)this);
  plVar1 = *(longlong **)&this->field_0x430;
  if (plVar1 != (longlong *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x1c0))(plVar1,local_res8);
    *(undefined8 *)&this->field_0x458 = *puVar3;
    this->field_0x4f0 = 1;
    *(undefined4 *)&this->field_0x4f4 = 0x3ea8f5c3;
  }
  if (*(longlong *)&this->field_0x430 != 0) {
    uVar2 = *(ulong64 *)(*(longlong *)&this->field_0x430 + 8);
    TVar4 = UDS_NPCBattleData::GetData((ulong64)local_res8);
                    /* WARNING: Load size is inaccurate */
    (this->NpcBattleData).WeakPtr = *TVar4.WeakPtr;
    TVar5 = UDS_EntityData::GetData((ulong64)local_res8,uVar2);
                    /* WARNING: Load size is inaccurate */
    (this->EntityData).WeakPtr = *TVar5.WeakPtr;
  }
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88b990

void __thiscall
UDS_NPCMotionMatchingAnimLayer::OnNativeThreadSafeUpdateAnimation
          (UDS_NPCMotionMatchingAnimLayer *this,float param_1)

{
  bool bVar1;
  EDS_MoveMode EVar2;
  EDS_HeightConditionType EVar3;
  UObject *pUVar4;
  UDS_EntityData *pUVar5;
  
  UDS_MotionMatchingAnimLayer::OnNativeThreadSafeUpdateAnimation
            ((UDS_MotionMatchingAnimLayer *)this,param_1);
  bVar1 = FWeakObjectPtr::IsValid(&(this->NpcBattleData).WeakPtr);
  if (bVar1) {
    pUVar4 = FWeakObjectPtr::Get(&(this->NpcBattleData).WeakPtr);
    this->NpcRotationPlace = *(int *)&pUVar4[2].field_0xc;
    pUVar4 = FWeakObjectPtr::Get(&(this->NpcBattleData).WeakPtr);
    this->NpcRotationDirection = pUVar4[2].field_0x10;
    this->bIsNPCRotationPlace = (bool)((byte)((uint)this->NpcRotationPlace >> 0x1f) ^ 1);
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->EntityData).WeakPtr);
  if (bVar1) {
    pUVar5 = (UDS_EntityData *)FWeakObjectPtr::Get(&(this->EntityData).WeakPtr);
    EVar2 = UDS_EntityData::GetMoveMode(pUVar5);
    this->MoveMode = EVar2;
    pUVar5 = (UDS_EntityData *)FWeakObjectPtr::Get(&(this->EntityData).WeakPtr);
    EVar3 = UDS_EntityData::GetCurHeightConditionType(pUVar5);
    this->HeightConditionType = EVar3;
  }
  return;
}

// OnUnBindAnimationEvents @ 14b894550

void __thiscall
UDS_NPCMotionMatchingAnimLayer::OnUnBindAnimationEvents(UDS_NPCMotionMatchingAnimLayer *this)

{
  char cVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8 [4];
  
  cVar1 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar1 == '\x01') {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x20,this);
  }
  UDS_CharInfoData::GetData((ulong64)local_res8);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x10,this);
  }
  return;
}

// ShouldActivateMotionMatching @ 14b899b10

bool __thiscall
UDS_NPCMotionMatchingAnimLayer::ShouldActivateMotionMatching(UDS_NPCMotionMatchingAnimLayer *this)

{
  char cVar1;
  
  if (this->HeightConditionType == Ground) {
    cVar1 = (**(code **)(*(longlong *)this + 0x3f0))();
    if ((cVar1 == '\0') || (this->bIsNPCRotationPlace == true)) {
      return true;
    }
  }
  return false;
}

