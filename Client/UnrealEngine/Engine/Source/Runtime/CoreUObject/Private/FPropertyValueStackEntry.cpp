// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FPropertyValueStackEntry @ 142258510

FPropertyValueStackEntry * __thiscall
FPropertyValueIterator::FPropertyValueStackEntry::FPropertyValueStackEntry
          (FPropertyValueStackEntry *this,FPropertyValueStackEntry *param_1)

{
  ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
  FVar1;
  
  this->Owner = param_1->Owner;
  (this->ValueArray).AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
        )0x0;
  if ((param_1->ValueArray).AllocatorInstance.SecondaryData ==
      (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
       )0x0) {
    memmove(&this->ValueArray,&param_1->ValueArray,0xc0);
  }
  FVar1 = (this->ValueArray).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                )0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->ValueArray).AllocatorInstance.SecondaryData =
       (param_1->ValueArray).AllocatorInstance.SecondaryData;
  (param_1->ValueArray).AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
        )0x0;
  (this->ValueArray).ArrayNum = (param_1->ValueArray).ArrayNum;
  (this->ValueArray).ArrayMax = (param_1->ValueArray).ArrayMax;
  (param_1->ValueArray).ArrayNum = 0;
  (param_1->ValueArray).ArrayMax = 8;
  this->ValueIndex = param_1->ValueIndex;
  this->NextValueIndex = param_1->NextValueIndex;
  return this;
}

