// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 6

// AddAttribute<bool> @ 146349b70

TManagedArray<bool> * __thiscall
FManagedArrayCollection::AddAttribute<bool>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          FConstructionParameters *param_3)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<bool> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FName local_18;
  FName local_10;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    AddNewAttributeImpl<bool>(this,param_1,param_2,param_3);
  }
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<bool> *)(*pcVar1)();
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
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<bool> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<bool>((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// FindAttribute<UE::Math::TBox<double>_> @ 14634dbb0

TManagedArray<UE::Math::TBox<double>_> * __thiscall
FManagedArrayCollection::FindAttribute<UE::Math::TBox<double>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<UE::Math::TBox<double>_> *pTVar4;
  char *pcVar5;
  FName local_18;
  FName local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&this->Map,(TTuple<FName,FName> *)&local_18);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = (char *)0x0;
  }
  if (pcVar5 != (char *)0x0) {
    if (*pcVar5 != '\r') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSameType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x303,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<UE::Math::TBox<double>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4 = *(TManagedArray<UE::Math::TBox<double>_> **)(pcVar5 + 0x20);
    if (pTVar4 == (TManagedArray<UE::Math::TBox<double>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<UE::Math::TBox<double>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    return pTVar4;
  }
  return (TManagedArray<UE::Math::TBox<double>_> *)0x0;
}

// FindAttribute<UE::Math::TTransform<double>_> @ 14634dc60

TManagedArray<UE::Math::TTransform<double>_> * __thiscall
FManagedArrayCollection::FindAttribute<UE::Math::TTransform<double>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar4;
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
    if (this_00->ArrayType != FTransformType) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSameType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x315,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<UE::Math::TTransform<double>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    FValueType::MakeUniqueForWrite(this_00);
    pTVar4 = (TManagedArray<UE::Math::TTransform<double>_> *)this_00->ManagedArray;
    if (pTVar4 == (TManagedArray<UE::Math::TTransform<double>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<UE::Math::TTransform<double>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4->field_0x8 = 1;
    return pTVar4;
  }
  return (TManagedArray<UE::Math::TTransform<double>_> *)0x0;
}

// FindAttributeTyped<TRefCountPtr<Chaos::FImplicitObject>_> @ 14639dc40

TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> * __thiscall
FManagedArrayCollection::FindAttributeTyped<TRefCountPtr<Chaos::FImplicitObject>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *pTVar4;
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
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FFImplicitObjectRefCountedPtrType)) {
    FValueType::MakeUniqueForWrite(this_00);
    pTVar4 = (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)this_00->ManagedArray;
    if (pTVar4 == (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4->field_0x8 = 1;
    return pTVar4;
  }
  return (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)0x0;
}

// FindAttributeTyped<TSharedPtr<Chaos::FImplicitObject,1>_> @ 14639dcd0

TManagedArray<TSharedPtr<Chaos::FImplicitObject,1>_> * __thiscall
FManagedArrayCollection::FindAttributeTyped<TSharedPtr<Chaos::FImplicitObject,1>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<TSharedPtr<Chaos::FImplicitObject,1>_> *pTVar4;
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
  if ((this_00 != (FValueType *)0x0) &&
     (this_00->ArrayType == FFImplicitObject3ThreadSafeSharedPointerType)) {
    FValueType::MakeUniqueForWrite(this_00);
    pTVar4 = (TManagedArray<TSharedPtr<Chaos::FImplicitObject,1>_> *)this_00->ManagedArray;
    if (pTVar4 == (TManagedArray<TSharedPtr<Chaos::FImplicitObject,1>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<TSharedPtr<Chaos::FImplicitObject,1>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4->field_0x8 = 1;
    return pTVar4;
  }
  return (TManagedArray<TSharedPtr<Chaos::FImplicitObject,1>_> *)0x0;
}

// GetAttribute<UE::Math::TBox<double>_> @ 14639ded0

TManagedArray<UE::Math::TBox<double>_> * __thiscall
FManagedArrayCollection::GetAttribute<UE::Math::TBox<double>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TBox<double>_> *pTVar3;
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
      pTVar3 = (TManagedArray<UE::Math::TBox<double>_> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<UE::Math::TBox<double>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (pTVar4->field_0x10 != '\r') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TBox<double>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = *(TManagedArray<UE::Math::TBox<double>_> **)&pTVar4->field_0x30;
  if (pTVar3 == (TManagedArray<UE::Math::TBox<double>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TBox<double>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

