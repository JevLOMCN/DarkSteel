// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 43

// StaticStruct @ 1473355a0

UScriptStruct * __cdecl FTimeline::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTimeline.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTimeline.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTimeline,(UObject *)pUVar1,L"Timeline");
  }
  return Z_Registration_Info_UScriptStruct_FTimeline.OuterSingleton;
}

// FTimeline @ 147340a80

FTimeline * __thiscall FTimeline::FTimeline(FTimeline *this)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  
  this->bLooping = '\0';
  this->bPlaying_DEPRECATED = '\0';
  this->bReversePlayback = '\0';
  (this->LengthMode).Value = '\x01';
  (this->Events).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Events).ArrayNum = 0;
  (this->Events).ArrayMax = 0;
  (this->InterpVectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterpVectors).ArrayNum = 0;
  (this->InterpVectors).ArrayMax = 0;
  (this->InterpFloats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterpFloats).ArrayNum = 0;
  (this->InterpFloats).ArrayMax = 0;
  (this->InterpLinearColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterpLinearColors).ArrayNum = 0;
  (this->InterpLinearColors).ArrayMax = 0;
  *(undefined8 *)&this->TimelinePostUpdateFunc = 0;
  this->PlayingStateTracker = '\x02';
  this->Length = 5.0;
  this->PlayRate = 1.0;
  this->Position = 0.0;
  *(undefined8 *)&(this->TimelinePostUpdateFunc).field_0x8 = 0;
  *(undefined8 *)&(this->TimelinePostUpdateFunc).field_0x10 = 0;
  *(undefined8 *)&this->TimelineFinishedFunc = 0;
  *(undefined8 *)&(this->TimelineFinishedFunc).field_0x8 = 0;
  *(undefined8 *)&(this->TimelineFinishedFunc).field_0x10 = 0;
  local_res8 = 0;
  (this->PropertySetObject).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->PropertySetObject).WeakPtr,(FObjectPtr)&local_res8);
  (this->DirectionPropertyName).ComparisonIndex = 0;
  (this->DirectionPropertyName).Number = 0;
  *(undefined8 *)&this->TimelineFinishFuncStatic = 0;
  *(undefined8 *)&(this->TimelineFinishFuncStatic).field_0x8 = 0;
  *(undefined4 *)&(this->TimelineFinishFuncStatic).field_0x10 = 0;
  this->DirectionProperty = (FProperty *)0x0;
  return this;
}

// ~FTimeline @ 1473420c0

void __thiscall FTimeline::~FTimeline(FTimeline *this)

{
  FScriptContainerElement *pFVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TimelineFinishFuncStatic);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TimelineFinishedFunc);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TimelinePostUpdateFunc);
  DestructItems<FTimelineLinearColorTrack,int>
            ((FTimelineLinearColorTrack *)(this->InterpLinearColors).AllocatorInstance.Data,
             (this->InterpLinearColors).ArrayNum);
  pFVar1 = (this->InterpLinearColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FTimelineFloatTrack,int>
            ((FTimelineFloatTrack *)(this->InterpFloats).AllocatorInstance.Data,
             (this->InterpFloats).ArrayNum);
  pFVar1 = (this->InterpFloats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FTimelineVectorTrack,int>
            ((FTimelineVectorTrack *)(this->InterpVectors).AllocatorInstance.Data,
             (this->InterpVectors).ArrayNum);
  pFVar1 = (this->InterpVectors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FTimelineEventEntry,int>
            ((FTimelineEventEntry *)(this->Events).AllocatorInstance.Data,(this->Events).ArrayNum);
  pFVar1 = (this->Events).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddEvent @ 1488b7620

void __thiscall FTimeline::AddEvent(FTimeline *this,float param_1,FOnTimelineEvent *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FDestructionSentinel local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  float local_40 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  uStack_30 = 0;
  local_28 = 0;
  local_40[0] = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_70);
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  uVar3 = *(undefined8 *)&param_2->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_38,(FWriteAccessScope *)&local_88);
  uStack_30 = uVar2;
  local_28 = uVar3;
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  pFVar4 = (this->Events).AllocatorInstance.Data;
  if ((pFVar4 <= (FScriptContainerElement *)local_40) &&
     ((FScriptContainerElement *)local_40 < pFVar4 + (longlong)(this->Events).ArrayMax * 0x20)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->Events).ArrayNum;
  piVar1 = &(this->Events).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->Events).AllocatorInstance,piVar1);
  }
  pFVar4 = (this->Events).AllocatorInstance.Data;
  (this->Events).ArrayNum = iVar7 + 1;
  lVar8 = (longlong)iVar7 * 0x20;
  *(float *)(pFVar4 + lVar8) = local_40[0];
  *(undefined8 *)(pFVar4 + lVar8 + 8) = 0;
  *(undefined8 *)(pFVar4 + lVar8 + 0x10) = 0;
  *(undefined8 *)(pFVar4 + lVar8 + 0x18) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_38,&local_58);
  *(undefined8 *)(pFVar4 + lVar8 + 0x10) = uStack_30;
  *(undefined8 *)(pFVar4 + lVar8 + 0x18) = local_28;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// AddInterpFloat @ 1488b7ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTimeline::AddInterpFloat
          (FTimeline *this,UCurveFloat *param_1,
          TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *param_2)

{
  int *piVar1;
  TObjectPtr<UCurveFloat>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDestructionSentinel local_78;
  TObjectPtr<UCurveFloat>_u_0 local_60;
  FMRSWRecursiveAccessDetector local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  ForAnyElementType local_20;
  int local_18;
  
  if (param_1 == (UCurveFloat *)0x0) {
    if (2 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
    }
  }
  else {
    local_58.State = (atomic<unsigned___int64>)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    auStack_28 = (undefined1  [8])0x0;
    local_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_60.DebugPtr = param_1;
    TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)auStack_28,param_2);
    pTVar2 = (TObjectPtr<UCurveFloat>_u_0 *)(this->InterpFloats).AllocatorInstance.Data;
    if ((pTVar2 <= &local_60) && (&local_60 < pTVar2 + (longlong)(this->InterpFloats).ArrayMax * 10)
       ) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->InterpFloats).ArrayNum;
    piVar1 = &(this->InterpFloats).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(this->InterpFloats).AllocatorInstance,piVar1);
    }
    (this->InterpFloats).ArrayNum = iVar5 + 1;
    FTimelineFloatTrack::FTimelineFloatTrack
              ((FTimelineFloatTrack *)
               ((this->InterpFloats).AllocatorInstance.Data + (longlong)iVar5 * 0x50),
               (FTimelineFloatTrack *)&local_60.ObjectPtr);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_28,
               (FWriteAccessScope *)&local_78);
    if ((local_18 != 0) && (local_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
      local_18 = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_28);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// AddInterpFloat @ 1488b80b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTimeline::AddInterpFloat
          (FTimeline *this,UCurveFloat *param_1,FOnTimelineFloat *param_2,FName param_3,
          FName param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TObjectPtr<UCurveFloat>_u_0 *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TObjectPtr<UCurveFloat>_u_0 local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  FName local_98;
  FName local_90;
  undefined8 local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_80;
  ForAnyElementType local_78;
  int local_70;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FReadAccessScope local_38;
  
  if (param_1 == (UCurveFloat *)0x0) {
    if (2 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
    }
  }
  else {
    local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_98.ComparisonIndex.Value = 0;
    local_98.Number = 0;
    local_90.ComparisonIndex.Value = 0;
    local_90.Number = 0;
    local_88 = 0;
    TStack_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_b8.DebugPtr = param_1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_38);
    uVar2 = *(undefined8 *)&param_2->field_0x8;
    uVar3 = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b0,(FWriteAccessScope *)&local_68);
    uStack_a8 = uVar2;
    local_a0 = uVar3;
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    pTVar4 = (TObjectPtr<UCurveFloat>_u_0 *)(this->InterpFloats).AllocatorInstance.Data;
    local_98 = param_4;
    local_90 = param_3;
    if ((pTVar4 <= &local_b8) && (&local_b8 < pTVar4 + (longlong)(this->InterpFloats).ArrayMax * 10)
       ) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->InterpFloats).ArrayNum;
    piVar1 = &(this->InterpFloats).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(this->InterpFloats).AllocatorInstance,piVar1);
    }
    (this->InterpFloats).ArrayNum = iVar7 + 1;
    FTimelineFloatTrack::FTimelineFloatTrack
              ((FTimelineFloatTrack *)
               ((this->InterpFloats).AllocatorInstance.Data + (longlong)iVar7 * 0x50),
               (FTimelineFloatTrack *)&local_b8.ObjectPtr);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_80,(FWriteAccessScope *)&local_50);
    if ((local_70 != 0) && (local_78.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_78.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,0x10);
      local_70 = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_80.AccessDetector);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// AddInterpLinearColor @ 1488b8400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTimeline::AddInterpLinearColor
          (FTimeline *this,UCurveLinearColor *param_1,
          TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> *param_2)

{
  int *piVar1;
  TObjectPtr<UCurveLinearColor>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDestructionSentinel local_78;
  TObjectPtr<UCurveLinearColor>_u_0 local_60;
  FMRSWRecursiveAccessDetector local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  ForAnyElementType local_20;
  int local_18;
  
  if (param_1 == (UCurveLinearColor *)0x0) {
    if (2 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
    }
  }
  else {
    local_58.State = (atomic<unsigned___int64>)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    auStack_28 = (undefined1  [8])0x0;
    local_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_60.DebugPtr = param_1;
    TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> *)auStack_28,
               param_2);
    pTVar2 = (TObjectPtr<UCurveLinearColor>_u_0 *)(this->InterpLinearColors).AllocatorInstance.Data;
    if ((pTVar2 <= &local_60) &&
       (&local_60 < pTVar2 + (longlong)(this->InterpLinearColors).ArrayMax * 10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->InterpLinearColors).ArrayNum;
    piVar1 = &(this->InterpLinearColors).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(this->InterpLinearColors).AllocatorInstance,piVar1);
    }
    (this->InterpLinearColors).ArrayNum = iVar5 + 1;
    FTimelineLinearColorTrack::FTimelineLinearColorTrack
              ((FTimelineLinearColorTrack *)
               ((this->InterpLinearColors).AllocatorInstance.Data + (longlong)iVar5 * 0x50),
               (FTimelineLinearColorTrack *)&local_60.ObjectPtr);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_28,
               (FWriteAccessScope *)&local_78);
    if ((local_18 != 0) && (local_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
      local_18 = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_28);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// AddInterpLinearColor @ 1488b85e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTimeline::AddInterpLinearColor
          (FTimeline *this,UCurveLinearColor *param_1,FOnTimelineLinearColor *param_2,FName param_3,
          FName param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TObjectPtr<UCurveLinearColor>_u_0 *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TObjectPtr<UCurveLinearColor>_u_0 local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  FName local_98;
  FName local_90;
  undefined8 local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_80;
  ForAnyElementType local_78;
  int local_70;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FReadAccessScope local_38;
  
  if (param_1 == (UCurveLinearColor *)0x0) {
    if (2 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
    }
  }
  else {
    local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_98.ComparisonIndex.Value = 0;
    local_98.Number = 0;
    local_90.ComparisonIndex.Value = 0;
    local_90.Number = 0;
    local_88 = 0;
    TStack_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_b8.DebugPtr = param_1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_38);
    uVar2 = *(undefined8 *)&param_2->field_0x8;
    uVar3 = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b0,(FWriteAccessScope *)&local_68);
    uStack_a8 = uVar2;
    local_a0 = uVar3;
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    pTVar4 = (TObjectPtr<UCurveLinearColor>_u_0 *)(this->InterpLinearColors).AllocatorInstance.Data;
    local_98 = param_4;
    local_90 = param_3;
    if ((pTVar4 <= &local_b8) &&
       (&local_b8 < pTVar4 + (longlong)(this->InterpLinearColors).ArrayMax * 10)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->InterpLinearColors).ArrayNum;
    piVar1 = &(this->InterpLinearColors).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(this->InterpLinearColors).AllocatorInstance,piVar1);
    }
    (this->InterpLinearColors).ArrayNum = iVar7 + 1;
    FTimelineLinearColorTrack::FTimelineLinearColorTrack
              ((FTimelineLinearColorTrack *)
               ((this->InterpLinearColors).AllocatorInstance.Data + (longlong)iVar7 * 0x50),
               (FTimelineLinearColorTrack *)&local_b8.ObjectPtr);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_80,(FWriteAccessScope *)&local_50);
    if ((local_70 != 0) && (local_78.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_78.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,0x10);
      local_70 = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_80.AccessDetector);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// AddInterpVector @ 1488b8930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTimeline::AddInterpVector
          (FTimeline *this,UCurveVector *param_1,
          TDelegate<void___cdecl(UE::Math::TVector<double>),FDefaultDelegateUserPolicy> *param_2)

{
  int *piVar1;
  TObjectPtr<UCurveVector>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDestructionSentinel local_78;
  TObjectPtr<UCurveVector>_u_0 local_60;
  FMRSWRecursiveAccessDetector local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  ForAnyElementType local_20;
  int local_18;
  
  if (param_1 == (UCurveVector *)0x0) {
    if (2 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
    }
  }
  else {
    local_58.State = (atomic<unsigned___int64>)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    auStack_28 = (undefined1  [8])0x0;
    local_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_60.DebugPtr = param_1;
    TDelegate<void___cdecl(UE::Math::TVector<double>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(UE::Math::TVector<double>),FDefaultDelegateUserPolicy> *)
               auStack_28,param_2);
    pTVar2 = (TObjectPtr<UCurveVector>_u_0 *)(this->InterpVectors).AllocatorInstance.Data;
    if ((pTVar2 <= &local_60) &&
       (&local_60 < pTVar2 + (longlong)(this->InterpVectors).ArrayMax * 10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->InterpVectors).ArrayNum;
    piVar1 = &(this->InterpVectors).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(this->InterpVectors).AllocatorInstance,piVar1);
    }
    (this->InterpVectors).ArrayNum = iVar5 + 1;
    FTimelineVectorTrack::FTimelineVectorTrack
              ((FTimelineVectorTrack *)
               ((this->InterpVectors).AllocatorInstance.Data + (longlong)iVar5 * 0x50),
               (FTimelineVectorTrack *)&local_60.ObjectPtr);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_28,
               (FWriteAccessScope *)&local_78);
    if ((local_18 != 0) && (local_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
      local_18 = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_28);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// AddInterpVector @ 1488b8b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTimeline::AddInterpVector
          (FTimeline *this,UCurveVector *param_1,FOnTimelineVector *param_2,FName param_3,
          FName param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TObjectPtr<UCurveVector>_u_0 *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TObjectPtr<UCurveVector>_u_0 local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  FName local_98;
  FName local_90;
  undefined8 local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_80;
  ForAnyElementType local_78;
  int local_70;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FReadAccessScope local_38;
  
  if (param_1 == (UCurveVector *)0x0) {
    if (2 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
    }
  }
  else {
    local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_98.ComparisonIndex.Value = 0;
    local_98.Number = 0;
    local_90.ComparisonIndex.Value = 0;
    local_90.Number = 0;
    local_88 = 0;
    TStack_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_b8.DebugPtr = param_1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_38);
    uVar2 = *(undefined8 *)&param_2->field_0x8;
    uVar3 = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b0,(FWriteAccessScope *)&local_68);
    uStack_a8 = uVar2;
    local_a0 = uVar3;
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    pTVar4 = (TObjectPtr<UCurveVector>_u_0 *)(this->InterpVectors).AllocatorInstance.Data;
    local_98 = param_4;
    local_90 = param_3;
    if ((pTVar4 <= &local_b8) &&
       (&local_b8 < pTVar4 + (longlong)(this->InterpVectors).ArrayMax * 10)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->InterpVectors).ArrayNum;
    piVar1 = &(this->InterpVectors).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(this->InterpVectors).AllocatorInstance,piVar1);
    }
    (this->InterpVectors).ArrayNum = iVar7 + 1;
    FTimelineVectorTrack::FTimelineVectorTrack
              ((FTimelineVectorTrack *)
               ((this->InterpVectors).AllocatorInstance.Data + (longlong)iVar7 * 0x50),
               (FTimelineVectorTrack *)&local_b8.ObjectPtr);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_80,(FWriteAccessScope *)&local_50);
    if ((local_70 != 0) && (local_78.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_78.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,0x10);
      local_70 = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_80.AccessDetector);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// ChangeMarkPlayingState @ 1488ba9a0

void __thiscall FTimeline::ChangeMarkPlayingState(FTimeline *this,bool param_1)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  
  bVar1 = this->PlayingStateTracker;
  if (!param_1) {
    this->PlayingStateTracker = bVar1 & 0xfe;
    return;
  }
  if (bVar1 + 2 < 2) {
    uVar2 = (2 - (bVar1 + 2)) % 0xfd;
    cVar3 = -3 - (char)uVar2;
    if (uVar2 == 0) {
      cVar3 = '\0';
    }
    this->PlayingStateTracker = cVar3 + 2U | 1;
    return;
  }
  this->PlayingStateTracker = bVar1 % 0xfd + 2 | 1;
  return;
}

// GetAllCurves @ 1488c1da0

void __thiscall
FTimeline::GetAllCurves
          (FTimeline *this,
          TSet<UCurveBase_*,DefaultKeyFuncs<UCurveBase_*,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined8 local_res8;
  UCurveBase *local_res18;
  
  iVar1 = (this->InterpVectors).ArrayNum;
  pFVar2 = (this->InterpVectors).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->InterpVectors).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTimelineVectorTrack_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_res8 = *(undefined8 *)pFVar2;
    TSet<UCurveBase_*,DefaultKeyFuncs<UCurveBase_*,0>,FDefaultSetAllocator>::Emplace<UCurveBase_*>
              (param_1,&local_res18,(bool *)&local_res8);
    pFVar2 = pFVar2 + 0x50;
  }
  iVar1 = (this->InterpFloats).ArrayNum;
  pFVar2 = (this->InterpFloats).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->InterpFloats).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTimelineFloatTrack_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_res8 = *(undefined8 *)pFVar2;
    TSet<UCurveBase_*,DefaultKeyFuncs<UCurveBase_*,0>,FDefaultSetAllocator>::Emplace<UCurveBase_*>
              (param_1,&local_res18,(bool *)&local_res8);
    pFVar2 = pFVar2 + 0x50;
  }
  iVar1 = (this->InterpLinearColors).ArrayNum;
  pFVar2 = (this->InterpLinearColors).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->InterpLinearColors).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTimelineLinearColorTrack_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_res8 = *(undefined8 *)pFVar2;
    TSet<UCurveBase_*,DefaultKeyFuncs<UCurveBase_*,0>,FDefaultSetAllocator>::Emplace<UCurveBase_*>
              (param_1,&local_res18,(bool *)&local_res8);
    pFVar2 = pFVar2 + 0x50;
  }
  return;
}

// GetLastKeyframeTime @ 1488c3180

float __thiscall FTimeline::GetLastKeyframeTime(FTimeline *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_38;
  float local_34 [7];
  
  iVar4 = 0;
  fVar6 = 0.0;
  while( true ) {
    fVar7 = fVar6;
    if ((iVar4 < 0) || ((this->Events).ArrayNum <= iVar4)) {
      iVar4 = 0;
      while( true ) {
        fVar6 = fVar7;
        if ((iVar4 < 0) || ((this->InterpVectors).ArrayNum <= iVar4)) {
          iVar4 = 0;
          while( true ) {
            fVar7 = fVar6;
            iVar5 = 0;
            if ((iVar4 < 0) || (iVar5 = 0, (this->InterpFloats).ArrayNum <= iVar4)) {
              while( true ) {
                fVar6 = fVar7;
                if ((iVar5 < 0) || ((this->InterpLinearColors).ArrayNum <= iVar5)) {
                  return fVar6;
                }
                if ((iVar5 < 0) &&
                   (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar2)) break;
                UCurveBase::GetTimeRange
                          (*(UCurveBase **)
                            ((this->InterpLinearColors).AllocatorInstance.Data +
                            (longlong)iVar5 * 0x50),local_34,local_res18);
                iVar5 = iVar5 + 1;
                fVar7 = local_res18[0];
                if (local_res18[0] <= fVar6) {
                  fVar7 = fVar6;
                }
              }
              pcVar1 = (code *)swi(3);
              fVar6 = (float)(*pcVar1)();
              return fVar6;
            }
            if ((iVar4 < 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) break;
            UCurveBase::GetTimeRange
                      (*(UCurveBase **)
                        ((this->InterpFloats).AllocatorInstance.Data + (longlong)iVar4 * 0x50),
                       &local_38,local_res10);
            iVar4 = iVar4 + 1;
            fVar6 = local_res10[0];
            if (local_res10[0] <= fVar7) {
              fVar6 = fVar7;
            }
          }
          pcVar1 = (code *)swi(3);
          fVar6 = (float)(*pcVar1)();
          return fVar6;
        }
        if ((iVar4 < 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) break;
        UCurveBase::GetTimeRange
                  (*(UCurveBase **)
                    ((this->InterpVectors).AllocatorInstance.Data + (longlong)iVar4 * 0x50),
                   local_res20,local_res8);
        iVar4 = iVar4 + 1;
        fVar7 = local_res8[0];
        if (local_res8[0] <= fVar6) {
          fVar7 = fVar6;
        }
      }
      pcVar1 = (code *)swi(3);
      fVar6 = (float)(*pcVar1)();
      return fVar6;
    }
    if ((iVar4 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    lVar3 = (longlong)iVar4;
    iVar4 = iVar4 + 1;
    fVar6 = *(float *)((this->Events).AllocatorInstance.Data + lVar3 * 0x20);
    if (fVar6 <= fVar7) {
      fVar6 = fVar7;
    }
  }
  pcVar1 = (code *)swi(3);
  fVar6 = (float)(*pcVar1)();
  return fVar6;
}

// GetPlayRate @ 1488c3bd0

float __thiscall FTimeline::GetPlayRate(FTimeline *this)

{
  return this->PlayRate;
}

// GetPlaybackPosition @ 1488c3bf0

float __thiscall FTimeline::GetPlaybackPosition(FTimeline *this)

{
  return this->Position;
}

// GetScaledTimelineLength @ 1488c4950

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall FTimeline::GetScaledTimelineLength(FTimeline *this)

{
  float fVar1;
  uchar uVar2;
  float fVar3;
  
  fVar3 = 0.0;
  fVar1 = this->PlayRate;
  if (fVar1 == 0.0) {
    if (1 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
    }
    return 0.0;
  }
  uVar2 = (this->LengthMode).Value;
  if (uVar2 == '\0') {
    fVar3 = this->Length;
  }
  else {
    if (uVar2 == '\x01') {
      fVar3 = GetLastKeyframeTime(this);
      return fVar3 / fVar1;
    }
    if (1 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
      return 0.0 / fVar1;
    }
  }
  return fVar3 / fVar1;
}

// GetTimelineDirectionEnum @ 1488c65d0

UEnum * __cdecl FTimeline::GetTimelineDirectionEnum(void)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UEnum *pUVar6;
  FName local_res8;
  FName local_res10 [3];
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  if (TimelineDirectionEnum == (UEnum *)0x0) {
    pFVar4 = ::FName::FName(&local_res8,L"ETimelineDirection");
    FVar1 = *pFVar4;
    pFVar4 = ::FName::FName(local_res10,L"/Script/Engine");
    local_28.PackageName.ComparisonIndex.Value = 0;
    local_28.PackageName.Number = 0;
    local_28.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetName.Number = 0;
    FTopLevelAssetPath::TrySetPath(&local_28,*pFVar4,FVar1);
    local_18.PackageName = local_28.PackageName;
    local_18.AssetName = local_28.AssetName;
    pUVar5 = Z_Construct_UClass_UEnum_NoRegister();
    TimelineDirectionEnum = (UEnum *)StaticFindObject(pUVar5,&local_18,None);
    if ((TimelineDirectionEnum == (UEnum *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TimelineDirectionEnum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Timeline.cpp"
                           ,0x21,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UEnum *)(*pcVar2)();
      return pUVar6;
    }
  }
  return TimelineDirectionEnum;
}

// GetTimelineLength @ 1488c67c0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall FTimeline::GetTimelineLength(FTimeline *this)

{
  uchar uVar1;
  float fVar2;
  
  uVar1 = (this->LengthMode).Value;
  if (uVar1 == '\0') {
    return this->Length;
  }
  if (uVar1 != '\x01') {
    if (1 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
    }
    return 0.0;
  }
  fVar2 = GetLastKeyframeTime(this);
  return fVar2;
}

// IsLooping @ 1488cd070

bool __thiscall FTimeline::IsLooping(FTimeline *this)

{
  return this->bLooping;
}

// IsPlaying @ 1488cd2c0

bool __thiscall FTimeline::IsPlaying(FTimeline *this)

{
  return (bool)(this->PlayingStateTracker & 1);
}

// IsReversing @ 1488cd310

bool __thiscall FTimeline::IsReversing(FTimeline *this)

{
  if (((this->PlayingStateTracker & 1) != 0) && (this->bReversePlayback != '\0')) {
    return true;
  }
  return false;
}

// Play @ 1488d08f0

void __thiscall FTimeline::Play(FTimeline *this)

{
  uint uVar1;
  char cVar2;
  
  this->bReversePlayback = '\0';
  uVar1 = this->PlayingStateTracker + 2;
  if (uVar1 < 2) {
    uVar1 = (2 - uVar1) % 0xfd;
    cVar2 = -3 - (char)uVar1;
    if (uVar1 == 0) {
      cVar2 = '\0';
    }
    this->PlayingStateTracker = cVar2 + 2U | 1;
    return;
  }
  this->PlayingStateTracker = this->PlayingStateTracker % 0xfd + 2 | 1;
  return;
}

// PlayFromStart @ 1488d0990

void __thiscall FTimeline::PlayFromStart(FTimeline *this)

{
  SetPlaybackPosition(this,0.0,false,true);
  Play(this);
  return;
}

// PostSerialize @ 1488d1380

void __thiscall FTimeline::PostSerialize(FTimeline *this,FArchive *param_1)

{
  int iVar1;
  
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xa5) {
      ChangeMarkPlayingState(this,this->bPlaying_DEPRECATED);
      return;
    }
  }
  return;
}

// Reverse @ 1488dbb40

void __thiscall FTimeline::Reverse(FTimeline *this)

{
  uint uVar1;
  char cVar2;
  
  this->bReversePlayback = '\x01';
  uVar1 = this->PlayingStateTracker + 2;
  if (uVar1 < 2) {
    uVar1 = (2 - uVar1) % 0xfd;
    cVar2 = -3 - (char)uVar1;
    if (uVar1 == 0) {
      cVar2 = '\0';
    }
    this->PlayingStateTracker = cVar2 + 2U | 1;
    return;
  }
  this->PlayingStateTracker = this->PlayingStateTracker % 0xfd + 2 | 1;
  return;
}

// ReverseFromEnd @ 1488dbbe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTimeline::ReverseFromEnd(FTimeline *this)

{
  uchar uVar1;
  float fVar2;
  
  uVar1 = (this->LengthMode).Value;
  if (uVar1 == '\0') {
    fVar2 = this->Length;
  }
  else if (uVar1 == '\x01') {
    fVar2 = GetLastKeyframeTime(this);
  }
  else {
    if (1 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
    }
    fVar2 = 0.0;
  }
  SetPlaybackPosition(this,fVar2,false,true);
  Reverse(this);
  return;
}

// Serialize @ 1488dd600

bool __thiscall FTimeline::Serialize(FTimeline *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  return false;
}

// SetDirectionPropertyName @ 1488dd8d0

void __thiscall FTimeline::SetDirectionPropertyName(FTimeline *this,FName param_1)

{
  this->DirectionPropertyName = param_1;
  return;
}

// SetFloatCurve @ 1488dd8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTimeline::SetFloatCurve(FTimeline *this,UCurveFloat *param_1,FName param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  FName local_res18;
  FString local_28;
  
  local_res18 = param_2;
  if (param_1 == (UCurveFloat *)0x0) {
    if (2 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
      return;
    }
  }
  else if (param_2 == (FName)0x0) {
LAB_1488dd990:
    if (4 < (byte)LogTimeline._0_1_) {
      ::FName::ToString(&local_res18,&local_28);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    iVar1 = (this->InterpFloats).ArrayNum;
    pFVar2 = (this->InterpFloats).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x50;
    while( true ) {
      if ((this->InterpFloats).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FTimelineFloatTrack,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
        param_2 = local_res18;
      }
      if (pFVar2 == pFVar3) goto LAB_1488dd990;
      if (*(FName *)(pFVar2 + 0x20) == param_2) break;
      pFVar2 = pFVar2 + 0x50;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(UCurveFloat **)pFVar2 = param_1;
  }
  return;
}

// SetLinearColorCurve @ 1488ddbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTimeline::SetLinearColorCurve(FTimeline *this,UCurveLinearColor *param_1,FName param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  FName local_res18;
  FString local_28;
  
  local_res18 = param_2;
  if (param_1 == (UCurveLinearColor *)0x0) {
    if (2 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
      return;
    }
  }
  else if (param_2 == (FName)0x0) {
LAB_1488ddc70:
    if (4 < (byte)LogTimeline._0_1_) {
      ::FName::ToString(&local_res18,&local_28);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    iVar1 = (this->InterpLinearColors).ArrayNum;
    pFVar2 = (this->InterpLinearColors).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x50;
    while( true ) {
      if ((this->InterpLinearColors).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FTimelineLinearColorTrack,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
        param_2 = local_res18;
      }
      if (pFVar2 == pFVar3) goto LAB_1488ddc70;
      if (*(FName *)(pFVar2 + 0x20) == param_2) break;
      pFVar2 = pFVar2 + 0x50;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(UCurveLinearColor **)pFVar2 = param_1;
  }
  return;
}

// SetLooping @ 1488dde10

void __thiscall FTimeline::SetLooping(FTimeline *this,bool param_1)

{
  this->bLooping = '\0';
  this->field_0x1 = this->field_0x1 | param_1;
  return;
}

// SetNewTime @ 1488ddfa0

void __thiscall FTimeline::SetNewTime(FTimeline *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->Length;
  if (param_1 <= this->Length) {
    fVar1 = param_1;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  SetPlaybackPosition(this,fVar1,false,true);
  return;
}

// SetPlayRate @ 1488de190

void __thiscall FTimeline::SetPlayRate(FTimeline *this,float param_1)

{
  this->PlayRate = param_1;
  return;
}

// SetPlaybackPosition @ 1488de1b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTimeline::SetPlaybackPosition(FTimeline *this,float param_1,bool param_2,bool param_3)

{
  uchar uVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  UStruct *pUVar4;
  longlong lVar5;
  code *pcVar6;
  FField *pFVar7;
  FProperty *pFVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  char cVar13;
  UObject *pUVar14;
  UObject *pUVar15;
  UFunction *pUVar16;
  FStructProperty *pFVar17;
  double *pdVar18;
  undefined8 *puVar19;
  FName FVar20;
  FName FVar21;
  void *pvVar22;
  longlong *plVar23;
  FReadAccessScope *pFVar24;
  byte bVar25;
  uint uVar26;
  FProperty *pFVar27;
  FProperty *pFVar28;
  longlong lVar29;
  ulonglong uVar30;
  TScriptDelegate<FNotThreadSafeDelegateMode> *pTVar31;
  ulonglong uVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  FName local_338;
  FName local_330;
  TFieldIterator<FStructProperty> local_318;
  TFieldIterator<FFloatProperty> local_300;
  TFieldIterator<FByteProperty> local_2e8;
  TFieldIterator<FEnumProperty> local_2d0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  TVector<double>_u_0 local_280;
  FName local_268;
  FString local_260;
  FString local_250;
  undefined8 local_238;
  undefined8 uStack_230;
  FString local_228;
  FString local_218;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FLinearColor_u_0 local_1b8;
  FString local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  FReadAccessScope local_188;
  FReadAccessScope local_170;
  TVector<double>_u_0 local_158;
  double local_138;
  double dStack_130;
  double local_128;
  FReadAccessScope local_118;
  FReadAccessScope local_100;
  FReadAccessScope local_e8;
  FReadAccessScope local_d0;
  FReadAccessScope local_b8;
  FReadAccessScope local_a0;
  FReadAccessScope local_88 [3];
  
  fVar37 = this->Position;
  this->Position = param_1;
  pUVar14 = FWeakObjectPtr::Get(&(this->PropertySetObject).WeakPtr);
  uVar33 = 0;
  if (0 < (this->InterpVectors).ArrayNum) {
    lVar29 = 0;
    do {
      uVar26 = 0;
      if ((int)uVar33 < (this->InterpVectors).ArrayNum) {
        uVar26 = ~uVar33 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar2 = (this->InterpVectors).AllocatorInstance.Data;
      if (*(longlong *)(pFVar2 + lVar29) != 0) {
        pTVar31 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)(pFVar2 + lVar29 + 8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar31,&local_188);
        local_2b8 = 0;
        if ((pTVar31->FunctionName == (FName)0x0) ||
           (pUVar15 = FWeakObjectPtr::Get(&pTVar31->Object), pUVar15 == (UObject *)0x0)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_188);
LAB_1488de3b7:
          local_2b0 = 0;
          if (*(longlong *)(pFVar2 + lVar29 + 0x28) != 0) goto LAB_1488de2de;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     (pFVar2 + lVar29 + 0x38),&local_170);
          if (((*(int *)(pFVar2 + lVar29 + 0x48) != 0) &&
              (*(longlong **)(pFVar2 + lVar29 + 0x40) != (longlong *)0x0)) &&
             (cVar13 = (**(code **)(**(longlong **)(pFVar2 + lVar29 + 0x40) + 0x38))(),
             cVar13 != '\0')) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_170);
            goto LAB_1488de2de;
          }
          pFVar24 = &local_170;
        }
        else {
          pUVar16 = UObject::FindFunction(pUVar15,pTVar31->FunctionName);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_188);
          if (pUVar16 == (UFunction *)0x0) goto LAB_1488de3b7;
LAB_1488de2de:
          UCurveVector::GetVectorValue
                    (*(UCurveVector **)(pFVar2 + lVar29),(TVector<double> *)&local_280._s_0,
                     this->Position);
          uVar11 = local_280._s_0.Z;
          uVar10 = local_280._s_0.Y;
          uVar9 = local_280._s_0.X;
          bVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(pTVar31);
          if (bVar12) {
            local_158._s_0.X = (double)uVar9;
            local_158._s_0.Y = (double)uVar10;
            local_158._s_0.Z = (double)uVar11;
            FOnTimelineVector_DelegateWrapper(pTVar31,(TVector<double> *)&local_158._s_0);
          }
          if (pUVar14 != (UObject *)0x0) {
            if (*(longlong *)(pFVar2 + lVar29 + 0x30) == 0) {
              pFVar17 = FindFProperty<FStructProperty>
                                  (*(UStruct **)&pUVar14->field_0x10,
                                   *(FName *)(pFVar2 + lVar29 + 0x28),Default);
              *(FStructProperty **)(pFVar2 + lVar29 + 0x30) = pFVar17;
              if ((pFVar17 == (FStructProperty *)0x0) && (4 < (byte)LogTimeline._0_1_)) {
                local_208.ComparisonIndex.Value = *(uint *)&pUVar14->field_0x18;
                local_208.Number = *(uint *)&pUVar14->field_0x1c;
                ::FName::ToString(&local_208,&local_260);
                ::FName::ToString((FName *)(pFVar2 + lVar29 + 0x28),&local_1d0);
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
                if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
                }
                if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_260.Data.AllocatorInstance.Data);
                }
              }
            }
            uVar11 = local_280._s_0.Z;
            uVar10 = local_280._s_0.Y;
            uVar9 = local_280._s_0.X;
            if (*(FProperty **)(pFVar2 + lVar29 + 0x30) != (FProperty *)0x0) {
              pdVar18 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                  (*(FProperty **)(pFVar2 + lVar29 + 0x30),pUVar14,0);
              *pdVar18 = (double)uVar9;
              pdVar18[1] = (double)uVar10;
              pdVar18[2] = (double)uVar11;
            }
          }
          uVar11 = local_280._s_0.Z;
          uVar10 = local_280._s_0.Y;
          uVar9 = local_280._s_0.X;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     (pFVar2 + lVar29 + 0x38),&local_118);
          if (*(int *)(pFVar2 + lVar29 + 0x48) == 0) {
            plVar23 = (longlong *)0x0;
          }
          else {
            plVar23 = *(longlong **)(pFVar2 + lVar29 + 0x40);
          }
          if (plVar23 != (longlong *)0x0) {
            local_138 = (double)uVar9;
            dStack_130 = (double)uVar10;
            local_128 = (double)uVar11;
            (**(code **)(*plVar23 + 0x68))(plVar23,&local_138);
          }
          pFVar24 = &local_118;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (pFVar24);
      }
      uVar33 = uVar33 + 1;
      lVar29 = lVar29 + 0x50;
    } while ((int)uVar33 < (this->InterpVectors).ArrayNum);
  }
  uVar33 = 0;
  if (0 < (this->InterpFloats).ArrayNum) {
    lVar29 = 0;
    do {
      uVar26 = 0;
      if ((int)uVar33 < (this->InterpFloats).ArrayNum) {
        uVar26 = ~uVar33 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar2 = (this->InterpFloats).AllocatorInstance.Data;
      if (*(longlong *)(pFVar2 + lVar29) != 0) {
        pTVar31 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)(pFVar2 + lVar29 + 8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar31,&local_100);
        local_2a8 = 0;
        if ((pTVar31->FunctionName == (FName)0x0) ||
           (pUVar15 = FWeakObjectPtr::Get(&pTVar31->Object), pUVar15 == (UObject *)0x0)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_100);
LAB_1488de635:
          local_2a0 = 0;
          if (*(longlong *)(pFVar2 + lVar29 + 0x28) != 0) goto LAB_1488de5b9;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     (pFVar2 + lVar29 + 0x38),&local_e8);
          if (((*(int *)(pFVar2 + lVar29 + 0x48) != 0) &&
              (*(longlong **)(pFVar2 + lVar29 + 0x40) != (longlong *)0x0)) &&
             (cVar13 = (**(code **)(**(longlong **)(pFVar2 + lVar29 + 0x40) + 0x38))(),
             cVar13 != '\0')) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_e8);
            goto LAB_1488de5b9;
          }
          pFVar24 = &local_e8;
        }
        else {
          pUVar16 = UObject::FindFunction(pUVar15,pTVar31->FunctionName);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_100);
          if (pUVar16 == (UFunction *)0x0) goto LAB_1488de635;
LAB_1488de5b9:
          fVar34 = UCurveFloat::GetFloatValue(*(UCurveFloat **)(pFVar2 + lVar29),this->Position);
          bVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(pTVar31);
          if (bVar12) {
            FOnTimelineFloat_DelegateWrapper(pTVar31,fVar34);
          }
          if (pUVar14 != (UObject *)0x0) {
            if (*(longlong *)(pFVar2 + lVar29 + 0x30) == 0) {
              FVar3 = *(FName *)(pFVar2 + lVar29 + 0x28);
              pUVar4 = *(UStruct **)&pUVar14->field_0x10;
              if (FVar3 != (FName)0x0) {
                if (pUVar4 == (UStruct *)0x0) {
                  local_300.Field = (FField *)0x0;
                }
                else {
                  local_300.Field = pUVar4->ChildProperties;
                }
                local_300.InterfaceIndex = -1;
                local_300.bIncludeSuper = true;
                local_300.bIncludeDeprecated = true;
                local_300.bIncludeInterface = false;
                local_300.Struct = pUVar4;
                TFieldIterator<FFloatProperty>::IterateToNext(&local_300);
                pFVar7 = local_300.Field;
                while (local_300.Field = pFVar7, pFVar7 != (FField *)0x0) {
                  bVar12 = IsThisNotNull(pFVar7,"FField::GetFName");
                  if (bVar12) {
                    local_338 = pFVar7->NamePrivate;
                  }
                  else {
                    local_338.ComparisonIndex.Value = 0;
                    local_338.Number = 0;
                  }
                  if (local_338 == FVar3) {
                    *(FField **)(pFVar2 + lVar29 + 0x30) = pFVar7;
                    if (pFVar7 != (FField *)0x0) goto LAB_1488de7c5;
                    goto LAB_1488de727;
                  }
                  local_300.Field = pFVar7->Next;
                  TFieldIterator<FFloatProperty>::IterateToNext(&local_300);
                  pFVar7 = local_300.Field;
                }
              }
              *(undefined8 *)(pFVar2 + lVar29 + 0x30) = 0;
LAB_1488de727:
              if (4 < (byte)LogTimeline._0_1_) {
                local_200.ComparisonIndex.Value = *(uint *)&pUVar14->field_0x18;
                local_200.Number = *(uint *)&pUVar14->field_0x1c;
                ::FName::ToString(&local_200,&local_218);
                ::FName::ToString((FName *)(pFVar2 + lVar29 + 0x28),&local_1e0);
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
                if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                }
                if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_218.Data.AllocatorInstance.Data);
                }
              }
            }
LAB_1488de7c5:
            lVar5 = *(longlong *)(pFVar2 + lVar29 + 0x30);
            if (lVar5 != 0) {
              if ((*(int *)(lVar5 + 0x30) < 1) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x2dd,
                                      L"Array index out of bounds: %i from an array of size %i"),
                 bVar12)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              *(float *)(&pUVar14->field_0x0 + *(int *)(lVar5 + 0x44)) = fVar34;
            }
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     (pFVar2 + lVar29 + 0x38),&local_d0);
          if ((*(int *)(pFVar2 + lVar29 + 0x48) != 0) &&
             (plVar23 = *(longlong **)(pFVar2 + lVar29 + 0x40), plVar23 != (longlong *)0x0)) {
            (**(code **)(*plVar23 + 0x68))(plVar23,fVar34);
          }
          pFVar24 = &local_d0;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (pFVar24);
      }
      uVar33 = uVar33 + 1;
      lVar29 = lVar29 + 0x50;
    } while ((int)uVar33 < (this->InterpFloats).ArrayNum);
  }
  uVar30 = 0;
  uVar32 = uVar30;
  if (0 < (this->InterpLinearColors).ArrayNum) {
    do {
      uVar26 = (uint)uVar30;
      uVar33 = 0;
      if ((int)uVar26 < (this->InterpLinearColors).ArrayNum) {
        uVar33 = ~uVar26 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar2 = (this->InterpLinearColors).AllocatorInstance.Data;
      if (*(longlong *)(pFVar2 + uVar32) != 0) {
        pTVar31 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)(pFVar2 + uVar32 + 8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar31,&local_b8);
        local_298 = 0;
        if ((pTVar31->FunctionName == (FName)0x0) ||
           (pUVar15 = FWeakObjectPtr::Get(&pTVar31->Object), pUVar15 == (UObject *)0x0)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_b8);
LAB_1488de9bf:
          local_290 = 0;
          if (*(longlong *)(pFVar2 + uVar32 + 0x28) != 0) goto LAB_1488de92d;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     (pFVar2 + uVar32 + 0x38),&local_a0);
          if (((*(int *)(pFVar2 + uVar32 + 0x48) != 0) &&
              (*(longlong **)(pFVar2 + uVar32 + 0x40) != (longlong *)0x0)) &&
             (cVar13 = (**(code **)(**(longlong **)(pFVar2 + uVar32 + 0x40) + 0x38))(),
             cVar13 != '\0')) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_a0);
            goto LAB_1488de92d;
          }
          pFVar24 = &local_a0;
        }
        else {
          pUVar16 = UObject::FindFunction(pUVar15,pTVar31->FunctionName);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_b8);
          if (pUVar16 == (UFunction *)0x0) goto LAB_1488de9bf;
LAB_1488de92d:
          (**(code **)(*(longlong *)(*(longlong *)(pFVar2 + uVar32) + 0x28) + 0x60))
                    ((longlong *)(*(longlong *)(pFVar2 + uVar32) + 0x28),&local_238,this->Position);
          uVar10 = uStack_230;
          uVar9 = local_238;
          bVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(pTVar31);
          if (bVar12) {
            local_1b8._0_8_ = uVar9;
            local_1b8._8_8_ = uVar10;
            FOnTimelineLinearColor_DelegateWrapper(pTVar31,(FLinearColor *)&local_1b8._s_0);
          }
          if (pUVar14 != (UObject *)0x0) {
            if (*(longlong *)(pFVar2 + uVar32 + 0x30) == 0) {
              FVar3 = *(FName *)(pFVar2 + uVar32 + 0x28);
              pUVar4 = *(UStruct **)&pUVar14->field_0x10;
              if (FVar3 != (FName)0x0) {
                if (pUVar4 == (UStruct *)0x0) {
                  local_318.Field = (FField *)0x0;
                }
                else {
                  local_318.Field = pUVar4->ChildProperties;
                }
                local_318.InterfaceIndex = -1;
                local_318.bIncludeSuper = true;
                local_318.bIncludeDeprecated = true;
                local_318.bIncludeInterface = false;
                local_318.Struct = pUVar4;
                TFieldIterator<FStructProperty>::IterateToNext(&local_318);
                pFVar7 = local_318.Field;
                while (local_318.Field = pFVar7, pFVar7 != (FField *)0x0) {
                  bVar12 = IsThisNotNull(pFVar7,"FField::GetFName");
                  if (bVar12) {
                    local_330 = pFVar7->NamePrivate;
                  }
                  else {
                    local_330.ComparisonIndex.Value = 0;
                    local_330.Number = 0;
                  }
                  if (local_330 == FVar3) {
                    *(FField **)(pFVar2 + uVar32 + 0x30) = pFVar7;
                    if (pFVar7 != (FField *)0x0) goto LAB_1488deb46;
                    goto LAB_1488deaa1;
                  }
                  local_318.Field = pFVar7->Next;
                  TFieldIterator<FStructProperty>::IterateToNext(&local_318);
                  pFVar7 = local_318.Field;
                }
              }
              *(undefined8 *)(pFVar2 + uVar32 + 0x30) = 0;
LAB_1488deaa1:
              if (4 < (byte)LogTimeline._0_1_) {
                local_1f8.ComparisonIndex.Value = *(uint *)&pUVar14->field_0x18;
                local_1f8.Number = *(uint *)&pUVar14->field_0x1c;
                ::FName::ToString(&local_1f8,&local_250);
                ::FName::ToString((FName *)(pFVar2 + uVar32 + 0x28),&local_1a8);
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
                if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
                }
                if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_250.Data.AllocatorInstance.Data);
                }
              }
            }
LAB_1488deb46:
            uVar10 = uStack_230;
            uVar9 = local_238;
            if (*(FProperty **)(pFVar2 + uVar32 + 0x30) != (FProperty *)0x0) {
              puVar19 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                  (*(FProperty **)(pFVar2 + uVar32 + 0x30),pUVar14,0);
              *puVar19 = uVar9;
              puVar19[1] = uVar10;
            }
          }
          uVar10 = uStack_230;
          uVar9 = local_238;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     (pFVar2 + uVar32 + 0x38),local_88);
          if ((*(int *)(pFVar2 + uVar32 + 0x48) != 0) &&
             (plVar23 = *(longlong **)(pFVar2 + uVar32 + 0x40), plVar23 != (longlong *)0x0)) {
            local_198 = uVar9;
            uStack_190 = uVar10;
            (**(code **)(*plVar23 + 0x68))(plVar23,&local_198);
          }
          pFVar24 = local_88;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (pFVar24);
      }
      uVar30 = (ulonglong)(uVar26 + 1);
      uVar32 = uVar32 + 0x50;
    } while ((int)(uVar26 + 1) < (this->InterpLinearColors).ArrayNum);
  }
  pFVar27 = (FProperty *)0x0;
  FVar3 = this->DirectionPropertyName;
  local_288 = 0;
  if ((FVar3 != (FName)0x0) && (pUVar14 != (UObject *)0x0)) {
    if (this->DirectionProperty == (FProperty *)0x0) {
      pUVar4 = *(UStruct **)&pUVar14->field_0x10;
      if (FVar3 != (FName)0x0) {
        if (pUVar4 == (UStruct *)0x0) {
          local_2e8.Field = (FField *)0x0;
        }
        else {
          local_2e8.Field = pUVar4->ChildProperties;
        }
        local_2e8.InterfaceIndex = -1;
        local_2e8.bIncludeSuper = true;
        local_2e8.bIncludeDeprecated = true;
        local_2e8.bIncludeInterface = false;
        local_2e8.Struct = pUVar4;
        TFieldIterator<FByteProperty>::IterateToNext(&local_2e8);
        pFVar28 = (FProperty *)local_2e8.Field;
        while (local_2e8.Field = (FField *)pFVar28, pFVar28 != (FProperty *)0x0) {
          bVar12 = IsThisNotNull(pFVar28,"FField::GetFName");
          if (bVar12) {
            FVar20 = (FName)pFVar28->_padding_;
          }
          else {
            FVar20.ComparisonIndex.Value = 0;
            FVar20.Number = 0;
          }
          if (FVar20 == FVar3) {
            this->DirectionProperty = pFVar28;
            if (pFVar28 != (FProperty *)0x0) goto LAB_1488dede1;
            goto LAB_1488dec93;
          }
          local_2e8.Field = (FField *)pFVar28->_padding_;
          TFieldIterator<FByteProperty>::IterateToNext(&local_2e8);
          pFVar28 = (FProperty *)local_2e8.Field;
        }
      }
      this->DirectionProperty = (FProperty *)0x0;
LAB_1488dec93:
      FVar3 = this->DirectionPropertyName;
      pUVar4 = *(UStruct **)&pUVar14->field_0x10;
      pFVar28 = pFVar27;
      if (FVar3 != (FName)0x0) {
        if (pUVar4 == (UStruct *)0x0) {
          local_2d0.Field = (FField *)0x0;
        }
        else {
          local_2d0.Field = pUVar4->ChildProperties;
        }
        local_2d0.InterfaceIndex = -1;
        local_2d0.bIncludeSuper = true;
        local_2d0.bIncludeDeprecated = true;
        local_2d0.bIncludeInterface = false;
        local_2d0.Struct = pUVar4;
        TFieldIterator<FEnumProperty>::IterateToNext(&local_2d0);
        pFVar8 = (FProperty *)local_2d0.Field;
        while (pFVar28 = pFVar27, local_2d0.Field = (FField *)pFVar8, pFVar8 != (FProperty *)0x0) {
          bVar12 = IsThisNotNull(pFVar8,"FField::GetFName");
          if (bVar12) {
            FVar21 = (FName)pFVar8->_padding_;
          }
          else {
            FVar21.ComparisonIndex.Value = 0;
            FVar21.Number = 0;
          }
          pFVar28 = pFVar8;
          if (FVar21 == FVar3) break;
          local_2d0.Field = (FField *)pFVar8->_padding_;
          TFieldIterator<FEnumProperty>::IterateToNext(&local_2d0);
          pFVar8 = (FProperty *)local_2d0.Field;
        }
      }
      this->DirectionProperty = pFVar28;
      if ((pFVar28 == (FProperty *)0x0) && (4 < (byte)LogTimeline._0_1_)) {
        local_268.ComparisonIndex.Value = *(uint *)&pUVar14->field_0x18;
        local_268.Number = *(uint *)&pUVar14->field_0x1c;
        ::FName::ToString(&local_268,&local_228);
        ::FName::ToString(&this->DirectionPropertyName,&local_1f0);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
      }
    }
LAB_1488dede1:
    pFVar28 = this->DirectionProperty;
    if (pFVar28 != (FProperty *)0x0) {
      bVar25 = this->bReversePlayback;
      if ((*(byte *)(pFVar28->_padding_ + 0x18) >> 6 & 1) == 0) {
        if (((*(byte *)(pFVar28->_padding_ + 0x1e) & 1) == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("CastResult",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar28 = pFVar27
           , bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pvVar22 = FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar28,pUVar14,0);
        (**(code **)(*(longlong *)pFVar28[1]._padding_ + 0x1e8))
                  ((longlong *)pFVar28[1]._padding_,pvVar22,bVar25);
      }
      else {
        if ((pFVar28->ArrayDim < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (&pUVar14->field_0x0)[pFVar28->Offset_Internal] = bVar25;
      }
    }
  }
  if (param_2) {
    fVar34 = this->Position;
    if (this->bReversePlayback == '\0') {
      uVar1 = (this->LengthMode).Value;
      if (uVar1 == '\0') {
        fVar35 = this->Length;
      }
      else if (uVar1 == '\x01') {
        fVar35 = GetLastKeyframeTime(this);
      }
      else {
        if (1 < (byte)LogTimeline._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
        }
        fVar35 = 0.0;
      }
      fVar36 = fVar37;
      fVar37 = fVar34;
      if (fVar34 == fVar35) {
        fVar37 = fVar34 + __real_38d1b717;
      }
    }
    else {
      fVar36 = fVar34;
      if (fVar34 == 0.0) {
        fVar36 = fVar34 + __real_b8d1b717;
      }
    }
    pFVar28 = pFVar27;
    if (0 < (this->Events).ArrayNum) {
      do {
        uVar26 = (uint)pFVar27;
        uVar33 = 0;
        if ((int)uVar26 < (this->Events).ArrayNum) {
          uVar33 = ~uVar26 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar34 = *(float *)((longlong)&pFVar28->_padding_ +
                           (longlong)(this->Events).AllocatorInstance.Data);
        if (this->bReversePlayback == '\0') {
          if ((fVar36 <= fVar34) && (fVar34 < fVar37)) {
LAB_1488defc4:
            uVar33 = 0;
            if ((int)uVar26 < (this->Events).ArrayNum) {
              uVar33 = ~uVar26 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar2 = (this->Events).AllocatorInstance.Data;
            bVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                               ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                                (pFVar2 + (longlong)(int)uVar26 * 0x20 + 8));
            if (bVar12) {
              FOnTimelineEvent_DelegateWrapper
                        ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                         (pFVar2 + (longlong)(int)uVar26 * 0x20 + 8));
            }
          }
        }
        else if ((fVar36 < fVar34) && (fVar34 <= fVar37)) goto LAB_1488defc4;
        pFVar27 = (FProperty *)(ulonglong)(uVar26 + 1);
        pFVar28 = (FProperty *)&pFVar28->_padding_;
      } while ((int)(uVar26 + 1) < (this->Events).ArrayNum);
    }
  }
  if ((param_3) &&
     (bVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                          &this->TimelinePostUpdateFunc), bVar12)) {
    FOnTimelineEvent_DelegateWrapper
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->TimelinePostUpdateFunc);
  }
  return;
}

// SetPropertySetObject @ 1488df3b0

void __thiscall FTimeline::SetPropertySetObject(FTimeline *this,UObject *param_1)

{
  UObject *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&(this->PropertySetObject).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// SetTimelineFinishedFunc @ 1488dfa20

void __thiscall
FTimeline::SetTimelineFinishedFunc
          (FTimeline *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->TimelineFinishFuncStatic,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// SetTimelineFinishedFunc @ 1488dfa50

void __thiscall FTimeline::SetTimelineFinishedFunc(FTimeline *this,FOnTimelineEvent *param_1)

{
  TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
            ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->TimelineFinishedFunc,
             (TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetTimelineLength @ 1488dfbd0

void __thiscall FTimeline::SetTimelineLength(FTimeline *this,float param_1)

{
  float fVar1;
  
  this->Length = param_1;
  if (param_1 < this->Position) {
    fVar1 = param_1 - __real_38d1b717;
    if (param_1 <= param_1 - __real_38d1b717) {
      fVar1 = param_1;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    SetPlaybackPosition(this,fVar1,false,true);
    return;
  }
  return;
}

// SetTimelineLengthMode @ 1488dfc50

void __thiscall FTimeline::SetTimelineLengthMode(FTimeline *this,ETimelineLengthMode param_1)

{
  (this->LengthMode).Value = (uchar)param_1;
  return;
}

// SetTimelinePostUpdateFunc @ 1488dfc70

void __thiscall FTimeline::SetTimelinePostUpdateFunc(FTimeline *this,FOnTimelineEvent *param_1)

{
  TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
            ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->TimelinePostUpdateFunc,
             (TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetVectorCurve @ 1488dfdf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTimeline::SetVectorCurve(FTimeline *this,UCurveVector *param_1,FName param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  FName local_res18;
  FString local_28;
  
  local_res18 = param_2;
  if (param_1 == (UCurveVector *)0x0) {
    if (2 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
      return;
    }
  }
  else if (param_2 == (FName)0x0) {
LAB_1488dfe90:
    if (4 < (byte)LogTimeline._0_1_) {
      ::FName::ToString(&local_res18,&local_28);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    iVar1 = (this->InterpVectors).ArrayNum;
    pFVar2 = (this->InterpVectors).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x50;
    while( true ) {
      if ((this->InterpVectors).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FTimelineVectorTrack,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
        param_2 = local_res18;
      }
      if (pFVar2 == pFVar3) goto LAB_1488dfe90;
      if (*(FName *)(pFVar2 + 0x20) == param_2) break;
      pFVar2 = pFVar2 + 0x50;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(UCurveVector **)pFVar2 = param_1;
  }
  return;
}

// Stop @ 1488e2320

void __thiscall FTimeline::Stop(FTimeline *this)

{
  this->PlayingStateTracker = this->PlayingStateTracker & 0xfe;
  return;
}

// TickTimeline @ 1488e3ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTimeline::TickTimeline(FTimeline *this,float param_1)

{
  undefined1 *puVar1;
  uchar uVar2;
  longlong *plVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  FReadAccessScope local_58 [3];
  
  bVar4 = false;
  if ((this->PlayingStateTracker & 1) == 0) {
    return;
  }
  uVar2 = (this->LengthMode).Value;
  if (uVar2 == '\0') {
    fVar7 = this->Length;
  }
  else if (uVar2 == '\x01') {
    fVar7 = GetLastKeyframeTime(this);
  }
  else {
    if (1 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
    }
    fVar7 = 0.0;
  }
  fVar5 = this->PlayRate;
  if (this->bReversePlayback != '\0') {
    fVar5 = (float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000);
  }
  fVar6 = fVar5 * param_1 + this->Position;
  if (fVar5 * param_1 <= 0.0) {
    if (fVar6 < 0.0) {
      if (this->bLooping != 0) {
        SetPlaybackPosition(this,0.0,true,false);
        SetPlaybackPosition(this,fVar7,false,false);
        if (fVar7 <= 0.0) {
          fVar6 = 0.0;
        }
        else {
          do {
            fVar6 = fVar6 + fVar7;
          } while (fVar6 < 0.0);
        }
        goto LAB_1488e4062;
      }
      this->PlayingStateTracker = this->PlayingStateTracker & 0xfe;
      SetPlaybackPosition(this,0.0,true,true);
      goto LAB_1488e3fb3;
    }
  }
  else if (fVar7 < fVar6) {
    if (this->bLooping != 0) {
      SetPlaybackPosition(this,fVar7,true,false);
      SetPlaybackPosition(this,0.0,false,false);
      if (fVar7 <= 0.0) {
        SetPlaybackPosition(this,0.0,true,true);
        return;
      }
      do {
        fVar6 = fVar6 - fVar7;
      } while (fVar7 < fVar6);
LAB_1488e4062:
      SetPlaybackPosition(this,fVar6,true,true);
      return;
    }
    this->PlayingStateTracker = this->PlayingStateTracker & 0xfe;
    bVar4 = true;
    fVar6 = fVar7;
  }
  SetPlaybackPosition(this,fVar6,true,true);
  if (!bVar4) {
    return;
  }
LAB_1488e3fb3:
  bVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->TimelineFinishedFunc);
  if (bVar4) {
    FOnTimelineEvent_DelegateWrapper
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->TimelineFinishedFunc);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->TimelineFinishFuncStatic,local_58);
  if ((*(int *)&(this->TimelineFinishFuncStatic).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->TimelineFinishFuncStatic).field_0x8, plVar3 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar3 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_58);
  return;
}

