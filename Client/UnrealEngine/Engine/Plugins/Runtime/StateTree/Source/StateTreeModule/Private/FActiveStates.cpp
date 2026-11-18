// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// FActiveStates @ 14d4b0f90

FActiveStates * __thiscall
UE::StateTreeTrace::FInstanceEventBufferedData::FActiveStates::FActiveStates
          (FActiveStates *this,FBufferedDataList *param_1,
          TArrayView<FStateTreeExecutionFrame_const_,int> *param_2)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FActiveStates *pFVar8;
  uint uVar9;
  FStateTreeStateHandle *pFVar10;
  FStateTreeStateHandle *pFVar11;
  FStateTreeExecutionFrame *pFVar12;
  undefined2 local_res8;
  FBufferedDataList *local_res10;
  FStateTreeExecutionFrame *local_res18;
  ushort local_48 [2];
  undefined1 local_44 [12];
  
  pFVar12 = param_2->DataPtr;
  piVar1 = &(this->StatesIndices).ArrayMax;
  piVar2 = &(this->AssetDebugIds).ArrayMax;
  (this->StatesIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatesIndices).ArrayNum = 0;
  *piVar1 = 0;
  (this->AssetDebugIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetDebugIds).ArrayNum = 0;
  *piVar2 = 0;
  local_res18 = pFVar12 + param_2->ArrayNum;
  if (pFVar12 != local_res18) {
    pFVar11 = (pFVar12->ActiveStates).States;
    local_res10 = param_1;
    do {
      FBufferedDataList::FindOrAddDebugIdForAsset_AnyThread
                (local_res10,(UStateTree *)&stack0x00000008);
      iVar7 = (this->StatesIndices).ArrayNum;
      uVar9 = (uint)*(byte *)(pFVar11 + 8) + iVar7;
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if (*piVar1 < (int)uVar9) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar9,(ForAnyElementType *)this,iVar7,piVar1);
      }
      if (*piVar2 < (int)uVar9) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar9,&(this->AssetDebugIds).AllocatorInstance,(this->AssetDebugIds).ArrayNum
                   ,piVar2);
      }
      bVar3 = *(byte *)(pFVar11 + 8);
      for (pFVar10 = pFVar11; pFVar10 != pFVar11 + bVar3; pFVar10 = pFVar10 + 1) {
        local_48[0] = pFVar10->Index;
        pFVar4 = (this->StatesIndices).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 < pFVar4 + (longlong)*piVar1 * 2)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FActiveStates *)(*pcVar5)();
          return pFVar8;
        }
        iVar7 = (this->StatesIndices).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x202,(ForAnyElementType *)this,piVar1);
        }
        (this->StatesIndices).ArrayNum = iVar7 + 1;
        *(ushort *)((this->StatesIndices).AllocatorInstance.Data + (longlong)iVar7 * 2) =
             local_48[0];
        pFVar4 = (this->AssetDebugIds).AllocatorInstance.Data;
        local_44._0_2_ = local_res8;
        if (((pFVar4 <= (FScriptContainerElement *)local_44) &&
            ((FScriptContainerElement *)local_44 < pFVar4 + (longlong)*piVar2 * 2)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FActiveStates *)(*pcVar5)();
          return pFVar8;
        }
        iVar7 = (this->AssetDebugIds).ArrayNum;
        if (iVar7 == *piVar2) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x202,&(this->AssetDebugIds).AllocatorInstance,piVar2);
        }
        (this->AssetDebugIds).ArrayNum = iVar7 + 1;
        *(undefined2 *)((this->AssetDebugIds).AllocatorInstance.Data + (longlong)iVar7 * 2) =
             local_44._0_2_;
      }
      pFVar12 = pFVar12 + 1;
      pFVar11 = pFVar11 + 0x38;
    } while (pFVar12 != local_res18);
  }
  return this;
}

// Output @ 14d4c8050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::StateTreeTrace::FInstanceEventBufferedData::FActiveStates::Output
          (FActiveStates *this,FStateTreeInstanceDebugId param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uStackX_14;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < StateTreeDebugChannel->Enabled) {
    Trace::Private::FLogScope::Enter<FStateTreeDebuggerActiveStatesEventFields>
              ((TLogScope<1> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    uStackX_14 = param_1.SerialNumber;
    local_20[1].s.LowPart = param_1.Id;
    *(uint *)((longlong)local_20 + 0xc) = uStackX_14;
    Trace::Private::Field_WriteAuxData
              (3,(uchar *)(this->StatesIndices).AllocatorInstance.Data,
               (this->StatesIndices).ArrayNum * 2 & 0x7fffe);
    Trace::Private::Field_WriteAuxData
              (4,(uchar *)(this->AssetDebugIds).AllocatorInstance.Data,
               (this->AssetDebugIds).ArrayNum * 2 & 0x7fffe);
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    **(undefined1 **)(lVar1 + 0x20) = 6;
    lVar2 = *(longlong *)(lVar1 + 0x20) + 1;
    *(longlong *)(lVar1 + 0x20) = lVar2;
    if (lVar1 != local_18) {
      *(longlong *)(lVar1 + 0x28) = lVar2;
    }
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

