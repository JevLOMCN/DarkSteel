// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkComponents
// Functions: 12

// StaticClass @ 14d0908a0

UClass * __cdecl ULiveLinkTransformController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTransformController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkComponents",L"LiveLinkTransformController",
               &Z_Registration_Info_UClass_ULiveLinkTransformController.InnerSingleton,
               StaticRegisterNativesULiveLinkTransformController,0x130,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkTransformController>,
               InternalVTableHelperCtorCaller<ULiveLinkTransformController>,local_res8,
               ULiveLinkControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformController.InnerSingleton;
}

// ULiveLinkTransformController @ 14d091f40

ULiveLinkTransformController * __thiscall
ULiveLinkTransformController::ULiveLinkTransformController
          (ULiveLinkTransformController *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkControllerBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->TransformData).bWorldTransform = false;
  (this->TransformData).bUseLocation = true;
  (this->TransformData).bUseRotation = true;
  (this->TransformData).bUseScale = true;
  (this->TransformData).bSweep = false;
  (this->TransformData).bTeleport = true;
  this->_padding_ = (longlong)&___7ULiveLinkTransformController__6B_;
  *&(this->OffsetTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->OffsetTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->OffsetTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->OffsetTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->OffsetTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->OffsetTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CombinedTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->CombinedTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CombinedTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->CombinedTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CombinedTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->CombinedTransform).Scale3D.ZW.m128d_f64 = auVar8;
  return this;
}

// ULiveLinkTransformController @ 14d092070

ULiveLinkTransformController * __thiscall
ULiveLinkTransformController::ULiveLinkTransformController
          (ULiveLinkTransformController *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkControllerBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->TransformData).bWorldTransform = false;
  (this->TransformData).bUseLocation = true;
  (this->TransformData).bUseRotation = true;
  (this->TransformData).bUseScale = true;
  (this->TransformData).bSweep = false;
  (this->TransformData).bTeleport = true;
  this->_padding_ = (longlong)&___7ULiveLinkTransformController__6B_;
  *&(this->OffsetTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->OffsetTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->OffsetTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->OffsetTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->OffsetTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->OffsetTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CombinedTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->CombinedTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CombinedTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->CombinedTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CombinedTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->CombinedTransform).Scale3D.ZW.m128d_f64 = auVar8;
  return this;
}

// ~ULiveLinkTransformController @ 14d0924b0

void __thiscall
ULiveLinkTransformController::~ULiveLinkTransformController(ULiveLinkTransformController *this)

{
  this->_padding_ = (longlong)&___7ULiveLinkControllerBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetDesiredComponentClass @ 14d093900

TSubclassOf<UActorComponent> __thiscall
ULiveLinkTransformController::GetDesiredComponentClass(ULiveLinkTransformController *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_USceneComponent_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UActorComponent>)in_RDX.field0_0x0;
}

// GetPrivateStaticClass @ 14d093cb0

UClass * __cdecl ULiveLinkTransformController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTransformController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkComponents",L"LiveLinkTransformController",
               &Z_Registration_Info_UClass_ULiveLinkTransformController.InnerSingleton,
               StaticRegisterNativesULiveLinkTransformController,0x130,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkTransformController>,
               InternalVTableHelperCtorCaller<ULiveLinkTransformController>,local_res8,
               ULiveLinkControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformController.InnerSingleton;
}

// IsRoleSupported @ 14d094340

bool __thiscall
ULiveLinkTransformController::IsRoleSupported
          (ULiveLinkTransformController *this,TSubclassOf<ULiveLinkRole> *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  pUVar4 = (param_1->Class).field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pUVar4 = (param_1->Class).field0_0x0.DebugPtr;
        goto LAB_14d09438a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14d09438a:
  pUVar3 = Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
  return pUVar4 == pUVar3;
}

// OnEvaluateRegistered @ 14d094410

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
ULiveLinkTransformController::OnEvaluateRegistered(ULiveLinkTransformController *this)

{
  int iVar1;
  AActor *pAVar2;
  AActor *pAVar3;
  UActorComponent *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  FStaticBasicLogRecord *pFVar7;
  FName local_res8;
  FString local_18;
  
  pAVar2 = ULiveLinkControllerBase::GetOuterActor((ULiveLinkControllerBase *)this);
  pAVar3 = ULiveLinkControllerBase::GetOuterActor((ULiveLinkControllerBase *)this);
  pUVar4 = FComponentReference::GetComponent((FComponentReference *)&this->_padding_,pAVar3);
  if (pUVar4 != (UActorComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14d094466;
  }
  pUVar4 = (UActorComponent *)0x0;
LAB_14d094466:
  if (pAVar2 == (AActor *)0x0) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
  }
  else {
    local_res8 = (FName)pAVar2->_padding_;
  }
  if (pUVar4 == (UActorComponent *)0x0) {
    if ((byte)LogLiveLinkComponents._0_1_ < 3) {
      return;
    }
    pFVar6 = ::FName::ToString(&local_res8,&local_18);
    if ((pFVar6->Data).ArrayNum == 0) {
      pFVar7 = &::LOG_Static;
    }
    else {
      pFVar7 = &::LOG_Static;
    }
  }
  else {
    if (*(char *)((longlong)&pUVar4[2]._padding_ + 3) == '\x02') {
      return;
    }
    if ((byte)LogLiveLinkComponents._0_1_ < 3) {
      return;
    }
    ::FName::ToString(&local_res8,&local_18);
    pFVar7 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogLiveLinkComponents);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// PostLoad @ 14d094c10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULiveLinkTransformController::PostLoad(ULiveLinkTransformController *this)

{
  AActor *pAVar1;
  UActorComponent *local_res8 [4];
  
  UObject::PostLoad((UObject *)this);
  pAVar1 = ULiveLinkControllerBase::GetOuterActor((ULiveLinkControllerBase *)this);
  local_res8[0] = FComponentReference::GetComponent((FComponentReference *)&this->_padding_,pAVar1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8[0] != (UActorComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)local_res8);
  return;
}

// SetAttachedComponent @ 14d094f20

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
ULiveLinkTransformController::SetAttachedComponent
          (ULiveLinkTransformController *this,UActorComponent *param_1)

{
  int iVar1;
  AActor *pAVar2;
  AActor *pAVar3;
  UActorComponent *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  FStaticBasicLogRecord *pFVar7;
  FName local_res8;
  FString local_18;
  
  local_res8 = (FName)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UActorComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  pAVar2 = ULiveLinkControllerBase::GetOuterActor((ULiveLinkControllerBase *)this);
  pAVar3 = ULiveLinkControllerBase::GetOuterActor((ULiveLinkControllerBase *)this);
  pUVar4 = FComponentReference::GetComponent((FComponentReference *)&this->_padding_,pAVar3);
  if (pUVar4 != (UActorComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14d094fa2;
  }
  pUVar4 = (UActorComponent *)0x0;
LAB_14d094fa2:
  if (pAVar2 == (AActor *)0x0) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
  }
  else {
    local_res8 = (FName)pAVar2->_padding_;
  }
  if (pUVar4 == (UActorComponent *)0x0) {
    if ((byte)LogLiveLinkComponents._0_1_ < 3) {
      return;
    }
    pFVar6 = ::FName::ToString(&local_res8,&local_18);
    if ((pFVar6->Data).ArrayNum == 0) {
      pFVar7 = &::LOG_Static;
    }
    else {
      pFVar7 = &::LOG_Static;
    }
  }
  else {
    if (*(char *)((longlong)&pUVar4[2]._padding_ + 3) == '\x02') {
      return;
    }
    if ((byte)LogLiveLinkComponents._0_1_ < 3) {
      return;
    }
    ::FName::ToString(&local_res8,&local_18);
    pFVar7 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogLiveLinkComponents);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesULiveLinkTransformController @ 14d095610

void __cdecl ULiveLinkTransformController::StaticRegisterNativesULiveLinkTransformController(void)

{
  return;
}

// Tick @ 14d095950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
ULiveLinkTransformController::Tick
          (ULiveLinkTransformController *this,float param_1,FLiveLinkSubjectFrameData *param_2)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar1;
  int iVar2;
  bool bVar3;
  FLiveLinkTransformStaticData *pFVar4;
  longlong lVar5;
  UClass *pUVar6;
  UScriptStruct *pUVar7;
  longlong lVar8;
  AActor *pAVar9;
  USceneComponent *pUVar10;
  undefined1 auStack_a8 [32];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar4 = (FLiveLinkTransformStaticData *)
           (**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x10))(param_2);
  lVar5 = (**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x20))(param_2);
  if (lVar5 == 0) {
LAB_14d0959e5:
    pFVar4 = (FLiveLinkTransformStaticData *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if (((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar2) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8)
         != &pUVar6->_padding_)) ||
       (pUVar7 = FLiveLinkTransformStaticData::StaticStruct(), pUVar7 == (UScriptStruct *)0x0))
    goto LAB_14d0959e5;
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14d0959e5;
  }
  pFVar1 = &param_2->FrameData;
  lVar5 = (**(code **)((param_2->FrameData).WrappedStruct._padding_ + 0x10))(pFVar1);
  lVar8 = (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x20))(pFVar1);
  if (lVar8 == 0) {
LAB_14d095a5a:
    lVar5 = 0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if (((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar2) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar2 * 8)
         != &pUVar6->_padding_)) ||
       (pUVar7 = FLiveLinkTransformFrameData::StaticStruct(), pUVar7 == (UScriptStruct *)0x0))
    goto LAB_14d095a5a;
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar8 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14d095a5a;
  }
  if (pFVar4 == (FLiveLinkTransformStaticData *)0x0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  pAVar9 = ULiveLinkControllerBase::GetOuterActor((ULiveLinkControllerBase *)this);
  pUVar10 = (USceneComponent *)
            FComponentReference::GetComponent((FComponentReference *)&this->_padding_,pAVar9);
  if (pUVar10 != (USceneComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar6->_padding_)) goto LAB_14d095aaf;
  }
  pUVar10 = (USceneComponent *)0x0;
LAB_14d095aaf:
  if (pUVar10 != (USceneComponent *)0x0) {
    local_88.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_88.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_88.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_88.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_88.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_88.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_88,&this->OffsetTransform,(TTransform<double> *)(lVar5 + 0xa0));
    (this->CombinedTransform).Rotation.XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
    (this->CombinedTransform).Rotation.XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
    (this->CombinedTransform).Rotation.ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
    (this->CombinedTransform).Rotation.ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
    (this->CombinedTransform).Translation.XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
    (this->CombinedTransform).Translation.XY.m128d_f64[1] = local_88.Translation.XY.m128d_f64[1];
    (this->CombinedTransform).Translation.ZW.m128d_f64[0] = local_88.Translation.ZW.m128d_f64[0];
    (this->CombinedTransform).Translation.ZW.m128d_f64[1] = local_88.Translation.ZW.m128d_f64[1];
    (this->CombinedTransform).Scale3D.XY.m128d_f64[0] = local_88.Scale3D.XY.m128d_f64[0];
    (this->CombinedTransform).Scale3D.XY.m128d_f64[1] = local_88.Scale3D.XY.m128d_f64[1];
    (this->CombinedTransform).Scale3D.ZW.m128d_f64[0] = local_88.Scale3D.ZW.m128d_f64[0];
    (this->CombinedTransform).Scale3D.ZW.m128d_f64[1] = local_88.Scale3D.ZW.m128d_f64[1];
    FLiveLinkTransformControllerData::ApplyTransform
              (&this->TransformData,pUVar10,&this->CombinedTransform,pFVar4);
  }
  return;
}

