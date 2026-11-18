// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// TBaseKeyIterator<1> @ 146d711f0

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FNavigationElementHandle_const_> param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  uint uVar7;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar7 = (int)((param_2.Ref)->SubElementId >> 0x20) * 0x17 + (int)(param_2.Ref)->SubElementId;
    FVar5 = (param_1->Hash).SecondaryData;
    uVar6 = (((param_2.Ref)->OwnerUObject).WeakPtr.ObjectSerialNumber ^
            ((param_2.Ref)->OwnerUObject).WeakPtr.ObjectIndex) - uVar7 ^ uVar7 >> 0xd;
    uVar4 = (-0x61c88647 - uVar6) - uVar7 ^ uVar6 << 8;
    uVar7 = (uVar7 - uVar4) - uVar6 ^ uVar4 >> 0xd;
    uVar6 = (uVar6 - uVar7) - uVar4 ^ uVar7 >> 0xc;
    uVar4 = (uVar4 - uVar6) - uVar7 ^ uVar6 << 0x10;
    uVar7 = (uVar7 - uVar4) - uVar6 ^ uVar4 >> 5;
    uVar6 = (uVar6 - uVar7) - uVar4 ^ uVar7 >> 3;
    uVar4 = (uVar4 - uVar6) - uVar7 ^ uVar6 << 10;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (((longlong)(int)((uVar7 - uVar4) - uVar6) ^ (ulonglong)(uVar4 >> 0xf)) &
                    (longlong)param_1->HashSize - 1U) * 4);
    this->NextIndex = iVar3;
    this->Index = iVar3;
    if (iVar3 != -1) {
      while( true ) {
        lVar1 = (longlong)iVar3 * 0x28;
        iVar3 = *(int *)(lVar1 + 0x20 + *(longlong *)&param_1->Elements);
        this->NextIndex = iVar3;
        lVar2 = *(longlong *)&param_1->Elements;
        if (((*(int *)(lVar2 + lVar1) == ((param_2.Ref)->OwnerUObject).WeakPtr.ObjectIndex) &&
            (*(int *)(lVar2 + 4 + lVar1) == ((param_2.Ref)->OwnerUObject).WeakPtr.ObjectSerialNumber
            )) && (*(ulong64 *)(lVar2 + 8 + lVar1) == (param_2.Ref)->SubElementId)) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 146d71350

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FNavigationElementHandle_const_> param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  uint uVar7;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar7 = (int)((param_2.Ref)->SubElementId >> 0x20) * 0x17 + (int)(param_2.Ref)->SubElementId;
    FVar5 = (param_1->Hash).SecondaryData;
    uVar6 = (((param_2.Ref)->OwnerUObject).WeakPtr.ObjectSerialNumber ^
            ((param_2.Ref)->OwnerUObject).WeakPtr.ObjectIndex) - uVar7 ^ uVar7 >> 0xd;
    uVar4 = (-0x61c88647 - uVar6) - uVar7 ^ uVar6 << 8;
    uVar7 = (uVar7 - uVar4) - uVar6 ^ uVar4 >> 0xd;
    uVar6 = (uVar6 - uVar7) - uVar4 ^ uVar7 >> 0xc;
    uVar4 = (uVar4 - uVar6) - uVar7 ^ uVar6 << 0x10;
    uVar7 = (uVar7 - uVar4) - uVar6 ^ uVar4 >> 5;
    uVar6 = (uVar6 - uVar7) - uVar4 ^ uVar7 >> 3;
    uVar4 = (uVar4 - uVar6) - uVar7 ^ uVar6 << 10;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (((longlong)(int)((uVar7 - uVar4) - uVar6) ^ (ulonglong)(uVar4 >> 0xf)) &
                    (longlong)param_1->HashSize - 1U) * 4);
    this->NextIndex = iVar3;
    this->Index = iVar3;
    if (iVar3 != -1) {
      while( true ) {
        lVar1 = (longlong)iVar3 * 0x28;
        iVar3 = *(int *)(lVar1 + 0x20 + *(longlong *)&param_1->Elements);
        this->NextIndex = iVar3;
        lVar2 = *(longlong *)&param_1->Elements;
        if (((*(int *)(lVar2 + lVar1) == ((param_2.Ref)->OwnerUObject).WeakPtr.ObjectIndex) &&
            (*(int *)(lVar2 + 4 + lVar1) == ((param_2.Ref)->OwnerUObject).WeakPtr.ObjectSerialNumber
            )) && (*(ulong64 *)(lVar2 + 8 + lVar1) == (param_2.Ref)->SubElementId)) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

