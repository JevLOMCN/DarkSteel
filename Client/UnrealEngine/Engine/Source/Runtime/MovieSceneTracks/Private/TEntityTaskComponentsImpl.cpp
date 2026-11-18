// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 127

// HasAnyWork @ 14669a010

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 14669a0d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  FComponentMask *pFVar12;
  byte bVar13;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar12 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar12->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar12->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar13 = 0;
  }
  else {
    bVar13 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar12 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar12->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar12->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x10;
  pFVar12 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar12->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar12->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x12;
  pFVar12 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar12->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar12->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x14;
  pFVar12 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar12->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar12->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x16;
  pFVar12 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar12->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar12->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x18;
  pFVar12 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar12->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar12->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x1a;
  pFVar12 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar12->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar12->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar8 = 0;
  }
  else {
    bVar8 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x1c;
  pFVar12 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar12->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar12->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar9 = 0;
  }
  else {
    bVar9 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x1e;
  pFVar12 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar12->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar12->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x20;
  pFVar12 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar12->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar12->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar11 = 0;
  }
  else {
    bVar11 = 1;
  }
  return (bool)(bVar11 & bVar13 & bVar2 & bVar3 & bVar4 & bVar5 & bVar6 & bVar7 & bVar8 & bVar9 &
                         bVar10);
}

// HasAnyWork @ 14669a370

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  FComponentMask *pFVar11;
  byte bVar12;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar11 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar12 = 0;
  }
  else {
    bVar12 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar11 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x10;
  pFVar11 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x12;
  pFVar11 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x14;
  pFVar11 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x16;
  pFVar11 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x18;
  pFVar11 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x1a;
  pFVar11 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar8 = 0;
  }
  else {
    bVar8 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x1c;
  pFVar11 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar9 = 0;
  }
  else {
    bVar9 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x1e;
  pFVar11 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  return (bool)(bVar10 & bVar12 & bVar2 & bVar3 & bVar4 & bVar5 & bVar6 & bVar7 & bVar8 & bVar9);
}

// HasAnyWork @ 14669a5e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 14669a6a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  FComponentMask *pFVar7;
  byte bVar8;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar7 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar7->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar7->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar8 = 0;
  }
  else {
    bVar8 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar7 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar7->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar7->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x10;
  pFVar7 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar7->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar7->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x12;
  pFVar7 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar7->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar7->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x14;
  pFVar7 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar7->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar7->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x16;
  pFVar7 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar7->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar7->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  return (bool)(bVar6 & bVar8 & bVar2 & bVar3 & bVar4 & bVar5);
}

// HasAnyWork @ 14669a830

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  FComponentMask *pFVar6;
  byte bVar7;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar6 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar6->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar6->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar6 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar6->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar6->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x10;
  pFVar6 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar6->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar6->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x12;
  pFVar6 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar6->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar6->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x14;
  pFVar6 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar6->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar6->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  return (bool)(bVar5 & bVar7 & bVar2 & bVar3 & bVar4);
}

// HasAnyWork @ 14669a990

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  FComponentMask *pFVar5;
  byte bVar6;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar5 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar5->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar5->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar5 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar5->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar5->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x10;
  pFVar5 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar5->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar5->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x12;
  pFVar5 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar5->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar5->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  return (bool)(bVar4 & bVar6 & bVar2 & bVar3);
}

// HasAnyWork @ 14669aab0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  FComponentMask *pFVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x10;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  return (bool)(bVar3 & bVar5 & bVar2);
}

// HasAnyWork @ 14669aba0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  FComponentMask *pFVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x10;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  return (bool)(bVar3 & bVar5 & bVar2);
}

// HasAnyWork @ 14669ac90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  FComponentMask *pFVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x10;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  return (bool)(bVar3 & bVar5 & bVar2);
}

// HasAnyWork @ 14669ad80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 14669ae40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 14669af00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  FComponentMask *pFVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x10;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  return (bool)(bVar3 & bVar5 & bVar2);
}

// HasAnyWork @ 14669aff0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  FComponentMask *pFVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x10;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  return (bool)(bVar3 & bVar5 & bVar2);
}

// HasAnyWork @ 14669b0e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 14669b1a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 14669b260

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 14669b320

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// IsValid @ 1466a5e10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::IsValid(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
          *this)

{
  return *(short *)&this->Accessors != -1 &&
         (*(short *)&(this->Accessors).field_0x2 != -1 &&
         ((*(short *)&(this->Accessors).field_0x6 != -1 &&
          ((*(short *)&(this->Accessors).field_0xa != -1 &&
           ((*(short *)&(this->Accessors).field_0xe != -1 &&
            (*(short *)&(this->Accessors).field_0x12 != -1 &&
            *(short *)&(this->Accessors).field_0x10 != -1)) &&
           *(short *)&(this->Accessors).field_0xc != -1)) &&
          *(short *)&(this->Accessors).field_0x8 != -1)) &&
         *(short *)&(this->Accessors).field_0x4 != -1));
}

// PopulatePrerequisites @ 1466ac030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::PopulatePrerequisites
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FSystemTaskPrerequisites *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FComponentTypeID local_res8;
  FComponentTypeID local_resa [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_28;
  
  local_28._First = &local_res8;
  local_28._Last = local_resa;
  local_res8.Value = 0xffff;
  FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  MovieScene::PopulatePrerequisites((FComponentAccess *)this,param_1,param_2);
  PopulatePrerequisites<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0xe,param_1,param_2);
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x10;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x14;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x18;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x1c;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x20;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x24;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x28;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x2c;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x30;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  return;
}

// PopulatePrerequisites @ 1466ac260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::PopulatePrerequisites
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FSystemTaskPrerequisites *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FComponentTypeID local_res8;
  FComponentTypeID local_resa [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_28;
  
  local_28._First = &local_res8;
  local_28._Last = local_resa;
  local_res8.Value = 0xffff;
  FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  MovieScene::PopulatePrerequisites((FComponentAccess *)this,param_1,param_2);
  PopulatePrerequisites<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,param_1,param_2);
  local_res8.Value = *(ushort *)&(this->Accessors).field_0xe;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x12;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x16;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x1a;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x1e;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x22;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x26;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x2a;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x2e;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  return;
}

// PopulatePrerequisites @ 1466ac480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::PopulatePrerequisites
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FSystemTaskPrerequisites *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FComponentTypeID local_res8;
  FComponentTypeID local_resa [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  local_res8.Value = 0xffff;
  local_18._First = &local_res8;
  local_18._Last = local_resa;
  FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_18);
  MovieScene::PopulatePrerequisites((FComponentAccess *)this,param_1,param_2);
  PopulatePrerequisites<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0xe,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x10,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x12,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x14,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x16,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x18,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x1a,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x1c,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x1e,param_1,param_2);
  return;
}

// PopulatePrerequisites @ 1466ac580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::PopulatePrerequisites
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FSystemTaskPrerequisites *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FComponentTypeID local_res8;
  FComponentTypeID local_resa [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_28;
  
  local_28._First = &local_res8;
  local_28._Last = local_resa;
  local_res8.Value = 0xffff;
  FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  MovieScene::PopulatePrerequisites((FComponentAccess *)this,param_1,param_2);
  PopulatePrerequisites<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0xe,param_1,param_2);
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x10;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x14;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x18;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x1c;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  return;
}

// PopulatePrerequisites @ 1466ac6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::PopulatePrerequisites
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FSystemTaskPrerequisites *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FComponentTypeID local_res8;
  FComponentTypeID local_resa [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  local_res8.Value = 0xffff;
  local_18._First = &local_res8;
  local_18._Last = local_resa;
  FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_18);
  MovieScene::PopulatePrerequisites((FComponentAccess *)this,param_1,param_2);
  PopulatePrerequisites<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0xe,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x10,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x12,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x14,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x16,param_1,param_2);
  return;
}

// PopulatePrerequisites @ 1466ac790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::PopulatePrerequisites
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FSystemTaskPrerequisites *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FComponentTypeID local_res8;
  FComponentTypeID local_resa [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_28;
  
  local_28._First = &local_res8;
  local_28._Last = local_resa;
  local_res8.Value = 0xffff;
  FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  MovieScene::PopulatePrerequisites((FComponentAccess *)this,param_1,param_2);
  PopulatePrerequisites<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,param_1,param_2);
  local_res8.Value = *(ushort *)&(this->Accessors).field_0xe;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x12;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x16;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  return;
}

// PopulatePrerequisites @ 1466ac8a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::PopulatePrerequisites
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FSystemTaskPrerequisites *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FComponentTypeID local_res8;
  FComponentTypeID local_resa [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  local_res8.Value = 0xffff;
  local_18._First = &local_res8;
  local_18._Last = local_resa;
  FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_18);
  MovieScene::PopulatePrerequisites((FComponentAccess *)this,param_1,param_2);
  PopulatePrerequisites<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0xe,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x10,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x12,param_1,param_2);
  return;
}

// PopulateReadWriteDependencies @ 1466ac9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::PopulateReadWriteDependencies
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FComponentMask *param_1,FComponentMask *param_2)

{
  FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&this->Accessors);
  if (*(short *)&(this->Accessors).field_0x2 != -1) {
    FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x2);
  }
  if (*(short *)&(this->Accessors).field_0x6 != -1) {
    FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x6);
  }
  if (*(short *)&(this->Accessors).field_0xa != -1) {
    FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0xa);
  }
  if (*(short *)&(this->Accessors).field_0xe != -1) {
    FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0xe);
  }
  if (*(short *)&(this->Accessors).field_0x12 != -1) {
    FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x12);
  }
  if (*(short *)&(this->Accessors).field_0x16 != -1) {
    FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x16);
  }
  if (*(short *)&(this->Accessors).field_0x1a != -1) {
    FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x1a);
  }
  if (*(short *)&(this->Accessors).field_0x1e != -1) {
    FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x1e);
  }
  if (*(short *)&(this->Accessors).field_0x22 != -1) {
    FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x22);
  }
  if (*(short *)&(this->Accessors).field_0x26 != -1) {
    FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x26);
  }
  if (*(short *)&(this->Accessors).field_0x2a != -1) {
    FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x2a);
  }
  if (*(short *)&(this->Accessors).field_0x2e != -1) {
    FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x2e);
  }
  return;
}

// PopulateReadWriteDependencies @ 1466acb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::PopulateReadWriteDependencies
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FComponentMask *param_1,FComponentMask *param_2)

{
  FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&this->Accessors);
  if (*(short *)&(this->Accessors).field_0x2 != -1) {
    FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x2);
  }
  if (*(short *)&(this->Accessors).field_0x6 != -1) {
    FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x6);
  }
  if (*(short *)&(this->Accessors).field_0xa != -1) {
    FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0xa);
  }
  FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0xe);
  FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x10);
  FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x12);
  FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x14);
  FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x16);
  FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x18);
  FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x1a);
  FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x1c);
  FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&(this->Accessors).field_0x1e);
  return;
}

// PreLockComponentHeaders @ 1466adbf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_c8;
  FEntityAllocationProxy local_b8;
  FEntityAllocationProxy local_a8;
  FEntityAllocationProxy local_98;
  FEntityAllocationProxy local_88;
  FEntityAllocationProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationProxy local_38;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0xe,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,0xe);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_38,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_c8.Manager = param_1->Manager;
  local_c8.AllocationIndex = param_1->AllocationIndex;
  local_c8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_c8);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x12,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_c8);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x10) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 6;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_b8.Manager = param_1->Manager;
  local_b8.AllocationIndex = param_1->AllocationIndex;
  local_b8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_b8);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x16,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_b8);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x14) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 7;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_a8.Manager = param_1->Manager;
  local_a8.AllocationIndex = param_1->AllocationIndex;
  local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_a8);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x1a,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_a8);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x18) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 8;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_98.Manager = param_1->Manager;
  local_98.AllocationIndex = param_1->AllocationIndex;
  local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_98);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x1e,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_98);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x1c) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 9;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_88.Manager = param_1->Manager;
  local_88.AllocationIndex = param_1->AllocationIndex;
  local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_88);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x22,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_88);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x20) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 10;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_78.Manager = param_1->Manager;
  local_78.AllocationIndex = param_1->AllocationIndex;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_78);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x26,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_78);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x24) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 0xb;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_68.Manager = param_1->Manager;
  local_68.AllocationIndex = param_1->AllocationIndex;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_68);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x2a,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_68);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x28) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 0xc;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_58.Manager = param_1->Manager;
  local_58.AllocationIndex = param_1->AllocationIndex;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_58);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x2e,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_58);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2c) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar11 = uVar11 + 0xd;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_48.Manager = param_1->Manager;
  local_48.AllocationIndex = param_1->AllocationIndex;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_48);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x32,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_48);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x30) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 1466ae490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FEntityAllocationProxy local_28;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0xe,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,0xe);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 4;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 5;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x10,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 6;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x12,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 7;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x14,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 8;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x16,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 9;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x18,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 10;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x1a,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 0xb;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x1c,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 0xc;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x1e,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 0xd;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x20,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1466aea40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_c8;
  FEntityAllocationProxy local_b8;
  FEntityAllocationProxy local_a8;
  FEntityAllocationProxy local_98;
  FEntityAllocationProxy local_88;
  FEntityAllocationProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationProxy local_38;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0xd,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,0xd);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_38,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_c8.Manager = param_1->Manager;
  local_c8.AllocationIndex = param_1->AllocationIndex;
  local_c8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_c8);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x10,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_c8);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xe) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_b8.Manager = param_1->Manager;
  local_b8.AllocationIndex = param_1->AllocationIndex;
  local_b8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_b8);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x14,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_b8);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x12) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 6;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_a8.Manager = param_1->Manager;
  local_a8.AllocationIndex = param_1->AllocationIndex;
  local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_a8);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x18,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_a8);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x16) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 7;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_98.Manager = param_1->Manager;
  local_98.AllocationIndex = param_1->AllocationIndex;
  local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_98);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x1c,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_98);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x1a) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 8;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_88.Manager = param_1->Manager;
  local_88.AllocationIndex = param_1->AllocationIndex;
  local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_88);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x20,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_88);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x1e) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 9;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_78.Manager = param_1->Manager;
  local_78.AllocationIndex = param_1->AllocationIndex;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_78);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x24,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_78);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x22) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 10;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_68.Manager = param_1->Manager;
  local_68.AllocationIndex = param_1->AllocationIndex;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_68);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x28,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_68);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x26) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 0xb;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_58.Manager = param_1->Manager;
  local_58.AllocationIndex = param_1->AllocationIndex;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_58);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x2c,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_58);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2a) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar11 = uVar11 + 0xc;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_48.Manager = param_1->Manager;
  local_48.AllocationIndex = param_1->AllocationIndex;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_48);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x30,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_48);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2e) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 1466af270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FEntityAllocationProxy local_28;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0xd,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,0xd);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 4;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 5;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x10,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 6;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x12,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 7;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x14,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 8;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x16,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 9;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x18,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 10;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x1a,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 0xb;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x1c,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 0xc;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x1e,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1466af7b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationProxy local_38;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,9,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,9);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_68.Manager = param_1->Manager;
  local_68.AllocationIndex = param_1->AllocationIndex;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_68);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x12,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_68);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x10) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 6;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_58.Manager = param_1->Manager;
  local_58.AllocationIndex = param_1->AllocationIndex;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_58);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x16,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_58);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x14) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 7;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_48.Manager = param_1->Manager;
  local_48.AllocationIndex = param_1->AllocationIndex;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_48);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x1a,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_48);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x18) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar11 = uVar11 + 8;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x1e,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x1c) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 1466afc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FEntityAllocationProxy local_28;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,9,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,9);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 4;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 5;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x10,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 6;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x12,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 7;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x14,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 8;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x16,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1466b0000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationProxy local_38;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,8,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,8);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_38,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_78.Manager = param_1->Manager;
  local_78.AllocationIndex = param_1->AllocationIndex;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_78);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x10,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_78);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xe) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_68.Manager = param_1->Manager;
  local_68.AllocationIndex = param_1->AllocationIndex;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_68);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x14,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_68);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x12) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 6;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_58.Manager = param_1->Manager;
  local_58.AllocationIndex = param_1->AllocationIndex;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_58);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x18,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_58);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x16) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar11 = uVar11 + 7;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_48.Manager = param_1->Manager;
  local_48.AllocationIndex = param_1->AllocationIndex;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_48);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x1c,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_48);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x1a) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 1466b0460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FEntityAllocationProxy local_38;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,8,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,8);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_38,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 4;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 5;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x10,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 6;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x12,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 7;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x14,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1466b0780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationProxy local_38;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,7,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,7);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_58.Manager = param_1->Manager;
  local_58.AllocationIndex = param_1->AllocationIndex;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_58);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x10,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_58);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xe) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_48.Manager = param_1->Manager;
  local_48.AllocationIndex = param_1->AllocationIndex;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_48);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x14,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_48);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x12) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar11 = uVar11 + 6;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x18,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x16) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 1466b0b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FEntityAllocationProxy local_28;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,7,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,7);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 4;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 5;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x10,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 6;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x12,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1466b0dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_48;
  FEntityAllocationProxy local_38;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,6);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_48.Manager = param_1->Manager;
  local_48.AllocationIndex = param_1->AllocationIndex;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_48);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x10,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_48);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xe) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar11 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x14,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x12) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 1466b10b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FEntityAllocationProxy local_28;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,6);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 4;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 5;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x10,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1466b12f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FEntityAllocationProxy local_28;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,6);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 4;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 5;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x10,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1466b1530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FEntityAllocationProxy local_28;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,6);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 4;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 5;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x10,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1466b1770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_38;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,6);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar11 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x12,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x10) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 1466b1a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_38;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,6);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar11 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x12,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x10) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 1466b1c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FEntityAllocationProxy local_28;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,6);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 4;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 5;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x10,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1466b1ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FEntityAllocationProxy local_28;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,6);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 4;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 5;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x10,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1466b2110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_38;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,5,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,5);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
  uVar11 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x10,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xe) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 1466b2330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_38;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,5,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,5);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
  uVar11 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x10,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xe) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 1466b2550

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_38;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,5,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,5);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
  uVar11 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x10,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xe) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 1466b2770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_38;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,5,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,5);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
  uVar11 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x10,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xe) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 1466b2990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FEntityAllocationProxy local_28;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,5,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,5);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 4;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1466b2b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FEntityAllocationProxy local_28;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,5,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,5);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 4;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1466b2d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FEntityAllocationProxy local_28;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,5,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,5);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 4;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1466b2f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FEntityAllocationProxy local_28;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,5,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,5);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::PreLockComponentData
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 4;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// ToString @ 1466ff280

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::ToString(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FString *__return_storage_ptr__,FEntityManager *param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  AccessorToString((FReadAccess *)this,param_1,__return_storage_ptr__);
  AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,param_1,__return_storage_ptr__);
  AccessorToString((FOptionalReadAccess *)&(this->Accessors).field_0xe,param_1,
                   __return_storage_ptr__);
  AccessorToString((FOptionalReadAccess *)&(this->Accessors).field_0x12,param_1,
                   __return_storage_ptr__);
  AccessorToString((FOptionalReadAccess *)&(this->Accessors).field_0x16,param_1,
                   __return_storage_ptr__);
  AccessorToString((FOptionalReadAccess *)&(this->Accessors).field_0x1a,param_1,
                   __return_storage_ptr__);
  AccessorToString((FOptionalReadAccess *)&(this->Accessors).field_0x1e,param_1,
                   __return_storage_ptr__);
  AccessorToString((FOptionalReadAccess *)&(this->Accessors).field_0x22,param_1,
                   __return_storage_ptr__);
  AccessorToString((FOptionalReadAccess *)&(this->Accessors).field_0x26,param_1,
                   __return_storage_ptr__);
  AccessorToString((FOptionalReadAccess *)&(this->Accessors).field_0x2a,param_1,
                   __return_storage_ptr__);
  AccessorToString((FOptionalReadAccess *)&(this->Accessors).field_0x2e,param_1,
                   __return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToString @ 1466ff360

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::ToString(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FString *__return_storage_ptr__,FEntityManager *param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  AccessorToString((FReadAccess *)this,param_1,__return_storage_ptr__);
  AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(this->Accessors).field_0x2,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0xe,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0x10,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0x12,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0x14,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0x16,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0x18,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0x1a,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0x1c,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0x1e,param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HasAnyWork @ 14679c1b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  FComponentMask *pFVar5;
  byte bVar6;
  byte bVar7;
  
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar5 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar5->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar5->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar5 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar5->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar5->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x6;
  pFVar5 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar5->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar5->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x8;
  pFVar5 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar5->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar5->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xa;
  pFVar5 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar5->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar5->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  return (bool)(bVar4 & bVar7 & bVar6 & bVar2 & bVar3);
}

// HasAnyWork @ 14679c310

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  FComponentMask *pFVar4;
  byte bVar5;
  byte bVar6;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x6;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  return (bool)(bVar3 & bVar6 & bVar5 & bVar2);
}

// HasAnyWork @ 14679c440

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar5 & bVar4);
}

// HasAnyWork @ 14679c530

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  FComponentMask *pFVar4;
  byte bVar5;
  byte bVar6;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x6;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  return (bool)(bVar3 & bVar6 & bVar5 & bVar2);
}

// HasAnyWork @ 14679c660

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  FComponentMask *pFVar4;
  byte bVar5;
  byte bVar6;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x6;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  return (bool)(bVar3 & bVar6 & bVar5 & bVar2);
}

// HasAnyWork @ 14679c790

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar5 & bVar4);
}

// HasAnyWork @ 14679c880

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar5 & bVar4);
}

// HasAnyWork @ 14679c970

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar5 & bVar4);
}

// HasAnyWork @ 14679ca60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar5 & bVar4);
}

// HasAnyWork @ 14679cb50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar5 & bVar4);
}

// HasAnyWork @ 14679cc40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar5 & bVar4);
}

// PreLockComponentHeaders @ 1467b2cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,7,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,7);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  TRelativePtr<void,unsigned_int>::Reset
            ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),pFVar6,
             pFVar6->EntityIDs);
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 2;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 3;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x6,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x8,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xa,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar11 = uVar11 + 6;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_28);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0xe,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_28);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xc) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 1467b30a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,4,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,4);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 2;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 3;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x6,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1467b32e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  FEntityManager *pFVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  FEntityAllocation *pFVar9;
  FComponentMask *pFVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FComponentHeader *pFVar17;
  FEntityAllocationProxy local_48 [2];
  
  uVar14 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0xf,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar8 * 4,0xf);
  uVar16 = 0;
  uVar11 = 0;
  if ((int)uVar14 < *piVar1) {
    uVar11 = ~uVar14 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar15 = (param_2->AllocatorInstance).Data;
  pFVar9 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar9,
             (TRelativePtr<void,unsigned_int> *)(pFVar15 + (longlong)(int)uVar14 * 4));
  uVar13 = uVar14 + 1;
  uVar11 = 0;
  if ((int)uVar13 < *piVar1) {
    uVar11 = ~uVar13 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar15 = (param_2->AllocatorInstance).Data;
  pFVar9 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar9,
             (TRelativePtr<void,unsigned_int> *)(pFVar15 + (longlong)(int)uVar13 * 4));
  uVar13 = uVar14 + 2;
  uVar11 = 0;
  if ((int)uVar13 < *piVar1) {
    uVar11 = ~uVar13 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar15 = (param_2->AllocatorInstance).Data;
  pFVar9 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar9,
             (TRelativePtr<void,unsigned_int> *)(pFVar15 + (longlong)(int)uVar13 * 4));
  uVar14 = uVar14 + 3;
  uVar11 = 0;
  if ((int)uVar14 < *piVar1) {
    uVar11 = ~uVar14 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar3 = param_1->Manager;
  uVar4._0_4_ = param_1->AllocationIndex;
  uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar15 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar14 * 4;
  lVar6 = 8 - (longlong)pFVar15;
  lVar5 = 6 - (longlong)pFVar15;
  do {
    local_48[0].Manager = pFVar3;
    local_48[0]._8_8_ = uVar4;
    pFVar10 = FEntityAllocationProxy::GetAllocationType(local_48);
    bVar7 = FComponentTypeIDFilter::Passes
                      ((FComponentTypeIDFilter *)(pFVar15 + (longlong)this + lVar6),pFVar10);
    if (bVar7) {
      pFVar9 = FEntityAllocationProxy::GetAllocation(local_48);
      pFVar17 = pFVar9->ComponentHeaders;
      pFVar12 = pFVar17 + pFVar9->NumComponents;
      for (; pFVar17 != pFVar12; pFVar17 = pFVar17 + 1) {
        if ((pFVar17->ComponentType).Value == *(ushort *)(pFVar15 + (longlong)this + lVar5)) {
          TRelativePtr<void,unsigned_int>::Reset
                    ((TRelativePtr<void,unsigned_int> *)pFVar15,pFVar9->ComponentData,
                     pFVar17->Components);
          break;
        }
      }
    }
    uVar16 = uVar16 + 1;
    pFVar15 = pFVar15 + 4;
    if (0xb < uVar16) {
      return;
    }
  } while( true );
}

// PreLockComponentHeaders @ 1467b35a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,4,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,4);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 2;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 3;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x6,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1467b37e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,4,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,4);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 2;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 3;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x6,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1467b3a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,3);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 2;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1467b3bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,3);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 2;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1467b3dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,3);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 2;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1467b3f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,3);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 2;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1467b4160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,3);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 2;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1467b4330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,3);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 2;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// ToString @ 1467c3ac0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
::ToString(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
           *this,FString *__return_storage_ptr__,FEntityManager *param_1)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_58;
  uint local_50;
  uint local_4c;
  FString local_48;
  FString local_38;
  
  uVar4 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  AccessorToString((FReadAccess *)this,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0x2,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0x4,param_1,__return_storage_ptr__);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_4c = 0;
  do {
    if (local_50 == local_4c) {
      local_50 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_58,(int *)&local_4c);
    }
    pFVar7 = local_58.Data + (longlong)(int)local_50 * 0x10;
    *(undefined8 *)pFVar7 = 0;
    *(undefined8 *)(pFVar7 + 8) = 0;
    local_50 = local_50 + 1;
    OneOfAccessorToString
              ((FOptionalReadAccess *)(&(this->Accessors).field_0x6 + (longlong)(int)uVar4 * 4),
               param_1,(FString *)pFVar7);
    uVar2 = local_50;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xc);
  uVar3 = (ulonglong)(int)local_50;
  bVar1 = true;
  pFVar7 = local_58.Data + uVar3 * 0x10;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FVar5.Data = local_58.Data;
  while( true ) {
    if ((uint)uVar3 != uVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar5.Data == pFVar7) break;
    if (bVar1) {
      bVar1 = false;
    }
    else {
      ::FString::AppendChars(&local_48,L",",1);
    }
    iVar6 = *(int *)(FVar5.Data + 8) + -1;
    if (*(int *)(FVar5.Data + 8) == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_48,*(wchar_t **)FVar5.Data,iVar6);
    uVar3 = (ulonglong)local_50;
    FVar5.Data = FVar5.Data + 0x10;
  }
  ::FString::PrintfImpl(&local_38,L"\n\tRead One Or More Of: [ %s ]");
  iVar6 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar6);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_58.Data,local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return __return_storage_ptr__;
}

// HasAnyWork @ 146838210

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  FComponentMask *pFVar10;
  byte bVar11;
  byte bVar12;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar11 = 0;
  }
  else {
    bVar11 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar12 = 0;
  }
  else {
    bVar12 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x6;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x8;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xa;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xc;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x10;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar8 = 0;
  }
  else {
    bVar8 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x12;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar9 = 0;
  }
  else {
    bVar9 = 1;
  }
  return (bool)(bVar9 & bVar12 & bVar11 & bVar2 & bVar3 & bVar4 & bVar5 & bVar6 & bVar7 & bVar8);
}

// HasAnyWork @ 146838490

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  FComponentMask *pFVar10;
  byte bVar11;
  byte bVar12;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar11 = 0;
  }
  else {
    bVar11 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar12 = 0;
  }
  else {
    bVar12 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x6;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x8;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xa;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xc;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x10;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar8 = 0;
  }
  else {
    bVar8 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x12;
  pFVar10 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar10->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar9 = 0;
  }
  else {
    bVar9 = 1;
  }
  return (bool)(bVar9 & bVar12 & bVar11 & bVar2 & bVar3 & bVar4 & bVar5 & bVar6 & bVar7 & bVar8);
}

// HasAnyWork @ 146838710

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 1468387d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  FComponentMask *pFVar4;
  byte bVar5;
  byte bVar6;
  
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x6;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x8;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  return (bool)(bVar3 & bVar6 & bVar5 & bVar2);
}

// HasAnyWork @ 146838900

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar5 & bVar4);
}

// HasAnyWork @ 1468389f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x6;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar5 & bVar4);
}

// HasAnyWork @ 146838ae0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x6;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 146838ba0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 146838c60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 146838d20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xa;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 146838de0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 146838ea0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 146838f60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 146839020

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 1468390e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 1468391a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// PopulatePrerequisites @ 146852e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::PopulatePrerequisites
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FSystemTaskPrerequisites *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FComponentTypeID local_res8;
  FComponentTypeID local_resa [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  local_18._First = &local_res8;
  local_18._Last = local_resa;
  local_res8.Value = 0xffff;
  FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_18);
  MovieScene::PopulatePrerequisites((FComponentAccess *)this,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x2,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x4,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x6,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x8,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0xa,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0xc,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0xe,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x10,param_1,param_2);
  MovieScene::PopulatePrerequisites
            ((FComponentAccess *)&(this->Accessors).field_0x12,param_1,param_2);
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x14;
  if (local_res8.Value != 0xffff) {
    local_18._First = &local_res8;
    local_18._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_18);
  }
  return;
}

// PopulatePrerequisites @ 146852f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
::PopulatePrerequisites
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
           *this,FSystemTaskPrerequisites *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FComponentTypeID local_res8;
  FComponentTypeID local_resa [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_28;
  
  local_28._First = &local_res8;
  local_28._Last = local_resa;
  local_res8.Value = 0xffff;
  FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  MovieScene::PopulatePrerequisites((FComponentAccess *)this,param_1,param_2);
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x2;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x6;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0xa;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0xe;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x12;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x16;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x1a;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x1e;
  if (local_res8.Value != 0xffff) {
    local_28._First = &local_res8;
    local_28._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_28);
  }
  return;
}

// PopulatePrerequisites @ 146853170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
::PopulatePrerequisites
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FSystemTaskPrerequisites *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FComponentTypeID local_res8;
  FComponentTypeID local_resa [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  local_18._First = &local_res8;
  local_18._Last = local_resa;
  local_res8.Value = 0xffff;
  FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_18);
  MovieScene::PopulatePrerequisites((FComponentAccess *)this,param_1,param_2);
  local_res8.Value = *(ushort *)&(this->Accessors).field_0x2;
  if (local_res8.Value != 0xffff) {
    local_18._First = &local_res8;
    local_18._Last = local_resa;
    FSystemTaskPrerequisites::FilterByComponent(param_1,param_2,&local_18);
  }
  return;
}

// PreLockComponentHeaders @ 1468539c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0xb,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,0xb);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 2;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 3;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x6,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x8,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xa,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 6;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xc,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 7;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 8;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x10,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 9;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x12,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar11 = uVar11 + 10;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_28);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x16,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_28);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x14) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 146853f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0xb,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,0xb);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 2;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 3;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x6,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x8,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xa,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 6;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xc,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 7;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 8;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x10,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 9;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x12,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar11 = uVar11 + 10;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_28);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x16,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_28);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x14) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 1468544e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FComponentMask *pFVar6;
  FEntityAllocation *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_b8;
  FEntityAllocationProxy local_a8;
  FEntityAllocationProxy local_98;
  FEntityAllocationProxy local_88;
  FEntityAllocationProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationProxy local_38;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,9,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,9);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_b8.Manager = param_1->Manager;
  local_b8.AllocationIndex = param_1->AllocationIndex;
  local_b8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar6 = FEntityAllocationProxy::GetAllocationType(&local_b8);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x2,pFVar6);
  if (bVar4) {
    pFVar7 = FEntityAllocationProxy::GetAllocation(&local_b8);
    pFVar12 = pFVar7->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar7->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&this->Accessors) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar7->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_a8.Manager = param_1->Manager;
  local_a8.AllocationIndex = param_1->AllocationIndex;
  local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar6 = FEntityAllocationProxy::GetAllocationType(&local_a8);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x6,pFVar6);
  if (bVar4) {
    pFVar7 = FEntityAllocationProxy::GetAllocation(&local_a8);
    pFVar12 = pFVar7->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar7->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x4) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar7->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 2;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_98.Manager = param_1->Manager;
  local_98.AllocationIndex = param_1->AllocationIndex;
  local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar6 = FEntityAllocationProxy::GetAllocationType(&local_98);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0xa,pFVar6);
  if (bVar4) {
    pFVar7 = FEntityAllocationProxy::GetAllocation(&local_98);
    pFVar12 = pFVar7->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar7->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x8) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar7->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 3;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_88.Manager = param_1->Manager;
  local_88.AllocationIndex = param_1->AllocationIndex;
  local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar6 = FEntityAllocationProxy::GetAllocationType(&local_88);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0xe,pFVar6);
  if (bVar4) {
    pFVar7 = FEntityAllocationProxy::GetAllocation(&local_88);
    pFVar12 = pFVar7->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar7->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xc) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar7->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_78.Manager = param_1->Manager;
  local_78.AllocationIndex = param_1->AllocationIndex;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar6 = FEntityAllocationProxy::GetAllocationType(&local_78);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x12,pFVar6);
  if (bVar4) {
    pFVar7 = FEntityAllocationProxy::GetAllocation(&local_78);
    pFVar12 = pFVar7->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar7->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x10) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar7->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_68.Manager = param_1->Manager;
  local_68.AllocationIndex = param_1->AllocationIndex;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar6 = FEntityAllocationProxy::GetAllocationType(&local_68);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x16,pFVar6);
  if (bVar4) {
    pFVar7 = FEntityAllocationProxy::GetAllocation(&local_68);
    pFVar12 = pFVar7->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar7->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x14) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar7->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 6;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_58.Manager = param_1->Manager;
  local_58.AllocationIndex = param_1->AllocationIndex;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar6 = FEntityAllocationProxy::GetAllocationType(&local_58);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x1a,pFVar6);
  if (bVar4) {
    pFVar7 = FEntityAllocationProxy::GetAllocation(&local_58);
    pFVar12 = pFVar7->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar7->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x18) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar7->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 7;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_48.Manager = param_1->Manager;
  local_48.AllocationIndex = param_1->AllocationIndex;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar6 = FEntityAllocationProxy::GetAllocationType(&local_48);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x1e,pFVar6);
  if (bVar4) {
    pFVar7 = FEntityAllocationProxy::GetAllocation(&local_48);
    pFVar12 = pFVar7->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar7->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x1c) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar7->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar11 = uVar11 + 8;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar6 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x22,pFVar6);
  if (bVar4) {
    pFVar7 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar7->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar7->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x20) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar7->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 146854c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_88;
  FEntityAllocationProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationProxy local_38;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,8,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,8);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 2;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_88.Manager = param_1->Manager;
  local_88.AllocationIndex = param_1->AllocationIndex;
  local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_88);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x6,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_88);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x4) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 3;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_78.Manager = param_1->Manager;
  local_78.AllocationIndex = param_1->AllocationIndex;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_78);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0xa,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_78);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x8) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_68.Manager = param_1->Manager;
  local_68.AllocationIndex = param_1->AllocationIndex;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_68);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0xe,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_68);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xc) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_58.Manager = param_1->Manager;
  local_58.AllocationIndex = param_1->AllocationIndex;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_58);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x12,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_58);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x10) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 6;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_48.Manager = param_1->Manager;
  local_48.AllocationIndex = param_1->AllocationIndex;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_48);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x16,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_48);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x14) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar11 = uVar11 + 7;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x1a,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x18) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 146855230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_88;
  FEntityAllocationProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationProxy local_38;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,8,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,8);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 2;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_88.Manager = param_1->Manager;
  local_88.AllocationIndex = param_1->AllocationIndex;
  local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_88);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x6,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_88);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x4) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 3;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_78.Manager = param_1->Manager;
  local_78.AllocationIndex = param_1->AllocationIndex;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_78);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0xa,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_78);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x8) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_68.Manager = param_1->Manager;
  local_68.AllocationIndex = param_1->AllocationIndex;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_68);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0xe,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_68);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xc) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_58.Manager = param_1->Manager;
  local_58.AllocationIndex = param_1->AllocationIndex;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_58);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x12,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_58);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x10) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 6;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_48.Manager = param_1->Manager;
  local_48.AllocationIndex = param_1->AllocationIndex;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_48);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x16,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_48);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x14) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar11 = uVar11 + 7;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x1a,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x18) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 146855830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_38;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,7,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,7);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  TRelativePtr<void,unsigned_int>::Reset
            ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),pFVar6,
             pFVar6->EntityIDs);
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 2;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 3;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x6,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x8,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0xc,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xa) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar11 = uVar11 + 6;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_28);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x10,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_28);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xe) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 146855c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationProxy local_38;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,7,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,7);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
  ::PreLockComponentData
            ((TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
              *)&(this->Accessors).field_0x2,&local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_58.Manager = param_1->Manager;
  local_58.AllocationIndex = param_1->AllocationIndex;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_58);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x10,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_58);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xe) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_48.Manager = param_1->Manager;
  local_48.AllocationIndex = param_1->AllocationIndex;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_48);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x14,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_48);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x12) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar11 = uVar11 + 6;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x18,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x16) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 146856000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_38;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,4,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,4);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 2;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar11 = uVar11 + 3;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x8,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x6) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 146856290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,4,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,4);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  TRelativePtr<void,unsigned_int>::Reset
            ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4),pFVar6,
             pFVar6->EntityIDs);
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar9 + 2;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 3;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x6,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1468564d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,3);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar11 = uVar11 + 2;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_28);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x6,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_28);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x4) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 1468566f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,3);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_28);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x4,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_28);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar11 = uVar11 + 2;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x6,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  return;
}

// PreLockComponentHeaders @ 146856910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,3);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar11 = uVar11 + 2;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_28);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x6,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_28);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x4) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 146856b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_28;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,3);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar11 = uVar11 + 2;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_28);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x6,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_28);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x4) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 146856d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FEntityAllocationProxy local_38;
  FEntityAllocationProxy local_28;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,9,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,9);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>::
  PreLockComponentData
            ((TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName> *)
             &(this->Accessors).field_0x2,&local_38,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 5;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TReadOneOrMoreOfAccessor<double,double,double,double>::PreLockComponentData
            ((TReadOneOrMoreOfAccessor<double,double,double,double> *)&(this->Accessors).field_0x12,
             &local_28,
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 146856f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FEntityManager *pFVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FEntityAllocation *pFVar8;
  FComponentMask *pFVar9;
  uint uVar10;
  FComponentHeader *pFVar11;
  uint uVar12;
  uint uVar13;
  FComponentHeader *pFVar14;
  FEntityAllocationProxy local_38 [2];
  
  uVar13 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,4,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4,4);
  uVar10 = 0;
  if ((int)uVar13 < *piVar1) {
    uVar10 = ~uVar13 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar8,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar13 * 4));
  uVar12 = uVar13 + 1;
  uVar10 = 0;
  if ((int)uVar12 < *piVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar4 = param_1->Manager;
  uVar5._0_4_ = param_1->AllocationIndex;
  uVar5._4_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar12 * 4;
  local_38[0].Manager = pFVar4;
  local_38[0]._8_8_ = uVar5;
  pFVar9 = FEntityAllocationProxy::GetAllocationType(local_38);
  bVar6 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x4,pFVar9);
  if (bVar6) {
    pFVar8 = FEntityAllocationProxy::GetAllocation(local_38);
    pFVar14 = pFVar8->ComponentHeaders;
    pFVar11 = pFVar14 + pFVar8->NumComponents;
    for (; pFVar14 != pFVar11; pFVar14 = pFVar14 + 1) {
      if ((pFVar14->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)pFVar2,pFVar8->ComponentData,
                   pFVar14->Components);
        break;
      }
    }
  }
  local_38[0].Manager = pFVar4;
  local_38[0]._8_8_ = uVar5;
  pFVar9 = FEntityAllocationProxy::GetAllocationType(local_38);
  bVar6 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x8,pFVar9);
  if (bVar6) {
    pFVar8 = FEntityAllocationProxy::GetAllocation(local_38);
    pFVar14 = pFVar8->ComponentHeaders;
    pFVar11 = pFVar14 + pFVar8->NumComponents;
    for (; pFVar14 != pFVar11; pFVar14 = pFVar14 + 1) {
      if ((pFVar14->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x6) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + 4),pFVar8->ComponentData,
                   pFVar14->Components);
        break;
      }
    }
  }
  uVar13 = uVar13 + 3;
  uVar10 = 0;
  if ((int)uVar13 < *piVar1) {
    uVar10 = ~uVar13 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xa,pFVar8,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar13 * 4));
  return;
}

// PreLockComponentHeaders @ 1468571c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  FComponentHeader *pFVar11;
  FEntityAllocationProxy local_28;
  
  uVar10 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,2,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,2);
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar10 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_28);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x4,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_28);
    pFVar11 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar11 + pFVar6->NumComponents;
    for (; pFVar11 != pFVar9; pFVar11 = pFVar11 + 1) {
      if ((pFVar11->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar11->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 146857380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::FErasedOptionalReadAccess>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::FErasedOptionalReadAccess>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  FComponentHeader *pFVar11;
  FEntityAllocationProxy local_28;
  
  uVar10 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,2,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,2);
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar10 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_28);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x4,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_28);
    pFVar11 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar11 + pFVar6->NumComponents;
    for (; pFVar11 != pFVar9; pFVar11 = pFVar11 + 1) {
      if ((pFVar11->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),pFVar6,
                   pFVar11);
        return;
      }
    }
  }
  return;
}

// ToString @ 14686d310

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::ToString(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FString *__return_storage_ptr__,FEntityManager *param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  AccessorToString((FReadAccess *)this,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0x2,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0x4,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0x6,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0x8,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0xa,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0xc,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0xe,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0x10,param_1,__return_storage_ptr__);
  AccessorToString((FReadAccess *)&(this->Accessors).field_0x12,param_1,__return_storage_ptr__);
  AccessorToString((FOptionalReadAccess *)&(this->Accessors).field_0x14,param_1,
                   __return_storage_ptr__);
  return __return_storage_ptr__;
}

// HasAnyWork @ 1468ba0b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar5 & bVar4);
}

// HasAnyWork @ 1468ba1a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar5 & bVar4);
}

// HasAnyWork @ 1468ba290

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar5 & bVar4);
}

// HasAnyWork @ 1468ba380

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  byte bVar5;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar5 & bVar4);
}

// HasAnyWork @ 1468ba470

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 1468ba530

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// PreLockComponentHeaders @ 1468c6570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,3);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 2;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1468c6740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,3);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 2;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1468c6910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,3);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 2;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1468c6ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,3);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 2;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

// PreLockComponentHeaders @ 1468c6cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FEntityManager *pFVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FComponentMask *pFVar8;
  FEntityAllocation *pFVar9;
  uint uVar10;
  FComponentHeader *pFVar11;
  uint uVar12;
  FComponentHeader *pFVar13;
  FEntityAllocationProxy local_38 [2];
  
  uVar12 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4,3);
  uVar10 = 0;
  if ((int)uVar12 < *piVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar4 = param_1->Manager;
  uVar5._0_4_ = param_1->AllocationIndex;
  uVar5._4_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar12 * 4;
  local_38[0].Manager = pFVar4;
  local_38[0]._8_8_ = uVar5;
  pFVar8 = FEntityAllocationProxy::GetAllocationType(local_38);
  bVar6 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x2,pFVar8);
  if (bVar6) {
    pFVar9 = FEntityAllocationProxy::GetAllocation(local_38);
    pFVar13 = pFVar9->ComponentHeaders;
    pFVar11 = pFVar13 + pFVar9->NumComponents;
    for (; pFVar13 != pFVar11; pFVar13 = pFVar13 + 1) {
      if ((pFVar13->ComponentType).Value == *(ushort *)&this->Accessors) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)pFVar2,pFVar9->ComponentData,
                   pFVar13->Components);
        break;
      }
    }
  }
  local_38[0].Manager = pFVar4;
  local_38[0]._8_8_ = uVar5;
  pFVar8 = FEntityAllocationProxy::GetAllocationType(local_38);
  bVar6 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x6,pFVar8);
  if (bVar6) {
    pFVar9 = FEntityAllocationProxy::GetAllocation(local_38);
    pFVar13 = pFVar9->ComponentHeaders;
    pFVar11 = pFVar13 + pFVar9->NumComponents;
    for (; pFVar13 != pFVar11; pFVar13 = pFVar13 + 1) {
      if ((pFVar13->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x4) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + 4),pFVar9->ComponentData,
                   pFVar13->Components);
        break;
      }
    }
  }
  uVar12 = uVar12 + 2;
  uVar10 = 0;
  if ((int)uVar12 < *piVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar9 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x8,pFVar9,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar12 * 4));
  return;
}

