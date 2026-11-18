// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B> @ 1470f1330

FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B> * __thiscall
FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>::
FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>
          (FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B> *this)

{
  FNameEntryId FVar1;
  uint uVar2;
  FName *pFVar3;
  uint uVar4;
  void *pvVar5;
  undefined1 *puVar6;
  undefined1 local_58 [16];
  undefined1 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined1 *local_28;
  int local_20;
  undefined4 local_1c;
  FName local_18 [2];
  
  pFVar3 = ::FName::FName(local_18,L"SwapTags");
  FVar1.Value = (pFVar3->ComparisonIndex).Value;
  uVar4 = pFVar3->Number;
  local_28 = (undefined1 *)0x0;
  local_20 = 0;
  local_1c = 0x80;
  UE::Mass::TMultiTypeList<FTestTag_A>::
  PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
            ((TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
             local_38);
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  UE::Mass::TMultiTypeList<FTestTag_B>::
  PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
            ((TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
             local_58);
  *(uint *)&this->field_0xc = FVar1.Value;
  *(uint *)&this->field_0x10 = uVar4;
  *(undefined2 *)&this->field_0x8 = 0x400;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7FMassCommandChangeTags__6B_;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  uVar4 = local_40 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar4) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar2 = uVar4;
    }
    *(uint *)&this->field_0x4c = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x30,0);
  }
  *(int *)&this->field_0x48 = local_40;
  if (local_40 != 0) {
    puVar6 = local_58;
    if (local_48 != (undefined1 *)0x0) {
      puVar6 = local_48;
    }
    pvVar5 = *(void **)&this->field_0x40;
    if (*(void **)&this->field_0x40 == (void *)0x0) {
      pvVar5 = &this->field_0x30;
    }
    memcpy(pvVar5,puVar6,(ulonglong)(local_40 + 0x1fU >> 5) << 2);
  }
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  uVar4 = local_20 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar4) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar2 = uVar4;
    }
    *(uint *)&this->field_0x6c = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x50,0);
  }
  *(int *)&this->field_0x68 = local_20;
  if (local_20 != 0) {
    puVar6 = local_38;
    if (local_28 != (undefined1 *)0x0) {
      puVar6 = local_28;
    }
    pvVar5 = *(void **)&this->field_0x60;
    if (*(void **)&this->field_0x60 == (void *)0x0) {
      pvVar5 = &this->field_0x50;
    }
    memcpy(pvVar5,puVar6,(ulonglong)(local_20 + 0x1fU >> 5) << 2);
  }
  if (local_48 != (undefined1 *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_28 != (undefined1 *)0x0) {
    FMemory::Free(local_28);
  }
  *(undefined ***)this = &___7__FMassCommandSwapTagsInternal__0A_UFTestTag_A__UFTestTag_B____6B_;
  return this;
}

