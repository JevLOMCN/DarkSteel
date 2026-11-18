// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// operator<<<FTopLevelAssetPath,TSizedDefaultAllocator<32>,0> @ 141e4f240

FCbWriter * __thiscall
FCbWriter::operator<<<FTopLevelAssetPath,TSizedDefaultAllocator<32>,0>
          (FCbWriter *this,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FTopLevelAssetPath *this_00;
  FTopLevelAssetPath *pFVar2;
  undefined1 local_res8 [8];
  
  BeginArray(this);
  iVar1 = param_1->ArrayNum;
  this_00 = (FTopLevelAssetPath *)(param_1->AllocatorInstance).Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTopLevelAssetPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FTopLevelAssetPath::WriteCompactBinary(this_00,this);
    this_00 = this_00 + 1;
  }
  EndArray(this);
  return this;
}

// operator<<<FName,TSizedDefaultAllocator<32>,0> @ 141e4f2c0

FCbWriter * __thiscall
FCbWriter::operator<<<FName,TSizedDefaultAllocator<32>,0>
          (FCbWriter *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  int iVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  BeginArray(this);
  pFVar3 = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    operator<<(this,*pFVar3);
    pFVar3 = pFVar3 + 1;
  }
  EndArray(this);
  return this;
}

