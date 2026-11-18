// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag> @ 1470f1110

FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag> * __thiscall
FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>::
FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>
          (FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *this)

{
  FNameEntryId FVar1;
  FName *pFVar2;
  uint uVar3;
  void *_Dst;
  undefined1 *_Src;
  uint uVar4;
  undefined1 local_38 [16];
  undefined1 *local_28;
  int local_20;
  undefined4 local_1c;
  FName local_18 [2];
  
  pFVar2 = ::FName::FName(local_18,L"RemoveTags");
  FVar1.Value = (pFVar2->ComparisonIndex).Value;
  uVar3 = pFVar2->Number;
  local_28 = (undefined1 *)0x0;
  local_20 = 0;
  local_1c = 0x80;
  UE::Mass::TMultiTypeList<FFarmJustBecameReadyToHarvestTag>::
  PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
            ((TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
             local_38);
  *(uint *)&this->field_0xc = FVar1.Value;
  *(uint *)&this->field_0x10 = uVar3;
  *(undefined2 *)&this->field_0x8 = 0x300;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7FMassCommandChangeTags__6B_;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  uVar3 = local_20 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar3) {
    uVar4 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar4 = uVar3;
    }
    *(uint *)&this->field_0x6c = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x50,0);
  }
  *(int *)&this->field_0x68 = local_20;
  if (local_20 != 0) {
    _Src = local_38;
    if (local_28 != (undefined1 *)0x0) {
      _Src = local_28;
    }
    _Dst = *(void **)&this->field_0x60;
    if (*(void **)&this->field_0x60 == (void *)0x0) {
      _Dst = &this->field_0x50;
    }
    memcpy(_Dst,_Src,(ulonglong)(local_20 + 0x1fU >> 5) << 2);
  }
  if (local_28 != (undefined1 *)0x0) {
    FMemory::Free(local_28);
  }
  *(undefined ***)this =
       &___7__FMassCommandRemoveTagsInternal__0A_UFFarmJustBecameReadyToHarvestTag____6B_;
  return this;
}

// FMassCommandRemoveTagsInternal<0,FTestTag_A> @ 1470f1220

FMassCommandRemoveTagsInternal<0,FTestTag_A> * __thiscall
FMassCommandRemoveTagsInternal<0,FTestTag_A>::FMassCommandRemoveTagsInternal<0,FTestTag_A>
          (FMassCommandRemoveTagsInternal<0,FTestTag_A> *this)

{
  FNameEntryId FVar1;
  FName *pFVar2;
  uint uVar3;
  void *_Dst;
  undefined1 *_Src;
  uint uVar4;
  undefined1 local_38 [16];
  undefined1 *local_28;
  int local_20;
  undefined4 local_1c;
  FName local_18 [2];
  
  pFVar2 = ::FName::FName(local_18,L"RemoveTags");
  FVar1.Value = (pFVar2->ComparisonIndex).Value;
  uVar3 = pFVar2->Number;
  local_28 = (undefined1 *)0x0;
  local_20 = 0;
  local_1c = 0x80;
  UE::Mass::TMultiTypeList<FTestTag_A>::
  PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
            ((TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
             local_38);
  *(uint *)&this->field_0xc = FVar1.Value;
  *(uint *)&this->field_0x10 = uVar3;
  *(undefined2 *)&this->field_0x8 = 0x300;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7FMassCommandChangeTags__6B_;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  uVar3 = local_20 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar3) {
    uVar4 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar4 = uVar3;
    }
    *(uint *)&this->field_0x6c = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x50,0);
  }
  *(int *)&this->field_0x68 = local_20;
  if (local_20 != 0) {
    _Src = local_38;
    if (local_28 != (undefined1 *)0x0) {
      _Src = local_28;
    }
    _Dst = *(void **)&this->field_0x60;
    if (*(void **)&this->field_0x60 == (void *)0x0) {
      _Dst = &this->field_0x50;
    }
    memcpy(_Dst,_Src,(ulonglong)(local_20 + 0x1fU >> 5) << 2);
  }
  if (local_28 != (undefined1 *)0x0) {
    FMemory::Free(local_28);
  }
  *(undefined ***)this = &___7__FMassCommandRemoveTagsInternal__0A_UFTestTag_A____6B_;
  return this;
}

