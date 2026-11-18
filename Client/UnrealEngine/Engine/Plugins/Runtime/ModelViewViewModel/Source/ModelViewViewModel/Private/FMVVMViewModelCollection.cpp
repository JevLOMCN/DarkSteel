// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 7

// StaticStruct @ 14a739540

UScriptStruct * __cdecl FMVVMViewModelCollection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewModelCollection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UScriptStruct_FMVVMViewModelCollection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewModelCollection,(UObject *)pUVar1,
                         L"MVVMViewModelCollection");
  }
  return Z_Registration_Info_UScriptStruct_FMVVMViewModelCollection.OuterSingleton;
}

// AddInstance @ 14a742230

bool __thiscall
FMVVMViewModelCollection::AddInstance
          (FMVVMViewModelCollection *this,FMVVMViewModelContext *param_1,UMVVMViewModelBase *param_2
          )

{
  int *piVar1;
  TObjectPtr<UClass>_u_0 TVar2;
  TObjectPtr<UClass>_u_0 TVar3;
  longlong lVar4;
  TObjectPtr<UClass>_u_0 *pTVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  TObjectPtr<UClass>_u_0 *pTVar12;
  TObjectPtr<UClass>_u_0 local_48;
  FName local_40;
  TObjectPtr<UClass>_u_0 local_38;
  TObjectPtr<UClass>_u_0 local_30;
  TObjectPtr<UClass>_u_0 local_28;
  TObjectPtr<UClass>_u_0 local_20;
  UClass *local_18;
  
  local_48.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->ContextClass).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_48.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_48.DebugPtr);
  }
  local_40 = param_1->ContextName;
  pTVar12 = (TObjectPtr<UClass>_u_0 *)(this->ViewModelInstances).AllocatorInstance.Data;
  pTVar5 = pTVar12 + (longlong)(this->ViewModelInstances).ArrayNum * 3;
  for (; pTVar12 != pTVar5; pTVar12 = pTVar12 + 3) {
    local_38 = (TObjectPtr<UClass>_u_0)pTVar12->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38.DebugPtr != (UClass *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
    }
    local_30 = pTVar12[1];
    bVar7 = FMVVMViewModelContext::operator==
                      ((FMVVMViewModelContext *)&local_38.ObjectPtr,
                       (FMVVMViewModelContext *)&local_48.ObjectPtr);
    if (bVar7) goto LAB_14a742506;
  }
  TVar2.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->ContextClass).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
  }
  TVar3 = *(TObjectPtr<UClass>_u_0 *)&param_1->ContextName;
  local_28.ObjectPtr.field0_0x0 = TVar2.ObjectPtr.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
  }
  local_20 = TVar3;
  local_18 = (UClass *)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UMVVMViewModelBase *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  pUVar11 = local_18;
  TVar2 = local_28;
  if ((local_28.DebugPtr != (UClass *)0x0) &&
     (pUVar10 = UMVVMViewModelBase::StaticClass(), TVar3 = local_28, pUVar10 != (UClass *)0x0)) {
    iVar9 = (int)pUVar10->_padding_;
    if (((int)(TVar2.DebugPtr)->_padding_ < iVar9) ||
       ((longlong *)*(undefined1 **)((TVar2.DebugPtr)->_padding_ + (longlong)iVar9 * 8) !=
        &pUVar10->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (((bVar7) && (local_28.DebugPtr != (UClass *)0x0)) && (pUVar11 != (UClass *)0x0)) {
      lVar4 = pUVar11->_padding_;
      pUVar11 = UMVVMViewModelBase::StaticClass();
      if (pUVar11 != (UClass *)0x0) {
        iVar9 = (int)pUVar11->_padding_;
        if (((int)(TVar3.DebugPtr)->_padding_ < iVar9) ||
           ((longlong *)*(undefined1 **)((TVar3.DebugPtr)->_padding_ + (longlong)iVar9 * 8) !=
            &pUVar11->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if ((bVar7) && (local_28.DebugPtr != (UClass *)0x0)) {
          iVar9 = (int)(local_28.DebugPtr)->_padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar9) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar9 * 8) !=
              &(local_28.DebugPtr)->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (bVar7) goto LAB_14a7423f2;
        }
      }
    }
  }
  local_18 = (UClass *)0x0;
LAB_14a7423f2:
  bVar7 = FMVVMViewModelContext::IsValid((FMVVMViewModelContext *)&local_28.ObjectPtr);
  if ((bVar7) && (local_18 != (UClass *)0x0)) {
    pTVar5 = (TObjectPtr<UClass>_u_0 *)(this->ViewModelInstances).AllocatorInstance.Data;
    if (((pTVar5 <= &local_28) &&
        (&local_28 < pTVar5 + (longlong)(this->ViewModelInstances).ArrayMax * 3)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iVar9 = (this->ViewModelInstances).ArrayNum;
    piVar1 = &(this->ViewModelInstances).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)this,piVar1);
    }
    (this->ViewModelInstances).ArrayNum = iVar9 + 1;
    pTVar5 = (TObjectPtr<UClass>_u_0 *)
             ((this->ViewModelInstances).AllocatorInstance.Data + (longlong)iVar9 * 0x18);
    pTVar5->DebugPtr = (UClass *)local_28;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28.DebugPtr != (UClass *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_28.DebugPtr);
    }
    pTVar5[1] = local_20;
    pTVar5[2].DebugPtr = local_18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnCollectionChangedDelegate);
    bVar7 = true;
  }
  else {
LAB_14a742506:
    bVar7 = false;
  }
  return bVar7;
}

// FindFirstViewModelInstanceOfType @ 14a74e040

UMVVMViewModelBase * __thiscall
FMVVMViewModelCollection::FindFirstViewModelInstanceOfType
          (FMVVMViewModelCollection *this,TSubclassOf<UMVVMViewModelBase> *param_1)

{
  TObjectPtr<UClass>_u_0 *pTVar1;
  bool bVar2;
  TObjectPtr<UClass>_u_0 *pTVar3;
  TObjectPtr<UClass>_u_0 local_res8;
  TObjectPtr<UClass>_u_0 local_18;
  TObjectPtr<UClass>_u_0 local_10;
  
  local_res8.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->Class).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  pTVar3 = (TObjectPtr<UClass>_u_0 *)(this->ViewModelInstances).AllocatorInstance.Data;
  pTVar1 = pTVar3 + (longlong)(this->ViewModelInstances).ArrayNum * 3;
  while( true ) {
    if (pTVar3 == pTVar1) {
      return (UMVVMViewModelBase *)0x0;
    }
    local_18 = (TObjectPtr<UClass>_u_0)pTVar3->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18.DebugPtr != (UClass *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_18.DebugPtr);
    }
    local_10 = pTVar3[1];
    bVar2 = FMVVMViewModelContext::IsCompatibleWith
                      ((FMVVMViewModelContext *)&local_18.ObjectPtr,
                       (TSubclassOf<UMVVMViewModelBase> *)&local_res8.ObjectPtr);
    if (bVar2) break;
    pTVar3 = pTVar3 + 3;
  }
  return (UMVVMViewModelBase *)pTVar3[2].DebugPtr;
}

// FindViewModelInstance @ 14a74e130

UMVVMViewModelBase * __thiscall
FMVVMViewModelCollection::FindViewModelInstance
          (FMVVMViewModelCollection *this,FMVVMViewModelContext *param_1)

{
  TObjectPtr<UClass>_u_0 *pTVar1;
  bool bVar2;
  TObjectPtr<UClass>_u_0 *pTVar3;
  TObjectPtr<UClass>_u_0 local_28;
  FName local_20;
  TObjectPtr<UClass>_u_0 local_18;
  TObjectPtr<UClass>_u_0 local_10;
  
  local_28.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->ContextClass).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_28.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  local_20 = param_1->ContextName;
  pTVar3 = (TObjectPtr<UClass>_u_0 *)(this->ViewModelInstances).AllocatorInstance.Data;
  pTVar1 = pTVar3 + (longlong)(this->ViewModelInstances).ArrayNum * 3;
  while( true ) {
    if (pTVar3 == pTVar1) {
      return (UMVVMViewModelBase *)0x0;
    }
    local_18 = (TObjectPtr<UClass>_u_0)pTVar3->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18.DebugPtr != (UClass *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_18.DebugPtr);
    }
    local_10 = pTVar3[1];
    bVar2 = FMVVMViewModelContext::operator==
                      ((FMVVMViewModelContext *)&local_18.ObjectPtr,
                       (FMVVMViewModelContext *)&local_28.ObjectPtr);
    if (bVar2) break;
    pTVar3 = pTVar3 + 3;
  }
  return (UMVVMViewModelBase *)pTVar3[2].DebugPtr;
}

// RemoveAllInstances @ 14a75cec0

int __thiscall
FMVVMViewModelCollection::RemoveAllInstances
          (FMVVMViewModelCollection *this,UMVVMViewModelBase *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  iVar1 = (this->ViewModelInstances).ArrayNum;
  lVar7 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->ViewModelInstances).AllocatorInstance.Data;
  iVar8 = 0;
  bVar9 = *(UMVVMViewModelBase **)(pFVar2 + 0x10) != param_1;
  lVar4 = 0;
  iVar5 = 0;
  do {
    lVar4 = lVar4 + 1;
    iVar6 = iVar5 + 1;
    if (lVar4 < lVar7) {
      pFVar3 = pFVar2 + lVar4 * 0x18 + 0x10;
      do {
        if (bVar9 != (*(UMVVMViewModelBase **)pFVar3 != param_1)) break;
        iVar6 = iVar6 + 1;
        lVar4 = lVar4 + 1;
        pFVar3 = pFVar3 + 0x18;
      } while (lVar4 < lVar7);
    }
    if (bVar9 != false) {
      if (iVar8 != iVar5) {
        memmove(pFVar2 + (longlong)iVar8 * 0x18,pFVar2 + (longlong)iVar5 * 0x18,
                (longlong)(iVar6 - iVar5) * 0x18);
      }
      iVar8 = iVar8 + (iVar6 - iVar5);
    }
    bVar9 = (bool)(bVar9 ^ 1);
    iVar5 = iVar6;
    if (lVar7 <= lVar4) {
      (this->ViewModelInstances).ArrayNum = iVar8;
      if (iVar1 - iVar8 != 0) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnCollectionChangedDelegate);
      }
      return iVar1 - iVar8;
    }
  } while( true );
}

// RemoveInstance @ 14a75dc40

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FMVVMViewModelCollection::RemoveInstance
          (FMVVMViewModelCollection *this,FMVVMViewModelContext *param_1)

{
  int *piVar1;
  int iVar2;
  TObjectPtr<UClass>_u_0 *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  TObjectPtr<UClass>_u_0 *pTVar12;
  TObjectPtr<UClass>_u_0 local_28;
  FName local_20;
  TObjectPtr<UClass>_u_0 local_18;
  TObjectPtr<UClass>_u_0 local_10;
  
  local_28.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->ContextClass).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_28.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  local_20 = param_1->ContextName;
  pTVar3 = (TObjectPtr<UClass>_u_0 *)(this->ViewModelInstances).AllocatorInstance.Data;
  iVar9 = (this->ViewModelInstances).ArrayNum;
  pTVar12 = pTVar3;
  while( true ) {
    if (pTVar12 == pTVar3 + (longlong)iVar9 * 3) {
      return false;
    }
    local_18 = (TObjectPtr<UClass>_u_0)pTVar12->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18.DebugPtr != (UClass *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_18.DebugPtr);
    }
    local_10 = pTVar12[1];
    bVar6 = FMVVMViewModelContext::operator==
                      ((FMVVMViewModelContext *)&local_18.ObjectPtr,
                       (FMVVMViewModelContext *)&local_28.ObjectPtr);
    if (bVar6) break;
    pTVar12 = pTVar12 + 3;
  }
  lVar10 = ((longlong)pTVar12 - (longlong)pTVar3) / 6 +
           ((longlong)pTVar12 - (longlong)pTVar3 >> 0x3f);
  uVar11 = (int)(lVar10 >> 2) - (int)(lVar10 >> 0x3f);
  if (uVar11 == 0xffffffff) {
    return false;
  }
  uVar8 = 0;
  if ((int)uVar11 < (this->ViewModelInstances).ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar2 = (this->ViewModelInstances).ArrayNum;
  pFVar4 = (this->ViewModelInstances).AllocatorInstance.Data;
  iVar9 = iVar2 + ~uVar11;
  if (1 < iVar9) {
    iVar9 = 1;
  }
  if (iVar9 != 0) {
    memmove(pFVar4 + (longlong)(int)uVar11 * 0x18,pFVar4 + (longlong)(iVar2 - iVar9) * 0x18,
            (longlong)iVar9 * 0x18);
  }
  piVar1 = &(this->ViewModelInstances).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,(ForAnyElementType *)this,(this->ViewModelInstances).ArrayNum,
             &(this->ViewModelInstances).ArrayMax);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnCollectionChangedDelegate);
  return true;
}

// Reset @ 14a75e290

void __thiscall FMVVMViewModelCollection::Reset(FMVVMViewModelCollection *this)

{
  (this->ViewModelInstances).ArrayNum = 0;
  if ((this->ViewModelInstances).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,&(this->ViewModelInstances).ArrayMax);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnCollectionChangedDelegate);
  return;
}

