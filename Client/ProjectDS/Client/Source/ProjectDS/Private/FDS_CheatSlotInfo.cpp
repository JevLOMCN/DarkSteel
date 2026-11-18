// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// FDS_CheatSlotInfo @ 14ba316b0

FDS_CheatSlotInfo * __thiscall
FDS_CheatSlotInfo::FDS_CheatSlotInfo(FDS_CheatSlotInfo *this,FDS_CheatSlotInfo *param_1)

{
  TMap<int,FDS_CheatSlotParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>_>
  *this_00;
  undefined1 *puVar1;
  
  this->CheatIndex = param_1->CheatIndex;
  this->Tab = param_1->Tab;
  ::FString::FString(&this->CheatName,&param_1->CheatName);
  ::FString::FString(&this->Command,&param_1->Command);
  this_00 = &this->CheatSlotParamMap;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->CheatSlotParamMap).field_0x8 = 0;
  puVar1 = &(this->CheatSlotParamMap).field_0x48;
  *(undefined8 *)&(this->CheatSlotParamMap).field_0x20 = 0;
  *(undefined4 *)&(this->CheatSlotParamMap).field_0x28 = 0;
  *(undefined4 *)&(this->CheatSlotParamMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CheatSlotParamMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CheatSlotParamMap).field_0x34 = 0;
  *(undefined8 *)&(this->CheatSlotParamMap).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_00 != &param_1->CheatSlotParamMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->CheatSlotParamMap).field_0x38,(int *)puVar1,
               (ForElementType<FSetElementId> *)&(param_1->CheatSlotParamMap).field_0x38,
               *(int *)&(param_1->CheatSlotParamMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->CheatSlotParamMap);
  }
  return this;
}

