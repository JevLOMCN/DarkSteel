// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 3

// FQueuedGotoFakeCheckpoint @ 146cb6290

FQueuedGotoFakeCheckpoint * __thiscall
FQueuedGotoFakeCheckpoint::FQueuedGotoFakeCheckpoint(FQueuedGotoFakeCheckpoint *this)

{
  *(undefined4 *)&this->field_0x8 = 0xd;
  *(undefined ***)this = &___7FQueuedHttpRequest__6B_;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  *(undefined ***)this = &___7FQueuedGotoFakeCheckpoint__6B_;
  return this;
}

// ~FQueuedGotoFakeCheckpoint @ 146cb6c40

void __thiscall
FQueuedGotoFakeCheckpoint::~FQueuedGotoFakeCheckpoint(FQueuedGotoFakeCheckpoint *this)

{
  *(undefined ***)this = &___7FQueuedHttpRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x18);
  return;
}

// PreProcess @ 146cc5120

bool __thiscall
FQueuedGotoFakeCheckpoint::PreProcess
          (FQueuedGotoFakeCheckpoint *this,FHttpNetworkReplayStreamer *param_1,FString *param_2,
          FString *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> *this_00;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  longlong *plVar10;
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  ulonglong local_88;
  undefined **local_80;
  undefined4 local_78;
  long64 local_70;
  undefined8 local_68;
  FDestructionSentinel local_60;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  plVar10 = (longlong *)0x0;
  piVar1 = &(param_1->CheckpointArchive).Buffer.ArrayMax;
  (param_1->CheckpointArchive).Buffer.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(param_1->CheckpointArchive).Buffer.AllocatorInstance,0,piVar1);
  }
  uVar3 = param_1->LastGotoTimeInMS;
  lVar4 = param_1->_padding_;
  (param_1->CheckpointArchive).Pos = 0;
  pcVar5 = *(code **)(lVar4 + 0x78);
  if (((uVar3 != (uVar3 & 0xffffffff)) || ((longlong)uVar3 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  cVar9 = (*pcVar5)(param_1,0);
  if (cVar9 == '\0') {
    piVar1 = &(param_1->StreamArchive).Buffer.ArrayMax;
    (param_1->StreamArchive).Buffer.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(param_1->StreamArchive).Buffer.AllocatorInstance,0,piVar1);
    }
    param_1->StreamTimeRangeStart = 0;
    param_1->StreamTimeRangeEnd = 0;
    param_1->StreamChunkIndex = 0;
  }
  this_00 = &param_1->GotoCheckpointDelegate;
  (param_1->StreamArchive).Pos = 0;
  (param_1->StreamArchive).bAtEndOfReplay = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_48);
  puVar2 = &(param_1->GotoCheckpointDelegate).field_0x8;
  if (((*(int *)&(param_1->GotoCheckpointDelegate).field_0x10 == 0) ||
      (plVar6 = *(longlong **)puVar2, plVar6 == (longlong *)0x0)) ||
     (cVar9 = (**(code **)(*plVar6 + 0x38))(), cVar9 == '\0')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (bVar7) {
    local_78 = 0;
    local_80 = &___7FGotoResult__6B_;
    local_70 = param_1->LastGotoTimeInMS;
    local_68 = 0xffffffffffffffff;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_30);
    if (*(int *)&(param_1->GotoCheckpointDelegate).field_0x10 != 0) {
      plVar10 = *(longlong **)puVar2;
    }
    (**(code **)(*plVar10 + 0x60))(plVar10,&local_80);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    local_88 = 0;
    local_98 = (undefined1  [8])0x0;
    local_90.Data = (FScriptContainerElement *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
               (FWriteAccessScope *)&local_60);
    if (((int)local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_90.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
      local_88 = local_88 & 0xffffffff00000000;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_98);
  }
  param_1->LastGotoTimeInMS = -1;
  return true;
}

