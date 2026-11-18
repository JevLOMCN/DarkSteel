// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// WriteField<TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>_> @ 14d3cad90

void __thiscall
TraceServices::FMetadataSchema::FWriter::
WriteField<TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>_>
          (FWriter *this,uchar param_1,void *param_2,uchar param_3,
          TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *param_4)

{
  FField *pFVar1;
  ForElementType<unsigned_char> FVar2;
  int iVar3;
  byte bVar4;
  ForElementType<unsigned_char> FVar5;
  
  pFVar1 = this->Buffer;
  bVar4 = pFVar1[param_1].Offset;
  if (param_4->ArrayNum < (int)((uint)bVar4 + (uint)param_3)) {
    iVar3 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                      (1,1,(uint)param_3,&param_4->AllocatorInstance,&param_4->ArrayNum,
                       &param_4->ArrayMax);
    FVar2 = (param_4->AllocatorInstance).SecondaryData;
    FVar5 = (ForElementType<unsigned_char>)param_4;
    if (FVar2 != (ForElementType<unsigned_char>)0x0) {
      FVar5 = FVar2;
    }
    memset((void *)((longlong)iVar3 + (longlong)FVar5),0,(ulonglong)param_3);
    bVar4 = pFVar1[param_1].Offset;
  }
  FVar2 = (param_4->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<unsigned_char>)0x0) {
    param_4 = (TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)
              FVar2;
  }
  memcpy((void *)((ulonglong)bVar4 + (longlong)param_4),param_2,(ulonglong)param_3);
  return;
}

