// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 6

// StaticStruct @ 1463d67d0

UScriptStruct * __cdecl FAnimNode_BlendBoneByChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendBoneByChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendBoneByChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel,(UObject *)pUVar1,
                         L"AnimNode_BlendBoneByChannel");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_BlendBoneByChannel.OuterSingleton;
}

// Initialize_AnyThread @ 1463d8d60

void __thiscall
FAnimNode_BlendBoneByChannel::Initialize_AnyThread
          (FAnimNode_BlendBoneByChannel *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendBoneByChannel::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->A,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->B,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// CacheBones_AnyThread @ 1463d8dc0

void __thiscall
FAnimNode_BlendBoneByChannel::CacheBones_AnyThread
          (FAnimNode_BlendBoneByChannel *this,FAnimationCacheBonesContext *param_1)

{
  int *piVar1;
  FBoneReference *pFVar2;
  FName *pFVar3;
  int iVar4;
  FBoneContainer *pFVar5;
  FBoneReference *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  FCompactPoseBoneIndex FVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  FBoneReference *this_00;
  FBoneReference *this_01;
  undefined1 local_res8 [8];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendBoneByChannel::CacheBones_AnyThread");
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->A,param_1);
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->B,param_1);
  piVar1 = &(this->ValidBoneEntries).ArrayMax;
  (this->ValidBoneEntries).ArrayNum = 0;
  if ((this->ValidBoneEntries).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,&(this->ValidBoneEntries).AllocatorInstance,0,piVar1);
  }
  lVar14 = *(longlong *)param_1;
  if (*(longlong *)(lVar14 + 0x660) == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar4 = (this->BoneDefinitions).ArrayNum;
  pFVar5 = *(FBoneContainer **)(lVar14 + 0x660);
  this_00 = (FBoneReference *)(this->BoneDefinitions).AllocatorInstance.Data;
  pFVar2 = (FBoneReference *)((longlong)this_00 + (longlong)iVar4 * 0x24);
  this_01 = this_00 + 1;
  while( true ) {
    if ((this->BoneDefinitions).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FBlendBoneByChannelEntry,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FBoneReference::Initialize(this_00,pFVar5);
    FBoneReference::Initialize(this_01,pFVar5);
    bVar12 = FBoneReference::IsValidToEvaluate(this_00,pFVar5);
    if (bVar12) {
      bVar12 = FBoneReference::IsValidToEvaluate(this_01,pFVar5);
      if ((bVar12) &&
         ((((char)this_01[1].BoneName.ComparisonIndex.Value != '\0' ||
           (*(char *)((longlong)&this_01[1].BoneName.ComparisonIndex.Value + 1) != '\0')) ||
          (*(char *)((longlong)&this_01[1].BoneName.ComparisonIndex.Value + 2) != '\0')))) {
        pFVar6 = (FBoneReference *)(this->ValidBoneEntries).AllocatorInstance.Data;
        if ((pFVar6 <= this_00) &&
           (this_00 < (FBoneReference *)((longlong)pFVar6 + (longlong)*piVar1 * 0x24))) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar12) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        iVar13 = (this->ValidBoneEntries).ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x424,&(this->ValidBoneEntries).AllocatorInstance,piVar1);
        }
        lVar14 = (longlong)iVar13;
        (this->ValidBoneEntries).ArrayNum = iVar13 + 1;
        uVar10 = *(undefined4 *)&this_00->field_0x8;
        FVar11 = this_00->CachedCompactPoseIndex;
        pFVar7 = (this->ValidBoneEntries).AllocatorInstance.Data;
        pFVar3 = (FName *)(pFVar7 + lVar14 * 0x24);
        *pFVar3 = this_00->BoneName;
        pFVar3[1].ComparisonIndex = (FNameEntryId)uVar10;
        pFVar3[1].Number = (uint)FVar11;
        uVar9 = *(undefined8 *)&this_00[1].field_0x8;
        *(FName *)(pFVar7 + lVar14 * 0x24 + 0x10) = this_00[1].BoneName;
        *(undefined8 *)(pFVar7 + lVar14 * 0x24 + 0x18) = uVar9;
        *(uint *)(pFVar7 + lVar14 * 0x24 + 0x20) = this_00[2].BoneName.ComparisonIndex.Value;
      }
    }
    this_00 = (FBoneReference *)&this_00[2].BoneName.Number;
    this_01 = (FBoneReference *)&this_01[2].BoneName.Number;
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 1463d9020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_BlendBoneByChannel::Update_AnyThread
          (FAnimNode_BlendBoneByChannel *this,FAnimationUpdateContext *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_BlendBoneByChannel::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_FAnimNode_BlendBoneByChannel_Update>
  FVar9;
  FExposedValueHandler *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  float fVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_68;
  FAnimationUpdateContext local_58;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendBoneByChannel::Update_AnyThread");
  FVar13.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FAnimNode_BlendBoneByChannel_Update ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_BlendBoneByChannel::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_FAnimNode_BlendBoneByChannel_Update>
           )0x0) {
        pFVar8 = ::FName::FName((FName *)&local_res8.s,"STAT_FAnimNode_BlendBoneByChannel_Update");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAnimNode_BlendBoneByChannel_Update,
                   *pFVar8,L"STAT_FAnimNode_BlendBoneByChannel_Update","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar9 = StatPtr_STAT_FAnimNode_BlendBoneByChannel_Update;
  if (StatPtr_STAT_FAnimNode_BlendBoneByChannel_Update ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_BlendBoneByChannel::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_FAnimNode_BlendBoneByChannel_Update>
       )0x0) {
    pFVar8 = ::FName::FName(&local_res10,"STAT_FAnimNode_BlendBoneByChannel_Update");
    FVar9 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_BlendBoneByChannel::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_FAnimNode_BlendBoneByChannel_Update>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FAnimNode_BlendBoneByChannel_Update,*pFVar8,
                         L"STAT_FAnimNode_BlendBoneByChannel_Update","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_BlendBoneByChannel.cpp"
                   ,0x30);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      FVar13.Value = FVar11.Value;
      goto LAB_1463d91b8;
    }
  }
  bVar4 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_1463d91b8:
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  fVar14 = FInputScaleBias::ApplyTo(&this->AlphaScaleBias,this->Alpha);
  fVar6 = __real_3727c5ac;
  this->InternalBlendAlpha = fVar14;
  if ((fVar14 <= fVar6) || ((this->ValidBoneEntries).ArrayNum < 1)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  this->bBIsRelevant = bVar7;
  FPoseLinkBase::Update((FPoseLinkBase *)&this->A,param_1);
  if (this->bBIsRelevant != false) {
    local_58._padding_ = param_1->_padding_;
    local_58._padding_ = param_1->_padding_;
    local_58._padding_ = param_1->_padding_;
    local_58._padding_ = param_1->_padding_;
    uVar2 = param_1->RootMotionWeightModifier;
    local_58.DeltaTime = param_1->DeltaTime;
    local_58._44_4_ = *(undefined4 *)&param_1->field_0x2c;
    local_58.RootMotionWeightModifier = (float)uVar2;
    local_58.CurrentWeight = param_1->CurrentWeight * this->InternalBlendAlpha;
    FPoseLinkBase::Update((FPoseLinkBase *)&this->B,&local_58);
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Alpha",
             this->InternalBlendAlpha);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_68.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_68.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_68);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 1463d9400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_BlendBoneByChannel::Evaluate_AnyThread
          (FAnimNode_BlendBoneByChannel *this,FPoseContext *param_1)

{
  FCompactPose *pFVar1;
  FBoneReference *pFVar2;
  undefined1 (*pauVar3) [16];
  double *pdVar4;
  undefined1 (*pauVar5) [16];
  double *pdVar6;
  double *pdVar7;
  uchar *puVar8;
  float fVar9;
  int iVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  ulonglong uVar19;
  bool bVar20;
  int iVar21;
  TTransform<double> *pTVar22;
  FBoneReference *pFVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  double dVar32;
  undefined8 uVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar48;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar49;
  undefined4 uVar50;
  uint uVar51;
  int iVar52;
  uint uVar53;
  int iVar54;
  uint uVar55;
  int iVar56;
  uint uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar60;
  double dVar62;
  undefined1 auVar61 [16];
  double dVar63;
  double dVar67;
  undefined1 auVar65 [16];
  double dVar64;
  undefined1 auVar66 [16];
  double dVar68;
  double dVar70;
  undefined1 auVar69 [16];
  double dVar71;
  double dVar72;
  float fVar73;
  double dVar74;
  double dVar76;
  undefined1 auVar75 [16];
  double dVar77;
  float fVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar82;
  undefined1 auVar83 [16];
  undefined1 auStackY_5a8 [32];
  undefined1 local_558;
  undefined1 local_557;
  FIdentityFunctor local_556 [2];
  FCompactPoseBoneIndex local_554;
  ForAnyElementType local_550;
  undefined8 local_548;
  FCompactPoseBoneIndex local_540;
  undefined1 local_53c [8];
  float local_534;
  float local_530;
  undefined1 local_528 [16];
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  FReferenceSkeleton *local_4f8;
  ForAnyElementType local_4f0;
  undefined8 local_4e8;
  ForAnyElementType FStack_4e0;
  undefined8 local_4d8;
  ForAnyElementType local_4d0;
  undefined8 local_4c8;
  ForElementType<FCompactPoseBoneIndex> local_4c0;
  undefined8 local_4b8;
  undefined1 local_4a8 [16];
  undefined8 local_498;
  longlong lStack_490;
  longlong local_488;
  longlong local_480;
  undefined8 local_478;
  ForElementType<FCompactPoseBoneIndex> local_470;
  undefined8 local_468;
  FBoneTransform *local_458;
  int iStack_450;
  undefined1 auStack_44c [20];
  double local_438 [2];
  double local_428;
  double dStack_420;
  undefined1 local_418 [16];
  double local_408;
  double dStack_400;
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [88];
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> TStack_390;
  bool local_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  TArrayView<FBoneTransform_const_,int> local_2e8;
  double local_2d8;
  double dStack_2d0;
  uchar local_2c8 [8];
  undefined1 local_2c0 [16];
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double dStack_288;
  double local_280;
  TTransform<double> local_278;
  TTransform<double> local_218;
  FBoneTransform local_1b8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendBoneByChannel::Evaluate_AnyThread");
  FPoseLink::Evaluate(&this->A,param_1);
  if (this->bBIsRelevant != false) {
    if ((*(longlong *)(param_1->_padding_ + 0x660) == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar20)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    FAnimationBaseContext::FAnimationBaseContext
              ((FAnimationBaseContext *)local_3e8,(FAnimInstanceProxy *)param_1->_padding_,
               (FAnimationUpdateSharedContext *)0x0);
    local_350 = param_1->bExpectsAdditivePose != false;
    local_3e8._32_8_ = 0;
    local_3e8._40_8_ = 0;
    local_3e8._48_8_ = 0;
    local_3e8._56_8_ = 0;
    local_3e8._64_8_ = 0;
    local_3e8[0x48] = 0;
    local_3e8._80_8_ = 0;
    TStack_390.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_390.UniqueTypedBoneIndices.ArrayNum = 0;
    TStack_390.UniqueTypedBoneIndices.ArrayMax = 0;
    TStack_390.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_390.AttributeIdentifiers.ArrayNum = 0;
    TStack_390.AttributeIdentifiers.ArrayMax = 0;
    TStack_390.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_390.Values.ArrayNum = 0;
    TStack_390.Values.ArrayMax = 0;
    TStack_390.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_390.UniqueTypes.ArrayNum = 0;
    TStack_390.UniqueTypes.ArrayMax = 0;
    FPoseContext::InitializeImpl((FPoseContext *)local_3e8,(FAnimInstanceProxy *)param_1->_padding_)
    ;
    local_3e8._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
    local_3e8._24_4_ = (undefined4)param_1->_padding_;
    FPoseLink::Evaluate(&this->B,(FPoseContext *)local_3e8);
    pFVar1 = &param_1->Pose;
    if ((this->TransformsSpace).Value == '\x03') {
      iVar10 = (this->ValidBoneEntries).ArrayNum;
      pFVar23 = (FBoneReference *)(this->ValidBoneEntries).AllocatorInstance.Data;
      pFVar2 = (FBoneReference *)((longlong)pFVar23 + (longlong)iVar10 * 0x24);
      local_534 = __real_3727c5ac;
      local_530 = __real_3f800000;
      local_508._4_4_ = _UNK_15061cc74;
      local_508._0_4_ = __xmm_7fffffff7fffffff7fffffff7fffffff;
      local_508._8_4_ = _UNK_15061cc78;
      local_508._12_4_ = _UNK_15061cc7c;
      fVar78 = __real_3f800000;
      uVar51 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar73 = __real_3727c5ac;
      while( true ) {
        if ((this->ValidBoneEntries).ArrayNum != iVar10) {
          local_558 = 0;
          `TCheckedPointerIterator<FBlendBoneByChannelEntry,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_558);
        }
        if (pFVar23 == pFVar2) break;
        FBoneReference::GetCompactPoseIndex(pFVar23,(FBoneContainer *)local_53c);
        FBoneReference::GetCompactPoseIndex(pFVar23 + 1,(FBoneContainer *)(local_53c + 4));
        lVar24 = (longlong)(int)local_53c._0_4_;
        uVar53 = 0;
        if ((int)local_53c._0_4_ < (int)local_3e8._40_4_) {
          uVar53 = (uint)~local_53c._0_4_ >> 0x1f;
        }
        if ((uVar53 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar25 = (longlong)(int)local_53c._4_4_;
        lVar24 = lVar24 * 0x60;
        pauVar3 = (undefined1 (*) [16])(lVar24 + 0x30 + local_3e8._32_8_);
        local_528 = *pauVar3;
        auVar80 = *(undefined1 (*) [16])(lVar24 + local_3e8._32_8_);
        auVar81 = *(undefined1 (*) [16])(lVar24 + 0x10 + local_3e8._32_8_);
        pdVar4 = (double *)(lVar24 + 0x20 + local_3e8._32_8_);
        dVar68 = *pdVar4;
        dVar70 = pdVar4[1];
        pauVar5 = (undefined1 (*) [16])(lVar24 + 0x40 + local_3e8._32_8_);
        dVar34 = *(double *)*pauVar5;
        dVar18 = *(double *)(*pauVar5 + 8);
        auVar43 = *pauVar5;
        pdVar4 = (double *)(lVar24 + 0x50 + local_3e8._32_8_);
        dVar82 = *pdVar4;
        dVar77 = pdVar4[1];
        uVar53 = 0;
        if ((int)local_53c._4_4_ < *(int *)&(param_1->Pose).field_0x8) {
          uVar53 = (uint)~local_53c._4_4_ >> 0x1f;
        }
        iVar21 = *(int *)*pauVar3;
        iVar52 = *(int *)(*pauVar3 + 4);
        iVar54 = *(int *)(*pauVar3 + 8);
        iVar56 = *(int *)(*pauVar3 + 0xc);
        if (uVar53 == 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar21 = local_528._0_4_;
          iVar52 = local_528._4_4_;
          iVar54 = local_528._8_4_;
          iVar56 = local_528._12_4_;
        }
        fVar9 = this->InternalBlendAlpha;
        lVar24 = *(longlong *)pFVar1;
        lVar25 = lVar25 * 0x60;
        if (fVar73 < (float)((uint)fVar9 & uVar51)) {
          local_308 = auVar43;
          dStack_2f0 = dVar77;
          if (fVar73 < (float)((uint)(fVar9 - fVar78) & uVar51)) {
            pdVar4 = (double *)(lVar25 + 0x10 + lVar24);
            dVar74 = (double)fVar9;
            dVar76 = (double)fVar9;
            dVar64 = (double)fVar9;
            dVar16 = (double)fVar9;
            dVar63 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar74;
            dVar67 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar76;
            auVar35._8_4_ = SUB84(dVar67,0);
            auVar35._0_8_ = dVar63;
            uVar49 = (undefined4)((ulonglong)dVar67 >> 0x20);
            auVar35._12_4_ = uVar49;
            pdVar6 = (double *)(lVar25 + 0x20 + lVar24);
            dVar68 = dVar68 * dVar74 + dVar63 * *pdVar6;
            dVar70 = dVar70 * dVar76 + auVar35._8_8_ * pdVar6[1];
            dVar71 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - dVar64;
            dVar72 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar16;
            local_518._8_8_ = dVar70;
            local_518._0_8_ = dVar68;
            auVar36._8_4_ = SUB84(dVar72,0);
            auVar36._0_8_ = dVar71;
            uVar50 = (undefined4)((ulonglong)dVar72 >> 0x20);
            auVar36._12_4_ = uVar50;
            pdVar6 = (double *)(lVar25 + 0x30 + lVar24);
            dVar32 = (double)CONCAT44(iVar56,iVar54) * dVar16 + auVar36._8_8_ * pdVar6[1];
            auVar37._8_4_ = SUB84(dVar67,0);
            auVar37._0_8_ = dVar63;
            auVar37._12_4_ = uVar49;
            pdVar7 = (double *)(lVar25 + 0x40 + lVar24);
            local_528._8_4_ = SUB84(dVar32,0);
            local_528._0_8_ = (double)CONCAT44(iVar52,iVar21) * dVar64 + dVar71 * *pdVar6;
            local_528._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
            auVar43 = *(undefined1 (*) [16])(lVar25 + 0x10 + lVar24);
            dVar34 = dVar34 * dVar74 + dVar63 * *pdVar7;
            dVar18 = dVar18 * dVar76 + auVar37._8_8_ * pdVar7[1];
            dVar60 = 0.0 - auVar43._0_8_;
            dVar62 = 0.0 - auVar43._8_8_;
            auVar38._8_4_ = SUB84(dVar72,0);
            auVar38._0_8_ = dVar71;
            auVar38._12_4_ = uVar50;
            local_308._8_4_ = SUB84(dVar18,0);
            local_308._0_8_ = dVar34;
            local_308._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
            pdVar6 = (double *)(lVar25 + 0x50 + lVar24);
            dVar82 = dVar82 * dVar64 + dVar71 * *pdVar6;
            dVar32 = auVar81._0_8_ * *pdVar4 + auVar80._0_8_ * *(double *)(lVar25 + lVar24);
            dVar48 = auVar81._8_8_ * pdVar4[1] + auVar80._8_8_ * ((double *)(lVar25 + lVar24))[1];
            auVar39._8_4_ = SUB84(dVar48,0);
            auVar39._0_8_ = dVar32;
            auVar39._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
            auVar79 = *(undefined1 (*) [16])(lVar25 + lVar24);
            lVar26 = -(ulonglong)(0.0 <= auVar39._8_8_ + dVar32);
            lVar29 = -(ulonglong)(0.0 <= dVar32 + dVar48);
            uVar51 = (uint)lVar26;
            uVar53 = (uint)((ulonglong)lVar26 >> 0x20);
            uVar55 = (uint)lVar29;
            uVar57 = (uint)((ulonglong)lVar29 >> 0x20);
            dVar32 = 0.0 - auVar79._0_8_;
            dVar48 = 0.0 - auVar79._8_8_;
            auVar69._0_4_ = ~uVar51 & SUB84(dVar32,0);
            auVar69._4_4_ = ~uVar53 & (uint)((ulonglong)dVar32 >> 0x20);
            auVar69._8_4_ = ~uVar55 & SUB84(dVar48,0);
            auVar69._12_4_ = ~uVar57 & (uint)((ulonglong)dVar48 >> 0x20);
            auVar12._4_4_ = auVar79._4_4_ & uVar53;
            auVar12._0_4_ = auVar79._0_4_ & uVar51;
            auVar12._8_4_ = auVar79._8_4_ & uVar55;
            auVar12._12_4_ = auVar79._12_4_ & uVar57;
            dVar63 = SUB168(auVar69 | auVar12,0) * dVar63 + auVar80._0_8_ * dVar74;
            dVar67 = SUB168(auVar69 | auVar12,8) * dVar67 + auVar80._8_8_ * dVar76;
            auVar65._0_4_ = ~uVar51 & SUB84(dVar60,0);
            auVar65._4_4_ = ~uVar53 & (uint)((ulonglong)dVar60 >> 0x20);
            auVar65._8_4_ = ~uVar55 & SUB84(dVar62,0);
            auVar65._12_4_ = ~uVar57 & (uint)((ulonglong)dVar62 >> 0x20);
            auVar14._4_4_ = auVar43._4_4_ & uVar53;
            auVar14._0_4_ = auVar43._0_4_ & uVar51;
            auVar14._8_4_ = auVar43._8_4_ & uVar55;
            auVar14._12_4_ = auVar43._12_4_ & uVar57;
            auVar40._8_4_ = SUB84(dVar67,0);
            auVar40._0_8_ = dVar63;
            auVar40._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
            dVar64 = SUB168(auVar65 | auVar14,0) * dVar71 + auVar81._0_8_ * dVar64;
            dVar60 = SUB168(auVar65 | auVar14,8) * dVar72 + auVar81._8_8_ * dVar16;
            dVar32 = dVar64 * dVar64 + dVar63 * dVar63;
            dVar48 = dVar60 * dVar60 + auVar40._8_8_ * dVar67;
            auVar41._8_4_ = SUB84(dVar48,0);
            auVar41._0_8_ = dVar32;
            auVar41._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
            auVar42._0_8_ = auVar41._8_8_ + dVar32;
            auVar42._8_8_ = dVar32 + dVar48;
            uVar27 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                      auVar42._0_8_);
            uVar30 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                      auVar42._8_8_);
            uVar28 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                      auVar42._0_8_);
            uVar31 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                      auVar42._8_8_);
            auVar43 = sqrtpd(auVar42,auVar42);
            auVar79 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar43)
            ;
            auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar43)
            ;
            auVar80._0_8_ = uVar27 & (ulonglong)(auVar79._0_8_ * dVar63);
            uVar19 = uVar30 & (ulonglong)(auVar79._8_8_ * dVar67);
            auVar80._8_4_ = (undefined4)uVar19;
            auVar80._12_4_ = (undefined4)(uVar19 >> 0x20);
            auVar13._4_4_ =
                 ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
            auVar13._0_4_ = ~(uint)uVar27 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
            auVar13._8_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
            auVar13._12_4_ =
                 ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
            auVar80 = auVar80 | auVar13;
            auVar81._0_8_ = uVar28 & (ulonglong)(auVar43._0_8_ * dVar64);
            uVar19 = uVar31 & (ulonglong)(auVar43._8_8_ * dVar60);
            auVar81._8_4_ = (undefined4)uVar19;
            auVar81._12_4_ = (undefined4)(uVar19 >> 0x20);
            auVar15._4_4_ =
                 ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
            auVar15._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
            auVar15._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
            auVar15._12_4_ =
                 ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
            auVar81 = auVar81 | auVar15;
            fVar78 = local_530;
            uVar51 = local_508._0_4_;
            fVar73 = local_534;
            dStack_2f0 = dVar77 * dVar16 + auVar38._8_8_ * pdVar6[1];
          }
          uVar33 = local_528._0_8_;
          local_2f8 = dVar82;
        }
        else {
          pauVar3 = (undefined1 (*) [16])(lVar25 + 0x40 + lVar24);
          dVar34 = *(double *)*pauVar3;
          dVar18 = *(double *)(*pauVar3 + 8);
          local_308 = *pauVar3;
          pdVar4 = (double *)(lVar25 + 0x50 + lVar24);
          dStack_2f0 = pdVar4[1];
          auVar80 = *(undefined1 (*) [16])(lVar25 + lVar24);
          auVar81 = *(undefined1 (*) [16])(lVar25 + 0x10 + lVar24);
          pdVar6 = (double *)(lVar25 + 0x20 + lVar24);
          dVar68 = *pdVar6;
          dVar70 = pdVar6[1];
          uVar33 = *(undefined8 *)(lVar25 + 0x30 + lVar24);
          local_2f8 = *pdVar4;
        }
        if ((char)pFVar23[2].BoneName.ComparisonIndex.Value != '\0') {
          pdVar4 = (double *)(lVar25 + 0x20 + lVar24);
          *pdVar4 = dVar68;
          pdVar4[1] = dVar70;
          puVar8 = (uchar *)(lVar25 + 0x30 + lVar24);
          *(undefined8 *)puVar8 = uVar33;
          puVar8[8] = '\0';
          puVar8[9] = '\0';
          puVar8[10] = '\0';
          puVar8[0xb] = '\0';
          puVar8[0xc] = '\0';
          puVar8[0xd] = '\0';
          puVar8[0xe] = '\0';
          puVar8[0xf] = '\0';
          dVar34 = (double)local_308._0_8_;
          dVar18 = (double)local_308._8_8_;
          local_2d8 = dVar68;
          dStack_2d0 = dVar70;
          local_2c8 = (uchar  [8])uVar33;
        }
        uVar49 = (undefined4)((ulonglong)dVar18 >> 0x20);
        if (*(char *)((longlong)&pFVar23[2].BoneName.ComparisonIndex.Value + 1) != '\0') {
          *(undefined1 (*) [16])(lVar25 + lVar24) = auVar80;
          *(undefined1 (*) [16])(lVar25 + 0x10 + lVar24) = auVar81;
        }
        if (*(char *)((longlong)&pFVar23[2].BoneName.ComparisonIndex.Value + 2) != '\0') {
          local_2c0._8_4_ = SUB84(dVar18,0);
          local_2c0._0_8_ = dVar34;
          local_2c0._12_4_ = uVar49;
          auVar17._8_4_ = SUB84(dVar18,0);
          auVar17._0_8_ = dVar34;
          auVar17._12_4_ = uVar49;
          *(undefined1 (*) [16])(lVar25 + 0x40 + lVar24) = auVar17;
          pdVar4 = (double *)(lVar25 + 0x50 + lVar24);
          *pdVar4 = local_2f8;
          pdVar4[1] = 0.0;
          local_2b0 = local_2f8;
        }
        pFVar23 = (FBoneReference *)&pFVar23[2].BoneName.Number;
        local_348 = auVar80;
        local_338 = auVar81;
      }
    }
    else {
      local_4f8 = (FReferenceSkeleton *)0x0;
      local_4e8 = 0;
      FStack_4e0.Data = (FScriptContainerElement *)0x0;
      local_4f0.Data = (FScriptContainerElement *)0x0;
      local_4d8 = 0;
      local_4d0.Data = (FScriptContainerElement *)0x0;
      local_4c8 = 0;
      local_4c0.Data = (FCompactPoseBoneIndex *)0x0;
      local_4b8 = 0;
      FCSPose<FCompactPose>::InitPose((FCSPose<FCompactPose> *)&local_4f8,pFVar1);
      local_4a8._0_8_ = 0;
      local_498 = 0;
      lStack_490 = 0;
      local_4a8._8_8_ = (FScriptContainerElement *)0x0;
      local_488 = 0;
      local_480 = 0;
      local_478 = 0;
      local_470.Data = (FCompactPoseBoneIndex *)0x0;
      local_468 = 0;
      FCSPose<FCompactPose>::InitPose
                ((FCSPose<FCompactPose> *)local_4a8,(FCompactPose *)(local_3e8 + 0x20));
      lVar24 = param_1->_padding_;
      pFVar23 = (FBoneReference *)(this->ValidBoneEntries).AllocatorInstance.Data;
      local_550.Data = (FScriptContainerElement *)0x0;
      local_548._0_4_ = 0;
      local_548._4_1_ = '\0';
      local_548._5_1_ = '\0';
      local_548._6_1_ = '\0';
      local_548._7_1_ = '\0';
      local_148.Rotation.XY.m128d_f64[0] = *(double *)(lVar24 + 0x20);
      local_148.Rotation.XY.m128d_f64[1] = *(double *)(lVar24 + 0x28);
      iVar10 = (this->ValidBoneEntries).ArrayNum;
      local_148.Rotation.ZW.m128d_f64[0] = *(double *)(lVar24 + 0x30);
      local_148.Rotation.ZW.m128d_f64[1] = *(double *)(lVar24 + 0x38);
      local_148.Translation.XY.m128d_f64[0] = *(double *)(lVar24 + 0x40);
      local_148.Translation.XY.m128d_f64[1] = *(double *)(lVar24 + 0x48);
      pFVar2 = (FBoneReference *)((longlong)pFVar23 + (longlong)iVar10 * 0x24);
      local_148.Translation.ZW.m128d_f64[0] = *(double *)(lVar24 + 0x50);
      local_148.Translation.ZW.m128d_f64[1] = *(double *)(lVar24 + 0x58);
      local_148.Scale3D.XY.m128d_f64[0] = *(double *)(lVar24 + 0x60);
      local_148.Scale3D.XY.m128d_f64[1] = *(double *)(lVar24 + 0x68);
      local_148.Scale3D.ZW.m128d_f64[0] = *(double *)(lVar24 + 0x70);
      local_148.Scale3D.ZW.m128d_f64[1] = *(double *)(lVar24 + 0x78);
      uVar51 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar78 = __real_3727c5ac;
      fVar73 = __real_3f800000;
      while( true ) {
        if ((this->ValidBoneEntries).ArrayNum != iVar10) {
          local_557 = 0;
          `TCheckedPointerIterator<FBlendBoneByChannelEntry,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_557);
        }
        if (pFVar23 == pFVar2) break;
        FBoneReference::GetCompactPoseIndex(pFVar23,(FBoneContainer *)&local_540);
        FBoneReference::GetCompactPoseIndex(pFVar23 + 1,(FBoneContainer *)&local_554);
        pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            ((FCSPose<FCompactPose> *)local_4a8,local_540);
        local_218.Rotation.XY.m128d_f64[0] = (pTVar22->Rotation).XY.m128d_f64[0];
        local_218.Rotation.XY.m128d_f64[1] = (pTVar22->Rotation).XY.m128d_f64[1];
        local_218.Rotation.ZW.m128d_f64[0] = (pTVar22->Rotation).ZW.m128d_f64[0];
        local_218.Rotation.ZW.m128d_f64[1] = (pTVar22->Rotation).ZW.m128d_f64[1];
        local_218.Translation.XY.m128d_f64[0] = (pTVar22->Translation).XY.m128d_f64[0];
        local_218.Translation.XY.m128d_f64[1] = (pTVar22->Translation).XY.m128d_f64[1];
        local_218.Translation.ZW.m128d_f64[0] = (pTVar22->Translation).ZW.m128d_f64[0];
        local_218.Translation.ZW.m128d_f64[1] = (pTVar22->Translation).ZW.m128d_f64[1];
        local_218.Scale3D.XY.m128d_f64[0] = (pTVar22->Scale3D).XY.m128d_f64[0];
        local_218.Scale3D.XY.m128d_f64[1] = (pTVar22->Scale3D).XY.m128d_f64[1];
        local_218.Scale3D.ZW.m128d_f64[0] = (pTVar22->Scale3D).ZW.m128d_f64[0];
        local_218.Scale3D.ZW.m128d_f64[1] = (pTVar22->Scale3D).ZW.m128d_f64[1];
        pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            ((FCSPose<FCompactPose> *)&local_4f8,local_554);
        local_278.Rotation.XY.m128d_f64 = *&(pTVar22->Rotation).XY.m128d_f64;
        local_278.Rotation.ZW.m128d_f64 = *&(pTVar22->Rotation).ZW.m128d_f64;
        local_278.Translation.XY.m128d_f64[0] = (pTVar22->Translation).XY.m128d_f64[0];
        local_278.Translation.XY.m128d_f64[1] = (pTVar22->Translation).XY.m128d_f64[1];
        local_278.Translation.ZW.m128d_f64[0] = (pTVar22->Translation).ZW.m128d_f64[0];
        local_278.Translation.ZW.m128d_f64[1] = (pTVar22->Translation).ZW.m128d_f64[1];
        local_278.Scale3D.XY.m128d_f64[0] = (pTVar22->Scale3D).XY.m128d_f64[0];
        local_278.Scale3D.XY.m128d_f64[1] = (pTVar22->Scale3D).XY.m128d_f64[1];
        local_278.Scale3D.ZW.m128d_f64[0] = (pTVar22->Scale3D).ZW.m128d_f64[0];
        local_278.Scale3D.ZW.m128d_f64[1] = (pTVar22->Scale3D).ZW.m128d_f64[1];
        FAnimationRuntime::ConvertCSTransformToBoneSpace
                  (&local_148,(FCSPose<FCompactPose> *)local_4a8,&local_218,local_540,
                   (uint)(this->TransformsSpace).Value);
        FAnimationRuntime::ConvertCSTransformToBoneSpace
                  (&local_148,(FCSPose<FCompactPose> *)&local_4f8,&local_278,local_554,
                   (uint)(this->TransformsSpace).Value);
        fVar9 = this->InternalBlendAlpha;
        if (fVar78 < (float)((uint)fVar9 & uVar51)) {
          if (fVar78 < (float)((uint)(fVar9 - fVar73) & uVar51)) {
            dVar64 = (double)fVar9;
            dVar16 = (double)fVar9;
            dVar60 = (double)fVar9;
            dVar62 = (double)fVar9;
            dVar82 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar64;
            dVar77 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar16;
            dVar32 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - dVar60;
            dVar48 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar62;
            local_428 = local_278.Translation.XY.m128d_f64[0] * dVar82 +
                        local_218.Translation.XY.m128d_f64[0] * dVar64;
            dStack_420 = local_278.Translation.XY.m128d_f64[1] * dVar77 +
                         local_218.Translation.XY.m128d_f64[1] * dVar16;
            dVar34 = local_278.Translation.ZW.m128d_f64[0] * dVar32 +
                     local_218.Translation.ZW.m128d_f64[0] * dVar60;
            dVar18 = local_278.Translation.ZW.m128d_f64[1] * dVar48 +
                     local_218.Translation.ZW.m128d_f64[1] * dVar62;
            uVar49 = SUB84(dVar18,0);
            uVar50 = (undefined4)((ulonglong)dVar18 >> 0x20);
            local_508._8_4_ = uVar49;
            local_508._0_8_ = dVar34;
            local_508._12_4_ = uVar50;
            local_408 = local_278.Scale3D.XY.m128d_f64[0] * dVar82 +
                        local_218.Scale3D.XY.m128d_f64[0] * dVar64;
            dStack_400 = local_278.Scale3D.XY.m128d_f64[1] * dVar77 +
                         local_218.Scale3D.XY.m128d_f64[1] * dVar16;
            local_418._8_4_ = uVar49;
            local_418._0_8_ = dVar34;
            local_418._12_4_ = uVar50;
            dVar63 = 0.0 - local_278.Rotation.ZW.m128d_f64[0];
            dVar67 = 0.0 - local_278.Rotation.ZW.m128d_f64[1];
            dVar18 = local_278.Scale3D.ZW.m128d_f64[0] * dVar32 +
                     local_218.Scale3D.ZW.m128d_f64[0] * dVar60;
            dVar68 = local_278.Scale3D.ZW.m128d_f64[1] * dVar48 +
                     local_218.Scale3D.ZW.m128d_f64[1] * dVar62;
            uVar49 = SUB84(dVar68,0);
            uVar50 = (undefined4)((ulonglong)dVar68 >> 0x20);
            local_518._8_4_ = uVar49;
            local_518._0_8_ = dVar18;
            local_518._12_4_ = uVar50;
            local_3f8._8_4_ = uVar49;
            local_3f8._0_8_ = dVar18;
            local_3f8._12_4_ = uVar50;
            dVar68 = local_278.Rotation.XY.m128d_f64[0] * local_218.Rotation.XY.m128d_f64[0] +
                     local_278.Rotation.ZW.m128d_f64[0] * local_218.Rotation.ZW.m128d_f64[0];
            dVar70 = local_278.Rotation.XY.m128d_f64[1] * local_218.Rotation.XY.m128d_f64[1] +
                     local_278.Rotation.ZW.m128d_f64[1] * local_218.Rotation.ZW.m128d_f64[1];
            auVar44._8_4_ = SUB84(dVar70,0);
            auVar44._0_8_ = dVar68;
            auVar44._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
            lVar24 = -(ulonglong)(0.0 <= auVar44._8_8_ + dVar68);
            lVar25 = -(ulonglong)(0.0 <= dVar68 + dVar70);
            uVar51 = (uint)lVar24;
            uVar53 = (uint)((ulonglong)lVar24 >> 0x20);
            uVar55 = (uint)lVar25;
            uVar57 = (uint)((ulonglong)lVar25 >> 0x20);
            dVar68 = 0.0 - local_278.Rotation.XY.m128d_f64[0];
            dVar70 = 0.0 - local_278.Rotation.XY.m128d_f64[1];
            auVar58._0_4_ = local_278.Rotation.XY.m128d_f64[0]._0_4_ & uVar51;
            auVar58._4_4_ = local_278.Rotation.XY.m128d_f64[0]._4_4_ & uVar53;
            auVar58._8_4_ = local_278.Rotation.XY.m128d_f64[1]._0_4_ & uVar55;
            auVar58._12_4_ = local_278.Rotation.XY.m128d_f64[1]._4_4_ & uVar57;
            auVar66._0_4_ = local_278.Rotation.ZW.m128d_f64[0]._0_4_ & uVar51;
            auVar66._4_4_ = local_278.Rotation.ZW.m128d_f64[0]._4_4_ & uVar53;
            auVar66._8_4_ = local_278.Rotation.ZW.m128d_f64[1]._0_4_ & uVar55;
            auVar66._12_4_ = local_278.Rotation.ZW.m128d_f64[1]._4_4_ & uVar57;
            auVar75._0_4_ = ~uVar51 & SUB84(dVar68,0);
            auVar75._4_4_ = ~uVar53 & (uint)((ulonglong)dVar68 >> 0x20);
            auVar75._8_4_ = ~uVar55 & SUB84(dVar70,0);
            auVar75._12_4_ = ~uVar57 & (uint)((ulonglong)dVar70 >> 0x20);
            auVar59._0_4_ = ~uVar51 & SUB84(dVar63,0);
            auVar59._4_4_ = ~uVar53 & (uint)((ulonglong)dVar63 >> 0x20);
            auVar59._8_4_ = ~uVar55 & SUB84(dVar67,0);
            auVar59._12_4_ = ~uVar57 & (uint)((ulonglong)dVar67 >> 0x20);
            dVar32 = SUB168(auVar59 | auVar66,0) * dVar32 +
                     local_218.Rotation.ZW.m128d_f64[0] * dVar60;
            dVar48 = SUB168(auVar59 | auVar66,8) * dVar48 +
                     local_218.Rotation.ZW.m128d_f64[1] * dVar62;
            dVar82 = SUB168(auVar75 | auVar58,0) * dVar82 +
                     local_218.Rotation.XY.m128d_f64[0] * dVar64;
            dVar77 = SUB168(auVar75 | auVar58,8) * dVar77 +
                     local_218.Rotation.XY.m128d_f64[1] * dVar16;
            auVar45._8_4_ = SUB84(dVar77,0);
            auVar45._0_8_ = dVar82;
            auVar45._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
            dVar68 = dVar32 * dVar32 + dVar82 * dVar82;
            dVar70 = dVar48 * dVar48 + auVar45._8_8_ * dVar77;
            auVar46._8_4_ = SUB84(dVar70,0);
            auVar46._0_8_ = dVar68;
            auVar46._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
            auVar47._0_8_ = auVar46._8_8_ + dVar68;
            auVar47._8_8_ = dVar68 + dVar70;
            uVar27 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                      auVar47._0_8_);
            uVar30 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                      auVar47._8_8_);
            uVar28 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                      auVar47._0_8_);
            uVar31 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                      auVar47._8_8_);
            auVar43 = sqrtpd(auVar47,auVar47);
            auVar79 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar43)
            ;
            auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar43)
            ;
            auVar83._0_8_ = uVar27 & (ulonglong)(auVar43._0_8_ * dVar82);
            uVar19 = uVar30 & (ulonglong)(auVar43._8_8_ * dVar77);
            auVar83._8_4_ = (undefined4)uVar19;
            auVar83._12_4_ = (undefined4)(uVar19 >> 0x20);
            auVar61._0_8_ = uVar28 & (ulonglong)(auVar79._0_8_ * dVar32);
            uVar19 = uVar31 & (ulonglong)(auVar79._8_8_ * dVar48);
            auVar61._8_4_ = (undefined4)uVar19;
            auVar61._12_4_ = (undefined4)(uVar19 >> 0x20);
            auVar43._4_4_ =
                 ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
            auVar43._0_4_ = ~(uint)uVar27 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
            auVar43._8_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
            auVar43._12_4_ =
                 ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
            auStack_44c._4_16_ = auVar83 | auVar43;
            auVar79._4_4_ =
                 ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
            auVar79._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
            auVar79._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
            auVar79._12_4_ =
                 ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
            local_438 = (double  [2])(auVar61 | auVar79);
            uVar51 = __xmm_7fffffff7fffffff7fffffff7fffffff;
            fVar78 = __real_3727c5ac;
            fVar73 = __real_3f800000;
          }
          else {
            auStack_44c._12_8_ = local_218.Rotation.XY.m128d_f64[1];
            auStack_44c._4_8_ = local_218.Rotation.XY.m128d_f64[0];
            local_438[1] = local_218.Rotation.ZW.m128d_f64[1];
            local_438[0] = local_218.Rotation.ZW.m128d_f64[0];
            local_428 = local_218.Translation.XY.m128d_f64[0];
            dStack_420 = local_218.Translation.XY.m128d_f64[1];
            local_418._8_8_ = local_218.Translation.ZW.m128d_f64[1];
            local_418._0_8_ = local_218.Translation.ZW.m128d_f64[0];
            local_408 = local_218.Scale3D.XY.m128d_f64[0];
            dStack_400 = local_218.Scale3D.XY.m128d_f64[1];
            local_3f8._8_4_ = local_218.Scale3D.ZW.m128d_f64[1]._0_4_;
            local_3f8._0_8_ = local_218.Scale3D.ZW.m128d_f64[0];
            local_3f8._12_4_ = local_218.Scale3D.ZW.m128d_f64[1]._4_4_;
            dVar34 = local_218.Translation.ZW.m128d_f64[0];
            dVar18 = local_218.Scale3D.ZW.m128d_f64[0];
          }
        }
        else {
          local_428 = local_278.Translation.XY.m128d_f64[0];
          dStack_420 = local_278.Translation.XY.m128d_f64[1];
          local_418._8_8_ = local_278.Translation.ZW.m128d_f64[1];
          local_418._0_8_ = local_278.Translation.ZW.m128d_f64[0];
          local_408 = local_278.Scale3D.XY.m128d_f64[0];
          dStack_400 = local_278.Scale3D.XY.m128d_f64[1];
          local_3f8._8_4_ = local_278.Scale3D.ZW.m128d_f64[1]._0_4_;
          local_3f8._0_8_ = local_278.Scale3D.ZW.m128d_f64[0];
          local_3f8._12_4_ = local_278.Scale3D.ZW.m128d_f64[1]._4_4_;
          local_438 = local_278.Rotation.ZW.m128d_f64;
          auStack_44c._4_16_ = (undefined1  [16])local_278.Rotation.XY.m128d_f64;
          dVar34 = local_278.Translation.ZW.m128d_f64[0];
          dVar18 = local_278.Scale3D.ZW.m128d_f64[0];
        }
        if ((char)pFVar23[2].BoneName.ComparisonIndex.Value != '\0') {
          local_278.Translation.ZW.m128d_f64[1] = 0.0;
          local_2a8 = local_428;
          dStack_2a0 = dStack_420;
          local_298 = dVar34;
          local_278.Translation.XY.m128d_f64[0] = local_428;
          local_278.Translation.XY.m128d_f64[1] = dStack_420;
          local_278.Translation.ZW.m128d_f64[0] = dVar34;
        }
        if (*(char *)((longlong)&pFVar23[2].BoneName.ComparisonIndex.Value + 1) != '\0') {
          local_278.Rotation.XY.m128d_f64 = (double  [2])auStack_44c._4_16_;
          local_278.Rotation.ZW.m128d_f64 = local_438;
        }
        if (*(char *)((longlong)&pFVar23[2].BoneName.ComparisonIndex.Value + 2) != '\0') {
          local_278.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_290 = local_408;
          dStack_288 = dStack_400;
          local_280 = dVar18;
          local_278.Scale3D.XY.m128d_f64[0] = local_408;
          local_278.Scale3D.XY.m128d_f64[1] = dStack_400;
          local_278.Scale3D.ZW.m128d_f64[0] = dVar18;
        }
        FAnimationRuntime::ConvertBoneSpaceTransformToCS
                  (&local_148,(FCSPose<FCompactPose> *)&local_4f8,&local_278,local_554,
                   (uint)(this->TransformsSpace).Value);
        local_1b8.Transform.Rotation.XY.m128d_f64[0] = local_278.Rotation.XY.m128d_f64[0];
        local_1b8.Transform.Rotation.XY.m128d_f64[1] = local_278.Rotation.XY.m128d_f64[1];
        local_1b8.Transform.Rotation.ZW.m128d_f64[0] = local_278.Rotation.ZW.m128d_f64[0];
        local_1b8.Transform.Rotation.ZW.m128d_f64[1] = local_278.Rotation.ZW.m128d_f64[1];
        local_1b8.BoneIndex = local_554;
        local_1b8.Transform.Translation.XY.m128d_f64[0] = local_278.Translation.XY.m128d_f64[0];
        local_1b8.Transform.Translation.XY.m128d_f64[1] = local_278.Translation.XY.m128d_f64[1];
        local_1b8.Transform.Translation.ZW.m128d_f64[0] = local_278.Translation.ZW.m128d_f64[0];
        local_1b8.Transform.Translation.ZW.m128d_f64[1] = local_278.Translation.ZW.m128d_f64[1];
        local_1b8.Transform.Scale3D.XY.m128d_f64[0] = local_278.Scale3D.XY.m128d_f64[0];
        local_1b8.Transform.Scale3D.XY.m128d_f64[1] = local_278.Scale3D.XY.m128d_f64[1];
        local_1b8.Transform.Scale3D.ZW.m128d_f64[0] = local_278.Scale3D.ZW.m128d_f64[0];
        local_1b8.Transform.Scale3D.ZW.m128d_f64[1] = local_278.Scale3D.ZW.m128d_f64[1];
        if (((local_550.Data <= &local_1b8) &&
            (&local_1b8 < (FBoneTransform *)(local_550.Data + (longlong)local_548._4_4_ * 0x70))) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar21 = (int)local_548;
        if ((int)local_548 == local_548._4_4_) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1070,&local_550,(int *)((longlong)&local_548 + 4));
        }
        local_548._0_4_ = iVar21 + 1;
        lVar24 = (longlong)iVar21 * 0x70;
        pFVar23 = (FBoneReference *)&pFVar23[2].BoneName.Number;
        *(ulonglong *)(local_550.Data + lVar24) = CONCAT44(local_1b8._4_4_,local_1b8.BoneIndex);
        *(longlong *)(local_550.Data + lVar24 + 8) = local_1b8._padding_;
        *(double *)(local_550.Data + lVar24 + 0x10) = local_1b8.Transform.Rotation.XY.m128d_f64[0];
        *(double *)(local_550.Data + lVar24 + 0x10 + 8) =
             local_1b8.Transform.Rotation.XY.m128d_f64[1];
        *(double *)(local_550.Data + lVar24 + 0x20) = local_1b8.Transform.Rotation.ZW.m128d_f64[0];
        *(double *)(local_550.Data + lVar24 + 0x20 + 8) =
             local_1b8.Transform.Rotation.ZW.m128d_f64[1];
        *(double *)(local_550.Data + lVar24 + 0x30) =
             local_1b8.Transform.Translation.XY.m128d_f64[0];
        *(double *)(local_550.Data + lVar24 + 0x30 + 8) =
             local_1b8.Transform.Translation.XY.m128d_f64[1];
        *(double *)(local_550.Data + lVar24 + 0x40) =
             local_1b8.Transform.Translation.ZW.m128d_f64[0];
        *(double *)(local_550.Data + lVar24 + 0x40 + 8) =
             local_1b8.Transform.Translation.ZW.m128d_f64[1];
        *(double *)(local_550.Data + lVar24 + 0x50) = local_1b8.Transform.Scale3D.XY.m128d_f64[0];
        *(double *)(local_550.Data + lVar24 + 0x50 + 8) =
             local_1b8.Transform.Scale3D.XY.m128d_f64[1];
        *(double *)(local_550.Data + lVar24 + 0x60) = local_1b8.Transform.Scale3D.ZW.m128d_f64[0];
        *(double *)(local_550.Data + lVar24 + 0x60 + 8) =
             local_1b8.Transform.Scale3D.ZW.m128d_f64[1];
      }
      if (0 < (int)local_548) {
        AlgoImpl::
        IntroSortInternal<FBoneTransform,int,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>
                  ((FBoneTransform *)local_550.Data,(int)local_548,local_556[0],
                   (FCompareBoneTransformIndex *)local_556);
        iStack_450 = (int)local_548;
        local_458 = (FBoneTransform *)local_550.Data;
        if (((int)local_548 < 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_2e8._12_4_ = auStack_44c._0_4_;
        local_2e8.ArrayNum = iStack_450;
        local_2e8.DataPtr = local_458;
        FCSPose<FCompactPose>::SafeSetCSBoneTransforms
                  ((FCSPose<FCompactPose> *)&local_4f8,&local_2e8);
        FCSPose<FCompactPose>::ConvertComponentPosesToLocalPoses
                  ((FCSPose<FCompactPose> *)&local_4f8,pFVar1);
      }
      if ((FBoneTransform *)local_550.Data != (FBoneTransform *)0x0) {
        FMemory::Free(local_550.Data);
      }
    }
    UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
    ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(&TStack_390);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 1463da1b0

void __thiscall
FAnimNode_BlendBoneByChannel::GatherDebugData
          (FAnimNode_BlendBoneByChannel *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  FNodeDebugData *pFVar2;
  int iVar3;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendBoneByChannel::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendBoneByChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendBoneByChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel,(UObject *)pUVar1,
                         L"AnimNode_BlendBoneByChannel");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendBoneByChannel.OuterSingleton
                      )->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_48,L"(Alpha: %.1f%%)");
  iVar3 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)local_38[0].Data._8_8_;
  local_48.Data.ArrayNum = iVar3;
  if (iVar3 == 0) {
    local_48.Data._8_8_ = local_38[0].Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)&local_48,iVar3,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar3 * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar2 = FNodeDebugData::BranchFlow(param_1,__real_3f800000,&local_48);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->A,pFVar2);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar2 = FNodeDebugData::BranchFlow(param_1,this->InternalBlendAlpha,&local_48);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->B,pFVar2);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

