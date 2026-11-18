// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 6

// AddAttribute<int> @ 14da595d0

TManagedArray<int> * __thiscall
FManagedArrayCollection::AddAttribute<int>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          FConstructionParameters *param_3)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FName local_18;
  FName local_10;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    AddNewAttributeImpl<int>(this,param_1,param_2,param_3);
  }
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<int> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<int>((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// AddAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14da596b0

TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
FManagedArrayCollection::AddAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          FConstructionParameters *param_3)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FName local_18;
  FName local_10;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_>(this,param_1,param_2,param_3);
  }
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>
                     ((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// AddAttribute<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14da59790

TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
FManagedArrayCollection::AddAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          FConstructionParameters *param_3)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FName local_18;
  FName local_10;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    AddNewAttributeImpl<TArray<float,TSizedDefaultAllocator<32>_>_>(this,param_1,param_2,param_3);
  }
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<TArray<float,TSizedDefaultAllocator<32>_>_>
                     ((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// AddNewAttributeImpl<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> @ 14da59870

void __thiscall
FManagedArrayCollection::
AddNewAttributeImpl<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
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
        goto LAB_14da59901;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_14da59901:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined4 *)((longlong)&(pFVar5->GroupIndexDependency).Number + 1) = 0;
    *(undefined2 *)&pFVar5->bExternalValue = 0;
    pFVar5->field_0xf = 0;
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 0;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined ***)pFVar5 =
         &
         ___7__TManagedArray_V__TArray_U__TIntVector3_H_Math_UE__V__TSizedDefaultAllocator__0CA_______6B_
    ;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
            (&local_58,
             (TUniquePtr<TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>_>_>
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

// AddNewAttributeImpl<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14da59aa0

void __thiscall
FManagedArrayCollection::
AddNewAttributeImpl<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
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
        goto LAB_14da59b31;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_14da59b31:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
         ___7__TManagedArray_V__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA_______6B_
    ;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
            (&local_58,
             (TUniquePtr<TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_>_>
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

// FindAttributeTyped<UE::Math::TVector2<float>_> @ 14da5a7b0

TManagedArray<UE::Math::TVector2<float>_> * __thiscall
FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector2<float>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar4;
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
  if ((pcVar5 != (char *)0x0) && (*pcVar5 == '\x03')) {
    pTVar4 = *(TManagedArray<UE::Math::TVector2<float>_> **)(pcVar5 + 0x20);
    if (pTVar4 == (TManagedArray<UE::Math::TVector2<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<UE::Math::TVector2<float>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    return pTVar4;
  }
  return (TManagedArray<UE::Math::TVector2<float>_> *)0x0;
}

