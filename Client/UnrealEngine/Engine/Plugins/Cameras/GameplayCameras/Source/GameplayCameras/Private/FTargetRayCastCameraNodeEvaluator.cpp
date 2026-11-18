// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// GetTypeID @ 14d61e760

FCameraObjectTypeID * __thiscall
UE::Cameras::FTargetRayCastCameraNodeEvaluator::GetTypeID(FTargetRayCastCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d6215f0

bool __thiscall
UE::Cameras::FTargetRayCastCameraNodeEvaluator::IsKindOf
          (FTargetRayCastCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FTargetRayCastCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuildDebugBlocks @ 14d624d30

void __thiscall
UE::Cameras::FTargetRayCastCameraNodeEvaluator::OnBuildDebugBlocks
          (FTargetRayCastCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  int iVar1;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FScriptContainerElement *pFVar2;
  FCameraDebugBlock *pFVar3;
  int iVar4;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar3 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x60,8);
  pFVar3[1]._padding_ = 0;
  pFVar3[1].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar3[1].Attachments.ArrayNum = 0;
  pFVar3[1].Attachments.ArrayMax = 0;
  pFVar3[1].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar3[2].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar3->_padding_ = (longlong)&___7FTargetRayCastCameraDebugBlock_Cameras_UE__6B_;
  (pFVar3->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->Attachments).ArrayNum = 0;
  (pFVar3->Attachments).ArrayMax = 0;
  (pFVar3->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->Children).ArrayNum = 0;
  (pFVar3->Children).ArrayMax = 0;
  pFVar3[1].Children.ArrayNum = 0;
  pFVar3[1].Children.ArrayMax = 0;
  pFVar3[2]._padding_ = 0;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar3);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar3);
  pFVar2 = (FScriptContainerElement *)(this->LastHitResultLocation).field0_0x0._s_0.Y;
  pFVar3[1]._padding_ = (longlong)(this->LastHitResultLocation).field0_0x0._s_0.X;
  pFVar3[1].Attachments.AllocatorInstance.Data = pFVar2;
  *(double *)&pFVar3[1].Attachments.ArrayNum = (this->LastHitResultLocation).field0_0x0._s_0.Z;
  pFVar3[1].Children.AllocatorInstance.Data = (FScriptContainerElement *)this->LastHitResultDistance
  ;
  iVar1 = (this->LastHitResultName).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange
            ((FString *)&pFVar3[1].Children.ArrayNum,
             (wchar_t *)(this->LastHitResultName).Data.AllocatorInstance.Data,iVar4);
  *(bool *)&pFVar3[2].Attachments.AllocatorInstance.Data = this->bGotLastHitResult;
  return;
}

// OnInitialize @ 14d628ff0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FTargetRayCastCameraNodeEvaluator::OnInitialize
          (FTargetRayCastCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  if (this->_padding_ != 0) {
    pUVar2 = UTargetRayCastCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d629028;
    }
  }
  lVar3 = 0;
LAB_14d629028:
  (this->AutoFocusReader).DefaultValuePtr = (bool *)(lVar3 + 0x40);
  (this->AutoFocusReader).VariableID.Value = *(uint *)(lVar3 + 0x44);
  return;
}

// OnRun @ 14d62d430

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FTargetRayCastCameraNodeEvaluator::OnRun
          (FTargetRayCastCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraPoseFlags *pFVar1;
  double dVar2;
  FCameraEvaluationContext *this_00;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  APlayerController *pAVar6;
  
  this_00 = (param_1->EvaluationContext).Object;
  if (this_00 == (FCameraEvaluationContext *)0x0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3688226500273766480>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Common\\TargetRayCastCameraNode.cpp"
                       ,0x50,"Params.EvaluationContext");
    if (bVar4) {
code_r0x00014d62d4e9:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_1->EvaluationType == Standard) {
    pUVar5 = FCameraEvaluationContext::GetWorld(this_00);
    if (pUVar5 == (UWorld *)0x0) {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3688226500273766493>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Common\\TargetRayCastCameraNode.cpp"
                         ,0x5d,"World");
      if (bVar4) goto code_r0x00014d62d4e9;
    }
    else {
      if (((param_1->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pAVar6 = (APlayerController *)
               FWeakObjectPtr::Get(&(((param_1->EvaluationContext).Object)->WeakPlayerController).
                                    WeakPtr);
      RunLineTrace(this,pUVar5,pAVar6,param_2);
    }
  }
  else {
    dVar2 = this->LastHitResultDistance;
    if (dVar2 != (param_2->CameraPose).TargetDistance) {
      pFVar1->TargetDistance = true;
      (param_2->CameraPose).TargetDistance = dVar2;
    }
  }
  return;
}

// RunLineTrace @ 14d633e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FTargetRayCastCameraNodeEvaluator::RunLineTrace
          (FTargetRayCastCameraNodeEvaluator *this,UWorld *param_1,APlayerController *param_2,
          FCameraNodeEvaluationResult *param_3)

{
  FString *pFVar1;
  FCameraPoseFlags *pFVar2;
  byte bVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  TVector<double> *pTVar8;
  UClass *pUVar9;
  longlong lVar10;
  FName *pFVar11;
  AActor *pAVar12;
  bool *pbVar13;
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStackY_2d8 [32];
  FString local_278;
  TVector<double>_u_0 local_268;
  TStatId local_250;
  FName local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined4 uStack_228;
  undefined1 uStack_224;
  undefined2 uStack_223;
  undefined1 uStack_221;
  TVector<double>_u_0 local_220;
  FName local_208;
  FName local_200;
  undefined1 local_1f8 [48];
  double dStack_1c8;
  double local_1c0;
  int local_154;
  FActorInstanceHandle local_140 [2];
  TVector<double> local_f8;
  FCollisionQueryParams local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LineTraceTag,L"TargetRayCast");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&LineTraceOwnerTag,L"TargetRayCastCameraNode");
    _Init_thread_footer(&::_TSS1);
  }
  lVar10 = 0;
  if (param_2 == (APlayerController *)0x0) {
    pAVar12 = (AActor *)0x0;
  }
  else {
    pAVar12 = (AActor *)param_2->_padding_;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pAVar12 != (AActor *)0x0)) {
      GC::MarkAsReachable((UObject *)pAVar12);
    }
  }
  local_268._s_0.X = (param_3->CameraPose).Location.field0_0x0._s_0.X;
  local_268._s_0.Y = (param_3->CameraPose).Location.field0_0x0._s_0.Y;
  local_268._s_0.Z = (param_3->CameraPose).Location.field0_0x0._s_0.Z;
  pTVar8 = FCameraPose::GetAimDir(&param_3->CameraPose,&local_f8);
  dVar15 = (double)GTargetRayCastLength;
  local_220._s_0.Z = dVar15 * (pTVar8->field0_0x0)._s_0.Z + local_268._s_0.Z;
  local_220._s_0.Y = dVar15 * (pTVar8->field0_0x0)._s_0.Y + local_268._s_0.Y;
  local_220._s_0.X = dVar15 * (pTVar8->field0_0x0)._s_0.X + local_268._s_0.X;
  if (this->_padding_ != 0) {
    pUVar9 = UTargetRayCastCameraNode::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar9);
    if (bVar7) {
      lVar10 = this->_padding_;
    }
  }
  bVar3 = *(byte *)(lVar10 + 0x38);
  memset(local_1f8,0,0x100);
  local_240 = 0;
  uStack_238 = 0;
  uStack_223 = 0;
  local_140[0].ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_140[0].ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_140[0].ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_140[0].ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  uStack_221 = 0;
  local_230 = 0;
  uStack_228 = 0xffffffff;
  uStack_224 = 0;
  local_140[0].InstanceIndex = -1;
  local_140[0].ResolutionStatus = Invalid;
  local_140[0]._29_3_ = 0;
  local_1f8._4_4_ = 1.0;
  local_154 = -1;
  local_140[0].ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
  if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_TargetLineTrace =
         (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UE::Cameras::FTargetRayCastCameraNodeEvaluator::RunLineTrace(UWorld_*,APlayerController_*,UE::Cameras::FCameraNodeEvaluationResult_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_TargetLineTrace>
          )0x0;
    pFVar11 = ::FName::FName(&local_208,"TargetLineTrace");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_TargetLineTrace,*pFVar11,L"TargetLineTrace",
               "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true
               ,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  local_250.StatIdPtr = (TStatIdData *)StatPtr_TargetLineTrace;
  if (StatPtr_TargetLineTrace ==
      (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UE::Cameras::FTargetRayCastCameraNodeEvaluator::RunLineTrace(UWorld_*,APlayerController_*,UE::Cameras::FCameraNodeEvaluationResult_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_TargetLineTrace>
       )0x0) {
    pFVar11 = ::FName::FName(&local_200,"TargetLineTrace");
    local_250.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_TargetLineTrace,*pFVar11,
                    L"TargetLineTrace","STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags"
                    ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::StaticName,"TargetLineTrace");
    _Init_thread_footer(&::_TSS0);
  }
  FCollisionQueryParams::FCollisionQueryParams(&local_d8,::StaticName,&local_250,false,pAVar12);
  local_d8.TraceTag = LineTraceTag;
  local_d8.OwnerTag = LineTraceOwnerTag;
  bVar7 = UWorld::LineTraceSingleByChannel
                    (param_1,(FHitResult *)local_1f8,(TVector<double> *)&local_268._s_0,
                     (TVector<double> *)&local_220._s_0,(uint)bVar3,&local_d8,
                     &FCollisionResponseParams::DefaultResponseParam);
  this->bGotLastHitResult = bVar7;
  if (bVar7) {
    auVar16._0_8_ =
         ((double)local_1f8._40_8_ - local_268._s_0.X) *
         ((double)local_1f8._40_8_ - local_268._s_0.X);
    auVar16._8_8_ = 0;
    auVar17._8_8_ = 0;
    auVar17._0_8_ =
         (dStack_1c8 - local_268._s_0.Y) * (dStack_1c8 - local_268._s_0.Y) + auVar16._0_8_ +
         (local_1c0 - local_268._s_0.Z) * (local_1c0 - local_268._s_0.Z);
    auVar17 = sqrtpd(auVar16,auVar17);
    dVar15 = auVar17._0_8_;
    if (dVar15 != (param_3->CameraPose).TargetDistance) {
      pFVar2->TargetDistance = true;
      (param_3->CameraPose).TargetDistance = dVar15;
    }
    this->LastHitResultDistance = dVar15;
    (this->LastHitResultLocation).field0_0x0._s_0.X = (double)local_1f8._40_8_;
    (this->LastHitResultLocation).field0_0x0._s_0.Y = dStack_1c8;
    (this->LastHitResultLocation).field0_0x0._s_0.Z = local_1c0;
    pAVar12 = ::FActorInstanceHandle::FetchActor(local_140);
    if (pAVar12 == (AActor *)0x0) {
      ::FString::FString(&local_278,L"None");
    }
    else {
      local_248 = (FName)pAVar12->_padding_;
      ::FName::ToString(&local_248,&local_278);
    }
    pFVar1 = &this->LastHitResultName;
    if (pFVar1 != &local_278) {
      pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_278.Data.AllocatorInstance.Data;
      (this->LastHitResultName).Data.ArrayNum = local_278.Data.ArrayNum;
      (this->LastHitResultName).Data.ArrayMax = local_278.Data.ArrayMax;
      local_278.Data.ArrayNum = 0;
      local_278.Data.ArrayMax = 0;
      local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
  }
  else {
    dVar15 = (double)GTargetRayCastLength;
    if (dVar15 != (param_3->CameraPose).TargetDistance) {
      pFVar2->TargetDistance = true;
      (param_3->CameraPose).TargetDistance = dVar15;
    }
  }
  if (((this->AutoFocusReader).DefaultValuePtr == (bool *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->AutoFocusReader).VariableID.Value == 0xffffffff) ||
     (pbVar13 = FCameraVariableTable::FindValue<bool>
                          (&param_3->VariableTable,
                           (FCameraVariableID)(this->AutoFocusReader).VariableID.Value),
     pbVar13 == (bool *)0x0)) {
    pbVar13 = (this->AutoFocusReader).DefaultValuePtr;
  }
  if ((*pbVar13 != false) &&
     (fVar14 = (float)(param_3->CameraPose).TargetDistance,
     fVar14 != (param_3->CameraPose).FocusDistance)) {
    pFVar2->FocusDistance = true;
    (param_3->CameraPose).FocusDistance = fVar14;
  }
  if (local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_d8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_d8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return;
}

