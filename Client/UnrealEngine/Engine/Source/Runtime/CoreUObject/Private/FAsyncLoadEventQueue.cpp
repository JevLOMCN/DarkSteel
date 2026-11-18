// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// PopAndExecute @ 141f01210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FAsyncLoadEventQueue::PopAndExecute(FAsyncLoadEventQueue *this,FAsyncLoadEventArgs *param_1)

{
  TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStackY_a8 [32];
  TLess<FAsyncLoadEvent> local_68;
  FIdentityFunctor local_67 [7];
  TDereferenceWrapper<FAsyncLoadEvent,TLess<FAsyncLoadEvent>_> local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  iVar1 = (this->EventQueue).ArrayNum;
  local_48 = (code *)0x0;
  plStack_20 = (longlong *)0x0;
  if (iVar1 == 0) {
    bVar7 = false;
  }
  else {
    this_00 = &this->EventQueue;
    if (iVar1 < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
    }
    pFVar2 = (this_00->AllocatorInstance).Data;
    local_58 = *(undefined4 *)pFVar2;
    local_54 = *(undefined4 *)(pFVar2 + 4);
    local_50 = *(undefined4 *)(pFVar2 + 8);
    local_4c = *(undefined4 *)(pFVar2 + 0xc);
    pcVar3 = *(code **)(pFVar2 + 0x10);
    uVar9 = *(undefined8 *)(pFVar2 + 0x18);
    lVar4 = *(longlong *)(pFVar2 + 0x20);
    uVar5 = *(undefined8 *)(pFVar2 + 0x28);
    uVar6 = *(undefined8 *)(pFVar2 + 0x30);
    plVar10 = *(longlong **)(pFVar2 + 0x38);
    *(code **)(pFVar2 + 0x10) = local_48;
    *(undefined8 *)(pFVar2 + 0x18) = uStack_40;
    *(longlong *)(pFVar2 + 0x20) = local_38;
    *(undefined8 *)(pFVar2 + 0x28) = uStack_30;
    *(undefined8 *)(pFVar2 + 0x30) = local_28;
    *(longlong **)(pFVar2 + 0x38) = plStack_20;
    local_48 = pcVar3;
    uStack_40 = uVar9;
    local_38 = lVar4;
    uStack_30 = uVar5;
    local_28 = uVar6;
    plStack_20 = plVar10;
    if ((this->EventQueue).ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
    }
    TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,0,1);
    local_60.Predicate = &local_68;
    AlgoImpl::
    HeapSiftDown<FAsyncLoadEvent,int,FIdentityFunctor,TDereferenceWrapper<FAsyncLoadEvent,TLess<FAsyncLoadEvent>_>_>
              ((FAsyncLoadEvent *)(this_00->AllocatorInstance).Data,0,(this->EventQueue).ArrayNum,
               local_67,&local_60);
    UE::Core::Private::Function::CheckCallable(local_48);
    pcVar3 = local_48;
    plVar10 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar10 = plStack_20;
    }
    uVar9 = (**(code **)(*plVar10 + 8))();
    (*pcVar3)(uVar9,param_1);
    if (local_48 != (code *)0x0) {
      plVar10 = &local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar10 = plStack_20;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    bVar7 = true;
  }
  return bVar7;
}

