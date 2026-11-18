// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 5

// TBaseKeyIterator<1> @ 143365bc0

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *param_1
          ,int param_2)

{
  longlong lVar1;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  
  this->Key = param_2;
  this->Set = param_1;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    FVar2 = (param_1->Hash).SecondaryData;
    if (FVar2 == (ForElementType<FSetElementId>)0x0) {
      FVar2 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar3 = *(int *)((longlong)FVar2 + ((longlong)param_1->HashSize - 1U & (longlong)param_2) * 4);
    this->NextIndex = iVar3;
    this->Index = iVar3;
    if (iVar3 != -1) {
      while( true ) {
        lVar1 = (longlong)iVar3;
        iVar3 = *(int *)(*(longlong *)&param_1->Elements + 8 + lVar1 * 0x10);
        this->NextIndex = iVar3;
        if (*(int *)(*(longlong *)&param_1->Elements + lVar1 * 0x10) == param_2) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 143365c50

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<UE::Geometry::FVector2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,int,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<UE::Geometry::FVector2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,int,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<UE::Geometry::FVector2i_const_> param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar2 = FCrc::MemCrc_DEPRECATED(param_2.Ref,8,0);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar5 = *(int *)((longlong)FVar4 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar2) * 4
                    );
    this->NextIndex = iVar5;
    this->Index = iVar5;
    if (iVar5 != -1) {
      while( true ) {
        lVar3 = (longlong)iVar5;
        iVar5 = *(int *)(*(longlong *)&this->Set->Elements + 0xc + lVar3 * 0x14);
        this->NextIndex = iVar5;
        piVar1 = (int *)(*(longlong *)&this->Set->Elements + lVar3 * 0x14);
        if ((*piVar1 == (this->Key->field0_0x0)._s_0.X) &&
           (piVar1[1] == (this->Key->field0_0x0)._s_0.Y)) break;
        this->Index = iVar5;
        if (iVar5 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 143365d20

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<UE::Geometry::FVector3i_const_> param_2)

{
  int *piVar1;
  FVector3i *pFVar2;
  uint uVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar3 = FCrc::MemCrc_DEPRECATED(param_2.Ref,0xc,0);
    FVar5 = (param_1->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar3) * 4
                    );
    this->NextIndex = iVar6;
    this->Index = iVar6;
    if (iVar6 != -1) {
      pFVar2 = this->Key;
      while( true ) {
        lVar4 = (longlong)iVar6;
        iVar6 = *(int *)(*(longlong *)&this->Set->Elements + 0x10 + lVar4 * 0x18);
        this->NextIndex = iVar6;
        piVar1 = (int *)(*(longlong *)&this->Set->Elements + lVar4 * 0x18);
        if (((*piVar1 == (pFVar2->field0_0x0)._s_0.X) && (piVar1[1] == (pFVar2->field0_0x0)._s_0.Y))
           && (piVar1[2] == (pFVar2->field0_0x0)._s_0.Z)) break;
        this->Index = iVar6;
        if (iVar6 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// operator++ @ 14336b660

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
TBaseKeyIterator<1>::operator++(TBaseKeyIterator<1> *this)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = this->NextIndex;
  this->Index = iVar2;
  if (iVar2 != -1) {
    do {
      lVar1 = (longlong)iVar2;
      iVar2 = *(int *)(*(longlong *)&this->Set->Elements + 8 + lVar1 * 0x10);
      this->NextIndex = iVar2;
      if (*(int *)(*(longlong *)&this->Set->Elements + lVar1 * 0x10) == this->Key) {
        return this;
      }
      this->Index = iVar2;
    } while (iVar2 != -1);
  }
  return this;
}

// operator++ @ 14336b6b0

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::operator++(TBaseKeyIterator<1> *this)

{
  int *piVar1;
  FVector3i *pFVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = this->NextIndex;
  this->Index = iVar4;
  if (iVar4 != -1) {
    pFVar2 = this->Key;
    do {
      lVar3 = (longlong)iVar4;
      iVar4 = *(int *)(*(longlong *)&this->Set->Elements + 0x10 + lVar3 * 0x18);
      this->NextIndex = iVar4;
      piVar1 = (int *)(*(longlong *)&this->Set->Elements + lVar3 * 0x18);
      if (((*piVar1 == (pFVar2->field0_0x0)._s_0.X) && (piVar1[1] == (pFVar2->field0_0x0)._s_0.Y))
         && (piVar1[2] == (pFVar2->field0_0x0)._s_0.Z)) {
        return this;
      }
      this->Index = iVar4;
    } while (iVar4 != -1);
  }
  return this;
}

