// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 28

// StaticStruct @ 14a70e570

UScriptStruct * __cdecl FAnimNode_OffsetRootBone::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar1,
                         L"AnimNode_OffsetRootBone");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton;
}

// GatherDebugData @ 14a70e5b0

void __thiscall
FAnimNode_OffsetRootBone::GatherDebugData(FAnimNode_OffsetRootBone *this,FNodeDebugData *param_1)

{
  UEnum *this_00;
  ForAnyElementType _Src;
  EOffsetRootBoneMode EVar1;
  UScriptStruct *pUVar2;
  UPackage *pUVar3;
  int iVar4;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  pUVar2 = FAnimNode_Base::StaticStruct();
  local_res8 = (FName)pUVar2->_padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(&local_48,L"%s<W:%.1f%%> %s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(local_38,L"Non Overriden GatherDebugData! (%s)");
  FNodeDebugData::AddDebugItem(param_1,local_38,false);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar3,
                         L"AnimNode_OffsetRootBone");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(&local_68,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  if (Z_Registration_Info_UEnum_EOffsetRootBoneMode.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UEnum_EOffsetRootBoneMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode,
                       (UObject *)pUVar3,L"EOffsetRootBoneMode");
  }
  this_00 = Z_Registration_Info_UEnum_EOffsetRootBoneMode.OuterSingleton;
  if (Z_Registration_Info_UEnum_EOffsetRootBoneMode.OuterSingleton != (UEnum *)0x0) {
    EVar1 = GetTranslationMode(this);
    UEnum::GetNameStringByIndex(this_00,local_38,(uint)EVar1);
    ::FString::PrintfImpl(&local_48,L"\n - Translation Mode: (%s)");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
    EVar1 = GetRotationMode(this);
    UEnum::GetNameStringByIndex(this_00,local_38,(uint)EVar1);
    ::FString::PrintfImpl(&local_48,L"\n - Rotation Mode: (%s)");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  GetTranslationHalflife(this);
  ::FString::PrintfImpl(&local_48,L"\n - Translation Halflife: (%.3fd)");
  iVar4 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  GetRotationHalfLife(this);
  ::FString::PrintfImpl(&local_48,L"\n - Rotation Halflife: (%.3fd)");
  iVar4 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_68.Data.AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_68.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_68.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_68.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_58,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->Source,param_1);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// Update_AnyThread @ 14a70e980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_OffsetRootBone::Update_AnyThread
          (FAnimNode_OffsetRootBone *this,FAnimationUpdateContext *param_1)

{
  double dVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  FExposedValueHandler *this_00;
  UPackage *pUVar18;
  FNodeDataId *pFVar19;
  char *pcVar20;
  TReferenceControllerBase<1> *pTVar21;
  FName FVar22;
  FNodeDataId local_c8;
  FNodeDataId local_b8;
  TSharedRef<UE::Anim::IGraphMessage,1> local_a8;
  FScopedGraphMessage local_98;
  double local_88;
  double dStack_80;
  double local_78;
  
  FAnimNode_Base::Update_AnyThread((FAnimNode_Base *)this,param_1);
  this->CachedDeltaTime = param_1->DeltaTime;
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  if (CachedId_bResetEveryFrame.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bResetEveryFrame,"bResetEveryFrame");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar18 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar18,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar19 = UE::Anim::FNodeDataId::FNodeDataId
                        (&local_b8,AnimName_bResetEveryFrame,(FAnimNode_Base *)this,
                         Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_bResetEveryFrame.Id = pFVar19->Id;
    CachedId_bResetEveryFrame.Index = pFVar19->Index;
  }
  iVar14 = CachedId_bResetEveryFrame.Index;
  FVar22 = CachedId_bResetEveryFrame.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3e1,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_c8.Id = FVar22;
  local_c8.Index = iVar14;
  pcVar20 = FAnimNodeData::GetData
                      (*(FAnimNodeData **)&this->field_0x8,&local_c8,(FAnimNode_Base *)this,
                       (UObject *)0x0);
  if ((*pcVar20 != '\0') ||
     ((((this->bIsFirstUpdate == false && ((this->UpdateCounter).Counter != -1)) &&
       ((this->UpdateCounter).LastSyncronizedFrame != 0xffffffffffffffff)) &&
      (bVar17 = FGraphTraversalCounter::WasSynchronizedCounter
                          (&this->UpdateCounter,
                           (FGraphTraversalCounter *)(param_1->_padding_ + 0x5a8)), !bVar17)))) {
    lVar2 = param_1->_padding_;
    dVar1 = *(double *)(lVar2 + 0x28);
    (this->ComponentTransform).Rotation.XY.m128d_f64[0] = *(double *)(lVar2 + 0x20);
    (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar1;
    dVar1 = *(double *)(lVar2 + 0x38);
    (this->ComponentTransform).Rotation.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x30);
    (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar1;
    dVar1 = *(double *)(lVar2 + 0x48);
    (this->ComponentTransform).Translation.XY.m128d_f64[0] = *(double *)(lVar2 + 0x40);
    (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar1;
    dVar1 = *(double *)(lVar2 + 0x58);
    (this->ComponentTransform).Translation.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x50);
    (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar1;
    dVar1 = *(double *)(lVar2 + 0x68);
    (this->ComponentTransform).Scale3D.XY.m128d_f64[0] = *(double *)(lVar2 + 0x60);
    (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar1;
    dVar1 = *(double *)(lVar2 + 0x78);
    (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x70);
    (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
    local_88 = (this->ComponentTransform).Translation.XY.m128d_f64[0];
    dStack_80 = (this->ComponentTransform).Translation.XY.m128d_f64[1];
    local_78 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
    (this->SimulatedTranslation).field0_0x0._s_0.X = local_88;
    (this->SimulatedTranslation).field0_0x0._s_0.Y = dStack_80;
    (this->SimulatedTranslation).field0_0x0._s_0.Z = local_78;
    dVar1 = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
    dVar4 = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
    dVar5 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    (this->SimulatedRotation).X = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
    (this->SimulatedRotation).Y = dVar1;
    (this->SimulatedRotation).Z = dVar4;
    (this->SimulatedRotation).W = dVar5;
    this->bIsFirstUpdate = true;
  }
  uVar15 = _UNK_150689688;
  lVar13 = ___xmm_3ff00000000000003ff0000000000000;
  uVar11 = _UNK_150689518;
  lVar10 = ___xmm_00000000000000003ff0000000000000;
  lVar2 = param_1->_padding_;
  (this->UpdateCounter).Counter = *(short *)(lVar2 + 0x5b0);
  (this->UpdateCounter).LastSyncronizedFrame = *(ulong64 *)(lVar2 + 0x5a8);
  (this->UpdateCounter).SkipFrames = *(short *)(lVar2 + 0x5b2);
  dVar4 = (this->SimulatedRotation).X;
  dVar5 = (this->SimulatedRotation).Y;
  dVar6 = (this->SimulatedRotation).Z;
  dVar7 = (this->SimulatedRotation).W;
  dVar8 = (this->SimulatedTranslation).field0_0x0._s_0.X;
  dVar9 = (this->SimulatedTranslation).field0_0x0._s_0.Y;
  dVar1 = (this->SimulatedTranslation).field0_0x0._s_0.Z;
  UE::Anim::FScopedGraphMessage::FScopedGraphMessage(&local_98,(FAnimationBaseContext *)param_1);
  pTVar21 = ::operator_new(0x80);
  if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
    pTVar21 = (TReferenceControllerBase<1> *)0x0;
    local_a8.Object = (IGraphMessage *)___xmm_00000000000000000000000000000010;
    local_a8.SharedReferenceCount.ReferenceController = _UNK_150651568;
    FVar22 = UE::AnimationWarping::FRootOffsetProvider::TypeName;
  }
  else {
    pTVar21->SharedReferenceCount = (atomic<int>)0x1;
    pTVar21->WeakReferenceCount = (atomic<int>)0x1;
    pTVar21->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFRootOffsetProvider_AnimationWarping_UE___00_SharedPointerInternals__6B_
    ;
    pTVar21[1]._padding_ = (longlong)&___7FRootOffsetProvider_AnimationWarping_UE__6B_;
    pTVar21[2]._padding_ = (longlong)dVar4;
    *(double *)&pTVar21[2].SharedReferenceCount = dVar5;
    pTVar21[3]._padding_ = (longlong)dVar6;
    *(double *)&pTVar21[3].SharedReferenceCount = dVar7;
    pTVar21[4]._padding_ = (longlong)dVar8;
    *(double *)&pTVar21[4].SharedReferenceCount = dVar9;
    pTVar21[5]._padding_ = (longlong)dVar1;
    pTVar21[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar21[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar21[6]._padding_ = lVar13;
    uVar16 = _UNK_150689688;
    _UNK_150689688 = (undefined4)uVar15;
    _UNK_15068968c = SUB84(uVar15,4);
    uVar12 = _UNK_15068968c;
    pTVar21[6].SharedReferenceCount = (atomic<int>)_UNK_150689688;
    _UNK_150689688 = uVar16;
    pTVar21[6].WeakReferenceCount = (atomic<int>)uVar12;
    pTVar21[7]._padding_ = lVar10;
    uVar15 = _UNK_150689518;
    _UNK_150689518 = (undefined4)uVar11;
    _UNK_15068951c = SUB84(uVar11,4);
    uVar12 = _UNK_15068951c;
    pTVar21[7].SharedReferenceCount = (atomic<int>)_UNK_150689518;
    _UNK_150689518 = uVar15;
    pTVar21[7].WeakReferenceCount = (atomic<int>)uVar12;
    if ((pTVar21 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar17)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar22 = UE::AnimationWarping::FRootOffsetProvider::TypeName;
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
    local_a8.Object = (IGraphMessage *)(pTVar21 + 1);
    local_a8.SharedReferenceCount.ReferenceController = pTVar21;
  }
  UE::Anim::FScopedGraphMessage::PushMessage
            (&local_98,(FAnimationBaseContext *)param_1,&local_a8,FVar22);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  FPoseLinkBase::Update((FPoseLinkBase *)&this->Source,param_1);
  UE::Anim::FScopedGraphMessage::PopMessage(&local_98);
  return;
}

// Evaluate_AnyThread @ 14a70ed50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_OffsetRootBone::Evaluate_AnyThread(FAnimNode_OffsetRootBone *this,FPoseContext *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  double *pdVar4;
  FAnimInstanceProxy *pFVar5;
  double (*padVar6) [2];
  UObject *pUVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double adVar10 [2];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  bool bVar23;
  bool bVar24;
  bool bVar25;
  float fVar26;
  FName FVar27;
  TConsoleVariableData<int> *pTVar28;
  FPoseContext *pFVar29;
  bool bVar30;
  bool bVar31;
  EOffsetRootBoneMode EVar32;
  EOffsetRootBoneMode EVar33;
  bool bVar34;
  EOffsetRootBone_CollisionTestingMode EVar35;
  bool bVar36;
  char cVar37;
  ECollisionChannel EVar38;
  int iVar39;
  int iVar40;
  FName *pFVar41;
  FThreadSafeStaticStat<FStat_STAT_OffsetRootBone_Eval> FVar42;
  UPackage *pUVar43;
  FNodeDataId *pFVar44;
  char *pcVar45;
  TRotator<double> *this_00;
  float *pfVar46;
  UScriptStruct *pUVar47;
  TVector<double> *pTVar48;
  USkeletalMeshComponent *pUVar49;
  UWorld *this_01;
  longlong lVar50;
  bool *pbVar51;
  TQuat<double> *pTVar52;
  TQuat<double> *extraout_RAX;
  TQuat<double> *extraout_RAX_00;
  TTransform<double> *pTVar53;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar54;
  FAnimNode_OffsetRootBone *pFVar55;
  TQuat<double> *this_04;
  FName FVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  double extraout_XMM0_Qa;
  double dVar65;
  undefined8 uVar66;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  undefined1 auVar67 [16];
  undefined1 extraout_var [12];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar73 [16];
  double extraout_XMM0_Qb_00;
  double extraout_XMM0_Qb_01;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  double dVar94;
  double dVar115;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  double dVar116;
  undefined1 auVar100 [16];
  undefined8 uVar95;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined8 uVar117;
  double in_XMM2 [2];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined4 uVar135;
  uint uVar136;
  undefined1 auVar134 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  __m128 _Var142;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  double adVar145 [2];
  double dVar146;
  double dVar147;
  double dVar151;
  __m128 _Var148;
  double dVar152;
  undefined1 auVar149 [16];
  double adVar150 [2];
  undefined4 uVar153;
  undefined4 uVar154;
  undefined4 uVar155;
  double dVar156;
  double dVar157;
  double dVar161;
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  double dVar162;
  undefined1 auVar160 [16];
  double dVar163;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined4 uVar166;
  undefined4 uVar167;
  undefined1 auStackY_1608 [32];
  bool local_15a8;
  undefined1 local_15a2 [2];
  float local_15a0;
  FName local_1598;
  TVector<double>_u_0 local_1590;
  FColor_u_0 local_1578;
  float local_1574;
  float local_1570;
  float local_156c;
  float local_1568 [2];
  FPoseContext *local_1560;
  undefined1 local_1558 [16];
  FName local_1548;
  TVector<double>_u_0 local_1540;
  undefined1 local_1528 [16];
  undefined1 local_1518 [16];
  FName local_1508;
  undefined1 local_14f8 [16];
  undefined1 local_14e8 [16];
  TVector<double>_u_0 local_14d8;
  FName local_14c0;
  FName local_14b8;
  LARGE_INTEGER local_14b0;
  FName local_14a8;
  FStatMessage local_14a0;
  FNodeDataId local_1488;
  FNodeDataId local_1478;
  FNodeDataId local_1468;
  FNodeDataId local_1458;
  FNodeDataId local_1448;
  FNodeDataId local_1438;
  FNodeDataId local_1428;
  FNodeDataId local_1418;
  undefined4 local_1408;
  FNodeDataId local_13f8;
  FNodeDataId local_13e8;
  double local_13d8;
  undefined1 local_13d0 [24];
  FNodeDataId local_13b8;
  FName local_13a8;
  FName local_13a0;
  FName local_1398;
  TVector<double>_u_0 local_1390;
  TVector<double>_u_0 local_1378;
  double local_1360;
  double dStack_1358;
  double local_1350;
  TVector<double>_u_0 local_1348;
  double local_1328;
  double dStack_1320;
  FCollisionShape local_1318;
  double local_1308;
  double dStack_1300;
  TVector<double>_u_0 local_12f8;
  TVector<double>_u_0 local_12e0;
  TVector<double>_u_0 local_12c8;
  TVector<double>_u_0 local_12b0;
  TVector<double>_u_0 local_1298;
  TVector<double>_u_0 local_1280;
  TVector<double>_u_0 local_1268;
  TVector<double>_u_0 local_1250;
  TVector<double>_u_0 local_1238;
  TVector<double>_u_0 local_1220;
  TVector<double>_u_0 local_1208;
  TVector<double>_u_0 local_11f0;
  TVector<double>_u_0 local_11d8;
  TVector<double>_u_0 local_11c0;
  TVector<double>_u_0 local_11a8;
  double local_1190 [2];
  double local_1180;
  TVector<double>_u_0 local_1178;
  TVector<double>_u_0 local_1160;
  TVector<double>_u_0 local_1148;
  TVector<double>_u_0 local_1130;
  TVector<double>_u_0 local_1118;
  TVector<double>_u_0 local_1100;
  TVector<double>_u_0 local_10e8;
  TVector<double>_u_0 local_10d0;
  double local_10b8;
  double dStack_10b0;
  FName local_1098;
  double local_1090;
  undefined8 local_1088;
  undefined8 local_1080;
  undefined8 local_1078;
  TVector<double>_u_0 local_1070;
  TVector<double>_u_0 local_1058;
  double local_1038;
  double dStack_1030;
  double local_1028;
  TVector<double>_u_0 local_1018;
  double local_ff8;
  double dStack_ff0;
  double local_fe8;
  TVector<double>_u_0 local_fd8;
  double local_fb8;
  double dStack_fb0;
  double local_fa8;
  TVector<double>_u_0 local_f98;
  TVector<double>_u_0 local_f78;
  double local_f58;
  double dStack_f50;
  double local_f48;
  undefined1 local_f40 [16];
  double local_f30;
  TVector<double>_u_0 local_f28;
  TVector<double>_u_0 local_f08;
  TVector<double>_u_0 local_ee8;
  double local_ec8;
  double dStack_ec0;
  double local_eb8;
  TVector<double>_u_0 local_ea8;
  double local_e88;
  double dStack_e80;
  double local_e78;
  TVector<double>_u_0 local_e70;
  TVector<double>_u_0 local_e58;
  TVector<double>_u_0 local_e40;
  TVector<double>_u_0 local_e28;
  double local_e08;
  double dStack_e00;
  TQuat<double> local_df8;
  TQuat<double> local_dd8;
  TQuat<double> local_db8;
  undefined1 local_d98 [16];
  undefined1 local_d88 [16];
  TQuat<double> local_d78;
  TQuat<double> local_d58;
  TQuat<double> local_d38;
  TQuat<double> local_d18;
  TQuat<double> local_cf8;
  TQuat<double> local_cd8;
  TQuat<double> local_cb8;
  TQuat<double> local_c98;
  TQuat<double> local_c78;
  TQuat<double> local_c58;
  double local_c38;
  double dStack_c30;
  double local_c28;
  double local_c20 [2];
  double local_c10;
  double local_c08;
  double dStack_c00;
  double local_bf8;
  double local_bf0;
  double dStack_be8;
  double local_be0;
  undefined1 local_bd8 [16];
  double local_bc8;
  undefined1 local_bc0 [16];
  double local_bb0;
  double local_ba8;
  double dStack_ba0;
  double local_b98;
  double local_b90;
  double dStack_b88;
  double local_b80;
  double local_b78;
  double dStack_b70;
  double local_b68;
  double local_b60;
  double dStack_b58;
  double local_b50;
  undefined1 local_b48 [16];
  double local_b38;
  double local_b30;
  double dStack_b28;
  double local_b20;
  TVector<double> local_b18;
  double local_b00;
  double dStack_af8;
  double local_af0;
  double local_ae8;
  double dStack_ae0;
  double local_ad8;
  FNodeDataId local_ad0;
  FNodeDataId local_ac4;
  double local_ab8;
  double dStack_ab0;
  double local_aa8;
  FNodeDataId local_aa0;
  FNodeDataId local_a94;
  FNodeDataId local_a88;
  FNodeDataId local_a7c;
  FNodeDataId local_a70;
  FNodeDataId local_a64;
  FNodeDataId local_a58;
  FNodeDataId local_a4c;
  FNodeDataId local_a40;
  double local_a30 [2];
  double local_a20;
  double local_a18;
  double dStack_a10;
  double local_a08;
  undefined1 local_a00 [16];
  double local_9f0;
  undefined1 local_9e8 [16];
  double local_9d8;
  undefined1 local_9c8 [16];
  undefined1 local_9b8 [16];
  double local_9a8;
  double dStack_9a0;
  double local_998;
  double dStack_990;
  double local_988;
  double dStack_980;
  undefined1 local_978 [16];
  TQuat<double> local_968;
  double local_948;
  double dStack_940;
  undefined1 local_938 [16];
  undefined1 local_928 [16];
  undefined1 local_918 [16];
  TVector<double> local_908;
  TVector<double> local_8f0;
  TVector<double> local_8d8;
  TVector<double> local_8c0;
  TVector<double> local_8a8;
  TVector<double> local_890;
  TQuat<double> local_878;
  TQuat<double> local_858;
  TQuat<double> local_838;
  undefined1 local_818 [48];
  double dStack_7e8;
  double local_7e0;
  double local_7c0;
  double dStack_7b8;
  double local_7b0;
  double local_6d8;
  double dStack_6d0;
  double local_6c8;
  double dStack_6c0;
  TTransform<double> local_6b8;
  TTransform<double> local_658;
  TTransform<double> local_5f8;
  TTransform<double> local_598;
  TTransform<double> local_538;
  TTransform<double> local_4d8;
  TTransform<double> local_478;
  TTransform<double> local_418;
  TTransform<double> local_3b8;
  TTransform<double> local_358;
  TTransform<double> local_2f8;
  TTransform<double> local_298;
  TTransform<double> local_238;
  FCollisionQueryParams local_1d8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1608;
  FVar42 = StatPtr_STAT_OffsetRootBone_Eval;
  local_1560 = param_1;
  if (StatPtr_STAT_OffsetRootBone_Eval == (FThreadSafeStaticStat<FStat_STAT_OffsetRootBone_Eval>)0x0
     ) {
    pFVar41 = ::FName::FName(&local_1098,"STAT_OffsetRootBone_Eval");
    FVar42 = (FThreadSafeStaticStat<FStat_STAT_OffsetRootBone_Eval>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OffsetRootBone_Eval,*pFVar41,
                        L"OffsetRootBone Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar56 = *(FName *)FVar42;
  bVar23 = false;
  bVar25 = false;
  local_1508.ComparisonIndex.Value = 0;
  local_1508.Number = 0;
  bVar30 = false;
  bVar31 = false;
  if ((FVar56.ComparisonIndex.Value.Value == 0) && (FVar56.Number == 0)) {
LAB_14a70eedd:
    bVar25 = bVar31;
    bVar23 = bVar30;
    bVar30 = false;
    FVar56 = local_1508;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1578.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1578._s_0,(char *)*(FName *)((longlong)FVar42 + 0x10));
      bVar23 = false;
      bVar25 = true;
      bVar30 = false;
      bVar31 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1548.ComparisonIndex.Value = FVar56.ComparisonIndex.Value.Value;
        local_1548.Number = FVar56.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1548,(wchar_t *)*(FName *)((longlong)FVar42 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_OffsetRootBone.cpp"
                   ,0x7c);
        bVar23 = true;
        bVar25 = true;
        bVar30 = true;
        bVar31 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14a70eedd;
    local_1598 = FVar56;
    FThreadStats::AddMessage(FVar56,CycleScopeStart);
    bVar30 = true;
  }
  FAnimNode_Base::Evaluate_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLink::Evaluate(&this->Source,param_1);
  pTVar28 = CVarAnimNodeOffsetRootBoneEnable.Ref;
  bVar31 = IsInParallelGameThread();
  if (bVar31) {
LAB_14a70ef1a:
    lVar50 = 0;
  }
  else {
    bVar31 = IsInGameThread();
    lVar50 = 4;
    if (bVar31) goto LAB_14a70ef1a;
  }
  if (*(int *)((longlong)pTVar28->ShadowedValue + lVar50) == 0) goto LAB_14a712523;
  local_15a8 = false;
  local_1598 = (FName)UE::Anim::IAnimRootMotionProvider::Get();
  if (CachedId_EvaluationMode.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_EvaluationMode,"EvaluationMode");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar43 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar43,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar44 = UE::Anim::FNodeDataId::FNodeDataId
                        (&local_ad0,AnimName_EvaluationMode,(FAnimNode_Base *)this,
                         Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_EvaluationMode.Id = pFVar44->Id;
    CachedId_EvaluationMode.Index = pFVar44->Index;
  }
  iVar3 = CachedId_EvaluationMode.Index;
  FVar27 = CachedId_EvaluationMode.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3e1,L""), bVar31)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_1488.Id = FVar27;
  local_1488.Index = iVar3;
  pcVar45 = FAnimNodeData::GetData
                      (*(FAnimNodeData **)&this->field_0x8,&local_1488,(FAnimNode_Base *)this,
                       (UObject *)0x0);
  FVar27 = local_1598;
  if ((*pcVar45 == '\x01') && (local_15a8 = local_1598 != (FName)0x0, local_1598 == (FName)0x0)) {
    local_15a2[0] = 0;
    `FAnimNode_OffsetRootBone::Evaluate_AnyThread'::__l8::<lambda_1>::operator()(local_15a2);
  }
  if ((*(int *)&(param_1->Pose).field_0x8 < 1) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar31)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pdVar4 = *(double **)&param_1->Pose;
  auVar128 = *(undefined1 (*) [16])(this->ComponentTransform).Translation.XY.m128d_f64;
  dVar65 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
  dStack_10b0 = (this->ComponentTransform).Translation.ZW.m128d_f64[1];
  local_4d8.Rotation.XY.m128d_f64[0] = *pdVar4;
  local_4d8.Rotation.XY.m128d_f64[1] = pdVar4[1];
  local_4d8.Rotation.ZW.m128d_f64[0] = pdVar4[2];
  local_4d8.Rotation.ZW.m128d_f64[1] = pdVar4[3];
  local_4d8.Translation.XY.m128d_f64[0] = pdVar4[4];
  local_4d8.Translation.XY.m128d_f64[1] = pdVar4[5];
  local_4d8.Translation.ZW.m128d_f64[0] = pdVar4[6];
  local_4d8.Translation.ZW.m128d_f64[1] = pdVar4[7];
  local_4d8.Scale3D.XY.m128d_f64[0] = pdVar4[8];
  local_4d8.Scale3D.XY.m128d_f64[1] = pdVar4[9];
  local_4d8.Scale3D.ZW.m128d_f64[0] = pdVar4[10];
  local_4d8.Scale3D.ZW.m128d_f64[1] = pdVar4[0xb];
  local_1558 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
  pFVar5 = this->AnimInstanceProxy;
  local_6c8 = (this->ComponentTransform).Scale3D.ZW.m128d_f64[0];
  dStack_6c0 = (this->ComponentTransform).Scale3D.ZW.m128d_f64[1];
  local_e08 = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
  dStack_e00 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
  local_6d8 = (this->ComponentTransform).Scale3D.XY.m128d_f64[0];
  dStack_6d0 = (this->ComponentTransform).Scale3D.XY.m128d_f64[1];
  dVar94 = (pFVar5->ComponentTransform).Rotation.XY.m128d_f64[1];
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] =
       (pFVar5->ComponentTransform).Rotation.XY.m128d_f64[0];
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar94;
  dVar94 = (pFVar5->ComponentTransform).Rotation.ZW.m128d_f64[1];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] =
       (pFVar5->ComponentTransform).Rotation.ZW.m128d_f64[0];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar94;
  dVar94 = (pFVar5->ComponentTransform).Translation.XY.m128d_f64[1];
  (this->ComponentTransform).Translation.XY.m128d_f64[0] =
       (pFVar5->ComponentTransform).Translation.XY.m128d_f64[0];
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar94;
  dVar94 = (pFVar5->ComponentTransform).Translation.ZW.m128d_f64[1];
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] =
       (pFVar5->ComponentTransform).Translation.ZW.m128d_f64[0];
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar94;
  dVar94 = (pFVar5->ComponentTransform).Scale3D.XY.m128d_f64[1];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] =
       (pFVar5->ComponentTransform).Scale3D.XY.m128d_f64[0];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar94;
  dVar94 = (pFVar5->ComponentTransform).Scale3D.ZW.m128d_f64[1];
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] =
       (pFVar5->ComponentTransform).Scale3D.ZW.m128d_f64[0];
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar94;
  local_13d0._0_16_ = auVar128;
  local_10b8 = dVar65;
  EVar32 = GetTranslationMode(this);
  EVar33 = GetRotationMode(this);
  switch(EVar32) {
  case Accumulate:
  case Interpolate:
  case LockOffsetAndConsumeAnimation:
  case LockOffsetIncreaseAndConsumeAnimation:
    bVar31 = true;
    break;
  default:
    bVar31 = false;
  }
  switch(EVar33) {
  case Accumulate:
  case Interpolate:
  case LockOffsetAndConsumeAnimation:
  case LockOffsetIncreaseAndConsumeAnimation:
    bVar24 = true;
    break;
  default:
    bVar24 = false;
  }
  local_6b8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_6b8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_6b8.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_6b8.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_6b8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_6b8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if (local_15a8 == false) {
    if (CachedId_TranslationDelta.Index == -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&AnimName_TranslationDelta,"TranslationDelta");
        _Init_thread_footer(&::_TSS1);
      }
      pUVar47 = StaticStruct();
      pFVar44 = UE::Anim::FNodeDataId::FNodeDataId
                          (&local_ac4,AnimName_TranslationDelta,(FAnimNode_Base *)this,pUVar47);
      CachedId_TranslationDelta.Id = pFVar44->Id;
      CachedId_TranslationDelta.Index = pFVar44->Index;
    }
    local_1478.Id = CachedId_TranslationDelta.Id;
    local_1478.Index = CachedId_TranslationDelta.Index;
    pTVar48 = FAnimNode_Base::GetData<UE::Math::TVector<double>_>
                        ((FAnimNode_Base *)this,&local_1478,(UObject *)0x0);
    if (CachedId_RotationDelta.Index == -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&AnimName_RotationDelta,"RotationDelta");
        _Init_thread_footer(&::_TSS1);
      }
      pUVar47 = StaticStruct();
      pFVar44 = UE::Anim::FNodeDataId::FNodeDataId
                          (&local_aa0,AnimName_RotationDelta,(FAnimNode_Base *)this,pUVar47);
      CachedId_RotationDelta.Id = pFVar44->Id;
      CachedId_RotationDelta.Index = pFVar44->Index;
    }
    iVar3 = CachedId_RotationDelta.Index;
    FVar27 = CachedId_RotationDelta.Id;
    if ((*(longlong *)&this->field_0x8 == 0) &&
       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                           ("NodeData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                            ,0x3e1,L""), bVar34)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_1468.Id = FVar27;
    local_1468.Index = iVar3;
    this_00 = FAnimNodeData::GetData
                        (*(FAnimNodeData **)&this->field_0x8,&local_1468,(FAnimNode_Base *)this,
                         (UObject *)0x0);
    pTVar52 = UE::Math::TRotator<double>::Quaternion(this_00,&local_878);
    local_6b8.Rotation.XY.m128d_f64[0] = pTVar52->X;
    local_6b8.Rotation.XY.m128d_f64[1] = pTVar52->Y;
    local_6b8.Rotation.ZW.m128d_f64[0] = pTVar52->Z;
    local_6b8.Rotation.ZW.m128d_f64[1] = pTVar52->W;
    in_XMM2 = *(double (*) [2])&pTVar48->field0_0x0;
    local_6b8.Translation.ZW.m128d_f64[1] = 0.0;
    local_6b8.Translation.ZW.m128d_f64[0] = (pTVar48->field0_0x0)._s_0.Z;
    local_6b8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_6b8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_6b8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_6b8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_9a8 = local_6b8.Rotation.XY.m128d_f64[0];
    dStack_9a0 = local_6b8.Rotation.XY.m128d_f64[1];
    local_998 = local_6b8.Rotation.ZW.m128d_f64[0];
    dStack_990 = local_6b8.Rotation.ZW.m128d_f64[1];
    local_6b8.Translation.XY.m128d_f64 = in_XMM2;
  }
  else {
    local_15a8 = (bool)(**(code **)(*(longlong *)FVar27 + 0x20))
                                 (FVar27,&local_1560->CustomAttributes,&local_6b8);
  }
  dVar94 = local_6b8.Rotation.XY.m128d_f64[0] * local_6b8.Rotation.XY.m128d_f64[0] +
           local_6b8.Rotation.ZW.m128d_f64[0] * local_6b8.Rotation.ZW.m128d_f64[0];
  dVar115 = local_6b8.Rotation.XY.m128d_f64[1] * local_6b8.Rotation.XY.m128d_f64[1] +
            local_6b8.Rotation.ZW.m128d_f64[1] * local_6b8.Rotation.ZW.m128d_f64[1];
  auVar118._8_4_ = SUB84(dVar115,0);
  auVar118._0_8_ = dVar94;
  auVar118._12_4_ = (int)((ulonglong)dVar115 >> 0x20);
  auVar96._0_8_ = auVar118._8_8_ + dVar94;
  auVar96._8_8_ = dVar94 + dVar115;
  auVar118 = sqrtpd((undefined1  [16])in_XMM2,auVar96);
  uVar57 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar96._0_8_);
  uVar59 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar96._8_8_);
  uVar58 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar96._0_8_);
  uVar60 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar96._8_8_);
  auVar96 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar118);
  auVar118 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar118);
  auVar97._0_8_ = (ulonglong)(auVar96._0_8_ * local_6b8.Rotation.XY.m128d_f64[0]) & uVar57;
  uVar2 = uVar59 & (ulonglong)(auVar96._8_8_ * local_6b8.Rotation.XY.m128d_f64[1]);
  auVar97._8_4_ = (undefined4)uVar2;
  auVar97._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar124._0_4_ = ~(uint)uVar57 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar124._4_4_ = ~(uint)(uVar57 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_
  ;
  auVar124._8_4_ = ~(uint)uVar59 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar124._12_4_ =
       ~(uint)(uVar59 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
  auVar67._0_8_ = (ulonglong)(auVar118._0_8_ * local_6b8.Rotation.ZW.m128d_f64[0]) & uVar58;
  uVar2 = uVar60 & (ulonglong)(auVar118._8_8_ * local_6b8.Rotation.ZW.m128d_f64[1]);
  auVar67._8_4_ = (undefined4)uVar2;
  auVar67._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar132._0_4_ = ~(uint)uVar58 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar132._4_4_ = ~(uint)(uVar58 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_
  ;
  auVar132._8_4_ = ~(uint)uVar60 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar132._12_4_ =
       ~(uint)(uVar60 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  local_6b8.Rotation.XY.m128d_f64 = (double  [2])(auVar97 | auVar124);
  local_6b8.Rotation.ZW.m128d_f64 = (double  [2])(auVar67 | auVar132);
  if (CachedId_MaxTranslationError.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_MaxTranslationError,"MaxTranslationError");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar43 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar43,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar44 = UE::Anim::FNodeDataId::FNodeDataId
                        (&local_a94,AnimName_MaxTranslationError,(FAnimNode_Base *)this,
                         Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_MaxTranslationError.Id = pFVar44->Id;
    CachedId_MaxTranslationError.Index = pFVar44->Index;
  }
  iVar3 = CachedId_MaxTranslationError.Index;
  FVar27 = CachedId_MaxTranslationError.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3e1,L""), bVar34)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_1458.Id = FVar27;
  local_1458.Index = iVar3;
  pfVar46 = FAnimNodeData::GetData
                      (*(FAnimNodeData **)&this->field_0x8,&local_1458,(FAnimNode_Base *)this,
                       (UObject *)0x0);
  bVar34 = false;
  fVar63 = *pfVar46;
  local_15a0 = fVar63;
  EVar35 = GetCollisionTestingMode(this);
  dVar115 = _UNK_15061cbc8;
  dVar94 = ___xmm_3ff00000000000000000000000000000;
  dVar157 = __real_3e45798ee0000000;
  dVar147 = __real_3ff0000000000000;
  uVar166 = SUB84(__real_3ff0000000000000,0);
  uVar167 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar153 = SUB84(__real_3e45798ee0000000,0);
  uVar155 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  if ((EVar35 != Disabled) && (0.0 < fVar63)) {
    local_1318.field1_0x4.Box.HalfExtentX = GetCollisionTestShapeRadius(this);
    dVar116 = local_6b8.Translation.XY.m128d_f64[0];
    auVar11._4_8_ = extraout_var._4_8_;
    auVar11._0_4_ = local_6b8.Translation.XY.m128d_f64[0]._4_4_;
    auVar68._0_8_ = auVar11._0_8_ << 0x20;
    auVar68._8_4_ = local_6b8.Translation.XY.m128d_f64[1]._0_4_;
    auVar68._12_4_ = local_6b8.Translation.XY.m128d_f64[1]._4_4_;
    local_1318.ShapeType = Sphere;
    local_1180 = 0.0;
    local_a30[0] = local_6b8.Translation.XY.m128d_f64[0];
    local_a30[1] = local_6b8.Translation.XY.m128d_f64[1];
    local_a20 = local_6b8.Translation.ZW.m128d_f64[0];
    if (SQRT(dVar116 * dVar116 + auVar68._8_8_ * auVar68._8_8_ +
             local_6b8.Translation.ZW.m128d_f64[0] * local_6b8.Translation.ZW.m128d_f64[0]) <=
        __real_3fb99999a0000000) {
      dVar147 = (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.X;
      dVar116 = (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.Y;
      dVar152 = (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.Z;
      if (dVar157 < dVar116 * dVar116 + dVar147 * dVar147 + dVar152 * dVar152) goto LAB_14a70f7b7;
      local_e28._s_0.Z = 0.0;
    }
    else {
      local_1180 = local_6b8.Translation.ZW.m128d_f64[0];
      auVar12._4_8_ = dVar115;
      auVar12._0_4_ = local_6b8.Translation.XY.m128d_f64[0]._4_4_;
      auVar125._0_8_ = auVar12._0_8_ << 0x20;
      auVar125._8_4_ = local_6b8.Translation.XY.m128d_f64[1]._0_4_;
      auVar125._12_4_ = local_6b8.Translation.XY.m128d_f64[1]._4_4_;
      dVar94 = auVar125._8_8_;
      local_1190[0] = local_6b8.Translation.XY.m128d_f64[0];
      local_1190[1] = local_6b8.Translation.XY.m128d_f64[1];
      local_1090 = dVar147 / SQRT(dVar94 * dVar94 + dVar116 * dVar116 +
                                  local_6b8.Translation.ZW.m128d_f64[0] *
                                  local_6b8.Translation.ZW.m128d_f64[0]);
      (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.X = local_1090 * dVar116;
      (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.Y = local_1090 * dVar94;
      (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.Z =
           local_1090 * local_6b8.Translation.ZW.m128d_f64[0];
LAB_14a70f7b7:
      dVar94 = (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.X;
      dVar115 = (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.Y;
      local_e28._s_0.Z = (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.Z;
    }
    local_e28._s_0.X = dVar94;
    local_e28._s_0.Y = dVar115;
    UE::Math::TQuat<double>::RotateVector
              (&this->SimulatedRotation,(TVector<double> *)&local_1178._s_0,
               (TVector<double> *)&local_e28._s_0);
    local_1360 = (this->ComponentTransform).Translation.XY.m128d_f64[0];
    dStack_1358 = (this->ComponentTransform).Translation.XY.m128d_f64[1];
    local_1350 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
    if (CachedId_CollisionTestShapeOffset.Index == -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&AnimName_CollisionTestShapeOffset,"CollisionTestShapeOffset");
        _Init_thread_footer(&::_TSS1);
      }
      pUVar47 = StaticStruct();
      pFVar44 = UE::Anim::FNodeDataId::FNodeDataId
                          (&local_a88,AnimName_CollisionTestShapeOffset,(FAnimNode_Base *)this,
                           pUVar47);
      CachedId_CollisionTestShapeOffset.Id = pFVar44->Id;
      CachedId_CollisionTestShapeOffset.Index = pFVar44->Index;
    }
    local_1448.Id = CachedId_CollisionTestShapeOffset.Id;
    local_1448.Index = CachedId_CollisionTestShapeOffset.Index;
    pTVar48 = FAnimNode_Base::GetData<UE::Math::TVector<double>_>
                        ((FAnimNode_Base *)this,&local_1448,(UObject *)0x0);
    local_1148._s_0.X = local_1360 + (pTVar48->field0_0x0)._s_0.X;
    local_1148._s_0.Z = local_1350 + (pTVar48->field0_0x0)._s_0.Z;
    local_1148._s_0.Y = dStack_1358 + (pTVar48->field0_0x0)._s_0.Y;
    dVar94 = (double)fVar63;
    local_1160._s_0.X = local_1178._s_0.X * dVar94 + local_1148._s_0.X;
    local_1160._s_0.Y = local_1178._s_0.Y * dVar94 + local_1148._s_0.Y;
    local_1160._s_0.Z = local_1178._s_0.Z * dVar94 + local_1148._s_0.Z;
    FCollisionQueryParams::FCollisionQueryParams(&local_1d8);
    pUVar49 = FAnimInstanceProxy::GetSkelMeshComponent(this->AnimInstanceProxy);
    FCollisionQueryParams::AddIgnoredActor(&local_1d8,(AActor *)pUVar49->_padding_);
    EVar38 = UEngineTypes::ConvertToCollisionChannel(TraceTypeQuery1);
    FHitResult::FHitResult((FHitResult *)local_818);
    pUVar49 = FAnimInstanceProxy::GetSkelMeshComponent(this->AnimInstanceProxy);
    this_01 = (UWorld *)pUVar49->_padding_;
    if (this_01 == (UWorld *)0x0) {
      this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar49);
    }
    bVar36 = UWorld::SweepSingleByChannel
                       (this_01,(FHitResult *)local_818,(TVector<double> *)&local_1148._s_0,
                        (TVector<double> *)&local_1160._s_0,&UE::Math::TQuat<double>::Identity,
                        EVar38,&local_1318,&local_1d8,
                        &FCollisionResponseParams::DefaultResponseParam);
    if ((bVar36) && ((float)local_818._8_4_ < fVar63)) {
      EVar35 = GetCollisionTestingMode(this);
      if (EVar35 == ShrinkMaxTranslation) {
        local_15a0 = (float)local_818._8_4_;
      }
      bVar34 = true;
      local_1390._s_0.X = (double)local_818._40_8_;
      local_1390._s_0.Y = dStack_7e8;
      local_1390._s_0.Z = local_7e0;
      local_1540._s_0.X = local_7c0;
      local_1540._s_0.Y = dStack_7b8;
      local_1540._s_0.Z = local_7b0;
    }
    if (local_1d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_1d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_1d8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_1d8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  fVar63 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar62 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar61 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar64 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_658.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_658.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_658.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_658.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_658.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_658.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_658.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_658.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_658.Scale3D.XY.m128d_f64[0] = (double)fVar63;
  local_658.Scale3D.XY.m128d_f64[1] = (double)fVar62;
  auVar13._4_8_ = local_658.Translation.ZW.m128d_f64[1];
  auVar13._0_4_ = fVar62;
  auVar98._0_8_ = auVar13._0_8_ << 0x20;
  auVar98._8_4_ = fVar61;
  auVar98._12_4_ = fVar64;
  local_658.Scale3D.ZW.m128d_f64[0] = (double)fVar61;
  local_658.Scale3D.ZW.m128d_f64[1] = (double)fVar64;
  dVar94 = local_658.Scale3D.ZW.m128d_f64[1];
  if (bVar31) {
    dVar94 = 0.0;
    local_a18 = local_6b8.Translation.XY.m128d_f64[0];
    dStack_a10 = local_6b8.Translation.XY.m128d_f64[1];
    local_a08 = local_6b8.Translation.ZW.m128d_f64[0];
    local_658.Translation.XY.m128d_f64[0] = local_6b8.Translation.XY.m128d_f64[0];
    local_658.Translation.XY.m128d_f64[1] = local_6b8.Translation.XY.m128d_f64[1];
    local_658.Translation.ZW.m128d_f64[0] = local_6b8.Translation.ZW.m128d_f64[0];
    local_658.Translation.ZW.m128d_f64[1] = 0.0;
  }
  dVar157 = local_658.Translation.ZW.m128d_f64[0];
  dVar147 = local_658.Translation.XY.m128d_f64[1];
  dVar115 = local_658.Translation.XY.m128d_f64[0];
  dVar116 = auVar98._8_8_;
  if (bVar24) {
    local_658.Rotation.XY.m128d_f64[0] = local_6b8.Rotation.XY.m128d_f64[0];
    local_658.Rotation.XY.m128d_f64[1] = local_6b8.Rotation.XY.m128d_f64[1];
    local_658.Rotation.ZW.m128d_f64[0] = local_6b8.Rotation.ZW.m128d_f64[0];
    local_658.Rotation.ZW.m128d_f64[1] = local_6b8.Rotation.ZW.m128d_f64[1];
    dVar94 = local_6b8.Rotation.XY.m128d_f64[1];
    dVar116 = local_6b8.Rotation.ZW.m128d_f64[1];
  }
  switch(EVar33) {
  case Accumulate:
  case Interpolate:
    break;
  default:
    dVar65 = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
    dVar94 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    dVar116 = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
    dVar152 = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
    dVar156 = (double)local_1558._0_8_ *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar161 = (double)local_1558._8_8_ *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar146 = local_e08 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar151 = dStack_e00 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar126._8_4_ = SUB84(dVar151,0);
    auVar126._0_8_ = dVar146;
    auVar126._12_4_ = (int)((ulonglong)dVar151 >> 0x20);
    auVar69._8_4_ = SUB84(dVar146,0);
    auVar69._0_8_ = dVar146;
    auVar69._12_4_ = (int)((ulonglong)dVar146 >> 0x20);
    dVar162 = dVar156 * dVar94 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
              dVar116 * auVar126._8_8_ +
              dVar65 * dVar161 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              dVar146 * dVar152 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar163 = dVar156 * dVar65 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              dVar152 * dVar151 +
              dVar94 * dVar161 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              auVar69._8_8_ * dVar116 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_1558._8_8_ =
         dVar156 * dVar152 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar65 * auVar126._8_8_ +
         dVar116 * dVar161 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         dVar146 * dVar94 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar152 = dVar156 * dVar116 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar94 * dVar151 +
              dVar152 * dVar161 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar146 * dVar65 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    uVar153 = (undefined4)((ulonglong)dVar152 >> 0x20);
    auVar133._8_4_ = SUB84(dVar152,0);
    auVar133._0_8_ = local_1558._8_8_;
    auVar133._12_4_ = uVar153;
    dVar65 = (this->SimulatedRotation).Z;
    dVar146 = (this->SimulatedRotation).W;
    dVar151 = (this->SimulatedRotation).X;
    dVar156 = (this->SimulatedRotation).Y;
    dVar161 = auVar133._8_8_;
    auVar137._8_4_ = SUB84(dVar162,0);
    auVar137._0_8_ = dVar162;
    auVar137._12_4_ = (int)((ulonglong)dVar162 >> 0x20);
    local_1558._0_8_ = local_1558._8_8_;
    auVar70._8_4_ = SUB84(dVar152,0);
    auVar70._0_8_ = dVar161;
    auVar70._12_4_ = uVar153;
    auVar99._8_4_ = SUB84(dVar163,0);
    auVar99._0_8_ = dVar163;
    auVar99._12_4_ = (int)((ulonglong)dVar163 >> 0x20);
    dVar94 = (double)local_1558._8_8_ * dVar151 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar116 = (double)local_1558._8_8_ * dVar65 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_988 = dVar162 * dVar146 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                + dVar161 * dVar151 +
                dVar163 * dVar65 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                (double)local_1558._8_8_ * dVar156 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dStack_980 = auVar137._8_8_ * dVar65 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 auVar70._8_8_ * dVar156 +
                 auVar99._8_8_ * dVar146 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] + dVar94;
    dVar65 = dVar162 * dVar156 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar161 * dVar65 +
             dVar163 * dVar151 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             (double)local_1558._8_8_ * dVar146 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar152 = dVar162 * dVar151 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar152 * dVar146 +
              dVar163 * dVar156 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar116;
    uVar135 = SUB84(dVar152,0);
    uVar154 = (undefined4)((ulonglong)dVar152 >> 0x20);
    uVar153 = SUB84(__real_3e45798ee0000000,0);
    uVar155 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    uVar166 = SUB84(__real_3ff0000000000000,0);
    uVar167 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    (this->SimulatedRotation).X = local_988;
    (this->SimulatedRotation).Y = dStack_980;
    auVar128._8_4_ = uVar135;
    auVar128._0_8_ = dVar65;
    auVar128._12_4_ = uVar154;
    (this->SimulatedRotation).Z = dVar65;
    (this->SimulatedRotation).W = (double)auVar128._8_8_;
    local_978._8_4_ = uVar135;
    local_978._0_8_ = dVar65;
    local_978._12_4_ = uVar154;
    fVar63 = GlobalVectorConstants::Float1110.m128_f32[0];
    fVar62 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar61 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar64 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar128 = local_13d0._0_16_;
    dVar65 = local_10b8;
  }
  pTVar52 = &this->SimulatedRotation;
  switch(EVar32) {
  case Accumulate:
  case Interpolate:
    break;
  default:
    local_b48 = *(undefined1 (*) [16])(this->ComponentTransform).Translation.XY.m128d_f64;
    local_b38 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
    auVar14._4_8_ = dVar116;
    auVar14._0_4_ = local_b48._4_4_;
    auVar100._0_8_ = auVar14._0_8_ << 0x20;
    auVar100._8_4_ = local_b48._8_4_;
    auVar100._12_4_ = local_b48._12_4_;
    auVar15._4_8_ = dVar94;
    auVar15._0_4_ = auVar128._4_4_;
    auVar71._0_8_ = auVar15._0_8_ << 0x20;
    auVar71._8_4_ = auVar128._8_4_;
    auVar71._12_4_ = auVar128._12_4_;
    (this->SimulatedTranslation).field0_0x0._s_0.X =
         (local_b48._0_8_ - auVar128._0_8_) + (this->SimulatedTranslation).field0_0x0._s_0.X;
    (this->SimulatedTranslation).field0_0x0._s_0.Y =
         (auVar100._8_8_ - auVar71._8_8_) + (this->SimulatedTranslation).field0_0x0._s_0.Y;
    (this->SimulatedTranslation).field0_0x0._s_0.Z =
         (local_b38 - dVar65) + (this->SimulatedTranslation).field0_0x0._s_0.Z;
    fVar63 = GlobalVectorConstants::Float1110.m128_f32[0];
    fVar62 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar61 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar64 = GlobalVectorConstants::Float1110.m128_f32[3];
    local_a00 = auVar128;
    local_9f0 = dVar65;
  }
  _Var142 = GlobalVectorConstants::Float0001;
  _Var148 = GlobalVectorConstants::FloatZero;
  auVar158._8_8_ = local_658.Translation.XY.m128d_f64[1];
  auVar158._0_8_ = local_658.Translation.XY.m128d_f64[0];
  uVar2 = (ulonglong)local_658.Translation.XY.m128d_f64[1] >> 0x20;
  local_1328 = local_658.Translation.ZW.m128d_f64[0];
  dStack_1320 = local_658.Translation.ZW.m128d_f64[1];
  local_1308 = local_658.Translation.XY.m128d_f64[0];
  dStack_1300 = local_658.Translation.XY.m128d_f64[1];
  if (EVar32 == LockOffsetIncreaseAndConsumeAnimation) {
    local_f40 = *(undefined1 (*) [16])(this->ComponentTransform).Translation.XY.m128d_f64;
    local_f30 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
    auVar16._4_8_ = (this->ComponentTransform).Translation.ZW.m128d_f64[1];
    auVar16._0_4_ = local_f40._4_4_;
    auVar72._0_8_ = auVar16._0_8_ << 0x20;
    auVar72._8_4_ = local_f40._8_4_;
    auVar72._12_4_ = local_f40._12_4_;
    local_1130._s_0.Z = (this->SimulatedTranslation).field0_0x0._s_0.Z - local_f30;
    local_1130._s_0.X = (this->SimulatedTranslation).field0_0x0._s_0.X - local_f40._0_8_;
    local_1130._s_0.Y = (this->SimulatedTranslation).field0_0x0._s_0.Y - auVar72._8_8_;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_1130._s_0,(TVector<double> *)&local_1348._s_0,
               (double)CONCAT44(uVar155,uVar153),&UE::Math::TVector<double>::ZeroVector);
    local_f28._s_0.X = local_1348._s_0.X;
    local_f28._s_0.Y = local_1348._s_0.Y;
    local_f28._s_0.Z = local_1348._s_0.Z;
    pTVar48 = UE::Math::TQuat<double>::UnrotateVector
                        (pTVar52,&local_8d8,(TVector<double> *)&local_f28._s_0);
    uVar66 = 0;
    pTVar48 = UE::Math::TVector<double>::GetSafeNormal
                        (pTVar48,&local_8c0,(double)CONCAT44(uVar155,uVar153),
                         &UE::Math::TVector<double>::ZeroVector);
    auVar17._4_8_ = extraout_XMM0_Qb;
    auVar17._0_4_ = (int)((ulonglong)dVar115 >> 0x20);
    auVar73._0_8_ = auVar17._0_8_ << 0x20;
    auVar73._8_4_ = SUB84(dVar147,0);
    auVar73._12_4_ = (int)uVar2;
    local_1348._0_16_ = *(undefined1 (*) [16])&pTVar48->field0_0x0;
    local_1348._s_0.Z = (pTVar48->field0_0x0)._s_0.Z;
    auVar18._4_8_ = uVar66;
    auVar18._0_4_ = local_1348._4_4_;
    auVar119._0_8_ = auVar18._0_8_ << 0x20;
    auVar119._8_4_ = local_1348._8_4_;
    auVar119._12_4_ = local_1348._12_4_;
    dStack_c30 = auVar119._8_8_ * auVar73._8_8_ + local_1348._0_8_ * dVar115 +
                 local_1348._s_0.Z * dVar157;
    local_c28 = local_1348._s_0.Z * dStack_c30;
    local_c38 = local_1348._0_8_ * dStack_c30;
    dStack_c30 = auVar119._8_8_ * dStack_c30;
    local_658.Translation.ZW.m128d_f64[1] = 0.0;
    local_9e8 = auVar158;
    local_9d8 = dVar157;
    local_658.Translation.XY.m128d_f64[0] = local_c38;
    local_658.Translation.XY.m128d_f64[1] = dStack_c30;
    local_658.Translation.ZW.m128d_f64[0] = local_c28;
  }
  if (EVar33 == LockOffsetIncreaseAndConsumeAnimation) {
    local_dd8.Z = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
    local_dd8.W = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    local_dd8.X = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
    local_dd8.Y = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
    local_df8.X = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] * pTVar52->X;
    local_df8.Y = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
                  (this->SimulatedRotation).Y;
    local_df8.Z = (this->SimulatedRotation).Z *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_df8.W = (this->SimulatedRotation).W *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    UE::Math::TQuat<double>::operator*(&local_dd8,&local_968,&local_df8);
    UE::Math::TQuat<double>::ToAxisAndAngle
              (&local_968,(TVector<double> *)&local_1378._s_0,&local_1574);
    local_db8.X = local_658.Rotation.XY.m128d_f64[0];
    local_db8.Y = local_658.Rotation.XY.m128d_f64[1];
    local_db8.Z = local_658.Rotation.ZW.m128d_f64[0];
    local_db8.W = local_658.Rotation.ZW.m128d_f64[1];
    UE::Math::TQuat<double>::GetTwistAngle(&local_db8,(TVector<double> *)&local_1378._s_0);
    __libm_sse2_sincos_();
    local_658.Rotation.XY.m128d_f64[0] = extraout_XMM0_Qa * local_1378._s_0.X;
    local_658.Rotation.ZW.m128d_f64[0] = extraout_XMM0_Qa * local_1378._s_0.Z;
    local_658.Rotation.XY.m128d_f64[1] = extraout_XMM0_Qa * local_1378._s_0.Y;
    fVar63 = GlobalVectorConstants::Float1110.m128_f32[0];
    fVar62 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar61 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar64 = GlobalVectorConstants::Float1110.m128_f32[3];
    _Var142 = GlobalVectorConstants::Float0001;
    _Var148 = GlobalVectorConstants::FloatZero;
    local_658.Rotation.ZW.m128d_f64[1] = extraout_XMM0_Qb_00;
  }
  local_5f8.Rotation.XY.m128d_f64[0] = pTVar52->X;
  local_5f8.Rotation.XY.m128d_f64[1] = (this->SimulatedRotation).Y;
  local_5f8.Rotation.ZW.m128d_f64[0] = (this->SimulatedRotation).Z;
  local_5f8.Rotation.ZW.m128d_f64[1] = (this->SimulatedRotation).W;
  local_5f8.Translation.XY.m128d_f64 = *(double (*) [2])&(this->SimulatedTranslation).field0_0x0;
  local_5f8.Translation.ZW.m128d_f64[0] = (this->SimulatedTranslation).field0_0x0._s_0.Z;
  local_5f8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_5f8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_478.Rotation.XY.m128d_f64[0] = (double)_Var142.m128_f32[0];
  local_478.Rotation.XY.m128d_f64[1] = (double)_Var142.m128_f32[1];
  local_5f8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_5f8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_478.Translation.XY.m128d_f64[0] = (double)_Var148.m128_f32[0];
  local_478.Translation.XY.m128d_f64[1] = (double)_Var148.m128_f32[1];
  local_478.Rotation.ZW.m128d_f64[0] = (double)_Var142.m128_f32[2];
  local_478.Rotation.ZW.m128d_f64[1] = (double)_Var142.m128_f32[3];
  local_478.Translation.ZW.m128d_f64[0] = (double)_Var148.m128_f32[2];
  local_478.Translation.ZW.m128d_f64[1] = (double)_Var148.m128_f32[3];
  local_478.Scale3D.XY.m128d_f64[0] = (double)fVar63;
  local_478.Scale3D.XY.m128d_f64[1] = (double)fVar62;
  local_478.Scale3D.ZW.m128d_f64[0] = (double)fVar61;
  local_478.Scale3D.ZW.m128d_f64[1] = (double)fVar64;
  local_5f8.Translation.ZW.m128d_f64[1] = 0.0;
  UE::Math::TTransform<double>::Multiply(&local_478,&local_658,&local_5f8);
  adVar145[1] = local_478.Translation.XY.m128d_f64[1];
  adVar145[0] = local_478.Translation.XY.m128d_f64[0];
  *(double (*) [2])&(this->SimulatedTranslation).field0_0x0 = adVar145;
  (this->SimulatedTranslation).field0_0x0._s_0.Z = local_478.Translation.ZW.m128d_f64[0];
  local_5f8.Rotation.XY.m128d_f64[0] = local_478.Rotation.XY.m128d_f64[0];
  local_5f8.Rotation.XY.m128d_f64[1] = local_478.Rotation.XY.m128d_f64[1];
  local_5f8.Rotation.ZW.m128d_f64[0] = local_478.Rotation.ZW.m128d_f64[0];
  local_5f8.Rotation.ZW.m128d_f64[1] = local_478.Rotation.ZW.m128d_f64[1];
  local_5f8.Translation.ZW.m128d_f64[0] = local_478.Translation.ZW.m128d_f64[0];
  local_5f8.Translation.ZW.m128d_f64[1] = local_478.Translation.ZW.m128d_f64[1];
  local_5f8.Scale3D.XY.m128d_f64[0] = local_478.Scale3D.XY.m128d_f64[0];
  local_5f8.Scale3D.XY.m128d_f64[1] = local_478.Scale3D.XY.m128d_f64[1];
  local_5f8.Scale3D.ZW.m128d_f64[0] = local_478.Scale3D.ZW.m128d_f64[0];
  local_5f8.Scale3D.ZW.m128d_f64[1] = local_478.Scale3D.ZW.m128d_f64[1];
  local_c10 = local_478.Translation.ZW.m128d_f64[0];
  local_10b8 = local_478.Rotation.XY.m128d_f64[0];
  dStack_10b0 = local_478.Rotation.XY.m128d_f64[1];
  (this->SimulatedRotation).X = local_478.Rotation.XY.m128d_f64[0];
  (this->SimulatedRotation).Y = local_478.Rotation.XY.m128d_f64[1];
  (this->SimulatedRotation).Z = local_478.Rotation.ZW.m128d_f64[0];
  (this->SimulatedRotation).W = local_478.Rotation.ZW.m128d_f64[1];
  local_c20 = adVar145;
  local_5f8.Translation.XY.m128d_f64 = adVar145;
  if (CachedId_bOnGround.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bOnGround,"bOnGround");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar43 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar43,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar44 = UE::Anim::FNodeDataId::FNodeDataId
                        (&local_a7c,AnimName_bOnGround,(FAnimNode_Base *)this,
                         Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_bOnGround.Id = pFVar44->Id;
    CachedId_bOnGround.Index = pFVar44->Index;
  }
  iVar3 = CachedId_bOnGround.Index;
  FVar27 = CachedId_bOnGround.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3e1,L""), bVar31)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_1438.Id = FVar27;
  local_1438.Index = iVar3;
  pcVar45 = FAnimNodeData::GetData
                      (*(FAnimNodeData **)&this->field_0x8,&local_1438,(FAnimNode_Base *)this,
                       (UObject *)0x0);
  if (*pcVar45 != '\0') {
    if (CachedId_GroundNormal.Index == -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&AnimName_GroundNormal,"GroundNormal");
        _Init_thread_footer(&::_TSS1);
      }
      pUVar47 = StaticStruct();
      pFVar44 = UE::Anim::FNodeDataId::FNodeDataId
                          (&local_a70,AnimName_GroundNormal,(FAnimNode_Base *)this,pUVar47);
      CachedId_GroundNormal.Id = pFVar44->Id;
      CachedId_GroundNormal.Index = pFVar44->Index;
    }
    local_1428.Id = CachedId_GroundNormal.Id;
    local_1428.Index = CachedId_GroundNormal.Index;
    pTVar48 = FAnimNode_Base::GetData<UE::Math::TVector<double>_>
                        ((FAnimNode_Base *)this,&local_1428,(UObject *)0x0);
    local_f08._s_0.X = (this->ComponentTransform).Translation.XY.m128d_f64[0];
    local_f08._s_0.Y = (this->ComponentTransform).Translation.XY.m128d_f64[1];
    local_f08._s_0.Z = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
    pTVar48 = UE::Math::TVector<double>::PointPlaneProject
                        (&local_8a8,&this->SimulatedTranslation,(TVector<double> *)&local_f08._s_0,
                         pTVar48);
    dVar65 = (pTVar48->field0_0x0)._s_0.Y;
    (this->SimulatedTranslation).field0_0x0._s_0.X = (pTVar48->field0_0x0)._s_0.X;
    (this->SimulatedTranslation).field0_0x0._s_0.Y = dVar65;
    (this->SimulatedTranslation).field0_0x0._s_0.Z = (pTVar48->field0_0x0)._s_0.Z;
  }
  pTVar28 = CVarAnimNodeOffsetRootBoneModifyBone.Ref;
  bVar31 = IsInParallelGameThread();
  if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
    lVar50 = 0;
  }
  else {
    lVar50 = 4;
  }
  iVar3 = *(int *)((longlong)pTVar28->ShadowedValue + lVar50);
  EVar32 = GetTranslationMode(this);
  fVar63 = __real_322bcc77;
  if ((EVar32 == Release) || (EVar32 = GetTranslationMode(this), EVar32 == Interpolate)) {
    local_c08 = (this->ComponentTransform).Translation.XY.m128d_f64[0];
    dStack_c00 = (this->ComponentTransform).Translation.XY.m128d_f64[1];
    local_bf8 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
    dVar94 = (this->ComponentTransform).Translation.ZW.m128d_f64[1];
    fVar62 = this->CachedDeltaTime;
    dVar157 = local_bf8 - (this->SimulatedTranslation).field0_0x0._s_0.Z;
    dVar65 = dStack_c00 - (this->SimulatedTranslation).field0_0x0._s_0.Y;
    dVar147 = local_c08 - (this->SimulatedTranslation).field0_0x0._s_0.X;
    fVar61 = GetTranslationHalflife(this);
    fVar62 = UE::Anim::OffsetRootBone::DamperImplicit(fVar61,fVar62,fVar63);
    dVar115 = (double)fVar62;
    local_1590._s_0.X =
         (dVar147 - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) * dVar115 +
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_1590._s_0.Y =
         (dVar65 - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) * dVar115 +
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1590._s_0.Z =
         (dVar157 - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z) * dVar115 +
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (CachedId_bClampToTranslationVelocity.Index == -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&AnimName_bClampToTranslationVelocity,"bClampToTranslationVelocity");
        _Init_thread_footer(&::_TSS1);
      }
      pUVar47 = StaticStruct();
      pFVar44 = UE::Anim::FNodeDataId::FNodeDataId
                          (&local_a64,AnimName_bClampToTranslationVelocity,(FAnimNode_Base *)this,
                           pUVar47);
      dVar94 = 0.0;
      CachedId_bClampToTranslationVelocity.Id = pFVar44->Id;
      CachedId_bClampToTranslationVelocity.Index = pFVar44->Index;
    }
    uVar117 = local_1590._s_0.Z;
    uVar66 = local_1590._s_0.Y;
    uVar95 = local_1590._s_0.X;
    local_1418.Id = CachedId_bClampToTranslationVelocity.Id;
    local_1418.Index = CachedId_bClampToTranslationVelocity.Index;
    pbVar51 = FAnimNode_Base::GetData<bool>((FAnimNode_Base *)this,&local_1418,(UObject *)0x0);
    if (*pbVar51 != false) {
      dVar115 = local_6b8.Translation.XY.m128d_f64[0] * local_6b8.Translation.XY.m128d_f64[0];
      local_be0 = local_6b8.Translation.ZW.m128d_f64[0];
      dVar147 = local_6b8.Translation.ZW.m128d_f64[0] * local_6b8.Translation.ZW.m128d_f64[0];
      local_bf0 = local_6b8.Translation.XY.m128d_f64[0];
      dStack_be8 = local_6b8.Translation.XY.m128d_f64[1];
      dVar65 = local_6b8.Translation.XY.m128d_f64[1] * local_6b8.Translation.XY.m128d_f64[1];
      if (CachedId_TranslationSpeedRatio.Index == -1) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
          ::FName::FName(&AnimName_TranslationSpeedRatio,"TranslationSpeedRatio");
          _Init_thread_footer(&::_TSS1);
        }
        pUVar47 = StaticStruct();
        pFVar44 = UE::Anim::FNodeDataId::FNodeDataId
                            (&local_a40,AnimName_TranslationSpeedRatio,(FAnimNode_Base *)this,
                             pUVar47);
        dVar94 = 0.0;
        CachedId_TranslationSpeedRatio.Id = pFVar44->Id;
        CachedId_TranslationSpeedRatio.Index = pFVar44->Index;
        uVar66 = local_1590._s_0.Y;
        uVar95 = local_1590._s_0.X;
        uVar117 = local_1590._s_0.Z;
      }
      local_13b8.Id = CachedId_TranslationSpeedRatio.Id;
      local_13b8.Index = CachedId_TranslationSpeedRatio.Index;
      pfVar46 = FAnimNode_Base::GetData<float>((FAnimNode_Base *)this,&local_13b8,(UObject *)0x0);
      fVar62 = (float)SQRT(dVar115 + dVar65 + dVar147) * *pfVar46;
      if (fVar62 < (float)SQRT((double)uVar66 * (double)uVar66 + (double)uVar95 * (double)uVar95 +
                               (double)uVar117 * (double)uVar117)) {
        pTVar48 = UE::Math::TVector<double>::GetSafeNormal2D
                            ((TVector<double> *)&local_1590._s_0,&local_890,
                             (double)CONCAT44(uVar155,uVar153),
                             &UE::Math::TVector<double>::ZeroVector);
        dVar65 = (double)fVar62;
        uVar117 = dVar65 * (pTVar48->field0_0x0)._s_0.Z;
        uVar66 = dVar65 * (pTVar48->field0_0x0)._s_0.Y;
        uVar95 = dVar65 * (pTVar48->field0_0x0)._s_0.X;
        dVar94 = 0.0;
        local_1590._s_0.X = (double)uVar95;
        local_1590._s_0.Y = (double)uVar66;
        local_1590._s_0.Z = (double)uVar117;
      }
    }
    if (((bVar34) && (EVar35 = GetCollisionTestingMode(this), EVar35 == PlanarCollision)) &&
       (fVar62 = (float)(local_1540._s_0.Y * (double)uVar66 + local_1540._s_0.X * (double)uVar95 +
                        local_1540._s_0.Z * (double)uVar117), __real_38d1b717 < fVar62)) {
      fVar61 = GetCollisionTestShapeRadius(this);
      dVar65 = (double)fVar61;
      adVar145[0] = (((local_1540._s_0.Y * dVar65 + local_1390._s_0.Y) -
                     (this->SimulatedTranslation).field0_0x0._s_0.Y) * local_1540._s_0.Y +
                     ((local_1540._s_0.X * dVar65 + local_1390._s_0.X) -
                     (this->SimulatedTranslation).field0_0x0._s_0.X) * local_1540._s_0.X +
                    ((local_1540._s_0.Z * dVar65 + local_1390._s_0.Z) -
                    (this->SimulatedTranslation).field0_0x0._s_0.Z) * local_1540._s_0.Z) /
                    (double)fVar62;
      adVar145[1] = 0.0;
      fVar62 = (float)adVar145[0];
      if ((0.0 <= fVar62) && (fVar62 < __real_3f800000)) {
        dVar115 = (double)fVar62;
        adVar145[0] = (double)uVar117 * dVar115;
        adVar145[1] = dVar94;
        dVar65 = (double)uVar66 - (double)uVar66 * dVar115;
        dVar147 = (double)uVar95 - (double)uVar95 * dVar115;
        dVar94 = local_1540._s_0.X * dVar147 + local_1540._s_0.Y * dVar65 +
                 local_1540._s_0.Z * ((double)uVar117 - adVar145[0]);
        uVar95 = (dVar147 - dVar94) + (double)uVar95 * dVar115;
        uVar66 = (dVar65 - dVar94) + (double)uVar66 * dVar115;
        uVar117 = (((double)uVar117 - adVar145[0]) - dVar94) + adVar145[0];
        local_1590._s_0.X = (double)uVar95;
        local_1590._s_0.Y = (double)uVar66;
        local_1590._s_0.Z = (double)uVar117;
      }
    }
    dVar65 = (this->SimulatedTranslation).field0_0x0._s_0.Y;
    dVar94 = (this->SimulatedTranslation).field0_0x0._s_0.Z;
    (this->SimulatedTranslation).field0_0x0._s_0.X =
         (double)uVar95 + (this->SimulatedTranslation).field0_0x0._s_0.X;
    (this->SimulatedTranslation).field0_0x0._s_0.Y = (double)uVar66 + dVar65;
    (this->SimulatedTranslation).field0_0x0._s_0.Z = (double)uVar117 + dVar94;
  }
  EVar32 = GetRotationMode(this);
  if ((EVar32 == Release) ||
     (EVar32 = GetRotationMode(this), dVar65 = extraout_XMM0_Qb_01, EVar32 == Interpolate)) {
    dVar115 = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
    dVar147 = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
    auVar128 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.ZW.m128d_f64;
    dVar162 = auVar128._0_8_;
    dVar157 = (this->SimulatedRotation).Z *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar65 = (this->SimulatedRotation).W *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar116 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] *
              (this->SimulatedRotation).X;
    dVar152 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
              (this->SimulatedRotation).Y;
    auVar138._8_4_ = SUB84(dVar65,0);
    auVar138._0_8_ = dVar157;
    uVar135 = (undefined4)((ulonglong)dVar65 >> 0x20);
    auVar138._12_4_ = uVar135;
    dVar94 = auVar128._8_8_;
    auVar101._8_4_ = SUB84(dVar65,0);
    auVar101._0_8_ = dVar157;
    auVar101._12_4_ = uVar135;
    auVar74._8_4_ = auVar128._8_4_;
    auVar74._0_8_ = dVar94;
    auVar74._12_4_ = auVar128._12_4_;
    auVar127._0_8_ = dVar94 * dVar157;
    auVar127._8_8_ = dVar94 * dVar65;
    auVar164._8_4_ = SUB84(dVar152,0);
    auVar164._0_8_ = dVar116;
    auVar164._12_4_ = (int)((ulonglong)dVar152 >> 0x20);
    dVar163 = auVar164._8_8_;
    auVar75._8_4_ = SUB84(dVar116,0);
    auVar75._0_8_ = dVar163;
    auVar75._12_4_ = (int)((ulonglong)dVar116 >> 0x20);
    dVar65 = dVar115 * auVar138._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar94 * dVar116 +
             dVar157 * dVar147 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar163 * dVar162 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar94 = dVar115 * dVar157 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             auVar74._8_8_ * dVar152 +
             auVar101._8_8_ * dVar147 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             auVar75._8_8_ * dVar162 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar76._8_4_ = SUB84(dVar94,0);
    auVar76._0_8_ = dVar65;
    auVar76._12_4_ = (int)((ulonglong)dVar94 >> 0x20);
    local_1088 = CONCAT44(uVar155,uVar153);
    dVar163 = dVar163 * dVar115 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
              auVar127._0_8_ +
              dVar116 * dVar147 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              dVar162 * auVar138._8_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar157 = dVar116 * dVar115 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              auVar127._8_8_ +
              dVar152 * dVar147 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar162 * dVar157 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar102._8_4_ = SUB84(dVar157,0);
    auVar102._0_8_ = dVar163;
    auVar102._12_4_ = (int)((ulonglong)dVar157 >> 0x20);
    dVar115 = dVar163 * dVar163 + dVar65 * dVar65;
    dVar147 = auVar102._8_8_ * dVar157 + auVar76._8_8_ * dVar94;
    auVar77._8_4_ = SUB84(dVar147,0);
    auVar77._0_8_ = dVar115;
    auVar77._12_4_ = (int)((ulonglong)dVar147 >> 0x20);
    auVar78._0_8_ = auVar77._8_8_ + dVar115;
    auVar78._8_8_ = dVar115 + dVar147;
    auVar128 = sqrtpd(auVar127,auVar78);
    uVar58 = -(ulonglong)((double)CONCAT44(uVar155,uVar153) <= auVar78._0_8_);
    uVar57 = -(ulonglong)((double)CONCAT44(uVar155,uVar153) <= auVar78._8_8_);
    auVar118 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar128);
    uVar54 = (uint)(uVar58 >> 0x20);
    uVar136 = (uint)(uVar57 >> 0x20);
    auVar103._0_4_ = ~(uint)uVar58 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar103._4_4_ =
         ~uVar54 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar103._8_4_ = ~(uint)uVar57 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar103._12_4_ =
         ~uVar136 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_d98._0_8_ = uVar58 & (ulonglong)(auVar118._0_8_ * dVar65);
    uVar2 = uVar57 & (ulonglong)(auVar118._8_8_ * dVar94);
    local_d98._8_4_ = (undefined4)uVar2;
    local_d98._12_4_ = (undefined4)(uVar2 >> 0x20);
    local_d98 = local_d98 | auVar103;
    auVar128 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar128);
    dVar65 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    auVar120._0_4_ = ~(uint)uVar58 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar120._4_4_ =
         ~uVar54 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar120._8_4_ = ~(uint)uVar57 & SUB84(dVar65,0);
    auVar120._12_4_ = ~uVar136 & (uint)((ulonglong)dVar65 >> 0x20);
    auVar104._0_8_ = (ulonglong)(auVar128._0_8_ * dVar163) & uVar58;
    uVar57 = (ulonglong)(auVar128._8_8_ * dVar157) & uVar57;
    auVar104._8_4_ = (undefined4)uVar57;
    auVar104._12_4_ = (undefined4)(uVar57 >> 0x20);
    local_d88 = auVar120 | auVar104;
    auVar19._4_8_ = dVar65;
    auVar19._0_4_ = local_d88._4_4_;
    auVar79._0_8_ = auVar19._0_8_ << 0x20;
    auVar79._8_4_ = local_d88._8_4_;
    auVar79._12_4_ = local_d88._12_4_;
    dVar65 = local_d88._8_8_;
    if (auVar79._8_8_ < __real_0000000000000000) {
      local_9c8._0_8_ = 0.0 - local_d98._0_8_;
      local_9c8._8_8_ = 0.0 - local_d98._8_8_;
      local_d88._0_8_ = 0.0 - local_d88._0_8_;
      local_d88._8_8_ = 0.0 - dVar65;
      local_d98 = local_9c8;
      local_9b8 = local_d88;
    }
    fVar62 = this->CachedDeltaTime;
    fVar61 = GetRotationHalfLife(this);
    fVar63 = UE::Anim::OffsetRootBone::DamperImplicit(fVar61,fVar62,fVar63);
    auVar129._0_8_ = (double)fVar63;
    auVar129._8_8_ = 0;
    pTVar52 = UE::Math::TQuat<double>::Slerp_NotNormalized
                        (&local_858,&UE::Math::TQuat<double>::Identity,(TQuat<double> *)local_d98,
                         auVar129._0_8_);
    dVar65 = pTVar52->X;
    dVar94 = pTVar52->Y;
    dVar115 = pTVar52->Z;
    dVar147 = pTVar52->W;
    local_1080 = CONCAT44(uVar155,uVar153);
    dVar157 = dVar65 * dVar65 + dVar115 * dVar115;
    dVar116 = dVar94 * dVar94 + dVar147 * dVar147;
    auVar80._8_4_ = SUB84(dVar116,0);
    auVar80._0_8_ = dVar157;
    auVar80._12_4_ = (int)((ulonglong)dVar116 >> 0x20);
    auVar81._0_8_ = auVar80._8_8_ + dVar157;
    auVar81._8_8_ = dVar157 + dVar116;
    auVar128 = sqrtpd(auVar129,auVar81);
    uVar58 = -(ulonglong)((double)CONCAT44(uVar155,uVar153) <= auVar81._0_8_);
    uVar57 = -(ulonglong)((double)CONCAT44(uVar155,uVar153) <= auVar81._8_8_);
    uVar54 = (uint)(uVar58 >> 0x20);
    uVar136 = (uint)(uVar57 >> 0x20);
    auVar118 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar128);
    local_14f8._0_8_ = uVar58 & (ulonglong)(auVar118._0_8_ * dVar65);
    uVar2 = uVar57 & (ulonglong)(auVar118._8_8_ * dVar94);
    local_14f8._8_4_ = (undefined4)uVar2;
    local_14f8._12_4_ = (undefined4)(uVar2 >> 0x20);
    auVar105._0_4_ = ~(uint)uVar58 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar105._4_4_ =
         ~uVar54 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar105._8_4_ = ~(uint)uVar57 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar105._12_4_ =
         ~uVar136 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_14f8 = local_14f8 | auVar105;
    auVar128 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar128);
    local_14e8._0_4_ = ~(uint)uVar58 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0)
    ;
    local_14e8._4_4_ =
         ~uVar54 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    local_14e8._8_4_ = ~(uint)uVar57 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0)
    ;
    local_14e8._12_4_ =
         ~uVar136 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar106._0_8_ = (ulonglong)(auVar128._0_8_ * dVar115) & uVar58;
    uVar57 = (ulonglong)(auVar128._8_8_ * dVar147) & uVar57;
    auVar106._8_4_ = (undefined4)uVar57;
    auVar106._12_4_ = (undefined4)(uVar57 >> 0x20);
    local_14e8 = local_14e8 | auVar106;
    if (CachedId_bClampToRotationVelocity.Index == -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&AnimName_bClampToRotationVelocity,"bClampToRotationVelocity");
        _Init_thread_footer(&::_TSS1);
      }
      if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar43 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar43,
                             L"AnimNode_OffsetRootBone");
      }
      pFVar44 = UE::Anim::FNodeDataId::FNodeDataId
                          (&local_a58,AnimName_bClampToRotationVelocity,(FAnimNode_Base *)this,
                           Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton
                          );
      CachedId_bClampToRotationVelocity.Id = pFVar44->Id;
      CachedId_bClampToRotationVelocity.Index = pFVar44->Index;
    }
    auVar159 = local_14e8;
    auVar165 = local_14f8;
    local_13f8.Id = CachedId_bClampToRotationVelocity.Id;
    local_13f8.Index = CachedId_bClampToRotationVelocity.Index;
    pbVar51 = FAnimNode_Base::GetData<bool>((FAnimNode_Base *)this,&local_13f8,(UObject *)0x0);
    if (*pbVar51 != false) {
      local_d78.X = local_6b8.Rotation.XY.m128d_f64[0];
      local_d78.Y = local_6b8.Rotation.XY.m128d_f64[1];
      local_d78.Z = local_6b8.Rotation.ZW.m128d_f64[0];
      local_d78.W = local_6b8.Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::ToAxisAndAngle(&local_d78,&local_908,&local_1570);
      if (CachedId_RotationSpeedRatio.Index == -1) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
          ::FName::FName(&AnimName_RotationSpeedRatio,"RotationSpeedRatio");
          _Init_thread_footer(&::_TSS1);
        }
        pUVar47 = StaticStruct();
        pFVar44 = UE::Anim::FNodeDataId::FNodeDataId
                            (&local_a4c,AnimName_RotationSpeedRatio,(FAnimNode_Base *)this,pUVar47);
        CachedId_RotationSpeedRatio.Id = pFVar44->Id;
        CachedId_RotationSpeedRatio.Index = pFVar44->Index;
        auVar159 = local_14e8;
        auVar165 = local_14f8;
      }
      local_13e8.Id = CachedId_RotationSpeedRatio.Id;
      local_13e8.Index = CachedId_RotationSpeedRatio.Index;
      pfVar46 = FAnimNode_Base::GetData<float>((FAnimNode_Base *)this,&local_13e8,(UObject *)0x0);
      fVar63 = *pfVar46;
      UE::Math::TQuat<double>::ToAxisAndAngle
                ((TQuat<double> *)local_14f8,(TVector<double> *)&local_1118._s_0,&local_156c);
      if (local_1570 * fVar63 < local_156c) {
        __libm_sse2_sincos_();
        auVar165._0_8_ = local_1118._s_0.X * extraout_XMM0_Qa_00;
        auVar159._0_8_ = local_1118._s_0.Z * extraout_XMM0_Qa_00;
        auVar165._8_8_ = local_1118._s_0.Y * extraout_XMM0_Qa_00;
        auVar159._8_8_ = extraout_XMM0_Qb_02;
        local_14f8 = auVar165;
        local_14e8 = auVar159;
      }
    }
    dVar115 = (this->SimulatedRotation).Z;
    dVar147 = (this->SimulatedRotation).W;
    dVar152 = auVar159._0_8_;
    dVar157 = (this->SimulatedRotation).X;
    dVar116 = (this->SimulatedRotation).Y;
    dVar163 = auVar165._0_8_;
    dVar146 = auVar165._8_8_;
    auVar139._8_4_ = auVar165._0_4_;
    auVar139._0_8_ = dVar163;
    auVar139._12_4_ = auVar165._4_4_;
    dVar162 = auVar159._8_8_;
    adVar145[1] = dVar162;
    adVar145[0] = dVar162;
    auVar82._8_4_ = auVar159._0_4_;
    auVar82._0_8_ = dVar152;
    auVar82._12_4_ = auVar159._4_4_;
    dVar65 = auVar82._8_8_ * dVar157 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_948 = dVar163 * dVar147 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                + dVar157 * dVar162 +
                dVar115 * dVar146 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                + dVar152 * dVar116 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dStack_940 = auVar139._8_8_ * dVar115 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar116 * dVar162
                 + dVar147 * dVar146 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] + dVar65;
    dVar94 = dVar163 * dVar116 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar115 * dVar162 +
             dVar157 * dVar146 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar152 * dVar147 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar115 = dVar163 * dVar157 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar147 * dVar162 +
              dVar116 * dVar146 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar152 * dVar115 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    uVar135 = SUB84(dVar115,0);
    uVar154 = (undefined4)((ulonglong)dVar115 >> 0x20);
    (this->SimulatedRotation).X = local_948;
    (this->SimulatedRotation).Y = dStack_940;
    auVar9._8_4_ = uVar135;
    auVar9._0_8_ = dVar94;
    auVar9._12_4_ = uVar154;
    (this->SimulatedRotation).Z = dVar94;
    (this->SimulatedRotation).W = (double)auVar9._8_8_;
    local_938._8_4_ = uVar135;
    local_938._0_8_ = dVar94;
    local_938._12_4_ = uVar154;
  }
  fVar63 = local_15a0;
  if (0.0 <= local_15a0) {
    local_bd8 = *(undefined1 (*) [16])(this->ComponentTransform).Translation.XY.m128d_f64;
    local_bc8 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
    auVar20._4_8_ = dVar65;
    auVar20._0_4_ = local_bd8._4_4_;
    auVar83._0_8_ = auVar20._0_8_ << 0x20;
    auVar83._8_4_ = local_bd8._8_4_;
    auVar83._12_4_ = local_bd8._12_4_;
    local_14d8._s_0.Y = auVar83._8_8_ - (this->SimulatedTranslation).field0_0x0._s_0.Y;
    local_14d8._s_0.X = local_bd8._0_8_ - (this->SimulatedTranslation).field0_0x0._s_0.X;
    local_14d8._s_0.Z = local_bc8 - (this->SimulatedTranslation).field0_0x0._s_0.Z;
    fVar62 = (float)SQRT(local_14d8._s_0.X * local_14d8._s_0.X +
                         local_14d8._s_0.Y * local_14d8._s_0.Y +
                         local_14d8._s_0.Z * local_14d8._s_0.Z);
    auVar128 = ZEXT416((uint)fVar62);
    if (local_15a0 < fVar62) {
      pTVar48 = UE::Math::TVector<double>::GetClampedToMaxSize
                          ((TVector<double> *)&local_14d8._s_0,&local_8f0,(double)local_15a0);
      local_14d8._s_0.X = (pTVar48->field0_0x0)._s_0.X;
      local_14d8._s_0.Y = (pTVar48->field0_0x0)._s_0.Y;
      local_14d8._s_0.Z = (pTVar48->field0_0x0)._s_0.Z;
      local_bc0 = *(undefined1 (*) [16])(this->ComponentTransform).Translation.XY.m128d_f64;
      local_bb0 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
      auVar21._4_8_ = auVar128._8_8_;
      auVar21._0_4_ = local_bc0._4_4_;
      auVar107._0_8_ = auVar21._0_8_ << 0x20;
      auVar107._8_4_ = local_bc0._8_4_;
      auVar107._12_4_ = local_bc0._12_4_;
      adVar145[1] = local_bc0._8_8_;
      adVar145[0] = local_bc0._0_8_ - local_14d8._s_0.X;
      (this->SimulatedTranslation).field0_0x0._s_0.X = adVar145[0];
      (this->SimulatedTranslation).field0_0x0._s_0.Y = auVar107._8_8_ - local_14d8._s_0.Y;
      (this->SimulatedTranslation).field0_0x0._s_0.Z = local_bb0 - local_14d8._s_0.Z;
    }
  }
  fVar62 = GetMaxRotationError(this);
  fVar62 = fVar62 * __real_3c8efa35;
  pFVar55 = this;
  fVar61 = GetMaxRotationError(this);
  uVar135 = SUB84(pFVar55,0);
  pTVar52 = extraout_RAX;
  if (0.0 <= fVar61) {
    local_d58.X = (this->ComponentTransform).Rotation.XY.m128d_f64[0] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_d58.Y = (this->ComponentTransform).Rotation.XY.m128d_f64[1] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    local_d58.Z = (this->ComponentTransform).Rotation.ZW.m128d_f64[0] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_d58.W = (this->ComponentTransform).Rotation.ZW.m128d_f64[1] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    UE::Math::TQuat<double>::operator*
              (&local_d58,(TQuat<double> *)local_1528,&this->SimulatedRotation);
    dVar65 = (double)local_1528._0_8_ * (double)local_1528._0_8_ +
             (double)local_1518._0_8_ * (double)local_1518._0_8_;
    dVar94 = (double)local_1528._8_8_ * (double)local_1528._8_8_ +
             (double)local_1518._8_8_ * (double)local_1518._8_8_;
    local_1078 = CONCAT44(uVar155,uVar153);
    auVar84._8_4_ = SUB84(dVar94,0);
    auVar84._0_8_ = dVar65;
    auVar84._12_4_ = (int)((ulonglong)dVar94 >> 0x20);
    auVar85._0_8_ = auVar84._8_8_ + dVar65;
    auVar85._8_8_ = dVar65 + dVar94;
    auVar128 = sqrtpd((undefined1  [16])adVar145,auVar85);
    uVar58 = -(ulonglong)((double)CONCAT44(uVar155,uVar153) <= auVar85._0_8_);
    uVar57 = -(ulonglong)((double)CONCAT44(uVar155,uVar153) <= auVar85._8_8_);
    auVar134._8_8_ = uVar57;
    auVar134._0_8_ = uVar58;
    auVar118 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar128);
    uVar54 = (uint)(uVar58 >> 0x20);
    uVar136 = (uint)(uVar57 >> 0x20);
    auVar143._0_8_ = uVar58 & (ulonglong)(auVar118._0_8_ * (double)local_1528._0_8_);
    uVar2 = uVar57 & (ulonglong)(auVar118._8_8_ * (double)local_1528._8_8_);
    auVar143._8_4_ = (undefined4)uVar2;
    auVar143._12_4_ = (undefined4)(uVar2 >> 0x20);
    auVar108._0_4_ = ~(uint)uVar58 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar108._4_4_ =
         ~uVar54 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar108._8_4_ = ~(uint)uVar57 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar108._12_4_ =
         ~uVar136 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_1528 = auVar143 | auVar108;
    auVar128 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar128);
    dVar65 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    auVar121._0_4_ = ~(uint)uVar58 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar121._4_4_ =
         ~uVar54 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar121._8_4_ = ~(uint)uVar57 & SUB84(dVar65,0);
    auVar121._12_4_ = ~uVar136 & (uint)((ulonglong)dVar65 >> 0x20);
    auVar109._0_8_ = (ulonglong)(auVar128._0_8_ * (double)local_1518._0_8_) & uVar58;
    uVar57 = (ulonglong)(auVar128._8_8_ * (double)local_1518._8_8_) & uVar57;
    auVar109._8_4_ = (undefined4)uVar57;
    auVar109._12_4_ = (undefined4)(uVar57 >> 0x20);
    local_1518 = auVar121 | auVar109;
    auVar22._4_8_ = dVar65;
    auVar22._0_4_ = local_1518._4_4_;
    auVar86._0_8_ = auVar22._0_8_ << 0x20;
    auVar86._8_4_ = local_1518._8_4_;
    auVar86._12_4_ = local_1518._12_4_;
    dVar65 = local_1518._8_8_;
    dVar94 = local_1528._8_8_;
    if (auVar86._8_8_ < __real_0000000000000000) {
      local_1528._0_8_ = 0.0 - local_1528._0_8_;
      local_1528._8_8_ = 0.0 - dVar94;
      local_1518._0_8_ = 0.0 - local_1518._0_8_;
      local_1518._8_8_ = 0.0 - dVar65;
      local_928 = local_1528;
      local_918 = local_1518;
    }
    pTVar52 = (TQuat<double> *)local_1528;
    UE::Math::TQuat<double>::ToAxisAndAngle(pTVar52,(TVector<double> *)&local_1100._s_0,local_1568);
    uVar135 = SUB84(pTVar52,0);
    pTVar52 = extraout_RAX_00;
    if (fVar62 < (float)((uint)local_1568[0] & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      __libm_sse2_sincos_();
      this_04 = (TQuat<double> *)local_1528;
      local_1528._8_8_ = local_1100._s_0.Y * extraout_XMM0_Qa_01;
      local_1528._0_8_ = local_1100._s_0.X * extraout_XMM0_Qa_01;
      local_1518._8_8_ = extraout_XMM0_Qb_03;
      local_1518._0_8_ = local_1100._s_0.Z * extraout_XMM0_Qa_01;
      local_d38.X = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
      local_d38.Y = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
      local_d38.Z = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
      local_d38.W = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
      pTVar52 = UE::Math::TQuat<double>::operator*(this_04,&local_838,&local_d38);
      uVar135 = SUB84(this_04,0);
      local_13d8 = (double)CONCAT44(uVar155,uVar153);
      dVar65 = pTVar52->Y;
      (this->SimulatedRotation).X = pTVar52->X;
      (this->SimulatedRotation).Y = dVar65;
      dVar65 = pTVar52->Z;
      dVar94 = pTVar52->W;
      (this->SimulatedRotation).Z = dVar65;
      (this->SimulatedRotation).W = dVar94;
      dVar115 = (this->SimulatedRotation).X;
      dVar147 = (this->SimulatedRotation).Y;
      dVar157 = dVar65 * dVar65 + dVar115 * dVar115;
      dVar116 = dVar94 * dVar94 + dVar147 * dVar147;
      auVar87._8_4_ = SUB84(dVar116,0);
      auVar87._0_8_ = dVar157;
      auVar87._12_4_ = (int)((ulonglong)dVar116 >> 0x20);
      auVar88._0_8_ = auVar87._8_8_ + dVar157;
      auVar88._8_8_ = dVar157 + dVar116;
      auVar128 = sqrtpd(auVar134,auVar88);
      uVar58 = -(ulonglong)(local_13d8 <= auVar88._0_8_);
      uVar57 = -(ulonglong)(local_13d8 <= auVar88._8_8_);
      auVar118 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar128);
      uVar54 = (uint)(uVar58 >> 0x20);
      uVar136 = (uint)(uVar57 >> 0x20);
      auVar140._0_8_ = uVar58 & (ulonglong)(auVar118._0_8_ * dVar115);
      uVar2 = uVar57 & (ulonglong)(auVar118._8_8_ * dVar147);
      auVar140._8_4_ = (undefined4)uVar2;
      auVar140._12_4_ = (undefined4)(uVar2 >> 0x20);
      auVar110._0_4_ = ~(uint)uVar58 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0)
      ;
      auVar110._4_4_ =
           ~uVar54 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar110._8_4_ = ~(uint)uVar57 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0)
      ;
      auVar110._12_4_ =
           ~uVar136 &
           (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      auVar128 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar128);
      auVar130._0_4_ = ~(uint)uVar58 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0)
      ;
      auVar130._4_4_ =
           ~uVar54 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar130._8_4_ = ~(uint)uVar57 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0)
      ;
      auVar130._12_4_ =
           ~uVar136 &
           (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      (this->SimulatedRotation).X = (double)SUB168(auVar140 | auVar110,0);
      (this->SimulatedRotation).Y = (double)SUB168(auVar140 | auVar110,8);
      auVar111._0_8_ = (ulonglong)(auVar128._0_8_ * dVar65) & uVar58;
      uVar57 = (ulonglong)(auVar128._8_8_ * dVar94) & uVar57;
      auVar111._8_4_ = (undefined4)uVar57;
      auVar111._12_4_ = (undefined4)(uVar57 >> 0x20);
      (this->SimulatedRotation).Z = (double)SUB168(auVar130 | auVar111,0);
      (this->SimulatedRotation).W = (double)SUB168(auVar130 | auVar111,8);
    }
  }
  local_5f8.Translation.XY.m128d_f64 = *(double (*) [2])&(this->SimulatedTranslation).field0_0x0;
  local_5f8.Translation.ZW.m128d_f64[0] = (this->SimulatedTranslation).field0_0x0._s_0.Z;
  local_5f8.Translation.ZW.m128d_f64[1] = 0.0;
  local_5f8.Rotation.XY.m128d_f64[0] = (this->SimulatedRotation).X;
  local_5f8.Rotation.XY.m128d_f64[1] = (this->SimulatedRotation).Y;
  local_5f8.Rotation.ZW.m128d_f64[0] = (this->SimulatedRotation).Z;
  local_5f8.Rotation.ZW.m128d_f64[1] = (this->SimulatedRotation).W;
  local_598.Rotation.ZW.m128d_f64[0] = local_4d8.Rotation.ZW.m128d_f64[0];
  local_598.Rotation.ZW.m128d_f64[1] = local_4d8.Rotation.ZW.m128d_f64[1];
  local_598.Translation.ZW.m128d_f64[0] = local_4d8.Translation.ZW.m128d_f64[0];
  local_598.Translation.ZW.m128d_f64[1] = local_4d8.Translation.ZW.m128d_f64[1];
  local_598.Rotation.XY.m128d_f64[0] = local_4d8.Rotation.XY.m128d_f64[0];
  local_598.Rotation.XY.m128d_f64[1] = local_4d8.Rotation.XY.m128d_f64[1];
  local_598.Scale3D.ZW.m128d_f64[0] = local_4d8.Scale3D.ZW.m128d_f64[0];
  local_598.Scale3D.ZW.m128d_f64[1] = local_4d8.Scale3D.ZW.m128d_f64[1];
  local_598.Translation.XY.m128d_f64[0] = local_4d8.Translation.XY.m128d_f64[0];
  local_598.Translation.XY.m128d_f64[1] = local_4d8.Translation.XY.m128d_f64[1];
  local_598.Scale3D.XY.m128d_f64[0] = local_4d8.Scale3D.XY.m128d_f64[0];
  local_598.Scale3D.XY.m128d_f64[1] = local_4d8.Scale3D.XY.m128d_f64[1];
  auVar122._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)((longlong)(this->ComponentTransform).Scale3D.ZW.m128d_f64 + 4),
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        *(uint *)(this->ComponentTransform).Scale3D.ZW.m128d_f64);
  auVar122._8_4_ = _UNK_15061cc88 & *(uint *)((this->ComponentTransform).Scale3D.ZW.m128d_f64 + 1);
  auVar122._12_4_ =
       _UNK_15061cc8c & *(uint *)((longlong)(this->ComponentTransform).Scale3D.ZW.m128d_f64 + 0xc);
  auVar141._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)((longlong)(this->ComponentTransform).Scale3D.XY.m128d_f64 + 4),
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        *(uint *)(this->ComponentTransform).Scale3D.XY.m128d_f64);
  auVar141._8_4_ = _UNK_15061cc88 & *(uint *)((this->ComponentTransform).Scale3D.XY.m128d_f64 + 1);
  auVar141._12_4_ =
       _UNK_15061cc8c & *(uint *)((longlong)(this->ComponentTransform).Scale3D.XY.m128d_f64 + 0xc);
  auVar112._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar122._8_8_);
  auVar112._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar122._0_8_);
  uVar54 = movmskpd(uVar135,auVar112);
  auVar89._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar141._8_8_);
  auVar89._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar141._0_8_);
  iVar39 = movmskpd((int)pTVar52,auVar89);
  if ((uVar54 & 0x3fffffff) == 0 && iVar39 == 0) {
    local_298.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_298.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_298.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_298.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_298.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_298.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(&this->ComponentTransform,&local_298);
  }
  local_3b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_3b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_3b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_3b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_3b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_3b8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_3b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_3b8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_3b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_3b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_3b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_3b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_3b8,&local_5f8,&local_298);
  pFVar29 = local_1560;
  dVar94 = local_598.Translation.ZW.m128d_f64[0] + local_3b8.Translation.ZW.m128d_f64[0];
  uVar135 = SUB84(local_598.Translation.ZW.m128d_f64[1] + local_3b8.Translation.ZW.m128d_f64[1],0);
  uVar154 = (undefined4)
            ((ulonglong)
             (local_598.Translation.ZW.m128d_f64[1] + local_3b8.Translation.ZW.m128d_f64[1]) >> 0x20
            );
  auVar160._8_4_ = SUB84(local_3b8.Rotation.XY.m128d_f64[0],0);
  auVar160._0_8_ = local_3b8.Rotation.XY.m128d_f64[0];
  auVar160._12_4_ = (int)((ulonglong)local_3b8.Rotation.XY.m128d_f64[0] >> 0x20);
  auVar90._8_4_ = SUB84(local_3b8.Rotation.ZW.m128d_f64[0],0);
  auVar90._0_8_ = local_3b8.Rotation.ZW.m128d_f64[0];
  auVar90._12_4_ = (int)((ulonglong)local_3b8.Rotation.ZW.m128d_f64[0] >> 0x20);
  local_598.Translation.ZW.m128d_f64[1]._0_4_ = uVar135;
  local_598.Translation.ZW.m128d_f64[0] = dVar94;
  local_598.Translation.ZW.m128d_f64[1]._4_4_ = uVar154;
  dVar115 = local_3b8.Rotation.XY.m128d_f64[0] * local_598.Rotation.ZW.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            local_598.Rotation.XY.m128d_f64[0] * local_3b8.Rotation.ZW.m128d_f64[1] +
            local_598.Rotation.ZW.m128d_f64[0] * local_3b8.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            local_3b8.Rotation.ZW.m128d_f64[0] * local_598.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar147 = auVar160._8_8_ * local_598.Rotation.ZW.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            local_598.Rotation.XY.m128d_f64[1] * local_3b8.Rotation.ZW.m128d_f64[1] +
            local_598.Rotation.ZW.m128d_f64[1] * local_3b8.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            auVar90._8_8_ * local_598.Rotation.XY.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_b98 = local_4d8.Scale3D.ZW.m128d_f64[0];
  local_13d0._8_8_ = 0;
  local_13d0._0_8_ = local_4d8.Scale3D.ZW.m128d_f64[0];
  local_598.Scale3D.ZW.m128d_f64[0] = local_4d8.Scale3D.ZW.m128d_f64[0];
  local_598.Scale3D.ZW.m128d_f64[1] = 0.0;
  auVar91._8_4_ = SUB84(dVar147,0);
  auVar91._0_8_ = dVar115;
  auVar91._12_4_ = (int)((ulonglong)dVar147 >> 0x20);
  local_10b8 = local_4d8.Scale3D.XY.m128d_f64[0];
  dStack_10b0 = local_4d8.Scale3D.XY.m128d_f64[1];
  dVar157 = local_3b8.Rotation.XY.m128d_f64[0] * local_598.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            local_598.Rotation.ZW.m128d_f64[0] * local_3b8.Rotation.ZW.m128d_f64[1] +
            local_598.Rotation.XY.m128d_f64[0] * local_3b8.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
            local_3b8.Rotation.ZW.m128d_f64[0] * local_598.Rotation.ZW.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar116 = local_3b8.Rotation.XY.m128d_f64[0] * local_598.Rotation.XY.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            local_598.Rotation.ZW.m128d_f64[1] * local_3b8.Rotation.ZW.m128d_f64[1] +
            local_598.Rotation.XY.m128d_f64[1] * local_3b8.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            local_3b8.Rotation.ZW.m128d_f64[0] * local_598.Rotation.ZW.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar65 = local_598.Translation.XY.m128d_f64[0] + local_3b8.Translation.XY.m128d_f64[0];
  uVar153 = SUB84(local_598.Translation.XY.m128d_f64[1] + local_3b8.Translation.XY.m128d_f64[1],0);
  uVar155 = (undefined4)
            ((ulonglong)
             (local_598.Translation.XY.m128d_f64[1] + local_3b8.Translation.XY.m128d_f64[1]) >> 0x20
            );
  auVar113._8_4_ = SUB84(dVar116,0);
  auVar113._0_8_ = dVar157;
  auVar113._12_4_ = (int)((ulonglong)dVar116 >> 0x20);
  local_598.Scale3D.XY.m128d_f64[0] = local_4d8.Scale3D.XY.m128d_f64[0];
  local_598.Scale3D.XY.m128d_f64[1] = local_4d8.Scale3D.XY.m128d_f64[1];
  local_598.Translation.XY.m128d_f64[1]._0_4_ = uVar153;
  local_598.Translation.XY.m128d_f64[0] = dVar65;
  local_598.Translation.XY.m128d_f64[1]._4_4_ = uVar155;
  auVar114._0_8_ = dVar157 * dVar157 + dVar115 * dVar115;
  auVar114._8_8_ = auVar113._8_8_ * dVar116 + auVar91._8_8_ * dVar147;
  local_ba8 = local_4d8.Scale3D.XY.m128d_f64[0];
  dStack_ba0 = local_4d8.Scale3D.XY.m128d_f64[1];
  auVar92._8_4_ = SUB84(auVar114._8_8_,0);
  auVar92._0_8_ = auVar114._0_8_;
  auVar92._12_4_ = (int)((ulonglong)auVar114._8_8_ >> 0x20);
  auVar93._0_8_ = auVar92._8_8_ + auVar114._0_8_;
  auVar93._8_8_ = auVar114._0_8_ + auVar114._8_8_;
  auVar128 = sqrtpd(auVar114,auVar93);
  uVar57 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar93._0_8_);
  uVar59 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar93._8_8_);
  auVar118 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar128);
  auVar128 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar128);
  uVar58 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar93._0_8_);
  uVar60 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar93._8_8_);
  auVar144._0_8_ = uVar57 & (ulonglong)(auVar118._0_8_ * dVar115);
  uVar2 = uVar59 & (ulonglong)(auVar118._8_8_ * dVar147);
  auVar144._8_4_ = (undefined4)uVar2;
  auVar144._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar149._0_8_ = uVar58 & (ulonglong)(auVar128._0_8_ * dVar157);
  uVar2 = uVar60 & (ulonglong)(auVar128._8_8_ * dVar116);
  auVar149._8_4_ = (undefined4)uVar2;
  auVar149._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar123._0_4_ = ~(uint)uVar57 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar123._4_4_ = ~(uint)(uVar57 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_
  ;
  auVar123._8_4_ = ~(uint)uVar59 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar123._12_4_ =
       ~(uint)(uVar59 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
  auVar131._0_4_ = ~(uint)uVar58 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar131._4_4_ = ~(uint)(uVar58 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_
  ;
  auVar131._8_4_ = ~(uint)uVar60 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar131._12_4_ =
       ~(uint)(uVar60 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  adVar145 = (double  [2])(auVar144 | auVar123);
  adVar150 = (double  [2])(auVar149 | auVar131);
  local_598.Rotation.XY.m128d_f64 = adVar145;
  local_598.Rotation.ZW.m128d_f64 = adVar150;
  if ((*(int *)&(local_1560->Pose).field_0x8 < 1) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar31)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  padVar6 = *(double (**) [2])&pFVar29->Pose;
  *padVar6 = adVar145;
  padVar6[1] = adVar150;
  adVar150[1]._0_4_ = uVar153;
  adVar150[0] = dVar65;
  adVar150[1]._4_4_ = uVar155;
  padVar6[2] = adVar150;
  adVar10[1]._0_4_ = uVar135;
  adVar10[0] = dVar94;
  adVar10[1]._4_4_ = uVar154;
  padVar6[3] = adVar10;
  padVar6[4][0] = local_10b8;
  padVar6[4][1] = dStack_10b0;
  padVar6[5][0] = (double)local_13d0._0_8_;
  padVar6[5][1] = (double)local_13d0._8_8_;
  fVar61 = __real_42200000;
  dVar115 = __real_4044000000000000;
  dVar65 = ___xmm_3ff00000000000000000000000000000;
  dVar94 = _UNK_15061cbc8;
  if (FVisualLogger::bIsRecording != 0) {
    local_238.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_238.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_238.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_238.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_238.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_238.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_238.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_238.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_238.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_238.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_238.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_238.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_238,&local_4d8,&this->ComponentTransform);
    local_418.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_418.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_418.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_418.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_418.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_418.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_418.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_418.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_418.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_418.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_418.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_418.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_418,&local_598,&this->ComponentTransform);
    pUVar7 = this->AnimInstanceProxy->AnimInstanceObject;
    if (0.0 <= fVar63) {
      if (FVisualLogger::bIsRecording != 0) {
        local_b80 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
        local_10e8._s_0.X = (this->ComponentTransform).Translation.XY.m128d_f64[0];
        local_10e8._s_0.Y = (this->ComponentTransform).Translation.XY.m128d_f64[1];
        local_10e8._s_0.Z = local_b80 + (double)CONCAT44(uVar167,uVar166);
        local_b90 = local_10e8._s_0.X;
        dStack_b88 = local_10e8._s_0.Y;
        ::FName::FName(&local_13a8,L"OffsetRootBone");
        FVisualLogger::DiscLogfImpl
                  (this->AnimInstanceProxy->AnimInstanceObject,&local_13a8,Display,
                   (TVector<double> *)&local_10e8._s_0,&UE::Math::TVector<double>::UpVector,
                   fVar63 + fVar61,&FColor::Red,2,false,L"");
      }
      if (bVar34) {
        dVar65 = ___xmm_3ff00000000000000000000000000000;
        dVar94 = _UNK_15061cbc8;
        if (FVisualLogger::bIsRecording == 0) goto LAB_14a711d29;
        fVar64 = GetCollisionTestShapeRadius(this);
        ::FName::FName(&local_13a0,LogName);
        FVisualLogger::DiscLogfImpl
                  (pUVar7,&local_13a0,Display,(TVector<double> *)&local_1390._s_0,
                   (TVector<double> *)&local_1540._s_0,fVar64,&FColor::Red,2,false,L"");
      }
    }
    dVar65 = ___xmm_3ff00000000000000000000000000000;
    dVar94 = _UNK_15061cbc8;
    if (FVisualLogger::bIsRecording != 0) {
      local_b68 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
      local_10d0._s_0.X = (this->ComponentTransform).Translation.XY.m128d_f64[0];
      local_10d0._s_0.Y = (this->ComponentTransform).Translation.XY.m128d_f64[1];
      local_10d0._s_0.Z = local_b68 + (double)CONCAT44(uVar167,uVar166);
      local_b78 = local_10d0._s_0.X;
      dStack_b70 = local_10d0._s_0.Y;
      ::FName::FName(&local_14a8,LogName);
      FVisualLogger::DiscLogfImpl
                (pUVar7,&local_14a8,Display,(TVector<double> *)&local_10d0._s_0,
                 &UE::Math::TVector<double>::UpVector,fVar61,&FColor::Blue,2,false,L"");
      dVar94 = _UNK_15061cbc8;
      dVar65 = ___xmm_3ff00000000000000000000000000000;
      if (FVisualLogger::bIsRecording != 0) {
        local_eb8 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
        dVar147 = (this->ComponentTransform).Translation.XY.m128d_f64[0];
        dVar157 = (this->ComponentTransform).Translation.XY.m128d_f64[1];
        local_d18.X = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
        local_d18.Y = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
        local_d18.Z = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
        local_d18.W = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
        local_ee8._s_0.Z = 0.0;
        local_ee8._s_0.X = ___xmm_3ff00000000000000000000000000000;
        local_ee8._s_0.Y = _UNK_15061cbc8;
        local_ec8 = dVar147;
        dStack_ec0 = dVar157;
        UE::Math::TQuat<double>::RotateVector
                  (&local_d18,(TVector<double> *)&local_12f8._s_0,(TVector<double> *)&local_ee8._s_0
                  );
        local_12e0._s_0.X = local_12f8._s_0.X * dVar115 + dVar147;
        local_12e0._s_0.Y = local_12f8._s_0.Y * dVar115 + dVar157;
        local_12e0._s_0.Z =
             local_12f8._s_0.Z * dVar115 + local_eb8 + (double)CONCAT44(uVar167,uVar166);
        local_b50 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
        local_12c8._s_0.X = (this->ComponentTransform).Translation.XY.m128d_f64[0];
        local_12c8._s_0.Y = (this->ComponentTransform).Translation.XY.m128d_f64[1];
        local_12c8._s_0.Z = local_b50 + (double)CONCAT44(uVar167,uVar166);
        local_b60 = local_12c8._s_0.X;
        dStack_b58 = local_12c8._s_0.Y;
        ::FName::FName(&local_1398,LogName);
        FVisualLogger::ArrowLineLogfImpl
                  (pUVar7,&local_1398,Display,(TVector<double> *)&local_12c8._s_0,
                   (TVector<double> *)&local_12e0._s_0,&FColor::Blue,0,L"");
        if (FVisualLogger::bIsRecording != 0) {
          local_aa8 = local_418.Translation.ZW.m128d_f64[0];
          local_12b0._s_0.Z =
               local_418.Translation.ZW.m128d_f64[0] + (double)CONCAT44(uVar167,uVar166);
          local_12b0._s_0.X = local_418.Translation.XY.m128d_f64[0];
          local_ab8 = local_418.Translation.XY.m128d_f64[0];
          dStack_ab0 = local_418.Translation.XY.m128d_f64[1];
          local_12b0._s_0.Y = local_418.Translation.XY.m128d_f64[1];
          ::FName::FName(&local_14c0,LogName);
          FVisualLogger::DiscLogfImpl
                    (pUVar7,&local_14c0,Display,(TVector<double> *)&local_12b0._s_0,
                     &UE::Math::TVector<double>::UpVector,fVar61,&FColor::Green,2,false,L"");
          dVar116 = local_418.Translation.ZW.m128d_f64[0];
          dVar157 = local_418.Translation.XY.m128d_f64[1];
          dVar147 = local_418.Translation.XY.m128d_f64[0];
          if (FVisualLogger::bIsRecording != 0) {
            local_e88 = local_418.Translation.XY.m128d_f64[0];
            dStack_e80 = local_418.Translation.XY.m128d_f64[1];
            local_e78 = local_418.Translation.ZW.m128d_f64[0];
            local_cf8.X = local_418.Rotation.XY.m128d_f64[0];
            local_cf8.Y = local_418.Rotation.XY.m128d_f64[1];
            local_cf8.Z = local_418.Rotation.ZW.m128d_f64[0];
            local_cf8.W = local_418.Rotation.ZW.m128d_f64[1];
            local_ea8._s_0.Z = 0.0;
            local_ea8._s_0.X = dVar65;
            local_ea8._s_0.Y = dVar94;
            UE::Math::TQuat<double>::RotateVector
                      (&local_cf8,(TVector<double> *)&local_1298._s_0,
                       (TVector<double> *)&local_ea8._s_0);
            local_b20 = dVar116;
            local_1268._s_0.Z = dVar116 + (double)CONCAT44(uVar167,uVar166);
            local_1268._s_0.X = dVar147;
            local_b30 = dVar147;
            dStack_b28 = dVar157;
            local_1280._s_0.X = local_1298._s_0.X * dVar115 + dVar147;
            local_1280._s_0.Y = local_1298._s_0.Y * dVar115 + dVar157;
            local_1268._s_0.Y = dVar157;
            local_1280._s_0.Z =
                 local_1298._s_0.Z * dVar115 + local_e78 + (double)CONCAT44(uVar167,uVar166);
            ::FName::FName(&local_14b8,LogName);
            FVisualLogger::ArrowLineLogfImpl
                      (pUVar7,&local_14b8,Display,(TVector<double> *)&local_1268._s_0,
                       (TVector<double> *)&local_1280._s_0,&FColor::Green,0,L"");
          }
        }
      }
    }
  }
LAB_14a711d29:
  pTVar28 = CVarAnimNodeOffsetRootBoneDebug.Ref;
  bVar31 = IsInParallelGameThread();
  if ((bVar31) || (bVar31 = IsInGameThread(), lVar50 = 4, bVar31)) {
    lVar50 = 0;
  }
  if (*(int *)((longlong)pTVar28->ShadowedValue + lVar50) == 1) {
    local_358.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_358.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_358.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_358.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_358.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_358.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_358.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_358.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_358.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_358.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_358.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_358.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_358,&local_4d8,&this->ComponentTransform);
    local_538.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_538.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_538.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_538.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_538.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_538.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_538.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_538.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_538.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_538.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_538.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_538.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_538,&local_598,&this->ComponentTransform);
    fVar26 = __real_3fc00000;
    fVar64 = __real_bf800000;
    if (0.0 <= fVar63) {
      local_e70._s_0.X = (this->ComponentTransform).Translation.XY.m128d_f64[0];
      local_e70._s_0.Y = (this->ComponentTransform).Translation.XY.m128d_f64[1];
      local_e70._s_0.Z = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
      FAnimInstanceProxy::AnimDrawDebugCircle
                (this->AnimInstanceProxy,(TVector<double> *)&local_e70._s_0,fVar63 + fVar61,0x24,
                 &FColor::Red,&UE::Math::TVector<double>::UpVector,false,__real_bf800000,SDPG_World,
                 __real_3fc00000);
    }
    local_e58._s_0.X = (this->ComponentTransform).Translation.XY.m128d_f64[0];
    local_e58._s_0.Y = (this->ComponentTransform).Translation.XY.m128d_f64[1];
    local_e58._s_0.Z = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
    FAnimInstanceProxy::AnimDrawDebugCircle
              (this->AnimInstanceProxy,(TVector<double> *)&local_e58._s_0,fVar61,0x24,&FColor::Blue,
               &UE::Math::TVector<double>::UpVector,false,fVar64,SDPG_World,fVar26);
    local_e40._s_0.X = local_538.Translation.XY.m128d_f64[0];
    local_e40._s_0.Y = local_538.Translation.XY.m128d_f64[1];
    local_e40._s_0.Z = local_538.Translation.ZW.m128d_f64[0];
    FAnimInstanceProxy::AnimDrawDebugCircle
              (this->AnimInstanceProxy,(TVector<double> *)&local_e40._s_0,fVar61,0x24,&FColor::Green
               ,&UE::Math::TVector<double>::UpVector,false,fVar64,SDPG_World,fVar26);
    fVar63 = GetMaxRotationError(this);
    iVar40 = (int)(longlong)(fVar63 * __real_3d888889);
    iVar39 = 1;
    if (iVar40 != 0) {
      iVar39 = iVar40;
    }
    uVar2 = (ulonglong)(iVar39 - 1) * 2 + 1;
    lVar50 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar50 == 0; lVar50 = lVar50 + -1) {
      }
    }
    local_1408 = (undefined4)lVar50;
    local_cd8.X = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
    local_cd8.Y = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
    local_cd8.Z = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
    local_cd8.W = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    local_f78._s_0.Z = 0.0;
    local_f78._s_0.X = dVar65;
    local_f78._s_0.Y = dVar94;
    UE::Math::TQuat<double>::RotateVector(&local_cd8,&local_b18,(TVector<double> *)&local_f78._s_0);
    local_1070._s_0.X = local_538.Translation.XY.m128d_f64[0];
    local_1070._s_0.Y = local_538.Translation.XY.m128d_f64[1];
    local_1070._s_0.Z = local_538.Translation.ZW.m128d_f64[0];
    FAnimInstanceProxy::AnimDrawDebugCone
              (this->AnimInstanceProxy,(TVector<double> *)&local_1070._s_0,__real_42100000,
               &local_b18,fVar62,0.0,1 << ((byte)lVar50 & 0x1f),&FColor::Red,false,fVar64,SDPG_World
               ,__real_3e99999a);
    dVar146 = local_358.Rotation.ZW.m128d_f64[1];
    dVar163 = local_358.Rotation.ZW.m128d_f64[0];
    dVar162 = local_358.Rotation.XY.m128d_f64[1];
    dVar152 = local_358.Rotation.XY.m128d_f64[0];
    dVar116 = local_538.Translation.ZW.m128d_f64[0];
    dVar157 = local_538.Translation.XY.m128d_f64[1];
    dVar147 = local_538.Translation.XY.m128d_f64[0];
    dVar94 = _UNK_15061cbc8;
    dVar65 = ___xmm_3ff00000000000000000000000000000;
    local_1038 = local_538.Translation.XY.m128d_f64[0];
    dStack_1030 = local_538.Translation.XY.m128d_f64[1];
    local_1028 = local_538.Translation.ZW.m128d_f64[0];
    local_cb8.Z = local_358.Rotation.ZW.m128d_f64[0];
    local_cb8.W = local_358.Rotation.ZW.m128d_f64[1];
    local_1058._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_1058._s_0.Y = _UNK_15061cbc8;
    local_1058._s_0.Z = 0.0;
    local_cb8.X = local_358.Rotation.XY.m128d_f64[0];
    local_cb8.Y = local_358.Rotation.XY.m128d_f64[1];
    UE::Math::TQuat<double>::RotateVector
              (&local_cb8,(TVector<double> *)&local_1250._s_0,(TVector<double> *)&local_1058._s_0);
    local_1018._s_0.Z = 0.0;
    local_ff8 = dVar147;
    dStack_ff0 = dVar157;
    local_1220._s_0.X = local_1250._s_0.X * __real_404e000000000000 + dVar147;
    local_fe8 = dVar116;
    local_c98.X = dVar152;
    local_c98.Y = dVar162;
    local_c98.Z = dVar163;
    local_c98.W = dVar146;
    local_1018._s_0.X = dVar65;
    local_1018._s_0.Y = dVar94;
    local_1220._s_0.Y = local_1250._s_0.Y * __real_404e000000000000 + dVar157;
    local_1220._s_0.Z = local_1250._s_0.Z * __real_404e000000000000 + local_1028;
    UE::Math::TQuat<double>::RotateVector
              (&local_c98,(TVector<double> *)&local_1238._s_0,(TVector<double> *)&local_1018._s_0);
    local_1208._s_0.X = local_1238._s_0.X * dVar115 + dVar147;
    local_1208._s_0.Y = local_1238._s_0.Y * dVar115 + dVar157;
    local_1208._s_0.Z = local_1238._s_0.Z * dVar115 + local_fe8;
    FAnimInstanceProxy::AnimDrawDebugDirectionalArrow
              (this->AnimInstanceProxy,(TVector<double> *)&local_1208._s_0,
               (TVector<double> *)&local_1220._s_0,fVar61,&FColor::Red,false,0.0,fVar26,SDPG_World);
    dVar146 = local_538.Translation.ZW.m128d_f64[0];
    dVar163 = local_538.Translation.XY.m128d_f64[1];
    dVar162 = local_538.Translation.XY.m128d_f64[0];
    dVar152 = local_538.Rotation.ZW.m128d_f64[1];
    dVar116 = local_538.Rotation.ZW.m128d_f64[0];
    dVar157 = local_538.Rotation.XY.m128d_f64[1];
    dVar147 = local_538.Rotation.XY.m128d_f64[0];
    local_fb8 = local_538.Translation.XY.m128d_f64[0];
    dStack_fb0 = local_538.Translation.XY.m128d_f64[1];
    local_fa8 = local_538.Translation.ZW.m128d_f64[0];
    local_c78.X = local_538.Rotation.XY.m128d_f64[0];
    local_c78.Y = local_538.Rotation.XY.m128d_f64[1];
    local_c78.Z = local_538.Rotation.ZW.m128d_f64[0];
    local_c78.W = local_538.Rotation.ZW.m128d_f64[1];
    local_fd8._s_0.Z = 0.0;
    local_fd8._s_0.X = dVar65;
    local_fd8._s_0.Y = dVar94;
    UE::Math::TQuat<double>::RotateVector
              (&local_c78,(TVector<double> *)&local_11f0._s_0,(TVector<double> *)&local_fd8._s_0);
    local_11c0._s_0.X = local_11f0._s_0.X * __real_404a000000000000 + dVar162;
    local_11c0._s_0.Y = local_11f0._s_0.Y * __real_404a000000000000 + dVar163;
    local_f98._s_0.Z = 0.0;
    local_f48 = dVar146;
    local_c58.X = dVar147;
    local_c58.Y = dVar157;
    local_c58.Z = dVar116;
    local_c58.W = dVar152;
    local_f58 = dVar162;
    dStack_f50 = dVar163;
    local_f98._s_0.X = dVar65;
    local_f98._s_0.Y = dVar94;
    local_11c0._s_0.Z = local_11f0._s_0.Z * __real_404a000000000000 + local_fa8;
    UE::Math::TQuat<double>::RotateVector
              (&local_c58,(TVector<double> *)&local_11d8._s_0,(TVector<double> *)&local_f98._s_0);
    local_11a8._s_0.X = local_11d8._s_0.X * dVar115 + dVar162;
    local_11a8._s_0.Y = local_11d8._s_0.Y * dVar115 + dVar163;
    local_11a8._s_0.Z = local_11d8._s_0.Z * dVar115 + local_f48;
    FAnimInstanceProxy::AnimDrawDebugDirectionalArrow
              (this->AnimInstanceProxy,(TVector<double> *)&local_11a8._s_0,
               (TVector<double> *)&local_11c0._s_0,fVar61,&FColor::Blue,false,0.0,fVar26,SDPG_World)
    ;
  }
  if ((local_15a8 != false) && (iVar3 == 1)) {
    pTVar53 = UE::Math::TTransform<double>::Inverse(&local_6b8,&local_148);
    local_2f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_2f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_2f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_2f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_2f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_2f8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_2f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_2f8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_2f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_2f8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_2f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_2f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_2f8,&local_658,pTVar53);
    local_b00 = local_6b8.Scale3D.XY.m128d_f64[0];
    dStack_af8 = local_6b8.Scale3D.XY.m128d_f64[1];
    local_af0 = local_6b8.Scale3D.ZW.m128d_f64[0];
    local_ae8 = local_2f8.Translation.XY.m128d_f64[0];
    dStack_ae0 = local_2f8.Translation.XY.m128d_f64[1];
    local_ad8 = local_2f8.Translation.ZW.m128d_f64[0];
    cVar37 = (**(code **)(*(longlong *)local_1598 + 0x18))();
    if ((cVar37 == '\0') &&
       (bVar31 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<1223601028323082738>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_OffsetRootBone.cpp"
                            ,0x1f2,"bRootMotionOverridden"), bVar31)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  this->bIsFirstUpdate = false;
LAB_14a712523:
  if (bVar25) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar30) && (FVar56 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_14a0.NameAndInfo.Index = FVar56.ComparisonIndex.Value;
      local_14a0.NameAndInfo.Number = FVar56.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_14b0);
      local_14a0.StatData.Pad[4] = '\0';
      local_14a0.StatData.Pad[5] = '\0';
      local_14a0.StatData.Pad[6] = '\0';
      local_14a0.StatData.Pad[7] = '\0';
      local_14a0.StatData.Pad[0] = local_14b0.s.LowPart._0_1_;
      local_14a0.StatData.Pad[1] = local_14b0.s.LowPart._1_1_;
      local_14a0.StatData.Pad[2] = local_14b0.s.LowPart._2_1_;
      local_14a0.StatData.Pad[3] = local_14b0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_14a0);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// Initialize_AnyThread @ 14a712860

void __thiscall
FAnimNode_OffsetRootBone::Initialize_AnyThread
          (FAnimNode_OffsetRootBone *this,FAnimationInitializeContext *param_1)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  this->AnimInstanceProxy = *(FAnimInstanceProxy **)param_1;
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Source,param_1);
  lVar2 = *(longlong *)param_1;
  dVar1 = *(double *)(lVar2 + 0x28);
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] = *(double *)(lVar2 + 0x20);
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)(lVar2 + 0x38);
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x30);
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = *(double *)(lVar2 + 0x48);
  (this->ComponentTransform).Translation.XY.m128d_f64[0] = *(double *)(lVar2 + 0x40);
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)(lVar2 + 0x58);
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x50);
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = *(double *)(lVar2 + 0x68);
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] = *(double *)(lVar2 + 0x60);
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)(lVar2 + 0x78);
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x70);
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar3 = (this->ComponentTransform).Translation.XY.m128d_f64[1];
  dVar1 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
  (this->SimulatedTranslation).field0_0x0._s_0.X =
       (this->ComponentTransform).Translation.XY.m128d_f64[0];
  (this->SimulatedTranslation).field0_0x0._s_0.Y = dVar3;
  (this->SimulatedTranslation).field0_0x0._s_0.Z = dVar1;
  dVar1 = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
  dVar3 = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
  dVar4 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
  (this->SimulatedRotation).X = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
  (this->SimulatedRotation).Y = dVar1;
  (this->SimulatedRotation).Z = dVar3;
  (this->SimulatedRotation).W = dVar4;
  this->bIsFirstUpdate = true;
  return;
}

// CacheBones_AnyThread @ 14a712910

void __thiscall
FAnimNode_OffsetRootBone::CacheBones_AnyThread
          (FAnimNode_OffsetRootBone *this,FAnimationCacheBonesContext *param_1)

{
  FAnimNode_Base::CacheBones_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Source,param_1);
  return;
}

// FAnimNode_OffsetRootBone @ 14a71b1a0

FAnimNode_OffsetRootBone * __thiscall
FAnimNode_OffsetRootBone::FAnimNode_OffsetRootBone(FAnimNode_OffsetRootBone *this)

{
  undefined8 uVar1;
  double dVar2;
  
  this->bIsFirstUpdate = true;
  *(undefined ***)this = &___7FAnimNode_OffsetRootBone__6B_;
  *(undefined8 *)&this->Source = 0;
  *(undefined4 *)&(this->Source).field_0x8 = 0xffffffff;
  (this->Source).field_0xc = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  this->AnimInstanceProxy = (FAnimInstanceProxy *)0x0;
  this->CachedDeltaTime = 0.0;
  *&(this->ComponentTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ComponentTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ComponentTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ComponentTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ComponentTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ComponentTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SimulatedTranslation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SimulatedTranslation).field0_0x0._s_0.Y = (double)uVar1;
  (this->SimulatedTranslation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->SimulatedRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->SimulatedRotation).Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->SimulatedRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->SimulatedRotation).W = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->UpdateCounter).Counter = -1;
  (this->UpdateCounter).SkipFrames = 0;
  return this;
}

// GetClampToRotationVelocity @ 14a728b80

bool __thiscall FAnimNode_OffsetRootBone::GetClampToRotationVelocity(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bClampToRotationVelocity.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bClampToRotationVelocity,"bClampToRotationVelocity");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar6,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bClampToRotationVelocity,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_bClampToRotationVelocity.Id = pFVar7->Id;
    CachedId_bClampToRotationVelocity.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bClampToRotationVelocity.Index;
  FVar2 = CachedId_bClampToRotationVelocity.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (bool)*puVar8;
}

// GetClampToTranslationVelocity @ 14a728cd0

bool __thiscall
FAnimNode_OffsetRootBone::GetClampToTranslationVelocity(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bClampToTranslationVelocity.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bClampToTranslationVelocity,"bClampToTranslationVelocity");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar6,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bClampToTranslationVelocity,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_bClampToTranslationVelocity.Id = pFVar7->Id;
    CachedId_bClampToTranslationVelocity.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bClampToTranslationVelocity.Index;
  FVar2 = CachedId_bClampToTranslationVelocity.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (bool)*puVar8;
}

// GetCollisionTestShapeOffset @ 14a728e20

TVector<double> * __thiscall
FAnimNode_OffsetRootBone::GetCollisionTestShapeOffset(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  TVector<double> *pTVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_CollisionTestShapeOffset.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_CollisionTestShapeOffset,"CollisionTestShapeOffset");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar5,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_CollisionTestShapeOffset,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_CollisionTestShapeOffset.Id = pFVar6->Id;
    CachedId_CollisionTestShapeOffset.Index = pFVar6->Index;
  }
  iVar3 = CachedId_CollisionTestShapeOffset.Index;
  FVar2 = CachedId_CollisionTestShapeOffset.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar7 = (TVector<double> *)(*pcVar1)();
    return pTVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pTVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return pTVar7;
}

// GetCollisionTestShapeRadius @ 14a728f70

float __thiscall
FAnimNode_OffsetRootBone::GetCollisionTestShapeRadius(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  float *pfVar7;
  float fVar8;
  FNodeDataId local_38;
  FNodeDataId local_28 [2];
  
  if (CachedId_CollisionTestShapeRadius.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_CollisionTestShapeRadius,"CollisionTestShapeRadius");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar5,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_28,AnimName_CollisionTestShapeRadius,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_CollisionTestShapeRadius.Id = pFVar6->Id;
    CachedId_CollisionTestShapeRadius.Index = pFVar6->Index;
  }
  iVar3 = CachedId_CollisionTestShapeRadius.Index;
  FVar2 = CachedId_CollisionTestShapeRadius.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    fVar8 = (float)(*pcVar1)();
    return fVar8;
  }
  local_38.Id = FVar2;
  local_38.Index = iVar3;
  pfVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_38,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pfVar7;
}

// GetCollisionTestingMode @ 14a7290d0

EOffsetRootBone_CollisionTestingMode __thiscall
FAnimNode_OffsetRootBone::GetCollisionTestingMode(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  EOffsetRootBone_CollisionTestingMode EVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  EOffsetRootBone_CollisionTestingMode *pEVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_CollisionTestingMode.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_CollisionTestingMode,"CollisionTestingMode");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar6,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_CollisionTestingMode,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_CollisionTestingMode.Id = pFVar7->Id;
    CachedId_CollisionTestingMode.Index = pFVar7->Index;
  }
  iVar3 = CachedId_CollisionTestingMode.Index;
  FVar2 = CachedId_CollisionTestingMode.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    EVar5 = (*pcVar1)();
    return EVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pEVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pEVar8;
}

// GetEvaluationMode @ 14a7295b0

EWarpingEvaluationMode __thiscall
FAnimNode_OffsetRootBone::GetEvaluationMode(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  EWarpingEvaluationMode EVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  EWarpingEvaluationMode *pEVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_EvaluationMode.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_EvaluationMode,"EvaluationMode");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar6,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_EvaluationMode,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_EvaluationMode.Id = pFVar7->Id;
    CachedId_EvaluationMode.Index = pFVar7->Index;
  }
  iVar3 = CachedId_EvaluationMode.Index;
  FVar2 = CachedId_EvaluationMode.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    EVar5 = (*pcVar1)();
    return EVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pEVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pEVar8;
}

// GetGroundNormal @ 14a729b20

TVector<double> * __thiscall
FAnimNode_OffsetRootBone::GetGroundNormal(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  TVector<double> *pTVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_GroundNormal.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_GroundNormal,"GroundNormal");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar5,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroundNormal,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_GroundNormal.Id = pFVar6->Id;
    CachedId_GroundNormal.Index = pFVar6->Index;
  }
  iVar3 = CachedId_GroundNormal.Index;
  FVar2 = CachedId_GroundNormal.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar7 = (TVector<double> *)(*pcVar1)();
    return pTVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pTVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return pTVar7;
}

// GetMaxRotationError @ 14a729ca0

float __thiscall FAnimNode_OffsetRootBone::GetMaxRotationError(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  float *pfVar7;
  float fVar8;
  FNodeDataId local_38;
  FNodeDataId local_28 [2];
  
  if (CachedId_MaxRotationError.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_MaxRotationError,"MaxRotationError");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar5,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_28,AnimName_MaxRotationError,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_MaxRotationError.Id = pFVar6->Id;
    CachedId_MaxRotationError.Index = pFVar6->Index;
  }
  iVar3 = CachedId_MaxRotationError.Index;
  FVar2 = CachedId_MaxRotationError.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    fVar8 = (float)(*pcVar1)();
    return fVar8;
  }
  local_38.Id = FVar2;
  local_38.Index = iVar3;
  pfVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_38,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pfVar7;
}

// GetMaxTranslationError @ 14a729e00

float __thiscall FAnimNode_OffsetRootBone::GetMaxTranslationError(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  float *pfVar7;
  float fVar8;
  FNodeDataId local_38;
  FNodeDataId local_28 [2];
  
  if (CachedId_MaxTranslationError.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_MaxTranslationError,"MaxTranslationError");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar5,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_28,AnimName_MaxTranslationError,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_MaxTranslationError.Id = pFVar6->Id;
    CachedId_MaxTranslationError.Index = pFVar6->Index;
  }
  iVar3 = CachedId_MaxTranslationError.Index;
  FVar2 = CachedId_MaxTranslationError.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    fVar8 = (float)(*pcVar1)();
    return fVar8;
  }
  local_38.Id = FVar2;
  local_38.Index = iVar3;
  pfVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_38,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pfVar7;
}

// GetOnGround @ 14a72a0a0

bool __thiscall FAnimNode_OffsetRootBone::GetOnGround(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bOnGround.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bOnGround,"bOnGround");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar6,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bOnGround,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_bOnGround.Id = pFVar7->Id;
    CachedId_bOnGround.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bOnGround.Index;
  FVar2 = CachedId_bOnGround.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (bool)*puVar8;
}

// GetResetEveryFrame @ 14a72a400

bool __thiscall FAnimNode_OffsetRootBone::GetResetEveryFrame(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bResetEveryFrame.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bResetEveryFrame,"bResetEveryFrame");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar6,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bResetEveryFrame,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_bResetEveryFrame.Id = pFVar7->Id;
    CachedId_bResetEveryFrame.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bResetEveryFrame.Index;
  FVar2 = CachedId_bResetEveryFrame.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (bool)*puVar8;
}

// GetRotationDelta @ 14a72a560

TRotator<double> * __thiscall
FAnimNode_OffsetRootBone::GetRotationDelta(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  TRotator<double> *pTVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_RotationDelta.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_RotationDelta,"RotationDelta");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar5,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_RotationDelta,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_RotationDelta.Id = pFVar6->Id;
    CachedId_RotationDelta.Index = pFVar6->Index;
  }
  iVar3 = CachedId_RotationDelta.Index;
  FVar2 = CachedId_RotationDelta.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar7 = (TRotator<double> *)(*pcVar1)();
    return pTVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pTVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return pTVar7;
}

// GetRotationHalfLife @ 14a72a6b0

float __thiscall FAnimNode_OffsetRootBone::GetRotationHalfLife(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  float *pfVar7;
  float fVar8;
  FNodeDataId local_38;
  FNodeDataId local_28 [2];
  
  if (CachedId_RotationHalfLife.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_RotationHalfLife,"RotationHalfLife");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar5,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_28,AnimName_RotationHalfLife,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_RotationHalfLife.Id = pFVar6->Id;
    CachedId_RotationHalfLife.Index = pFVar6->Index;
  }
  iVar3 = CachedId_RotationHalfLife.Index;
  FVar2 = CachedId_RotationHalfLife.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    fVar8 = (float)(*pcVar1)();
    return fVar8;
  }
  local_38.Id = FVar2;
  local_38.Index = iVar3;
  pfVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_38,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pfVar7;
}

// GetRotationMode @ 14a72a810

EOffsetRootBoneMode __thiscall
FAnimNode_OffsetRootBone::GetRotationMode(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  EOffsetRootBoneMode EVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  EOffsetRootBoneMode *pEVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_RotationMode.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_RotationMode,"RotationMode");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar6,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_RotationMode,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_RotationMode.Id = pFVar7->Id;
    CachedId_RotationMode.Index = pFVar7->Index;
  }
  iVar3 = CachedId_RotationMode.Index;
  FVar2 = CachedId_RotationMode.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    EVar5 = (*pcVar1)();
    return EVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pEVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pEVar8;
}

// GetRotationSpeedRatio @ 14a72a960

float __thiscall FAnimNode_OffsetRootBone::GetRotationSpeedRatio(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  float *pfVar7;
  float fVar8;
  FNodeDataId local_38;
  FNodeDataId local_28 [2];
  
  if (CachedId_RotationSpeedRatio.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_RotationSpeedRatio,"RotationSpeedRatio");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar5,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_28,AnimName_RotationSpeedRatio,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_RotationSpeedRatio.Id = pFVar6->Id;
    CachedId_RotationSpeedRatio.Index = pFVar6->Index;
  }
  iVar3 = CachedId_RotationSpeedRatio.Index;
  FVar2 = CachedId_RotationSpeedRatio.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    fVar8 = (float)(*pcVar1)();
    return fVar8;
  }
  local_38.Id = FVar2;
  local_38.Index = iVar3;
  pfVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_38,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pfVar7;
}

// GetTranslationDelta @ 14a72b850

TVector<double> * __thiscall
FAnimNode_OffsetRootBone::GetTranslationDelta(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  TVector<double> *pTVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_TranslationDelta.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_TranslationDelta,"TranslationDelta");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar5,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_TranslationDelta,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_TranslationDelta.Id = pFVar6->Id;
    CachedId_TranslationDelta.Index = pFVar6->Index;
  }
  iVar3 = CachedId_TranslationDelta.Index;
  FVar2 = CachedId_TranslationDelta.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar7 = (TVector<double> *)(*pcVar1)();
    return pTVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pTVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return pTVar7;
}

// GetTranslationHalflife @ 14a72b9a0

float __thiscall FAnimNode_OffsetRootBone::GetTranslationHalflife(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  float *pfVar7;
  float fVar8;
  FNodeDataId local_38;
  FNodeDataId local_28 [2];
  
  if (CachedId_TranslationHalflife.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_TranslationHalflife,"TranslationHalflife");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar5,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_28,AnimName_TranslationHalflife,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_TranslationHalflife.Id = pFVar6->Id;
    CachedId_TranslationHalflife.Index = pFVar6->Index;
  }
  iVar3 = CachedId_TranslationHalflife.Index;
  FVar2 = CachedId_TranslationHalflife.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    fVar8 = (float)(*pcVar1)();
    return fVar8;
  }
  local_38.Id = FVar2;
  local_38.Index = iVar3;
  pfVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_38,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pfVar7;
}

// GetTranslationMode @ 14a72bb00

EOffsetRootBoneMode __thiscall
FAnimNode_OffsetRootBone::GetTranslationMode(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  EOffsetRootBoneMode EVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  EOffsetRootBoneMode *pEVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_TranslationMode.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_TranslationMode,"TranslationMode");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar6,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_TranslationMode,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_TranslationMode.Id = pFVar7->Id;
    CachedId_TranslationMode.Index = pFVar7->Index;
  }
  iVar3 = CachedId_TranslationMode.Index;
  FVar2 = CachedId_TranslationMode.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    EVar5 = (*pcVar1)();
    return EVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pEVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pEVar8;
}

// GetTranslationSpeedRatio @ 14a72bc50

float __thiscall FAnimNode_OffsetRootBone::GetTranslationSpeedRatio(FAnimNode_OffsetRootBone *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  float *pfVar7;
  float fVar8;
  FNodeDataId local_38;
  FNodeDataId local_28 [2];
  
  if (CachedId_TranslationSpeedRatio.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_TranslationSpeedRatio,"TranslationSpeedRatio");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar5,
                           L"AnimNode_OffsetRootBone");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_28,AnimName_TranslationSpeedRatio,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton);
    CachedId_TranslationSpeedRatio.Id = pFVar6->Id;
    CachedId_TranslationSpeedRatio.Index = pFVar6->Index;
  }
  iVar3 = CachedId_TranslationSpeedRatio.Index;
  FVar2 = CachedId_TranslationSpeedRatio.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    fVar8 = (float)(*pcVar1)();
    return fVar8;
  }
  local_38.Id = FVar2;
  local_38.Index = iVar3;
  pfVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_38,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pfVar7;
}

// Reset @ 14a72f630

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FAnimNode_OffsetRootBone::Reset(FAnimNode_OffsetRootBone *this,FAnimationBaseContext *param_1)

{
  double dVar1;
  FAnimInstanceProxy *pFVar2;
  double dVar3;
  double dVar4;
  
  pFVar2 = param_1->AnimInstanceProxy;
  dVar1 = (pFVar2->ComponentTransform).Rotation.XY.m128d_f64[1];
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] =
       (pFVar2->ComponentTransform).Rotation.XY.m128d_f64[0];
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pFVar2->ComponentTransform).Rotation.ZW.m128d_f64[1];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] =
       (pFVar2->ComponentTransform).Rotation.ZW.m128d_f64[0];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pFVar2->ComponentTransform).Translation.XY.m128d_f64[1];
  (this->ComponentTransform).Translation.XY.m128d_f64[0] =
       (pFVar2->ComponentTransform).Translation.XY.m128d_f64[0];
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pFVar2->ComponentTransform).Translation.ZW.m128d_f64[1];
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] =
       (pFVar2->ComponentTransform).Translation.ZW.m128d_f64[0];
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pFVar2->ComponentTransform).Scale3D.XY.m128d_f64[1];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] =
       (pFVar2->ComponentTransform).Scale3D.XY.m128d_f64[0];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (pFVar2->ComponentTransform).Scale3D.ZW.m128d_f64[1];
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] =
       (pFVar2->ComponentTransform).Scale3D.ZW.m128d_f64[0];
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar3 = (this->ComponentTransform).Translation.XY.m128d_f64[1];
  dVar1 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
  (this->SimulatedTranslation).field0_0x0._s_0.X =
       (this->ComponentTransform).Translation.XY.m128d_f64[0];
  (this->SimulatedTranslation).field0_0x0._s_0.Y = dVar3;
  (this->SimulatedTranslation).field0_0x0._s_0.Z = dVar1;
  dVar1 = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
  dVar3 = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
  dVar4 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
  (this->SimulatedRotation).X = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
  (this->SimulatedRotation).Y = dVar1;
  (this->SimulatedRotation).Z = dVar3;
  (this->SimulatedRotation).W = dVar4;
  this->bIsFirstUpdate = true;
  return;
}

// operator() @ 150552fd0

bool __thiscall
`FAnimNode_OffsetRootBone::Evaluate_AnyThread'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1223601028323082382>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1223601028323082382>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

