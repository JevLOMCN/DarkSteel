// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 9

// StaticStruct @ 1463d4d30

UScriptStruct * __cdecl FAnimNode_BlendSpaceGraphBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpaceGraphBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpaceGraphBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase,(UObject *)pUVar1,
                         L"AnimNode_BlendSpaceGraphBase");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpaceGraphBase.OuterSingleton;
}

// Initialize_AnyThread @ 1463d8520

void __thiscall
FAnimNode_BlendSpaceGraphBase::Initialize_AnyThread
          (FAnimNode_BlendSpaceGraphBase *this,FAnimationInitializeContext *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FPoseLinkBase *this_00;
  FPoseLinkBase *pFVar5;
  undefined1 local_res8 [8];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendSpaceGraphBase::Initialize_AnyThread");
  if ((this->BlendSpace).field0_0x0.DebugPtr == (UBlendSpace *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlendSpace != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_BlendSpaceGraphBase.cpp"
                       ,0x13,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  DestructItems<FBlendSampleData,int>
            ((FBlendSampleData *)(this->BlendSampleDataCache).AllocatorInstance.Data,
             (this->BlendSampleDataCache).ArrayNum);
  piVar1 = &(this->BlendSampleDataCache).ArrayMax;
  (this->BlendSampleDataCache).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,&(this->BlendSampleDataCache).AllocatorInstance,0,piVar1);
  }
  UBlendSpace::InitializeFilter((this->BlendSpace).field0_0x0.DebugPtr,&this->BlendFilter,2);
  iVar2 = (this->SamplePoseLinks).ArrayNum;
  this_00 = (FPoseLinkBase *)(this->SamplePoseLinks).AllocatorInstance.Data;
  pFVar5 = this_00 + iVar2;
  while( true ) {
    if ((this->SamplePoseLinks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPoseLink,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar5) break;
    FPoseLinkBase::Initialize(this_00,param_1);
    this_00 = this_00 + 1;
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// CacheBones_AnyThread @ 1463d8620

void __thiscall
FAnimNode_BlendSpaceGraphBase::CacheBones_AnyThread
          (FAnimNode_BlendSpaceGraphBase *this,FAnimationCacheBonesContext *param_1)

{
  int iVar1;
  FPoseLinkBase *this_00;
  FPoseLinkBase *pFVar2;
  undefined1 local_res8 [8];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendSpaceGraphBase::CacheBones_AnyThread");
  iVar1 = (this->SamplePoseLinks).ArrayNum;
  this_00 = (FPoseLinkBase *)(this->SamplePoseLinks).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->SamplePoseLinks).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPoseLink,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar2) break;
    FPoseLinkBase::CacheBones(this_00,param_1);
    this_00 = this_00 + 1;
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 1463d86a0

void __thiscall
FAnimNode_BlendSpaceGraphBase::Update_AnyThread
          (FAnimNode_BlendSpaceGraphBase *this,FAnimationUpdateContext *param_1)

{
  FExposedValueHandler *this_00;
  TOptionalScopedGraphMessage<UE::Anim::FAnimSyncGroupScope> local_28;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendSpaceGraphBase::Update_AnyThread");
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  UE::Anim::TOptionalScopedGraphMessage<UE::Anim::FAnimSyncGroupScope>::
  TOptionalScopedGraphMessage<UE::Anim::FAnimSyncGroupScope><FAnimationUpdateContext_const_&,FName_&,TEnumAsByte<enum_EAnimGroupRole::Type>_&>
            (&local_28,this->GroupName != (FName)0x0,(FAnimationBaseContext *)param_1,param_1,
             &this->GroupName,&this->GroupRole);
  UpdateInternal(this,param_1);
  if (local_28.bCondition != false) {
    UE::Anim::FScopedGraphMessage::PopMessage((FScopedGraphMessage *)&local_28);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 1463d8730

void __thiscall
FAnimNode_BlendSpaceGraphBase::Evaluate_AnyThread
          (FAnimNode_BlendSpaceGraphBase *this,FPoseContext *param_1)

{
  int iVar1;
  UBlendSpace *this_00;
  FPoseLink *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_6c;
  TArrayView<FPoseLink,int> local_68;
  FAnimExtractContext local_58;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendSpaceGraphBase::Evaluate_AnyThread");
  if ((this->BlendSpace).field0_0x0.DebugPtr == (UBlendSpace *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlendSpace != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_BlendSpaceGraphBase.cpp"
                       ,0x5f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = (this->SamplePoseLinks).ArrayNum;
  this_00 = (this->BlendSpace).field0_0x0.DebugPtr;
  local_58.bExtractRootMotion = false;
  local_58.DeltaTimeRecord.bPreviousIsValid = false;
  local_58.DeltaTimeRecord._9_3_ = 0;
  local_58.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.PoseCurves.ArrayNum = 0;
  local_58.PoseCurves.ArrayMax = 0;
  local_58.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.BonesRequired.ArrayNum = 0;
  local_58.BonesRequired.ArrayMax = 0;
  local_58.InterpolationOverride.bIsSet = false;
  pFVar2 = (FPoseLink *)(this->SamplePoseLinks).AllocatorInstance.Data;
  local_58.CurrentTime = 0.0;
  local_58.DeltaTimeRecord.Delta = 0.0;
  local_58.DeltaTimeRecord.Previous = 0.0;
  local_58.bLooping = false;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_68._12_4_ = uStack_6c;
  local_68.ArrayNum = iVar1;
  local_68.DataPtr = pFVar2;
  UBlendSpace::GetAnimationPose(this_00,&this->BlendSampleDataCache,&local_68,&local_58,param_1);
  if (local_58.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.BonesRequired.AllocatorInstance.Data);
  }
  if (local_58.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.PoseCurves.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 1463d88a0

void __thiscall
FAnimNode_BlendSpaceGraphBase::GatherDebugData
          (FAnimNode_BlendSpaceGraphBase *this,FNodeDebugData *param_1)

{
  UBlendSpace *pUVar1;
  ForAnyElementType _Src;
  UPackage *pUVar2;
  int iVar3;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendSpaceGraphBase::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpaceGraphBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpaceGraphBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase,(UObject *)pUVar2,
                         L"AnimNode_BlendSpaceGraphBase");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpaceGraphBase.
                      OuterSingleton)->_padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(&local_48,L"%s<W:%.1f%%> %s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  pUVar1 = (this->BlendSpace).field0_0x0.DebugPtr;
  if (pUVar1 != (UBlendSpace *)0x0) {
    local_res8 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_res8,local_38);
    ::FString::PrintfImpl(&local_58,L"(\'%s\')");
    iVar3 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar3);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    FNodeDebugData::AddDebugItem(param_1,&local_58,true);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// operator= @ 14640b2e0

FAnimNode_BlendSpaceGraphBase * __thiscall
FAnimNode_BlendSpaceGraphBase::operator=
          (FAnimNode_BlendSpaceGraphBase *this,FAnimNode_BlendSpaceGraphBase *param_1)

{
  UBlendSpace *pUVar1;
  
  this->_padding_ = param_1->_padding_;
  this->X = param_1->X;
  this->Y = param_1->Y;
  this->GroupName = param_1->GroupName;
  (this->GroupRole).Value = (param_1->GroupRole).Value;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->BlendSpace).field0_0x0.DebugPtr, pUVar1 != (UBlendSpace *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->BlendSpace).field0_0x0 = (param_1->BlendSpace).field0_0x0;
  TArray<FPoseLink,TSizedDefaultAllocator<32>_>::operator=
            (&this->SamplePoseLinks,&param_1->SamplePoseLinks);
  FBlendFilter::operator=(&this->BlendFilter,&param_1->BlendFilter);
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_>::operator=
            (&this->BlendSampleDataCache,&param_1->BlendSampleDataCache);
  this->CachedTriangulationIndex = param_1->CachedTriangulationIndex;
  return this;
}

// SnapToPosition @ 14646ba60

void __thiscall
FAnimNode_BlendSpaceGraphBase::SnapToPosition
          (FAnimNode_BlendSpaceGraphBase *this,TVector<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  iVar4 = 3;
  if ((this->BlendFilter).FilterPerAxis.ArrayNum < 3) {
    iVar4 = (this->BlendFilter).FilterPerAxis.ArrayNum;
  }
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->BlendFilter).FilterPerAxis.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->BlendFilter).FilterPerAxis.AllocatorInstance.Data;
      if ((2 < uVar6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7ab,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FFIRFilterTimeBased::SetToValue
                ((FFIRFilterTimeBased *)(pFVar1 + (longlong)(int)uVar6 * 0x38),
                 (float)(param_1->field0_0x0).XYZ[lVar7]);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar4);
  }
  return;
}

// UpdateInternal @ 146473dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_BlendSpaceGraphBase::UpdateInternal
          (FAnimNode_BlendSpaceGraphBase *this,FAnimationUpdateContext *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ulong64 uVar12;
  FBlendFilter *pFVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ForAnyElementType FVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  DWORD DVar20;
  undefined1 auStackY_158 [32];
  LARGE_INTEGER local_128;
  FName local_120;
  FString local_118;
  TVector<double>_u_0 local_108;
  FAnimationUpdateContext local_f0;
  TVector<double> local_c0;
  undefined8 *local_a8;
  longlong local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (((this->BlendSpace).field0_0x0.DebugPtr == (UBlendSpace *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlendSpace != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_BlendSpaceGraphBase.cpp"
                         ,0x2c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar3 = this->X;
  uVar4 = this->Y;
  fVar1 = param_1->DeltaTime;
  local_108._8_4_ = SUB84((double)(float)uVar4,0);
  local_108._0_8_ = (double)(float)uVar3;
  local_108._12_4_ = (int)((ulonglong)(double)(float)uVar4 >> 0x20);
  local_108._s_0.Z = 0.0;
  UBlendSpace::FilterInput
            ((this->BlendSpace).field0_0x0.DebugPtr,&local_c0,&this->BlendFilter,
             (TVector<double> *)&local_108._s_0,fVar1);
  UBlendSpace::UpdateBlendSamples
            ((this->BlendSpace).field0_0x0.DebugPtr,&local_c0,fVar1,&this->BlendSampleDataCache,
             &this->CachedTriangulationIndex);
  uVar15 = 0;
  if (0 < (this->BlendSampleDataCache).ArrayNum) {
    lVar16 = 0;
    do {
      uVar14 = ~uVar15 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar15 < (this->BlendSampleDataCache).ArrayNum) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar5 = *(int *)((this->BlendSampleDataCache).AllocatorInstance.Data + lVar16);
      if (((iVar5 < 0) || ((this->SamplePoseLinks).ArrayNum <= iVar5)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("SamplePoseLinks.IsValidIndex(BlendSampleDataCache[SampleIndex].SampleDataIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_BlendSpaceGraphBase.cpp"
                             ,0x3e,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = 0;
      if ((int)uVar15 < (this->BlendSampleDataCache).ArrayNum) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = *(uint *)((this->BlendSampleDataCache).AllocatorInstance.Data + lVar16);
      uVar11 = 0;
      if ((int)uVar10 < (this->SamplePoseLinks).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->SamplePoseLinks).AllocatorInstance.Data;
      uVar11 = 0;
      if ((int)uVar15 < (this->BlendSampleDataCache).ArrayNum) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_f0._padding_ = param_1->_padding_;
      local_f0._padding_ = param_1->_padding_;
      local_f0._padding_ = param_1->_padding_;
      local_f0._padding_ = param_1->_padding_;
      uVar8 = param_1->RootMotionWeightModifier;
      local_f0.DeltaTime = param_1->DeltaTime;
      local_f0._44_4_ = *(undefined4 *)&param_1->field_0x2c;
      local_f0.RootMotionWeightModifier = (float)uVar8;
      local_f0.CurrentWeight =
           *(float *)((this->BlendSampleDataCache).AllocatorInstance.Data + lVar16 + 0x10) *
           param_1->CurrentWeight;
      FPoseLinkBase::Update((FPoseLinkBase *)(pFVar6 + (longlong)(int)uVar10 * 0x10),&local_f0);
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 0x60;
    } while ((int)uVar15 < (this->BlendSampleDataCache).ArrayNum);
  }
  pFVar13 = &this->BlendFilter;
  if (-1 < AnimationChannel->Enabled) {
    if ((param_1->_padding_ == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InContext.AnimInstanceProxy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimGraphRuntimeTrace.cpp"
                           ,0x40,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FObjectTrace::OutputObject(*(UObject **)(param_1->_padding_ + 0x140));
    FObjectTrace::OutputObject((UObject *)(this->BlendSpace).field0_0x0.DebugPtr);
    iVar5 = (this->BlendFilter).FilterPerAxis.ArrayNum;
    uVar19 = 0;
    fVar1 = this->X;
    fVar2 = this->Y;
    if (iVar5 < 3) {
      DVar20 = 0;
      if (iVar5 < 2) {
        if (iVar5 < 1) {
          uVar18 = 0;
        }
        else {
          uVar18 = *(undefined4 *)(pFVar13->FilterPerAxis).AllocatorInstance.Data;
        }
      }
      else {
        pFVar6 = (pFVar13->FilterPerAxis).AllocatorInstance.Data;
        uVar19 = *(undefined4 *)(pFVar6 + 0x38);
        uVar18 = *(undefined4 *)pFVar6;
      }
    }
    else {
      pFVar6 = (pFVar13->FilterPerAxis).AllocatorInstance.Data;
      DVar20 = *(DWORD *)(pFVar6 + 0x70);
      uVar19 = *(undefined4 *)(pFVar6 + 0x38);
      uVar18 = *(undefined4 *)pFVar6;
    }
    if (-1 < AnimationChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FAnimationBlendSpacePlayerFields>
                ((TLogScope<0> *)&local_a8);
      QueryPerformanceCounter(&local_128);
      *local_a8 = CONCAT44(local_128.s.HighPart,local_128.s.LowPart);
      uVar12 = FObjectTrace::GetObjectId(*(UObject **)(param_1->_padding_ + 0x140));
      local_a8[1] = uVar12;
      uVar12 = FObjectTrace::GetObjectId((UObject *)(this->BlendSpace).field0_0x0.DebugPtr);
      local_a8[2] = uVar12;
      *(undefined4 *)(local_a8 + 3) = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
      *(float *)((longlong)local_a8 + 0x1c) = fVar1;
      *(float *)(local_a8 + 4) = fVar2;
      *(undefined4 *)((longlong)local_a8 + 0x24) = 0;
      *(undefined4 *)(local_a8 + 5) = uVar18;
      *(undefined4 *)((longlong)local_a8 + 0x2c) = uVar19;
      *(DWORD *)(local_a8 + 6) = DVar20;
      *(undefined8 *)(local_a0 + 0x28) = *(undefined8 *)(local_a0 + 0x20);
      local_128.s.LowPart = DVar20;
    }
  }
  local_120 = (FName)((this->BlendSpace).field0_0x0.DebugPtr)->_padding_;
  ::FName::ToString(&local_120,&local_118);
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar17.Data = local_118.Data.AllocatorInstance.Data;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Name",
             (wchar_t *)FVar17.Data);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Asset",
             (UObject *)(this->BlendSpace).field0_0x0.DebugPtr);
  return;
}

