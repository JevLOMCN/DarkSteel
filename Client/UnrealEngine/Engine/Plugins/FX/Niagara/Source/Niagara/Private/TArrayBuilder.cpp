// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator_TArray<FMessageAddress,TSizedDefaultAllocator<32>_> @ 14927c700

TArray<FMessageAddress,TSizedDefaultAllocator<32>_> * __thiscall
TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::
operator_TArray<FMessageAddress,TSizedDefaultAllocator<32>_>
          (TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *this,
          TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Array).ArrayNum;
  _Src = (this->Array).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
  return __return_storage_ptr__;
}

