// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 5

// TBaseKeyIterator<1> @ 14c9a08f0

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<UE::Geometry::FVector3i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<UE::Geometry::FVector3i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<UE::Geometry::FVector3i_const_> param_2)

{
  FVector3i *pFVar1;
  longlong lVar2;
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
      pFVar1 = this->Key;
      while( true ) {
        lVar4 = (longlong)iVar6 * 0x1c;
        iVar6 = *(int *)(lVar4 + 0x14 + *(longlong *)&this->Set->Elements);
        this->NextIndex = iVar6;
        lVar2 = *(longlong *)&this->Set->Elements;
        if (((*(int *)(lVar2 + lVar4) == (pFVar1->field0_0x0)._s_0.X) &&
            (*(int *)(lVar2 + 4 + lVar4) == (pFVar1->field0_0x0)._s_0.Y)) &&
           (*(int *)(lVar2 + 8 + lVar4) == (pFVar1->field0_0x0)._s_0.Z)) break;
        this->Index = iVar6;
        if (iVar6 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 14c9a09d0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
          *param_1,int param_2)

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
        iVar3 = *(int *)(*(longlong *)&param_1->Elements + 0xc + lVar1 * 0x14);
        this->NextIndex = iVar3;
        if (*(int *)(*(longlong *)&param_1->Elements + lVar1 * 0x14) == param_2) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 14c9a0a60

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<UE::Geometry::FVector3i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<UE::Geometry::FVector3i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<UE::Geometry::FVector3i_const_> param_2)

{
  FVector3i *pFVar1;
  longlong lVar2;
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
      pFVar1 = this->Key;
      while( true ) {
        lVar4 = (longlong)iVar6 * 0x1c;
        iVar6 = *(int *)(lVar4 + 0x14 + *(longlong *)&this->Set->Elements);
        this->NextIndex = iVar6;
        lVar2 = *(longlong *)&this->Set->Elements;
        if (((*(int *)(lVar2 + lVar4) == (pFVar1->field0_0x0)._s_0.X) &&
            (*(int *)(lVar2 + 4 + lVar4) == (pFVar1->field0_0x0)._s_0.Y)) &&
           (*(int *)(lVar2 + 8 + lVar4) == (pFVar1->field0_0x0)._s_0.Z)) break;
        this->Index = iVar6;
        if (iVar6 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// operator++ @ 14c9a9690

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<UE::Geometry::FVector3i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::operator++(TBaseKeyIterator<1> *this)

{
  FVector3i *pFVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = this->NextIndex;
  this->Index = iVar4;
  if (iVar4 != -1) {
    pFVar1 = this->Key;
    do {
      lVar3 = (longlong)iVar4 * 0x1c;
      iVar4 = *(int *)(*(longlong *)&this->Set->Elements + 0x14 + lVar3);
      this->NextIndex = iVar4;
      lVar2 = *(longlong *)&this->Set->Elements;
      if (((*(int *)(lVar2 + lVar3) == (pFVar1->field0_0x0)._s_0.X) &&
          (*(int *)(lVar2 + 4 + lVar3) == (pFVar1->field0_0x0)._s_0.Y)) &&
         (*(int *)(lVar2 + 8 + lVar3) == (pFVar1->field0_0x0)._s_0.Z)) {
        return this;
      }
      this->Index = iVar4;
    } while (iVar4 != -1);
  }
  return this;
}

// operator++ @ 14c9a9700

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::operator++(TBaseKeyIterator<0> *this)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = this->NextIndex;
  this->Index = iVar2;
  if (iVar2 != -1) {
    do {
      lVar1 = (longlong)iVar2;
      iVar2 = *(int *)(*(longlong *)&this->Set->Elements + 0xc + lVar1 * 0x14);
      this->NextIndex = iVar2;
      if (*(int *)(*(longlong *)&this->Set->Elements + lVar1 * 0x14) == this->Key) {
        return this;
      }
      this->Index = iVar2;
    } while (iVar2 != -1);
  }
  return this;
}

