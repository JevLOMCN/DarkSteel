// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FCompressedBuffer @ 141f20ed0

FCompressedBuffer * __thiscall
FCompressedBuffer::FCompressedBuffer(FCompressedBuffer *this,FCompressedBuffer *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSharedBuffer> FVar3;
  ForElementType<FSharedBuffer> FVar4;
  
  (this->CompressedData).Segments.AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  FVar3 = (param_1->CompressedData).Segments.AllocatorInstance.SecondaryData;
  iVar2 = (param_1->CompressedData).Segments.ArrayNum;
  (this->CompressedData).Segments.ArrayNum = iVar2;
  if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
    param_1 = (FCompressedBuffer *)FVar3;
  }
  piVar1 = &(this->CompressedData).Segments.ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
            (8,8,iVar2,0,(ForElementType<FSharedBuffer> *)this,iVar2,piVar1);
  FVar3 = (this->CompressedData).Segments.AllocatorInstance.SecondaryData;
  FVar4 = (ForElementType<FSharedBuffer>)this;
  if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
    FVar4 = FVar3;
  }
  ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar4,(FSharedBuffer *)param_1,iVar2);
  return this;
}

