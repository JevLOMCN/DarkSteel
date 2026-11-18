// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// TIntVector3<int>_> @ 141ec5610

FStructuredArchiveRecord * __thiscall
FStructuredArchiveRecord::operator<<<UE::Math::TIntVector3<int>_>
          (void *this,TNamedValue<UE::Math::TIntVector3<int>_> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  TIntVector3<int> *pTVar3;
  FArchive *pFVar4;
  uint *puVar5;
  int *piVar6;
  
  plVar2 = *(longlong **)this;
  pTVar3 = param_1->Value;
  pFVar4 = *(FArchive **)(*plVar2 + 8);
  puVar5 = (uint *)**(undefined8 **)&pFVar4->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar4->field_0x8)[1] < puVar5 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,pTVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)pTVar3);
    }
  }
  else {
    (pTVar3->field0_0x0)._s_0.X = *puVar5;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
  }
  piVar1 = &(pTVar3->field0_0x0)._s_0.Y;
  pFVar4 = *(FArchive **)(*plVar2 + 8);
  piVar6 = (int *)**(undefined8 **)&pFVar4->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar4->field_0x8)[1] < piVar6 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar6;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
  }
  piVar1 = &(pTVar3->field0_0x0)._s_0.Z;
  pFVar4 = *(FArchive **)(*plVar2 + 8);
  piVar6 = (int *)**(undefined8 **)&pFVar4->field_0x8;
  if (piVar6 + 1 <= (int *)(*(undefined8 **)&pFVar4->field_0x8)[1]) {
    *piVar1 = *piVar6;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
    return this;
  }
  if ((pFVar4->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,piVar1,4);
    return this;
  }
  FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)piVar1);
  return this;
}

// operator<<<int> @ 142124000

FStructuredArchiveRecord * __thiscall
FStructuredArchiveRecord::operator<<<int>(FStructuredArchiveRecord *this,TNamedValue<int> *param_1)

{
  uint *puVar1;
  FArchive *this_00;
  uint *puVar2;
  
  puVar1 = (uint *)param_1->Value;
  this_00 = *(FArchive **)(*(longlong *)*this + 8);
  puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if (puVar2 + 1 <= (uint *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return this;
  }
  if ((this_00->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,puVar1,4);
    return this;
  }
  FArchive::SerializeByteOrderSwapped(this_00,puVar1);
  return this;
}

// operator<<<TBitArray<FDefaultBitArrayAllocator>_> @ 1421f44c0

FStructuredArchiveRecord * __thiscall
FStructuredArchiveRecord::operator<<<TBitArray<FDefaultBitArrayAllocator>_>
          (FStructuredArchiveRecord *this,
          TNamedValue<TBitArray<FDefaultBitArrayAllocator>_> *param_1)

{
  ForElementType<unsigned_int> this_00;
  int *piVar1;
  uint uVar2;
  FArchive *this_01;
  ForElementType<unsigned_int> FVar3;
  uint uVar4;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = *(FStructuredArchive **)this;
  this_00 = (ForElementType<unsigned_int>)param_1->Value;
  this_01 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  piVar1 = (int *)**(undefined8 **)&this_01->field_0x8;
  if ((int *)(*(undefined8 **)&this_01->field_0x8)[1] < piVar1 + 1) {
    if ((this_01->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_01 + 0x188))(this_01,(int *)((longlong)this_00 + 0x18),4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_01,(uint *)((longlong)this_00 + 0x18));
    }
  }
  else {
    *(int *)((longlong)this_00 + 0x18) = *piVar1;
    **(longlong **)&this_01->field_0x8 = **(longlong **)&this_01->field_0x8 + 4;
  }
  if ((this_01->field_0x28 & 1) != 0) {
    uVar2 = *(int *)((longlong)this_00 + 0x18) + 0x1fU >> 5;
    uVar4 = 4;
    if (4 < uVar2) {
      uVar4 = uVar2;
    }
    *(uint *)((longlong)this_00 + 0x1c) = uVar4 << 5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)this_00,0)
    ;
  }
  FVar3 = *(ForElementType<unsigned_int> *)((longlong)this_00 + 0x10);
  if (*(ForElementType<unsigned_int> *)((longlong)this_00 + 0x10) ==
      (ForElementType<unsigned_int>)0x0) {
    FVar3 = this_00;
  }
  (**(code **)(*(longlong *)this_01 + 0x188))
            (this_01,FVar3,(ulonglong)(*(int *)((longlong)this_00 + 0x18) + 0x1fU >> 5) << 2);
  if (((this_01->field_0x28 & 1) != 0) && ((this_01->field_0x2b & 5) == 0)) {
    TBitArray<FDefaultBitArrayAllocator>::ClearPartialSlackBits
              ((TBitArray<FDefaultBitArrayAllocator> *)this_00);
  }
  return this;
}

