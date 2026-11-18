// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FractureEngine
// Functions: 1

// GetAttribute<UE::Math::TTransform<float>_> @ 14e801d90

TManagedArray<UE::Math::TTransform<float>_> * __thiscall
FManagedArrayCollection::GetAttribute<UE::Math::TTransform<float>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FName local_18;
  FName local_10;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x185,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TTransform<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_18 = param_1;
  local_10 = param_2;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&this->Map,(TTuple<FName,FName> *)&local_18);
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TTransform<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (pTVar4->field_0x10 != ',') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TTransform<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = *(TManagedArray<UE::Math::TTransform<float>_> **)&pTVar4->field_0x30;
  if (pTVar3 == (TManagedArray<UE::Math::TTransform<float>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TTransform<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

