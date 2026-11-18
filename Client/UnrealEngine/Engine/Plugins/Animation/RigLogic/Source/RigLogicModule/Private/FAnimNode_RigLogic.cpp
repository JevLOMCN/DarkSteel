// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 23

// StaticStruct @ 14a65af10

UScriptStruct * __cdecl FAnimNode_RigLogic::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RigLogic.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UScriptStruct_FAnimNode_RigLogic.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigLogic,(UObject *)pUVar1,
                         L"AnimNode_RigLogic");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_RigLogic.OuterSingleton;
}

// FAnimNode_RigLogic @ 14a660050

FAnimNode_RigLogic * __thiscall FAnimNode_RigLogic::FAnimNode_RigLogic(FAnimNode_RigLogic *this)

{
  *(undefined4 *)&(this->AnimSequence).field_0x8 = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_RigLogic__6B_;
  *(undefined8 *)&this->AnimSequence = 0;
  (this->AnimSequence).field_0xc = 0;
  this->CacheAnimCurveNames = false;
  this->LODThreshold = -1;
  (this->LocalRigRuntimeContext).Object = (FSharedRigRuntimeContext *)0x0;
  (this->LocalRigRuntimeContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LocalDNAIndexMapping).Object = (FDNAIndexMapping *)0x0;
  (this->LocalDNAIndexMapping).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->RigInstance = (FRigInstance *)0x0;
  (this->LocalJointMappingsPerLOD).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalJointMappingsPerLOD).ArrayNum = 0;
  (this->LocalJointMappingsPerLOD).ArrayMax = 0;
  (this->PoseCurvesToRigLogicControlsMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseCurvesToRigLogicControlsMap).ArrayNum = 0;
  (this->PoseCurvesToRigLogicControlsMap).ArrayMax = 0;
  return this;
}

// ~FAnimNode_RigLogic @ 14a660fb0

void __thiscall FAnimNode_RigLogic::~FAnimNode_RigLogic(FAnimNode_RigLogic *this)

{
  FRigInstance *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->RigInstance;
  this->_padding_ = (longlong)&___7FAnimNode_RigLogic__6B_;
  if (pFVar1 != (FRigInstance *)0x0) {
    rl4::RigInstance::destroy((pFVar1->RigInstance).Ptr);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->MemoryResource).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar1,0x18);
    this->RigInstance = (FRigInstance *)0x0;
  }
  DestructItems<FAnimNode_RigLogic::FCurveElementControlAttributeMapping,int>
            ((FCurveElementControlAttributeMapping *)
             (this->PoseCurvesToRigLogicControlsMap).AllocatorInstance.Data,
             (this->PoseCurvesToRigLogicControlsMap).ArrayNum);
  pFVar2 = (this->PoseCurvesToRigLogicControlsMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FAnimNode_RigLogic::FCachedJointMapping,int>
            ((FCachedJointMapping *)(this->LocalJointMappingsPerLOD).AllocatorInstance.Data,
             (this->LocalJointMappingsPerLOD).ArrayNum);
  pFVar2 = (this->LocalJointMappingsPerLOD).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LocalDNAIndexMapping).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LocalRigRuntimeContext).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// CacheBones_AnyThread @ 14a6623f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_RigLogic::CacheBones_AnyThread
          (FAnimNode_RigLogic *this,FAnimationCacheBonesContext *param_1)

{
  int *piVar1;
  TArray<FAnimNode_RigLogic::FCurveElementControlAttributeMapping,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int *piVar3;
  FName FVar4;
  longlong lVar5;
  USkeletalMeshComponent *this_00;
  USkeleton *pUVar6;
  RigInstance *pRVar7;
  FCurveElementControlAttributeMapping *pFVar8;
  FBoneContainer *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  ushort uVar16;
  int iVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_RigLogic::CacheBones_AnyThread(FAnimationCacheBonesContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_CacheBones_AnyThread>
  FVar20;
  USkeletalMesh *pUVar21;
  UDNAAsset *this_01;
  UClass *pUVar22;
  FRigInstance *this_02;
  FSharedRigRuntimeContext *pFVar23;
  FRigInstance *pFVar24;
  FRigLogic *pFVar25;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  uint uVar26;
  ulonglong uVar27;
  bool bVar28;
  FLLMScope local_res18 [2];
  FColor_u_0 local_res20 [2];
  FName local_e8;
  FName local_d8 [2];
  TSharedPtr<FSharedRigRuntimeContext,1> local_c8;
  UClass *local_b8;
  FMemScope local_b0;
  LARGE_INTEGER local_a8 [2];
  TSharedPtr<FDNAIndexMapping,1> local_98;
  FStatMessage local_88;
  FName local_78;
  FName local_70;
  FSharedRigRuntimeContext *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FDNAIndexMapping *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigLogic::CacheBones_AnyThread");
  uVar27 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar27 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_CacheBones_AnyThread ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_RigLogic::CacheBones_AnyThread(FAnimationCacheBonesContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_CacheBones_AnyThread>
         )0x0) {
      pFVar19 = ::FName::FName(&local_78,"STAT_AnimNode_RigLogic_CacheBones_AnyThread");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimNode_RigLogic_CacheBones_AnyThread,
                 *pFVar19,L"STAT_AnimNode_RigLogic_CacheBones_AnyThread","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar20 = StatPtr_STAT_AnimNode_RigLogic_CacheBones_AnyThread;
  if (StatPtr_STAT_AnimNode_RigLogic_CacheBones_AnyThread ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_RigLogic::CacheBones_AnyThread(FAnimationCacheBonesContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_CacheBones_AnyThread>
       )0x0) {
    pFVar19 = ::FName::FName(&local_70,"STAT_AnimNode_RigLogic_CacheBones_AnyThread");
    FVar20 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_RigLogic::CacheBones_AnyThread(FAnimationCacheBonesContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_CacheBones_AnyThread>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AnimNode_RigLogic_CacheBones_AnyThread,*pFVar19,
                          L"STAT_AnimNode_RigLogic_CacheBones_AnyThread","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  FVar4 = *(FName *)FVar20;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar13 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8[0].ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_d8[0].Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_d8,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0x94);
        bVar13 = true;
        bVar12 = true;
      }
    }
    bVar14 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar14 = true;
      local_e8 = FVar4;
    }
  }
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId151,"FAnimNode_RigLogic::CacheBones_AnyThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,0x97);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId151);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar27 * 8) + 0x9d4c) < ::_TSS1)
     && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&LLMScope_Name153,L"Animation/RigLogic");
    _Init_thread_footer(&::_TSS1);
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name153,false,None,Default,true);
  FMemScope::FMemScope(&local_b0,&LLMScope_Name153,true);
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->AnimSequence,param_1);
  lVar5 = *(longlong *)param_1;
  if ((*(longlong *)(lVar5 + 0x158) == 0) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2821110184175206020>,true,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                          ,0x17c,"SkeletalMeshComponent"), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  this_00 = *(USkeletalMeshComponent **)(lVar5 + 0x158);
  if ((this_00 == (USkeletalMeshComponent *)0x0) ||
     (pUVar21 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00),
     pUVar21 == (USkeletalMesh *)0x0)) goto LAB_14a662b07;
  lVar5 = *(longlong *)param_1;
  if ((*(longlong *)(lVar5 + 0x150) == 0) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2821110184175206029>,true,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                          ,0x173,"Skeleton"), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pUVar6 = *(USkeleton **)(lVar5 + 0x150);
  if (pUVar6 == (USkeleton *)0x0) goto LAB_14a662b07;
  pcVar11 = *(code **)(pUVar21->_padding_ + 0x18);
  local_b8 = UDNAAsset::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b8);
  }
  this_01 = (UDNAAsset *)(*pcVar11)(&pUVar21->_padding_,&local_b8);
  if (this_01 == (UDNAAsset *)0x0) goto LAB_14a662b07;
  pUVar22 = UDNAAsset::StaticClass();
  iVar18 = (int)pUVar22->_padding_;
  if ((*(int *)(this_01->_padding_ + 0x38) < iVar18) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar18 * 8)
      != &pUVar22->_padding_)) goto LAB_14a662b07;
  UDNAAsset::GetRigRuntimeContext(this_01,&local_c8);
  if (local_c8.Object != (FSharedRigRuntimeContext *)0x0) {
    if ((this->LocalRigRuntimeContext).Object != local_c8.Object) {
      if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68 = (this->LocalRigRuntimeContext).Object;
      pTStack_60 = (this->LocalRigRuntimeContext).SharedReferenceCount.ReferenceController;
      (this->LocalRigRuntimeContext).Object = local_c8.Object;
      (this->LocalRigRuntimeContext).SharedReferenceCount.ReferenceController =
           local_c8.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_60);
      pFVar24 = this->RigInstance;
      if (pFVar24 != (FRigInstance *)0x0) {
        rl4::RigInstance::destroy((pFVar24->RigInstance).Ptr);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar24->MemoryResource).SharedReferenceCount.ReferenceController);
        ::operator_delete(pFVar24,0x18);
      }
      this_02 = ::operator_new(0x18);
      pFVar24 = (FRigInstance *)0x0;
      if (this_02 != (FRigInstance *)0x0) {
        pFVar23 = TSharedPtr<FSharedRigRuntimeContext,1>::operator->(&this->LocalRigRuntimeContext);
        pFVar24 = FRigInstance::FRigInstance(this_02,(pFVar23->RigLogic).Object);
      }
      this->RigInstance = pFVar24;
    }
    pRVar7 = (this->RigInstance->RigInstance).Ptr;
    (**(code **)((longlong)*pRVar7 + 0xd8))(pRVar7,*(undefined2 *)(*(longlong *)param_1 + 0x670));
    UDNAAsset::GetDNAIndexMapping(this_01,&local_98,pUVar6,pUVar21);
    if ((this->LocalDNAIndexMapping).Object != local_98.Object) {
      pFVar23 = TSharedPtr<FSharedRigRuntimeContext,1>::operator->(&this->LocalRigRuntimeContext);
      pFVar25 = TSharedPtr<FRigLogic,1>::operator->(&pFVar23->RigLogic);
      uVar16 = (**(code **)((longlong)*(pFVar25->RigLogic).Ptr + 0x18))();
      if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58 = (this->LocalDNAIndexMapping).Object;
      pTStack_50 = (this->LocalDNAIndexMapping).SharedReferenceCount.ReferenceController;
      (this->LocalDNAIndexMapping).Object = local_98.Object;
      (this->LocalDNAIndexMapping).SharedReferenceCount.ReferenceController =
           local_98.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_50);
      piVar3 = &(this->LocalJointMappingsPerLOD).ArrayNum;
      DestructItems<FAnimNode_RigLogic::FCachedJointMapping,int>
                ((FCachedJointMapping *)(this->LocalJointMappingsPerLOD).AllocatorInstance.Data,
                 (this->LocalJointMappingsPerLOD).ArrayNum);
      piVar1 = &(this->LocalJointMappingsPerLOD).ArrayMax;
      *piVar3 = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&(this->LocalJointMappingsPerLOD).AllocatorInstance,0,piVar1);
      }
      iVar18 = *piVar3;
      if (iVar18 < (int)(uint)uVar16) {
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x38,8,(uint)uVar16 - iVar18,
                            &(this->LocalJointMappingsPerLOD).AllocatorInstance,piVar3,piVar1);
        DefaultConstructItems<FAnimNode_RigLogic::FCachedJointMapping,int>
                  ((this->LocalJointMappingsPerLOD).AllocatorInstance.Data + (longlong)iVar17 * 0x38
                   ,(uint)uVar16 - iVar18);
      }
      else if ((int)(uint)uVar16 < iVar18) {
        iVar18 = iVar18 - (uint)uVar16;
        if (iVar18 < 0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             );
          if (bVar15) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        else if (iVar18 == 0) goto LAB_14a6628da;
        TArray<FAnimNode_RigLogic::FCachedJointMapping,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->LocalJointMappingsPerLOD,(uint)uVar16,iVar18);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,&(this->LocalJointMappingsPerLOD).AllocatorInstance,
                   (this->LocalJointMappingsPerLOD).ArrayNum,
                   &(this->LocalJointMappingsPerLOD).ArrayMax);
      }
LAB_14a6628da:
      uVar26 = (uint)uVar16;
      pTVar2 = &this->PoseCurvesToRigLogicControlsMap;
      piVar3 = &(this->PoseCurvesToRigLogicControlsMap).ArrayMax;
      piVar1 = &(this->PoseCurvesToRigLogicControlsMap).ArrayNum;
      pFVar8 = (FCurveElementControlAttributeMapping *)(pTVar2->AllocatorInstance).Data;
      if (*piVar3 < (int)uVar26) {
        DestructItems<FAnimNode_RigLogic::FCurveElementControlAttributeMapping,int>(pFVar8,*piVar1);
        *piVar1 = 0;
        if (*piVar3 != uVar26) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,uVar26,&pTVar2->AllocatorInstance,0,piVar3);
        }
      }
      else {
        DestructItems<FAnimNode_RigLogic::FCurveElementControlAttributeMapping,int>(pFVar8,*piVar1);
        *piVar1 = 0;
      }
      iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x20,8,(uint)uVar16,&pTVar2->AllocatorInstance,piVar1,piVar3);
      DefaultConstructItems<FAnimNode_RigLogic::FCurveElementControlAttributeMapping,int>
                ((pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 0x20,(uint)uVar16);
    }
    lVar5 = *(longlong *)param_1;
    if ((*(longlong *)(lVar5 + 0x660) == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar9 = *(FBoneContainer **)(lVar5 + 0x660);
    bVar15 = FWeakObjectPtr::IsValid(&(pFVar9->Asset).WeakPtr);
    if (((bVar15) && (pFVar9->RefSkeleton != (FReferenceSkeleton *)0x0)) &&
       (0 < (pFVar9->BoneIndicesArray).ArrayNum)) {
      uVar16 = (**(code **)((longlong)*(this->RigInstance->RigInstance).Ptr + 0xd0))();
      if (((this->LocalJointMappingsPerLOD).ArrayNum <= (int)(uint)uVar16) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar18 = (pFVar9->BoneIndicesArray).ArrayNum;
      pFVar10 = (this->LocalJointMappingsPerLOD).AllocatorInstance.Data;
      if (*(int *)(pFVar10 + (ulonglong)uVar16 * 0x38 + 0x30) != iVar18) {
        pFVar23 = TSharedPtr<FSharedRigRuntimeContext,1>::operator->(&this->LocalRigRuntimeContext);
        pFVar25 = TSharedPtr<FRigLogic,1>::operator->(&pFVar23->RigLogic);
        if ((pFVar25->Configuration).LoadJoints != false) {
          CacheVariableJointAttributes(this,pFVar9);
        }
        if (((pFVar25->Configuration).LoadTwistSwingBehavior != false) ||
           ((pFVar25->Configuration).LoadRBFBehavior != false)) {
          CacheDriverJoints(this,pFVar9);
        }
        *(int *)(pFVar10 + (ulonglong)uVar16 * 0x38 + 0x30) = iVar18;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
LAB_14a662b07:
  FMemScope::~FMemScope(&local_b0);
  FLLMScope::~FLLMScope(local_res18);
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar14) && (local_e8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_03 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_03 == (FThreadStats *)0x0) {
      this_04 = FThreadStatsPool::Get();
      this_03 = FThreadStatsPool::GetFromPool(this_04);
    }
    if (this_03->bWaitForExplicitFlush < this_03->ScopeCount) {
      local_88.NameAndInfo.Index = local_e8.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = local_e8.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_a8);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_a8[0]._0_1_;
      local_88.StatData.Pad[1] = local_a8[0]._1_1_;
      local_88.StatData.Pad[2] = local_a8[0]._2_1_;
      local_88.StatData.Pad[3] = local_a8[0]._3_1_;
      FThreadStats::AddStatMessage(this_03,&local_88);
      piVar3 = &this_03->ScopeCount;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FThreadStats::Flush(this_03,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_03,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// CacheDriverJoints @ 14a662cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_RigLogic::CacheDriverJoints(FAnimNode_RigLogic *this,FBoneContainer *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FName FVar7;
  FScriptContainerElement *pFVar8;
  FDNAIndexMapping *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  bool bVar17;
  ushort uVar18;
  int iVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::CacheDriverJoints(FBoneContainer_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_CacheDriverJoints>
  FVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  int *piVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  bool bVar27;
  undefined1 local_res20 [8];
  FLLMScope local_c8;
  FColor_u_0 local_c4;
  int local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  int local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  FName local_90;
  FScriptContainerElement *local_88;
  FName local_80;
  FName local_78;
  FMemScope local_68;
  FName local_60;
  FName local_58 [3];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigLogic::CacheDriverJoints");
  piVar24 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar24 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_CacheDriverJoints ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::CacheDriverJoints(FBoneContainer_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_CacheDriverJoints>
         )0x0) {
      pFVar20 = ::FName::FName(&local_60,"STAT_AnimNode_RigLogic_CacheDriverJoints");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimNode_RigLogic_CacheDriverJoints,
                 *pFVar20,L"STAT_AnimNode_RigLogic_CacheDriverJoints","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar21 = StatPtr_STAT_AnimNode_RigLogic_CacheDriverJoints;
  if (StatPtr_STAT_AnimNode_RigLogic_CacheDriverJoints ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::CacheDriverJoints(FBoneContainer_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_CacheDriverJoints>
       )0x0) {
    pFVar20 = ::FName::FName(local_58,"STAT_AnimNode_RigLogic_CacheDriverJoints");
    FVar21 = (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::CacheDriverJoints(FBoneContainer_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_CacheDriverJoints>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AnimNode_RigLogic_CacheDriverJoints,*pFVar20,
                          L"STAT_AnimNode_RigLogic_CacheDriverJoints","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar7 = *(FName *)FVar21;
  bVar14 = false;
  bVar13 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  bVar27 = false;
  bVar16 = false;
  if ((FVar7.ComparisonIndex.Value.Value != 0) || (FVar7.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c4._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar14 = false;
      bVar13 = true;
      bVar27 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = FVar7.ComparisonIndex.Value.Value;
        local_90.Number = FVar7.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0x54);
        bVar14 = true;
        bVar13 = true;
        bVar27 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_80 = FVar7;
      FThreadStats::AddMessage(FVar7,CycleScopeStart);
      bVar16 = true;
      goto LAB_14a662e79;
    }
  }
  bVar14 = bVar27;
  bVar13 = bVar16;
  bVar16 = false;
  local_80 = local_78;
LAB_14a662e79:
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId87,"FAnimNode_RigLogic::CacheDriverJoints",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,0x57);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId87);
  }
  if ((*piVar24 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&LLMScope_Name89,L"Animation/RigLogic");
    _Init_thread_footer(&::_TSS1);
  }
  FLLMScope::FLLMScope(&local_c8,LLMScope_Name89,false,None,Default,true);
  FMemScope::FMemScope(&local_68,&LLMScope_Name89,true);
  uVar18 = (**(code **)((longlong)*(this->RigInstance->RigInstance).Ptr + 0xd0))();
  if (((this->LocalJointMappingsPerLOD).ArrayNum <= (int)(uint)uVar18) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar8 = (this->LocalJointMappingsPerLOD).AllocatorInstance.Data;
  lVar22 = (ulonglong)uVar18 * 0x38;
  *(undefined4 *)(pFVar8 + lVar22 + 0x18) = 0;
  pFVar26 = pFVar8 + lVar22 + 0x20;
  if (*(int *)(pFVar8 + lVar22 + 0x1c) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)(pFVar8 + lVar22 + 0x10),0,
               (int *)(pFVar8 + lVar22 + 0x1c));
  }
  iVar2 = *(int *)(pFVar26 + 0xc);
  *(undefined4 *)&pFVar26[8].field_0x0 = 0;
  pFVar15 = pFVar26 + 0xc;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)pFVar26,0,(int *)pFVar15);
  }
  if (((this->LocalDNAIndexMapping).Object == (FDNAIndexMapping *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar3 = (((this->LocalDNAIndexMapping).Object)->DriverJointsToControlAttributesMap).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (*(int *)pFVar15 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,uVar3,(ForAnyElementType *)pFVar26,*(int *)&pFVar26[8].field_0x0,
               (int *)pFVar15);
  }
  if (((this->LocalDNAIndexMapping).Object == (FDNAIndexMapping *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar9 = (this->LocalDNAIndexMapping).Object;
  iVar2 = (pFVar9->DriverJointsToControlAttributesMap).ArrayNum;
  pFVar25 = (pFVar9->DriverJointsToControlAttributesMap).AllocatorInstance.Data;
  local_88 = pFVar25 + (longlong)iVar2 * 0x18;
LAB_14a663070:
  do {
    while( true ) {
      if ((pFVar9->DriverJointsToControlAttributesMap).ArrayNum != iVar2) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FDNAIndexMapping::FMeshPoseBoneControlAttributeMapping,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar25 == local_88) {
        FMemScope::~FMemScope(&local_68);
        FLLMScope::~FLLMScope(&local_c8);
        FVar7 = local_80;
        if (bVar27) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar13) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar14) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar16) {
          FThreadStats::AddMessage(FVar7,CycleScopeEnd);
        }
        FStatsHierarchical::EndMeasurement();
        return;
      }
      pFVar10 = (param_1->BoneIndicesArray).AllocatorInstance.Data;
      pFVar23 = pFVar10;
      if (pFVar10 != pFVar10 + (longlong)(param_1->BoneIndicesArray).ArrayNum * 2) break;
LAB_14a6632b3:
      pFVar25 = pFVar25 + 0x18;
    }
    do {
      if ((uint)*(ushort *)pFVar23 == *(uint *)pFVar25) {
        iVar19 = (int)((longlong)pFVar23 - (longlong)pFVar10 >> 1);
        if (iVar19 == -1) goto LAB_14a6632b3;
        uVar3 = *(uint *)(pFVar25 + 8);
        if ((((uVar3 == 0xffffffff) || (uVar4 = *(uint *)(pFVar25 + 0xc), uVar4 == 0xffffffff)) ||
            (uVar5 = *(uint *)(pFVar25 + 0x10), uVar5 == 0xffffffff)) ||
           (uVar6 = *(uint *)(pFVar25 + 0x14), uVar6 == 0xffffffff)) {
          uStack_a4 = *(uint *)(pFVar25 + 4);
          uStack_9c = *(uint *)(pFVar25 + 0xc);
          local_98 = *(uint *)(pFVar25 + 0x10);
          uStack_94 = *(uint *)(pFVar25 + 0x14);
          local_a8 = iVar19;
          uStack_a0 = uVar3;
          if (((*(int **)(pFVar8 + lVar22 + 0x10) <= &local_a8) &&
              (&local_a8 <
               *(int **)(pFVar8 + lVar22 + 0x10) + (longlong)*(int *)(pFVar8 + lVar22 + 0x1c) * 6))
             && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar17)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar19 = *(int *)(pFVar8 + lVar22 + 0x18);
          if (iVar19 == *(int *)(pFVar8 + lVar22 + 0x1c)) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x418,(ForAnyElementType *)(pFVar8 + lVar22 + 0x10),
                                (int *)(pFVar8 + lVar22 + 0x1c));
          }
          *(int *)(pFVar8 + lVar22 + 0x18) = iVar19 + 1;
          lVar11 = *(longlong *)(pFVar8 + lVar22 + 0x10);
          puVar1 = (undefined8 *)(lVar11 + (longlong)iVar19 * 0x18);
          *puVar1 = CONCAT44(uStack_a4,local_a8);
          puVar1[1] = CONCAT44(uStack_9c,uStack_a0);
          *(ulonglong *)(lVar11 + 0x10 + (longlong)iVar19 * 0x18) = CONCAT44(uStack_94,local_98);
          goto LAB_14a6632b3;
        }
        uStack_bc = *(uint *)(pFVar25 + 4);
        local_c0 = iVar19;
        uStack_b8 = uVar3;
        uStack_b4 = uVar4;
        local_b0 = uVar5;
        uStack_ac = uVar6;
        if (((*(int **)&pFVar26->field_0x0 <= &local_c0) &&
            (&local_c0 < *(int **)&pFVar26->field_0x0 + (longlong)*(int *)pFVar15 * 6)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar19 = *(int *)&pFVar26[8].field_0x0;
        if (iVar19 == *(int *)pFVar15) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x418,(ForAnyElementType *)pFVar26,(int *)pFVar15);
        }
        pFVar25 = pFVar25 + 0x18;
        *(int *)&pFVar26[8].field_0x0 = iVar19 + 1;
        lVar11 = *(longlong *)&pFVar26->field_0x0;
        puVar1 = (undefined8 *)(lVar11 + (longlong)iVar19 * 0x18);
        *puVar1 = CONCAT44(uStack_bc,local_c0);
        puVar1[1] = CONCAT44(uStack_b4,uStack_b8);
        *(ulonglong *)(lVar11 + (longlong)iVar19 * 0x18 + 0x10) = CONCAT44(uStack_ac,local_b0);
        goto LAB_14a663070;
      }
      pFVar23 = pFVar23 + 2;
    } while (pFVar23 != pFVar10 + (longlong)(param_1->BoneIndicesArray).ArrayNum * 2);
    pFVar25 = pFVar25 + 0x18;
  } while( true );
}

// CachePoseCurvesToRigLogicControlsMap @ 14a664500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_RigLogic::CachePoseCurvesToRigLogicControlsMap
          (FAnimNode_RigLogic *this,FPoseContext *param_1,
          TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::CachePoseCurvesToRigLogicControlsMap(FPoseContext_const_&,TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_AnimNode_RigLogic_CachePoseCurvesToRigLogicControlsMap>
  FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar13;
  int *piVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  FLLMScope local_b0 [2];
  uint local_a8;
  uint uStack_a4;
  FColor_u_0 local_a0 [2];
  FName local_98;
  FName local_90;
  FName local_88;
  longlong *local_78;
  longlong *local_70;
  FMemScope local_68;
  LARGE_INTEGER local_60;
  FStatMessage local_58;
  FName local_48;
  FName local_40;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigLogic::CachePoseCurvesToRigLogicControlsMap");
  uVar18 = 0;
  piVar14 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar14 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_CachePoseCurvesToRigLogicControlsMap ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::CachePoseCurvesToRigLogicControlsMap(FPoseContext_const_&,TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_AnimNode_RigLogic_CachePoseCurvesToRigLogicControlsMap>
         )0x0) {
      pFVar11 = ::FName::FName(&local_48,
                               "STAT_AnimNode_RigLogic_CachePoseCurvesToRigLogicControlsMap");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_AnimNode_RigLogic_CachePoseCurvesToRigLogicControlsMap,*pFVar11,
                 L"STAT_AnimNode_RigLogic_CachePoseCurvesToRigLogicControlsMap","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_AnimNode_RigLogic_CachePoseCurvesToRigLogicControlsMap;
  if (StatPtr_STAT_AnimNode_RigLogic_CachePoseCurvesToRigLogicControlsMap ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::CachePoseCurvesToRigLogicControlsMap(FPoseContext_const_&,TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_AnimNode_RigLogic_CachePoseCurvesToRigLogicControlsMap>
       )0x0) {
    pFVar11 = ::FName::FName(&local_40,"STAT_AnimNode_RigLogic_CachePoseCurvesToRigLogicControlsMap"
                            );
    FVar12 = (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::CachePoseCurvesToRigLogicControlsMap(FPoseContext_const_&,TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_AnimNode_RigLogic_CachePoseCurvesToRigLogicControlsMap>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AnimNode_RigLogic_CachePoseCurvesToRigLogicControlsMap,
                          *pFVar11,L"STAT_AnimNode_RigLogic_CachePoseCurvesToRigLogicControlsMap",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar12;
  bVar4 = false;
  bVar5 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  bVar7 = false;
  bVar20 = false;
  FVar13 = FVar1.ComparisonIndex.Value;
  uVar10 = FVar1.Number;
  if ((FVar13.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a0[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar5 = true;
      bVar7 = false;
      bVar20 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar13.Value;
        local_98.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0x79);
        bVar4 = true;
        bVar5 = true;
        bVar7 = true;
        bVar20 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_a8 = FVar13.Value;
      uStack_a4 = uVar10;
      local_90 = FVar1;
      FThreadStats::AddMessage(FVar1,CycleScopeStart);
      bVar7 = true;
      goto LAB_14a664691;
    }
  }
  bVar5 = bVar20;
  bVar4 = bVar7;
  bVar7 = false;
  local_90 = local_88;
LAB_14a664691:
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId124,
               "FAnimNode_RigLogic::CachePoseCurvesToRigLogicControlsMap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,0x7c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId124);
  }
  if ((*piVar14 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&LLMScope_Name126,L"Animation/RigLogic");
    _Init_thread_footer(&::_TSS1);
  }
  FLLMScope::FLLMScope(local_b0,LLMScope_Name126,false,None,Default,true);
  FMemScope::FMemScope(&local_68,&LLMScope_Name126,true);
  local_b4 = 0xffffffff;
  uVar10 = *(uint *)&(param_1->Curve).field_0x8;
  uVar19 = (ulonglong)uVar10;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar19);
  }
  piVar14 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (*piVar14 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10,&param_3->AllocatorInstance,0,piVar14);
  }
  if (0 < (int)uVar10) {
    do {
      pFVar2 = (param_3->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_b4) &&
          ((FScriptContainerElement *)&local_b4 < pFVar2 + (longlong)*piVar14 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = param_3->ArrayNum;
      if (iVar9 == *piVar14) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_3->AllocatorInstance,piVar14);
      }
      param_3->ArrayNum = iVar9 + 1;
      *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_b4;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  local_a8 = *(uint *)&(param_1->Curve).field_0x8;
  uVar19 = (ulonglong)(int)local_a8;
  plVar17 = *(longlong **)&param_1->Curve;
  local_70 = plVar17 + uVar19 * 2;
  do {
    plVar16 = local_70;
    if (*(int *)&(param_1->Curve).field_0x8 != (int)uVar19) {
      local_b6 = 0;
      `TCheckedPointerIterator<UE::Anim::FCurveElement,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_b6);
    }
    if (plVar17 == plVar16) {
      FMemScope::~FMemScope(&local_68);
      FLLMScope::~FLLMScope(local_b0);
      FVar1 = local_90;
      if (bVar20) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar5) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((bVar7) && (FVar1 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_58.NameAndInfo.Index = FVar1.ComparisonIndex.Value;
          local_58.NameAndInfo.Number = FVar1.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_60);
          local_58.StatData.Pad[4] = '\0';
          local_58.StatData.Pad[5] = '\0';
          local_58.StatData.Pad[6] = '\0';
          local_58.StatData.Pad[7] = '\0';
          local_58.StatData.Pad[0] = local_60.s.LowPart._0_1_;
          local_58.StatData.Pad[1] = local_60.s.LowPart._1_1_;
          local_58.StatData.Pad[2] = local_60.s.LowPart._2_1_;
          local_58.StatData.Pad[3] = local_60.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_58);
          piVar14 = &this_00->ScopeCount;
          *piVar14 = *piVar14 + -1;
          if (*piVar14 == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
      FStatsHierarchical::EndMeasurement();
      return;
    }
    iVar9 = (int)param_2->_padding_;
    plVar15 = (longlong *)param_2->_padding_;
    plVar16 = (longlong *)((longlong)plVar15 + (longlong)iVar9 * 0x14);
    local_78 = plVar16;
    while( true ) {
      if ((int)param_2->_padding_ != iVar9) {
        local_b5 = 0;
        `TCheckedPointerIterator<UE::Anim::FCurveElementIndexed,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_b5);
      }
      if (plVar15 == plVar16) break;
      if (*plVar17 == *plVar15) {
        lVar6 = plVar15[2];
        uVar10 = 0;
        if ((int)uVar18 < param_3->ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(int *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar18 * 4) = (int)lVar6;
        plVar16 = local_78;
      }
      plVar15 = (longlong *)((longlong)plVar15 + 0x14);
    }
    uVar18 = uVar18 + 1;
    uVar19 = (ulonglong)local_a8;
    plVar17 = plVar17 + 2;
  } while( true );
}

// CacheVariableJointAttributes @ 14a665580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_RigLogic::CacheVariableJointAttributes(FAnimNode_RigLogic *this,FBoneContainer *param_1)

{
  uint uVar1;
  FSharedRigRuntimeContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FDNAIndexMapping *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ushort uVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::CacheVariableJointAttributes(FBoneContainer_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_CacheVariableJointAttributes>
  FVar14;
  FScriptContainerElement *pFVar15;
  FName FVar16;
  int *piVar17;
  ulonglong uVar18;
  ushort *puVar19;
  FScriptContainerElement *pFVar20;
  bool bVar21;
  FLLMScope local_res20 [2];
  ushort local_98;
  undefined2 uStack_96;
  int iStack_94;
  FColor_u_0 local_90 [2];
  FName local_88;
  FName local_80;
  FName local_78;
  ushort *local_68;
  FMemScope local_60;
  FName local_58;
  FName local_50 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigLogic::CacheVariableJointAttributes");
  piVar17 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar17 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_CacheVariableJointAttributes ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::CacheVariableJointAttributes(FBoneContainer_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_CacheVariableJointAttributes>
         )0x0) {
      pFVar13 = ::FName::FName(&local_58,"STAT_AnimNode_RigLogic_CacheVariableJointAttributes");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_AnimNode_RigLogic_CacheVariableJointAttributes,*pFVar13,
                 L"STAT_AnimNode_RigLogic_CacheVariableJointAttributes","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_AnimNode_RigLogic_CacheVariableJointAttributes;
  if (StatPtr_STAT_AnimNode_RigLogic_CacheVariableJointAttributes ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::CacheVariableJointAttributes(FBoneContainer_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_CacheVariableJointAttributes>
       )0x0) {
    pFVar13 = ::FName::FName(local_50,"STAT_AnimNode_RigLogic_CacheVariableJointAttributes");
    FVar14 = (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::CacheVariableJointAttributes(FBoneContainer_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_CacheVariableJointAttributes>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AnimNode_RigLogic_CacheVariableJointAttributes,*pFVar13,
                          L"STAT_AnimNode_RigLogic_CacheVariableJointAttributes","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar14;
  bVar7 = false;
  bVar9 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  if ((FVar16.ComparisonIndex.Value.Value != 0) || (FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_90[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_90[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_88.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_88,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0x37);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_80 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar8 = true;
      goto LAB_14a665718;
    }
  }
  bVar8 = false;
  local_80 = local_78;
  FVar16 = local_78;
LAB_14a665718:
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId58,"FAnimNode_RigLogic::CacheVariableJointAttributes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,0x3a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId58);
  }
  if ((*piVar17 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&LLMScope_Name60,L"Animation/RigLogic");
    _Init_thread_footer(&::_TSS1);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name60,false,None,Default,true);
  FMemScope::FMemScope(&local_60,&LLMScope_Name60,true);
  uVar11 = (**(code **)((longlong)*(this->RigInstance->RigInstance).Ptr + 0xd0))();
  uVar18 = (ulonglong)uVar11;
  if (((this->LocalRigRuntimeContext).Object == (FSharedRigRuntimeContext *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar2 = (this->LocalRigRuntimeContext).Object;
  if (((pFVar2->VariableJointIndicesPerLOD).ArrayNum <= (int)(uint)uVar11) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (pFVar2->VariableJointIndicesPerLOD).AllocatorInstance.Data;
  uVar1 = *(uint *)(pFVar3 + uVar18 * 0x10 + 8);
  puVar19 = *(ushort **)(pFVar3 + uVar18 * 0x10);
  if (((int)uVar1 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->LocalJointMappingsPerLOD).ArrayNum <= (int)(uint)uVar11) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar20 = (this->LocalJointMappingsPerLOD).AllocatorInstance.Data + uVar18 * 0x38;
  pFVar3 = pFVar20 + 0xc;
  *(undefined4 *)&pFVar20[8].field_0x0 = 0;
  if (*(int *)pFVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)pFVar20,0,(int *)pFVar3);
  }
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (*(int *)pFVar3 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar1,(ForAnyElementType *)pFVar20,*(int *)&pFVar20[8].field_0x0,(int *)pFVar3);
  }
  local_68 = puVar19 + (int)uVar1;
  if (puVar19 != local_68) {
    do {
      uVar11 = *puVar19;
      if (((this->LocalDNAIndexMapping).Object == (FDNAIndexMapping *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->LocalDNAIndexMapping).Object;
      if (((pFVar4->JointsMapDNAIndicesToMeshPoseBoneIndices).ArrayNum <= (int)(uint)uVar11) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_1->BoneIndicesArray).AllocatorInstance.Data;
      for (pFVar15 = pFVar5; pFVar15 != pFVar5 + (longlong)(param_1->BoneIndicesArray).ArrayNum * 2;
          pFVar15 = pFVar15 + 2) {
        if ((uint)*(ushort *)pFVar15 ==
            *(uint *)((pFVar4->JointsMapDNAIndicesToMeshPoseBoneIndices).AllocatorInstance.Data +
                     (ulonglong)uVar11 * 4)) {
          iVar12 = (int)((longlong)pFVar15 - (longlong)pFVar5 >> 1);
          if (iVar12 != -1) {
            local_98 = uVar11;
            iStack_94 = iVar12;
            if (((*(ushort **)&pFVar20->field_0x0 <= &local_98) &&
                (&local_98 < *(ushort **)&pFVar20->field_0x0 + (longlong)*(int *)pFVar3 * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar12 = *(int *)&pFVar20[8].field_0x0;
            if (iVar12 == *(int *)pFVar3) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,(ForAnyElementType *)pFVar20,(int *)pFVar3);
            }
            *(int *)&pFVar20[8].field_0x0 = iVar12 + 1;
            *(ulonglong *)(*(longlong *)&pFVar20->field_0x0 + (longlong)iVar12 * 8) =
                 CONCAT44(iStack_94,CONCAT22(uStack_96,local_98));
          }
          break;
        }
      }
      puVar19 = puVar19 + 1;
      FVar16 = local_80;
    } while (puVar19 != local_68);
  }
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res20);
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// CalculateRigLogic @ 14a667f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAnimNode_RigLogic::CalculateRigLogic(FAnimNode_RigLogic *this)

{
  int *piVar1;
  FRigLogic *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::CalculateRigLogic(void)_::_2_::FStat_STAT_AnimNode_RigLogic_CalculateRigLogic>
  FVar8;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  bool bVar12;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigLogic::CalculateRigLogic");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_CalculateRigLogic ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::CalculateRigLogic(void)_::_2_::FStat_STAT_AnimNode_RigLogic_CalculateRigLogic>
         )0x0) {
      pFVar7 = ::FName::FName(&local_res20,"STAT_AnimNode_RigLogic_CalculateRigLogic");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimNode_RigLogic_CalculateRigLogic,
                 *pFVar7,L"STAT_AnimNode_RigLogic_CalculateRigLogic","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_AnimNode_RigLogic_CalculateRigLogic;
  if (StatPtr_STAT_AnimNode_RigLogic_CalculateRigLogic ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::CalculateRigLogic(void)_::_2_::FStat_STAT_AnimNode_RigLogic_CalculateRigLogic>
       )0x0) {
    pFVar7 = ::FName::FName(&local_58,"STAT_AnimNode_RigLogic_CalculateRigLogic");
    FVar8 = (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::CalculateRigLogic(void)_::_2_::FStat_STAT_AnimNode_RigLogic_CalculateRigLogic>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_AnimNode_RigLogic_CalculateRigLogic,*pFVar7,
                         L"STAT_AnimNode_RigLogic_CalculateRigLogic","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0x205);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_14a6680de;
    }
  }
  bVar4 = false;
  FVar11 = local_50;
LAB_14a6680de:
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId520,"FAnimNode_RigLogic::CalculateRigLogic",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,0x208);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId520);
  }
  if (((this->LocalRigRuntimeContext).Object == (FSharedRigRuntimeContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (((this->LocalRigRuntimeContext).Object)->RigLogic).Object;
  FRigLogic::CalculateMachineLearnedBehaviorControls(this_00,this->RigInstance);
  FRigLogic::CalculateRBFControls(this_00,this->RigInstance);
  FRigLogic::CalculateControls(this_00,this->RigInstance);
  FRigLogic::CalculateJoints(this_00,this->RigInstance);
  FRigLogic::CalculateBlendShapes(this_00,this->RigInstance);
  FRigLogic::CalculateAnimatedMaps(this_00,this->RigInstance);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_40.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_40);
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

// Evaluate_AnyThread @ 14a66bd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_RigLogic::Evaluate_AnyThread(FAnimNode_RigLogic *this,FPoseContext *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_RigLogic::Evaluate_AnyThread(FPoseContext_&)_::_2_::FStat_STAT_AnimNode_RigLogic_Evaluate_AnyThread>
  FVar7;
  FSharedRigRuntimeContext *pFVar8;
  FRigLogic *pFVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  bool bVar14;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_48;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigLogic::Evaluate_AnyThread");
  FVar13.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_Evaluate_AnyThread ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_RigLogic::Evaluate_AnyThread(FPoseContext_&)_::_2_::FStat_STAT_AnimNode_RigLogic_Evaluate_AnyThread>
         )0x0) {
      pFVar6 = ::FName::FName((FName *)&local_res8.s,"STAT_AnimNode_RigLogic_Evaluate_AnyThread");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimNode_RigLogic_Evaluate_AnyThread,
                 *pFVar6,L"STAT_AnimNode_RigLogic_Evaluate_AnyThread","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar7 = StatPtr_STAT_AnimNode_RigLogic_Evaluate_AnyThread;
  if (StatPtr_STAT_AnimNode_RigLogic_Evaluate_AnyThread ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_RigLogic::Evaluate_AnyThread(FPoseContext_&)_::_2_::FStat_STAT_AnimNode_RigLogic_Evaluate_AnyThread>
       )0x0) {
    pFVar6 = ::FName::FName(local_res18,"STAT_AnimNode_RigLogic_Evaluate_AnyThread");
    FVar7 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_RigLogic::Evaluate_AnyThread(FPoseContext_&)_::_2_::FStat_STAT_AnimNode_RigLogic_Evaluate_AnyThread>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_AnimNode_RigLogic_Evaluate_AnyThread,*pFVar6,
                         L"STAT_AnimNode_RigLogic_Evaluate_AnyThread","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0xfc);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar3 = true;
      FVar13.Value = FVar11.Value;
      goto LAB_14a66bee3;
    }
  }
  bVar3 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_14a66bee3:
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId255,"FAnimNode_RigLogic::Evaluate_AnyThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,0xff);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId255);
  }
  FPoseLink::Evaluate(&this->AnimSequence,param_1);
  if ((((this->LocalRigRuntimeContext).Object != (FSharedRigRuntimeContext *)0x0) &&
      ((this->LocalDNAIndexMapping).Object != (FDNAIndexMapping *)0x0)) &&
     (bVar5 = FAnimNode_Base::IsLODEnabled
                        ((FAnimNode_Base *)this,(FAnimInstanceProxy *)param_1->_padding_), bVar5)) {
    pFVar8 = TSharedPtr<FSharedRigRuntimeContext,1>::operator->(&this->LocalRigRuntimeContext);
    pFVar9 = TSharedPtr<FRigLogic,1>::operator->(&pFVar8->RigLogic);
    UpdateControlCurves(this,param_1);
    CalculateRigLogic(this);
    if ((pFVar9->Configuration).LoadJoints != false) {
      UpdateJoints(this,param_1);
    }
    if ((pFVar9->Configuration).LoadBlendShapes != false) {
      UpdateBlendShapeCurves(this,param_1);
    }
    if ((pFVar9->Configuration).LoadAnimatedMaps != false) {
      UpdateAnimMapCurves(this,param_1);
    }
    pFVar8 = TSharedPtr<FSharedRigRuntimeContext,1>::operator->(&this->LocalRigRuntimeContext);
    pFVar9 = TSharedPtr<FRigLogic,1>::operator->(&pFVar8->RigLogic);
    FRigLogic::CollectCalculationStats(pFVar9,this->RigInstance);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar12 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        FStatsHierarchical::EndMeasurement();
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 14a66c290

void __thiscall
FAnimNode_RigLogic::GatherDebugData(FAnimNode_RigLogic *this,FNodeDebugData *param_1)

{
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->AnimSequence,param_1);
  return;
}

// GetLODThreshold @ 14a672eb0

int __thiscall FAnimNode_RigLogic::GetLODThreshold(FAnimNode_RigLogic *this)

{
  return this->LODThreshold;
}

// Initialize_AnyThread @ 14a67be10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_RigLogic::Initialize_AnyThread
          (FAnimNode_RigLogic *this,FAnimationInitializeContext *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_RigLogic::Initialize_AnyThread(FAnimationInitializeContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_Initialize_AnyThread>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  int *piVar10;
  bool bVar11;
  FLLMScope local_res8 [5];
  LARGE_INTEGER local_res18;
  FMemScope local_res20;
  FStatMessage local_58;
  FName local_48;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigLogic::Initialize_AnyThread");
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  FVar9.Value = 0;
  if ((*piVar10 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_Initialize_AnyThread ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_RigLogic::Initialize_AnyThread(FAnimationInitializeContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_Initialize_AnyThread>
         )0x0) {
      pFVar5 = ::FName::FName((FName *)&local_res18.s,"STAT_AnimNode_RigLogic_Initialize_AnyThread")
      ;
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimNode_RigLogic_Initialize_AnyThread,
                 *pFVar5,L"STAT_AnimNode_RigLogic_Initialize_AnyThread","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar6 = StatPtr_STAT_AnimNode_RigLogic_Initialize_AnyThread;
  if (StatPtr_STAT_AnimNode_RigLogic_Initialize_AnyThread ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_RigLogic::Initialize_AnyThread(FAnimationInitializeContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_Initialize_AnyThread>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_58,"STAT_AnimNode_RigLogic_Initialize_AnyThread");
    FVar6 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_RigLogic::Initialize_AnyThread(FAnimationInitializeContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_Initialize_AnyThread>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_AnimNode_RigLogic_Initialize_AnyThread,*pFVar5,
                         L"STAT_AnimNode_RigLogic_Initialize_AnyThread","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar6;
  bVar1 = false;
  bVar3 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar4 = FVar8.Number;
  if ((FVar7.Value != 0) || (uVar4 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar1 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar7.Value;
        local_res18.s.HighPart = uVar4;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0x29);
        bVar1 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar7.Value;
      local_res18.s.HighPart = uVar4;
      local_48 = FVar8;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      bVar2 = true;
      FVar9.Value = local_48.ComparisonIndex.Value;
      goto LAB_14a67bfa2;
    }
  }
  bVar2 = false;
  FVar8 = local_48;
LAB_14a67bfa2:
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId44,"FAnimNode_RigLogic::Initialize_AnyThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,0x2c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId44);
  }
  if ((*piVar10 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&LLMScope_Name46,L"Animation/RigLogic");
    _Init_thread_footer(&::_TSS1);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name46,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name46,true);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->AnimSequence,param_1);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar2) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar9.Value;
      QueryPerformanceCounter(&local_res18);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar10 = &this_00->ScopeCount;
      *piVar10 = *piVar10 + -1;
      if (*piVar10 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateAnimMapCurves @ 14a6838f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_RigLogic::UpdateAnimMapCurves(FAnimNode_RigLogic *this,FPoseContext *param_1)

{
  int *piVar1;
  RigInstance *pRVar2;
  FDNAIndexMapping *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateAnimMapCurves(FPoseContext_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateAnimMapCurves>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  bool bVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_88;
  FName local_80;
  FStatMessage local_70;
  undefined8 local_60;
  int local_58;
  undefined8 local_50 [4];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigLogic::UpdateAnimMapCurves");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_UpdateAnimMapCurves ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateAnimMapCurves(FPoseContext_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateAnimMapCurves>
         )0x0) {
      pFVar10 = ::FName::FName(&local_res20,"STAT_AnimNode_RigLogic_UpdateAnimMapCurves");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimNode_RigLogic_UpdateAnimMapCurves,
                 *pFVar10,L"STAT_AnimNode_RigLogic_UpdateAnimMapCurves","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_AnimNode_RigLogic_UpdateAnimMapCurves;
  if (StatPtr_STAT_AnimNode_RigLogic_UpdateAnimMapCurves ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateAnimMapCurves(FPoseContext_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateAnimMapCurves>
       )0x0) {
    pFVar10 = ::FName::FName(&local_88,"STAT_AnimNode_RigLogic_UpdateAnimMapCurves");
    FVar11 = (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateAnimMapCurves(FPoseContext_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateAnimMapCurves>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AnimNode_RigLogic_UpdateAnimMapCurves,*pFVar10,
                          L"STAT_AnimNode_RigLogic_UpdateAnimMapCurves","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0x24b);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_14a683a78;
    }
  }
  bVar6 = false;
  FVar14 = local_80;
LAB_14a683a78:
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId590,"FAnimNode_RigLogic::UpdateAnimMapCurves",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,0x24e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId590);
  }
  uVar9 = (**(code **)((longlong)*(this->RigInstance->RigInstance).Ptr + 0xd0))();
  pRVar2 = (this->RigInstance->RigInstance).Ptr;
  (**(code **)((longlong)*pRVar2 + 200))(pRVar2,&local_60);
  local_50[0] = local_60;
  if ((local_58 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->LocalDNAIndexMapping).Object == (FDNAIndexMapping *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->LocalDNAIndexMapping).Object;
  if (((pFVar3->MaskMultiplierCurvesPerLOD).ArrayNum <= (int)(uint)uVar9) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UE::Anim::FNamedValueArrayUtils::
  Union<_FAnimNode_RigLogic::UpdateAnimMapCurves_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>
            ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&param_1->Curve,
             (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *)
             ((pFVar3->MaskMultiplierCurvesPerLOD).AllocatorInstance.Data + (ulonglong)uVar9 * 0x20)
             ,(TArrayView<float_const_,int> *)local_50);
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_70);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateBlendShapeCurves @ 14a6842b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_RigLogic::UpdateBlendShapeCurves(FAnimNode_RigLogic *this,FPoseContext *param_1)

{
  int *piVar1;
  RigInstance *pRVar2;
  FDNAIndexMapping *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateBlendShapeCurves(FPoseContext_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateBlendShapeCurves>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  bool bVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_88;
  FName local_80;
  FStatMessage local_70;
  undefined8 local_60;
  int local_58;
  undefined8 local_50 [4];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigLogic::UpdateBlendShapeCurves");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_UpdateBlendShapeCurves ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateBlendShapeCurves(FPoseContext_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateBlendShapeCurves>
         )0x0) {
      pFVar10 = ::FName::FName(&local_res20,"STAT_AnimNode_RigLogic_UpdateBlendShapeCurves");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimNode_RigLogic_UpdateBlendShapeCurves
                 ,*pFVar10,L"STAT_AnimNode_RigLogic_UpdateBlendShapeCurves","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_AnimNode_RigLogic_UpdateBlendShapeCurves;
  if (StatPtr_STAT_AnimNode_RigLogic_UpdateBlendShapeCurves ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateBlendShapeCurves(FPoseContext_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateBlendShapeCurves>
       )0x0) {
    pFVar10 = ::FName::FName(&local_88,"STAT_AnimNode_RigLogic_UpdateBlendShapeCurves");
    FVar11 = (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateBlendShapeCurves(FPoseContext_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateBlendShapeCurves>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AnimNode_RigLogic_UpdateBlendShapeCurves,*pFVar10,
                          L"STAT_AnimNode_RigLogic_UpdateBlendShapeCurves","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0x234);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_14a684438;
    }
  }
  bVar6 = false;
  FVar14 = local_80;
LAB_14a684438:
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId567,"FAnimNode_RigLogic::UpdateBlendShapeCurves",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,0x237);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId567);
  }
  uVar9 = (**(code **)((longlong)*(this->RigInstance->RigInstance).Ptr + 0xd0))();
  pRVar2 = (this->RigInstance->RigInstance).Ptr;
  (**(code **)((longlong)*pRVar2 + 0xc0))(pRVar2,&local_60);
  local_50[0] = local_60;
  if ((local_58 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->LocalDNAIndexMapping).Object == (FDNAIndexMapping *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->LocalDNAIndexMapping).Object;
  if (((pFVar3->MorphTargetCurvesPerLOD).ArrayNum <= (int)(uint)uVar9) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UE::Anim::FNamedValueArrayUtils::
  Union<_FAnimNode_RigLogic::UpdateBlendShapeCurves_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>
            ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&param_1->Curve,
             (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *)
             ((pFVar3->MorphTargetCurvesPerLOD).AllocatorInstance.Data + (ulonglong)uVar9 * 0x20),
             (TArrayView<float_const_,int> *)local_50);
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_70);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateControlCurves @ 14a684ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_RigLogic::UpdateControlCurves(FAnimNode_RigLogic *this,FPoseContext *param_1)

{
  int *piVar1;
  FSharedRigRuntimeContext *pFVar2;
  FRigLogic *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateControlCurves(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateControlCurves>
  FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  bool bVar14;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_38;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigLogic::UpdateControlCurves");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_UpdateControlCurves ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateControlCurves(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateControlCurves>
         )0x0) {
      pFVar9 = ::FName::FName(&local_58,"STAT_AnimNode_RigLogic_UpdateControlCurves");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimNode_RigLogic_UpdateControlCurves,
                 *pFVar9,L"STAT_AnimNode_RigLogic_UpdateControlCurves","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_AnimNode_RigLogic_UpdateControlCurves;
  if (StatPtr_STAT_AnimNode_RigLogic_UpdateControlCurves ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateControlCurves(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateControlCurves>
       )0x0) {
    pFVar9 = ::FName::FName(&local_50,"STAT_AnimNode_RigLogic_UpdateControlCurves");
    FVar10 = (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateControlCurves(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateControlCurves>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AnimNode_RigLogic_UpdateControlCurves,*pFVar9,
                          L"STAT_AnimNode_RigLogic_UpdateControlCurves","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar12.Value;
        local_res18.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0x1e1);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar12.Value;
      local_res20.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14a684e6b;
    }
  }
  bVar6 = false;
  FVar13 = local_48;
LAB_14a684e6b:
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId484,"FAnimNode_RigLogic::UpdateControlCurves",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,0x1e4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId484);
  }
  if (((this->LocalRigRuntimeContext).Object == (FSharedRigRuntimeContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (this->LocalRigRuntimeContext).Object;
  if (((pFVar2->RigLogic).Object == (FRigLogic *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (pFVar2->RigLogic).Object;
  if (this->CacheAnimCurveNames == false) {
    UpdateRawControls(this,param_1);
    if ((pFVar3->Configuration).LoadMachineLearnedBehavior != false) {
      UpdateNeuralNetworkMaskCurves(this,param_1);
    }
  }
  else {
    UpdateRawControlsCached(this,param_1);
    if ((pFVar3->Configuration).LoadMachineLearnedBehavior != false) {
      UpdateNeuralNetworkMaskCurvesCached(this,param_1);
    }
  }
  if (((pFVar3->Configuration).LoadRBFBehavior != false) ||
     ((pFVar3->Configuration).LoadTwistSwingBehavior != false)) {
    UpdateSparseDriverJointDrivenControlCurves(this,param_1);
    UpdateDenseDriverJointDrivenControlCurves(this,param_1);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateDenseDriverJointDrivenControlCurves @ 14a685120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_RigLogic::UpdateDenseDriverJointDrivenControlCurves
          (FAnimNode_RigLogic *this,FPoseContext *param_1)

{
  double *pdVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FSharedRigRuntimeContext *pFVar4;
  longlong lVar5;
  RigInstance *pRVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  FScriptContainerElement *pFVar30;
  bool bVar31;
  bool bVar32;
  ushort uVar33;
  uint uVar34;
  uint uVar35;
  FName *pFVar36;
  FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateDenseDriverJointDrivenControlCurves(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateDenseDriverJointDrivenControlCurves>
  FVar37;
  int iVar38;
  FName FVar39;
  uint uVar40;
  longlong lVar41;
  longlong lVar42;
  bool bVar43;
  FColor_u_0 local_e8 [2];
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  FName local_a8;
  FName local_a0 [12];
  
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_RigLogic::UpdateDenseDriverJointDrivenControlCurves");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_UpdateDenseDriverJointDrivenControlCurves ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateDenseDriverJointDrivenControlCurves(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateDenseDriverJointDrivenControlCurves>
         )0x0) {
      pFVar36 = ::FName::FName(&local_a8,
                               "STAT_AnimNode_RigLogic_UpdateDenseDriverJointDrivenControlCurves");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_AnimNode_RigLogic_UpdateDenseDriverJointDrivenControlCurves,*pFVar36,
                 L"STAT_AnimNode_RigLogic_UpdateDenseDriverJointDrivenControlCurves",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar37 = StatPtr_STAT_AnimNode_RigLogic_UpdateDenseDriverJointDrivenControlCurves;
  if (StatPtr_STAT_AnimNode_RigLogic_UpdateDenseDriverJointDrivenControlCurves ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateDenseDriverJointDrivenControlCurves(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateDenseDriverJointDrivenControlCurves>
       )0x0) {
    pFVar36 = ::FName::FName(local_a0,
                             "STAT_AnimNode_RigLogic_UpdateDenseDriverJointDrivenControlCurves");
    FVar37 = (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateDenseDriverJointDrivenControlCurves(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateDenseDriverJointDrivenControlCurves>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AnimNode_RigLogic_UpdateDenseDriverJointDrivenControlCurves,
                          *pFVar36,
                          L"STAT_AnimNode_RigLogic_UpdateDenseDriverJointDrivenControlCurves",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar39 = *(FName *)FVar37;
  bVar26 = false;
  bVar29 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  bVar32 = false;
  bVar27 = false;
  if ((FVar39.ComparisonIndex.Value.Value != 0) ||
     (bVar25 = bVar26, bVar28 = bVar29, FVar39.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8[0]._s_0,(char *)*(FName *)((longlong)FVar37 + 0x10));
      bVar26 = false;
      bVar29 = true;
      bVar32 = false;
      bVar27 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0.ComparisonIndex.Value = FVar39.ComparisonIndex.Value.Value;
        local_e0.Number = FVar39.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e0,(wchar_t *)*(FName *)((longlong)FVar37 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0x18c);
        bVar26 = true;
        bVar29 = true;
        bVar32 = true;
        bVar27 = true;
      }
    }
    bVar25 = bVar26;
    bVar28 = bVar29;
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8 = FVar39;
      FThreadStats::AddMessage(FVar39,CycleScopeStart);
      bVar32 = true;
      bVar27 = true;
      goto LAB_14a6852de;
    }
  }
  bVar29 = bVar27;
  bVar26 = bVar32;
  bVar32 = false;
  bVar27 = false;
  local_d8 = local_d0;
  FVar39 = local_d0;
LAB_14a6852de:
  bVar43 = -1 < CpuChannel->Enabled;
  if (bVar43) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId399,
               "FAnimNode_RigLogic::UpdateDenseDriverJointDrivenControlCurves",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,399);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId399);
  }
  uVar33 = (**(code **)((longlong)*(this->RigInstance->RigInstance).Ptr + 0xd0))();
  if (((this->LocalJointMappingsPerLOD).ArrayNum <= (int)(uint)uVar33) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar31)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar3 = (this->LocalJointMappingsPerLOD).AllocatorInstance.Data;
  lVar41 = (ulonglong)uVar33 * 0x38;
  local_b8 = pFVar3;
  if (((this->LocalRigRuntimeContext).Object == (FSharedRigRuntimeContext *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = (this->LocalRigRuntimeContext).Object;
  iVar2 = (pFVar4->InverseNeutralJointRotations).ArrayNum;
  local_b0 = (pFVar4->InverseNeutralJointRotations).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar31)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar30 = local_b8;
  iVar38 = *(int *)(pFVar3 + lVar41 + 0x28);
  uVar40 = 0;
  if (0 < iVar38) {
    lVar42 = 0;
    do {
      uVar35 = 0;
      if ((int)uVar40 < iVar38) {
        uVar35 = ~uVar40 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5 = *(longlong *)(pFVar30 + lVar41 + 0x20);
      uVar35 = *(uint *)(lVar42 + lVar5);
      uVar34 = 0;
      if ((int)uVar35 < *(int *)&(param_1->Pose).field_0x8) {
        uVar34 = ~uVar35 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar34 = *(uint *)(lVar42 + 4 + lVar5);
      pdVar1 = (double *)((longlong)(int)uVar35 * 0x60 + *(longlong *)&param_1->Pose);
      dVar17 = *pdVar1;
      dVar18 = pdVar1[1];
      pdVar1 = (double *)((longlong)(int)uVar35 * 0x60 + 0x10 + *(longlong *)&param_1->Pose);
      dVar19 = *pdVar1;
      dVar20 = pdVar1[1];
      uVar35 = 0;
      if ((int)uVar34 < iVar2) {
        uVar35 = ~uVar34 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar32)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar21 = *(double *)(local_b0 + (longlong)(int)uVar34 * 0x20);
      dVar22 = *(double *)(local_b0 + (longlong)(int)uVar34 * 0x20 + 8);
      dVar23 = *(double *)(local_b0 + (longlong)(int)uVar34 * 0x20 + 0x10);
      dVar24 = *(double *)(local_b0 + (longlong)(int)uVar34 * 0x20 + 0x10 + 8);
      pRVar6 = (this->RigInstance->RigInstance).Ptr;
      dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
      dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
      dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
      dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
      dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      (**(code **)((longlong)*pRVar6 + 0x40))
                (pRVar6,*(undefined2 *)(lVar42 + 8 + lVar5),
                 (float)(dVar21 * dVar20 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                         dVar17 * dVar24 +
                         dVar19 * dVar22 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                        dVar23 * dVar18 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]));
      pRVar6 = (this->RigInstance->RigInstance).Ptr;
      (**(code **)((longlong)*pRVar6 + 0x40))
                (pRVar6,*(undefined2 *)(lVar42 + 0xc + lVar5),
                 (float)(dVar21 * dVar19 * dVar12 + dVar18 * dVar24 + dVar20 * dVar22 * dVar14 +
                        dVar23 * dVar17 * dVar13));
      pRVar6 = (this->RigInstance->RigInstance).Ptr;
      (**(code **)((longlong)*pRVar6 + 0x40))
                (pRVar6,*(undefined2 *)(lVar42 + 0x10 + lVar5),
                 (float)(dVar21 * dVar18 * dVar8 + dVar19 * dVar24 + dVar17 * dVar22 * dVar9 +
                        dVar23 * dVar20 * dVar10));
      pRVar6 = (this->RigInstance->RigInstance).Ptr;
      (**(code **)((longlong)*pRVar6 + 0x40))
                (pRVar6,*(undefined2 *)(lVar42 + 0x14 + lVar5),
                 (float)(dVar21 * dVar17 * dVar11 + dVar20 * dVar24 + dVar18 * dVar22 * dVar15 +
                        dVar23 * dVar19 * dVar16));
      iVar38 = *(int *)(pFVar30 + lVar41 + 0x28);
      uVar40 = uVar40 + 1;
      lVar42 = lVar42 + 0x18;
      FVar39 = local_d8;
      bVar25 = bVar26;
      bVar32 = bVar27;
      bVar28 = bVar29;
    } while ((int)uVar40 < iVar38);
  }
  if (bVar43) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar28) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar32) {
    FThreadStats::AddMessage(FVar39,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateJoints @ 14a685800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAnimNode_RigLogic::UpdateJoints(FAnimNode_RigLogic *this,FPoseContext *param_1)

{
  short *psVar1;
  double *pdVar2;
  int iVar3;
  uint uVar4;
  FName FVar5;
  RigInstance *pRVar6;
  FSharedRigRuntimeContext *pFVar7;
  RigLogic *pRVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  ushort uVar29;
  uint uVar30;
  FName *pFVar31;
  FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateJoints(FPoseContext_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateJoints>
  FVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  short *psVar36;
  bool bVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 local_res20 [8];
  FColor_u_0 local_148 [2];
  FName local_140;
  FName local_138;
  FName local_130;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  int local_108;
  longlong local_100;
  int local_f8;
  FName local_f0;
  FName local_e8;
  undefined1 local_e0 [16];
  double local_d0;
  undefined1 local_c8 [16];
  double local_b8;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigLogic::UpdateJoints");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_UpdateJoints ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateJoints(FPoseContext_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateJoints>
         )0x0) {
      pFVar31 = ::FName::FName(&local_f0,"STAT_AnimNode_RigLogic_UpdateJoints");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimNode_RigLogic_UpdateJoints,*pFVar31,
                 L"STAT_AnimNode_RigLogic_UpdateJoints","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar32 = StatPtr_STAT_AnimNode_RigLogic_UpdateJoints;
  if (StatPtr_STAT_AnimNode_RigLogic_UpdateJoints ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateJoints(FPoseContext_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateJoints>
       )0x0) {
    pFVar31 = ::FName::FName(&local_e8,"STAT_AnimNode_RigLogic_UpdateJoints");
    FVar32 = (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateJoints(FPoseContext_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateJoints>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimNode_RigLogic_UpdateJoints,
                          *pFVar31,L"STAT_AnimNode_RigLogic_UpdateJoints","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar32;
  bVar26 = false;
  bVar25 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  bVar37 = false;
  bVar27 = false;
  if ((FVar5.ComparisonIndex.Value.Value != 0) || (FVar5.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar32 + 0x10));
      bVar26 = false;
      bVar25 = true;
      bVar37 = false;
      bVar27 = true;
      if (-1 < CpuChannel->Enabled) {
        local_140.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
        local_140.Number = FVar5.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_140,(wchar_t *)*(FName *)((longlong)FVar32 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0x21a);
        bVar26 = true;
        bVar25 = true;
        bVar37 = true;
        bVar27 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_138 = FVar5;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      bVar27 = true;
      goto LAB_14a6859ba;
    }
  }
  bVar26 = bVar37;
  bVar25 = bVar27;
  bVar27 = false;
  local_138 = local_130;
LAB_14a6859ba:
  bVar37 = -1 < CpuChannel->Enabled;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId541,"FAnimNode_RigLogic::UpdateJoints",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,0x21d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId541);
  }
  uVar29 = (**(code **)((longlong)*(this->RigInstance->RigInstance).Ptr + 0xd0))();
  pRVar6 = (this->RigInstance->RigInstance).Ptr;
  (**(code **)((longlong)*pRVar6 + 0xb8))(pRVar6,&local_110);
  local_120 = local_110;
  if ((local_108 < 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar28)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (((this->LocalRigRuntimeContext).Object == (FSharedRigRuntimeContext *)0x0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar28)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar7 = (this->LocalRigRuntimeContext).Object;
  if (((pFVar7->RigLogic).Object == (FRigLogic *)0x0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar28)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pRVar8 = (((pFVar7->RigLogic).Object)->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar8 + 0x48))(pRVar8,&local_100);
  local_118 = local_100;
  if ((local_f8 < 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar28)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (((this->LocalJointMappingsPerLOD).ArrayNum <= (int)(uint)uVar29) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar9 = (this->LocalJointMappingsPerLOD).AllocatorInstance.Data;
  lVar35 = (ulonglong)uVar29 * 0x38;
  psVar36 = *(short **)(pFVar9 + lVar35);
  iVar3 = *(int *)(pFVar9 + lVar35 + 8);
  psVar1 = psVar36 + (longlong)iVar3 * 4;
  while( true ) {
    if (*(int *)(pFVar9 + lVar35 + 8) != iVar3) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FAnimNode_RigLogic::FJointCompactPoseBoneMapping_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    FVar5 = local_138;
    if (psVar36 == psVar1) {
      if (bVar37) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar25) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar26) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar27) {
        FThreadStats::AddMessage(FVar5,CycleScopeEnd);
      }
      FStatsHierarchical::EndMeasurement();
      return;
    }
    uVar4 = *(uint *)(psVar36 + 2);
    uVar29 = *psVar36 * 10;
    uVar30 = 0;
    if ((int)uVar4 < *(int *)&(param_1->Pose).field_0x8) {
      uVar30 = ~uVar4 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar28)) break;
    lVar10 = *(longlong *)&param_1->Pose;
    lVar34 = (longlong)(int)uVar4 * 0x60;
    uVar33 = (ulonglong)uVar29;
    dVar40 = (double)(*(float *)(local_120 + (ulonglong)uVar29 * 4) +
                     *(float *)(local_118 + (ulonglong)uVar29 * 4));
    dVar42 = (double)(*(float *)(local_120 + 4 + uVar33 * 4) +
                     *(float *)(local_118 + 4 + uVar33 * 4));
    uVar38 = SUB84(dVar42,0);
    uVar39 = (undefined4)((ulonglong)dVar42 >> 0x20);
    local_d0 = (double)(*(float *)(local_120 + 8 + uVar33 * 4) +
                       *(float *)(local_118 + 8 + uVar33 * 4));
    local_e0._8_4_ = uVar38;
    local_e0._0_8_ = dVar40;
    local_e0._12_4_ = uVar39;
    auVar13._8_4_ = uVar38;
    auVar13._0_8_ = dVar40;
    auVar13._12_4_ = uVar39;
    *(undefined1 (*) [16])(lVar34 + 0x20 + lVar10) = auVar13;
    pdVar2 = (double *)(lVar34 + 0x30 + lVar10);
    *pdVar2 = local_d0;
    pdVar2[1] = 0.0;
    dVar19 = (double)*(float *)(local_118 + 0x10 + uVar33 * 4);
    dVar23 = (double)*(float *)(local_120 + 0x14 + uVar33 * 4);
    dVar15 = (double)*(float *)(local_118 + 0x18 + uVar33 * 4);
    dVar22 = (double)*(float *)(local_120 + 0xc + uVar33 * 4);
    dVar24 = (double)*(float *)(local_118 + 0x14 + uVar33 * 4);
    dVar43 = (double)*(float *)(local_120 + 0x10 + uVar33 * 4);
    dVar41 = (double)*(float *)(local_120 + 0x18 + uVar33 * 4);
    dVar21 = (double)*(float *)(local_118 + 0xc + uVar33 * 4);
    dVar42 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar40 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar20 = dVar21 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar43 * dVar15 +
             dVar41 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar24 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar17 = dVar21 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar41 * dVar15 +
             dVar43 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar24 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar18._8_4_ = SUB84(dVar20,0);
    auVar18._0_8_ =
         dVar21 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar22 * dVar15 +
         dVar23 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar24 * dVar43 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    auVar18._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    *(undefined1 (*) [16])(lVar34 + lVar10) = auVar18;
    auVar16._8_4_ = SUB84(dVar17,0);
    auVar16._0_8_ =
         dVar21 * dVar43 * dVar42 + dVar23 * dVar15 + dVar22 * dVar19 * dVar40 +
         dVar24 * dVar41 * dVar12;
    auVar16._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    *(undefined1 (*) [16])(lVar34 + 0x10 + lVar10) = auVar16;
    psVar36 = psVar36 + 4;
    dVar40 = (double)(*(float *)(local_120 + 0x1c + uVar33 * 4) +
                     *(float *)(local_118 + 0x1c + uVar33 * 4));
    dVar42 = (double)(*(float *)(local_120 + 0x20 + uVar33 * 4) +
                     *(float *)(local_118 + 0x20 + uVar33 * 4));
    local_b8 = (double)(*(float *)(local_120 + 0x24 + (ulonglong)uVar29 * 4) +
                       *(float *)(local_118 + 0x24 + (ulonglong)uVar29 * 4));
    uVar38 = SUB84(dVar42,0);
    uVar39 = (undefined4)((ulonglong)dVar42 >> 0x20);
    local_c8._8_4_ = uVar38;
    local_c8._0_8_ = dVar40;
    local_c8._12_4_ = uVar39;
    auVar14._8_4_ = uVar38;
    auVar14._0_8_ = dVar40;
    auVar14._12_4_ = uVar39;
    *(undefined1 (*) [16])(lVar34 + 0x40 + lVar10) = auVar14;
    pdVar2 = (double *)(lVar34 + 0x50 + lVar10);
    *pdVar2 = local_b8;
    pdVar2[1] = 0.0;
  }
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

// UpdateNeuralNetworkMaskCurves @ 14a686640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_RigLogic::UpdateNeuralNetworkMaskCurves(FAnimNode_RigLogic *this,FPoseContext *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateNeuralNetworkMaskCurves(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurves>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  bool bVar13;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_38;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigLogic::UpdateNeuralNetworkMaskCurves");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurves ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateNeuralNetworkMaskCurves(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurves>
         )0x0) {
      pFVar8 = ::FName::FName(&local_58,"STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurves");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurves,*pFVar8,
                 L"STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurves","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurves;
  if (StatPtr_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurves ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateNeuralNetworkMaskCurves(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurves>
       )0x0) {
    pFVar8 = ::FName::FName(&local_50,"STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurves");
    FVar9 = (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateNeuralNetworkMaskCurves(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurves>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurves,*pFVar8,
                         L"STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurves","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar11.Value;
        local_res18.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0x1aa);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar11.Value;
      local_res20.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_14a6867cb;
    }
  }
  bVar4 = false;
  FVar12 = local_48;
LAB_14a6867cb:
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId429,"FAnimNode_RigLogic::UpdateNeuralNetworkMaskCurves",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,0x1ad);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId429);
  }
  sVar7 = (**(code **)((longlong)*(this->RigInstance->RigInstance).Ptr + 0x88))();
  if (sVar7 != 0) {
    if (((this->LocalDNAIndexMapping).Object == (FDNAIndexMapping *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UE::Anim::FNamedValueArrayUtils::
    Union<_FAnimNode_RigLogic::UpdateNeuralNetworkMaskCurves_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&param_1->Curve,
               (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *)
               &((this->LocalDNAIndexMapping).Object)->NeuralNetworkMaskCurves,(<lambda_1>)this);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateNeuralNetworkMaskCurvesCached @ 14a686a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_RigLogic::UpdateNeuralNetworkMaskCurvesCached
          (FAnimNode_RigLogic *this,FPoseContext *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  RigInstance *pRVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  short sVar11;
  ushort uVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateNeuralNetworkMaskCurvesCached(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurvesCached>
  FVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  FName local_98;
  FName local_90;
  LARGE_INTEGER local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigLogic::UpdateNeuralNetworkMaskCurvesCached");
  uVar18 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurvesCached ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateNeuralNetworkMaskCurvesCached(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurvesCached>
         )0x0) {
      pFVar14 = ::FName::FName(&local_80,
                               "STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurvesCached");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurvesCached,*pFVar14,
                 L"STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurvesCached","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurvesCached;
  if (StatPtr_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurvesCached ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateNeuralNetworkMaskCurvesCached(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurvesCached>
       )0x0) {
    pFVar14 = ::FName::FName(&local_78,"STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurvesCached")
    ;
    FVar15 = (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateNeuralNetworkMaskCurvesCached(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurvesCached>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurvesCached,
                          *pFVar14,L"STAT_AnimNode_RigLogic_UpdateNeuralNetworkMaskCurvesCached",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar15;
  bVar7 = false;
  bVar9 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  if ((FVar16.ComparisonIndex.Value.Value != 0) || (FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_98.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0x1c1);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_90 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar8 = true;
      goto LAB_14a686bb6;
    }
  }
  bVar8 = false;
  local_90 = local_70;
  FVar16 = local_70;
LAB_14a686bb6:
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId452,
               "FAnimNode_RigLogic::UpdateNeuralNetworkMaskCurvesCached",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,0x1c4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId452);
  }
  sVar11 = (**(code **)((longlong)*(this->RigInstance->RigInstance).Ptr + 0x88))();
  if (sVar11 != 0) {
    uVar12 = (**(code **)((longlong)*(this->RigInstance->RigInstance).Ptr + 0xd0))();
    if (((this->PoseCurvesToRigLogicControlsMap).ArrayNum <= (int)(uint)uVar12) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (this->PoseCurvesToRigLogicControlsMap).AllocatorInstance.Data;
    if (*(int *)(pFVar4 + (ulonglong)uVar12 * 0x20 + 0x18) != *(int *)&(param_1->Curve).field_0x8) {
      if (((this->LocalDNAIndexMapping).Object == (FDNAIndexMapping *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      CachePoseCurvesToRigLogicControlsMap
                (this,param_1,&((this->LocalDNAIndexMapping).Object)->NeuralNetworkMaskCurves,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)
                 (pFVar4 + (ulonglong)uVar12 * 0x20 + 0x10));
    }
    iVar2 = *(int *)&(param_1->Curve).field_0x8;
    lVar17 = *(longlong *)&param_1->Curve;
    lVar19 = (longlong)iVar2 * 0x10 + lVar17;
    while( true ) {
      if (*(int *)&(param_1->Curve).field_0x8 != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UE::Anim::FCurveElement,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      FVar16 = local_90;
      if (lVar17 == lVar19) break;
      uVar13 = 0;
      if ((int)uVar18 < *(int *)(pFVar4 + (ulonglong)uVar12 * 0x20 + 0x18)) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar3 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)uVar12 * 0x20 + 0x10) +
                      (longlong)(int)uVar18 * 4);
      if (iVar3 != -1) {
        pRVar5 = (this->RigInstance->RigInstance).Ptr;
        (**(code **)((longlong)*pRVar5 + 0x98))(pRVar5,iVar3,*(undefined4 *)(lVar17 + 8));
      }
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0x10;
    }
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        FStatsHierarchical::EndMeasurement();
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateRawControls @ 14a686f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_RigLogic::UpdateRawControls(FAnimNode_RigLogic *this,FPoseContext *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateRawControls(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateRawControls>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  bool bVar12;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigLogic::UpdateRawControls");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_UpdateRawControls ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateRawControls(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateRawControls>
         )0x0) {
      pFVar7 = ::FName::FName(&local_res20,"STAT_AnimNode_RigLogic_UpdateRawControls");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimNode_RigLogic_UpdateRawControls,
                 *pFVar7,L"STAT_AnimNode_RigLogic_UpdateRawControls","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_AnimNode_RigLogic_UpdateRawControls;
  if (StatPtr_STAT_AnimNode_RigLogic_UpdateRawControls ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateRawControls(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateRawControls>
       )0x0) {
    pFVar7 = ::FName::FName(&local_68,"STAT_AnimNode_RigLogic_UpdateRawControls");
    FVar8 = (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateRawControls(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateRawControls>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_AnimNode_RigLogic_UpdateRawControls,*pFVar7,
                         L"STAT_AnimNode_RigLogic_UpdateRawControls","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0x12e);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_14a6870e8;
    }
  }
  bVar4 = false;
  FVar11 = local_60;
LAB_14a6870e8:
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId305,"FAnimNode_RigLogic::UpdateRawControls",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,0x131);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId305);
  }
  if (((this->LocalDNAIndexMapping).Object == (FDNAIndexMapping *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::Anim::FNamedValueArrayUtils::
  Union<_FAnimNode_RigLogic::UpdateRawControls_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>
            ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&param_1->Curve,
             (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *)
             &((this->LocalDNAIndexMapping).Object)->ControlAttributeCurves,(<lambda_1>)this);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50[0].NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_50[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_50[0].StatData.Pad[4] = '\0';
      local_50[0].StatData.Pad[5] = '\0';
      local_50[0].StatData.Pad[6] = '\0';
      local_50[0].StatData.Pad[7] = '\0';
      local_50[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_50[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_50[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_50[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateRawControlsCached @ 14a687310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_RigLogic::UpdateRawControlsCached(FAnimNode_RigLogic *this,FPoseContext *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FName FVar4;
  RigInstance *pRVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  double dVar10;
  bool bVar11;
  ushort uVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateRawControlsCached(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateRawControlsCached>
  FVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar19;
  bool bVar20;
  double dVar21;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  FName local_b8;
  FName local_b0;
  LARGE_INTEGER local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FStatMessage local_80 [4];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigLogic::UpdateRawControlsCached");
  uVar17 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_UpdateRawControlsCached ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateRawControlsCached(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateRawControlsCached>
         )0x0) {
      pFVar14 = ::FName::FName(&local_a0,"STAT_AnimNode_RigLogic_UpdateRawControlsCached");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_AnimNode_RigLogic_UpdateRawControlsCached,*pFVar14,
                 L"STAT_AnimNode_RigLogic_UpdateRawControlsCached","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_AnimNode_RigLogic_UpdateRawControlsCached;
  if (StatPtr_STAT_AnimNode_RigLogic_UpdateRawControlsCached ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateRawControlsCached(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateRawControlsCached>
       )0x0) {
    pFVar14 = ::FName::FName(&local_98,"STAT_AnimNode_RigLogic_UpdateRawControlsCached");
    FVar15 = (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateRawControlsCached(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateRawControlsCached>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AnimNode_RigLogic_UpdateRawControlsCached,*pFVar14,
                          L"STAT_AnimNode_RigLogic_UpdateRawControlsCached","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar15;
  bVar7 = false;
  bVar9 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_b8.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0x144);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b0 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar8 = true;
      goto LAB_14a6874b4;
    }
  }
  bVar8 = false;
  local_b0 = local_90;
LAB_14a6874b4:
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId327,"FAnimNode_RigLogic::UpdateRawControlsCached",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,0x147);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId327);
  }
  uVar12 = (**(code **)((longlong)*(this->RigInstance->RigInstance).Ptr + 0xd0))();
  if (((this->PoseCurvesToRigLogicControlsMap).ArrayNum <= (int)(uint)uVar12) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar19 = (TArray<int,TSizedDefaultAllocator<32>_> *)
            ((this->PoseCurvesToRigLogicControlsMap).AllocatorInstance.Data +
            (ulonglong)uVar12 * 0x20);
  if (pTVar19->ArrayNum != *(int *)&(param_1->Curve).field_0x8) {
    if (((this->LocalDNAIndexMapping).Object == (FDNAIndexMapping *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    CachePoseCurvesToRigLogicControlsMap
              (this,param_1,&((this->LocalDNAIndexMapping).Object)->ControlAttributeCurves,pTVar19);
  }
  dVar10 = __real_3ff0000000000000;
  iVar2 = *(int *)&(param_1->Curve).field_0x8;
  lVar16 = *(longlong *)&param_1->Curve;
  lVar18 = (longlong)iVar2 * 0x10 + lVar16;
  while( true ) {
    if (*(int *)&(param_1->Curve).field_0x8 != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Anim::FCurveElement,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    FVar4 = local_b0;
    if (lVar16 == lVar18) {
      if (bVar20) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar8) && (FVar4 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_80[0].NameAndInfo.Index = FVar4.ComparisonIndex.Value;
          local_80[0].NameAndInfo.Number = FVar4.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_a8);
          local_80[0].StatData.Pad[4] = '\0';
          local_80[0].StatData.Pad[5] = '\0';
          local_80[0].StatData.Pad[6] = '\0';
          local_80[0].StatData.Pad[7] = '\0';
          local_80[0].StatData.Pad[0] = local_a8.s.LowPart._0_1_;
          local_80[0].StatData.Pad[1] = local_a8.s.LowPart._1_1_;
          local_80[0].StatData.Pad[2] = local_a8.s.LowPart._2_1_;
          local_80[0].StatData.Pad[3] = local_a8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,local_80);
          piVar1 = &this_00->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
      FStatsHierarchical::EndMeasurement();
      return;
    }
    uVar13 = 0;
    if ((int)uVar17 < pTVar19->ArrayNum) {
      uVar13 = ~uVar17 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) break;
    iVar3 = *(int *)((pTVar19->AllocatorInstance).Data + (longlong)(int)uVar17 * 4);
    if (iVar3 != -1) {
      pRVar5 = (this->RigInstance->RigInstance).Ptr;
      dVar21 = (double)*(float *)(lVar16 + 8);
      if (dVar10 <= (double)*(float *)(lVar16 + 8)) {
        dVar21 = dVar10;
      }
      if (dVar21 <= 0.0) {
        dVar21 = 0.0;
      }
      (**(code **)((longlong)*pRVar5 + 0x40))(pRVar5,iVar3,(float)dVar21);
    }
    uVar17 = uVar17 + 1;
    lVar16 = lVar16 + 0x10;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// UpdateSparseDriverJointDrivenControlCurves @ 14a687830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_RigLogic::UpdateSparseDriverJointDrivenControlCurves
          (FAnimNode_RigLogic *this,FPoseContext *param_1)

{
  double *pdVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FSharedRigRuntimeContext *pFVar4;
  longlong lVar5;
  RigInstance *pRVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  bool bVar24;
  bool bVar25;
  FScriptContainerElement *pFVar26;
  bool bVar27;
  bool bVar28;
  ushort uVar29;
  uint uVar30;
  uint uVar31;
  FName *pFVar32;
  FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateSparseDriverJointDrivenControlCurves(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateSparseDriverJointDrivenControlCurves>
  FVar33;
  int iVar34;
  FName FVar35;
  uint uVar36;
  longlong lVar37;
  longlong lVar38;
  bool bVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  FColor_u_0 local_res20 [2];
  FName local_140;
  FName local_138;
  FName local_130;
  FScriptContainerElement *local_118;
  double dStack_110;
  FScriptContainerElement *local_108;
  FName local_100;
  FName local_f8 [23];
  
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_RigLogic::UpdateSparseDriverJointDrivenControlCurves");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_UpdateSparseDriverJointDrivenControlCurves ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateSparseDriverJointDrivenControlCurves(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateSparseDriverJointDrivenControlCurves>
         )0x0) {
      pFVar32 = ::FName::FName(&local_100,
                               "STAT_AnimNode_RigLogic_UpdateSparseDriverJointDrivenControlCurves");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_AnimNode_RigLogic_UpdateSparseDriverJointDrivenControlCurves,*pFVar32
                 ,L"STAT_AnimNode_RigLogic_UpdateSparseDriverJointDrivenControlCurves",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar33 = StatPtr_STAT_AnimNode_RigLogic_UpdateSparseDriverJointDrivenControlCurves;
  if (StatPtr_STAT_AnimNode_RigLogic_UpdateSparseDriverJointDrivenControlCurves ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateSparseDriverJointDrivenControlCurves(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateSparseDriverJointDrivenControlCurves>
       )0x0) {
    pFVar32 = ::FName::FName(local_f8,
                             "STAT_AnimNode_RigLogic_UpdateSparseDriverJointDrivenControlCurves");
    FVar33 = (FThreadSafeStaticStat<_private:_void___cdecl_FAnimNode_RigLogic::UpdateSparseDriverJointDrivenControlCurves(FPoseContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_UpdateSparseDriverJointDrivenControlCurves>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AnimNode_RigLogic_UpdateSparseDriverJointDrivenControlCurves
                          ,*pFVar32,
                          L"STAT_AnimNode_RigLogic_UpdateSparseDriverJointDrivenControlCurves",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar35 = *(FName *)FVar33;
  bVar25 = false;
  bVar24 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  bVar39 = false;
  bVar27 = false;
  if ((FVar35.ComparisonIndex.Value.Value != 0) || (FVar35.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar33 + 0x10));
      bVar25 = false;
      bVar24 = true;
      bVar39 = false;
      bVar27 = true;
      if (-1 < CpuChannel->Enabled) {
        local_140.ComparisonIndex.Value = FVar35.ComparisonIndex.Value.Value;
        local_140.Number = FVar35.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_140,(wchar_t *)*(FName *)((longlong)FVar33 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0x161);
        bVar25 = true;
        bVar24 = true;
        bVar39 = true;
        bVar27 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_138 = FVar35;
      FThreadStats::AddMessage(FVar35,CycleScopeStart);
      bVar27 = true;
      goto LAB_14a6879ef;
    }
  }
  bVar25 = bVar39;
  bVar24 = bVar27;
  bVar27 = false;
  local_138 = local_130;
  FVar35 = local_130;
LAB_14a6879ef:
  bVar39 = -1 < CpuChannel->Enabled;
  if (bVar39) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId356,
               "FAnimNode_RigLogic::UpdateSparseDriverJointDrivenControlCurves",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,0x164);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId356);
  }
  uVar29 = (**(code **)((longlong)*(this->RigInstance->RigInstance).Ptr + 0xd0))();
  if (((this->LocalJointMappingsPerLOD).ArrayNum <= (int)(uint)uVar29) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar38 = (ulonglong)uVar29 * 0x38;
  pFVar3 = (this->LocalJointMappingsPerLOD).AllocatorInstance.Data;
  local_118 = pFVar3;
  if (((this->LocalRigRuntimeContext).Object == (FSharedRigRuntimeContext *)0x0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar28)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = (this->LocalRigRuntimeContext).Object;
  local_108 = (pFVar4->InverseNeutralJointRotations).AllocatorInstance.Data;
  iVar2 = (pFVar4->InverseNeutralJointRotations).ArrayNum;
  if ((iVar2 < 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar28)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar26 = local_118;
  iVar34 = *(int *)(pFVar3 + lVar38 + 0x18);
  uVar36 = 0;
  if (0 < iVar34) {
    lVar37 = 0;
    uVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
    uVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
    uVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
    uVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
    uVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
    uVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
    uVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
    uVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
    uVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._0_4_;
    uVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._4_4_;
    uVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._0_4_;
    uVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._4_4_;
    uVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
    uVar56 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
    uVar57 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
    uVar58 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
    uVar59 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._0_4_;
    uVar60 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._4_4_;
    uVar61 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._0_4_;
    uVar62 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._4_4_;
    uVar63 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
    uVar64 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
    uVar65 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
    uVar66 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
    do {
      uVar31 = 0;
      if ((int)uVar36 < iVar34) {
        uVar31 = ~uVar36 >> 0x1f;
      }
      if (uVar31 == 0) {
        bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar28) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar63 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
        uVar64 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
        uVar65 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
        uVar66 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
        uVar59 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._0_4_;
        uVar60 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._4_4_;
        uVar61 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._0_4_;
        uVar62 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._4_4_;
        uVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
        uVar56 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
        uVar57 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
        uVar58 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
        uVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._0_4_;
        uVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._4_4_;
        uVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._0_4_;
        uVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._4_4_;
        uVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
        uVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
        uVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
        uVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
        uVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
        uVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
        uVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
        uVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
      }
      lVar5 = *(longlong *)(pFVar26 + lVar38 + 0x10);
      uVar31 = *(uint *)(lVar37 + lVar5);
      uVar30 = 0;
      if ((int)uVar31 < *(int *)&(param_1->Pose).field_0x8) {
        uVar30 = ~uVar31 >> 0x1f;
      }
      if (uVar30 == 0) {
        bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar28) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar63 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
        uVar64 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
        uVar65 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
        uVar66 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
        uVar59 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._0_4_;
        uVar60 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._4_4_;
        uVar61 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._0_4_;
        uVar62 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._4_4_;
        uVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
        uVar56 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
        uVar57 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
        uVar58 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
        uVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._0_4_;
        uVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._4_4_;
        uVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._0_4_;
        uVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._4_4_;
        uVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
        uVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
        uVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
        uVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
        uVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
        uVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
        uVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
        uVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
      }
      uVar30 = *(uint *)(lVar37 + 4 + lVar5);
      pdVar1 = (double *)((longlong)(int)uVar31 * 0x60 + 0x10 + *(longlong *)&param_1->Pose);
      pFVar3 = (FScriptContainerElement *)*pdVar1;
      dVar17 = pdVar1[1];
      pdVar1 = (double *)((longlong)(int)uVar31 * 0x60 + *(longlong *)&param_1->Pose);
      dVar18 = *pdVar1;
      dVar19 = pdVar1[1];
      uVar31 = 0;
      if ((int)uVar30 < iVar2) {
        uVar31 = ~uVar30 >> 0x1f;
      }
      local_118 = pFVar3;
      dStack_110 = dVar17;
      if (uVar31 == 0) {
        bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar28) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar63 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
        uVar64 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
        uVar65 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
        uVar66 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
        uVar59 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._0_4_;
        uVar60 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._4_4_;
        uVar61 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._0_4_;
        uVar62 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._4_4_;
        uVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
        uVar56 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
        uVar57 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
        uVar58 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
        uVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._0_4_;
        uVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._4_4_;
        uVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._0_4_;
        uVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._4_4_;
        uVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
        uVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
        uVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
        uVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
        uVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
        uVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
        uVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
        uVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
      }
      iVar34 = *(int *)(lVar37 + 8 + lVar5);
      dVar20 = *(double *)(local_108 + (longlong)(int)uVar30 * 0x20);
      dVar21 = *(double *)(local_108 + (longlong)(int)uVar30 * 0x20 + 8);
      dVar22 = *(double *)(local_108 + (longlong)(int)uVar30 * 0x20 + 0x10);
      dVar23 = *(double *)(local_108 + (longlong)(int)uVar30 * 0x20 + 0x10 + 8);
      dVar10 = (double)CONCAT44(uVar50,uVar49);
      dVar8 = (double)CONCAT44(uVar44,uVar43);
      dVar9 = (double)CONCAT44(uVar46,uVar45);
      dVar42 = dStack_110 * dVar21;
      dVar16 = (double)CONCAT44(uVar66,uVar65);
      dVar13 = (double)CONCAT44(uVar58,uVar57);
      dVar40 = (double)local_118 * dVar23;
      dVar41 = dStack_110 * dVar23;
      dVar11 = (double)CONCAT44(uVar52,uVar51);
      dVar12 = (double)CONCAT44(uVar54,uVar53);
      dVar14 = (double)CONCAT44(uVar60,uVar59);
      dVar15 = (double)CONCAT44(uVar62,uVar61);
      if (iVar34 != -1) {
        pRVar6 = (this->RigInstance->RigInstance).Ptr;
        (**(code **)((longlong)*pRVar6 + 0x40))
                  (pRVar6,iVar34,
                   (float)(dVar20 * dVar17 * (double)CONCAT44(uVar48,uVar47) + dVar18 * dVar23 +
                           (double)local_118 * dVar21 * (double)CONCAT44(uVar56,uVar55) +
                          dVar22 * dVar19 * (double)CONCAT44(uVar64,uVar63)));
        uVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
        uVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
        uVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
        uVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
        uVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
        uVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
        uVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
        uVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
        uVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._0_4_;
        uVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._4_4_;
        uVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._0_4_;
        uVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._4_4_;
        uVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
        uVar56 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
        uVar57 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
        uVar58 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
        uVar59 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._0_4_;
        uVar60 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._4_4_;
        uVar61 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._0_4_;
        uVar62 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._4_4_;
        uVar63 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
        uVar64 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
        uVar65 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
        uVar66 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
      }
      iVar34 = *(int *)(lVar37 + 0xc + lVar5);
      if (iVar34 != -1) {
        pRVar6 = (this->RigInstance->RigInstance).Ptr;
        (**(code **)((longlong)*pRVar6 + 0x40))
                  (pRVar6,iVar34,
                   (float)(dVar20 * (double)pFVar3 * dVar10 + dVar19 * dVar23 + dVar42 * dVar13 +
                          dVar22 * dVar18 * dVar16));
        uVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
        uVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
        uVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
        uVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
        uVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
        uVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
        uVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
        uVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
        uVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._0_4_;
        uVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._4_4_;
        uVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._0_4_;
        uVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._4_4_;
        uVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
        uVar56 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
        uVar57 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
        uVar58 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
        uVar59 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._0_4_;
        uVar60 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._4_4_;
        uVar61 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._0_4_;
        uVar62 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._4_4_;
        uVar63 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
        uVar64 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
        uVar65 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
        uVar66 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
      }
      iVar34 = *(int *)(lVar37 + 0x10 + lVar5);
      if (iVar34 != -1) {
        pRVar6 = (this->RigInstance->RigInstance).Ptr;
        (**(code **)((longlong)*pRVar6 + 0x40))
                  (pRVar6,iVar34,
                   (float)(dVar20 * dVar19 * dVar8 + dVar40 + dVar18 * dVar21 * dVar11 +
                          dVar22 * dVar17 * dVar14));
        uVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
        uVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
        uVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
        uVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
        uVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
        uVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
        uVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
        uVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
        uVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._0_4_;
        uVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._4_4_;
        uVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._0_4_;
        uVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._4_4_;
        uVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
        uVar56 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
        uVar57 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
        uVar58 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
        uVar59 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._0_4_;
        uVar60 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._4_4_;
        uVar61 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._0_4_;
        uVar62 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._4_4_;
        uVar63 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
        uVar64 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
        uVar65 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
        uVar66 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
      }
      iVar34 = *(int *)(lVar37 + 0x14 + lVar5);
      if (iVar34 != -1) {
        pRVar6 = (this->RigInstance->RigInstance).Ptr;
        (**(code **)((longlong)*pRVar6 + 0x40))
                  (pRVar6,iVar34,
                   (float)(dVar20 * dVar18 * dVar9 + dVar41 + dVar19 * dVar21 * dVar12 +
                          dVar22 * (double)pFVar3 * dVar15));
        uVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
        uVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
        uVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
        uVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
        uVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
        uVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
        uVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
        uVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
        uVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._0_4_;
        uVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._4_4_;
        uVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._0_4_;
        uVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._4_4_;
        uVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
        uVar56 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
        uVar57 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
        uVar58 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
        uVar59 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._0_4_;
        uVar60 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._4_4_;
        uVar61 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._0_4_;
        uVar62 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._4_4_;
        uVar63 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
        uVar64 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
        uVar65 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
        uVar66 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
      }
      iVar34 = *(int *)(pFVar26 + lVar38 + 0x18);
      uVar36 = uVar36 + 1;
      lVar37 = lVar37 + 0x18;
      FVar35 = local_138;
    } while ((int)uVar36 < iVar34);
  }
  if (bVar39) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar24) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar27) {
    FThreadStats::AddMessage(FVar35,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 14a688110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_RigLogic::Update_AnyThread(FAnimNode_RigLogic *this,FAnimationUpdateContext *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_RigLogic::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_Update_AnyThread>
  FVar6;
  FExposedValueHandler *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  bool bVar11;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_38;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigLogic::Update_AnyThread");
  FVar10.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_RigLogic_Update_AnyThread ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_RigLogic::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_Update_AnyThread>
         )0x0) {
      pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_AnimNode_RigLogic_Update_AnyThread");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimNode_RigLogic_Update_AnyThread,
                 *pFVar5,L"STAT_AnimNode_RigLogic_Update_AnyThread","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar6 = StatPtr_STAT_AnimNode_RigLogic_Update_AnyThread;
  if (StatPtr_STAT_AnimNode_RigLogic_Update_AnyThread ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_RigLogic::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_Update_AnyThread>
       )0x0) {
    pFVar5 = ::FName::FName(local_res18,"STAT_AnimNode_RigLogic_Update_AnyThread");
    FVar6 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_RigLogic::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_AnimNode_RigLogic_Update_AnyThread>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_AnimNode_RigLogic_Update_AnyThread,*pFVar5,
                         L"STAT_AnimNode_RigLogic_Update_AnyThread","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
                   ,0xee);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_14a6882a3;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_14a6882a3:
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId241,"FAnimNode_RigLogic::Update_AnyThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\AnimNode_RigLogic.cpp"
               ,0xf1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId241);
  }
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  FPoseLinkBase::Update((FPoseLinkBase *)&this->AnimSequence,param_1);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_38.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_38);
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

