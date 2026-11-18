// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// GetTypedPtr<UE::Math::TTransform<double>_> @ 146350fd0

TManagedArray<UE::Math::TTransform<double>_> * __thiscall
FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TTransform<double>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar3;
  
  if (this->ArrayType != FTransformType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TTransform<double>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = (TManagedArray<UE::Math::TTransform<double>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<UE::Math::TTransform<double>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TTransform<double>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

// ModifyTypedPtr<UE::Math::TVector<double>_> @ 14639f8e0

TManagedArray<UE::Math::TVector<double>_> * __thiscall
FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TVector<double>_>(FValueType *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector<double>_> *pTVar3;
  
  if (this->ArrayType != FVector3dType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector<double>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  MakeUniqueForWrite(this);
  pTVar3 = (TManagedArray<UE::Math::TVector<double>_> *)this->ManagedArray;
  if (pTVar3 == (TManagedArray<UE::Math::TVector<double>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector<double>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

