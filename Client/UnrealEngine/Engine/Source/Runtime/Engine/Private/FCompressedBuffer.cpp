// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator= @ 148511bd0

FCompressedBuffer * __thiscall
FCompressedBuffer::operator=(FCompressedBuffer *this,FCompressedBuffer *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ForElementType<FSharedBuffer> FVar4;
  ForElementType<FSharedBuffer> FVar5;
  
  if (this != param_1) {
    FVar4 = (this->CompressedData).Segments.AllocatorInstance.SecondaryData;
    FVar5 = (ForElementType<FSharedBuffer>)this;
    if (FVar4 != (ForElementType<FSharedBuffer>)0x0) {
      FVar5 = FVar4;
    }
    DestructItems<FSharedBuffer,int>
              ((FSharedBuffer *)FVar5,(this->CompressedData).Segments.ArrayNum);
    FVar4 = (param_1->CompressedData).Segments.AllocatorInstance.SecondaryData;
    piVar1 = &(this->CompressedData).Segments.ArrayMax;
    iVar2 = (param_1->CompressedData).Segments.ArrayNum;
    iVar3 = *piVar1;
    if (FVar4 != (ForElementType<FSharedBuffer>)0x0) {
      param_1 = (FCompressedBuffer *)FVar4;
    }
    (this->CompressedData).Segments.ArrayNum = iVar2;
    if ((iVar2 == 0) && (iVar3 == 0)) {
      *piVar1 = 1;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
              (8,8,iVar2,iVar3,(ForElementType<FSharedBuffer> *)this,iVar2,piVar1);
    FVar4 = (this->CompressedData).Segments.AllocatorInstance.SecondaryData;
    FVar5 = (ForElementType<FSharedBuffer>)this;
    if (FVar4 != (ForElementType<FSharedBuffer>)0x0) {
      FVar5 = FVar4;
    }
    ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar5,(FSharedBuffer *)param_1,iVar2);
  }
  return this;
}

