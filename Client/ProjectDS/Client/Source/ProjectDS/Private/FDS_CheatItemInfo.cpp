// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// FDS_CheatItemInfo @ 14ba315e0

FDS_CheatItemInfo * __thiscall
FDS_CheatItemInfo::FDS_CheatItemInfo(FDS_CheatItemInfo *this,FDS_CheatItemInfo *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->CharNameIDs;
  this->ItemTID = param_1->ItemTID;
  this->ItemNameID = param_1->ItemNameID;
  this->ItemType = param_1->ItemType;
  this->GradeType = param_1->GradeType;
  this->CharEquipType = param_1->CharEquipType;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CharNameIDs).ArrayMax;
  iVar3 = (param_1->CharNameIDs).ArrayNum;
  _Src = (param_1->CharNameIDs).AllocatorInstance.Data;
  (this->CharNameIDs).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  this->bIsTradeAble = param_1->bIsTradeAble;
  ::FString::FString(&this->ItemQuantity,&param_1->ItemQuantity);
  return this;
}

