// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 1

// Reset @ 144547f40

void __thiscall
TArray<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,TSizedDefaultAllocator<32>_>
::Reset(TArray<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,int>
              ((TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>
                *)pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,int>
            ((TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>
              *)pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

