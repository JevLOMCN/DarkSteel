// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 19

// StaticStruct @ 14dee9e30

UScriptStruct * __cdecl FAnimNode_RetargetPoseFromMesh::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RetargetPoseFromMesh.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FAnimNode_RetargetPoseFromMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh,(UObject *)pUVar1,
                         L"AnimNode_RetargetPoseFromMesh");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_RetargetPoseFromMesh.OuterSingleton;
}

// Initialize_AnyThread @ 14deea350

void __thiscall
FAnimNode_RetargetPoseFromMesh::Initialize_AnyThread
          (FAnimNode_RetargetPoseFromMesh *this,FAnimationInitializeContext *param_1)

{
  FExposedValueHandler *this_00;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RetargetPoseFromMesh::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  if (this->RetargetFrom == SourcePosePin) {
    FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Source,param_1);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// CacheBones_AnyThread @ 14deea3c0

void __thiscall
FAnimNode_RetargetPoseFromMesh::CacheBones_AnyThread
          (FAnimNode_RetargetPoseFromMesh *this,FAnimationCacheBonesContext *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar8;
  ushort uVar9;
  ulonglong uVar10;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RetargetPoseFromMesh::CacheBones_AnyThread");
  FAnimNode_Base::CacheBones_AnyThread((FAnimNode_Base *)this,param_1);
  if (this->RetargetFrom == SourcePosePin) {
    FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Source,param_1);
  }
  pTVar8 = &this->CompactToTargetBoneIndexMap;
  piVar1 = &(this->CompactToTargetBoneIndexMap).ArrayMax;
  (this->CompactToTargetBoneIndexMap).ArrayNum = 0;
  if ((this->CompactToTargetBoneIndexMap).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar8->AllocatorInstance,0,piVar1);
  }
  lVar2 = *(longlong *)param_1;
  if ((*(longlong *)(lVar2 + 0x660) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  plVar3 = *(longlong **)(lVar2 + 0x660);
  if (0 < (int)plVar3[1]) {
    uVar10 = 0;
    if (((int)plVar3[1] < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    do {
      iVar7 = (this->CompactToTargetBoneIndexMap).ArrayNum;
      lVar2 = *plVar3;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar8->AllocatorInstance,piVar1);
      }
      (this->CompactToTargetBoneIndexMap).ArrayNum = iVar7 + 1;
      pFVar4 = (pTVar8->AllocatorInstance).Data;
      *(int *)(pFVar4 + (longlong)iVar7 * 8) = (int)uVar10;
      uVar9 = (short)uVar10 + 1;
      *(uint *)(pFVar4 + (longlong)iVar7 * 8 + 4) = (uint)*(ushort *)(lVar2 + uVar10 * 2);
      uVar10 = (ulonglong)uVar9;
    } while ((int)(uint)uVar9 < (int)plVar3[1]);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 14deea540

void __thiscall
FAnimNode_RetargetPoseFromMesh::Update_AnyThread
          (FAnimNode_RetargetPoseFromMesh *this,FAnimationUpdateContext *param_1)

{
  FExposedValueHandler *this_00;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RetargetPoseFromMesh::Update_AnyThread");
  FAnimNode_Base::Update_AnyThread((FAnimNode_Base *)this,param_1);
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  this->DeltaTime = param_1->DeltaTime + this->DeltaTime;
  if (this->RetargetFrom == SourcePosePin) {
    FPoseLinkBase::Update((FPoseLinkBase *)&this->Source,param_1);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 14deea5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_RetargetPoseFromMesh::Evaluate_AnyThread
          (FAnimNode_RetargetPoseFromMesh *this,FPoseContext *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_IKRetarget> FVar15;
  USkeletalMeshComponent *pUVar16;
  USkeletalMesh *pUVar17;
  FAnimNode_Base *pFVar18;
  UPackage *pUVar19;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar20;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar21;
  FNameEntryId FVar22;
  FScriptContainerElement *pFVar23;
  FName FVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackY_258 [32];
  undefined1 local_1f7 [3];
  uint local_1f4;
  uint local_1f0;
  uint uStack_1ec;
  FColor_u_0 local_1e8 [2];
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  LARGE_INTEGER local_1c0;
  FStatMessage local_1b8;
  FAnimNode_RetargetPoseFromMesh *local_1a8;
  FPoseContext *local_1a0;
  FAnimNode_RetargetPoseFromMesh *local_198;
  FPoseContext *local_190;
  FName local_188;
  LARGE_INTEGER local_180;
  undefined1 local_178 [112];
  void *local_108;
  undefined4 local_100;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  FStatsHierarchical::BeginMeasurement("FAnimNode_RetargetPoseFromMesh::Evaluate_AnyThread");
  FVar15 = StatPtr_STAT_IKRetarget;
  if (StatPtr_STAT_IKRetarget == (FThreadSafeStaticStat<FStat_STAT_IKRetarget>)0x0) {
    pFVar14 = ::FName::FName(&local_188,"STAT_IKRetarget");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_IKRetarget>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IKRetarget,*pFVar14,
                        L"IK Retarget","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar15;
  bVar7 = false;
  bVar9 = false;
  local_1d0.ComparisonIndex.Value = 0;
  local_1d0.Number = 0;
  bVar11 = false;
  bVar12 = false;
  FVar22 = FVar24.ComparisonIndex.Value;
  uVar21 = FVar24.Number;
  if ((FVar22.Value == 0) && (bVar8 = bVar7, bVar10 = bVar9, uVar21 == 0)) {
LAB_14deea73e:
    bVar9 = bVar12;
    bVar7 = bVar11;
    bVar11 = false;
    local_1d8 = local_1d0;
    FVar24 = local_1d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1e8[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar9 = true;
      bVar11 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1e0.ComparisonIndex.Value = FVar22.Value;
        local_1e0.Number = uVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1e0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\AnimNodes\\AnimNode_RetargetPoseFromMesh.cpp"
                   ,0x49);
        bVar7 = true;
        bVar9 = true;
        bVar11 = true;
        bVar12 = true;
      }
    }
    bVar8 = bVar7;
    bVar10 = bVar9;
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14deea73e;
    local_1f0 = FVar22.Value;
    uStack_1ec = uVar21;
    local_1d8 = FVar24;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar11 = true;
  }
  QueryPerformanceCounter(&local_180);
  local_1a8 = this;
  local_1a0 = param_1;
  local_198 = this;
  local_190 = param_1;
  if ((this->IKRetargeterAsset).field0_0x0.DebugPtr != (UIKRetargeter *)0x0) {
    pUVar16 = FAnimInstanceProxy::GetSkelMeshComponent((FAnimInstanceProxy *)param_1->_padding_);
    bVar12 = EnsureProcessorIsInitialized(this,pUVar16);
    if (bVar12) {
      if (this->RetargetFrom == SourcePosePin) {
        pFVar18 = FPoseLinkBase::GetLinkNode((FPoseLinkBase *)&this->Source);
        if (pFVar18 != (FAnimNode_Base *)0x0) {
LAB_14deea7e4:
          bVar12 = FAnimNode_Base::IsLODEnabled
                             ((FAnimNode_Base *)this,(FAnimInstanceProxy *)param_1->_padding_);
          if (bVar12) {
            if (this->RetargetFrom == SourcePosePin) {
              `FAnimNode_RetargetPoseFromMesh::Evaluate_AnyThread'::__l2::<lambda_2>::operator()
                        (&local_1a8);
            }
            local_1f0 = *(uint *)(param_1->_padding_ + 0x670);
            if ((this->LODThresholdForIK == -1) || ((int)local_1f0 <= this->LODThresholdForIK)) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            GetMergedRetargetProfile(this,(FRetargetProfile *)local_178,bVar12);
            iVar2 = (this->Processor).OpStack.ArrayNum;
            pFVar25 = (this->Processor).OpStack.AllocatorInstance.Data;
            pFVar23 = pFVar25 + (longlong)iVar2 * 0x10;
            local_1f4 = CONCAT31(local_1f4._1_3_,1);
            while( true ) {
              if ((this->Processor).OpStack.ArrayNum != iVar2) {
                local_1f7[0] = 0;
                `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_1f7);
              }
              if (pFVar25 == pFVar23) break;
              plVar4 = *(longlong **)(pFVar25 + 8);
              lVar5 = *(longlong *)pFVar25;
              if ((plVar4 == (longlong *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Memory != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                                      ,0xd1,L""), bVar12)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((lVar5 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Struct != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                                      ,0xd2,L""), bVar12)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton ==
                  (UScriptStruct *)0x0) {
                pUVar19 = Z_Construct_UPackage__Script_IKRig();
                Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
                     GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar19,
                                     L"IKRetargetOpBase");
                if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton !=
                    (UScriptStruct *)0x0) goto LAB_14deea911;
LAB_14deea936:
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                                    ,0xd3,L"");
                if (bVar12) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              else {
LAB_14deea911:
                iVar3 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->
                             _padding_;
                if ((*(int *)(lVar5 + 0x38) < iVar3) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8)
                    != &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->
                        _padding_)) {
                  bVar12 = false;
                }
                else {
                  bVar12 = true;
                }
                if (!bVar12) goto LAB_14deea936;
              }
              uVar21 = local_1f4;
              *(char *)((longlong)plVar4 + 0x1c) = (char)local_1f4;
              (**(code **)(*plVar4 + 0x78))(plVar4,param_1);
              if ((char)plVar4[1] != '\0') {
                cVar13 = (**(code **)(*plVar4 + 0x30))(plVar4);
                local_1f4 = uVar21 & 0xff;
                if (cVar13 != '\0') {
                  local_1f4 = 0;
                }
              }
              pFVar25 = pFVar25 + 0x10;
            }
            pTVar20 = FIKRetargetProcessor::RunRetargeter
                                (&this->Processor,&this->PoseToRetargetFromComponentSpace,
                                 (FRetargetProfile *)local_178,this->DeltaTime,local_1f0);
            this->DeltaTime = 0.0;
            `FAnimNode_RetargetPoseFromMesh::Evaluate_AnyThread'::__l2::<lambda_3>::operator()
                      (&local_198,pTVar20);
            FVar24 = local_1d8;
            local_100 = 0;
            if (local_108 != (void *)0x0) {
              FMemory::Free(local_108);
            }
            TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)(local_178 + 0x30));
            DestructItems<FRetargetOpProfile,int>
                      ((FRetargetOpProfile *)local_178._0_8_,local_178._8_4_);
            if ((FRetargetOpProfile *)local_178._0_8_ != (FRetargetOpProfile *)0x0) {
              FMemory::Free((void *)local_178._0_8_);
            }
            goto LAB_14deeaa29;
          }
        }
      }
      else {
        bVar12 = FWeakObjectPtr::IsValid(&(this->SourceMeshComponent).WeakPtr);
        if (bVar12) {
          pUVar16 = (USkeletalMeshComponent *)
                    FWeakObjectPtr::Get(&(this->SourceMeshComponent).WeakPtr);
          pUVar17 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar16);
          if (((pUVar17 != (USkeletalMesh *)0x0) &&
              (iVar2 = (this->PoseToRetargetFromComponentSpace).ArrayNum, iVar2 != 0)) &&
             ((this->Processor).SourceSkeleton.BoneNames.ArrayNum == iVar2)) goto LAB_14deea7e4;
        }
      }
    }
  }
  bVar7 = bVar8;
  bVar9 = bVar10;
  if (param_1->bExpectsAdditivePose == false) {
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
               *(FBoneContainer **)&(param_1->Pose).field_0x10);
  }
  else {
    FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
  }
LAB_14deeaa29:
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1b8.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
      local_1b8.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1c0);
      local_1b8.StatData.Pad[4] = '\0';
      local_1b8.StatData.Pad[5] = '\0';
      local_1b8.StatData.Pad[6] = '\0';
      local_1b8.StatData.Pad[7] = '\0';
      local_1b8.StatData.Pad[0] = local_1c0.s.LowPart._0_1_;
      local_1b8.StatData.Pad[1] = local_1c0.s.LowPart._1_1_;
      local_1b8.StatData.Pad[2] = local_1c0.s.LowPart._2_1_;
      local_1b8.StatData.Pad[3] = local_1c0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_1b8);
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

// HasPreUpdate @ 14deeab40

bool __thiscall FAnimNode_RetargetPoseFromMesh::HasPreUpdate(FAnimNode_RetargetPoseFromMesh *this)

{
  return true;
}

// PreUpdate @ 14deeab60

void __thiscall
FAnimNode_RetargetPoseFromMesh::PreUpdate
          (FAnimNode_RetargetPoseFromMesh *this,UAnimInstance *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  USkeletalMeshComponent *pUVar7;
  UObject *pUVar8;
  UPackage *pUVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FAnimNode_RetargetPoseFromMesh *local_res18 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RetargetPoseFromMesh::PreUpdate");
  local_res18[0] = this;
  pUVar7 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
  if (((this->Processor).bIsInitialized != false) && (this->RetargetFrom != SourcePosePin)) {
    `FAnimNode_RetargetPoseFromMesh::PreUpdate'::__l2::<lambda_1>::operator()(local_res18,pUVar7);
    bVar6 = FWeakObjectPtr::IsValid(&(this->SourceMeshComponent).WeakPtr);
    if ((bVar6) && (pUVar7 != (USkeletalMeshComponent *)0x0)) {
      pUVar8 = FWeakObjectPtr::Get(&(this->SourceMeshComponent).WeakPtr);
      iVar1 = (this->Processor).OpStack.ArrayNum;
      pFVar10 = (this->Processor).OpStack.AllocatorInstance.Data;
      pFVar11 = pFVar10 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((this->Processor).OpStack.ArrayNum != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar10 == pFVar11) break;
        plVar3 = *(longlong **)(pFVar10 + 8);
        lVar4 = *(longlong *)pFVar10;
        if ((plVar3 == (longlong *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Memory != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                               ,0xd1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((lVar4 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Struct != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                               ,0xd2,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar9 = Z_Construct_UPackage__Script_IKRig();
          Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar9,
                               L"IKRetargetOpBase");
          if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton !=
              (UScriptStruct *)0x0) goto LAB_14deeacb7;
LAB_14deeacdb:
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                             ,0xd3,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
LAB_14deeacb7:
          iVar2 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->
                       _padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar2) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
              &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) goto LAB_14deeacdb;
        }
        (**(code **)(*plVar3 + 0x70))(plVar3,pUVar8,pUVar7);
        pFVar10 = pFVar10 + 0x10;
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetLODThreshold @ 14deead50

int __thiscall FAnimNode_RetargetPoseFromMesh::GetLODThreshold(FAnimNode_RetargetPoseFromMesh *this)

{
  return this->LODThreshold;
}

// FAnimNode_RetargetPoseFromMesh @ 14df15aa0

FAnimNode_RetargetPoseFromMesh * __thiscall
FAnimNode_RetargetPoseFromMesh::FAnimNode_RetargetPoseFromMesh(FAnimNode_RetargetPoseFromMesh *this)

{
  undefined8 local_res8;
  
  *(undefined4 *)&(this->Source).field_0x8 = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_RetargetPoseFromMesh__6B_;
  *(undefined8 *)&this->Source = 0;
  (this->Source).field_0xc = 0;
  this->RetargetFrom = ParentSkeletalMeshComponent;
  local_res8 = 0;
  (this->SourceMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SourceMeshComponent).WeakPtr,(FObjectPtr)&local_res8);
  (this->IKRetargeterAsset).field0_0x0.DebugPtr = (UIKRetargeter *)0x0;
  FRetargetProfile::FRetargetProfile(&this->CustomRetargetProfile);
  this->LODThreshold = -1;
  this->LODThresholdForIK = -1;
  this->bSuppressWarnings = false;
  this->bUseAttachedParent_DEPRECATED = true;
  FIKRetargetProcessor::FIKRetargetProcessor(&this->Processor);
  (this->PoseToRetargetFromComponentSpace).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseToRetargetFromComponentSpace).ArrayNum = 0;
  (this->PoseToRetargetFromComponentSpace).ArrayMax = 0;
  (this->InputLocalTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputLocalTransforms).ArrayNum = 0;
  (this->InputLocalTransforms).ArrayMax = 0;
  (this->CompactToTargetBoneIndexMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompactToTargetBoneIndexMap).ArrayNum = 0;
  (this->CompactToTargetBoneIndexMap).ArrayMax = 0;
  this->bSearchedForParentComponent = false;
  return this;
}

// ~FAnimNode_RetargetPoseFromMesh @ 14df1b830

void __thiscall
FAnimNode_RetargetPoseFromMesh::~FAnimNode_RetargetPoseFromMesh
          (FAnimNode_RetargetPoseFromMesh *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->CompactToTargetBoneIndexMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputLocalTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PoseToRetargetFromComponentSpace).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FIKRetargetProcessor::~FIKRetargetProcessor(&this->Processor);
  *(undefined4 *)&(this->CustomRetargetProfile).ChainSettings.field_0x48 = 0;
  pvVar2 = *(void **)&(this->CustomRetargetProfile).ChainSettings.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CustomRetargetProfile).ChainSettings);
  DestructItems<FRetargetOpProfile,int>
            ((FRetargetOpProfile *)
             (this->CustomRetargetProfile).RetargetOpProfiles.AllocatorInstance.Data,
             (this->CustomRetargetProfile).RetargetOpProfiles.ArrayNum);
  pFVar1 = (this->CustomRetargetProfile).RetargetOpProfiles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// operator() @ 14df1fc00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FAnimNode_RetargetPoseFromMesh::PreUpdate'::__l2::<lambda_1>::operator()
          (void *this,USkeletalMeshComponent *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  USkeletalMeshComponent *this_00;
  UObject *pUVar7;
  USkeletalMeshComponent *pUVar8;
  UClass *pUVar9;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  
  if ((*(char *)(*(longlong *)this + 0x20) != '\x02') &&
     (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)this + 0x24)), bVar6)) {
    this_00 = (USkeletalMeshComponent *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x24));
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x24));
    pUVar8 = (USkeletalMeshComponent *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar7[0x24].field_0x10);
    if (pUVar8 != (USkeletalMeshComponent *)0x0) {
      pUVar9 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar1 = (int)pUVar9->_padding_;
      if ((iVar1 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar9->_padding_)) {
        this_00 = pUVar8;
      }
    }
    if ((this_00->_padding_ & 1) != 0) {
      bVar6 = USkinnedMeshComponent::ShouldUseUpdateRateOptimizations
                        ((USkinnedMeshComponent *)this_00);
      if (((bVar6) && (this_00->_padding_ != 0)) &&
         (pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x24)),
         *(longlong *)(pUVar7 + 0x3b) == param_1->_padding_)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if ((*(char *)((longlong)&this_00->_padding_ + 2) < '\0') &&
         ((this_00->_padding_ & 0x2000000) != 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      pTVar10 = USkeletalMeshComponent::GetCachedComponentSpaceTransforms(this_00);
      lVar2 = *(longlong *)this;
      iVar1 = pTVar10->ArrayNum;
      lVar11 = (&this_00->_padding_)[(longlong)(int)this_00->_padding_ * 2];
      *(undefined4 *)(lVar2 + 0x350) = 0;
      if (*(int *)(lVar2 + 0x354) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,0,(ForAnyElementType *)(lVar2 + 0x348),0,(int *)(lVar2 + 0x354));
      }
      if (((!bVar6) && (!bVar3)) || (iVar1 != (int)lVar11)) {
        pTVar10 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                  (&this_00->_padding_ + (longlong)(int)this_00->_padding_ * 2);
      }
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::
      Append<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
                ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)this + 0x348),pTVar10);
      lVar2 = *(longlong *)this;
      iVar1 = *(int *)(lVar2 + 0x350);
      lVar11 = *(longlong *)(lVar2 + 0x348);
      lVar12 = (longlong)iVar1 * 0x60 + lVar11;
      while( true ) {
        if (*(int *)(lVar2 + 0x350) != iVar1) {
          `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        if (lVar11 == lVar12) break;
        *(double *)(lVar11 + 0x40) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        *(undefined8 *)(lVar11 + 0x48) = uVar4;
        *(undefined8 *)(lVar11 + 0x50) = uVar5;
        *(undefined8 *)(lVar11 + 0x58) = 0;
        lVar11 = lVar11 + 0x60;
      }
      FIKRetargetProcessor::ApplySourceScaleToPose
                ((FIKRetargetProcessor *)(*(longlong *)this + 0x170),
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)this + 0x348));
    }
  }
  return;
}

// operator() @ 14df20220

void __thiscall
`FAnimNode_RetargetPoseFromMesh::Evaluate_AnyThread'::__l2::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *_Src;
  longlong lVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  USkeletalMesh *pUVar17;
  FReferenceSkeleton *pFVar18;
  FAnimNode_Base *pFVar19;
  longlong lVar20;
  longlong lVar21;
  ForAnyElementType *pFVar22;
  uint *puVar23;
  undefined1 local_res8 [8];
  FReferenceSkeleton *local_res10;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar7 = **(longlong **)((longlong)this + 8);
  if ((*(longlong *)(lVar7 + 0x158) == 0) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2821110184175206020>,true,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                          ,0x17c,"SkeletalMeshComponent"), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar17 = USkeletalMeshComponent::GetSkeletalMeshAsset
                      (*(USkeletalMeshComponent **)(lVar7 + 0x158));
  pFVar18 = (FReferenceSkeleton *)(**(code **)(pUVar17->_padding_ + 0x318))(pUVar17);
  lVar7 = *(longlong *)this;
  uVar16 = (pFVar18->FinalRefBonePose).ArrayNum;
  local_res10 = pFVar18;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  *(undefined4 *)(lVar7 + 0x360) = 0;
  if (*(int *)(lVar7 + 0x364) < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar16,(ForAnyElementType *)(lVar7 + 0x358),0,(int *)(lVar7 + 0x364));
  }
  lVar7 = *(longlong *)this;
  pFVar22 = (ForAnyElementType *)(lVar7 + 0x358);
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)pFVar22 !=
      &pFVar18->FinalRefBonePose) {
    iVar5 = (pFVar18->FinalRefBonePose).ArrayNum;
    piVar1 = (int *)(lVar7 + 0x364);
    _Src = (pFVar18->FinalRefBonePose).AllocatorInstance.Data;
    *(int *)(lVar7 + 0x360) = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      pFVar18 = local_res10;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar5,*piVar1,pFVar22,iVar5,piVar1);
      pFVar18 = local_res10;
      if (iVar5 != 0) {
        memcpy(pFVar22->Data,_Src,(longlong)iVar5 * 0x60);
        pFVar18 = local_res10;
      }
    }
  }
  pFVar19 = FPoseLinkBase::GetLinkNode((FPoseLinkBase *)(*(longlong *)this + 0x10));
  if (pFVar19 != (FAnimNode_Base *)0x0) {
    FPoseLink::Evaluate((FPoseLink *)(*(longlong *)this + 0x10),
                        *(FPoseContext **)((longlong)this + 8));
    lVar7 = *(longlong *)this;
    puVar23 = *(uint **)(lVar7 + 0x368);
    iVar5 = *(int *)(lVar7 + 0x370);
    puVar2 = puVar23 + (longlong)iVar5 * 2;
    while( true ) {
      if (*(int *)(lVar7 + 0x370) != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TTuple<int,int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      pFVar18 = local_res10;
      if (puVar23 == puVar2) break;
      uVar16 = *puVar23;
      if ((-1 < (int)uVar16) &&
         (lVar8 = *(longlong *)((longlong)this + 8), (int)uVar16 < *(int *)(lVar8 + 0x28))) {
        uVar6 = puVar23[1];
        uVar15 = 0;
        if ((int)uVar16 < *(int *)(lVar8 + 0x28)) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar8 = *(longlong *)(lVar8 + 0x20);
        lVar21 = *(longlong *)this;
        lVar20 = (longlong)(int)uVar16 * 0x60;
        puVar4 = (undefined8 *)(lVar20 + 0x10 + lVar8);
        local_88 = *puVar4;
        uStack_80 = puVar4[1];
        puVar4 = (undefined8 *)(lVar20 + 0x20 + lVar8);
        local_78 = *puVar4;
        uStack_70 = puVar4[1];
        puVar3 = (undefined4 *)(lVar20 + lVar8);
        uVar10 = *puVar3;
        uVar11 = puVar3[1];
        uVar12 = puVar3[2];
        uVar13 = puVar3[3];
        puVar4 = (undefined8 *)(lVar20 + 0x30 + lVar8);
        local_68 = *puVar4;
        uStack_60 = puVar4[1];
        puVar4 = (undefined8 *)(lVar20 + 0x50 + lVar8);
        local_48 = *puVar4;
        uStack_40 = puVar4[1];
        puVar4 = (undefined8 *)(lVar20 + 0x40 + lVar8);
        local_58 = *puVar4;
        uStack_50 = puVar4[1];
        uVar16 = 0;
        if ((int)uVar6 < *(int *)(lVar21 + 0x360)) {
          uVar16 = ~uVar6 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar8 = *(longlong *)(lVar21 + 0x358);
        lVar21 = (longlong)(int)uVar6 * 0x60;
        puVar3 = (undefined4 *)(lVar21 + lVar8);
        *puVar3 = uVar10;
        puVar3[1] = uVar11;
        puVar3[2] = uVar12;
        puVar3[3] = uVar13;
        puVar4 = (undefined8 *)(lVar21 + 0x10 + lVar8);
        *puVar4 = local_88;
        puVar4[1] = uStack_80;
        puVar4 = (undefined8 *)(lVar21 + 0x20 + lVar8);
        *puVar4 = local_78;
        puVar4[1] = uStack_70;
        puVar4 = (undefined8 *)(lVar21 + 0x30 + lVar8);
        *puVar4 = local_68;
        puVar4[1] = uStack_60;
        puVar4 = (undefined8 *)(lVar21 + 0x40 + lVar8);
        *puVar4 = local_58;
        puVar4[1] = uStack_50;
        puVar4 = (undefined8 *)(lVar21 + 0x50 + lVar8);
        *puVar4 = local_48;
        puVar4[1] = uStack_40;
      }
      puVar23 = puVar23 + 2;
    }
  }
  lVar7 = *(longlong *)this;
  local_98.DataPtr = *(TTransform<double> **)(lVar7 + 0x358);
  iVar5 = *(int *)(lVar7 + 0x360);
  if ((iVar5 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_98.ArrayNum = iVar5;
  FAnimationRuntime::FillUpComponentSpaceTransforms
            (pFVar18,&local_98,
             (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(lVar7 + 0x348));
  FIKRetargetProcessor::ApplySourceScaleToPose
            ((FIKRetargetProcessor *)(*(longlong *)this + 0x170),
             (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 0x348));
  return;
}

// operator() @ 14df205f0

void __thiscall
`FAnimNode_RetargetPoseFromMesh::Evaluate_AnyThread'::__l2::<lambda_3>::operator()
          (void *this,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  USkeletalMesh *pUVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  uint *puVar26;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FCSPose<FCompactPose> local_e8 [2];
  
  local_e8[0].Pose._0_8_ = 0;
  local_e8[0].Pose._8_8_ = 0;
  local_e8[0].Pose._16_8_ = 0;
  local_e8[0].ComponentSpaceFlags._0_8_ = 0;
  local_e8[0].ComponentSpaceFlags._8_8_ = 0;
  local_e8[0].BoneMask._0_8_ = 0;
  local_e8[0].BoneMask._8_8_ = 0;
  local_e8[0].BonesToConvert.AllocatorInstance.Data = (FCompactPoseBoneIndex *)0x0;
  local_e8[0].BonesToConvert.ArrayNum = 0;
  local_e8[0].BonesToConvert.ArrayMax = 0;
  FCSPose<FCompactPose>::InitPose
            (local_e8,(FCompactPose *)(*(longlong *)((longlong)this + 8) + 0x20));
  lVar6 = *(longlong *)this;
  puVar26 = *(uint **)(lVar6 + 0x368);
  iVar4 = *(int *)(lVar6 + 0x370);
  puVar1 = puVar26 + (longlong)iVar4 * 2;
  while( true ) {
    if (*(int *)(lVar6 + 0x370) != iVar4) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TTuple<int,int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (puVar26 == puVar1) break;
    uVar5 = *puVar26;
    if ((-1 < (int)uVar5) && ((int)uVar5 < (int)local_e8[0].Pose._8_4_)) {
      uVar21 = puVar26[1];
      uVar20 = 0;
      if ((int)uVar21 < param_1->ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if (uVar20 == 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar24 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x60;
      if ((int)local_e8[0].Pose._8_4_ <= (int)uVar5) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pose.IsValidIndex(BoneIndex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                            ,599,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      uVar3 = *(undefined8 *)pFVar24;
      uVar8 = *(undefined8 *)(pFVar24 + 8);
      uVar9 = *(undefined8 *)(pFVar24 + 0x10);
      uVar10 = *(undefined8 *)(pFVar24 + 0x18);
      uVar11 = *(undefined8 *)(pFVar24 + 0x20);
      uVar12 = *(undefined8 *)(pFVar24 + 0x28);
      uVar13 = *(undefined8 *)(pFVar24 + 0x30);
      uVar14 = *(undefined8 *)(pFVar24 + 0x38);
      uVar15 = *(undefined8 *)(pFVar24 + 0x40);
      uVar16 = *(undefined8 *)(pFVar24 + 0x48);
      uVar17 = *(undefined8 *)(pFVar24 + 0x50);
      uVar18 = *(undefined8 *)(pFVar24 + 0x58);
      uVar21 = 0;
      if ((int)uVar5 < (int)local_e8[0].Pose._8_4_) {
        uVar21 = ~uVar5 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      lVar23 = (longlong)(int)uVar5 * 0x60;
      *(undefined8 *)(lVar23 + local_e8[0].Pose._0_8_) = uVar3;
      ((undefined8 *)(lVar23 + local_e8[0].Pose._0_8_))[1] = uVar8;
      puVar2 = (undefined8 *)(lVar23 + 0x10 + local_e8[0].Pose._0_8_);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      puVar2 = (undefined8 *)(lVar23 + 0x20 + local_e8[0].Pose._0_8_);
      *puVar2 = uVar11;
      puVar2[1] = uVar12;
      puVar2 = (undefined8 *)(lVar23 + 0x30 + local_e8[0].Pose._0_8_);
      *puVar2 = uVar13;
      puVar2[1] = uVar14;
      puVar2 = (undefined8 *)(lVar23 + 0x40 + local_e8[0].Pose._0_8_);
      *puVar2 = uVar15;
      puVar2[1] = uVar16;
      puVar2 = (undefined8 *)(lVar23 + 0x50 + local_e8[0].Pose._0_8_);
      *puVar2 = uVar17;
      puVar2[1] = uVar18;
      uVar21 = 0;
      if ((int)uVar5 < (int)local_e8[0].ComponentSpaceFlags._8_4_) {
        uVar21 = ~uVar5 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      *(undefined1 *)((longlong)(int)uVar5 + local_e8[0].ComponentSpaceFlags._0_8_) = 1;
    }
    puVar26 = puVar26 + 2;
  }
  FCSPose<FCompactPose>::ConvertComponentPosesToLocalPoses
            (local_e8,(FCompactPose *)(*(longlong *)((longlong)this + 8) + 0x20));
  lVar6 = **(longlong **)((longlong)this + 8);
  if (*(longlong *)(lVar6 + 0x158) == 0) {
    bVar19 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2821110184175206020>,true,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                        ,0x17c,"SkeletalMeshComponent");
    if (bVar19) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar22 = USkeletalMeshComponent::GetSkeletalMeshAsset
                      (*(USkeletalMeshComponent **)(lVar6 + 0x158));
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar22 != (USkeletalMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar22);
  }
  lVar23 = (**(code **)(pUVar22->_padding_ + 800))(pUVar22);
  lVar6 = *(longlong *)this;
  puVar26 = *(uint **)(lVar6 + 0x368);
  iVar4 = *(int *)(lVar6 + 0x370);
  puVar1 = puVar26 + (longlong)iVar4 * 2;
  while( true ) {
    if (*(int *)(lVar6 + 0x370) != iVar4) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TTuple<int,int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (puVar26 == puVar1) break;
    uVar5 = *puVar26;
    if ((-1 < (int)uVar5) &&
       (lVar25 = *(longlong *)((longlong)this + 8), (int)uVar5 < *(int *)(lVar25 + 0x28))) {
      uVar21 = 0;
      if ((int)uVar5 < *(int *)(lVar25 + 0x28)) {
        uVar21 = ~uVar5 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      lVar25 = (longlong)(int)uVar5 * 0x60 + *(longlong *)(lVar25 + 0x20);
      uVar5 = puVar26[1];
      uVar21 = 0;
      if ((int)uVar5 < *(int *)(lVar23 + 0x38)) {
        uVar21 = ~uVar5 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      uVar3 = *(undefined8 *)((longlong)(int)uVar5 * 0x60 + 0x50 + *(longlong *)(lVar23 + 0x30));
      puVar2 = (undefined8 *)((longlong)(int)uVar5 * 0x60 + 0x40 + *(longlong *)(lVar23 + 0x30));
      uVar8 = puVar2[1];
      *(undefined8 *)(lVar25 + 0x40) = *puVar2;
      *(undefined8 *)(lVar25 + 0x48) = uVar8;
      *(undefined8 *)(lVar25 + 0x50) = uVar3;
      *(undefined8 *)(lVar25 + 0x58) = 0;
    }
    puVar26 = puVar26 + 2;
  }
  return;
}

// EnsureProcessorIsInitialized @ 14df30c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FAnimNode_RetargetPoseFromMesh::EnsureProcessorIsInitialized
          (FAnimNode_RetargetPoseFromMesh *this,USkeletalMeshComponent *param_1)

{
  ERetargetSourceMode EVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  USkeletalMesh *pUVar8;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar9;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [8];
  UObject *local_160;
  undefined1 local_158 [112];
  void *local_e8;
  undefined4 local_e0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_1 == (USkeletalMeshComponent *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3034414044099378870>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\AnimNodes\\AnimNode_RetargetPoseFromMesh.cpp"
                       ,0x14a,"TargetMeshComponent");
    if (!bVar5) {
      return false;
    }
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((this->IKRetargeterAsset).field0_0x0.DebugPtr == (UIKRetargeter *)0x0) {
    return false;
  }
  if ((this->RetargetFrom == ParentSkeletalMeshComponent) &&
     (this->bSearchedForParentComponent == false)) {
    this->bSearchedForParentComponent = true;
    (this->SourceMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
    for (pUVar3 = (UObject *)param_1->_padding_; pUVar3 != (UObject *)0x0;
        pUVar3 = *(UObject **)&pUVar3[5].field_0x8) {
      pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar2) ||
         (local_160 = pUVar3,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
         &pUVar7->_padding_)) {
        local_160 = (UObject *)0x0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_160 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_160);
      }
      FWeakObjectPtr::operator=(&(this->SourceMeshComponent).WeakPtr,(FObjectPtr)&local_160);
      bVar5 = FWeakObjectPtr::IsValid(&(this->SourceMeshComponent).WeakPtr);
      if (bVar5) break;
    }
  }
  else {
    this->bSearchedForParentComponent = false;
  }
  EVar1 = this->RetargetFrom;
  if ((EVar1 == SourcePosePin) ||
     (bVar5 = FWeakObjectPtr::IsValid(&(this->SourceMeshComponent).WeakPtr), bVar5)) {
LAB_14df30dbe:
    pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
    pUVar8 = pUVar9;
    if (EVar1 == SourcePosePin) goto LAB_14df30de0;
  }
  else {
    bVar5 = FWeakObjectPtr::IsValid(&(this->SourceMeshComponent).WeakPtr);
    if (!bVar5) {
      return false;
    }
    bVar5 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::
            UEOpEquals<USkeletalMeshComponent,bool>(&this->SourceMeshComponent,param_1);
    if (!bVar5) goto LAB_14df30dbe;
    bVar5 = `FAnimNode_RetargetPoseFromMesh::EnsureProcessorIsInitialized'::__l25::<lambda_1>::
            operator()(local_168);
    if (!bVar5) {
      return false;
    }
    pUVar8 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
  }
  this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&(this->SourceMeshComponent).WeakPtr);
  pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
LAB_14df30de0:
  if ((pUVar9 != (USkeletalMesh *)0x0) && (pUVar8 != (USkeletalMesh *)0x0)) {
    bVar5 = FIKRetargetProcessor::WasInitializedWithTheseAssets
                      (&this->Processor,pUVar9,pUVar8,(this->IKRetargeterAsset).field0_0x0.DebugPtr)
    ;
    if (!bVar5) {
      GetMergedRetargetProfile(this,(FRetargetProfile *)local_158,false);
      FIKRetargetProcessor::Initialize
                (&this->Processor,pUVar9,pUVar8,(this->IKRetargeterAsset).field0_0x0.DebugPtr,
                 (FRetargetProfile *)local_158,false);
      local_e0 = 0;
      if (local_e8 != (void *)0x0) {
        FMemory::Free(local_e8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_158 + 0x30));
      DestructItems<FRetargetOpProfile,int>((FRetargetOpProfile *)local_158._0_8_,local_158._8_4_);
      if ((FRetargetOpProfile *)local_158._0_8_ != (FRetargetOpProfile *)0x0) {
        FMemory::Free((void *)local_158._0_8_);
      }
    }
    return (this->Processor).bIsInitialized;
  }
  return false;
}

// GetMergedRetargetProfile @ 14df396a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRetargetProfile * __thiscall
FAnimNode_RetargetPoseFromMesh::GetMergedRetargetProfile
          (FAnimNode_RetargetPoseFromMesh *this,FRetargetProfile *__return_storage_ptr__,
          bool param_1)

{
  undefined1 auStack_178 [32];
  undefined1 local_158 [112];
  void *local_e8;
  undefined4 local_e0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  FRetargetProfile::FRetargetProfile((FRetargetProfile *)local_158);
  FRetargetProfile::FillProfileWithAssetSettings
            ((FRetargetProfile *)local_158,(this->IKRetargeterAsset).field0_0x0.DebugPtr);
  FRetargetProfile::MergeWithOtherProfile
            ((FRetargetProfile *)local_158,&this->CustomRetargetProfile);
  local_158[0x28] = param_1;
  FRetargetProfile::FRetargetProfile(__return_storage_ptr__,(FRetargetProfile *)local_158);
  local_e0 = 0;
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_158 + 0x30));
  DestructItems<FRetargetOpProfile,int>((FRetargetOpProfile *)local_158._0_8_,local_158._8_4_);
  if ((FRetargetOpProfile *)local_158._0_8_ != (FRetargetOpProfile *)0x0) {
    FMemory::Free((void *)local_158._0_8_);
  }
  return __return_storage_ptr__;
}

// GetRetargetProcessor @ 14df3edb0

FIKRetargetProcessor * __thiscall
FAnimNode_RetargetPoseFromMesh::GetRetargetProcessor(FAnimNode_RetargetPoseFromMesh *this)

{
  return &this->Processor;
}

// PostSerialize @ 14df4cc20

void __thiscall
FAnimNode_RetargetPoseFromMesh::PostSerialize
          (FAnimNode_RetargetPoseFromMesh *this,FArchive *param_1)

{
  return;
}

// Serialize @ 14df535c0

bool __thiscall
FAnimNode_RetargetPoseFromMesh::Serialize(FAnimNode_RetargetPoseFromMesh *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  return false;
}

// operator() @ 150591780

bool __thiscall
`FAnimNode_RetargetPoseFromMesh::EnsureProcessorIsInitialized'::__l25::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3034414044099378829>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3034414044099378829>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

