// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// AddNotify @ 1475b2610

void __thiscall
FNotifyBufferFinishedHooks::AddNotify
          (FNotifyBufferFinishedHooks *this,USoundNode *param_1,ulong64 param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  USoundNode *local_18;
  ulong64 local_10;
  
  pFVar5 = (this->Notifies).AllocatorInstance.Data;
  local_18 = param_1;
  local_10 = param_2;
  if ((pFVar5 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)(this->Notifies).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->Notifies).ArrayNum;
  piVar1 = &(this->Notifies).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Notifies).ArrayNum = iVar4 + 1;
  pFVar5 = (this->Notifies).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(USoundNode **)pFVar5 = local_18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (USoundNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18);
  }
  *(ulong64 *)(pFVar5 + 8) = local_10;
  return;
}

// AddReferencedObjects @ 1475b2740

void __thiscall
FNotifyBufferFinishedHooks::AddReferencedObjects
          (FNotifyBufferFinishedHooks *this,FReferenceCollector *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Notifies).ArrayNum;
  pFVar2 = (this->Notifies).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Notifies).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNotifyBufferFinishedHooks::FNotifyBufferDetails,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar2,0,0);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// DispatchNotifies @ 1475c01b0

void __thiscall
FNotifyBufferFinishedHooks::DispatchNotifies
          (FNotifyBufferFinishedHooks *this,FWaveInstance *param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = (this->Notifies).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 << 4;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Notifies).ArrayNum) {
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
      if (*(longlong *)((this->Notifies).AllocatorInstance.Data + lVar7) != 0) {
        uVar5 = 0;
        if ((int)uVar6 < (this->Notifies).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((this->Notifies).AllocatorInstance.Data + lVar7);
        cVar4 = (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1);
        if ((cVar4 != '\0') && (!param_2)) {
          return;
        }
      }
      lVar7 = lVar7 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return;
}

// GetHashForNode @ 1475d4aa0

ulong64 __thiscall
FNotifyBufferFinishedHooks::GetHashForNode(FNotifyBufferFinishedHooks *this,USoundNode *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Notifies).ArrayNum;
  pFVar2 = (this->Notifies).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Notifies).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNotifyBufferFinishedHooks::FNotifyBufferDetails_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) {
      return 0;
    }
    if (*(USoundNode **)pFVar2 == (USoundNode *)0x0) {
      bVar4 = param_1 == (USoundNode *)0x0;
    }
    else {
      bVar4 = *(USoundNode **)pFVar2 == param_1;
    }
    if (bVar4) break;
    pFVar2 = pFVar2 + 0x10;
  }
  return *(ulong64 *)(pFVar2 + 8);
}

