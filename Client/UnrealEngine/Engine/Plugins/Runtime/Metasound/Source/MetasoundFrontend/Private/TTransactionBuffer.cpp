// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// AddTransaction @ 14ada6030

int __thiscall
Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction>::
AddTransaction(TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *this,
              FInterfaceRegistryTransaction *param_1)

{
  int *piVar1;
  int iVar2;
  FInterfaceRegistryTransaction *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  if (this == (TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar3 = (FInterfaceRegistryTransaction *)(this->TransactionHistory).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->TransactionHistory).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
  }
  iVar7 = (this->TransactionHistory).ArrayNum;
  piVar1 = &(this->TransactionHistory).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->TransactionHistory).AllocatorInstance,piVar1);
  }
  (this->TransactionHistory).ArrayNum = iVar7 + 1;
  pFVar8 = (this->TransactionHistory).AllocatorInstance.Data + (longlong)iVar7 * 0x30;
  *pFVar8 = (FScriptContainerElement)param_1->Type;
  *(undefined8 *)(pFVar8 + 8) = 0;
  *(FScriptContainerElement **)(pFVar8 + 8) = (param_1->Key).Data.AllocatorInstance.Data;
  (param_1->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar8 + 0x10) = (param_1->Key).Data.ArrayNum;
  *(int *)(pFVar8 + 0x14) = (param_1->Key).Data.ArrayMax;
  (param_1->Key).Data.ArrayNum = 0;
  (param_1->Key).Data.ArrayMax = 0;
  uVar5 = (param_1->InterfaceVersion).Name.Number;
  iVar7 = (param_1->InterfaceVersion).Number.Major;
  iVar2 = (param_1->InterfaceVersion).Number.Minor;
  *(uint *)(pFVar8 + 0x18) = (param_1->InterfaceVersion).Name.ComparisonIndex.Value;
  *(uint *)(pFVar8 + 0x1c) = uVar5;
  *(int *)(pFVar8 + 0x20) = iVar7;
  *(int *)(pFVar8 + 0x24) = iVar2;
  *(ulong64 *)(pFVar8 + 0x28) = param_1->Timestamp;
  iVar7 = (this->TransactionHistory).ArrayNum;
  iVar2 = this->NumRemovedTransactions;
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return iVar7 + iVar2;
}

// AddTransaction @ 14ae61830

int __thiscall
Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>::
AddTransaction(TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *this,
              FNodeClassRegistryTransaction *param_1)

{
  int *piVar1;
  int iVar2;
  FNodeClassRegistryTransaction *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FName FVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  
  if (this == (TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar3 = (FNodeClassRegistryTransaction *)(this->TransactionHistory).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->TransactionHistory).ArrayMax)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      iVar11 = (*pcVar4)();
      return iVar11;
    }
  }
  iVar11 = (this->TransactionHistory).ArrayNum;
  piVar1 = &(this->TransactionHistory).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&(this->TransactionHistory).AllocatorInstance,piVar1);
  }
  (this->TransactionHistory).ArrayNum = iVar11 + 1;
  pFVar12 = (this->TransactionHistory).AllocatorInstance.Data + (longlong)iVar11 * 0x50;
  *pFVar12 = (FScriptContainerElement)param_1->Type;
  FVar8 = (param_1->NodeClassInfo).ClassName.Name;
  *(FName *)(pFVar12 + 4) = (param_1->NodeClassInfo).ClassName.Namespace;
  *(FName *)(pFVar12 + 0xc) = FVar8;
  *(FName *)(pFVar12 + 0x14) = (param_1->NodeClassInfo).ClassName.Variant;
  pFVar12[0x1c] = (FScriptContainerElement)(param_1->NodeClassInfo).Type;
  uVar9 = *(undefined8 *)&(param_1->NodeClassInfo).AssetClassID.C;
  *(undefined8 *)(pFVar12 + 0x20) = *(undefined8 *)&(param_1->NodeClassInfo).AssetClassID;
  *(undefined8 *)(pFVar12 + 0x28) = uVar9;
  uVar5 = (param_1->NodeClassInfo).AssetPath.PackageName.Number;
  uVar6 = (param_1->NodeClassInfo).AssetPath.AssetName.ComparisonIndex.Value;
  uVar7 = (param_1->NodeClassInfo).AssetPath.AssetName.Number;
  *(uint *)(pFVar12 + 0x30) = (param_1->NodeClassInfo).AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)(pFVar12 + 0x34) = uVar5;
  *(uint *)(pFVar12 + 0x38) = uVar6;
  *(uint *)(pFVar12 + 0x3c) = uVar7;
  *(FMetasoundFrontendVersionNumber *)(pFVar12 + 0x40) = (param_1->NodeClassInfo).Version;
  *(ulong64 *)(pFVar12 + 0x48) = param_1->Timestamp;
  iVar11 = (this->TransactionHistory).ArrayNum;
  iVar2 = this->NumRemovedTransactions;
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return iVar11 + iVar2;
}

// RemoveTransactionsStreamedToAllReaders @ 14ae879f0

void __thiscall
Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction>::
RemoveTransactionsStreamedToAllReaders
          (TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FInterfaceRegistryTransaction *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  
  if (MetaSoundFrontendDiscardStreamedRegistryTransactionsCVar != 0) {
    pFVar9 = (this->ReaderPositions).Pairs.AllocatorInstance.Data;
    iVar3 = (this->ReaderPositions).Pairs.ArrayNum;
    pFVar10 = (FScriptContainerElement *)0x0;
    pFVar2 = pFVar9 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->ReaderPositions).Pairs.ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TTuple<unsigned_int,int>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar9 == pFVar2) break;
      if ((pFVar10 == (FScriptContainerElement *)0x0) ||
         (*(int *)(pFVar9 + 4) < *(int *)(pFVar10 + 4))) {
        pFVar10 = pFVar9;
      }
      pFVar9 = pFVar9 + 8;
    }
    if (pFVar10 == (FScriptContainerElement *)0x0) {
      if ((this->ReaderPositions).Pairs.ArrayNum == 0) {
        iVar3 = (this->TransactionHistory).ArrayNum;
        piVar1 = &(this->TransactionHistory).ArrayMax;
        this->NumRemovedTransactions = this->NumRemovedTransactions + iVar3;
        pFVar4 = (FInterfaceRegistryTransaction *)(this->TransactionHistory).AllocatorInstance.Data;
        if (*piVar1 < 0) {
          DestructItems<Metasound::Frontend::FInterfaceRegistryTransaction,int>(pFVar4,iVar3);
          (this->TransactionHistory).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,0,&(this->TransactionHistory).AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<Metasound::Frontend::FInterfaceRegistryTransaction,int>(pFVar4,iVar3);
          (this->TransactionHistory).ArrayNum = 0;
        }
      }
    }
    else {
      uVar8 = *(int *)(pFVar10 + 4) - this->NumRemovedTransactions;
      if (0 < (int)uVar8) {
        uVar7 = 0;
        if ((int)uVar8 <= (this->TransactionHistory).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TArray<Metasound::Frontend::FInterfaceRegistryTransaction,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(&this->TransactionHistory,0,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&(this->TransactionHistory).AllocatorInstance,
                   (this->TransactionHistory).ArrayNum,&(this->TransactionHistory).ArrayMax);
        this->NumRemovedTransactions = this->NumRemovedTransactions + uVar8;
      }
    }
  }
  return;
}

// RemoveTransactionsStreamedToAllReaders @ 14ae87b70

void __thiscall
Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>::
RemoveTransactionsStreamedToAllReaders
          (TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  
  if (MetaSoundFrontendDiscardStreamedRegistryTransactionsCVar != 0) {
    pFVar8 = (this->ReaderPositions).Pairs.AllocatorInstance.Data;
    iVar6 = (this->ReaderPositions).Pairs.ArrayNum;
    pFVar9 = (FScriptContainerElement *)0x0;
    pFVar2 = pFVar8 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->ReaderPositions).Pairs.ArrayNum != iVar6) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TTuple<unsigned_int,int>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar8 == pFVar2) break;
      if ((pFVar9 == (FScriptContainerElement *)0x0) ||
         (*(int *)(pFVar8 + 4) < *(int *)(pFVar9 + 4))) {
        pFVar9 = pFVar8;
      }
      pFVar8 = pFVar8 + 8;
    }
    if (pFVar9 == (FScriptContainerElement *)0x0) {
      if ((this->ReaderPositions).Pairs.ArrayNum == 0) {
        this->NumRemovedTransactions =
             this->NumRemovedTransactions + (this->TransactionHistory).ArrayNum;
        piVar1 = &(this->TransactionHistory).ArrayMax;
        (this->TransactionHistory).ArrayNum = 0;
        if (*piVar1 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,0,&(this->TransactionHistory).AllocatorInstance,0,piVar1);
        }
      }
    }
    else {
      uVar7 = *(int *)(pFVar9 + 4) - this->NumRemovedTransactions;
      if (0 < (int)uVar7) {
        uVar5 = 0;
        if ((int)uVar7 <= (this->TransactionHistory).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->TransactionHistory).AllocatorInstance.Data;
        iVar6 = (this->TransactionHistory).ArrayNum - uVar7;
        if (iVar6 != 0) {
          memmove(pFVar2,pFVar2 + (longlong)(int)uVar7 * 0x50,(longlong)iVar6 * 0x50);
        }
        piVar1 = &(this->TransactionHistory).ArrayNum;
        *piVar1 = *piVar1 - uVar7;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&(this->TransactionHistory).AllocatorInstance,
                   (this->TransactionHistory).ArrayNum,&(this->TransactionHistory).ArrayMax);
        this->NumRemovedTransactions = this->NumRemovedTransactions + uVar7;
        return;
      }
    }
  }
  return;
}

