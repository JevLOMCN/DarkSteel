// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionDepNodes
// Functions: 1

// FindAttribute<FLinearColor> @ 14e96b1f0

TManagedArray<FLinearColor> * __thiscall
FManagedArrayCollection::FindAttribute<FLinearColor>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<FLinearColor> *pTVar4;
  FValueType *this_00;
  FName local_18;
  FName local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&this->Map,(TTuple<FName,FName> *)&local_18);
  this_00 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = (FValueType *)0x0;
  }
  if (this_00 != (FValueType *)0x0) {
    if (this_00->ArrayType != FLinearColorType) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSameType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x315,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<FLinearColor> *)(*pcVar1)();
        return pTVar4;
      }
    }
    FValueType::MakeUniqueForWrite(this_00);
    pTVar4 = (TManagedArray<FLinearColor> *)this_00->ManagedArray;
    if (pTVar4 == (TManagedArray<FLinearColor> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<FLinearColor> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4->field_0x8 = 1;
    return pTVar4;
  }
  return (TManagedArray<FLinearColor> *)0x0;
}

