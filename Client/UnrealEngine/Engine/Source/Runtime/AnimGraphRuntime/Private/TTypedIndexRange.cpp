// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// operator= @ 14640a540

TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *
__thiscall
UE::Anim::TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
::operator=(TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
            *this,TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                  *param_1)

{
  int iVar1;
  void *_Src;
  
  if (this != param_1) {
    _Src = *(void **)param_1;
    iVar1 = *(int *)&param_1->field_0x8;
    *(int *)&this->field_0x8 = iVar1;
    if ((iVar1 == 0) && (*(int *)&this->field_0xc == 0)) {
      *(undefined4 *)&this->field_0xc = 0;
      return this;
    }
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,*(int *)&this->field_0xc,(ForAnyElementType *)this,iVar1,
               (int *)&this->field_0xc);
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1);
    }
  }
  return this;
}

