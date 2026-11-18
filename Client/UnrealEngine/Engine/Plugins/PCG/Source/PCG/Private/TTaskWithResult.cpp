// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ~TTaskWithResult<TTuple<int,int>_> @ 149d34be0

void __thiscall
UE::Tasks::Private::TTaskWithResult<TTuple<int,int>_>::~TTaskWithResult<TTuple<int,int>_>
          (TTaskWithResult<TTuple<int,int>_> *this)

{
  this->_padding_ = (longlong)&___7__TTaskWithResult_U__TTuple_HH___Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase((FTaskBase *)this);
  return;
}

// ~TTaskWithResult<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_> @ 149d34c00

void __thiscall
UE::Tasks::Private::TTaskWithResult<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_>::
~TTaskWithResult<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_>
          (TTaskWithResult<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_> *this)

{
  void *pvVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TTaskWithResult_V__TArray_UFPCGPoint__V__TSizedDefaultAllocator__0CA______Private_Tasks_UE__6B_
  ;
  pvVar1 = *(void **)(this->ResultStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FTaskBase::~FTaskBase((FTaskBase *)this);
  return;
}

