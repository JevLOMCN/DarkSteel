// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionDepNodes
// Functions: 2

// TManagedArrayAccessor<int> @ 14e96b360

TManagedArrayAccessor<int> * __thiscall
TManagedArrayAccessor<int>::TManagedArrayAccessor<int>
          (TManagedArrayAccessor<int> *this,FManagedArrayCollection *param_1,FName *param_2,
          FName *param_3,FName *param_4)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArrayAccessor<int> *pTVar4;
  FValueType *pFVar5;
  FValueType *this_00;
  FName local_18;
  FName local_10;
  
  this->ConstCollection = param_1;
  this->Collection = param_1;
  this->Name = *param_2;
  this->Group = *param_3;
  this->DefaultGroupDependency = *param_4;
  local_18 = *param_2;
  local_10 = *param_3;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  pFVar5 = (FValueType *)0x0;
  this_00 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = pFVar5;
  }
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FInt32Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar5 = (FValueType *)this_00->ManagedArray;
    if (pFVar5 == (FValueType *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArrayAccessor<int> *)(*pcVar1)();
        return pTVar4;
      }
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  this->AttributeArray = (TManagedArray<int> *)pFVar5;
  this->ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  return this;
}

// operator[] @ 14e96bb10

TIntVector3<int> * __thiscall
TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::operator[]
          (TManagedArrayAccessor<UE::Math::TIntVector3<int>_> *this,int param_1)

{
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TIntVector3<int> *pTVar5;
  
  if (this->ConstAttributeArray == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x60,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TIntVector3<int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar1 = this->ConstAttributeArray;
  uVar4 = 0;
  if (param_1 < *(int *)&pTVar1->field_0x18) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TIntVector3<int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TIntVector3<int> *)(*(longlong *)&pTVar1->field_0x10 + (longlong)param_1 * 0xc);
}

