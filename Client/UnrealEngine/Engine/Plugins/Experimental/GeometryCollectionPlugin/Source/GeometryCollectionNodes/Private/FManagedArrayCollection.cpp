// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// AddAttribute<UE::Math::TBox<double>_> @ 14e8f51a0

TManagedArray<UE::Math::TBox<double>_> * __thiscall
FManagedArrayCollection::AddAttribute<UE::Math::TBox<double>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          FConstructionParameters *param_3)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TBox<double>_> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FName local_18;
  FName local_10;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    AddNewAttributeImpl<UE::Math::TBox<double>_>(this,param_1,param_2,param_3);
  }
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
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
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TBox<double>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<UE::Math::TBox<double>_>((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// AddAttribute<UE::Math::TTransform<double>_> @ 14e8f5280

TManagedArray<UE::Math::TTransform<double>_> * __thiscall
FManagedArrayCollection::AddAttribute<UE::Math::TTransform<double>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          FConstructionParameters *param_3)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FName local_18;
  FName local_10;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    AddNewAttributeImpl<UE::Math::TTransform<double>_>(this,param_1,param_2,param_3);
  }
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TTransform<double>_> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<UE::Math::TTransform<double>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<UE::Math::TTransform<double>_>
                     ((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// AddNewAttributeImpl<double> @ 14e8f5400

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<double>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          FConstructionParameters *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FValueType *pFVar5;
  FValueType *pFVar6;
  undefined1 *puVar7;
  FName FVar8;
  TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&> local_res8;
  FName local_78;
  FName local_70;
  FName *local_68;
  FValueType *local_60;
  FValueType local_58;
  
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar7 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->GroupInfo).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_2.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar4 * 0x14) == param_2)
        goto LAB_14e8f5491;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_14e8f5491:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<double>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<double>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<double>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<double>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<double>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<double>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar4 = NumElements(this,param_2);
  if ((param_3->bAllowCircularDependency == false) &&
     (bVar2 = IsConnected(this,param_3->GroupIndexDependency,param_2), bVar2)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3954910399890980227>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x27d,
                       "Parameters.bAllowCircularDependency || !IsConnected(Parameters.GroupIndexDependency, Group)"
                      );
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<double>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
            ::__l2::EmptyName;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FVar8 = param_3->GroupIndexDependency;
  }
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FValueType *)0x0) {
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 0;
    *(undefined ***)pFVar5 = &___7__TManagedArray_N__6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<double>
            (&local_58,
             (TUniquePtr<TManagedArray<double>,TDefaultDelete<TManagedArray<double>_>_> *)
             &local_res8.Value,iVar4,FVar8,param_3->Saved);
  local_68 = &local_78;
  local_60 = &local_58;
  local_78 = param_1;
  local_70 = param_2;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&>_>
            ((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              *)&this->Map,&local_res8,(bool *)&local_68);
  FValueType::~FValueType(&local_58);
  if (local_res8.Value != (FValueType *)0x0) {
    (**(code **)(*(longlong *)local_res8.Value + 0x48))(local_res8.Value,1);
  }
  return;
}

// AddNewAttributeImpl<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> @ 14e8f5620

void __thiscall
FManagedArrayCollection::
AddNewAttributeImpl<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          FConstructionParameters *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FValueType *pFVar5;
  FValueType *pFVar6;
  undefined1 *puVar7;
  FName FVar8;
  TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&> local_res8;
  FName local_78;
  FName local_70;
  FName *local_68;
  FValueType *local_60;
  FValueType local_58;
  
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar7 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->GroupInfo).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_2.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar4 * 0x14) == param_2)
        goto LAB_14e8f56b1;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_14e8f56b1:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar4 = NumElements(this,param_2);
  if ((param_3->bAllowCircularDependency == false) &&
     (bVar2 = IsConnected(this,param_3->GroupIndexDependency,param_2), bVar2)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3954910399890980227>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x27d,
                       "Parameters.bAllowCircularDependency || !IsConnected(Parameters.GroupIndexDependency, Group)"
                      );
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
            ::__l2::EmptyName;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FVar8 = param_3->GroupIndexDependency;
  }
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FValueType *)0x0) {
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 0;
    *(undefined ***)pFVar5 =
         &
         ___7__TManagedArray_V__TArray_U__TIntVector2_H_Math_UE__V__TSizedDefaultAllocator__0CA_______6B_
    ;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>
            (&local_58,
             (TUniquePtr<TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>_>_>
              *)&local_res8.Value,iVar4,FVar8,param_3->Saved);
  local_68 = &local_78;
  local_60 = &local_58;
  local_78 = param_1;
  local_70 = param_2;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&>_>
            ((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              *)&this->Map,&local_res8,(bool *)&local_68);
  FValueType::~FValueType(&local_58);
  if (local_res8.Value != (FValueType *)0x0) {
    (**(code **)(*(longlong *)local_res8.Value + 0x48))(local_res8.Value,1);
  }
  return;
}

// FindAttribute<double> @ 14e8f6940

TManagedArray<double> * __thiscall
FManagedArrayCollection::FindAttribute<double>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<double> *pTVar4;
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
    if (*pcVar5 != ' ') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSameType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x303,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4 = *(TManagedArray<double> **)(pcVar5 + 0x20);
    if (pTVar4 == (TManagedArray<double> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
    return pTVar4;
  }
  return (TManagedArray<double> *)0x0;
}

// FindAttribute<UE::Math::TVector<double>_> @ 14e8f69f0

TManagedArray<UE::Math::TVector<double>_> * __thiscall
FManagedArrayCollection::FindAttribute<UE::Math::TVector<double>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<UE::Math::TVector<double>_> *pTVar4;
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
    if (*pcVar5 != '\"') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSameType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x303,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<UE::Math::TVector<double>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4 = *(TManagedArray<UE::Math::TVector<double>_> **)(pcVar5 + 0x20);
    if (pTVar4 == (TManagedArray<UE::Math::TVector<double>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<UE::Math::TVector<double>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    return pTVar4;
  }
  return (TManagedArray<UE::Math::TVector<double>_> *)0x0;
}

// FindAttribute<FString> @ 14e8f6aa0

TManagedArray<FString> * __thiscall
FManagedArrayCollection::FindAttribute<FString>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar1;
  TManagedArray<FString> *pTVar2;
  FValueType *this_00;
  FName local_18;
  FName local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pTVar1 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&this->Map,(TTuple<FName,FName> *)&local_18);
  this_00 = (FValueType *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = (FValueType *)0x0;
  }
  if (this_00 != (FValueType *)0x0) {
    pTVar2 = FValueType::GetTypedPtr<FString>(this_00);
    return pTVar2;
  }
  return (TManagedArray<FString> *)0x0;
}

// FindAttribute<bool> @ 14e8f6af0

TManagedArray<bool> * __thiscall
FManagedArrayCollection::FindAttribute<bool>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar1;
  TManagedArray<bool> *pTVar2;
  FValueType *this_00;
  FName local_18;
  FName local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pTVar1 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&this->Map,(TTuple<FName,FName> *)&local_18);
  this_00 = (FValueType *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = (FValueType *)0x0;
  }
  if (this_00 != (FValueType *)0x0) {
    pTVar2 = FValueType::GetTypedPtr<bool>(this_00);
    return pTVar2;
  }
  return (TManagedArray<bool> *)0x0;
}

// FindAttributeTyped<double> @ 14e8f6b40

TManagedArray<double> * __thiscall
FManagedArrayCollection::FindAttributeTyped<double>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<double> *pTVar4;
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
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FDoubleType)) {
    FValueType::MakeUniqueForWrite(this_00);
    pTVar4 = (TManagedArray<double> *)this_00->ManagedArray;
    if (pTVar4 == (TManagedArray<double> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4->field_0x8 = 1;
    return pTVar4;
  }
  return (TManagedArray<double> *)0x0;
}

// FindAttributeTyped<FLinearColor> @ 14e8f6bd0

TManagedArray<FLinearColor> * __thiscall
FManagedArrayCollection::FindAttributeTyped<FLinearColor>
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
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FLinearColorType)) {
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

// FindAttributeTyped<FString> @ 14e8f6c60

TManagedArray<FString> * __thiscall
FManagedArrayCollection::FindAttributeTyped<FString>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<FString> *pTVar4;
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
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FStringType)) {
    FValueType::MakeUniqueForWrite(this_00);
    pTVar4 = (TManagedArray<FString> *)this_00->ManagedArray;
    if (pTVar4 == (TManagedArray<FString> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4->field_0x8 = 1;
    return pTVar4;
  }
  return (TManagedArray<FString> *)0x0;
}

// ModifyAttribute<double> @ 14e900790

TManagedArray<double> * __thiscall
FManagedArrayCollection::ModifyAttribute<double>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<double> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FName local_18;
  FName local_10;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<double> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<double>((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// ModifyAttribute<UE::Math::TVector<double>_> @ 14e900840

TManagedArray<UE::Math::TVector<double>_> * __thiscall
FManagedArrayCollection::ModifyAttribute<UE::Math::TVector<double>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector<double>_> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FName local_18;
  FName local_10;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector<double>_> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<UE::Math::TVector<double>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<UE::Math::TVector<double>_>((FValueType *)&pTVar4->field_0x10)
  ;
  return pTVar3;
}

