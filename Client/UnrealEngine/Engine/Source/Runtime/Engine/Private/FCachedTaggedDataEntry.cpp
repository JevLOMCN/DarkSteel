// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SyncCache @ 1488e23d0

FSerializedTaggedData * __thiscall
UE::Transaction::FDiffableObjectDataWriter::FCachedTaggedDataEntry::SyncCache
          (FCachedTaggedDataEntry *this,FDiffableObject *param_1,FName param_2)

{
  FSerializedTaggedData *pFVar1;
  TTuple<FName,UE::Transaction::FSerializedTaggedData> *pTVar2;
  FName local_res18 [2];
  
  if (this->CachedKey != param_2) {
    this->CachedKey = param_2;
    local_res18[0] = param_2;
    pFVar1 = TSortedMap<FName,UE::Transaction::FSerializedTaggedData,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(&param_1->SerializedTaggedData,param_2);
    if (pFVar1 == (FSerializedTaggedData *)0x0) {
      pTVar2 = TSortedMap<FName,UE::Transaction::FSerializedTaggedData,TSizedDefaultAllocator<32>,FNameFastLess>
               ::AllocateMemoryForEmplace<FName_const_&>(&param_1->SerializedTaggedData,local_res18)
      ;
      *(uint *)&pTVar2->field_0x0 = local_res18[0].ComparisonIndex.Value;
      *(uint *)&pTVar2->field_0x4 = local_res18[0].Number;
      pFVar1 = (FSerializedTaggedData *)&pTVar2->field_0x8;
      *(undefined8 *)pFVar1 = 0xffffffffffffffff;
      *(undefined8 *)&pTVar2->field_0x10 = 0;
    }
    this->CachedEntryPtr = pFVar1;
    return pFVar1;
  }
  return this->CachedEntryPtr;
}

