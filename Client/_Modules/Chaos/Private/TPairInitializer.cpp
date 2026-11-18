// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// operator<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>_TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_> @ 143968460

TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<Chaos::FUniqueIdx_const_&,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_const_&>
::
operator<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>_TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<Chaos::FUniqueIdx_const_&,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  
  pTVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(int *)__return_storage_ptr__ = this->Key->Idx;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  _Src = (pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 2);
  }
  return __return_storage_ptr__;
}

