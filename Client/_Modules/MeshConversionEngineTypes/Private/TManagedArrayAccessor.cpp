// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversionEngineTypes
// Functions: 1

// TManagedArrayAccessor<int> @ 14ca33e20

TManagedArrayAccessor<int> * __thiscall
TManagedArrayAccessor<int>::TManagedArrayAccessor<int>
          (TManagedArrayAccessor<int> *this,FManagedArrayCollection *param_1,FName *param_2,
          FName *param_3,FName *param_4)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  TManagedArrayAccessor<int> *pTVar5;
  char *pcVar6;
  FName local_18;
  FName local_10;
  
  this->ConstCollection = param_1;
  this->Collection = (FManagedArrayCollection *)0x0;
  this->Name = *param_2;
  this->Group = *param_3;
  this->DefaultGroupDependency = *param_4;
  this->AttributeArray = (TManagedArray<int> *)0x0;
  local_18 = *param_2;
  local_10 = *param_3;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\x05')) {
    pTVar1 = *(TManagedArray<int> **)(pcVar6 + 0x20);
    if (pTVar1 == (TManagedArray<int> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TManagedArrayAccessor<int> *)(*pcVar2)();
        return pTVar5;
      }
    }
    this->ConstAttributeArray = pTVar1;
    return this;
  }
  this->ConstAttributeArray = (TManagedArray<int> *)0x0;
  return this;
}

