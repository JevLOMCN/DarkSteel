// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FVisualizerDebuggingState @ 141919570

FVisualizerDebuggingState * __thiscall
UE::Core::FVisualizerDebuggingState::FVisualizerDebuggingState(FVisualizerDebuggingState *this)

{
  FVisualizerDebuggingStateImpl *pFVar1;
  
  this->GuidString = (char *)0x0;
  this->Ptrs = (void **)0x0;
  this->PimplData = (FVisualizerDebuggingStateImpl *)0x0;
  pFVar1 = ::operator_new(0x30);
  if (pFVar1 != (FVisualizerDebuggingStateImpl *)0x0) {
    (pFVar1->UniqueIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->UniqueIds).ArrayNum = 0;
    (pFVar1->UniqueIds).ArrayMax = 0;
    (pFVar1->DebugPtrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->DebugPtrs).ArrayNum = 0;
    (pFVar1->DebugPtrs).ArrayMax = 0;
    (pFVar1->OrderedGuidString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->OrderedGuidString).Data.ArrayNum = 0;
    (pFVar1->OrderedGuidString).Data.ArrayMax = 0;
    this->PimplData = pFVar1;
    return this;
  }
  this->PimplData = (FVisualizerDebuggingStateImpl *)0x0;
  return this;
}

// ~FVisualizerDebuggingState @ 14191cb80

void __thiscall
UE::Core::FVisualizerDebuggingState::~FVisualizerDebuggingState(FVisualizerDebuggingState *this)

{
  FVisualizerDebuggingStateImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->PimplData;
  if (pFVar1 != (FVisualizerDebuggingStateImpl *)0x0) {
    pFVar2 = (pFVar1->OrderedGuidString).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->DebugPtrs).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->UniqueIds).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x30);
    return;
  }
  return;
}

// Assign @ 141927060

EVisualizerDebuggingStateResult __cdecl
UE::Core::FVisualizerDebuggingState::Assign(FGuid *param_1,void *param_2)

{
  EVisualizerDebuggingStateResult EVar1;
  
  if (GCoreDebuggingState == (FVisualizerDebuggingState *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        State.PimplData = ::operator_new(0x30);
        if (State.PimplData == (FVisualizerDebuggingStateImpl *)0x0) {
          State.PimplData = (FVisualizerDebuggingStateImpl *)0x0;
        }
        else {
          ((State.PimplData)->UniqueIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          ((State.PimplData)->UniqueIds).ArrayNum = 0;
          ((State.PimplData)->UniqueIds).ArrayMax = 0;
          ((State.PimplData)->DebugPtrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          ((State.PimplData)->DebugPtrs).ArrayNum = 0;
          ((State.PimplData)->DebugPtrs).ArrayMax = 0;
          ((State.PimplData)->OrderedGuidString).Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          ((State.PimplData)->OrderedGuidString).Data.ArrayNum = 0;
          ((State.PimplData)->OrderedGuidString).Data.ArrayMax = 0;
        }
        atexit(`UE::Core::FVisualizerDebuggingState::Assign'::__l5::
               _dynamic_atexit_destructor_for__State__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    GCoreDebuggingState = &State;
  }
  EVar1 = AssignImpl(GCoreDebuggingState,param_1,param_2);
  return EVar1;
}

// AssignImpl @ 141927140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EVisualizerDebuggingStateResult __thiscall
UE::Core::FVisualizerDebuggingState::AssignImpl
          (FVisualizerDebuggingState *this,FGuid *param_1,void *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FVisualizerDebuggingStateImpl *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  EVisualizerDebuggingStateResult EVar8;
  int iVar9;
  ulonglong uVar10;
  char *pcVar11;
  ulong64 uVar12;
  size_t _Size;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FIdentityFunctor local_88;
  TStringBuilderBase<char> local_78;
  char local_58 [32];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((((param_1->D == 0 && param_1->C == 0) && param_1->B == 0) && param_1->A == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniqueId.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\VisualizerDebuggingState.cpp"
                         ,0x51,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    EVar8 = (*pcVar5)();
    return EVar8;
  }
  iVar9 = AlgoImpl::IndexOfBy<TArray<FGuid,TSizedDefaultAllocator<32>_>,FGuid,FIdentityFunctor>
                    (&this->PimplData->UniqueIds,param_1,local_88);
  if (iVar9 != -1) {
    this->Ptrs[iVar9] = param_2;
    return Success;
  }
  local_78.Base = local_58;
  local_78.CurPos = local_58;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  local_78.End = (char *)local_38;
  FGuid::AppendString(param_1,&local_78,DigitsLower);
  if (this->GuidString != (char *)0x0) {
    if (local_78.End < local_78.CurPos + 1) {
      if (local_78.bIsExternal != false) {
        local_a0 = (longlong)local_78.End - (longlong)local_78.Base;
        local_a8 = (longlong)local_78.CurPos - (longlong)local_78.Base;
        local_98 = 1;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsExternal",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\StringBuilder.cpp"
                           ,0x24,
                           L"Extending the capacity of an external string builder is not supported. Size = %I64u Capacity = %I64u ExtraCapacity = %I64u."
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          EVar8 = (*pcVar5)();
          return EVar8;
        }
      }
      uVar10 = (ulonglong)((longlong)local_78.End - (longlong)local_78.Base) >> 1 |
               (longlong)local_78.End - (longlong)local_78.Base;
      uVar10 = uVar10 >> 2 | uVar10;
      uVar10 = uVar10 >> 4 | uVar10;
      uVar10 = uVar10 >> 8 | uVar10;
      uVar10 = (uVar10 >> 0x10 | uVar10) + 1;
      uVar12 = 0x20;
      if (0x20 < uVar10) {
        uVar12 = uVar10;
      }
      pcVar11 = FMemory::Malloc(uVar12,1);
      _Size = (longlong)local_78.CurPos - (longlong)local_78.Base;
      if (_Size != 0) {
        memcpy(pcVar11,local_78.Base,_Size);
      }
      if (local_78.bIsDynamic != false) {
        FMemory::Free(local_78.Base);
      }
      local_78.CurPos = pcVar11 + _Size;
      local_78.End = pcVar11 + uVar12;
      local_78.bIsDynamic = true;
      local_78.Base = pcVar11;
    }
    *local_78.CurPos = '\0';
    pcVar11 = strstr(this->GuidString,local_78.Base);
    if (pcVar11 != (char *)0x0) {
      EVar8 = StringCollision;
      goto LAB_14192744e;
    }
  }
  FAnsiString::AppendChars
            (&this->PimplData->OrderedGuidString,local_78.Base,
             (int)local_78.CurPos - (int)local_78.Base);
  pFVar4 = this->PimplData;
  piVar1 = &(pFVar4->UniqueIds).ArrayMax;
  iVar9 = (pFVar4->UniqueIds).ArrayNum;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)pFVar4,piVar1);
  }
  (pFVar4->UniqueIds).ArrayNum = iVar9 + 1;
  uVar6 = *(undefined8 *)&param_1->C;
  pFVar2 = (pFVar4->UniqueIds).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
  *(undefined8 *)pFVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar2 + 8) = uVar6;
  pFVar4 = this->PimplData;
  piVar1 = &(pFVar4->DebugPtrs).ArrayMax;
  iVar9 = (pFVar4->DebugPtrs).ArrayNum;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pFVar4->DebugPtrs).AllocatorInstance,piVar1);
  }
  (pFVar4->DebugPtrs).ArrayNum = iVar9 + 1;
  *(void **)((pFVar4->DebugPtrs).AllocatorInstance.Data + (longlong)iVar9 * 8) = param_2;
  if (((this->PimplData->DebugPtrs).ArrayNum != (this->PimplData->UniqueIds).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PimplData->DebugPtrs.Num() == PimplData->UniqueIds.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\VisualizerDebuggingState.cpp"
                         ,0x6e,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    EVar8 = (*pcVar5)();
    return EVar8;
  }
  iVar3 = (this->PimplData->OrderedGuidString).Data.ArrayNum;
  iVar9 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar9 = 0;
  }
  if (((this->PimplData->DebugPtrs).ArrayNum << 5 != iVar9) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PimplData->DebugPtrs.Num()*32 == PimplData->OrderedGuidString.Len()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\VisualizerDebuggingState.cpp"
                         ,0x6f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    EVar8 = (*pcVar5)();
    return EVar8;
  }
  pFVar4 = this->PimplData;
  this->Ptrs = (void **)(pFVar4->DebugPtrs).AllocatorInstance.Data;
  if ((pFVar4->OrderedGuidString).Data.ArrayNum == 0) {
    pcVar11 = "";
  }
  else {
    pcVar11 = (char *)(pFVar4->OrderedGuidString).Data.AllocatorInstance.Data;
  }
  this->GuidString = pcVar11;
  EVar8 = Success;
LAB_14192744e:
  if (local_78.bIsDynamic != false) {
    FMemory::Free(local_78.Base);
  }
  return EVar8;
}

// Find @ 14193cc00

void * __thiscall
UE::Core::FVisualizerDebuggingState::Find(FVisualizerDebuggingState *this,FGuid *param_1)

{
  int iVar1;
  FIdentityFunctor local_res8;
  
  if (this->GuidString != (char *)0x0) {
    iVar1 = AlgoImpl::IndexOfBy<TArray<FGuid,TSizedDefaultAllocator<32>_>,FGuid,FIdentityFunctor>
                      (&this->PimplData->UniqueIds,param_1,local_res8);
    if (iVar1 != -1) {
      return this->Ptrs[iVar1];
    }
  }
  return (void *)0x0;
}

