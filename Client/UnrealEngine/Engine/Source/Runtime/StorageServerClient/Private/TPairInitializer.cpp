// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 1

// operator<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 148cad4d0

TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<FIoChunkId_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&>::
operator<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<FIoChunkId_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FIoChunkId *pFVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *_Src;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  
  pFVar3 = this->Key;
  puVar1 = &__return_storage_ptr__->field_0x10;
  pTVar4 = this->Value;
  uVar5 = pFVar3->Id[1];
  uVar6 = pFVar3->Id[2];
  uVar7 = pFVar3->Id[3];
  uVar8 = pFVar3->Id[4];
  uVar9 = pFVar3->Id[5];
  uVar10 = pFVar3->Id[6];
  uVar11 = pFVar3->Id[7];
  __return_storage_ptr__->field_0x0 = pFVar3->Id[0];
  __return_storage_ptr__->field_0x1 = uVar5;
  __return_storage_ptr__->field_0x2 = uVar6;
  __return_storage_ptr__->field_0x3 = uVar7;
  __return_storage_ptr__->field_0x4 = uVar8;
  __return_storage_ptr__->field_0x5 = uVar9;
  __return_storage_ptr__->field_0x6 = uVar10;
  __return_storage_ptr__->field_0x7 = uVar11;
  uVar5 = pFVar3->Id[9];
  uVar6 = pFVar3->Id[10];
  uVar7 = pFVar3->Id[0xb];
  __return_storage_ptr__->field_0x8 = pFVar3->Id[8];
  __return_storage_ptr__->field_0x9 = uVar5;
  __return_storage_ptr__->field_0xa = uVar6;
  __return_storage_ptr__->field_0xb = uVar7;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar4->ArrayNum;
  _Src = (pTVar4->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x18 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x1c);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2);
  }
  return __return_storage_ptr__;
}

