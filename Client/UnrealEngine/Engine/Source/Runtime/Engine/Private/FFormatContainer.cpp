// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FlushData @ 148282660

void __thiscall FFormatContainer::FlushData(FFormatContainer *this)

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
  return;
}

