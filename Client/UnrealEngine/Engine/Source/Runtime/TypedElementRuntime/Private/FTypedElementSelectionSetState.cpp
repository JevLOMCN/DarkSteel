// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 2

// StaticStruct @ 14453b5f0

UScriptStruct * __cdecl FTypedElementSelectionSetState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementSelectionSetState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementRuntime();
    Z_Registration_Info_UScriptStruct_FTypedElementSelectionSetState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSelectionSetState,(UObject *)pUVar1,
                         L"TypedElementSelectionSetState");
  }
  return Z_Registration_Info_UScriptStruct_FTypedElementSelectionSetState.OuterSingleton;
}

// operator= @ 14453f560

FTypedElementSelectionSetState * __thiscall
FTypedElementSelectionSetState::operator=
          (FTypedElementSelectionSetState *this,FTypedElementSelectionSetState *param_1)

{
  TArray<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = &param_1->TransactedElements;
  pTVar2 = &this->TransactedElements;
  (this->CreatedFromSelectionSet).WeakPtr = (param_1->CreatedFromSelectionSet).WeakPtr;
  if (pTVar2 != pTVar1) {
    DestructItems<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,int>
              ((TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>
                *)(pTVar2->AllocatorInstance).Data,(this->TransactedElements).ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TransactedElements).ArrayNum = (param_1->TransactedElements).ArrayNum;
    (this->TransactedElements).ArrayMax = (param_1->TransactedElements).ArrayMax;
    (param_1->TransactedElements).ArrayNum = 0;
    (param_1->TransactedElements).ArrayMax = 0;
  }
  return this;
}

