// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// ~FFormatContainer @ 146d78130

void __thiscall FFormatContainer::~FFormatContainer(FFormatContainer *this)

{
  int *piVar1;
  int iVar2;
  FBulkData *this_00;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Formats).Pairs.AllocatorInstance.Data;
  iVar2 = (this->Formats).Pairs.ArrayNum;
  pFVar4 = pFVar3 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->Formats).Pairs.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<FName,TBulkData<unsigned_char>_*>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    this_00 = *(FBulkData **)(pFVar3 + 8);
    if (this_00 != (FBulkData *)0x0) {
      FBulkData::~FBulkData(this_00);
      ::operator_delete(this_00,0x28);
    }
    pFVar3 = pFVar3 + 0x10;
  }
  piVar1 = &(this->Formats).Pairs.ArrayMax;
  (this->Formats).Pairs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar3 = (this->Formats).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// GetFormat @ 146d9b420

TBulkData<unsigned_char> * __thiscall
FFormatContainer::GetFormat(FFormatContainer *this,FName param_1)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  TBulkData<unsigned_char> **ppTVar8;
  TBulkData<unsigned_char> *pTVar9;
  TTuple<FName,TBulkData<unsigned_char>_*> *pTVar10;
  FName local_res10;
  
  local_res10 = param_1;
  ppTVar8 = TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>::
            Find(&this->Formats,param_1);
  if ((ppTVar8 == (TBulkData<unsigned_char> **)0x0) ||
     (pTVar9 = *ppTVar8, pTVar9 == (TBulkData<unsigned_char> *)0x0)) {
    pTVar9 = ::operator_new(0x28);
    if (pTVar9 == (TBulkData<unsigned_char> *)0x0) {
      pTVar9 = (TBulkData<unsigned_char> *)0x0;
    }
    else {
      *(undefined8 *)pTVar9 = 0;
      *(undefined8 *)&pTVar9->field_0x8 = 0;
      *(undefined8 *)&pTVar9->field_0x10 = 0;
      *(undefined4 *)&pTVar9->field_0xd = 0xffffffff;
      pTVar9->field_0x11 = 0xff;
      uVar1 = FIoChunkId::InvalidChunkId.Id[1];
      uVar2 = FIoChunkId::InvalidChunkId.Id[2];
      uVar3 = FIoChunkId::InvalidChunkId.Id[3];
      uVar4 = FIoChunkId::InvalidChunkId.Id[4];
      uVar5 = FIoChunkId::InvalidChunkId.Id[5];
      uVar6 = FIoChunkId::InvalidChunkId.Id[6];
      uVar7 = FIoChunkId::InvalidChunkId.Id[7];
      pTVar9->field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
      pTVar9->field_0x19 = uVar1;
      pTVar9->field_0x1a = uVar2;
      pTVar9->field_0x1b = uVar3;
      pTVar9->field_0x1c = uVar4;
      pTVar9->field_0x1d = uVar5;
      pTVar9->field_0x1e = uVar6;
      pTVar9->field_0x1f = uVar7;
      uVar1 = FIoChunkId::InvalidChunkId.Id[9];
      uVar2 = FIoChunkId::InvalidChunkId.Id[10];
      uVar3 = FIoChunkId::InvalidChunkId.Id[0xb];
      pTVar9->field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
      pTVar9->field_0x21 = uVar1;
      pTVar9->field_0x22 = uVar2;
      pTVar9->field_0x23 = uVar3;
    }
    pTVar10 = TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>
              ::AllocateMemoryForEmplace<FName_const_&>(&this->Formats,&local_res10);
    *(uint *)&pTVar10->field_0x0 = local_res10.ComparisonIndex.Value;
    *(uint *)&pTVar10->field_0x4 = local_res10.Number;
    *(TBulkData<unsigned_char> **)&pTVar10->field_0x8 = pTVar9;
  }
  return pTVar9;
}

