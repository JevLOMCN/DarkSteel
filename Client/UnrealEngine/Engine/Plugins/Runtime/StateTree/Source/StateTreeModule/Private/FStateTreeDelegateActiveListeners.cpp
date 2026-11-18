// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 9

// FStateTreeDelegateActiveListeners @ 14d4ea1b0

FStateTreeDelegateActiveListeners * __thiscall
FStateTreeDelegateActiveListeners::FStateTreeDelegateActiveListeners
          (FStateTreeDelegateActiveListeners *this,FStateTreeDelegateActiveListeners *param_1)

{
  int *piVar1;
  int iVar2;
  FActiveListener *pFVar3;
  undefined4 uVar4;
  
  (this->Listeners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Listeners).ArrayMax;
  iVar2 = (param_1->Listeners).ArrayNum;
  pFVar3 = (FActiveListener *)(param_1->Listeners).AllocatorInstance.Data;
  (this->Listeners).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<FStateTreeDelegateActiveListeners::FActiveListener,FStateTreeDelegateActiveListeners::FActiveListener,int>
              ((this->Listeners).AllocatorInstance.Data,pFVar3,iVar2);
  }
  *(uint *)&this->field_0x10 =
       *(uint *)&this->field_0x10 ^
       (param_1->BroadcastingLockCount ^ this->BroadcastingLockCount) & 0x7fffffff;
  *(uint *)&this->field_0x10 =
       (param_1->BroadcastingLockCount ^ param_1->BroadcastingLockCount) & 0x7fffffff ^
       *(uint *)&param_1->field_0x10;
  return this;
}

// ~FStateTreeDelegateActiveListeners @ 14d4ec580

void __thiscall
FStateTreeDelegateActiveListeners::~FStateTreeDelegateActiveListeners
          (FStateTreeDelegateActiveListeners *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->BroadcastingLockCount != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BroadcastingLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionTypes.cpp"
                       ,300,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  DestructItems<FStateTreeDelegateActiveListeners::FActiveListener,int>
            ((FActiveListener *)(this->Listeners).AllocatorInstance.Data,(this->Listeners).ArrayNum)
  ;
  pFVar1 = (this->Listeners).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14d4ece20

FStateTreeDelegateActiveListeners * __thiscall
FStateTreeDelegateActiveListeners::operator=
          (FStateTreeDelegateActiveListeners *this,FStateTreeDelegateActiveListeners *param_1)

{
  int *piVar1;
  int iVar2;
  FActiveListener *pFVar3;
  undefined4 uVar4;
  
  if (this != param_1) {
    DestructItems<FStateTreeDelegateActiveListeners::FActiveListener,int>
              ((FActiveListener *)(this->Listeners).AllocatorInstance.Data,
               (this->Listeners).ArrayNum);
    iVar2 = (param_1->Listeners).ArrayNum;
    piVar1 = &(this->Listeners).ArrayMax;
    pFVar3 = (FActiveListener *)(param_1->Listeners).AllocatorInstance.Data;
    (this->Listeners).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
      ConstructItems<FStateTreeDelegateActiveListeners::FActiveListener,FStateTreeDelegateActiveListeners::FActiveListener,int>
                ((this->Listeners).AllocatorInstance.Data,pFVar3,iVar2);
    }
  }
  *(uint *)&this->field_0x10 =
       *(uint *)&this->field_0x10 ^
       (param_1->BroadcastingLockCount ^ this->BroadcastingLockCount) & 0x7fffffff;
  *(uint *)&this->field_0x10 =
       (param_1->BroadcastingLockCount ^ param_1->BroadcastingLockCount) & 0x7fffffff ^
       *(uint *)&param_1->field_0x10;
  return this;
}

// Add @ 14d4eee20

void __thiscall
FStateTreeDelegateActiveListeners::Add
          (FStateTreeDelegateActiveListeners *this,FStateTreeDelegateListener *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2,FActiveFrameID param_3,
          FActiveStateID param_4,FStateTreeIndex16 param_5)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar6;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  if (((((param_1->Dispatcher).ID.D == 0 && (param_1->Dispatcher).ID.C == 0) &&
       (param_1->Dispatcher).ID.B == 0) && (param_1->Dispatcher).ID.A == 0) || (param_1->ID == 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Listener.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionTypes.cpp"
                       ,0x131,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Remove(this,param_1);
  iVar5 = (this->Listeners).ArrayNum;
  piVar1 = &(this->Listeners).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,(ForAnyElementType *)this,piVar1);
  }
  (this->Listeners).ArrayNum = iVar5 + 1;
  pFVar6 = (this->Listeners).AllocatorInstance.Data + (longlong)iVar5 * 0x40;
  this_00 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_28,param_2);
  uVar3 = *(undefined8 *)&(param_1->Dispatcher).ID.C;
  *(undefined8 *)pFVar6 = *(undefined8 *)&(param_1->Dispatcher).ID;
  *(undefined8 *)(pFVar6 + 8) = uVar3;
  *(int *)(pFVar6 + 0x10) = param_1->ID;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar6 + 0x18),this_00);
  *(uint *)(pFVar6 + 0x34) = param_4.Value;
  *(ushort *)(pFVar6 + 0x38) = param_5.Value;
  *(uint *)(pFVar6 + 0x30) = param_3.Value;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// BroadcastDelegate @ 14d4f0e20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FStateTreeDelegateActiveListeners::BroadcastDelegate
          (FStateTreeDelegateActiveListeners *this,FStateTreeDelegateDispatcher *param_1,
          FStateTreeExecutionState *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  FReadAccessScope *this_00;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  <lambda_1> local_res8 [8];
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((((param_1->ID).C == 0 && (param_1->ID).B == 0) && (param_1->ID).A == 0) &&
       (param_1->ID).D == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dispatcher.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionTypes.cpp"
                         ,0x163,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = *(undefined4 *)&this->field_0x10;
  uVar9 = 0;
  lVar8 = (longlong)(this->Listeners).ArrayNum;
  *(uint *)&this->field_0x10 =
       (ZPULL(uVar1,0,0x1f) + 1 ^ this->BroadcastingLockCount) & 0x7fffffff ^ uVar1;
  if (lVar8 < 1) {
LAB_14d4f101f:
    uVar1 = *(undefined4 *)&this->field_0x10;
    uVar9 = ZPULL(uVar1,0,0x1f) - 1;
    uVar6 = (uVar9 ^ this->BroadcastingLockCount) & 0x7fffffff ^ uVar1;
    *(uint *)&this->field_0x10 = uVar6;
    if (((uVar9 & 0x7fffffff) == 0) && ((int)uVar6 < 0)) {
      TArray<FStateTreeDelegateActiveListeners::FActiveListener,TSizedDefaultAllocator<32>_>::
      RemoveAllSwap<_FStateTreeDelegateActiveListeners::RemoveUnbounds_::__l2::<lambda_1>_>
                (&this->Listeners,local_res8,Default);
      this->bContainsUnboundListeners = 0;
    }
    return;
  }
  lVar11 = 0;
LAB_14d4f0eb0:
  uVar6 = 0;
  if ((int)uVar9 < (this->Listeners).ArrayNum) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar7 = (this->Listeners).AllocatorInstance.Data + lVar11;
  if (((*(uint *)(pFVar7 + 4) == (param_1->ID).B &&
       (uint)((ulonglong)*(undefined8 *)(pFVar7 + 8) >> 0x20) == (param_1->ID).D) &&
      *(uint *)pFVar7 == (param_1->ID).A) && (uint)*(undefined8 *)(pFVar7 + 8) == (param_1->ID).C) {
    pFVar4 = (param_2->ActiveFrames).AllocatorInstance.Data;
    pFVar10 = pFVar4 + (longlong)(param_2->ActiveFrames).ArrayNum * 0x70;
    for (; pFVar4 != pFVar10; pFVar4 = pFVar4 + 0x70) {
      if (*(int *)(pFVar4 + 0x50) == *(int *)(pFVar7 + 0x30)) {
        if (*(ushort *)(pFVar7 + 0x38) <= *(ushort *)(pFVar4 + 0x54)) {
          if (*(int *)(pFVar7 + 0x34) != 0) {
            uVar5 = (ulonglong)(byte)pFVar4[0x3c];
            uVar6 = (uint)(byte)pFVar4[0x3c];
            goto joined_r0x00014d4f0fb9;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar7 + 0x18),
                     &local_40);
          if ((*(int *)(pFVar7 + 0x28) != 0) && (*(longlong **)(pFVar7 + 0x20) != (longlong *)0x0))
          {
            (**(code **)(**(longlong **)(pFVar7 + 0x20) + 0x68))();
          }
          this_00 = &local_40;
          goto LAB_14d4f0ffd;
        }
        break;
      }
    }
  }
  goto LAB_14d4f1002;
  while (uVar6 = uVar6 - 1, *(int *)(pFVar4 + uVar5 * 4 + 0xc) != *(int *)(pFVar7 + 0x34)) {
joined_r0x00014d4f0fb9:
    uVar5 = uVar5 - 1;
    if ((longlong)uVar5 < 0) goto LAB_14d4f1002;
  }
  if (uVar6 != 0xffffffff) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar7 + 0x18),&local_58);
    if ((*(int *)(pFVar7 + 0x28) != 0) && (*(longlong **)(pFVar7 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(pFVar7 + 0x20) + 0x68))();
    }
    this_00 = &local_58;
LAB_14d4f0ffd:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (this_00);
  }
LAB_14d4f1002:
  uVar9 = uVar9 + 1;
  lVar11 = lVar11 + 0x40;
  lVar8 = lVar8 + -1;
  if (lVar8 == 0) goto LAB_14d4f101f;
  goto LAB_14d4f0eb0;
}

// Remove @ 14d5033d0

void __thiscall
FStateTreeDelegateActiveListeners::Remove
          (FStateTreeDelegateActiveListeners *this,FStateTreeDelegateListener *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  FWriteAccessScope local_68;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  ForAnyElementType FStack_30;
  ulonglong local_28;
  undefined8 local_20;
  ushort local_18;
  undefined4 local_16;
  undefined2 local_12;
  
  if ((((((param_1->Dispatcher).ID.D == 0 && (param_1->Dispatcher).ID.C == 0) &&
        (param_1->Dispatcher).ID.B == 0) && (param_1->Dispatcher).ID.A == 0) || (param_1->ID == 0))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Listener.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionTypes.cpp"
                            ,0x138,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = (param_1->Dispatcher).ID.A;
  uVar3 = (param_1->Dispatcher).ID.B;
  uVar4 = (param_1->Dispatcher).ID.C;
  uVar5 = (param_1->Dispatcher).ID.D;
  pFVar10 = (this->Listeners).AllocatorInstance.Data;
  pFVar8 = pFVar10 + (longlong)(this->Listeners).ArrayNum * 0x40;
  if (pFVar10 != pFVar8) {
    do {
      if ((((uVar5 == *(int *)(pFVar10 + 0xc) && uVar4 == *(int *)(pFVar10 + 8)) &&
           uVar3 == *(int *)(pFVar10 + 4)) && uVar2 == *(int *)pFVar10) &&
         (*(int *)(pFVar10 + 0x10) == param_1->ID)) {
        uVar9 = (uint)((longlong)pFVar10 - (longlong)(this->Listeners).AllocatorInstance.Data >> 6);
        if (uVar9 == 0xffffffff) {
          return;
        }
        if (this->BroadcastingLockCount != 0) {
          local_18 = FStateTreeIndex16::Invalid.Value;
          local_40 = 0;
          uVar7 = 0;
          if ((int)uVar9 < (this->Listeners).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          local_28 = 0;
          local_16 = 0;
          local_12 = 0;
          local_50 = 0;
          uStack_48 = 0;
          local_20 = 0;
          local_38 = (undefined1  [8])0x0;
          FStack_30.Data = (FScriptContainerElement *)0x0;
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar10 = (this->Listeners).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x40;
          *(undefined8 *)pFVar10 = local_50;
          *(undefined8 *)(pFVar10 + 8) = uStack_48;
          *(undefined4 *)(pFVar10 + 0x10) = (undefined4)local_40;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar10 + 0x18),
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
          *(undefined4 *)(pFVar10 + 0x30) = (undefined4)local_20;
          *(undefined4 *)(pFVar10 + 0x34) = local_20._4_4_;
          *(ushort *)(pFVar10 + 0x38) = local_18;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,&local_68);
          if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_30.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_30,0,0,0x10);
            local_28 = local_28 & 0xffffffff00000000;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FWriteAccessScope::
          ~FWriteAccessScope(&local_68);
          if (FStack_30.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_30.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_38);
          this->bContainsUnboundListeners = 1;
          return;
        }
        uVar7 = 0;
        if ((int)uVar9 < (this->Listeners).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TArray<FStateTreeDelegateActiveListeners::FActiveListener,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(&this->Listeners,uVar9);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,(ForAnyElementType *)this,(this->Listeners).ArrayNum,
                   &(this->Listeners).ArrayMax);
        return;
      }
      pFVar10 = pFVar10 + 0x40;
    } while (pFVar10 != pFVar8);
  }
  return;
}

// RemoveAll @ 14d503670

void __thiscall
FStateTreeDelegateActiveListeners::RemoveAll
          (FStateTreeDelegateActiveListeners *this,FActiveFrameID param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  if (this->BroadcastingLockCount != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BroadcastingLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionTypes.cpp"
                       ,0x151,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar6 = (this->Listeners).ArrayNum;
  bVar2 = false;
  uVar5 = 0;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < iVar6) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(uint *)((this->Listeners).AllocatorInstance.Data + lVar7 + 0x30) == param_1.Value) {
        bVar2 = true;
        uVar4 = 0;
        if ((int)uVar5 < (this->Listeners).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        TArray<FStateTreeDelegateActiveListeners::FActiveListener,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(&this->Listeners,uVar5);
      }
      else {
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x40;
      }
      iVar6 = (this->Listeners).ArrayNum;
    } while ((int)uVar5 < iVar6);
    if (bVar2) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,(ForAnyElementType *)this,iVar6,&(this->Listeners).ArrayMax);
    }
  }
  return;
}

// RemoveAll @ 14d5037d0

void __thiscall
FStateTreeDelegateActiveListeners::RemoveAll
          (FStateTreeDelegateActiveListeners *this,FActiveStateID param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  if (this->BroadcastingLockCount != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BroadcastingLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionTypes.cpp"
                       ,0x15a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar6 = (this->Listeners).ArrayNum;
  bVar2 = false;
  uVar5 = 0;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < iVar6) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(uint *)((this->Listeners).AllocatorInstance.Data + lVar7 + 0x34) == param_1.Value) {
        bVar2 = true;
        uVar4 = 0;
        if ((int)uVar5 < (this->Listeners).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        TArray<FStateTreeDelegateActiveListeners::FActiveListener,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(&this->Listeners,uVar5);
      }
      else {
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x40;
      }
      iVar6 = (this->Listeners).ArrayNum;
    } while ((int)uVar5 < iVar6);
    if (bVar2) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,(ForAnyElementType *)this,iVar6,&(this->Listeners).ArrayMax);
    }
  }
  return;
}

// RemoveUnbounds @ 14d503f40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FStateTreeDelegateActiveListeners::RemoveUnbounds(FStateTreeDelegateActiveListeners *this)

{
  code *pcVar1;
  bool bVar2;
  <lambda_1> local_res8 [32];
  
  if (this->BroadcastingLockCount != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BroadcastingLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionTypes.cpp"
                       ,0x18e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((BADTYPE)this->bContainsUnboundListeners) {
    TArray<FStateTreeDelegateActiveListeners::FActiveListener,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_FStateTreeDelegateActiveListeners::RemoveUnbounds_::__l2::<lambda_1>_>
              (&this->Listeners,local_res8,Default);
    this->bContainsUnboundListeners = 0;
  }
  return;
}

