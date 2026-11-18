// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 2

// Empty @ 14e663170

void __thiscall
TArray<UE::Interchange::FCompletedQueryTaskProgressCommand::FTaskProgressData,TSizedDefaultAllocator<32>_>
::Empty(TArray<UE::Interchange::FCompletedQueryTaskProgressCommand::FTaskProgressData,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAtImpl @ 14e667210

void __thiscall
TArray<TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>,int>
            ((TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>
              *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

