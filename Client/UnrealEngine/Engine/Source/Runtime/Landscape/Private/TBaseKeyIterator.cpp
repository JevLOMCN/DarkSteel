// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// TBaseKeyIterator<1> @ 145f76750

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<UE::Geometry::FVector3i,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Math::TVector<double>,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<UE::Geometry::FVector3i,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Math::TVector<double>,1>,FDefaultSetAllocator>
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
        lVar4 = (longlong)iVar6;
        iVar6 = *(int *)(*(longlong *)&this->Set->Elements + 0x28 + lVar4 * 0x30);
        this->NextIndex = iVar6;
        lVar2 = *(longlong *)&this->Set->Elements;
        if (((*(int *)(lVar2 + lVar4 * 0x30) == (pFVar1->field0_0x0)._s_0.X) &&
            (*(int *)(lVar2 + 4 + lVar4 * 0x30) == (pFVar1->field0_0x0)._s_0.Y)) &&
           (*(int *)(lVar2 + 8 + lVar4 * 0x30) == (pFVar1->field0_0x0)._s_0.Z)) break;
        this->Index = iVar6;
        if (iVar6 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// operator++ @ 145f7e690

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<UE::Geometry::FVector3i,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Math::TVector<double>,1>,FDefaultSetAllocator>
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
      lVar3 = (longlong)iVar4;
      iVar4 = *(int *)(*(longlong *)&this->Set->Elements + 0x28 + lVar3 * 0x30);
      this->NextIndex = iVar4;
      lVar2 = *(longlong *)&this->Set->Elements;
      if (((*(int *)(lVar2 + lVar3 * 0x30) == (pFVar1->field0_0x0)._s_0.X) &&
          (*(int *)(lVar2 + 4 + lVar3 * 0x30) == (pFVar1->field0_0x0)._s_0.Y)) &&
         (*(int *)(lVar2 + 8 + lVar3 * 0x30) == (pFVar1->field0_0x0)._s_0.Z)) {
        return this;
      }
      this->Index = iVar4;
    } while (iVar4 != -1);
  }
  return this;
}

