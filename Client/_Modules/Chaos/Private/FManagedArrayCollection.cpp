// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 156

// MatchOptionalDefaultAttributes @ 1436ee7d0

void __thiscall
FManagedArrayCollection::MatchOptionalDefaultAttributes
          (FManagedArrayCollection *this,FManagedArrayCollection *param_1)

{
  return;
}

// IsAType @ 1436f0cb0

bool __thiscall FManagedArrayCollection::IsAType(FManagedArrayCollection *this,FName param_1)

{
  uint uStackX_14;
  FName local_res18 [2];
  
  ::FName::FName(local_res18,"FManagedArrayCollection");
  if ((param_1.ComparisonIndex.Value.Value == local_res18[0].ComparisonIndex.Value) &&
     (uStackX_14 = param_1.Number, uStackX_14 == local_res18[0].Number)) {
    return true;
  }
  return false;
}

// Reset @ 1436f0d80

void __thiscall FManagedArrayCollection::Reset(FManagedArrayCollection *this)

{
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           *)&this->Map);
  TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           *)&this->GroupInfo);
  this->bDirty = true;
  return;
}

// AddAttribute<UE::Math::TVector<float>_> @ 1436f17a0

TManagedArray<UE::Math::TVector<float>_> * __thiscall
FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          FConstructionParameters *param_3)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FName local_18;
  FName local_10;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    AddNewAttributeImpl<UE::Math::TVector<float>_>(this,param_1,param_2,param_3);
  }
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (pTVar4->field_0x10 != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FValueType::MakeUniqueForWrite((FValueType *)&pTVar4->field_0x10);
  pTVar3 = *(TManagedArray<UE::Math::TVector<float>_> **)&pTVar4->field_0x30;
  if (pTVar3 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// AddNewAttributeImpl<UE::Math::TVector<float>_> @ 1436f18e0

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<float>_>
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
        goto LAB_1436f1971;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_1436f1971:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_U__TVector_M_Math_UE____6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<UE::Math::TVector<float>_>
            (&local_58,
             (TUniquePtr<TManagedArray<UE::Math::TVector<float>_>,TDefaultDelete<TManagedArray<UE::Math::TVector<float>_>_>_>
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

// AddNewAttributeImpl<FLinearColor> @ 1436f1b00

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<FLinearColor>
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
        goto LAB_1436f1b91;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_1436f1b91:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FLinearColor>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FLinearColor>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FLinearColor>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FLinearColor>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FLinearColor>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FLinearColor>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FLinearColor>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_UFLinearColor____6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<FLinearColor>
            (&local_58,
             (TUniquePtr<TManagedArray<FLinearColor>,TDefaultDelete<TManagedArray<FLinearColor>_>_>
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

// AddAttribute<FName> @ 1437d43e0

TManagedArray<FName> * __thiscall
FManagedArrayCollection::AddAttribute<FName>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          FConstructionParameters *param_3)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<FName> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FName local_18;
  FName local_10;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    AddNewAttributeImpl<FName>(this,param_1,param_2,param_3);
  }
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FName> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<FName> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<FName>((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// AddAttribute<FString> @ 1437d44c0

TManagedArray<FString> * __thiscall
FManagedArrayCollection::AddAttribute<FString>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          FConstructionParameters *param_3)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<FString> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FName local_18;
  FName local_10;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    AddNewAttributeImpl<FString>(this,param_1,param_2,param_3);
  }
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FString> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<FString> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<FString>((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// AddNewAttributeImpl<unsigned_char> @ 1437d45a0

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<unsigned_char>
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
        goto LAB_1437d4631;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_1437d4631:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<unsigned_char>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<unsigned_char>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<unsigned_char>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<unsigned_char>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<unsigned_char>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<unsigned_char>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<unsigned_char>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_E__6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<unsigned_char>
            (&local_58,
             (TUniquePtr<TManagedArray<unsigned_char>,TDefaultDelete<TManagedArray<unsigned_char>_>_>
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

// AddNewAttributeImpl<int> @ 1437d47c0

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<int>
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
        goto LAB_1437d4851;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_1437d4851:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<int>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<int>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<int>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<int>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<int>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<int>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<int>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_H__6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<int>
            (&local_58,
             (TUniquePtr<TManagedArray<int>,TDefaultDelete<TManagedArray<int>_>_> *)
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

// AddNewAttributeImpl<float> @ 1437d49e0

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<float>
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
        goto LAB_1437d4a71;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_1437d4a71:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<float>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<float>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<float>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<float>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<float>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<float>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<float>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_M__6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<float>
            (&local_58,
             (TUniquePtr<TManagedArray<float>,TDefaultDelete<TManagedArray<float>_>_> *)
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

// AddNewAttributeImpl<UE::Math::TIntVector2<unsigned_int>_> @ 1437d4c00

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<unsigned_int>_>
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
        goto LAB_1437d4c91;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_1437d4c91:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<unsigned_int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<unsigned_int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<unsigned_int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<unsigned_int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<unsigned_int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<unsigned_int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<unsigned_int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_U__TIntVector2_I_Math_UE____6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<UE::Math::TIntVector2<unsigned_int>_>
            (&local_58,
             (TUniquePtr<TManagedArray<UE::Math::TIntVector2<unsigned_int>_>,TDefaultDelete<TManagedArray<UE::Math::TIntVector2<unsigned_int>_>_>_>
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

// AddNewAttributeImpl<FName> @ 1437d4e20

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<FName>
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
        goto LAB_1437d4eb1;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_1437d4eb1:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FName>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FName>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FName>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FName>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FName>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FName>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FName>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_VFName____6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<FName>
            (&local_58,
             (TUniquePtr<TManagedArray<FName>,TDefaultDelete<TManagedArray<FName>_>_> *)
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

// AddNewAttributeImpl<FString> @ 1437d5040

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<FString>
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
        goto LAB_1437d50d1;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_1437d50d1:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FString>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FString>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FString>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FString>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FString>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FString>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FString>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_VFString____6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<FString>
            (&local_58,
             (TUniquePtr<TManagedArray<FString>,TDefaultDelete<TManagedArray<FString>_>_> *)
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

// FindAttributeTyped<FName> @ 143810100

TManagedArray<FName> * __thiscall
FManagedArrayCollection::FindAttributeTyped<FName>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<FName> *pTVar4;
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
  if ((pcVar5 != (char *)0x0) && (*pcVar5 == '5')) {
    pTVar4 = *(TManagedArray<FName> **)(pcVar5 + 0x20);
    if (pTVar4 == (TManagedArray<FName> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<FName> *)(*pcVar1)();
        return pTVar4;
      }
    }
    return pTVar4;
  }
  return (TManagedArray<FName> *)0x0;
}

// FindAttributeTyped<FString> @ 143810190

TManagedArray<FString> * __thiscall
FManagedArrayCollection::FindAttributeTyped<FString>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<FString> *pTVar4;
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
  if ((pcVar5 != (char *)0x0) && (*pcVar5 == '\b')) {
    pTVar4 = *(TManagedArray<FString> **)(pcVar5 + 0x20);
    if (pTVar4 == (TManagedArray<FString> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    return pTVar4;
  }
  return (TManagedArray<FString> *)0x0;
}

// FindAttribute<int> @ 143a27d10

TManagedArray<int> * __thiscall
FManagedArrayCollection::FindAttribute<int>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<int> *pTVar4;
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
    if (*pcVar5 != '\x05') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSameType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x303,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<int> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4 = *(TManagedArray<int> **)(pcVar5 + 0x20);
    if (pTVar4 == (TManagedArray<int> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<int> *)(*pcVar1)();
        return pTVar4;
      }
    }
    return pTVar4;
  }
  return (TManagedArray<int> *)0x0;
}

// FindAttribute<float> @ 143a27dc0

TManagedArray<float> * __thiscall
FManagedArrayCollection::FindAttribute<float>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<float> *pTVar4;
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
    if (*pcVar5 != '\t') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSameType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x303,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4 = *(TManagedArray<float> **)(pcVar5 + 0x20);
    if (pTVar4 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
    return pTVar4;
  }
  return (TManagedArray<float> *)0x0;
}

// FindAttribute<UE::Math::TIntVector3<int>_> @ 143a27e70

TManagedArray<UE::Math::TIntVector3<int>_> * __thiscall
FManagedArrayCollection::FindAttribute<UE::Math::TIntVector3<int>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar4;
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
    if (*pcVar5 != '\x02') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSameType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x303,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<UE::Math::TIntVector3<int>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4 = *(TManagedArray<UE::Math::TIntVector3<int>_> **)(pcVar5 + 0x20);
    if (pTVar4 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<UE::Math::TIntVector3<int>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    return pTVar4;
  }
  return (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0;
}

// FindAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 143a27f20

TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
FManagedArrayCollection::FindAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
    if (*pcVar5 != '%') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSameType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x303,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4 = *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)(pcVar5 + 0x20);
    if (pTVar4 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    return pTVar4;
  }
  return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
}

// FindAttributeTyped<UE::Math::TIntVector4<int>_> @ 143a27fd0

TManagedArray<UE::Math::TIntVector4<int>_> * __thiscall
FManagedArrayCollection::FindAttributeTyped<UE::Math::TIntVector4<int>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar4;
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
  if ((pcVar5 != (char *)0x0) && (*pcVar5 == '!')) {
    pTVar4 = *(TManagedArray<UE::Math::TIntVector4<int>_> **)(pcVar5 + 0x20);
    if (pTVar4 == (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<UE::Math::TIntVector4<int>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    return pTVar4;
  }
  return (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0;
}

// GetAttribute<UE::Math::TVector<float>_> @ 143a29570

TManagedArray<UE::Math::TVector<float>_> * __thiscall
FManagedArrayCollection::GetAttribute<UE::Math::TVector<float>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
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
      pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::GetTypedPtr<UE::Math::TVector<float>_>((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// ModifyAttribute<UE::Math::TVector<float>_> @ 143a2a4a0

TManagedArray<UE::Math::TVector<float>_> * __thiscall
FManagedArrayCollection::ModifyAttribute<UE::Math::TVector<float>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
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
      pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<UE::Math::TVector<float>_>((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// AddExternalAttribute<unsigned_char> @ 143f7bfc0

void __thiscall
FManagedArrayCollection::AddExternalAttribute<unsigned_char>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          TManagedArray<unsigned_char> *param_3,FConstructionParameters *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FName FVar6;
  FName local_78;
  FName local_70;
  FName *local_68;
  FValueType *local_60;
  FValueType local_58;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0xe1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar5 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->GroupInfo).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_2.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar4 * 0x14) == param_2)
        goto LAB_143f7c083;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7c083:
  NumElements(this,param_2);
  if (param_4->bAllowCircularDependency == false) {
    bVar2 = IsConnected(this,param_4->GroupIndexDependency,param_2);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3954910399890980630>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0xea,
                         "Parameters.bAllowCircularDependency || !IsConnected(Parameters.GroupIndexDependency, Group)"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar6.ComparisonIndex.Value = 0;
      FVar6.Number = 0;
      goto LAB_143f7c0e3;
    }
  }
  FVar6 = param_4->GroupIndexDependency;
LAB_143f7c0e3:
  iVar4 = NumElements(this,param_2);
  local_58.bPersistent = param_4->Saved;
  local_58.SharedManagedArray.Object = (FManagedArrayBase *)0x0;
  local_58.SharedManagedArray.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_58.ArrayType = FUInt8Type;
  local_58.bExternalValue = true;
  local_58.GroupIndexDependency = FVar6;
  local_58.ManagedArray = (FManagedArrayBase *)param_3;
  (**(code **)(*(longlong *)param_3 + 8))(param_3,iVar4);
  (*(code *)**(undefined8 **)local_58.ManagedArray)(local_58.ManagedArray,iVar4);
  local_68 = &local_78;
  local_60 = &local_58;
  local_78 = param_1;
  local_70 = param_2;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&>_>
            ((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              *)&this->Map,
             (TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&> *)
             &stack0x00000008,(bool *)&local_68);
  FValueType::~FValueType(&local_58);
  return;
}

// AddExternalAttribute<UE::Math::TTransform<float>_> @ 143f7c1a0

void __thiscall
FManagedArrayCollection::AddExternalAttribute<UE::Math::TTransform<float>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          TManagedArray<UE::Math::TTransform<float>_> *param_3,FConstructionParameters *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FName FVar6;
  FName local_78;
  FName local_70;
  FName *local_68;
  FValueType *local_60;
  FValueType local_58;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0xe1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar5 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->GroupInfo).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_2.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar4 * 0x14) == param_2)
        goto LAB_143f7c263;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7c263:
  NumElements(this,param_2);
  if (param_4->bAllowCircularDependency == false) {
    bVar2 = IsConnected(this,param_4->GroupIndexDependency,param_2);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3954910399890980630>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0xea,
                         "Parameters.bAllowCircularDependency || !IsConnected(Parameters.GroupIndexDependency, Group)"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar6.ComparisonIndex.Value = 0;
      FVar6.Number = 0;
      goto LAB_143f7c2c3;
    }
  }
  FVar6 = param_4->GroupIndexDependency;
LAB_143f7c2c3:
  iVar4 = NumElements(this,param_2);
  local_58.bPersistent = param_4->Saved;
  local_58.SharedManagedArray.Object = (FManagedArrayBase *)0x0;
  local_58.SharedManagedArray.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_58.ArrayType = FTransform3fType;
  local_58.bExternalValue = true;
  local_58.GroupIndexDependency = FVar6;
  local_58.ManagedArray = (FManagedArrayBase *)param_3;
  (**(code **)(*(longlong *)param_3 + 8))(param_3,iVar4);
  (*(code *)**(undefined8 **)local_58.ManagedArray)(local_58.ManagedArray,iVar4);
  local_68 = &local_78;
  local_60 = &local_58;
  local_78 = param_1;
  local_70 = param_2;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&>_>
            ((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              *)&this->Map,
             (TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&> *)
             &stack0x00000008,(bool *)&local_68);
  FValueType::~FValueType(&local_58);
  return;
}

// AddExternalAttribute<bool> @ 143f7c380

void __thiscall
FManagedArrayCollection::AddExternalAttribute<bool>
          (FManagedArrayCollection *this,FName param_1,FName param_2,TManagedArray<bool> *param_3,
          FConstructionParameters *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FName FVar6;
  FName local_78;
  FName local_70;
  FName *local_68;
  FValueType *local_60;
  FValueType local_58;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0xe1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar5 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->GroupInfo).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_2.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar4 * 0x14) == param_2)
        goto LAB_143f7c443;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7c443:
  NumElements(this,param_2);
  if (param_4->bAllowCircularDependency == false) {
    bVar2 = IsConnected(this,param_4->GroupIndexDependency,param_2);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3954910399890980630>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0xea,
                         "Parameters.bAllowCircularDependency || !IsConnected(Parameters.GroupIndexDependency, Group)"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar6.ComparisonIndex.Value = 0;
      FVar6.Number = 0;
      goto LAB_143f7c4a3;
    }
  }
  FVar6 = param_4->GroupIndexDependency;
LAB_143f7c4a3:
  iVar4 = NumElements(this,param_2);
  local_58.bPersistent = param_4->Saved;
  local_58.SharedManagedArray.Object = (FManagedArrayBase *)0x0;
  local_58.SharedManagedArray.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_58.ArrayType = FBoolType;
  local_58.bExternalValue = true;
  local_58.GroupIndexDependency = FVar6;
  local_58.ManagedArray = (FManagedArrayBase *)param_3;
  (**(code **)(*(longlong *)param_3 + 8))(param_3,iVar4);
  (*(code *)**(undefined8 **)local_58.ManagedArray)(local_58.ManagedArray,iVar4);
  local_68 = &local_78;
  local_60 = &local_58;
  local_78 = param_1;
  local_70 = param_2;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&>_>
            ((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              *)&this->Map,
             (TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&> *)
             &stack0x00000008,(bool *)&local_68);
  FValueType::~FValueType(&local_58);
  return;
}

// AddNewAttributeImpl<UE::Math::TBox<double>_> @ 143f7c560

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TBox<double>_>
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
        goto LAB_143f7c5f1;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7c5f1:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TBox<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TBox<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TBox<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TBox<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TBox<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TBox<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TBox<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_U__TBox_N_Math_UE____6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<UE::Math::TBox<double>_>
            (&local_58,
             (TUniquePtr<TManagedArray<UE::Math::TBox<double>_>,TDefaultDelete<TManagedArray<UE::Math::TBox<double>_>_>_>
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

// AddNewAttributeImpl<UE::Math::TIntVector2<int>_> @ 143f7c780

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<int>_>
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
        goto LAB_143f7c811;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7c811:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_U__TIntVector2_H_Math_UE____6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<UE::Math::TIntVector2<int>_>
            (&local_58,
             (TUniquePtr<TManagedArray<UE::Math::TIntVector2<int>_>,TDefaultDelete<TManagedArray<UE::Math::TIntVector2<int>_>_>_>
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

// AddNewAttributeImpl<UE::Math::TIntVector3<int>_> @ 143f7c9a0

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector3<int>_>
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
        goto LAB_143f7ca31;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7ca31:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector3<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector3<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector3<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector3<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector3<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector3<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector3<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_U__TIntVector3_H_Math_UE____6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<UE::Math::TIntVector3<int>_>
            (&local_58,
             (TUniquePtr<TManagedArray<UE::Math::TIntVector3<int>_>,TDefaultDelete<TManagedArray<UE::Math::TIntVector3<int>_>_>_>
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

// AddNewAttributeImpl<UE::Math::TIntVector4<int>_> @ 143f7cbc0

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector4<int>_>
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
        goto LAB_143f7cc51;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7cc51:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector4<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector4<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector4<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector4<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector4<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector4<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector4<int>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_U__TIntVector4_H_Math_UE____6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<UE::Math::TIntVector4<int>_>
            (&local_58,
             (TUniquePtr<TManagedArray<UE::Math::TIntVector4<int>_>,TDefaultDelete<TManagedArray<UE::Math::TIntVector4<int>_>_>_>
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

// AddNewAttributeImpl<UE::Math::TQuat<float>_> @ 143f7cde0

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TQuat<float>_>
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
        goto LAB_143f7ce71;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7ce71:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TQuat<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TQuat<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TQuat<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TQuat<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TQuat<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TQuat<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TQuat<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_U__TQuat_M_Math_UE____6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<UE::Math::TQuat<float>_>
            (&local_58,
             (TUniquePtr<TManagedArray<UE::Math::TQuat<float>_>,TDefaultDelete<TManagedArray<UE::Math::TQuat<float>_>_>_>
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

// AddNewAttributeImpl<UE::Math::TTransform<double>_> @ 143f7d000

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<double>_>
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
        goto LAB_143f7d091;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7d091:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_U__TTransform_N_Math_UE____6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<UE::Math::TTransform<double>_>
            (&local_58,
             (TUniquePtr<TManagedArray<UE::Math::TTransform<double>_>,TDefaultDelete<TManagedArray<UE::Math::TTransform<double>_>_>_>
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

// AddNewAttributeImpl<UE::Math::TVector4<float>_> @ 143f7d220

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector4<float>_>
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
        goto LAB_143f7d2b1;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7d2b1:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector4<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector4<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector4<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector4<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector4<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector4<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector4<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_U__TVector4_M_Math_UE____6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<UE::Math::TVector4<float>_>
            (&local_58,
             (TUniquePtr<TManagedArray<UE::Math::TVector4<float>_>,TDefaultDelete<TManagedArray<UE::Math::TVector4<float>_>_>_>
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

// AddNewAttributeImpl<FGeometryCollectionSection> @ 143f7d440

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<FGeometryCollectionSection>
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
        goto LAB_143f7d4d1;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7d4d1:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FGeometryCollectionSection>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FGeometryCollectionSection>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FGeometryCollectionSection>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FGeometryCollectionSection>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FGeometryCollectionSection>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FGeometryCollectionSection>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FGeometryCollectionSection>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_UFGeometryCollectionSection____6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<FGeometryCollectionSection>
            (&local_58,
             (TUniquePtr<TManagedArray<FGeometryCollectionSection>,TDefaultDelete<TManagedArray<FGeometryCollectionSection>_>_>
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

// AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_> @ 143f7d660

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_>
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
        goto LAB_143f7d6f1;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7d6f1:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
         &___7__TManagedArray_V__TArray_HV__TSizedDefaultAllocator__0CA_______6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&local_58,
             (TUniquePtr<TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
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

// AddNewAttributeImpl<TArray<float,TSizedDefaultAllocator<32>_>_> @ 143f7d880

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<TArray<float,TSizedDefaultAllocator<32>_>_>
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
        goto LAB_143f7d911;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7d911:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<float,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<float,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<float,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<float,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<float,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<float,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<float,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
         &___7__TManagedArray_V__TArray_MV__TSizedDefaultAllocator__0CA_______6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<TArray<float,TSizedDefaultAllocator<32>_>_>
            (&local_58,
             (TUniquePtr<TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
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

// AddNewAttributeImpl<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 143f7daa0

void __thiscall
FManagedArrayCollection::
AddNewAttributeImpl<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
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
        goto LAB_143f7db31;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7db31:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
         ___7__TManagedArray_V__TArray_U__TVector2_M_Math_UE__V__TSizedDefaultAllocator__0CA_______6B_
    ;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
            (&local_58,
             (TUniquePtr<TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>_>_>
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

// AddNewAttributeImpl<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> @ 143f7dcc0

void __thiscall
FManagedArrayCollection::
AddNewAttributeImpl<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>
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
        goto LAB_143f7dd51;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7dd51:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
         ___7__TManagedArray_V__TArray_V__PMatrix_N_02_02_Chaos__V__TSizedDefaultAllocator__0CA_______6B_
    ;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>
            (&local_58,
             (TUniquePtr<TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>_>_>
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

// AddNewAttributeImpl<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_> @ 143f7dee0

void __thiscall
FManagedArrayCollection::
AddNewAttributeImpl<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
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
        goto LAB_143f7df71;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7df71:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
         ___7__TManagedArray_V__TArray_V__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA_____V__TSizedDefaultAllocator__0CA_______6B_
    ;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::
  MakeManaged<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
            (&local_58,
             (TUniquePtr<TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>_>
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

// AddNewAttributeImpl<Chaos::FLinearCurve> @ 143f7e100

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<Chaos::FLinearCurve>
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
        goto LAB_143f7e191;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7e191:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<Chaos::FLinearCurve>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<Chaos::FLinearCurve>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<Chaos::FLinearCurve>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<Chaos::FLinearCurve>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<Chaos::FLinearCurve>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<Chaos::FLinearCurve>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<Chaos::FLinearCurve>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_VFLinearCurve_Chaos____6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<Chaos::FLinearCurve>
            (&local_58,
             (TUniquePtr<TManagedArray<Chaos::FLinearCurve>,TDefaultDelete<TManagedArray<Chaos::FLinearCurve>_>_>
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

// AddNewAttributeImpl<bool> @ 143f7e320

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<bool>
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
        goto LAB_143f7e3b1;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143f7e3b1:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<bool>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<bool>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<bool>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<bool>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<bool>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<bool>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<bool>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
  pFVar5 = ::operator_new(0x30);
  if (pFVar5 != (FValueType *)0x0) {
    *(undefined8 *)((longlong)&(pFVar5->GroupIndexDependency).Number + 1) = 0;
    *(undefined8 *)((longlong)&(pFVar5->SharedManagedArray).Object + 1) = 0;
    *(undefined4 *)
     ((longlong)&(pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController + 1) = 0;
    *(undefined2 *)
     ((longlong)&(pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController + 5) = 0;
    *(undefined1 *)
     ((longlong)&(pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController + 7) = 0;
    pFVar5->ManagedArray = (FManagedArrayBase *)0x0;
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 0;
    pFVar5[1].ArrayType = FNoneType;
    pFVar5[1].field_0x1 = 0;
    pFVar5[1]._padding_ = 0;
    pFVar5[1].GroupIndexDependency.ComparisonIndex.Value = 0x80;
    *(undefined ***)pFVar5 = &___7__TManagedArray__N__6B_;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<bool>
            (&local_58,
             (TUniquePtr<TManagedArray<bool>,TDefaultDelete<TManagedArray<bool>_>_> *)
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

// FindAttribute<UE::Math::TIntVector4<int>_> @ 143f80bd0

TManagedArray<UE::Math::TIntVector4<int>_> * __thiscall
FManagedArrayCollection::FindAttribute<UE::Math::TIntVector4<int>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar1;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar2;
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
    pTVar2 = FValueType::GetTypedPtr<UE::Math::TIntVector4<int>_>(this_00);
    return pTVar2;
  }
  return (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0;
}

// FindAttribute<UE::Math::TVector<float>_> @ 143f80c20

TManagedArray<UE::Math::TVector<float>_> * __thiscall
FManagedArrayCollection::FindAttribute<UE::Math::TVector<float>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar1;
  TManagedArray<UE::Math::TVector<float>_> *pTVar2;
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
    pTVar2 = FValueType::GetTypedPtr<UE::Math::TVector<float>_>(this_00);
    return pTVar2;
  }
  return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
}

// FindAttributeTyped<int> @ 143f80c70

TManagedArray<int> * __thiscall
FManagedArrayCollection::FindAttributeTyped<int>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<int> *pTVar4;
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
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FInt32Type)) {
    FValueType::MakeUniqueForWrite(this_00);
    pTVar4 = (TManagedArray<int> *)this_00->ManagedArray;
    if (pTVar4 == (TManagedArray<int> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<int> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4->field_0x8 = 1;
    return pTVar4;
  }
  return (TManagedArray<int> *)0x0;
}

// FindAttributeTyped<int> @ 143f80d00

TManagedArray<int> * __thiscall
FManagedArrayCollection::FindAttributeTyped<int>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<int> *pTVar4;
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
  if ((pcVar5 != (char *)0x0) && (*pcVar5 == '\x05')) {
    pTVar4 = *(TManagedArray<int> **)(pcVar5 + 0x20);
    if (pTVar4 == (TManagedArray<int> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<int> *)(*pcVar1)();
        return pTVar4;
      }
    }
    return pTVar4;
  }
  return (TManagedArray<int> *)0x0;
}

// FindAttributeTyped<UE::Math::TVector<float>_> @ 143f80d90

TManagedArray<UE::Math::TVector<float>_> * __thiscall
FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<UE::Math::TVector<float>_> *pTVar4;
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
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FVectorType)) {
    FValueType::MakeUniqueForWrite(this_00);
    pTVar4 = (TManagedArray<UE::Math::TVector<float>_> *)this_00->ManagedArray;
    if (pTVar4 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4->field_0x8 = 1;
    return pTVar4;
  }
  return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
}

// FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_> @ 143f80e20

TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
FManagedArrayCollection::FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FInt32ArrayType)) {
    FValueType::MakeUniqueForWrite(this_00);
    pTVar4 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)this_00->ManagedArray;
    if (pTVar4 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4->field_0x8 = 1;
    return pTVar4;
  }
  return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
}

// FindAttributeTyped<TArray<float,TSizedDefaultAllocator<32>_>_> @ 143f80eb0

TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
FManagedArrayCollection::FindAttributeTyped<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FFloatArrayType)) {
    FValueType::MakeUniqueForWrite(this_00);
    pTVar4 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)this_00->ManagedArray;
    if (pTVar4 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4->field_0x8 = 1;
    return pTVar4;
  }
  return (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
}

// FindAttributeTyped<bool> @ 143f80f40

TManagedArray<bool> * __thiscall
FManagedArrayCollection::FindAttributeTyped<bool>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<bool> *pTVar4;
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
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FBoolType)) {
    FValueType::MakeUniqueForWrite(this_00);
    pTVar4 = (TManagedArray<bool> *)this_00->ManagedArray;
    if (pTVar4 == (TManagedArray<bool> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<bool> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4->field_0x8 = 1;
    return pTVar4;
  }
  return (TManagedArray<bool> *)0x0;
}

// GetAttribute<int> @ 143f81080

TManagedArray<int> * __thiscall
FManagedArrayCollection::GetAttribute<int>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
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
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::GetTypedPtr<int>((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// GetAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 143f81130

TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
FManagedArrayCollection::GetAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar3;
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
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>
                     ((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// GetAttribute<TArray<float,TSizedDefaultAllocator<32>_>_> @ 143f811e0

TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
FManagedArrayCollection::GetAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar3;
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
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::GetTypedPtr<TArray<float,TSizedDefaultAllocator<32>_>_>
                     ((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// ModifyAttribute<int> @ 143f83980

TManagedArray<int> * __thiscall
FManagedArrayCollection::ModifyAttribute<int>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
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

// ModifyAttribute<float> @ 143f83a30

TManagedArray<float> * __thiscall
FManagedArrayCollection::ModifyAttribute<float>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<float> *pTVar3;
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
      pTVar3 = (TManagedArray<float> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<float>((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// ModifyAttribute<UE::Math::TBox<double>_> @ 143f83ae0

TManagedArray<UE::Math::TBox<double>_> * __thiscall
FManagedArrayCollection::ModifyAttribute<UE::Math::TBox<double>_>
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

// ModifyAttribute<UE::Math::TIntVector3<int>_> @ 143f83b90

TManagedArray<UE::Math::TIntVector3<int>_> * __thiscall
FManagedArrayCollection::ModifyAttribute<UE::Math::TIntVector3<int>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar3;
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
      pTVar3 = (TManagedArray<UE::Math::TIntVector3<int>_> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<UE::Math::TIntVector3<int>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<UE::Math::TIntVector3<int>_>
                     ((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// ModifyAttribute<FLinearColor> @ 143f83c40

TManagedArray<FLinearColor> * __thiscall
FManagedArrayCollection::ModifyAttribute<FLinearColor>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<FLinearColor> *pTVar3;
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
      pTVar3 = (TManagedArray<FLinearColor> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<FLinearColor> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<FLinearColor>((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// ModifyAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 143f83cf0

TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
FManagedArrayCollection::ModifyAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar3;
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

// ModifyAttribute<TArray<float,TSizedDefaultAllocator<32>_>_> @ 143f83da0

TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
FManagedArrayCollection::ModifyAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar3;
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

// ModifyAttribute<FString> @ 143f83e50

TManagedArray<FString> * __thiscall
FManagedArrayCollection::ModifyAttribute<FString>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<FString> *pTVar3;
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
      pTVar3 = (TManagedArray<FString> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<FString> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<FString>((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// ModifyAttribute<bool> @ 143f83f00

TManagedArray<bool> * __thiscall
FManagedArrayCollection::ModifyAttribute<bool>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<bool> *pTVar3;
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

// AddAttribute<float> @ 143fcffa0

TManagedArray<float> * __thiscall
FManagedArrayCollection::AddAttribute<float>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          FConstructionParameters *param_3)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<float> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FName local_18;
  FName local_10;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    AddNewAttributeImpl<float>(this,param_1,param_2,param_3);
  }
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<float> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<float>((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// AddAttribute<FLinearColor> @ 143fd0080

TManagedArray<FLinearColor> * __thiscall
FManagedArrayCollection::AddAttribute<FLinearColor>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          FConstructionParameters *param_3)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<FLinearColor> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FName local_18;
  FName local_10;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    AddNewAttributeImpl<FLinearColor>(this,param_1,param_2,param_3);
  }
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FLinearColor> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<FLinearColor> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (pTVar4->field_0x10 != '\x04') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FLinearColor> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FValueType::MakeUniqueForWrite((FValueType *)&pTVar4->field_0x10);
  pTVar3 = *(TManagedArray<FLinearColor> **)&pTVar4->field_0x30;
  if (pTVar3 == (TManagedArray<FLinearColor> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FLinearColor> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// AddAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 143fd01c0

TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> * __thiscall
FManagedArrayCollection::AddAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          FConstructionParameters *param_3)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FName local_18;
  FName local_10;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    AddNewAttributeImpl<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              (this,param_1,param_2,param_3);
  }
  bVar2 = HasAttribute(this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                     ((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// AddExternalAttribute<int> @ 143fd02a0

void __thiscall
FManagedArrayCollection::AddExternalAttribute<int>
          (FManagedArrayCollection *this,FName param_1,FName param_2,TManagedArray<int> *param_3,
          FConstructionParameters *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FName FVar6;
  FName local_78;
  FName local_70;
  FName *local_68;
  FValueType *local_60;
  FValueType local_58;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0xe1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar5 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->GroupInfo).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_2.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar4 * 0x14) == param_2)
        goto LAB_143fd0363;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143fd0363:
  NumElements(this,param_2);
  if (param_4->bAllowCircularDependency == false) {
    bVar2 = IsConnected(this,param_4->GroupIndexDependency,param_2);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3954910399890980630>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0xea,
                         "Parameters.bAllowCircularDependency || !IsConnected(Parameters.GroupIndexDependency, Group)"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar6.ComparisonIndex.Value = 0;
      FVar6.Number = 0;
      goto LAB_143fd03c3;
    }
  }
  FVar6 = param_4->GroupIndexDependency;
LAB_143fd03c3:
  iVar4 = NumElements(this,param_2);
  local_58.bPersistent = param_4->Saved;
  local_58.SharedManagedArray.Object = (FManagedArrayBase *)0x0;
  local_58.SharedManagedArray.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_58.ArrayType = FInt32Type;
  local_58.bExternalValue = true;
  local_58.GroupIndexDependency = FVar6;
  local_58.ManagedArray = (FManagedArrayBase *)param_3;
  (**(code **)(*(longlong *)param_3 + 8))(param_3,iVar4);
  (*(code *)**(undefined8 **)local_58.ManagedArray)(local_58.ManagedArray,iVar4);
  local_68 = &local_78;
  local_60 = &local_58;
  local_78 = param_1;
  local_70 = param_2;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&>_>
            ((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              *)&this->Map,
             (TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&> *)
             &stack0x00000008,(bool *)&local_68);
  FValueType::~FValueType(&local_58);
  return;
}

// AddExternalAttribute<float> @ 143fd0480

void __thiscall
FManagedArrayCollection::AddExternalAttribute<float>
          (FManagedArrayCollection *this,FName param_1,FName param_2,TManagedArray<float> *param_3,
          FConstructionParameters *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FName FVar6;
  FName local_78;
  FName local_70;
  FName *local_68;
  FValueType *local_60;
  FValueType local_58;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0xe1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar5 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->GroupInfo).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_2.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar4 * 0x14) == param_2)
        goto LAB_143fd0543;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143fd0543:
  NumElements(this,param_2);
  if (param_4->bAllowCircularDependency == false) {
    bVar2 = IsConnected(this,param_4->GroupIndexDependency,param_2);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3954910399890980630>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0xea,
                         "Parameters.bAllowCircularDependency || !IsConnected(Parameters.GroupIndexDependency, Group)"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar6.ComparisonIndex.Value = 0;
      FVar6.Number = 0;
      goto LAB_143fd05a3;
    }
  }
  FVar6 = param_4->GroupIndexDependency;
LAB_143fd05a3:
  iVar4 = NumElements(this,param_2);
  local_58.bPersistent = param_4->Saved;
  local_58.SharedManagedArray.Object = (FManagedArrayBase *)0x0;
  local_58.SharedManagedArray.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_58.ArrayType = FFloatType;
  local_58.bExternalValue = true;
  local_58.GroupIndexDependency = FVar6;
  local_58.ManagedArray = (FManagedArrayBase *)param_3;
  (**(code **)(*(longlong *)param_3 + 8))(param_3,iVar4);
  (*(code *)**(undefined8 **)local_58.ManagedArray)(local_58.ManagedArray,iVar4);
  local_68 = &local_78;
  local_60 = &local_58;
  local_78 = param_1;
  local_70 = param_2;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&>_>
            ((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              *)&this->Map,
             (TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&> *)
             &stack0x00000008,(bool *)&local_68);
  FValueType::~FValueType(&local_58);
  return;
}

// AddExternalAttribute<UE::Math::TBox<double>_> @ 143fd0660

void __thiscall
FManagedArrayCollection::AddExternalAttribute<UE::Math::TBox<double>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          TManagedArray<UE::Math::TBox<double>_> *param_3,FConstructionParameters *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FName FVar6;
  FName local_78;
  FName local_70;
  FName *local_68;
  FValueType *local_60;
  FValueType local_58;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0xe1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar5 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->GroupInfo).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_2.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar4 * 0x14) == param_2)
        goto LAB_143fd0723;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143fd0723:
  NumElements(this,param_2);
  if (param_4->bAllowCircularDependency == false) {
    bVar2 = IsConnected(this,param_4->GroupIndexDependency,param_2);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3954910399890980630>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0xea,
                         "Parameters.bAllowCircularDependency || !IsConnected(Parameters.GroupIndexDependency, Group)"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar6.ComparisonIndex.Value = 0;
      FVar6.Number = 0;
      goto LAB_143fd0783;
    }
  }
  FVar6 = param_4->GroupIndexDependency;
LAB_143fd0783:
  iVar4 = NumElements(this,param_2);
  local_58.bPersistent = param_4->Saved;
  local_58.SharedManagedArray.Object = (FManagedArrayBase *)0x0;
  local_58.SharedManagedArray.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_58.ArrayType = FBoxType;
  local_58.bExternalValue = true;
  local_58.GroupIndexDependency = FVar6;
  local_58.ManagedArray = (FManagedArrayBase *)param_3;
  (**(code **)(*(longlong *)param_3 + 8))(param_3,iVar4);
  (*(code *)**(undefined8 **)local_58.ManagedArray)(local_58.ManagedArray,iVar4);
  local_68 = &local_78;
  local_60 = &local_58;
  local_78 = param_1;
  local_70 = param_2;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&>_>
            ((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              *)&this->Map,
             (TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&> *)
             &stack0x00000008,(bool *)&local_68);
  FValueType::~FValueType(&local_58);
  return;
}

// AddExternalAttribute<UE::Math::TIntVector3<int>_> @ 143fd0840

void __thiscall
FManagedArrayCollection::AddExternalAttribute<UE::Math::TIntVector3<int>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          TManagedArray<UE::Math::TIntVector3<int>_> *param_3,FConstructionParameters *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FName FVar6;
  FName local_78;
  FName local_70;
  FName *local_68;
  FValueType *local_60;
  FValueType local_58;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0xe1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar5 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->GroupInfo).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_2.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar4 * 0x14) == param_2)
        goto LAB_143fd0903;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143fd0903:
  NumElements(this,param_2);
  if (param_4->bAllowCircularDependency == false) {
    bVar2 = IsConnected(this,param_4->GroupIndexDependency,param_2);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3954910399890980630>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0xea,
                         "Parameters.bAllowCircularDependency || !IsConnected(Parameters.GroupIndexDependency, Group)"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar6.ComparisonIndex.Value = 0;
      FVar6.Number = 0;
      goto LAB_143fd0963;
    }
  }
  FVar6 = param_4->GroupIndexDependency;
LAB_143fd0963:
  iVar4 = NumElements(this,param_2);
  local_58.bPersistent = param_4->Saved;
  local_58.SharedManagedArray.Object = (FManagedArrayBase *)0x0;
  local_58.SharedManagedArray.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_58.ArrayType = FIntVectorType;
  local_58.bExternalValue = true;
  local_58.GroupIndexDependency = FVar6;
  local_58.ManagedArray = (FManagedArrayBase *)param_3;
  (**(code **)(*(longlong *)param_3 + 8))(param_3,iVar4);
  (*(code *)**(undefined8 **)local_58.ManagedArray)(local_58.ManagedArray,iVar4);
  local_68 = &local_78;
  local_60 = &local_58;
  local_78 = param_1;
  local_70 = param_2;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&>_>
            ((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              *)&this->Map,
             (TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&> *)
             &stack0x00000008,(bool *)&local_68);
  FValueType::~FValueType(&local_58);
  return;
}

// AddExternalAttribute<UE::Math::TVector<float>_> @ 143fd0a20

void __thiscall
FManagedArrayCollection::AddExternalAttribute<UE::Math::TVector<float>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          TManagedArray<UE::Math::TVector<float>_> *param_3,FConstructionParameters *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FName FVar6;
  FName local_78;
  FName local_70;
  FName *local_68;
  FValueType *local_60;
  FValueType local_58;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0xe1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar5 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->GroupInfo).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_2.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar4 * 0x14) == param_2)
        goto LAB_143fd0ae3;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143fd0ae3:
  NumElements(this,param_2);
  if (param_4->bAllowCircularDependency == false) {
    bVar2 = IsConnected(this,param_4->GroupIndexDependency,param_2);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3954910399890980630>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0xea,
                         "Parameters.bAllowCircularDependency || !IsConnected(Parameters.GroupIndexDependency, Group)"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar6.ComparisonIndex.Value = 0;
      FVar6.Number = 0;
      goto LAB_143fd0b43;
    }
  }
  FVar6 = param_4->GroupIndexDependency;
LAB_143fd0b43:
  iVar4 = NumElements(this,param_2);
  local_58.bPersistent = param_4->Saved;
  local_58.SharedManagedArray.Object = (FManagedArrayBase *)0x0;
  local_58.SharedManagedArray.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_58.ArrayType = FVectorType;
  local_58.bExternalValue = true;
  local_58.GroupIndexDependency = FVar6;
  local_58.ManagedArray = (FManagedArrayBase *)param_3;
  (**(code **)(*(longlong *)param_3 + 8))(param_3,iVar4);
  (*(code *)**(undefined8 **)local_58.ManagedArray)(local_58.ManagedArray,iVar4);
  local_68 = &local_78;
  local_60 = &local_58;
  local_78 = param_1;
  local_70 = param_2;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&>_>
            ((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              *)&this->Map,
             (TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&> *)
             &stack0x00000008,(bool *)&local_68);
  FValueType::~FValueType(&local_58);
  return;
}

// AddExternalAttribute<FGeometryCollectionSection> @ 143fd0c00

void __thiscall
FManagedArrayCollection::AddExternalAttribute<FGeometryCollectionSection>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          TManagedArray<FGeometryCollectionSection> *param_3,FConstructionParameters *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FName FVar6;
  FName local_78;
  FName local_70;
  FName *local_68;
  FValueType *local_60;
  FValueType local_58;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0xe1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar5 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->GroupInfo).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_2.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar4 * 0x14) == param_2)
        goto LAB_143fd0cc3;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143fd0cc3:
  NumElements(this,param_2);
  if (param_4->bAllowCircularDependency == false) {
    bVar2 = IsConnected(this,param_4->GroupIndexDependency,param_2);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3954910399890980630>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0xea,
                         "Parameters.bAllowCircularDependency || !IsConnected(Parameters.GroupIndexDependency, Group)"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar6.ComparisonIndex.Value = 0;
      FVar6.Number = 0;
      goto LAB_143fd0d23;
    }
  }
  FVar6 = param_4->GroupIndexDependency;
LAB_143fd0d23:
  iVar4 = NumElements(this,param_2);
  local_58.bPersistent = param_4->Saved;
  local_58.SharedManagedArray.Object = (FManagedArrayBase *)0x0;
  local_58.SharedManagedArray.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_58.ArrayType = FMeshSectionType;
  local_58.bExternalValue = true;
  local_58.GroupIndexDependency = FVar6;
  local_58.ManagedArray = (FManagedArrayBase *)param_3;
  (**(code **)(*(longlong *)param_3 + 8))(param_3,iVar4);
  (*(code *)**(undefined8 **)local_58.ManagedArray)(local_58.ManagedArray,iVar4);
  local_68 = &local_78;
  local_60 = &local_58;
  local_78 = param_1;
  local_70 = param_2;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&>_>
            ((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              *)&this->Map,
             (TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&> *)
             &stack0x00000008,(bool *)&local_68);
  FValueType::~FValueType(&local_58);
  return;
}

// AddExternalAttribute<FLinearColor> @ 143fd0de0

void __thiscall
FManagedArrayCollection::AddExternalAttribute<FLinearColor>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          TManagedArray<FLinearColor> *param_3,FConstructionParameters *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FName FVar6;
  FName local_78;
  FName local_70;
  FName *local_68;
  FValueType *local_60;
  FValueType local_58;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0xe1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar5 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->GroupInfo).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_2.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar4 * 0x14) == param_2)
        goto LAB_143fd0ea3;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143fd0ea3:
  NumElements(this,param_2);
  if (param_4->bAllowCircularDependency == false) {
    bVar2 = IsConnected(this,param_4->GroupIndexDependency,param_2);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3954910399890980630>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0xea,
                         "Parameters.bAllowCircularDependency || !IsConnected(Parameters.GroupIndexDependency, Group)"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar6.ComparisonIndex.Value = 0;
      FVar6.Number = 0;
      goto LAB_143fd0f03;
    }
  }
  FVar6 = param_4->GroupIndexDependency;
LAB_143fd0f03:
  iVar4 = NumElements(this,param_2);
  local_58.bPersistent = param_4->Saved;
  local_58.SharedManagedArray.Object = (FManagedArrayBase *)0x0;
  local_58.SharedManagedArray.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_58.ArrayType = FLinearColorType;
  local_58.bExternalValue = true;
  local_58.GroupIndexDependency = FVar6;
  local_58.ManagedArray = (FManagedArrayBase *)param_3;
  (**(code **)(*(longlong *)param_3 + 8))(param_3,iVar4);
  (*(code *)**(undefined8 **)local_58.ManagedArray)(local_58.ManagedArray,iVar4);
  local_68 = &local_78;
  local_60 = &local_58;
  local_78 = param_1;
  local_70 = param_2;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&>_>
            ((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              *)&this->Map,
             (TPairInitializer<TTuple<FName,FName>_&&,FManagedArrayCollection::FValueType_&&> *)
             &stack0x00000008,(bool *)&local_68);
  FValueType::~FValueType(&local_58);
  return;
}

// AddNewAttributeImpl<TObjectPtr<UObject>_> @ 143fd0fc0

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<TObjectPtr<UObject>_>
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
        goto LAB_143fd1051;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143fd1051:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TObjectPtr<UObject>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TObjectPtr<UObject>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TObjectPtr<UObject>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TObjectPtr<UObject>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TObjectPtr<UObject>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TObjectPtr<UObject>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TObjectPtr<UObject>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_U__TObjectPtr_VUObject______6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<TObjectPtr<UObject>_>
            (&local_58,
             (TUniquePtr<TManagedArray<TObjectPtr<UObject>_>,TDefaultDelete<TManagedArray<TObjectPtr<UObject>_>_>_>
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

// AddNewAttributeImpl<UE::Math::TVector2<float>_> @ 143fd11e0

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector2<float>_>
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
        goto LAB_143fd1271;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143fd1271:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector2<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector2<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector2<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector2<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector2<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector2<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector2<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_U__TVector2_M_Math_UE____6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<UE::Math::TVector2<float>_>
            (&local_58,
             (TUniquePtr<TManagedArray<UE::Math::TVector2<float>_>,TDefaultDelete<TManagedArray<UE::Math::TVector2<float>_>_>_>
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

// AddNewAttributeImpl<UE::Math::TVector<double>_> @ 143fd1400

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<double>_>
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
        goto LAB_143fd1491;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143fd1491:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<double>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_U__TVector_N_Math_UE____6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<UE::Math::TVector<double>_>
            (&local_58,
             (TUniquePtr<TManagedArray<UE::Math::TVector<double>_>,TDefaultDelete<TManagedArray<UE::Math::TVector<double>_>_>_>
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

// AddNewAttributeImpl<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 143fd1620

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
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
        goto LAB_143fd16b1;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_143fd16b1:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
         &___7__TManagedArray_V__TSet_HU__DefaultKeyFuncs_H_0A___VFDefaultSetAllocator______6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            (&local_58,
             (TUniquePtr<TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultDelete<TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>_>
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

// FindAttributeTyped<float> @ 143fd20d0

TManagedArray<float> * __thiscall
FManagedArrayCollection::FindAttributeTyped<float>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<float> *pTVar4;
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
  if ((pcVar5 != (char *)0x0) && (*pcVar5 == '\t')) {
    pTVar4 = *(TManagedArray<float> **)(pcVar5 + 0x20);
    if (pTVar4 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
    return pTVar4;
  }
  return (TManagedArray<float> *)0x0;
}

// FindAttributeTyped<UE::Math::TVector2<float>_> @ 143fd2160

TManagedArray<UE::Math::TVector2<float>_> * __thiscall
FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector2<float>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar4;
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
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FVector2DType)) {
    FValueType::MakeUniqueForWrite(this_00);
    pTVar4 = (TManagedArray<UE::Math::TVector2<float>_> *)this_00->ManagedArray;
    if (pTVar4 == (TManagedArray<UE::Math::TVector2<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<UE::Math::TVector2<float>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4->field_0x8 = 1;
    return pTVar4;
  }
  return (TManagedArray<UE::Math::TVector2<float>_> *)0x0;
}

// GetAttribute<float> @ 143fd22a0

TManagedArray<float> * __thiscall
FManagedArrayCollection::GetAttribute<float>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<float> *pTVar3;
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
      pTVar3 = (TManagedArray<float> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::GetTypedPtr<float>((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// GetAttribute<bool> @ 143fd2350

TManagedArray<bool> * __thiscall
FManagedArrayCollection::GetAttribute<bool>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<bool> *pTVar3;
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
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<bool> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (pTVar4->field_0x10 != '\x06') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<bool> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = *(TManagedArray<bool> **)&pTVar4->field_0x30;
  if (pTVar3 == (TManagedArray<bool> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<bool> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

// ModifyAttribute<UE::Math::TVector2<float>_> @ 143fd31f0

TManagedArray<UE::Math::TVector2<float>_> * __thiscall
FManagedArrayCollection::ModifyAttribute<UE::Math::TVector2<float>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar3;
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
      pTVar3 = (TManagedArray<UE::Math::TVector2<float>_> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<UE::Math::TVector2<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<UE::Math::TVector2<float>_>((FValueType *)&pTVar4->field_0x10)
  ;
  return pTVar3;
}

// ModifyAttribute<FGeometryCollectionSection> @ 143fd32a0

TManagedArray<FGeometryCollectionSection> * __thiscall
FManagedArrayCollection::ModifyAttribute<FGeometryCollectionSection>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<FGeometryCollectionSection> *pTVar3;
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
      pTVar3 = (TManagedArray<FGeometryCollectionSection> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<FGeometryCollectionSection> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (pTVar4->field_0x10 != '\f') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FGeometryCollectionSection> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FValueType::MakeUniqueForWrite((FValueType *)&pTVar4->field_0x10);
  pTVar3 = *(TManagedArray<FGeometryCollectionSection> **)&pTVar4->field_0x30;
  if (pTVar3 == (TManagedArray<FGeometryCollectionSection> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FGeometryCollectionSection> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 143fd33b0

TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> * __thiscall
FManagedArrayCollection::
ModifyAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *pTVar3;
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
      pTVar3 = (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
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
      pTVar3 = (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::
           ModifyTypedPtr<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                     ((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// NewCopy<FGeometryCollection> @ 143fd35e0

FGeometryCollection * __thiscall
FManagedArrayCollection::NewCopy<FGeometryCollection>(FManagedArrayCollection *this)

{
  FName *pFVar1;
  FGeometryCollection *this_00;
  FGeometryCollection *this_01;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 local_res10 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  FLinearColor_u_0 local_28;
  
  this_00 = ::operator_new(0x4c0);
  this_01 = (FGeometryCollection *)0x0;
  if (this_00 != (FGeometryCollection *)0x0) {
    local_28 = FLinearColor::White.field0_0x0;
    this_01 = FGeometryCollection::FGeometryCollection
                        (this_00,(FGeometryCollectionDefaults *)&local_28._s_0);
  }
  GroupNames((FManagedArrayCollection *)this_01,&local_38);
  iVar2 = local_38.ArrayNum;
  pFVar1 = (FName *)(local_38.AllocatorInstance.Data + (longlong)iVar2 * 8);
  FVar3.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((FName *)FVar3.Data == pFVar1) break;
    EmptyGroup((FManagedArrayCollection *)this_01,*(FName *)FVar3.Data);
    FVar3.Data = FVar3.Data + 8;
  }
  if ((FName *)local_38.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_28 = (FLinearColor_u_0)ZEXT816(0);
  CopyTo(this,(FManagedArrayCollection *)this_01,
         (TArray<FName,TSizedDefaultAllocator<32>_> *)&local_28._s_0,
         (TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *)&local_38);
  return this_01;
}

// CopyTo @ 143fe6ef0

void __thiscall
FManagedArrayCollection::CopyTo
          (FManagedArrayCollection *this,FManagedArrayCollection *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  FName *pFVar12;
  FName *pFVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  FName *pFVar17;
  int iVar18;
  undefined1 *puVar19;
  int iVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar15 = *(int *)&(this->Map).field_0x8;
  iVar10 = *(int *)&(this->Map).field_0x34;
  if (iVar15 != iVar10) {
    iVar3 = *(int *)&(this->Map).field_0x28;
    iVar18 = 0;
    uVar8 = 1;
    puVar1 = &(this->Map).field_0x10;
    iVar20 = 0;
    iVar9 = 0;
    if (iVar3 != 0) {
      puVar21 = *(uint **)&(this->Map).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)puVar1;
      }
      uVar16 = *puVar21;
      while (uVar16 == 0) {
        lVar11 = (longlong)iVar18;
        iVar20 = iVar20 + 0x20;
        iVar18 = iVar18 + 1;
        iVar9 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_143fe6fbf;
        uVar16 = puVar21[lVar11 + 1];
      }
      uVar8 = -uVar16 & uVar16;
      uVar2 = (ulonglong)uVar8 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar9 = iVar20 + -1 + (int)lVar11;
      if (iVar3 < iVar9) {
        iVar9 = iVar3;
      }
    }
LAB_143fe6fbf:
    uVar16 = *(uint *)&(this->Map).field_0x28;
    uVar22 = uVar16 & 0xffffffe0;
    TStack_68._padding_ = CONCAT44(uVar8,iVar18);
    TStack_68.CurrentBitIndex = iVar9;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    TStack_68._28_4_ = iVar9;
    TStack_68.BaseBitIndex = iVar20;
    uStack_48 = CONCAT44(uStack_74,iVar15 - iVar10);
    iVar15 = (int)uVar16 >> 5;
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = *(uint *)&(this->Map).field_0x28;
    if (uVar16 != uVar8) {
      puVar19 = *(undefined1 **)&(this->Map).field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = puVar1;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
      while (uVar16 == 0) {
        lVar11 = (longlong)iVar15;
        uVar22 = uVar22 + 0x20;
        iVar15 = iVar15 + 1;
        uVar16 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_143fe70d0;
        uVar16 = *(uint *)(puVar19 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar16 = (int)lVar11 + -1 + uVar22;
      if ((int)uVar8 < (int)uVar16) {
        uVar16 = uVar8;
      }
    }
LAB_143fe70d0:
    while( true ) {
      if (*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34 != (int)uStack_48) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_68.CurrentBitIndex == uVar16) &&
         (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      pFVar17 = (FName *)((longlong)TStack_68.CurrentBitIndex * 0x40 + *(longlong *)&this->Map);
      if (0 < param_3->ArrayNum) {
        pFVar12 = (FName *)(param_3->AllocatorInstance).Data;
        pFVar13 = pFVar12 + (longlong)param_3->ArrayNum * 2;
        for (; pFVar12 != pFVar13; pFVar12 = pFVar12 + 2) {
          if ((*pFVar12 == *pFVar17) && (pFVar12[1] == pFVar17[1])) goto LAB_143fe726a;
        }
      }
      pFVar13 = (FName *)(param_2->AllocatorInstance).Data;
      pFVar12 = pFVar13 + param_2->ArrayNum;
      if (pFVar13 != pFVar12) {
        do {
          if (*pFVar13 == pFVar17[1]) goto LAB_143fe726a;
          pFVar13 = pFVar13 + 1;
        } while (pFVar13 != pFVar12);
      }
      FVar4 = pFVar17[1];
      uVar8 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      if (*(int *)&(param_1->GroupInfo).field_0x8 != *(int *)&(param_1->GroupInfo).field_0x34) {
        puVar19 = *(undefined1 **)&(param_1->GroupInfo).field_0x40;
        puVar14 = &(param_1->GroupInfo).field_0x38;
        if (puVar19 != (undefined1 *)0x0) {
          puVar14 = puVar19;
        }
        iVar15 = *(int *)(puVar14 +
                         (ulonglong)
                         (*(int *)&(param_1->GroupInfo).field_0x48 - 1U & FVar4.Number + uVar8) * 4)
        ;
        if (iVar15 != -1) {
          do {
            if (*(FName *)(*(longlong *)&param_1->GroupInfo + (longlong)iVar15 * 0x14) == FVar4)
            goto LAB_143fe71e1;
            iVar15 = *(int *)(*(longlong *)&param_1->GroupInfo + 0xc + (longlong)iVar15 * 0x14);
          } while (iVar15 != -1);
        }
      }
      AddGroup(param_1,pFVar17[1]);
LAB_143fe71e1:
      iVar15 = NumElements(param_1,pFVar17[1]);
      iVar10 = NumElements(this,pFVar17[1]);
      if (iVar10 != iVar15) {
        iVar15 = NumElements(param_1,pFVar17[1]);
        if ((iVar15 != 0) &&
           (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_3954910399890980658>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                               ,0xce,"!Collection->NumElements(GroupName)"), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar4 = pFVar17[1];
        iVar15 = NumElements(this,FVar4);
        AddElements(param_1,iVar15,FVar4);
      }
      CopyAttribute(param_1,this,*pFVar17,pFVar17[1]);
LAB_143fe726a:
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    }
  }
  pFVar5 = (param_3->AllocatorInstance).Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// AddNewAttributeImpl<TRefCountPtr<Chaos::FConvex>_> @ 144009560

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FConvex>_>
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
        goto LAB_1440095f1;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_1440095f1:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FConvex>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FConvex>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FConvex>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FConvex>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FConvex>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FConvex>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FConvex>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_V__TRefCountPtr_VFConvex_Chaos______6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<TRefCountPtr<Chaos::FConvex>_>
            (&local_58,
             (TUniquePtr<TManagedArray<TRefCountPtr<Chaos::FConvex>_>,TDefaultDelete<TManagedArray<TRefCountPtr<Chaos::FConvex>_>_>_>
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

// GetAttribute<TRefCountPtr<Chaos::FConvex>_> @ 14400aa90

TManagedArray<TRefCountPtr<Chaos::FConvex>_> * __thiscall
FManagedArrayCollection::GetAttribute<TRefCountPtr<Chaos::FConvex>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *pTVar3;
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
      pTVar3 = (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::GetTypedPtr<TRefCountPtr<Chaos::FConvex>_>((FValueType *)&pTVar4->field_0x10)
  ;
  return pTVar3;
}

// GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 14400ab40

TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> * __thiscall
FManagedArrayCollection::GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar3;
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
      pTVar3 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::GetTypedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                     ((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// ModifyAttribute<TRefCountPtr<Chaos::FConvex>_> @ 1440115d0

TManagedArray<TRefCountPtr<Chaos::FConvex>_> * __thiscall
FManagedArrayCollection::ModifyAttribute<TRefCountPtr<Chaos::FConvex>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *pTVar3;
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
      pTVar3 = (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<TRefCountPtr<Chaos::FConvex>_>
                     ((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// ModifyAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 144011680

TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> * __thiscall
FManagedArrayCollection::ModifyAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar3;
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
      pTVar3 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                     ((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// StaticStruct @ 144054d10

UScriptStruct * __cdecl FManagedArrayCollection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FManagedArrayCollection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UScriptStruct_FManagedArrayCollection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FManagedArrayCollection,(UObject *)pUVar1,
                         L"ManagedArrayCollection");
  }
  return Z_Registration_Info_UScriptStruct_FManagedArrayCollection.OuterSingleton;
}

// FGroupInfo> @ 144058760

FArchive * __cdecl
operator<<<FName,FManagedArrayCollection::FGroupInfo>
          (FArchive *param_1,TTuple<FName,FManagedArrayCollection::FGroupInfo> *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint local_res8 [2];
  
  (**(code **)(*(longlong *)param_1 + 0x178))();
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = 4;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  puVar1 = &param_2->field_0x8;
  puVar3 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
  return param_1;
}

// AddExternalAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 144058bb0

void __thiscall
FManagedArrayCollection::
AddExternalAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *param_3,
          FConstructionParameters *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  FName local_res8;
  FName local_68;
  FName local_60;
  FValueType local_58;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if ((bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasAttribute(Name, Group)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0xe1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
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
        goto LAB_144058c72;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_144058c72:
  TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
  ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
          *)&this->GroupInfo,param_2);
  if ((param_4->bAllowCircularDependency == false) &&
     (bVar2 = IsConnected(this,param_4->GroupIndexDependency,param_2), bVar2)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3954910399890980630>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0xea,
                       "Parameters.bAllowCircularDependency || !IsConnected(Parameters.GroupIndexDependency, Group)"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
  }
  else {
    local_res8 = param_4->GroupIndexDependency;
  }
  bVar2 = param_4->Saved;
  uVar8 = 0;
  pTVar5 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                   *)&this->GroupInfo,param_2);
  puVar6 = (undefined4 *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  if (puVar6 != (undefined4 *)0x0) {
    uVar8 = *puVar6;
  }
  local_58.SharedManagedArray.Object = (FManagedArrayBase *)0x0;
  local_58.SharedManagedArray.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_58.GroupIndexDependency.Number = local_res8.Number;
  local_58.ArrayType = FIntArrayType;
  local_58.GroupIndexDependency.ComparisonIndex = local_res8.ComparisonIndex.Value;
  local_58.bExternalValue = true;
  local_58.bPersistent = bVar2;
  local_58.ManagedArray = (FManagedArrayBase *)param_3;
  (**(code **)(*(longlong *)param_3 + 8))(param_3,uVar8);
  (*(code *)**(undefined8 **)local_58.ManagedArray)(local_58.ManagedArray,uVar8);
  local_68 = param_1;
  local_60 = param_2;
  TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  ::Emplace<TTuple<FName,FName>,FManagedArrayCollection::FValueType>
            ((TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
              *)&this->Map,(TTuple<FName,FName> *)&local_68,&local_58);
  if (((local_58.bExternalValue != false) &&
      (local_58.SharedManagedArray.Object != (FManagedArrayBase *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SharedManagedArray.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                         ,0x3e4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedManagedArray.SharedReferenceCount.ReferenceController);
  return;
}

// AddExternalAttribute<FString> @ 144058de0

void __thiscall
FManagedArrayCollection::AddExternalAttribute<FString>
          (FManagedArrayCollection *this,FName param_1,FName param_2,TManagedArray<FString> *param_3
          ,FConstructionParameters *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  FName local_res8;
  FName local_68;
  FName local_60;
  FValueType local_58;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if ((bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasAttribute(Name, Group)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0xe1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
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
        goto LAB_144058ea2;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_144058ea2:
  TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
  ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
          *)&this->GroupInfo,param_2);
  if ((param_4->bAllowCircularDependency == false) &&
     (bVar2 = IsConnected(this,param_4->GroupIndexDependency,param_2), bVar2)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3954910399890980630>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0xea,
                       "Parameters.bAllowCircularDependency || !IsConnected(Parameters.GroupIndexDependency, Group)"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
  }
  else {
    local_res8 = param_4->GroupIndexDependency;
  }
  bVar2 = param_4->Saved;
  uVar8 = 0;
  pTVar5 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                   *)&this->GroupInfo,param_2);
  puVar6 = (undefined4 *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  if (puVar6 != (undefined4 *)0x0) {
    uVar8 = *puVar6;
  }
  local_58.SharedManagedArray.Object = (FManagedArrayBase *)0x0;
  local_58.SharedManagedArray.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_58.GroupIndexDependency.Number = local_res8.Number;
  local_58.ArrayType = FStringType;
  local_58.GroupIndexDependency.ComparisonIndex = local_res8.ComparisonIndex.Value;
  local_58.bExternalValue = true;
  local_58.bPersistent = bVar2;
  local_58.ManagedArray = (FManagedArrayBase *)param_3;
  (**(code **)(*(longlong *)param_3 + 8))(param_3,uVar8);
  (*(code *)**(undefined8 **)local_58.ManagedArray)(local_58.ManagedArray,uVar8);
  local_68 = param_1;
  local_60 = param_2;
  TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  ::Emplace<TTuple<FName,FName>,FManagedArrayCollection::FValueType>
            ((TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
              *)&this->Map,(TTuple<FName,FName> *)&local_68,&local_58);
  if (((local_58.bExternalValue != false) &&
      (local_58.SharedManagedArray.Object != (FManagedArrayBase *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SharedManagedArray.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                         ,0x3e4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedManagedArray.SharedReferenceCount.ReferenceController);
  return;
}

// AddNewAttributeImpl<UE::Math::TTransform<float>_> @ 144059010

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<float>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          FConstructionParameters *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar5;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar6;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar7;
  undefined1 *puVar8;
  FName FVar9;
  TUniquePtr<TManagedArray<UE::Math::TTransform<float>_>,TDefaultDelete<TManagedArray<UE::Math::TTransform<float>_>_>_>
  local_res8;
  FName local_68;
  FName local_60;
  FValueType local_58;
  
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar8 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->GroupInfo).field_0x38;
    }
    iVar4 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_2.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar4 * 0x14) == param_2)
        goto LAB_1440590a1;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_1440590a1:
  pTVar7 = (TManagedArray<UE::Math::TTransform<float>_> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar4 = 0;
  pTVar5 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                   *)&this->GroupInfo,param_2);
  pTVar6 = (TManagedArray<UE::Math::TTransform<float>_> *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    pTVar6 = pTVar7;
  }
  if (pTVar6 != (TManagedArray<UE::Math::TTransform<float>_> *)0x0) {
    iVar4 = *(int *)pTVar6;
  }
  if ((param_3->bAllowCircularDependency == false) &&
     (bVar2 = IsConnected(this,param_3->GroupIndexDependency,param_2), bVar2)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3954910399890980227>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x27d,
                       "Parameters.bAllowCircularDependency || !IsConnected(Parameters.GroupIndexDependency, Group)"
                      );
    FVar9 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<float>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
            ::__l2::EmptyName;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FVar9 = param_3->GroupIndexDependency;
  }
  pTVar6 = ::operator_new(0x20);
  if (pTVar6 != (TManagedArray<UE::Math::TTransform<float>_> *)0x0) {
    pTVar6->field_0x8 = 0;
    *(undefined ***)pTVar6 = &___7__TManagedArray_U__TTransform_M_Math_UE____6B_;
    *(undefined8 *)&pTVar6->field_0x10 = 0;
    *(undefined8 *)&pTVar6->field_0x18 = 0;
    pTVar7 = pTVar6;
  }
  local_res8.Ptr = pTVar7;
  FValueType::MakeManaged<UE::Math::TTransform<float>_>
            (&local_58,&local_res8,iVar4,FVar9,param_3->Saved);
  local_68 = param_1;
  local_60 = param_2;
  TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  ::Emplace<TTuple<FName,FName>,FManagedArrayCollection::FValueType>
            ((TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
              *)&this->Map,(TTuple<FName,FName> *)&local_68,&local_58);
  if (((local_58.bExternalValue != false) &&
      (local_58.SharedManagedArray.Object != (FManagedArrayBase *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SharedManagedArray.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                         ,0x3e4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedManagedArray.SharedReferenceCount.ReferenceController);
  if (local_res8.Ptr != (TManagedArray<UE::Math::TTransform<float>_> *)0x0) {
    (**(code **)(*(longlong *)local_res8.Ptr + 0x48))(local_res8.Ptr,1);
  }
  return;
}

// AddNewAttributeImpl<FGuid> @ 144059260

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<FGuid>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          FConstructionParameters *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar5;
  TManagedArray<FGuid> *pTVar6;
  TManagedArray<FGuid> *pTVar7;
  undefined1 *puVar8;
  FName FVar9;
  TUniquePtr<TManagedArray<FGuid>,TDefaultDelete<TManagedArray<FGuid>_>_> local_res8;
  FName local_68;
  FName local_60;
  FValueType local_58;
  
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar8 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->GroupInfo).field_0x38;
    }
    iVar4 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_2.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar4 * 0x14) == param_2)
        goto LAB_1440592f1;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_1440592f1:
  pTVar7 = (TManagedArray<FGuid> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FGuid>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FGuid>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FGuid>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FGuid>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FGuid>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FGuid>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar4 = 0;
  pTVar5 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                   *)&this->GroupInfo,param_2);
  pTVar6 = (TManagedArray<FGuid> *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    pTVar6 = pTVar7;
  }
  if (pTVar6 != (TManagedArray<FGuid> *)0x0) {
    iVar4 = *(int *)pTVar6;
  }
  if ((param_3->bAllowCircularDependency == false) &&
     (bVar2 = IsConnected(this,param_3->GroupIndexDependency,param_2), bVar2)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3954910399890980227>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x27d,
                       "Parameters.bAllowCircularDependency || !IsConnected(Parameters.GroupIndexDependency, Group)"
                      );
    FVar9 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<FGuid>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
            ::__l2::EmptyName;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FVar9 = param_3->GroupIndexDependency;
  }
  pTVar6 = ::operator_new(0x20);
  if (pTVar6 != (TManagedArray<FGuid> *)0x0) {
    pTVar6->field_0x8 = 0;
    *(undefined ***)pTVar6 = &___7__TManagedArray_UFGuid____6B_;
    *(undefined8 *)&pTVar6->field_0x10 = 0;
    *(undefined8 *)&pTVar6->field_0x18 = 0;
    pTVar7 = pTVar6;
  }
  local_res8.Ptr = pTVar7;
  FValueType::MakeManaged<FGuid>(&local_58,&local_res8,iVar4,FVar9,param_3->Saved);
  local_68 = param_1;
  local_60 = param_2;
  TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  ::Emplace<TTuple<FName,FName>,FManagedArrayCollection::FValueType>
            ((TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
              *)&this->Map,(TTuple<FName,FName> *)&local_68,&local_58);
  if (((local_58.bExternalValue != false) &&
      (local_58.SharedManagedArray.Object != (FManagedArrayBase *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SharedManagedArray.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                         ,0x3e4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedManagedArray.SharedReferenceCount.ReferenceController);
  if (local_res8.Ptr != (TManagedArray<FGuid> *)0x0) {
    (**(code **)(*(longlong *)local_res8.Ptr + 0x48))(local_res8.Ptr,1);
  }
  return;
}

// GetAttribute<unsigned_char> @ 144060140

TManagedArray<unsigned_char> * __thiscall
FManagedArrayCollection::GetAttribute<unsigned_char>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<unsigned_char> *pTVar3;
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
      pTVar3 = (TManagedArray<unsigned_char> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<unsigned_char> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (pTVar4->field_0x10 != '\x10') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<unsigned_char> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = *(TManagedArray<unsigned_char> **)&pTVar4->field_0x30;
  if (pTVar3 == (TManagedArray<unsigned_char> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<unsigned_char> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return pTVar3;
}

// ModifyAttribute<unsigned_char> @ 1440621e0

TManagedArray<unsigned_char> * __thiscall
FManagedArrayCollection::ModifyAttribute<unsigned_char>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<unsigned_char> *pTVar3;
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
      pTVar3 = (TManagedArray<unsigned_char> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<unsigned_char> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (pTVar4->field_0x10 != '\x10') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<unsigned_char> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FValueType::MakeUniqueForWrite((FValueType *)&pTVar4->field_0x10);
  pTVar3 = *(TManagedArray<unsigned_char> **)&pTVar4->field_0x30;
  if (pTVar3 == (TManagedArray<unsigned_char> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<unsigned_char> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyAttribute<UE::Math::TTransform<float>_> @ 1440622f0

TManagedArray<UE::Math::TTransform<float>_> * __thiscall
FManagedArrayCollection::ModifyAttribute<UE::Math::TTransform<float>_>
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
                       ,0x164,L"");
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
                       ,0x288,L"");
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
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TTransform<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FValueType::MakeUniqueForWrite((FValueType *)&pTVar4->field_0x10);
  pTVar3 = *(TManagedArray<UE::Math::TTransform<float>_> **)&pTVar4->field_0x30;
  if (pTVar3 == (TManagedArray<UE::Math::TTransform<float>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TTransform<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// ModifyAttribute<FGuid> @ 144062400

TManagedArray<FGuid> * __thiscall
FManagedArrayCollection::ModifyAttribute<FGuid>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<FGuid> *pTVar3;
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
      pTVar3 = (TManagedArray<FGuid> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<FGuid> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (pTVar4->field_0x10 != '\x0f') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FGuid> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FValueType::MakeUniqueForWrite((FValueType *)&pTVar4->field_0x10);
  pTVar3 = *(TManagedArray<FGuid> **)&pTVar4->field_0x30;
  if (pTVar3 == (TManagedArray<FGuid> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FGuid> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3->field_0x8 = 1;
  return pTVar3;
}

// FManagedArrayCollection @ 144067c40

FManagedArrayCollection * __thiscall
FManagedArrayCollection::FManagedArrayCollection
          (FManagedArrayCollection *this,FManagedArrayCollection *param_1)

{
  this->_padding_ = (longlong)&___7FManagedArrayCollection__6B_;
  *(undefined8 *)&(this->Map).field_0x0 = 0;
  *(undefined8 *)&(this->Map).field_0x8 = 0;
  *(undefined8 *)&(this->Map).field_0x20 = 0;
  *(undefined4 *)&(this->Map).field_0x28 = 0;
  *(undefined4 *)&(this->Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Map).field_0x34 = 0;
  *(undefined8 *)&(this->Map).field_0x40 = 0;
  *(undefined4 *)&(this->Map).field_0x48 = 0;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              *)&this->Map,
             (TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              *)&param_1->Map);
  *(undefined8 *)&(this->GroupInfo).field_0x0 = 0;
  *(undefined8 *)&(this->GroupInfo).field_0x8 = 0;
  *(undefined8 *)&(this->GroupInfo).field_0x20 = 0;
  *(undefined4 *)&(this->GroupInfo).field_0x28 = 0;
  *(undefined4 *)&(this->GroupInfo).field_0x2c = 0x80;
  *(undefined4 *)&(this->GroupInfo).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GroupInfo).field_0x34 = 0;
  *(undefined8 *)&(this->GroupInfo).field_0x40 = 0;
  *(undefined4 *)&(this->GroupInfo).field_0x48 = 0;
  TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
              *)&this->GroupInfo,
             (TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
              *)&param_1->GroupInfo);
  this->bDirty = param_1->bDirty;
  this->Version = param_1->Version;
  return this;
}

// FManagedArrayCollection @ 144067d00

FManagedArrayCollection * __thiscall
FManagedArrayCollection::FManagedArrayCollection
          (FManagedArrayCollection *this,FManagedArrayCollection *param_1)

{
  TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> local_28;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  this->_padding_ = (longlong)&___7FManagedArrayCollection__6B_;
  *(undefined8 *)&this->Map = 0;
  *(undefined8 *)&(this->Map).field_0x8 = 0;
  *(undefined8 *)&(this->Map).field_0x20 = 0;
  *(undefined4 *)&(this->Map).field_0x28 = 0;
  *(undefined4 *)&(this->Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->Map).field_0x34 = 0;
  *(undefined4 *)&(this->Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Map).field_0x40 = 0;
  *(undefined4 *)&(this->Map).field_0x48 = 0;
  *(undefined8 *)&this->GroupInfo = 0;
  *(undefined8 *)&(this->GroupInfo).field_0x8 = 0;
  *(undefined8 *)&(this->GroupInfo).field_0x20 = 0;
  *(undefined4 *)&(this->GroupInfo).field_0x28 = 0;
  *(undefined4 *)&(this->GroupInfo).field_0x2c = 0x80;
  *(undefined4 *)&(this->GroupInfo).field_0x34 = 0;
  *(undefined4 *)&(this->GroupInfo).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GroupInfo).field_0x40 = 0;
  *(undefined4 *)&(this->GroupInfo).field_0x48 = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  CopyTo(param_1,this,&local_18,&local_28);
  return this;
}

// FManagedArrayCollection @ 144067db0

FManagedArrayCollection * __thiscall
FManagedArrayCollection::FManagedArrayCollection(FManagedArrayCollection *this)

{
  this->_padding_ = (longlong)&___7FManagedArrayCollection__6B_;
  *(undefined8 *)&this->Map = 0;
  *(undefined8 *)&(this->Map).field_0x8 = 0;
  *(undefined8 *)&(this->Map).field_0x20 = 0;
  *(undefined4 *)&(this->Map).field_0x28 = 0;
  *(undefined4 *)&(this->Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->Map).field_0x34 = 0;
  *(undefined4 *)&(this->Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Map).field_0x40 = 0;
  *(undefined4 *)&(this->Map).field_0x48 = 0;
  *(undefined8 *)&this->GroupInfo = 0;
  *(undefined8 *)&(this->GroupInfo).field_0x8 = 0;
  *(undefined8 *)&(this->GroupInfo).field_0x20 = 0;
  *(undefined4 *)&(this->GroupInfo).field_0x28 = 0;
  *(undefined4 *)&(this->GroupInfo).field_0x2c = 0x80;
  *(undefined4 *)&(this->GroupInfo).field_0x34 = 0;
  *(undefined4 *)&(this->GroupInfo).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GroupInfo).field_0x40 = 0;
  *(undefined4 *)&(this->GroupInfo).field_0x48 = 0;
  this->Version = 9;
  return this;
}

// ~FManagedArrayCollection @ 14406b1b0

void __thiscall FManagedArrayCollection::~FManagedArrayCollection(FManagedArrayCollection *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->GroupInfo).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FManagedArrayCollection__6B_;
  pvVar1 = *(void **)&(this->GroupInfo).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FManagedArrayCollection::FGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FManagedArrayCollection::FGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FManagedArrayCollection::FGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GroupInfo);
  *(undefined4 *)&(this->Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Map);
  return;
}

// operator= @ 14406c220

FManagedArrayCollection * __thiscall
FManagedArrayCollection::operator=(FManagedArrayCollection *this,FManagedArrayCollection *param_1)

{
  if (&this->Map != &param_1->Map) {
    TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                *)&this->Map,
               (TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                *)&param_1->Map);
  }
  if (&this->GroupInfo != &param_1->GroupInfo) {
    TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                *)&this->GroupInfo,
               (TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                *)&param_1->GroupInfo);
  }
  this->bDirty = param_1->bDirty;
  this->Version = param_1->Version;
  return this;
}

// operator= @ 14406c290

FManagedArrayCollection * __thiscall
FManagedArrayCollection::operator=(FManagedArrayCollection *this,FManagedArrayCollection *param_1)

{
  TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> local_28;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  (**(code **)(this->_padding_ + 0x18))();
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  CopyTo(param_1,this,&local_18,&local_28);
  return this;
}

// operator== @ 14406c430

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FManagedArrayCollection::operator==(FManagedArrayCollection *this,FManagedArrayCollection *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  void *pvVar5;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  FName *pFVar14;
  void *pvVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulonglong local_res8;
  int local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  void *local_228;
  undefined8 local_220;
  void *local_218;
  undefined8 local_210;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  undefined1 *local_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int local_1e8;
  int iStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  FArchiveState local_1a8;
  undefined8 local_118;
  void **local_110;
  undefined8 local_108;
  FArchiveState local_f8;
  undefined8 local_68;
  void **local_60;
  undefined8 local_58;
  
  if (param_1 != this) {
    iVar12 = *(int *)&(param_1->Map).field_0x34;
    puVar20 = &(this->Map).field_0x34;
    iVar17 = *(int *)&(param_1->Map).field_0x8;
    puVar3 = &(this->Map).field_0x8;
    if ((iVar17 != iVar12) || (*(int *)puVar3 != *(int *)puVar20)) {
      if (iVar17 - iVar12 != *(int *)puVar3 - *(int *)puVar20) {
        return false;
      }
      iVar12 = *(int *)&(this->Map).field_0x28;
      local_1f8 = &(this->Map).field_0x10;
      iStack_200 = 0;
      local_res8 = CONCAT44(local_res8._4_4_,1);
      local_208 = &this->Map;
      iStack_1ec = iStack_200;
      local_1e8 = iStack_200;
      if (iVar12 != 0) {
        puVar13 = *(uint **)&(this->Map).field_0x20;
        if (puVar13 == (uint *)0x0) {
          puVar13 = (uint *)local_1f8;
        }
        uVar18 = *puVar13;
        while (uVar18 == 0) {
          lVar10 = (longlong)iStack_200;
          local_1e8 = local_1e8 + 0x20;
          iStack_200 = iStack_200 + 1;
          if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_200)
          goto LAB_14406c540;
          uVar18 = puVar13[lVar10 + 1];
        }
        local_res8 = (ulonglong)(-uVar18 & uVar18);
        uVar1 = local_res8 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_res10 = (int)lVar10;
        iStack_1ec = local_1e8 + -1 + local_res10;
        if (iVar12 < iStack_1ec) {
LAB_14406c540:
          iStack_1ec = iVar12;
        }
      }
      puVar20 = &(this->Map).field_0x10;
      iStack_1e0 = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
      uStack_1fc = (undefined4)local_res8;
      uVar18 = *(uint *)&(this->Map).field_0x28;
      uStack_1f0 = 0xffffffff;
      TStack_1d0.CurrentBitIndex = iStack_1ec;
      TStack_1d0.UnvisitedBitMask = 0xffffffff;
      TStack_1d0._padding_ = CONCAT44(uStack_1fc,iStack_200);
      uVar16 = uVar18 & 0xffffffe0;
      iVar12 = (int)uVar18 >> 5;
      TStack_1d0._28_4_ = iStack_1ec;
      TStack_1d0.BaseBitIndex = local_1e8;
      uStack_1b0 = CONCAT44(uStack_1dc,iStack_1e0);
      iStack_1e4 = iStack_1ec;
      local_1d8 = local_208;
      TStack_1d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1f8;
      if (((int)uVar18 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      uVar2 = *(uint *)&(this->Map).field_0x28;
      if (uVar18 != uVar2) {
        puVar3 = *(undefined1 **)&(this->Map).field_0x20;
        puVar19 = puVar20;
        if (puVar3 != (undefined1 *)0x0) {
          puVar19 = puVar3;
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar12 * 4);
        while (uVar18 == 0) {
          lVar10 = (longlong)iVar12;
          uVar16 = uVar16 + 0x20;
          iVar12 = iVar12 + 1;
          uVar18 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14406c650;
          uVar18 = *(uint *)(puVar19 + lVar10 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar18 = (int)lVar10 + -1 + uVar16;
        if ((int)uVar2 < (int)uVar18) {
          uVar18 = uVar2;
        }
      }
LAB_14406c650:
      while( true ) {
        pTVar6 = local_1d8;
        if (*(int *)&local_1d8->field_0x8 - *(int *)&local_1d8->field_0x34 != (int)uStack_1b0) {
          `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
        }
        if (((TStack_1d0.CurrentBitIndex == uVar18) &&
            (TStack_1d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar20)) &&
           (pTVar6 == &this->Map)) {
          local_228 = (void *)0x0;
          local_220 = 0;
          local_res18 = 0;
          local_1a8._padding_ = 0;
          local_1a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
          local_1a8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
          local_1a8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
          local_1a8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
          local_1a8._40_8_ = 0;
          local_1a8.ArSerializingDefaults = 0;
          local_1a8.ArPortFlags = 0;
          local_1a8.ArMaxSerializeSize = 0;
          local_1a8.ArUEVer.FileVersionUE4 = 0;
          local_1a8.ArUEVer.FileVersionUE5 = 0;
          local_1a8.ArLicenseeUEVer = 0;
          local_1a8.ArEngineVer.Major = 0;
          local_1a8.ArEngineVer.Minor = 0;
          local_1a8.ArEngineVer.Patch = 0;
          local_1a8.ArEngineVer._6_2_ = 0;
          local_1a8.ArEngineVer.Changelist = 0;
          local_1a8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
          local_1a8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
          local_1a8.SavePackageData = (FArchiveSavePackageData *)0x0;
          local_1a8.SerializedProperty = (FProperty *)0x0;
          local_1a8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
          local_1a8.bCustomVersionsAreReset = false;
          local_1a8._129_7_ = 0;
          local_1a8.NextProxy = (FArchiveState *)0x0;
          FArchiveState::FArchiveState(&local_1a8);
          local_110 = &local_228;
          local_118 = 0;
          local_1a8._padding_ =
               (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
          local_108 = 0;
          FArchiveState::SetIsSaving(&local_1a8,true);
          (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,0);
          local_1a8._padding_ = (longlong)&___7FMemoryWriter__6B_;
          Serialize(this,(FArchive *)&local_1a8);
          FArchive::~FArchive((FArchive *)&local_1a8);
          local_218 = (void *)0x0;
          local_210 = 0;
          local_f8._padding_ = 0;
          local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
          local_res20 = 0;
          local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
          local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
          local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
          local_f8._40_8_ = 0;
          local_f8.ArSerializingDefaults = 0;
          local_f8.ArPortFlags = 0;
          local_f8.ArMaxSerializeSize = 0;
          local_f8.ArUEVer.FileVersionUE4 = 0;
          local_f8.ArUEVer.FileVersionUE5 = 0;
          local_f8.ArLicenseeUEVer = 0;
          local_f8.ArEngineVer.Major = 0;
          local_f8.ArEngineVer.Minor = 0;
          local_f8.ArEngineVer.Patch = 0;
          local_f8.ArEngineVer._6_2_ = 0;
          local_f8.ArEngineVer.Changelist = 0;
          local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
          local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
          local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
          local_f8.SerializedProperty = (FProperty *)0x0;
          local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
          local_f8.bCustomVersionsAreReset = false;
          local_f8._129_7_ = 0;
          local_f8.NextProxy = (FArchiveState *)0x0;
          FArchiveState::FArchiveState(&local_f8);
          local_60 = &local_218;
          local_68 = 0;
          local_f8._padding_ =
               (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
          local_58 = 0;
          FArchiveState::SetIsSaving(&local_f8,true);
          (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
          local_f8._padding_ = (longlong)&___7FMemoryWriter__6B_;
          Serialize(param_1,(FArchive *)&local_f8);
          FArchive::~FArchive((FArchive *)&local_f8);
          pvVar5 = local_218;
          pvVar15 = local_228;
          if (((int)local_220 == (int)local_210) &&
             (((int)local_220 == 0 ||
              (iVar12 = memcmp(local_228,local_218,(longlong)(int)local_220), iVar12 == 0)))) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          if (pvVar5 != (void *)0x0) {
            FMemory::Free(pvVar5);
            pvVar15 = local_228;
          }
          if (pvVar15 != (void *)0x0) {
            FMemory::Free(pvVar15);
            return bVar7;
          }
          return bVar7;
        }
        pFVar14 = (FName *)(*(longlong *)pTVar6 + (longlong)TStack_1d0.CurrentBitIndex * 0x40);
        bVar7 = HasAttribute(param_1,*pFVar14,pFVar14[1]);
        if (!bVar7) {
          return false;
        }
        iVar12 = 0;
        pTVar9 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                         *)&param_1->GroupInfo,pFVar14[1]);
        piVar11 = (int *)&pTVar9->field_0x8;
        if (pTVar9 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
          piVar11 = (int *)0x0;
        }
        iVar17 = iVar12;
        if (piVar11 != (int *)0x0) {
          iVar17 = *piVar11;
        }
        pTVar9 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                         *)&this->GroupInfo,pFVar14[1]);
        piVar11 = (int *)&pTVar9->field_0x8;
        if (pTVar9 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
          piVar11 = (int *)0x0;
        }
        if (piVar11 != (int *)0x0) {
          iVar12 = *piVar11;
        }
        if (iVar17 != iVar12) break;
        TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
      }
      return false;
    }
  }
  return true;
}

// AddElements @ 144075840

int __thiscall
FManagedArrayCollection::AddElements(FManagedArrayCollection *this,int param_1,FName param_2)

{
  TMap<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
  *this_00;
  ulonglong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  this_00 = &this->GroupInfo;
  uVar6 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar12 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->GroupInfo).field_0x38;
    }
    iVar7 = *(int *)(puVar12 +
                    (ulonglong)(*(int *)&(this->GroupInfo).field_0x48 - 1U & param_2.Number + uVar6)
                    * 4);
    if (iVar7 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar7 * 0x14) == param_2)
        goto LAB_1440758e0;
        iVar7 = *(int *)(*(longlong *)&this_00->field_0x0 + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_1440758e0:
  pTVar9 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                   *)this_00,param_2);
  if ((pTVar9 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  local_res20 = *(int *)&pTVar9->field_0x8;
  puVar12 = &(this->Map).field_0x10;
  iVar7 = *(int *)&(this->Map).field_0x28;
  iVar14 = 0;
  uVar6 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar7 != 0) {
    puVar17 = *(uint **)&(this->Map).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar12;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1440759af;
      uVar13 = puVar17[lVar10 + 1];
    }
    uVar6 = -uVar13 & uVar13;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = iVar16 + -1 + (int)lVar10;
    if (iVar7 < iVar8) {
      iVar8 = iVar7;
    }
  }
LAB_1440759af:
  uVar13 = *(uint *)&(this->Map).field_0x28;
  TStack_98._padding_ = CONCAT44(uVar6,iVar14);
  uVar6 = uVar13 & 0xffffffe0;
  TStack_98.CurrentBitIndex = iVar8;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = iVar16;
  uStack_78 = CONCAT44(uStack_a4,*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34);
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar12;
  if ((((int)uVar13 < 0) || (iVar7 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  iVar7 = local_res20;
  uVar2 = *(uint *)&(this->Map).field_0x28;
  if (uVar13 != uVar2) {
    puVar15 = *(undefined1 **)&(this->Map).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar12;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      uVar6 = uVar6 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_144075ac0;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar6;
    if ((int)uVar2 < (int)uVar13) {
      uVar13 = uVar2;
    }
  }
LAB_144075ac0:
  while( true ) {
    if (*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34 != (int)uStack_78) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_98.CurrentBitIndex == uVar13) &&
       (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar12)) break;
    lVar10 = *(longlong *)&this->Map;
    lVar11 = (longlong)TStack_98.CurrentBitIndex * 0x40;
    if (*(FName *)(lVar11 + 8 + lVar10) == param_2) {
      iVar14 = (**(code **)(**(longlong **)(lVar11 + 0x30 + lVar10) + 0x60))();
      if (iVar14 < iVar7 + param_1) {
        FValueType::MakeUniqueForWrite((FValueType *)(lVar11 + lVar10 + 0x10));
        puVar3 = *(undefined8 **)(lVar11 + lVar10 + 0x30);
        (**(code **)*puVar3)(puVar3,iVar7 + param_1);
      }
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  pTVar9 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                   *)this_00,param_2);
  if ((pTVar9 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  *(int *)&pTVar9->field_0x8 = *(int *)&pTVar9->field_0x8 + param_1;
  (**(code **)(this->_padding_ + 0x48))(this,param_2,iVar7,param_1);
  return iVar7;
}

// AddGroup @ 144077f40

void __thiscall FManagedArrayCollection::AddGroup(FManagedArrayCollection *this,FName param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 local_res8 [2];
  FName local_res10 [2];
  FName *local_18;
  undefined4 *local_10;
  
  local_res10[0] = param_1;
  uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar6 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->GroupInfo).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_1.Number + uVar4)
                              * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->GroupInfo).field_0x0;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar5 * 0x14) == param_1) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8864559100168503362>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                             ,0x42,"!GroupInfo.Contains(Group)");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0xc + (longlong)iVar5 * 0x14);
      } while (iVar5 != -1);
    }
  }
  local_18 = local_res10;
  local_res8[0] = 0;
  local_10 = local_res8;
  TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FManagedArrayCollection::FGroupInfo_const_&>_>
            ((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
              *)&this->GroupInfo,
             (TPairInitializer<FName_const_&,FManagedArrayCollection::FGroupInfo_const_&> *)
             (local_res10 + 1),(bool *)&local_18);
  return;
}

// Append @ 144078950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FManagedArrayCollection::Append(FManagedArrayCollection *this,FManagedArrayCollection *param_1)

{
  uint uVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  longlong *plVar6;
  code *pcVar7;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  *pTVar8;
  FManagedArrayCollection *pFVar9;
  FName *pFVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  undefined4 uVar14;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar15;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar16;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar17;
  byte bVar18;
  longlong lVar19;
  uint *puVar20;
  int *piVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  TTuple<FName,FName> *pTVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  uint uVar28;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  *pTVar29;
  uint *puVar30;
  undefined1 *puVar31;
  TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
  *this_00;
  ForAnyElementType FVar32;
  undefined1 auStackY_2a8 [32];
  undefined1 local_278;
  undefined1 local_277;
  undefined1 local_276;
  undefined1 local_275 [5];
  TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
  *local_270;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  *local_268;
  uint local_260;
  ulonglong local_258;
  TArray<FName,TSizedDefaultAllocator<32>_> local_250;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_240;
  uint uStack_238;
  uint uStack_234;
  TBitArray<FDefaultBitArrayAllocator> *local_230;
  undefined4 uStack_228;
  uint uStack_224;
  uint local_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_210;
  uint uStack_208;
  bool bStack_204;
  bool bStack_203;
  undefined2 uStack_202;
  FManagedArrayBase *local_200;
  undefined4 uStack_1f8;
  int iStack_1f4;
  int local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  FManagedArrayCollection *local_1e0;
  int local_1d8;
  int local_1d4;
  TPairInitializer<FName_const_&,TArray<int,TSizedDefaultAllocator<32>_>_&&> local_1d0;
  int local_1c0;
  TTuple<FName,FName> *local_1b8;
  FName *local_1b0;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  longlong *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  FName *local_118;
  TArray<int,TSizedDefaultAllocator<32>_> *local_110;
  TArray<int,TSizedDefaultAllocator<32>_> local_108 [2];
  undefined4 local_dc;
  undefined4 local_bc;
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  iVar24 = *(int *)&(param_1->Map).field_0x28;
  puVar27 = &(param_1->Map).field_0x10;
  local_258 = 1;
  local_268 = (TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
               *)&param_1->Map;
  bVar12 = true;
  uStack_208 = 0;
  local_1f0 = 0;
  uVar13 = 1;
  iStack_1f4 = 0;
  if (iVar24 != 0) {
    puVar30 = *(uint **)&(param_1->Map).field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)puVar27;
    }
    uVar13 = *puVar30;
    local_1f0 = 0;
    while (uVar13 == 0) {
      lVar19 = (longlong)(int)uStack_208;
      local_1f0 = local_1f0 + 0x20;
      uStack_208 = uStack_208 + 1;
      uVar13 = 1;
      iStack_1f4 = iVar24;
      if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_208)
      goto LAB_144078a1d;
      uVar13 = puVar30[lVar19 + 1];
    }
    uVar13 = -uVar13 & uVar13;
    uVar22 = (ulonglong)uVar13 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1d8 = (int)lVar19;
    iStack_1f4 = local_1d8 + -1 + local_1f0;
    if (iVar24 < iStack_1f4) {
      iStack_1f4 = iVar24;
    }
  }
LAB_144078a1d:
  uStack_1ec = local_dc;
  iStack_1e8 = *(int *)&(param_1->Map).field_0x8 - *(int *)&(param_1->Map).field_0x34;
  bStack_204 = SUB41(uVar13,0);
  bStack_203 = SUB41(uVar13 >> 8,0);
  uStack_202 = (undefined2)(uVar13 >> 0x10);
  uVar13 = *(uint *)&(param_1->Map).field_0x28;
  uStack_1f8 = 0xffffffff;
  TStack_1a0._padding_ = CONCAT26(uStack_202,CONCAT15(bStack_203,CONCAT14(bStack_204,uStack_208)));
  uVar28 = uVar13 & 0xffffffe0;
  TStack_1a0.CurrentBitIndex = iStack_1f4;
  TStack_1a0.UnvisitedBitMask = 0xffffffff;
  iVar23 = (int)uVar13 >> 5;
  TStack_1a0._28_4_ = local_dc;
  TStack_1a0.BaseBitIndex = local_1f0;
  uStack_180 = CONCAT44(uStack_1e4,iStack_1e8);
  local_210 = (TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
               *)local_268;
  local_200 = (FManagedArrayBase *)puVar27;
  local_1e0 = param_1;
  local_1a8 = local_268;
  TStack_1a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar27;
  if ((((int)uVar13 < 0) || (iVar24 < (int)uVar13)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar1 = *(uint *)&(param_1->Map).field_0x28;
  if (uVar13 != uVar1) {
    puVar31 = *(undefined1 **)&(param_1->Map).field_0x20;
    if (puVar31 == (undefined1 *)0x0) {
      puVar31 = puVar27;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar23 * 4);
    while (uVar13 == 0) {
      lVar19 = (longlong)iVar23;
      uVar28 = uVar28 + 0x20;
      iVar23 = iVar23 + 1;
      uVar13 = uVar1;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23) goto LAB_144078b20;
      uVar13 = *(uint *)(puVar31 + lVar19 * 4 + 4);
    }
    uVar22 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1d4 = (int)lVar19;
    uVar13 = local_1d4 + -1 + uVar28;
    if ((int)uVar1 < (int)uVar13) {
      uVar13 = uVar1;
    }
  }
LAB_144078b20:
  while( true ) {
    pTVar29 = local_1a8;
    if (*(int *)&(local_1a8->Elements).field_0x8 - *(int *)&(local_1a8->Elements).field_0x34 !=
        (int)uStack_180) {
      local_278 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_278);
    }
    pTVar8 = local_268;
    if (((TStack_1a0.CurrentBitIndex == uVar13) &&
        (TStack_1a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar27)) &&
       (pTVar29 == local_268)) break;
    pTVar25 = (TTuple<FName,FName> *)
              (*(longlong *)&pTVar29->Elements + (longlong)TStack_1a0.CurrentBitIndex * 0x40);
    FVar2.ComparisonIndex.Value = *(uint *)&pTVar25->field_0x8;
    FVar2.Number = *(uint *)&pTVar25->field_0xc;
    FVar3.ComparisonIndex.Value = *(uint *)&pTVar25->field_0x0;
    FVar3.Number = *(uint *)&pTVar25->field_0x4;
    bVar11 = HasAttribute(this,FVar3,FVar2);
    if (bVar11) {
      pTVar15 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find(pTVar8,pTVar25);
      if ((pTVar15 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar16 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&this->Map,pTVar25);
      if ((pTVar16 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pTVar15->field_0x10 != pTVar16->field_0x10) {
        bVar12 = false;
        local_1b8 = pTVar25;
        `FManagedArrayCollection::Append'::__l12::<lambda_1>::operator()(&local_1b8);
      }
    }
    TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
  }
  if (bVar12) {
    this_00 = (TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
               *)&local_1e0->GroupInfo;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_250.ArrayNum = 0;
    local_250.ArrayMax = 0;
    local_270 = this_00;
    if (*(int *)&(local_1e0->GroupInfo).field_0x8 != *(int *)&(local_1e0->GroupInfo).field_0x34) {
      TMapBase<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
      ::GetKeys<TSizedDefaultAllocator<32>_>
                ((TMapBase<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
                  *)this_00,&local_250);
    }
    uVar22 = (ulonglong)local_250.ArrayNum;
    local_1b0 = (FName *)(local_250.AllocatorInstance.Data + uVar22 * 8);
    FVar32.Data = local_250.AllocatorInstance.Data;
    local_260 = local_250.ArrayNum;
LAB_144078cc2:
    pFVar10 = local_1b0;
    if (local_250.ArrayNum != (uint)uVar22) {
      local_277 = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_277);
    }
    if ((FName *)FVar32.Data != pFVar10) {
      FVar4 = *(FName *)FVar32.Data;
      uVar13 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      puVar27 = &(this->GroupInfo).field_0x38;
      if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
        puVar31 = *(undefined1 **)&(this->GroupInfo).field_0x40;
        puVar26 = puVar27;
        if (puVar31 != (undefined1 *)0x0) {
          puVar26 = puVar31;
        }
        iVar24 = *(int *)(puVar26 +
                         (ulonglong)
                         (*(int *)&(this->GroupInfo).field_0x48 - 1U & FVar4.Number + uVar13) * 4);
        this_00 = local_270;
        if (iVar24 != -1) {
          do {
            if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar24 * 0x14) == FVar4) {
              if (iVar24 != -1) {
                pTVar17 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                          ::Find(local_270,*(FName *)FVar32.Data);
                this_00 = local_270;
                piVar21 = (int *)&pTVar17->field_0x8;
                if (pTVar17 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
                  piVar21 = (int *)0x0;
                }
                if ((piVar21 != (int *)0x0) && (*piVar21 != 0)) {
                  FVar4 = *(FName *)FVar32.Data;
                  iVar24 = 0;
                  pTVar17 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                            ::Find(local_270,FVar4);
                  piVar21 = (int *)&pTVar17->field_0x8;
                  if (pTVar17 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
                    piVar21 = (int *)0x0;
                  }
                  if (piVar21 != (int *)0x0) {
                    iVar24 = *piVar21;
                  }
                  local_118 = (FName *)FVar32.Data;
                  local_110 = InsertElementsNoReorder(this,local_108,iVar24,0,FVar4);
                  TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  ::
                  Emplace<TPairInitializer<FName_const_&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
                            ((TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                              *)local_98,&local_1d0,(bool *)&local_118);
                  if (local_108[0].AllocatorInstance.Data == (FScriptContainerElement *)0x0)
                  goto LAB_144078e00;
                  FMemory::Free(local_108[0].AllocatorInstance.Data);
                  FVar32.Data = FVar32.Data + 8;
                  uVar22 = (ulonglong)local_260;
                  goto LAB_144078cc2;
                }
              }
              break;
            }
            iVar24 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar24 * 0x14);
          } while (iVar24 != -1);
        }
      }
      puVar30 = (uint *)0x0;
      FVar4 = *(FName *)FVar32.Data;
      uVar13 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
        puVar31 = *(undefined1 **)&(this->GroupInfo).field_0x40;
        if (puVar31 != (undefined1 *)0x0) {
          puVar27 = puVar31;
        }
        iVar24 = *(int *)(puVar27 +
                         (ulonglong)
                         (*(int *)&(this->GroupInfo).field_0x48 - 1U & FVar4.Number + uVar13) * 4);
        if (iVar24 != -1) {
          do {
            if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar24 * 0x14) == FVar4)
            goto LAB_144078e00;
            iVar24 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar24 * 0x14);
          } while (iVar24 != -1);
        }
      }
      AddGroup(this,*(FName *)FVar32.Data);
      FVar4 = *(FName *)FVar32.Data;
      pTVar17 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                ::Find(this_00,FVar4);
      puVar20 = (uint *)&pTVar17->field_0x8;
      if (pTVar17 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
        puVar20 = puVar30;
      }
      if (puVar20 != (uint *)0x0) {
        puVar30 = (uint *)(ulonglong)*puVar20;
      }
      AddElements(this,(int)puVar30,FVar4);
LAB_144078e00:
      FVar32.Data = FVar32.Data + 8;
      uVar22 = (ulonglong)local_260;
      goto LAB_144078cc2;
    }
    if ((FName *)local_250.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_250.AllocatorInstance.Data);
    }
    uVar13 = local_70;
    uStack_238 = 0;
    uStack_234 = (uint)local_258;
    uStack_224 = uStack_238;
    local_220 = uStack_238;
    if (local_70 != 0) {
      puVar30 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar30 = local_78;
      }
      uVar28 = *puVar30;
      local_220 = 0;
      uStack_238 = 0;
      while (uVar28 == 0) {
        lVar19 = (longlong)(int)uStack_238;
        local_220 = local_220 + 0x20;
        uStack_238 = uStack_238 + 1;
        uStack_224 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_238)
        goto LAB_144078f90;
        uVar28 = puVar30[lVar19 + 1];
      }
      uStack_234 = -uVar28 & uVar28;
      uVar22 = (ulonglong)uStack_234 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_1d0.Key._4_4_ = (int)lVar19;
      uStack_224 = (local_220 - 1) + local_1d0.Key._4_4_;
      if ((int)local_70 < (int)uStack_224) {
        uStack_224 = local_70;
      }
    }
LAB_144078f90:
    local_240 = (TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
                 *)local_98;
    uStack_21c = local_bc;
    local_230 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    iStack_218 = local_98._8_4_ - local_64;
    uVar28 = local_70 & 0xffffffe0;
    TStack_170._padding_ = CONCAT44(uStack_234,uStack_238);
    uStack_228 = 0xffffffff;
    TStack_170.CurrentBitIndex = uStack_224;
    TStack_170.UnvisitedBitMask = 0xffffffff;
    iVar24 = (int)local_70 >> 5;
    TStack_170._28_4_ = local_bc;
    TStack_170.BaseBitIndex = local_220;
    uStack_150 = CONCAT44(uStack_214,iStack_218);
    bVar18 = (byte)local_70;
    local_178 = (longlong *)local_240;
    TStack_170.Array = local_230;
    if (((int)local_70 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (uVar13 != local_70) {
      puVar30 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar30 = local_78;
      }
      uVar13 = -1 << (bVar18 & 0x1f) & puVar30[iVar24];
      while (uVar13 == 0) {
        lVar19 = (longlong)iVar24;
        uVar28 = uVar28 + 0x20;
        iVar24 = iVar24 + 1;
        uVar13 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_1440790b0;
        uVar13 = puVar30[lVar19 + 1];
      }
      uVar22 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_1d0.Value._0_4_ = (int)lVar19;
      uVar13 = (uVar28 - 1) + (int)local_1d0.Value;
      if ((int)local_70 < (int)uVar13) {
        uVar13 = local_70;
      }
    }
LAB_1440790b0:
    while( true ) {
      plVar6 = local_178;
      if ((int)local_178[1] - *(int *)((longlong)local_178 + 0x34) != (int)uStack_150) {
        local_276 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_276);
      }
      pFVar9 = local_1e0;
      if (((TStack_170.CurrentBitIndex == uVar13) &&
          (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar6 == (longlong *)local_98)) break;
      lVar19 = *plVar6;
      ReorderElements(this,*(FName *)((longlong)TStack_170.CurrentBitIndex * 0x20 + lVar19),
                      (TArray<int,TSizedDefaultAllocator<32>_> *)
                      (lVar19 + 8 + (longlong)TStack_170.CurrentBitIndex * 0x20));
      TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
    }
    uStack_238 = 0;
    iVar24 = *(int *)&(local_1e0->Map).field_0x28;
    puVar27 = &(local_1e0->Map).field_0x10;
    uStack_224 = uStack_238;
    local_220 = uStack_238;
    if (iVar24 != 0) {
      puVar30 = *(uint **)&(local_1e0->Map).field_0x20;
      if (puVar30 == (uint *)0x0) {
        puVar30 = (uint *)puVar27;
      }
      uVar13 = *puVar30;
      while (uVar13 == 0) {
        lVar19 = (longlong)(int)uStack_238;
        local_220 = local_220 + 0x20;
        uStack_238 = uStack_238 + 1;
        uStack_224 = iVar24;
        if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_238)
        goto LAB_1440791c0;
        uVar13 = puVar30[lVar19 + 1];
      }
      local_258 = (ulonglong)(-uVar13 & uVar13);
      uVar22 = local_258 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_1d0.Value._4_4_ = (int)lVar19;
      uStack_224 = local_1d0.Value._4_4_ + -1 + local_220;
      if (iVar24 < (int)uStack_224) {
        uStack_224 = iVar24;
      }
    }
LAB_1440791c0:
    uVar13 = *(uint *)&(local_1e0->Map).field_0x28;
    pTVar29 = (TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
               *)&local_1e0->Map;
    uStack_234 = (uint)local_258;
    uStack_21c = local_9c;
    iStack_218 = *(int *)&(local_1e0->Map).field_0x8 - *(int *)&(local_1e0->Map).field_0x34;
    uVar28 = uVar13 & 0xffffffe0;
    uStack_228 = 0xffffffff;
    TStack_140._padding_ = CONCAT44(uStack_234,uStack_238);
    TStack_140.CurrentBitIndex = uStack_224;
    TStack_140.UnvisitedBitMask = 0xffffffff;
    iVar24 = (int)uVar13 >> 5;
    TStack_140._28_4_ = local_9c;
    TStack_140.BaseBitIndex = local_220;
    uStack_120 = CONCAT44(uStack_214,iStack_218);
    local_240 = (TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
                 *)pTVar29;
    local_230 = (TBitArray<FDefaultBitArrayAllocator> *)puVar27;
    local_148 = pTVar29;
    TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar27;
    if (((int)uVar13 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar1 = *(uint *)&(pFVar9->Map).field_0x28;
    if (uVar13 != uVar1) {
      puVar31 = *(undefined1 **)&(pFVar9->Map).field_0x20;
      if (puVar31 == (undefined1 *)0x0) {
        puVar31 = puVar27;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar24 * 4);
      while (uVar13 == 0) {
        lVar19 = (longlong)iVar24;
        uVar28 = uVar28 + 0x20;
        iVar24 = iVar24 + 1;
        uVar13 = uVar1;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_1440792e0;
        uVar13 = *(uint *)(puVar31 + lVar19 * 4 + 4);
      }
      uVar22 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_1c0 = (int)lVar19;
      uVar13 = (uVar28 - 1) + local_1c0;
      if ((int)uVar1 < (int)uVar13) {
        uVar13 = uVar1;
      }
    }
LAB_1440792e0:
    while( true ) {
      pTVar8 = local_148;
      if (*(int *)&(local_148->Elements).field_0x8 - *(int *)&(local_148->Elements).field_0x34 !=
          (int)uStack_120) {
        local_275[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_275);
      }
      if (((TStack_140.CurrentBitIndex == uVar13) &&
          (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar27)) &&
         (pTVar8 == pTVar29)) break;
      pTVar25 = (TTuple<FName,FName> *)
                ((longlong)TStack_140.CurrentBitIndex * 0x40 + *(longlong *)&pTVar8->Elements);
      FVar4.ComparisonIndex.Value = *(uint *)&pTVar25->field_0x8;
      FVar4.Number = *(uint *)&pTVar25->field_0xc;
      FVar5.ComparisonIndex.Value = *(uint *)&pTVar25->field_0x0;
      FVar5.Number = *(uint *)&pTVar25->field_0x4;
      bVar12 = HasAttribute(this,FVar5,FVar4);
      if (bVar12) {
        pTVar15 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                          *)&this->Map,pTVar25);
        if ((pTVar15 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FValueType::MakeUniqueForWrite((FValueType *)&pTVar15->field_0x10);
        iVar24 = (**(code **)(**(longlong **)&pTVar15->field_0x30 + 0x60))();
        iVar23 = (**(code **)(**(longlong **)(pTVar25 + 3) + 0x60))();
        if ((iVar24 < iVar23) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Other.ManagedArray->Num() <= ManagedArray->Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                                ,0x431,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar6 = *(longlong **)&pTVar15->field_0x30;
        pcVar7 = *(code **)(*plVar6 + 0x30);
        uVar14 = (**(code **)(**(longlong **)(pTVar25 + 3) + 0x60))();
        (*pcVar7)(plVar6,*(undefined8 *)(pTVar25 + 3),0,uVar14);
      }
      else {
        FValueType::FValueType((FValueType *)&local_210,(FValueType *)(pTVar25 + 1));
        iVar24 = 0;
        pTVar17 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                          *)&this->GroupInfo,FVar4);
        piVar21 = (int *)&pTVar17->field_0x8;
        if (pTVar17 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
          piVar21 = (int *)0x0;
        }
        if (piVar21 != (int *)0x0) {
          iVar24 = *piVar21;
        }
        iVar23 = (**(code **)(*(longlong *)CONCAT44(uStack_1ec,local_1f0) + 0x60))();
        if (iVar23 < iVar24) {
          FValueType::MakeUniqueForWrite((FValueType *)&local_210);
          (*(code *)**(undefined8 **)CONCAT44(uStack_1ec,local_1f0))
                    ((undefined8 *)CONCAT44(uStack_1ec,local_1f0),iVar24);
        }
        TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
        ::Emplace<TTuple<FName,FName>_const_&,FManagedArrayCollection::FValueType>
                  ((TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
                    *)&this->Map,pTVar25,(FValueType *)&local_210);
        if (((bStack_203 != false) && (local_200 != (FManagedArrayBase *)0x0)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("!SharedManagedArray.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                                ,0x3e4,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)CONCAT44(iStack_1f4,uStack_1f8));
      }
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      pTVar29 = local_268;
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  return;
}

// AttributeNames @ 14407b2f0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FManagedArrayCollection::AttributeNames
          (FManagedArrayCollection *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->Map).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar9 = *(int *)&(this->Map).field_0x28;
  uVar7 = 1;
  iVar13 = 0;
  iVar15 = 0;
  iVar8 = iVar13;
  if (iVar9 != 0) {
    puVar16 = *(uint **)&(this->Map).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar17 = *puVar16;
    iVar15 = 0;
    iVar13 = 0;
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14407b3b3;
      uVar17 = puVar16[lVar11 + 1];
    }
    uVar7 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iVar8 = iVar15 + -1 + local_res10;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
  }
LAB_14407b3b3:
  uVar17 = *(uint *)&(this->Map).field_0x28;
  TStack_60._padding_ = CONCAT44(uVar7,iVar13);
  uVar7 = uVar17 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar9 < (int)uVar17)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar10;
  }
  uVar3 = *(uint *)&(this->Map).field_0x28;
  if (uVar17 != uVar3) {
    puVar14 = *(undefined1 **)&(this->Map).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar13;
      uVar7 = uVar7 + 0x20;
      iVar13 = iVar13 + 1;
      uVar17 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14407b4d0;
      uVar17 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar17 = (int)lVar11 + -1 + uVar7;
    if ((int)uVar3 < (int)uVar17) {
      uVar17 = uVar3;
    }
  }
LAB_14407b4d0:
  while( true ) {
    if (*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar17) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar12 = (FScriptContainerElement *)
              (*(longlong *)&this->Map + (longlong)TStack_60.CurrentBitIndex * 0x40);
    if (*(FName *)(pFVar12 + 8) == param_1) {
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar12) &&
          (pFVar12 < pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == __return_storage_ptr__->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           *(undefined8 *)pFVar12;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return __return_storage_ptr__;
}

// CopyAttribute @ 144081f50

void __thiscall
FManagedArrayCollection::CopyAttribute
          (FManagedArrayCollection *this,FManagedArrayCollection *param_1,FName param_2,
          FName param_3,FName param_4,FName param_5)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar5;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FValueType local_48;
  
  SyncGroupSizeFrom(this,param_1,param_4,param_5);
  local_60 = param_4;
  local_50 = param_5;
  local_68 = param_2;
  local_58 = param_3;
  bVar3 = HasAttribute(this,param_3,param_5);
  if (!bVar3) {
    pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                     *)&param_1->Map,(TTuple<FName,FName> *)&local_68);
    if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FValueType::FValueType(&local_48,(FValueType *)&pTVar4->field_0x10);
    TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
    ::Emplace<TTuple<FName,FName>_const_&,FManagedArrayCollection::FValueType>
              ((TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
                *)&this->Map,(TTuple<FName,FName> *)&local_58,&local_48);
    if ((local_48.bExternalValue != false) &&
       (local_48.SharedManagedArray.Object != (FManagedArrayBase *)0x0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SharedManagedArray.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                         ,0x3e4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedManagedArray.SharedReferenceCount.ReferenceController);
  }
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_68);
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&this->Map,(TTuple<FName,FName> *)&local_58);
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FValueType::MakeUniqueForWrite((FValueType *)&pTVar5->field_0x10);
  lVar1 = **(longlong **)&pTVar5->field_0x30;
  if (pTVar5->field_0x10 == pTVar4->field_0x10) {
    (**(code **)(lVar1 + 0x20))();
  }
  else {
    (**(code **)(lVar1 + 0x28))
              (*(longlong **)&pTVar5->field_0x30,*(undefined8 *)&pTVar4->field_0x30);
  }
  return;
}

// CopyAttribute @ 144082120

void __thiscall
FManagedArrayCollection::CopyAttribute
          (FManagedArrayCollection *this,FManagedArrayCollection *param_1,FName param_2,
          FName param_3,FName param_4)

{
  CopyAttribute(this,param_1,param_2,param_3,param_4,param_4);
  return;
}

// CopyAttribute @ 144082150

void __thiscall
FManagedArrayCollection::CopyAttribute
          (FManagedArrayCollection *this,FManagedArrayCollection *param_1,FName param_2,
          FName param_3)

{
  CopyAttribute(this,param_1,param_2,param_2,param_3,param_3);
  return;
}

// CopyMatchingAttributesFrom @ 144082230

void __thiscall
FManagedArrayCollection::CopyMatchingAttributesFrom
          (FManagedArrayCollection *this,FManagedArrayCollection *param_1,
          TMap<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
          *param_2)

{
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *this_00;
  ulonglong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  FName FVar4;
  ForElementType<FSetElementId> FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  code *pcVar10;
  TMap<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
  *pTVar11;
  TMap<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
  *pTVar12;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar13;
  bool bVar14;
  int iVar15;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar16;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar17;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar18;
  longlong lVar19;
  ForElementType<FSetElementId> FVar20;
  int iVar21;
  TTuple<FName,FName> *pTVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint *puVar25;
  uint uVar26;
  undefined1 local_res20 [8];
  undefined1 local_158 [8];
  ulonglong local_150;
  TMap<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
  *local_148;
  int iStack_140;
  uint uStack_13c;
  undefined1 *local_138;
  undefined4 uStack_130;
  int iStack_12c;
  int local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  TMap<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
  *local_108;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_100;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  (**(code **)(this->_padding_ + 0x50))();
  puVar2 = &(param_1->GroupInfo).field_0x10;
  iVar15 = *(int *)&(param_1->GroupInfo).field_0x28;
  local_148 = &param_1->GroupInfo;
  local_150 = 1;
  iStack_140 = 0;
  local_128 = 0;
  uStack_13c = 1;
  iStack_12c = 0;
  if (iVar15 != 0) {
    puVar25 = *(uint **)&(param_1->GroupInfo).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)puVar2;
    }
    uStack_13c = *puVar25;
    local_128 = 0;
    while (uStack_13c == 0) {
      lVar19 = (longlong)iStack_140;
      local_128 = local_128 + 0x20;
      iStack_140 = iStack_140 + 1;
      uStack_13c = 1;
      iStack_12c = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_140) goto LAB_1440822ee;
      uStack_13c = puVar25[lVar19 + 1];
    }
    uStack_13c = -uStack_13c & uStack_13c;
    uVar1 = (ulonglong)uStack_13c * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_118 = (int)lVar19;
    iStack_12c = local_128 + -1 + local_118;
    if (iVar15 < iStack_12c) {
      iStack_12c = iVar15;
    }
  }
LAB_1440822ee:
  uStack_124 = local_54;
  iStack_120 = *(int *)&(param_1->GroupInfo).field_0x8 - *(int *)&(param_1->GroupInfo).field_0x34;
  uVar23 = *(uint *)&(param_1->GroupInfo).field_0x28;
  uVar26 = uVar23 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uStack_13c,iStack_140);
  uStack_130 = 0xffffffff;
  TStack_c8.CurrentBitIndex = iStack_12c;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar23 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = local_128;
  uStack_a8 = CONCAT44(uStack_11c,iStack_120);
  local_138 = puVar2;
  local_108 = local_148;
  local_d0 = local_148;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar23 < 0) || (iVar15 < (int)uVar23)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar11 = local_108;
  uVar3 = *(uint *)&(param_1->GroupInfo).field_0x28;
  if (uVar23 != uVar3) {
    puVar24 = *(undefined1 **)&(param_1->GroupInfo).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar2;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar21 * 4);
    while (uVar23 == 0) {
      lVar19 = (longlong)iVar21;
      uVar26 = uVar26 + 0x20;
      iVar21 = iVar21 + 1;
      uVar23 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_144082420;
      uVar23 = *(uint *)(puVar24 + lVar19 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_114 = (int)lVar19;
    uVar23 = local_114 + -1 + uVar26;
    if ((int)uVar3 < (int)uVar23) {
      uVar23 = uVar3;
    }
  }
LAB_144082420:
  while( true ) {
    pTVar12 = local_d0;
    if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FManagedArrayCollection::FGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_c8.CurrentBitIndex == uVar23) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar12 == pTVar11)
       ) break;
    FVar4 = *(FName *)(*(longlong *)pTVar12 + (longlong)TStack_c8.CurrentBitIndex * 0x14);
    SyncGroupSizeFrom(this,param_1,FVar4,FVar4);
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  iStack_f8 = 0;
  iVar15 = *(int *)&(this->Map).field_0x28;
  puVar2 = &(this->Map).field_0x10;
  local_e0 = 0;
  this_00 = &this->Map;
  iStack_e4 = 0;
  if (iVar15 != 0) {
    puVar25 = *(uint **)&(this->Map).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)puVar2;
    }
    uVar23 = *puVar25;
    while (uVar23 == 0) {
      lVar19 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_144082511;
      uVar23 = puVar25[lVar19 + 1];
    }
    local_150 = (ulonglong)(-uVar23 & uVar23);
    uVar1 = local_150 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_110 = (int)lVar19;
    iStack_e4 = local_e0 + -1 + local_110;
    if (iVar15 < iStack_e4) {
      iStack_e4 = iVar15;
    }
  }
LAB_144082511:
  uVar23 = *(uint *)&(this->Map).field_0x28;
  uStack_f4 = (undefined4)local_150;
  iStack_dc = iStack_12c;
  iStack_d8 = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
  uStack_e8 = 0xffffffff;
  uVar26 = uVar23 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_98.CurrentBitIndex = iStack_e4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar23 >> 5;
  TStack_98._28_4_ = iStack_12c;
  TStack_98.BaseBitIndex = local_e0;
  uStack_78 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = this_00;
  local_f0 = puVar2;
  local_a0 = this_00;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar23 < 0) || (iVar15 < (int)uVar23)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar3 = *(uint *)&(this->Map).field_0x28;
  if (uVar23 != uVar3) {
    puVar24 = *(undefined1 **)&(this->Map).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar2;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar21 * 4);
    while (uVar23 == 0) {
      lVar19 = (longlong)iVar21;
      uVar26 = uVar26 + 0x20;
      iVar21 = iVar21 + 1;
      uVar23 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_144082611;
      uVar23 = *(uint *)(puVar24 + lVar19 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_10c = (int)lVar19;
    uVar23 = local_10c + -1 + uVar26;
    if ((int)uVar3 < (int)uVar23) {
      uVar23 = uVar3;
    }
  }
LAB_144082611:
  do {
    pTVar13 = local_a0;
    if (*(int *)(&local_a0->field_0x0 + 8) - *(int *)(&local_a0->field_0x0 + 0x34) != (int)uStack_78
       ) {
      local_158[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_158);
    }
    if (((TStack_98.CurrentBitIndex == uVar23) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar13 == this_00)
       ) {
      return;
    }
    pTVar22 = (TTuple<FName,FName> *)
              ((longlong)TStack_98.CurrentBitIndex * 0x40 + *(longlong *)&pTVar13->field_0x0);
    if ((param_2 !=
         (TMap<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
          *)0x0) &&
       (FVar4.ComparisonIndex.Value = *(uint *)&pTVar22->field_0x8,
       FVar4.Number = *(uint *)&pTVar22->field_0xc,
       pTVar16 = TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                 ::Find((TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                         *)param_2,FVar4),
       pTVar16 != (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0)) {
      lVar19 = *(longlong *)pTVar22;
      uVar26 = ::GetTypeHash((FNameEntryId)(uint)lVar19);
      if (*(int *)&(pTVar16->Elements).field_0x8 != *(int *)&(pTVar16->Elements).field_0x34) {
        FVar5 = (pTVar16->Hash).SecondaryData;
        FVar20 = (ForElementType<FSetElementId>)&pTVar16->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar20 = FVar5;
        }
        iVar15 = *(int *)((longlong)FVar20 +
                         (ulonglong)
                         (pTVar16->HashSize - 1U & (int)((ulonglong)lVar19 >> 0x20) + uVar26) * 4);
        if (iVar15 != -1) {
          do {
            if (*(longlong *)(*(longlong *)&pTVar16->Elements + (longlong)iVar15 * 0x10) == lVar19)
            goto LAB_144082793;
            iVar15 = *(int *)(*(longlong *)&pTVar16->Elements + 8 + (longlong)iVar15 * 0x10);
          } while (iVar15 != -1);
        }
      }
    }
    FVar6.ComparisonIndex.Value = *(uint *)&pTVar22->field_0x8;
    FVar6.Number = *(uint *)&pTVar22->field_0xc;
    FVar7.ComparisonIndex.Value = *(uint *)&pTVar22->field_0x0;
    FVar7.Number = *(uint *)&pTVar22->field_0x4;
    bVar14 = HasAttribute(param_1,FVar7,FVar6);
    if (bVar14) {
      pTVar17 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&param_1->Map,pTVar22);
      if ((pTVar17 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L""), bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar18 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)this_00,pTVar22);
      if ((pTVar18 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (pTVar17->field_0x10 == pTVar18->field_0x10) {
        FVar8.ComparisonIndex.Value = *(uint *)&pTVar22->field_0x8;
        FVar8.Number = *(uint *)&pTVar22->field_0xc;
        FVar9.ComparisonIndex.Value = *(uint *)&pTVar22->field_0x0;
        FVar9.Number = *(uint *)&pTVar22->field_0x4;
        CopyAttribute(this,param_1,FVar9,FVar9,FVar8,FVar8);
      }
    }
LAB_144082793:
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
}

// CopyMatchingAttributesFrom @ 1440827d0

void __thiscall
FManagedArrayCollection::CopyMatchingAttributesFrom
          (FManagedArrayCollection *this,FManagedArrayCollection *param_1,
          TArrayView<FAttributeAndGroupId_const_,int> *param_2)

{
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  FManagedArrayCollection *pFVar5;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FAttributeAndGroupId *pFVar12;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar13;
  longlong lVar14;
  FAttributeAndGroupId *pFVar15;
  undefined1 *puVar16;
  int iVar17;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  FName *pFVar21;
  int iVar22;
  undefined1 *puVar23;
  int iVar24;
  char *pcVar25;
  uint *puVar26;
  char *pcVar27;
  uint uVar28;
  undefined1 local_res8 [8];
  FManagedArrayCollection *local_res10;
  TArrayView<FAttributeAndGroupId_const_,int> *local_res18;
  undefined1 local_res20 [8];
  uint local_158;
  undefined4 uStack_124;
  undefined4 uStack_dc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FName local_78;
  FName local_70;
  undefined4 local_4c;
  
  local_res10 = param_1;
  local_res18 = param_2;
  (**(code **)(this->_padding_ + 0x50))();
  puVar3 = &(param_1->GroupInfo).field_0x10;
  iVar17 = *(int *)&(param_1->GroupInfo).field_0x28;
  iVar22 = 0;
  iVar24 = 0;
  local_158 = 1;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar17 != 0) {
    puVar26 = *(uint **)&(param_1->GroupInfo).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar3;
    }
    uVar8 = *puVar26;
    while (uVar8 == 0) {
      lVar14 = (longlong)iVar22;
      iVar24 = iVar24 + 0x20;
      iVar22 = iVar22 + 1;
      uVar8 = 1;
      iVar9 = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_14408288e;
      uVar8 = puVar26[lVar14 + 1];
    }
    uVar8 = -uVar8 & uVar8;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar9 = iVar24 + -1 + (int)lVar14;
    if (iVar17 < iVar9) {
      iVar9 = iVar17;
    }
  }
LAB_14408288e:
  uVar19 = *(uint *)&(param_1->GroupInfo).field_0x28;
  uVar28 = uVar19 & 0xffffffe0;
  TStack_d0._padding_ = CONCAT44(uVar8,iVar22);
  TStack_d0.CurrentBitIndex = iVar9;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar19 >> 5;
  TStack_d0._28_4_ = local_4c;
  TStack_d0.BaseBitIndex = iVar24;
  uStack_b0 = CONCAT44(uStack_124,
                       *(int *)&(param_1->GroupInfo).field_0x8 -
                       *(int *)&(param_1->GroupInfo).field_0x34);
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar19 < 0) || (iVar17 < (int)uVar19)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = *(uint *)&(param_1->GroupInfo).field_0x28;
  if (uVar19 != uVar8) {
    puVar23 = *(undefined1 **)&(param_1->GroupInfo).field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = puVar3;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar22 * 4);
    while (uVar19 == 0) {
      lVar14 = (longlong)iVar22;
      uVar28 = uVar28 + 0x20;
      iVar22 = iVar22 + 1;
      uVar19 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_1440829b0;
      uVar19 = *(uint *)(puVar23 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar19 = (int)lVar14 + -1 + uVar28;
    if ((int)uVar8 < (int)uVar19) {
      uVar19 = uVar8;
    }
  }
LAB_1440829b0:
  while( true ) {
    if (*(int *)&(param_1->GroupInfo).field_0x8 - *(int *)&(param_1->GroupInfo).field_0x34 !=
        (int)uStack_b0) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FManagedArrayCollection::FGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_d0.CurrentBitIndex == uVar19) &&
       (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
    lVar14 = *(longlong *)
              (*(longlong *)&param_1->GroupInfo + (longlong)TStack_d0.CurrentBitIndex * 0x14);
    pFVar21 = (FName *)(*(longlong *)&param_1->GroupInfo +
                       (longlong)TStack_d0.CurrentBitIndex * 0x14);
    uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar14);
    if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
      puVar23 = *(undefined1 **)&(this->GroupInfo).field_0x40;
      puVar16 = &(this->GroupInfo).field_0x38;
      if (puVar23 != (undefined1 *)0x0) {
        puVar16 = puVar23;
      }
      iVar17 = *(int *)(puVar16 +
                       (ulonglong)
                       (*(int *)&(this->GroupInfo).field_0x48 - 1U &
                       (int)((ulonglong)lVar14 >> 0x20) + uVar8) * 4);
      if (iVar17 != -1) {
        do {
          if (*(longlong *)(*(longlong *)&this->GroupInfo + (longlong)iVar17 * 0x14) == lVar14) {
            Resize(this,pFVar21[1].ComparisonIndex.Value,*pFVar21);
            break;
          }
          iVar17 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar17 * 0x14);
        } while (iVar17 != -1);
      }
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  uVar8 = *(uint *)&(this->Map).field_0x28;
  puVar3 = &(this->Map).field_0x10;
  pcVar27 = (char *)0x0;
  pTVar1 = &this->Map;
  uVar28 = 0;
  uVar19 = 0;
  uVar10 = uVar28;
  if (uVar8 != 0) {
    puVar26 = *(uint **)&(this->Map).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar3;
    }
    uVar10 = *puVar26;
    pcVar18 = pcVar27;
    pcVar25 = pcVar27;
    uVar19 = 0;
    uVar28 = 0;
    while (uVar10 == 0) {
      iVar17 = (int)pcVar18;
      uVar19 = (int)pcVar25 + 0x20;
      pcVar25 = (char *)(ulonglong)uVar19;
      uVar28 = iVar17 + 1;
      pcVar18 = (char *)(ulonglong)uVar28;
      uVar10 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar28)
      goto LAB_144082b01;
      uVar10 = puVar26[(longlong)iVar17 + 1];
    }
    local_158 = -uVar10 & uVar10;
    uVar2 = (ulonglong)local_158 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar10 = (uVar19 - 1) + (int)lVar14;
    if ((int)uVar8 < (int)uVar10) {
      uVar10 = uVar8;
    }
  }
LAB_144082b01:
  uVar11 = *(uint *)&(this->Map).field_0x28;
  uVar20 = uVar11 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(local_158,uVar28);
  TStack_a0.CurrentBitIndex = uVar10;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar11 >> 5;
  TStack_a0._28_4_ = iVar9;
  TStack_a0.BaseBitIndex = uVar19;
  uStack_80 = CONCAT44(uStack_dc,*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34);
  local_a8 = pTVar1;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar11 < 0) || ((int)uVar8 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar5 = local_res10;
  uVar8 = *(uint *)&(this->Map).field_0x28;
  if (uVar11 != uVar8) {
    puVar23 = *(undefined1 **)&(this->Map).field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = puVar3;
    }
    uVar19 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar17 * 4);
    while (uVar19 == 0) {
      lVar14 = (longlong)iVar17;
      uVar20 = uVar20 + 0x20;
      iVar17 = iVar17 + 1;
      uVar11 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_144082c10;
      uVar19 = *(uint *)(puVar23 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar11 = (int)lVar14 + -1 + uVar20;
    if ((int)uVar8 < (int)uVar11) {
      uVar11 = uVar8;
    }
  }
LAB_144082c10:
  do {
    pTVar6 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_a0.CurrentBitIndex == uVar11) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar6 == pTVar1))
    {
      return;
    }
    pFVar21 = (FName *)((longlong)TStack_a0.CurrentBitIndex * 0x40 + *(longlong *)pTVar6);
    pFVar12 = local_res18->DataPtr;
    pFVar15 = pFVar12 + local_res18->ArrayNum;
    for (; pFVar12 != pFVar15; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->AttributeName == *pFVar21) && (pFVar12->GroupName == pFVar21[1]))
      goto LAB_144082cd7;
    }
    local_78 = *pFVar21;
    local_70 = pFVar21[1];
    pTVar13 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&pFVar5->Map,(TTuple<FName,FName> *)&local_78);
    pcVar18 = &pTVar13->field_0x10;
    if (pTVar13 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pcVar18 = pcVar27;
    }
    if ((pcVar18 != (char *)0x0) && ((char)pFVar21[2].ComparisonIndex.Value == *pcVar18)) {
      FValueType::MakeUniqueForWrite((FValueType *)(pFVar21 + 2));
      lVar14 = *(longlong *)pFVar21[6];
      if ((char)pFVar21[2].ComparisonIndex.Value == *pcVar18) {
        (**(code **)(lVar14 + 0x20))();
      }
      else {
        (**(code **)(lVar14 + 0x28))(pFVar21[6],*(undefined8 *)(pcVar18 + 0x20));
      }
    }
LAB_144082cd7:
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  } while( true );
}

// EmptyGroup @ 144089cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FManagedArrayCollection::EmptyGroup(FManagedArrayCollection *this,FName param_1)

{
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar1;
  ulonglong uVar2;
  code *pcVar3;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar9;
  longlong lVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_res20;
  undefined4 local_ac;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  uVar6 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar11 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->GroupInfo).field_0x38;
    }
    iVar7 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->GroupInfo).field_0x48 - 1U & param_1.Number + uVar6)
                    * 4);
    if (iVar7 != -1) {
      lVar10 = *(longlong *)&(this->GroupInfo).field_0x0;
      do {
        if (*(FName *)(lVar10 + (longlong)iVar7 * 0x14) == param_1) goto LAB_144089d62;
        iVar7 = *(int *)(lVar10 + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8864559100168503755>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                     ,0x1cb,"HasGroup(Group)");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_144089d62:
  iVar7 = *(int *)&(this->Map).field_0x28;
  puVar11 = &(this->Map).field_0x10;
  iVar13 = 0;
  pTVar1 = &this->Map;
  iVar15 = 0;
  uVar6 = 1;
  iVar8 = 0;
  if (iVar7 != 0) {
    puVar16 = *(uint **)&(this->Map).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar11;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_144089def;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar8 = iVar15 + -1 + local_res10;
    if (iVar7 < iVar8) {
      iVar8 = iVar7;
    }
  }
LAB_144089def:
  uVar12 = *(uint *)&(this->Map).field_0x28;
  uVar17 = uVar12 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar6,iVar13);
  TStack_70.CurrentBitIndex = iVar8;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_70._28_4_ = local_ac;
  TStack_70.BaseBitIndex = iVar15;
  uStack_50 = CONCAT44(uStack_7c,*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34);
  local_res20 = pTVar1;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar11;
  if ((((int)uVar12 < 0) || (iVar7 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar4 = local_res20;
  uVar6 = *(uint *)&(this->Map).field_0x28;
  if (uVar12 != uVar6) {
    puVar14 = *(undefined1 **)&(this->Map).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar11;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_144089f00;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    uVar12 = local_res18 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_144089f00:
  while( true ) {
    if (*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar12) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar11)) && (pTVar1 == pTVar4))
    break;
    if (*(FName *)((longlong)TStack_70.CurrentBitIndex * 0x40 + 8 + *(longlong *)pTVar1) == param_1)
    {
      lVar10 = (longlong)TStack_70.CurrentBitIndex * 0x40 + *(longlong *)pTVar1;
      FValueType::MakeUniqueForWrite((FValueType *)(lVar10 + 0x10));
      (**(code **)(**(longlong **)(lVar10 + 0x30) + 0x88))();
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  pTVar9 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                   *)&this->GroupInfo,param_1);
  if (pTVar9 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    _DAT_00000008 = 0;
  }
  else {
    *(undefined4 *)&pTVar9->field_0x8 = 0;
  }
  return;
}

// GetAllocatedSize @ 14408c480

ulong64 __thiscall FManagedArrayCollection::GetAllocatedSize(FManagedArrayCollection *this)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  ulong64 uVar17;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar2 = *(uint *)&(this->Map).field_0x48;
  uVar14 = 0;
  uVar13 = 0;
  uVar10 = uVar14;
  if (1 < uVar2) {
    uVar10 = (longlong)(int)uVar2 << 2;
  }
  puVar1 = &(this->Map).field_0x10;
  uVar2 = *(uint *)&(this->Map).field_0x28;
  uVar5 = 1;
  uVar17 = (longlong)*(int *)&(this->Map).field_0xc * 0x40 +
           ((*(int *)&(this->Map).field_0x2c + 0x1fU >> 5) << 2) + uVar10;
  uVar15 = 0;
  uVar6 = uVar13;
  if (uVar2 != 0) {
    puVar16 = *(uint **)&(this->Map).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar6 = *puVar16;
    uVar10 = uVar14;
    uVar15 = 0;
    uVar13 = 0;
    while (uVar6 == 0) {
      iVar11 = (int)uVar14;
      uVar15 = (int)uVar10 + 0x20;
      uVar10 = (ulonglong)uVar15;
      uVar13 = iVar11 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar6 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < (int)uVar13)
      goto LAB_14408c54d;
      uVar6 = puVar16[(longlong)iVar11 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar14 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    uVar6 = (uVar15 - 1) + local_res10;
    if ((int)uVar2 < (int)uVar6) {
      uVar6 = uVar2;
    }
  }
LAB_14408c54d:
  uVar7 = *(uint *)&(this->Map).field_0x28;
  uVar12 = uVar7 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,uVar13);
  TStack_60.CurrentBitIndex = uVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar7 >> 5;
  TStack_60._28_4_ = uVar6;
  TStack_60.BaseBitIndex = uVar15;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar7 < 0) || ((int)uVar2 < (int)uVar7)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar17 = (*pcVar3)();
    return uVar17;
  }
  uVar2 = *(uint *)&(this->Map).field_0x28;
  if (uVar7 != uVar2) {
    puVar9 = *(undefined1 **)&(this->Map).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar9 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar7 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar11) goto LAB_14408c650;
      uVar13 = *(uint *)(puVar9 + lVar8 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar7 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar2 < (int)uVar7) {
      uVar7 = uVar2;
    }
  }
LAB_14408c650:
  while( true ) {
    if (*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar7) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = (**(code **)(**(longlong **)
                           ((longlong)TStack_60.CurrentBitIndex * 0x40 + 0x30 +
                           *(longlong *)&this->Map) + 0x40))();
    uVar17 = uVar17 + lVar8;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return uVar17;
}

// GetAttributeType @ 14408c6d0

EManagedArrayType __thiscall
FManagedArrayCollection::GetAttributeType(FManagedArrayCollection *this,FName param_1,FName param_2)

{
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar1;
  EManagedArrayType *pEVar2;
  FName local_18;
  FName local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pTVar1 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&this->Map,(TTuple<FName,FName> *)&local_18);
  pEVar2 = &pTVar1->field_0x10;
  if (pTVar1 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pEVar2 = (EManagedArrayType *)0x0;
  }
  if (pEVar2 != (EManagedArrayType *)0x0) {
    return *pEVar2;
  }
  return FNoneType;
}

// GetDependency @ 14408c860

FName __thiscall
FManagedArrayCollection::GetDependency(FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FName in_R9;
  FName local_18;
  
  bVar2 = HasAttribute(this,param_2,in_R9);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                       ,0x1ff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  local_18 = param_2;
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
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  *(undefined8 *)param_1 = *(undefined8 *)&pTVar4->field_0x14;
  return param_1;
}

// GetElementSizeInfoForGroups @ 14408c920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FManagedArrayCollection::GetElementSizeInfoForGroups
          (FManagedArrayCollection *this,
          TArray<TTuple<FName,unsigned___int64>,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar8;
  TArray<TTuple<FName,unsigned___int64>,TSizedDefaultAllocator<32>_> *pTVar9;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar10;
  longlong *plVar11;
  bool bVar12;
  byte bVar13;
  longlong lVar14;
  ForElementType<FSetElementId> FVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  undefined1 *puVar22;
  uint *puVar23;
  undefined1 auStack_1f8 [32];
  FScriptContainerElement *local_1d8;
  FScriptContainerElement *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [3];
  int local_1a4;
  ulonglong local_1a0;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  int iStack_170;
  undefined4 uStack_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_158;
  longlong *local_150;
  TArray<TTuple<FName,unsigned___int64>,TSizedDefaultAllocator<32>_> *local_148;
  longlong *local_140;
  int iStack_138;
  undefined4 uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  uint uStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 local_94;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_5c = 0x80;
  iStack_190 = 0;
  local_58 = 0xffffffff;
  local_88._0_8_ = 0;
  puVar1 = &(this->Map).field_0x10;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  local_198 = &this->Map;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_178 = 0;
  iVar17 = *(int *)&(this->Map).field_0x28;
  local_1a0 = 1;
  uStack_18c = 1;
  iStack_17c = 0;
  if (iVar17 != 0) {
    puVar23 = *(uint **)&(this->Map).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uStack_18c = *puVar23;
    local_178 = 0;
    while (uStack_18c == 0) {
      lVar14 = (longlong)iStack_190;
      local_178 = local_178 + 0x20;
      iStack_190 = iStack_190 + 1;
      uStack_18c = 1;
      iStack_17c = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190) goto LAB_14408ca2d;
      uStack_18c = puVar23[lVar14 + 1];
    }
    uStack_18c = -uStack_18c & uStack_18c;
    uVar3 = (ulonglong)uStack_18c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_168 = (int)lVar14;
    iStack_17c = local_178 + -1 + local_168;
    if (iVar17 < iStack_17c) {
      iStack_17c = iVar17;
    }
  }
LAB_14408ca2d:
  iStack_170 = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
  uVar20 = *(uint *)&(this->Map).field_0x28;
  TStack_108._padding_ = CONCAT44(uStack_18c,iStack_190);
  uStack_180 = 0xffffffff;
  uVar19 = uVar20 & 0xffffffe0;
  TStack_108.CurrentBitIndex = iStack_17c;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar20 >> 5;
  TStack_108._28_4_ = local_94;
  TStack_108.BaseBitIndex = local_178;
  uStack_e8 = CONCAT44(uStack_16c,iStack_170);
  local_188 = puVar1;
  local_158 = local_198;
  local_148 = param_1;
  local_110 = local_198;
  TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar17 < (int)uVar20)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar8 = local_158;
  uVar4 = *(uint *)&(this->Map).field_0x28;
  if (uVar20 != uVar4) {
    puVar22 = *(undefined1 **)&(this->Map).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar16 * 4);
    while (uVar20 == 0) {
      lVar14 = (longlong)iVar16;
      uVar19 = uVar19 + 0x20;
      iVar16 = iVar16 + 1;
      uVar20 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14408cb40;
      uVar20 = *(uint *)(puVar22 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_164 = (int)lVar14;
    uVar20 = local_164 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar20) {
      uVar20 = uVar4;
    }
  }
LAB_14408cb40:
  while( true ) {
    pTVar10 = local_110;
    if (*(int *)&local_110->field_0x8 - *(int *)&local_110->field_0x34 != (int)uStack_e8) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    uVar19 = local_60;
    pTVar9 = local_148;
    if (((TStack_108.CurrentBitIndex == uVar20) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar8)
       ) break;
    lVar14 = (longlong)TStack_108.CurrentBitIndex * 0x40 + *(longlong *)pTVar10;
    uVar5 = *(undefined8 *)(lVar14 + 8);
    uVar19 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
    uVar19 = uVar19 + (int)((ulonglong)uVar5 >> 0x20);
    if (local_88._8_4_ != local_54) {
      FVar15 = (ForElementType<FSetElementId>)local_50;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FVar15 = local_48;
      }
      iVar17 = *(int *)((longlong)FVar15 + (ulonglong)(local_40 - 1U & uVar19) * 4);
      if (iVar17 != -1) {
        do {
          lVar18 = local_88._0_8_ + (longlong)iVar17 * 0x18;
          if (*(longlong *)(local_88._0_8_ + (longlong)iVar17 * 0x18) == *(longlong *)(lVar14 + 8))
          {
            if (lVar18 != 0) goto LAB_14408cc32;
            break;
          }
          iVar17 = *(int *)(lVar18 + 0x10);
        } while (iVar17 != -1);
      }
    }
    local_1d8 = (FScriptContainerElement *)0x0;
    local_150 = (longlong *)(lVar14 + 8);
    TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
              ((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
                *)local_88,(uint)&local_1a4,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar19,
               (bool *)&local_150);
    lVar18 = local_88._0_8_ + (longlong)local_1a4 * 0x18;
LAB_14408cc32:
    lVar14 = (**(code **)(**(longlong **)(lVar14 + 0x30) + 0x78))();
    *(longlong *)(lVar18 + 8) = *(longlong *)(lVar18 + 8) + lVar14;
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  iStack_138 = 0;
  local_120 = 0;
  uStack_124 = 0;
  if (local_60 != 0) {
    puVar23 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar23 = local_68;
    }
    uVar20 = *puVar23;
    while (uVar20 == 0) {
      lVar14 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      uStack_124 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_138)
      goto LAB_14408cce3;
      uVar20 = puVar23[lVar14 + 1];
    }
    local_1a0 = (ulonglong)(-uVar20 & uVar20);
    uVar3 = local_1a0 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_160 = (int)lVar14;
    uStack_124 = local_120 + -1 + local_160;
    if ((int)local_60 < (int)uStack_124) {
      uStack_124 = local_60;
    }
  }
LAB_14408cce3:
  local_140 = (longlong *)local_88;
  uStack_134 = (undefined4)local_1a0;
  uVar20 = local_60 & 0xffffffe0;
  iStack_11c = iStack_17c;
  local_130 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  iStack_118 = local_88._8_4_ - local_54;
  uStack_128 = 0xffffffff;
  TStack_d8.CurrentBitIndex = uStack_124;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  TStack_d8._padding_ = CONCAT44(uStack_134,iStack_138);
  iVar17 = (int)local_60 >> 5;
  TStack_d8._28_4_ = iStack_17c;
  TStack_d8.BaseBitIndex = local_120;
  uStack_b8 = CONCAT44(uStack_114,iStack_118);
  bVar13 = (byte)local_60;
  local_e0 = local_140;
  TStack_d8.Array = local_130;
  if (((int)local_60 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (uVar19 != local_60) {
    puVar23 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar23 = local_68;
    }
    uVar19 = -1 << (bVar13 & 0x1f) & puVar23[iVar17];
    while (uVar19 == 0) {
      lVar14 = (longlong)iVar17;
      uVar20 = uVar20 + 0x20;
      iVar17 = iVar17 + 1;
      uVar19 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_14408ce01;
      uVar19 = puVar23[lVar14 + 1];
    }
    uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_15c = (int)lVar14;
    uVar19 = local_15c + -1 + uVar20;
    if ((int)local_60 < (int)uVar19) {
      uVar19 = local_60;
    }
  }
LAB_14408ce01:
  while( true ) {
    plVar11 = local_e0;
    if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
      local_1a7[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a7);
    }
    if (((TStack_d8.CurrentBitIndex == uVar19) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar11 == (longlong *)local_88)) break;
    piVar21 = &pTVar9->ArrayMax;
    pFVar2 = (FScriptContainerElement *)(*plVar11 + (longlong)TStack_d8.CurrentBitIndex * 0x18);
    pFVar6 = (pTVar9->AllocatorInstance).Data;
    if ((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar21 * 0x10)) {
      local_1c0 = (longlong)pTVar9->ArrayNum;
      local_1b8 = 0x10;
      local_1d8 = pFVar2;
      local_1d0 = pFVar6;
      local_1c8 = (longlong)*piVar21;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar12) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar17 = pTVar9->ArrayNum;
    if (iVar17 == *piVar21) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar9->AllocatorInstance,piVar21);
    }
    pTVar9->ArrayNum = iVar17 + 1;
    uVar5 = *(undefined8 *)(pFVar2 + 8);
    pFVar6 = (pTVar9->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
    *(undefined8 *)pFVar6 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar6 + 8) = uVar5;
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// GroupNames @ 14408e240

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FManagedArrayCollection::GroupNames
          (FManagedArrayCollection *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    TMapBase<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
                *)&this->GroupInfo,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// HasAttribute @ 14408e280

bool __thiscall
FManagedArrayCollection::HasAttribute(FManagedArrayCollection *this,FName param_1,FName param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  uint uStackX_14;
  
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  uStackX_14 = param_1.Number;
  uStackX_14 = uStackX_14 + uVar2;
  uVar2 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->Map).field_0x8 != *(int *)&(this->Map).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Map).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Map).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->Map).field_0x48 - 1U &
                              (param_2.Number + uStackX_14 * 0x40 + (uStackX_14 >> 2) +
                               uVar2 + 0x9e3779b9 ^ uStackX_14)) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Map;
      do {
        lVar4 = (longlong)iVar3 * 0x40;
        if ((*(FName *)(lVar4 + lVar1) == param_1) && (*(FName *)(lVar4 + 8 + lVar1) == param_2))
        goto LAB_14408e332;
        iVar3 = *(int *)(lVar4 + 0x38 + lVar1);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14408e332:
  return iVar3 != -1;
}

// HasAttributes @ 14408e360

bool __thiscall
FManagedArrayCollection::HasAttributes
          (FManagedArrayCollection *this,
          TArray<FManagedArrayCollection::FManagedType,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  TTuple<FName,FName> local_28;
  
  iVar2 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x14;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FManagedArrayCollection::FManagedType_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar1) {
      return true;
    }
    local_28._0_8_ = *(undefined8 *)(pFVar5 + 4);
    local_28._8_8_ = *(undefined8 *)(pFVar5 + 0xc);
    pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                     *)&this->Map,&local_28);
    pFVar4 = (FScriptContainerElement *)&pTVar3->field_0x10;
    if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pFVar4 = (FScriptContainerElement *)0x0;
    }
    if ((pFVar4 == (FScriptContainerElement *)0x0) || (*pFVar4 != *pFVar5)) break;
    pFVar5 = pFVar5 + 0x14;
  }
  return false;
}

// InsertElements @ 144091c90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
FManagedArrayCollection::InsertElements
          (FManagedArrayCollection *this,int param_1,int param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  
  lVar9 = (longlong)param_2;
  iVar3 = AddElements(this,param_1,param_3);
  if ((iVar3 < param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Position <= OldGroupSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                         ,0x111,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  uVar6 = param_2 + param_1;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_48,iVar3 + param_1,Default);
  uVar8 = 0;
  if (0 < param_2) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < local_48.ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      *(uint *)(local_48.AllocatorInstance.Data + lVar7) = uVar8;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 4;
    } while ((int)uVar8 < param_2);
  }
  lVar7 = (longlong)(int)uVar6;
  uVar8 = param_2;
  while( true ) {
    if (lVar7 <= lVar9) {
      while( true ) {
        if (iVar3 + param_1 <= lVar7) {
          (**(code **)(this->_padding_ + 0x38))(this,param_3,&local_48);
          if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.AllocatorInstance.Data);
          }
          return param_2;
        }
        uVar8 = 0;
        if ((int)uVar6 < local_48.ArrayNum) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) break;
        iVar5 = uVar6 - param_1;
        uVar6 = uVar6 + 1;
        *(int *)(local_48.AllocatorInstance.Data + lVar7 * 4) = iVar5;
        lVar7 = lVar7 + 1;
      }
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    uVar4 = 0;
    if ((int)uVar8 < local_48.ArrayNum) {
      uVar4 = ~uVar8 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    iVar5 = uVar8 + (iVar3 - param_2);
    uVar8 = uVar8 + 1;
    *(int *)(local_48.AllocatorInstance.Data + lVar9 * 4) = iVar5;
    lVar9 = lVar9 + 1;
  }
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}

// InsertElementsNoReorder @ 144091eb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FManagedArrayCollection::InsertElementsNoReorder
          (FManagedArrayCollection *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1,int param_2,
          FName param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar9 = (ulonglong)param_2;
  iVar3 = AddElements(this,param_1,param_3);
  if ((iVar3 < param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Position <= OldGroupSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                         ,0x12e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
  uVar6 = param_2 + param_1;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (__return_storage_ptr__,iVar3 + param_1,Default);
  uVar7 = 0;
  if (0 < param_2) {
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar7 < __return_storage_ptr__->ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar4;
      }
      *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + lVar11) = uVar7;
      uVar7 = uVar7 + 1;
      lVar11 = lVar11 + 4;
    } while ((int)uVar7 < param_2);
  }
  lVar11 = (longlong)(int)uVar6;
  uVar10 = uVar9;
  while( true ) {
    if (lVar11 <= (longlong)uVar9) {
      while( true ) {
        if (iVar3 + param_1 <= lVar11) {
          return __return_storage_ptr__;
        }
        uVar7 = 0;
        if ((int)uVar6 < __return_storage_ptr__->ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) break;
        iVar5 = uVar6 - param_1;
        uVar6 = uVar6 + 1;
        *(int *)((__return_storage_ptr__->AllocatorInstance).Data + lVar11 * 4) = iVar5;
        lVar11 = lVar11 + 1;
      }
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
    uVar8 = (uint)uVar10;
    uVar7 = 0;
    if ((int)uVar8 < __return_storage_ptr__->ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    uVar10 = (ulonglong)(uVar8 + 1);
    *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + uVar9 * 4) =
         uVar8 + (iVar3 - param_2);
    uVar9 = uVar9 + 1;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// IsAttributeDirty @ 1440923b0

bool __thiscall
FManagedArrayCollection::IsAttributeDirty(FManagedArrayCollection *this,FName param_1,FName param_2)

{
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar1;
  undefined1 *puVar2;
  FName local_18;
  FName local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pTVar1 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&this->Map,(TTuple<FName,FName> *)&local_18);
  puVar2 = &pTVar1->field_0x10;
  if (pTVar1 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  if (puVar2 != (undefined1 *)0x0) {
    return (bool)*(undefined1 *)(*(longlong *)(puVar2 + 0x20) + 8);
  }
  return false;
}

// IsAttributePersistent @ 144092400

bool __thiscall
FManagedArrayCollection::IsAttributePersistent
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar1;
  undefined1 *puVar2;
  FName local_18;
  FName local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pTVar1 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&this->Map,(TTuple<FName,FName> *)&local_18);
  puVar2 = &pTVar1->field_0x10;
  if (pTVar1 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  if (puVar2 != (undefined1 *)0x0) {
    return (bool)puVar2[0xc];
  }
  return false;
}

// IsConnected @ 144092450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FManagedArrayCollection::IsConnected(FManagedArrayCollection *this,FName param_1,FName param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  longlong lVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  int iVar13;
  ForElementType<FSetElementId> FVar14;
  FNameEntryId FVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uStackX_1c;
  undefined1 auStackY_1d8 [32];
  undefined1 local_198 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_190;
  void *local_180;
  undefined8 local_178;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_170;
  int iStack_168;
  uint uStack_164;
  undefined1 *local_160;
  undefined4 uStack_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int local_140;
  int local_13c;
  TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_&&> local_138;
  FName local_128;
  FName local_120;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  FName *local_e8;
  void **local_e0;
  void *local_d8;
  undefined8 local_d0;
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  undefined4 local_a8;
  int local_a4;
  undefined1 local_a0 [8];
  ForElementType<FSetElementId> local_98;
  int local_90;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_1 != (FName)0x0) {
    puVar1 = &(this->Map).field_0x10;
    local_88.Elements._0_8_ = 0;
    local_88.Elements._8_8_ = 0;
    local_170 = &this->Map;
    local_88.Elements._32_8_ = 0;
    iStack_168 = 0;
    local_88.Elements._40_4_ = 0;
    uStack_164 = 1;
    local_88.Elements._52_4_ = 0;
    local_150 = 0;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    local_88.Elements._44_4_ = 0x80;
    local_88.Elements._48_4_ = 0xffffffff;
    iVar17 = *(int *)&(this->Map).field_0x28;
    iStack_154 = local_150;
    if (iVar17 != 0) {
      puVar19 = *(uint **)&(this->Map).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)puVar1;
      }
      uVar20 = *puVar19;
      local_150 = 0;
      iStack_168 = 0;
      while (uVar20 == 0) {
        lVar12 = (longlong)iStack_168;
        local_150 = local_150 + 0x20;
        iStack_168 = iStack_168 + 1;
        iStack_154 = iVar17;
        if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_168)
        goto LAB_144092560;
        uVar20 = puVar19[lVar12 + 1];
      }
      uStack_164 = -uVar20 & uVar20;
      uVar2 = (ulonglong)uStack_164 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_140 = (int)lVar12;
      iStack_154 = local_150 + -1 + local_140;
      if (iVar17 < iStack_154) {
        iStack_154 = iVar17;
      }
    }
LAB_144092560:
    iStack_148 = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
    uVar20 = *(uint *)&(this->Map).field_0x28;
    uStack_158 = 0xffffffff;
    TStack_110._padding_ = CONCAT44(uStack_164,iStack_168);
    uVar21 = uVar20 & 0xffffffe0;
    TStack_110.CurrentBitIndex = iStack_154;
    TStack_110.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar20 >> 5;
    TStack_110._28_4_ = iStack_154;
    TStack_110.BaseBitIndex = local_150;
    uStack_f0 = CONCAT44(uStack_144,iStack_148);
    local_160 = puVar1;
    iStack_14c = iStack_154;
    local_138.Value = (TArray<FName,TSizedDefaultAllocator<32>_> *)local_170;
    local_118 = (TArray<FName,TSizedDefaultAllocator<32>_> *)local_170;
    TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar20 < 0) || (iVar17 < (int)uVar20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pTVar11 = local_138.Value;
    uVar3 = *(uint *)&(this->Map).field_0x28;
    if (uVar20 != uVar3) {
      puVar18 = *(undefined1 **)&(this->Map).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar1;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
      while (uVar20 == 0) {
        lVar12 = (longlong)iVar16;
        uVar21 = uVar21 + 0x20;
        iVar16 = iVar16 + 1;
        uVar20 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_144092680;
        uVar20 = *(uint *)(puVar18 + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_13c = (int)lVar12;
      uVar20 = (uVar21 - 1) + local_13c;
      if ((int)uVar3 < (int)uVar20) {
        uVar20 = uVar3;
      }
    }
LAB_144092680:
    while( true ) {
      pTVar10 = local_118;
      if (local_118->ArrayNum - *(int *)((longlong)&local_118[3].AllocatorInstance.Data + 4) !=
          (int)uStack_f0) {
        local_198[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_198);
      }
      iVar17 = TStack_110.CurrentBitIndex;
      if (((TStack_110.CurrentBitIndex == uVar20) &&
          (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar10 == pTVar11)) break;
      pFVar4 = (pTVar10->AllocatorInstance).Data;
      lVar12 = *(longlong *)(pFVar4 + (longlong)TStack_110.CurrentBitIndex * 0x40 + 8);
      lVar9 = (longlong)TStack_110.CurrentBitIndex;
      uVar21 = ::GetTypeHash((FNameEntryId)(uint)lVar12);
      if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
        FVar14 = (ForElementType<FSetElementId>)&local_88.Hash;
        if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar14 = local_88.Hash.SecondaryData;
        }
        for (iVar16 = *(int *)((longlong)FVar14 +
                              (ulonglong)
                              (local_88.HashSize - 1U & (int)((ulonglong)lVar12 >> 0x20) + uVar21) *
                              4); iVar16 != -1;
            iVar16 = *(int *)((longlong)iVar16 * 0x20 + 0x18 + local_88.Elements._0_8_)) {
          if (*(longlong *)((longlong)iVar16 * 0x20 + local_88.Elements._0_8_) == lVar12)
          goto LAB_144092764;
        }
      }
      local_180 = (void *)0x0;
      local_178 = 0;
      local_e0 = &local_180;
      local_e8 = (FName *)(pFVar4 + lVar9 * 0x40 + 8);
      TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_&&>_>
                (&local_88,&local_138,(bool *)&local_e8);
      if (local_180 != (void *)0x0) {
        FMemory::Free(local_180);
      }
LAB_144092764:
      if (*(longlong *)(pFVar4 + (longlong)iVar17 * 0x40 + 0x14) != 0) {
        pTVar10 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindChecked((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                                 *)&local_88,*(FName *)(pFVar4 + lVar9 * 0x40 + 8));
        local_128 = *(FName *)(pFVar4 + (longlong)iVar17 * 0x40 + 0x14);
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>(pTVar10,&local_128);
      }
      TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
    }
    uVar20 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
      FVar14 = (ForElementType<FSetElementId>)&local_88.Hash;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar14 = local_88.Hash.SecondaryData;
      }
      for (iVar17 = *(int *)((longlong)FVar14 +
                            (ulonglong)(local_88.HashSize - 1U & param_1.Number + uVar20) * 4);
          iVar17 != -1; iVar17 = *(int *)((longlong)iVar17 * 0x20 + 0x18 + local_88.Elements._0_8_))
      {
        if (*(FName *)((longlong)iVar17 * 0x20 + local_88.Elements._0_8_) == param_1) {
          if (iVar17 != -1) {
            local_d8 = (void *)0x0;
            local_d0 = 0;
            local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
            local_c8.NumBits = 0;
            local_c8.MaxBits = 0x80;
            local_a8 = 0xffffffff;
            local_a4 = 0;
            local_98 = (ForElementType<FSetElementId>)0x0;
            local_90 = 0;
            pTVar11 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindChecked((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                                     *)&local_88,param_1);
            local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_190.ArrayNum = pTVar11->ArrayNum;
            lVar12 = (longlong)local_190.ArrayNum;
            pFVar4 = (pTVar11->AllocatorInstance).Data;
            if (local_190.ArrayNum == 0) {
              local_190.ArrayMax = 0;
              iVar17 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,local_190.ArrayNum,0,&local_190.AllocatorInstance,local_190.ArrayNum,
                         &local_190.ArrayMax);
              memcpy(local_190.AllocatorInstance.Data,pFVar4,lVar12 << 3);
              iVar17 = local_190.ArrayNum;
            }
            if (iVar17 != 0) {
              uStackX_1c = param_2.Number;
              bVar7 = false;
              do {
                if ((bVar7 || iVar17 < 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), iVar17 = local_190.ArrayNum, bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                iVar13 = iVar17 + -1;
                FVar5 = *(FName *)(local_190.AllocatorInstance.Data + (longlong)iVar13 * 8);
                iVar16 = (iVar17 - iVar13) + -1;
                local_120 = FVar5;
                if (iVar16 != 0) {
                  memmove(local_190.AllocatorInstance.Data + (longlong)iVar13 * 8,
                          local_190.AllocatorInstance.Data + (longlong)iVar13 * 8 + 8,
                          (longlong)iVar16 << 3);
                  iVar17 = local_190.ArrayNum;
                }
                local_190.ArrayNum = iVar17 + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,&local_190.AllocatorInstance,local_190.ArrayNum,&local_190.ArrayMax);
                FVar15 = FVar5.ComparisonIndex.Value;
                uVar20 = FVar5.Number;
                if ((FVar15.Value == param_2.ComparisonIndex.Value.Value) && (uVar20 == uStackX_1c))
                {
                  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_190.AllocatorInstance.Data);
                  }
                  local_90 = 0;
                  if (local_98 != (ForElementType<FSetElementId>)0x0) {
                    FMemory::Free((void *)local_98);
                  }
                  uVar2 = local_d0 >> 0x20;
                  local_d0 = local_d0 & 0xffffffff00000000;
                  if ((int)uVar2 != 0) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,4,0,(ForAnyElementType *)&local_d8,0,
                               (int *)((longlong)&local_d0 + 4));
                  }
                  local_a8 = 0xffffffff;
                  local_a4 = 0;
                  local_c8.NumBits = 0;
                  if (0x80 < (uint)local_c8.MaxBits) {
                    local_c8.MaxBits = 0x80;
                    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c8,0);
                  }
                  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
                  {
                    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
                  }
                  if (local_d8 != (void *)0x0) {
                    FMemory::Free(local_d8);
                  }
                  local_88.HashSize = 0;
                  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                    FMemory::Free((void *)local_88.Hash.SecondaryData);
                  }
                  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::
                  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            (&local_88.Elements);
                  return true;
                }
                uVar21 = ::GetTypeHash(FVar15);
                if ((int)local_d0 != local_a4) {
                  FVar14 = (ForElementType<FSetElementId>)local_a0;
                  if (local_98 != (ForElementType<FSetElementId>)0x0) {
                    FVar14 = local_98;
                  }
                  for (iVar17 = *(int *)((longlong)FVar14 +
                                        (ulonglong)(local_90 - 1U & uVar21 + uVar20) * 4);
                      iVar17 != -1;
                      iVar17 = *(int *)((longlong)local_d8 + (longlong)iVar17 * 0x10 + 8)) {
                    if (*(FName *)((longlong)local_d8 + (longlong)iVar17 * 0x10) == FVar5)
                    goto LAB_144092b41;
                  }
                }
                TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                          ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&local_d8,
                           (FName *)((longlong)&local_138.Key + 4),(bool *)&local_120);
                uVar21 = ::GetTypeHash(FVar15);
                if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
                  FVar14 = (ForElementType<FSetElementId>)&local_88.Hash;
                  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                    FVar14 = local_88.Hash.SecondaryData;
                  }
                  for (iVar17 = *(int *)((longlong)FVar14 +
                                        (ulonglong)(local_88.HashSize - 1U & uVar20 + uVar21) * 4);
                      iVar17 != -1;
                      iVar17 = *(int *)((longlong)iVar17 * 0x20 + 0x18 + local_88.Elements._0_8_)) {
                    if (*(FName *)((longlong)iVar17 * 0x20 + local_88.Elements._0_8_) == FVar5) {
                      pTVar11 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                                ::FindChecked((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                                               *)&local_88,FVar5);
                      if (pTVar11->ArrayNum != 0) {
                        pTVar11 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                                  ::FindChecked((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                                                 *)&local_88,FVar5);
                        if ((&local_190 == pTVar11) &&
                           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(void*)this != (void*)&Source",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x96e,L""), bVar7)) {
                          pcVar6 = (code *)swi(3);
                          uVar8 = (*pcVar6)();
                          return (bool)uVar8;
                        }
                        iVar17 = pTVar11->ArrayNum;
                        if (iVar17 != 0) {
                          iVar16 = UE::Core::Private::
                                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (8,4,iVar17,&local_190.AllocatorInstance,
                                              &local_190.ArrayNum,&local_190.ArrayMax);
                          memcpy(local_190.AllocatorInstance.Data + (longlong)iVar16 * 8,
                                 (pTVar11->AllocatorInstance).Data,(longlong)iVar17 << 3);
                        }
                      }
                      break;
                    }
                  }
                }
LAB_144092b41:
                bVar7 = local_190.ArrayNum == 0;
                iVar17 = local_190.ArrayNum;
              } while (!bVar7);
            }
            if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.AllocatorInstance.Data);
            }
            local_90 = 0;
            if (local_98 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_98);
            }
            uVar2 = local_d0 >> 0x20;
            local_d0 = local_d0 & 0xffffffff00000000;
            if ((int)uVar2 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,0,(ForAnyElementType *)&local_d8,0,(int *)((longlong)&local_d0 + 4))
              ;
            }
            local_a8 = 0xffffffff;
            local_a4 = 0;
            local_c8.NumBits = 0;
            if (0x80 < (uint)local_c8.MaxBits) {
              local_c8.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c8,0);
            }
            if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
            }
            if (local_d8 != (void *)0x0) {
              FMemory::Free(local_d8);
            }
          }
          break;
        }
      }
    }
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
  }
  return false;
}

// MergeElements @ 144095150

void __thiscall
FManagedArrayCollection::MergeElements
          (FManagedArrayCollection *this,FName *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,FProcessingParameters param_4)

{
  undefined1 *puVar1;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar2;
  undefined4 uVar3;
  code *pcVar4;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res18 [8];
  int local_res20 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_e8;
  int local_d8;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  if ((param_2->ArrayNum != param_3->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SortedMergeList.Num() == MergeRemapIndex.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                         ,0x7c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_2->ArrayNum != 0) {
    pTVar8 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                     *)&this->GroupInfo,*param_1);
    if ((pTVar8 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar10 = *(int *)&pTVar8->field_0x8;
    uVar16 = 0;
    local_res20[0] = -1;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_e8,local_res20,iVar10);
    uVar15 = 0;
    uVar11 = uVar16;
    uVar14 = uVar16;
    if (0 < iVar10) {
      do {
        uVar12 = (uint)uVar14;
        uVar17 = uVar15;
        if ((int)uVar12 < local_e8.ArrayNum) {
          uVar17 = ~uVar12 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(uint *)(local_e8.AllocatorInstance.Data + uVar11 * 4) = uVar12;
        uVar11 = uVar11 + 1;
        uVar14 = (ulonglong)(uVar12 + 1);
      } while ((longlong)uVar11 < (longlong)iVar10);
    }
    iVar10 = param_3->ArrayNum;
    uVar17 = 0;
    uVar11 = uVar16;
    uVar14 = uVar16;
    if (0 < iVar10) {
      do {
        uVar7 = (uint)uVar11;
        uVar12 = uVar17;
        if ((int)uVar7 < iVar10) {
          uVar12 = ~uVar7 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar3 = *(undefined4 *)((param_3->AllocatorInstance).Data + uVar14);
        uVar12 = uVar17;
        if ((int)uVar7 < param_2->ArrayNum) {
          uVar12 = ~uVar7 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar12 = *(uint *)((param_2->AllocatorInstance).Data + uVar14);
        uVar13 = 0;
        if ((int)uVar12 < local_e8.ArrayNum) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)(local_e8.AllocatorInstance.Data + (longlong)(int)uVar12 * 4) = uVar3;
        iVar10 = param_3->ArrayNum;
        uVar11 = (ulonglong)(uVar7 + 1);
        uVar14 = uVar14 + 4;
      } while ((int)(uVar7 + 1) < iVar10);
    }
    uStack_c4 = 1;
    uVar12 = *(uint *)&(this->Map).field_0x28;
    puVar1 = &(this->Map).field_0x10;
    pTVar2 = &this->Map;
    uStack_b4 = 0;
    if (uVar12 != 0) {
      puVar19 = *(uint **)&(this->Map).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)puVar1;
      }
      uVar7 = *puVar19;
      uVar11 = uVar16;
      uVar17 = 0;
      uVar15 = 0;
      while (uVar7 == 0) {
        iVar10 = (int)uVar16;
        uVar17 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uVar17;
        uVar15 = iVar10 + 1;
        uVar16 = (ulonglong)uVar15;
        uStack_b4 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
        goto LAB_144095430;
        uVar7 = puVar19[(longlong)iVar10 + 1];
      }
      uStack_c4 = -uVar7 & uVar7;
      uVar16 = (ulonglong)uStack_c4 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_d8 = (int)lVar9;
      uStack_b4 = local_d8 + -1 + uVar17;
      if ((int)uVar12 < (int)uStack_b4) {
        uStack_b4 = uVar12;
      }
    }
LAB_144095430:
    uVar7 = *(uint *)&(this->Map).field_0x28;
    uStack_ac = local_54;
    iStack_a8 = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
    uVar13 = uVar7 & 0xffffffe0;
    uStack_b8 = 0xffffffff;
    TStack_98._padding_ = CONCAT44(uStack_c4,uVar15);
    TStack_98.CurrentBitIndex = uStack_b4;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    iVar10 = (int)uVar7 >> 5;
    TStack_98._28_4_ = local_54;
    TStack_98.BaseBitIndex = uVar17;
    uStack_78 = CONCAT44(uStack_a4,iStack_a8);
    local_d0 = pTVar2;
    uStack_c8 = uVar15;
    local_c0 = puVar1;
    local_b0 = uVar17;
    local_a0 = pTVar2;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar7 < 0) || ((int)uVar12 < (int)uVar7)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar15 = *(uint *)&(this->Map).field_0x28;
    if (uVar7 != uVar15) {
      puVar18 = *(undefined1 **)&(this->Map).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar1;
      }
      uVar17 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar10 * 4);
      while (uVar17 == 0) {
        lVar9 = (longlong)iVar10;
        uVar13 = uVar13 + 0x20;
        iVar10 = iVar10 + 1;
        uVar7 = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_144095540;
        uVar17 = *(uint *)(puVar18 + lVar9 * 4 + 4);
      }
      uVar16 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar7 = (int)lVar9 + -1 + uVar13;
      if ((int)uVar15 < (int)uVar7) {
        uVar7 = uVar15;
      }
    }
LAB_144095540:
    while( true ) {
      pTVar5 = local_a0;
      if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
        `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_98.CurrentBitIndex == uVar7) &&
          (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == pTVar2)
         ) break;
      lVar9 = *(longlong *)pTVar5 + (longlong)TStack_98.CurrentBitIndex * 0x40;
      if (*(FName *)(lVar9 + 0x14) == *param_1) {
        FValueType::MakeUniqueForWrite((FValueType *)(lVar9 + 0x10));
        *(undefined1 *)(*(longlong *)(lVar9 + 0x30) + 8) = 1;
        (**(code **)(**(longlong **)(lVar9 + 0x30) + 0x18))(*(longlong **)(lVar9 + 0x30),&local_e8);
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
    RemoveElements(this,param_1,param_2,param_4);
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
  }
  return;
}

// NumAttributes @ 144097ed0

int __thiscall FManagedArrayCollection::NumAttributes(FManagedArrayCollection *this,FName param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar8 = *(int *)&(this->Map).field_0x28;
  puVar1 = &(this->Map).field_0x10;
  iVar11 = 0;
  iVar12 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar8 != 0) {
    puVar14 = *(uint **)&(this->Map).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar15 = *puVar14;
    iVar13 = 0;
    while (uVar15 == 0) {
      lVar9 = (longlong)iVar12;
      iVar13 = iVar13 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar8;
      if ((int)((iVar8 + -1 >> 0x1f & 0x1fU) + iVar8 + -1) >> 5 < iVar12) goto LAB_144097f80;
      uVar15 = puVar14[lVar9 + 1];
    }
    uVar6 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = (int)lVar9 + -1 + iVar13;
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
  }
LAB_144097f80:
  uVar15 = *(uint *)&(this->Map).field_0x28;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  uVar6 = uVar15 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar8 < (int)uVar15)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  uVar3 = *(uint *)&(this->Map).field_0x28;
  if (uVar15 != uVar3) {
    puVar10 = *(undefined1 **)&(this->Map).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar9 = (longlong)iVar12;
      uVar6 = uVar6 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar12) goto LAB_144098090;
      uVar15 = *(uint *)(puVar10 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar15 = (int)lVar9 + -1 + uVar6;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_144098090:
  while( true ) {
    if (*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    iVar8 = iVar11 + 1;
    if (*(FName *)((longlong)TStack_60.CurrentBitIndex * 0x40 + 8 + *(longlong *)&this->Map) !=
        param_1) {
      iVar8 = iVar11;
    }
    iVar11 = iVar8;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return iVar11;
}

// NumElements @ 144098160

int __thiscall FManagedArrayCollection::NumElements(FManagedArrayCollection *this,FName param_1)

{
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar1;
  int *piVar2;
  
  pTVar1 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                   *)&this->GroupInfo,param_1);
  piVar2 = (int *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    piVar2 = (int *)0x0;
  }
  if (piVar2 != (int *)0x0) {
    return *piVar2;
  }
  return 0;
}

// RemoveAttribute @ 1440a1500

void __thiscall
FManagedArrayCollection::RemoveAttribute(FManagedArrayCollection *this,FName param_1,FName param_2)

{
  FName FVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar5;
  FValueType *this_00;
  FName local_18;
  FName local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&this->Map,(TTuple<FName,FName> *)&local_18);
  this_00 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = (FValueType *)0x0;
  }
  if (this_00 != (FValueType *)0x0) {
    FValueType::MakeUniqueForWrite(this_00);
    (**(code **)(this_00->ManagedArray->_padding_ + 0x88))();
  }
  FVar1 = local_18;
  if (*(int *)&(this->Map).field_0x8 != *(int *)&(this->Map).field_0x34) {
    uVar3 = ::GetTypeHash(local_18.ComparisonIndex.Value);
    FVar2 = local_10;
    uVar3 = uVar3 + FVar1.Number;
    uVar4 = ::GetTypeHash(local_10.ComparisonIndex.Value);
    TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
    ::RemoveImpl<TTuple<FName,FName>_>
              ((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                *)&this->Map,(uVar3 >> 2) + FVar2.Number + uVar3 * 0x40 + uVar4 + 0x9e3779b9 ^ uVar3
               ,(TTuple<FName,FName> *)&local_18);
  }
  return;
}

// RemoveDependencyFor @ 1440a15c0

void __thiscall
FManagedArrayCollection::RemoveDependencyFor(FManagedArrayCollection *this,FName param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar8 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->GroupInfo).field_0x38;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_1.Number + uVar4)
                              * 4);
    if (iVar5 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar5 * 0x14) == param_1)
        goto LAB_1440a1672;
        iVar5 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar5 * 0x14);
      } while (iVar5 != -1);
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8864559100168503814>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                     ,0x206,"HasGroup(Group)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1440a1672:
  iVar5 = *(int *)&(this->Map).field_0x28;
  puVar8 = &(this->Map).field_0x10;
  iVar10 = 0;
  iVar12 = 0;
  uVar4 = 1;
  iVar6 = 0;
  if (iVar5 != 0) {
    puVar13 = *(uint **)&(this->Map).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar8;
    }
    uVar9 = *puVar13;
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar6 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1440a16ff;
      uVar9 = puVar13[lVar7 + 1];
    }
    uVar4 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar4 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res10 = (int)lVar7;
    iVar6 = iVar12 + -1 + local_res10;
    if (iVar5 < iVar6) {
      iVar6 = iVar5;
    }
  }
LAB_1440a16ff:
  uVar9 = *(uint *)&(this->Map).field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar4,iVar10);
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar8;
  if ((((int)uVar9 < 0) || (iVar5 < (int)uVar9)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = *(uint *)&(this->Map).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Map).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar8;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1440a1800;
      uVar9 = *(uint *)(puVar11 + lVar7 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_1440a1800:
  while( true ) {
    if (*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar8)) break;
    lVar7 = (longlong)TStack_60.CurrentBitIndex * 0x40 + *(longlong *)&this->Map;
    if (*(FName *)(lVar7 + 0x14) == param_1) {
      local_res18 = 0;
      *(undefined8 *)(lVar7 + 0x14) = 0;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// RemoveElements @ 1440a81d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FManagedArrayCollection::RemoveElements
          (FManagedArrayCollection *this,FName *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,FProcessingParameters param_3)

{
  undefined1 *puVar1;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  undefined8 uVar8;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar16;
  int *piVar17;
  ForElementType<unsigned_int> FVar18;
  ForAnyElementType FVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  FScriptContainerElement *pFVar28;
  bool bStackX_21;
  undefined1 auStackY_288 [32];
  undefined1 local_258 [4];
  int local_254;
  int local_250;
  int local_24c;
  FName *local_248;
  int local_240;
  uint uStack_23c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_238;
  undefined4 local_230;
  int iStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  int local_220;
  uint uStack_21c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_218;
  undefined4 local_210;
  int iStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  TArray<int,TSizedDefaultAllocator<32>_> local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f0;
  undefined4 local_1d0;
  int local_1cc;
  undefined4 local_1c4;
  int local_1c0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1b8;
  FManagedArrayCollection *local_1b0;
  TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
  *local_1a8;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_198;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  FSparseArrayAllocationInfo local_120;
  undefined1 local_110 [40];
  int local_e8;
  undefined4 uStack_e4;
  longlong local_d8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_288;
  if (param_2->ArrayNum == 0) {
    return;
  }
  local_1a8 = (TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
               *)&this->GroupInfo;
  iVar11 = 0;
  local_248 = param_1;
  local_1b8 = param_2;
  local_1b0 = this;
  pTVar13 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
            ::Find(local_1a8,*param_1);
  piVar17 = (int *)&pTVar13->field_0x8;
  if (pTVar13 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    piVar17 = (int *)0x0;
  }
  if (piVar17 != (int *)0x0) {
    iVar11 = *piVar17;
  }
  iVar3 = param_2->ArrayNum;
  local_254 = iVar11;
  local_250 = iVar3;
  GeometryCollectionAlgo::ValidateSortedList(param_2,&local_254);
  if ((local_254 < iVar3) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8864559100168503389>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                          ,0x5d,"GroupSize >= DelListNum"), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  GeometryCollectionAlgo::BuildIncrementMask(param_2,&local_254,&local_200);
  uVar25 = param_2->ArrayNum;
  pFVar28 = (param_2->AllocatorInstance).Data;
  if (((int)uVar25 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_a8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_a8.AllocationFlags.NumBits = 0;
  local_a8.AllocationFlags.MaxBits = 0x80;
  local_a8.FirstFreeIndex = -1;
  local_a8.NumFreeIndices = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  if (uVar25 == 0) goto LAB_1440a8588;
  if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar25);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_a8,uVar25);
  uVar21 = 1;
  if (3 < uVar25) {
    uVar26 = (ulonglong)((uVar25 >> 1) + 7) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_1d0 = (undefined4)lVar20;
    uVar21 = 1 << ((byte)lVar20 & 0x1f);
  }
  if ((local_60 != 0) && ((int)uVar21 <= (int)local_60)) goto LAB_1440a8588;
  local_60 = uVar21;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar21 != 0) {
    uVar24 = uVar21;
    if (uVar21 < 2) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar24 = 0;
        goto LAB_1440a83bd;
      }
    }
    else {
LAB_1440a83bd:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar24,4);
    }
    if (0 < (int)uVar21) {
      uVar27 = (ulonglong)uVar21;
      uVar26 = 0;
      do {
        FVar19.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar19.Data = local_68.Data;
        }
        uVar14 = uVar26 & (longlong)(int)uVar21 - 1U;
        uVar26 = uVar26 + 1;
        *(undefined4 *)(FVar19.Data + uVar14 * 4) = 0xffffffff;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
  }
  if (local_60 != 0) {
    pTStack_238 = &local_a8.AllocationFlags;
    local_240 = 0;
    uStack_23c = 1;
    iStack_22c = 0;
    iStack_228 = 0;
    if (local_a8.AllocationFlags.NumBits != 0) {
      FVar18 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
      if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar21 = *(uint *)FVar18;
      iStack_228 = 0;
      local_240 = 0;
      while (uVar21 == 0) {
        iStack_228 = iStack_228 + 0x20;
        lVar20 = (longlong)local_240;
        local_240 = local_240 + 1;
        if ((int)(local_a8.AllocationFlags.NumBits + -1 +
                 (local_a8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_240)
        goto LAB_1440a84e3;
        uVar21 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar20 * 4);
      }
      uStack_23c = -uVar21 & uVar21;
      uVar26 = (ulonglong)uStack_23c * 2 + 1;
      lVar20 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_1cc = (int)lVar20;
      iStack_22c = iStack_228 + -1 + local_1cc;
      if (local_a8.AllocationFlags.NumBits < iStack_22c) {
LAB_1440a84e3:
        iStack_22c = local_a8.AllocationFlags.NumBits;
      }
    }
    local_230 = 0xffffffff;
    local_1a0 = &local_a8;
    local_198._padding_ = CONCAT44(uStack_23c,local_240);
    local_198.CurrentBitIndex = iStack_22c;
    local_198.UnvisitedBitMask = 0xffffffff;
    local_198._28_4_ = uStack_224;
    local_198.BaseBitIndex = iStack_228;
    iVar11 = iStack_22c;
    local_198.Array = pTStack_238;
    if (iStack_22c < local_a8.AllocationFlags.NumBits) {
      do {
        lVar20 = (longlong)iVar11;
        pFVar4 = (local_1a0->Data).AllocatorInstance.Data;
        uVar21 = local_60 - 1 & *(uint *)(pFVar4 + lVar20 * 0xc);
        *(uint *)(pFVar4 + lVar20 * 0xc + 8) = uVar21;
        FVar19.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar19.Data = local_68.Data;
        }
        uVar26 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar21;
        *(undefined4 *)(pFVar4 + lVar20 * 0xc + 4) = *(undefined4 *)(FVar19.Data + uVar26 * 4);
        *(int *)(FVar19.Data + uVar26 * 4) = iVar11;
        local_198.UnvisitedBitMask = local_198.UnvisitedBitMask & ~local_198._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_198);
        iVar11 = local_198.CurrentBitIndex;
      } while (local_198.CurrentBitIndex < (local_198.Array)->NumBits);
    }
  }
LAB_1440a8588:
  pFVar4 = pFVar28 + (longlong)(int)uVar25 * 4;
  iVar11 = local_a8.FirstFreeIndex;
  do {
    local_a8.FirstFreeIndex = iVar11;
    if (pFVar28 == pFVar4) {
      local_1f0._padding_._0_4_ = 0;
      puVar1 = &(this->Map).field_0x10;
      local_1f0._padding_._4_4_ = 1;
      pTVar2 = &this->Map;
      local_1f0.UnvisitedBitMask = 0xffffffff;
      local_1f0.CurrentBitIndex = 0;
      local_1f0.BaseBitIndex = 0;
      local_1f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if (*(int *)&(this->Map).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1f0);
      }
      TStack_148._padding_ = CONCAT44(local_1f0._padding_._4_4_,(undefined4)local_1f0._padding_);
      TStack_148.CurrentBitIndex = local_1f0.CurrentBitIndex;
      TStack_148.UnvisitedBitMask = local_1f0.UnvisitedBitMask;
      TStack_148._28_4_ = local_1f0._28_4_;
      TStack_148.BaseBitIndex = local_1f0.BaseBitIndex;
      local_e8 = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
      local_110._16_8_ = local_1f0.Array;
      uStack_128 = CONCAT44(uStack_e4,local_e8);
      TStack_148.Array = local_1f0.Array;
      local_150 = pTVar2;
      local_110._0_8_ = pTVar2;
      local_110._8_8_ = TStack_148._padding_;
      local_110._24_8_ = TStack_148._16_8_;
      local_110._32_8_ = TStack_148._24_8_;
      pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_110,
                           (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                           *(int *)&(this->Map).field_0x28);
      bStackX_21 = param_3.bReindexDependentAttibutes;
      local_d8 = pTVar16->_padding_;
      pTVar7 = pTVar16->Array;
      uVar8._0_4_ = pTVar16->UnvisitedBitMask;
      uVar8._4_4_ = pTVar16->CurrentBitIndex;
      uStack_c0 = *(undefined8 *)&pTVar16->BaseBitIndex;
      pTStack_d0 = pTVar7;
      local_c8 = uVar8;
      while( true ) {
        pTVar9 = local_150;
        if (*(int *)&local_150->field_0x8 - *(int *)&local_150->field_0x34 != (int)uStack_128) {
          local_258[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_258);
        }
        if (((TStack_148.CurrentBitIndex == uVar8._4_4_) && (TStack_148.Array == pTVar7)) &&
           (pTVar9 == pTVar2)) break;
        lVar20 = (longlong)TStack_148.CurrentBitIndex * 0x40 + *(longlong *)pTVar9;
        if ((*(FName *)(lVar20 + 0x14) == *local_248) && (bStackX_21 != false)) {
          FValueType::MakeUniqueForWrite((FValueType *)(lVar20 + 0x10));
          *(undefined1 *)(*(longlong *)(lVar20 + 0x30) + 8) = 1;
          local_24c = local_254 - local_250;
          (**(code **)(**(longlong **)(lVar20 + 0x30) + 0x80))
                    (*(longlong **)(lVar20 + 0x30),&local_200,&local_24c,param_2);
        }
        if (*(FName *)(lVar20 + 8) == *local_248) {
          FValueType::MakeUniqueForWrite((FValueType *)(lVar20 + 0x10));
          *(undefined1 *)(*(longlong *)(lVar20 + 0x30) + 8) = 1;
          (**(code **)(**(longlong **)(lVar20 + 0x30) + 0x58))
                    (*(longlong **)(lVar20 + 0x30),param_2);
        }
        TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
      }
      pTVar13 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                ::Find(local_1a8,*local_248);
      if ((pTVar13 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(int *)&pTVar13->field_0x8 = *(int *)&pTVar13->field_0x8 - local_250;
      local_60 = 0;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_a8);
      if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.AllocatorInstance.Data);
      }
      return;
    }
    if (local_a8.NumFreeIndices == 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0xc,4,1,(ForAnyElementType *)&local_a8,&local_a8.Data.ArrayNum,
                          &local_a8.Data.ArrayMax);
      iVar3 = local_a8.AllocationFlags.NumBits;
      if (local_a8.AllocationFlags.NumBits == 0) {
        iVar22 = 0;
LAB_1440a864a:
        if (local_a8.AllocationFlags.MaxBits < local_a8.AllocationFlags.NumBits + 1) {
          uVar25 = local_a8.AllocationFlags.MaxBits + 0x1fU >> 5;
          uVar21 = local_a8.AllocationFlags.NumBits + 0x20U >> 5;
          if (uVar21 < 5) {
            local_a8.AllocationFlags.MaxBits = 4;
          }
          else {
            uVar26 = (ulonglong)uVar21;
            if (uVar25 < 5) {
              uVar25 = 0;
            }
            if (uVar25 == 0) {
              uVar27 = 4;
              if (4 < uVar26) {
                uVar27 = uVar26;
              }
            }
            else {
              uVar27 = ((ulonglong)uVar21 * 3 >> 3) + 0x10 + uVar26;
            }
            uVar15 = FMemory::QuantizeSize(uVar27 * 4,0);
            local_a8.AllocationFlags.MaxBits = (int)(uVar15 >> 2);
            if (local_a8.AllocationFlags.MaxBits < (int)uVar21) {
              local_a8.AllocationFlags.MaxBits = 0x7fffffff;
            }
          }
          local_a8.AllocationFlags.MaxBits = local_a8.AllocationFlags.MaxBits << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    (&local_a8.AllocationFlags,local_a8.AllocationFlags.NumBits);
        }
        local_a8.AllocationFlags.NumBits = local_a8.AllocationFlags.NumBits + 1;
        uVar21 = local_a8.AllocationFlags.NumBits >> 0x1f & 0x1f;
        uVar25 = local_a8.AllocationFlags.NumBits + uVar21;
        iVar12 = (uVar25 & 0x1f) - uVar21;
        if (iVar12 != 0) {
          FVar18 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
          if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar18 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          puVar23 = (uint *)((longlong)FVar18 + (longlong)((int)uVar25 >> 5) * 4);
          *puVar23 = *puVar23 & 0xffffffffU >> (0x20U - (char)iVar12 & 0x1f);
        }
      }
      else {
        iVar22 = (int)(local_a8.AllocationFlags.NumBits +
                      (local_a8.AllocationFlags.NumBits >> 0x1f & 0x1fU)) >> 5;
        if (iVar22 != (int)((local_a8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU) +
                           local_a8.AllocationFlags.NumBits + -1) >> 5) goto LAB_1440a864a;
        local_a8.AllocationFlags.NumBits = local_a8.AllocationFlags.NumBits + 1;
      }
      FVar18 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
      if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      puVar23 = (uint *)((longlong)FVar18 + (longlong)iVar22 * 4);
      *puVar23 = *puVar23 & ~(1 << ((byte)iVar3 & 0x1f));
    }
    else {
      local_a8.FirstFreeIndex =
           *(int *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar11 * 0xc + 4);
      local_a8.NumFreeIndices = local_a8.NumFreeIndices + -1;
      if (local_a8.NumFreeIndices != 0) {
        *(undefined4 *)
         (local_a8.Data.AllocatorInstance.Data + (longlong)local_a8.FirstFreeIndex * 0xc) =
             0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex(&local_a8,&local_120,iVar11);
    if (local_120.Pointer == (uint *)0x0) {
      puVar23 = (uint *)0x0;
    }
    else {
      *(uint *)local_120.Pointer = *(uint *)pFVar28;
      *(uint *)((longlong)local_120.Pointer + 4) = 0xffffffff;
      puVar23 = local_120.Pointer;
    }
    uVar25 = *puVar23;
    if ((local_a8.Data.ArrayNum - local_a8.NumFreeIndices != 1) &&
       (local_a8.Data.ArrayNum != local_a8.NumFreeIndices)) {
      FVar19.Data = local_70;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FVar19.Data = local_68.Data;
      }
      for (iVar11 = *(int *)(FVar19.Data + (ulonglong)(local_60 - 1 & uVar25) * 4); iVar11 != -1;
          iVar11 = *(int *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar11 * 0xc + 4)) {
        if (*(uint *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar11 * 0xc) == uVar25) {
          if (iVar11 != -1) {
            *(uint *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar11 * 0xc) = uVar25;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(&local_a8,local_120.Index,1);
            goto LAB_1440a8af7;
          }
          break;
        }
      }
    }
    uVar24 = local_a8.Data.ArrayNum - local_a8.NumFreeIndices;
    uVar21 = 1;
    if (3 < uVar24) {
      uVar26 = (ulonglong)((uVar24 >> 1) + 7) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_1c4 = (undefined4)lVar20;
      uVar21 = 1 << ((byte)lVar20 & 0x1f);
    }
    if (((int)uVar24 < 1) || ((int)uVar21 <= (int)local_60)) {
      uVar25 = local_60 - 1 & uVar25;
      puVar23[2] = uVar25;
      FVar19.Data = local_70;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FVar19.Data = local_68.Data;
      }
      uVar26 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar25;
      puVar23[1] = *(uint *)(FVar19.Data + uVar26 * 4);
      *(int *)(FVar19.Data + uVar26 * 4) = local_120.Index;
    }
    else {
      local_60 = uVar21;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
      }
      if (uVar21 != 0) {
        uVar25 = uVar21;
        if (uVar21 < 2) {
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            uVar25 = 0;
            goto LAB_1440a88f2;
          }
        }
        else {
LAB_1440a88f2:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar25,4)
          ;
        }
        if (0 < (int)uVar21) {
          uVar27 = (ulonglong)uVar21;
          uVar26 = 0;
          do {
            FVar19.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar19.Data = local_68.Data;
            }
            uVar14 = uVar26 & (longlong)(int)uVar21 - 1U;
            uVar26 = uVar26 + 1;
            *(undefined4 *)(FVar19.Data + uVar14 * 4) = 0xffffffff;
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
        }
      }
      if (local_60 != 0) {
        pTStack_218 = &local_a8.AllocationFlags;
        local_220 = 0;
        uStack_21c = 1;
        iStack_20c = 0;
        iStack_208 = 0;
        if (local_a8.AllocationFlags.NumBits != 0) {
          FVar18 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
          if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar18 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          uVar25 = *(uint *)FVar18;
          iStack_208 = 0;
          local_220 = 0;
          while (uVar25 == 0) {
            iStack_208 = iStack_208 + 0x20;
            lVar20 = (longlong)local_220;
            local_220 = local_220 + 1;
            if ((int)(local_a8.AllocationFlags.NumBits + -1 +
                     (local_a8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_220)
            goto LAB_1440a8a11;
            uVar25 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar20 * 4);
          }
          uStack_21c = -uVar25 & uVar25;
          uVar26 = (ulonglong)uStack_21c * 2 + 1;
          lVar20 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_1c0 = (int)lVar20;
          iStack_20c = local_1c0 + -1 + iStack_208;
          if (local_a8.AllocationFlags.NumBits < iStack_20c) {
LAB_1440a8a11:
            iStack_20c = local_a8.AllocationFlags.NumBits;
          }
        }
        local_210 = 0xffffffff;
        local_178 = &local_a8;
        local_170._padding_ = CONCAT44(uStack_21c,local_220);
        local_170.CurrentBitIndex = iStack_20c;
        local_170.UnvisitedBitMask = 0xffffffff;
        local_170._28_4_ = uStack_204;
        local_170.BaseBitIndex = iStack_208;
        iVar11 = iStack_20c;
        local_170.Array = pTStack_218;
        if (iStack_20c < local_a8.AllocationFlags.NumBits) {
          do {
            lVar20 = (longlong)iVar11;
            pFVar5 = (local_178->Data).AllocatorInstance.Data;
            uVar25 = local_60 - 1 & *(uint *)(pFVar5 + lVar20 * 0xc);
            *(uint *)(pFVar5 + lVar20 * 0xc + 8) = uVar25;
            FVar19.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar19.Data = local_68.Data;
            }
            uVar26 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar25;
            *(undefined4 *)(pFVar5 + lVar20 * 0xc + 4) = *(undefined4 *)(FVar19.Data + uVar26 * 4);
            *(int *)(FVar19.Data + uVar26 * 4) = iVar11;
            local_170.UnvisitedBitMask = local_170.UnvisitedBitMask & ~local_170._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_170);
            iVar11 = local_170.CurrentBitIndex;
          } while (local_170.CurrentBitIndex < (local_170.Array)->NumBits);
        }
      }
    }
LAB_1440a8af7:
    pFVar28 = pFVar28 + 4;
    this = local_1b0;
    param_2 = local_1b8;
    iVar11 = local_a8.FirstFreeIndex;
  } while( true );
}

// RemoveElements @ 1440a8d70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FManagedArrayCollection::RemoveElements
          (FManagedArrayCollection *this,FName *param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_28,param_2,Default);
  uVar5 = 0;
  if (0 < param_2) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < local_28.ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = uVar5 + param_3;
      uVar5 = uVar5 + 1;
      *(int *)(local_28.AllocatorInstance.Data + lVar6) = iVar1;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < param_2);
  }
  (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_28,0x101);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// RemoveGroup @ 1440aa140

void __thiscall FManagedArrayCollection::RemoveGroup(FManagedArrayCollection *this,FName param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_e8;
  int local_e0;
  int aiStack_dc [3];
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  FName local_98;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined1 local_60 [32];
  
  local_d0 = &this->Map;
  local_c0 = &(this->Map).field_0x10;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  aiStack_dc[0] = 0;
  iVar3 = *(int *)&(this->Map).field_0x28;
  iStack_c8 = 0;
  uStack_c4 = 1;
  local_b0 = 0;
  iStack_b4 = iStack_c8;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Map).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)local_c0;
    }
    uVar10 = *puVar15;
    local_b0 = 0;
    iStack_c8 = 0;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_1440aa1ef;
      uVar10 = puVar15[lVar9 + 1];
    }
    uStack_c4 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_c4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_b4 = local_b0 + -1 + local_res20;
    if (iVar3 < iStack_b4) {
      iStack_b4 = iVar3;
    }
  }
LAB_1440aa1ef:
  puVar1 = &(this->Map).field_0x10;
  iStack_a8 = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
  uVar10 = *(uint *)&(this->Map).field_0x28;
  uStack_b8 = 0xffffffff;
  TStack_88.CurrentBitIndex = iStack_b4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_c4,iStack_c8);
  uVar16 = uVar10 & 0xffffffe0;
  iVar12 = (int)uVar10 >> 5;
  TStack_88._28_4_ = iStack_b4;
  TStack_88.BaseBitIndex = local_b0;
  uStack_68 = CONCAT44(uStack_a4,iStack_a8);
  local_res10 = param_1;
  iStack_ac = iStack_b4;
  local_90 = local_d0;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->Map).field_0x28;
  if (uVar10 != uVar4) {
    puVar14 = *(undefined1 **)&(this->Map).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1440aa2ef;
      uVar10 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_a0 = (int)lVar9;
    uVar10 = local_a0 + -1 + uVar16;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_1440aa2ef:
  while( true ) {
    pTVar7 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    iVar3 = local_e0;
    if (((TStack_88.CurrentBitIndex == uVar10) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar7 == &this->Map)) break;
    pFVar13 = (FScriptContainerElement *)
              (*(longlong *)pTVar7 + (longlong)TStack_88.CurrentBitIndex * 0x40);
    if (*(FName *)(pFVar13 + 8) == param_1) {
      if (((local_e8.Data <= pFVar13) && (pFVar13 < local_e8.Data + (longlong)aiStack_dc[0] * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_e0 == aiStack_dc[0]) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_e8,aiStack_dc);
      }
      lVar9 = (longlong)local_e0;
      local_e0 = local_e0 + 1;
      *(undefined8 *)(local_e8.Data + lVar9 * 8) = *(undefined8 *)pFVar13;
    }
    if (*(FName *)(pFVar13 + 0x14) == param_1) {
      aiStack_dc[1] = 0;
      aiStack_dc[2] = 0;
      *(undefined8 *)(pFVar13 + 0x14) = 0;
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  pFVar13 = local_e8.Data + (longlong)local_e0 * 8;
  FVar11.Data = local_e8.Data;
  while( true ) {
    if (local_e0 != iVar3) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (FVar11.Data == pFVar13) break;
    uVar5 = *(undefined8 *)FVar11.Data;
    local_60._0_8_ = uVar5;
    local_60._8_8_ = param_1;
    if (*(int *)&(this->Map).field_0x8 != *(int *)&(this->Map).field_0x34) {
      uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
      uVar10 = SUB84(uVar5,4) + uVar10;
      uVar16 = ::GetTypeHash(param_1.ComparisonIndex.Value);
      TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
      ::RemoveImpl<TTuple<FName,FName>_>
                ((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                  *)&this->Map,
                 param_1.Number + uVar10 * 0x40 + (uVar10 >> 2) + uVar16 + 0x9e3779b9 ^ uVar10,
                 (TTuple<FName,FName> *)local_60);
    }
    FVar11.Data = FVar11.Data + 8;
  }
  local_98 = param_1;
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    uVar10 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                         *)&this->GroupInfo,local_res10.Number + uVar10,&local_98);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  return;
}

// ReorderElements @ 1440adec0

void __thiscall
FManagedArrayCollection::ReorderElements
          (FManagedArrayCollection *this,FName param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar2;
  code *pcVar3;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  pTVar8 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                   *)&this->GroupInfo,param_1);
  if ((pTVar8 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar12 = *(int *)&pTVar8->field_0x8;
  if ((iVar12 != param_2->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupSize == NewOrder.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                         ,0x1db,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar13 = 0;
  local_res18[0] = -1;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_d8,local_res18,iVar12);
  uVar11 = 0;
  uVar14 = 0;
  uVar10 = uVar13;
  uVar18 = uVar13;
  if (0 < iVar12) {
    do {
      uVar7 = (uint)uVar10;
      uVar6 = uVar14;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = *(uint *)((param_2->AllocatorInstance).Data + uVar18 * 4);
      uVar17 = uVar14;
      if ((int)uVar6 < local_d8.ArrayNum) {
        uVar17 = ~uVar6 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar18 = uVar18 + 1;
      *(uint *)(local_d8.AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = uVar7;
      uVar10 = (ulonglong)(uVar7 + 1);
    } while ((longlong)uVar18 < (longlong)iVar12);
  }
  uVar6 = *(uint *)&(this->Map).field_0x28;
  puVar1 = &(this->Map).field_0x10;
  pTVar2 = &this->Map;
  uStack_bc = 1;
  uStack_ac = uVar14;
  if (uVar6 != 0) {
    puVar16 = *(uint **)&(this->Map).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar7 = *puVar16;
    uVar10 = uVar13;
    uVar11 = uVar14;
    while (uVar7 == 0) {
      iVar12 = (int)uVar13;
      uVar14 = (int)uVar10 + 0x20;
      uVar10 = (ulonglong)uVar14;
      uVar11 = iVar12 + 1;
      uVar13 = (ulonglong)uVar11;
      uStack_ac = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
      goto LAB_1440ae0bd;
      uVar7 = puVar16[(longlong)iVar12 + 1];
    }
    uStack_bc = -uVar7 & uVar7;
    uVar13 = (ulonglong)uStack_bc * 2 + 1;
    lVar9 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    uStack_ac = (uVar14 - 1) + local_res20;
    if ((int)uVar6 < (int)uStack_ac) {
      uStack_ac = uVar6;
    }
  }
LAB_1440ae0bd:
  uStack_a4 = local_4c;
  iStack_a0 = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
  uVar7 = *(uint *)&(this->Map).field_0x28;
  uStack_b0 = 0xffffffff;
  uVar17 = uVar7 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uStack_bc,uVar11);
  TStack_90.CurrentBitIndex = uStack_ac;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar7 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = uVar14;
  uStack_70 = CONCAT44(uStack_9c,iStack_a0);
  local_c8 = pTVar2;
  uStack_c0 = uVar11;
  local_b8 = puVar1;
  local_a8 = uVar14;
  local_98 = pTVar2;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar7 < 0) || ((int)uVar6 < (int)uVar7)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar14 = *(uint *)&(this->Map).field_0x28;
  if (uVar7 != uVar14) {
    puVar15 = *(undefined1 **)&(this->Map).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar7 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_1440ae1c0;
      uVar11 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar13 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar7 = (int)lVar9 + -1 + uVar17;
    if ((int)uVar14 < (int)uVar7) {
      uVar7 = uVar14;
    }
  }
LAB_1440ae1c0:
  while( true ) {
    pTVar4 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_90.CurrentBitIndex == uVar7) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar4 == pTVar2))
    break;
    lVar9 = (longlong)TStack_90.CurrentBitIndex * 0x40 + *(longlong *)pTVar4;
    if (*(FName *)(lVar9 + 0x14) == param_1) {
      FValueType::MakeUniqueForWrite((FValueType *)(lVar9 + 0x10));
      *(undefined1 *)(*(longlong *)(lVar9 + 0x30) + 8) = 1;
      (**(code **)(**(longlong **)(lVar9 + 0x30) + 0x18))(*(longlong **)(lVar9 + 0x30),&local_d8);
    }
    if (*(FName *)(lVar9 + 8) == param_1) {
      FValueType::MakeUniqueForWrite((FValueType *)(lVar9 + 0x10));
      *(undefined1 *)(*(longlong *)(lVar9 + 0x30) + 8) = 1;
      (**(code **)(**(longlong **)(lVar9 + 0x30) + 0x10))(*(longlong **)(lVar9 + 0x30),param_2);
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  return;
}

// Reserve @ 1440aea70

void __thiscall
FManagedArrayCollection::Reserve(FManagedArrayCollection *this,int param_1,FName param_2)

{
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar1;
  ulonglong uVar2;
  longlong *plVar3;
  code *pcVar4;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 *puVar21;
  uint uVar22;
  undefined1 local_res10 [8];
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  uint *puVar20;
  
  uVar7 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar15 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->GroupInfo).field_0x38;
    }
    iVar17 = *(int *)(puVar15 +
                     (ulonglong)
                     (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_2.Number + uVar7) * 4);
    if (iVar17 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar17 * 0x14) == param_2)
        goto LAB_1440aeb22;
        iVar17 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar17 * 0x14);
      } while (iVar17 != -1);
    }
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8864559100168503736>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                     ,0x1b8,"HasGroup(Group)");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1440aeb22:
  puVar18 = (uint *)0x0;
  uVar7 = 0;
  pTVar11 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                    *)&this->GroupInfo,param_2);
  puVar12 = (uint *)&pTVar11->field_0x8;
  if (pTVar11 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    puVar12 = puVar18;
  }
  uVar16 = uVar7;
  if (puVar12 != (uint *)0x0) {
    uVar16 = *puVar12;
  }
  if ((int)uVar16 < param_1) {
    pTVar11 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                      *)&this->GroupInfo,param_2);
    if ((pTVar11 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar16 = *(uint *)&(this->Map).field_0x28;
    puVar15 = &(this->Map).field_0x10;
    pTVar1 = &this->Map;
    uVar8 = 1;
    uVar19 = 0;
    uVar9 = uVar19;
    if (uVar16 != 0) {
      puVar12 = *(uint **)&(this->Map).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)puVar15;
      }
      uVar9 = *puVar12;
      puVar20 = puVar18;
      uVar19 = 0;
      uVar7 = 0;
      while (uVar9 == 0) {
        iVar17 = (int)puVar18;
        uVar19 = (int)puVar20 + 0x20;
        puVar20 = (uint *)(ulonglong)uVar19;
        uVar7 = iVar17 + 1;
        puVar18 = (uint *)(ulonglong)uVar7;
        uVar9 = uVar16;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar7)
        goto LAB_1440aec0d;
        uVar9 = puVar12[(longlong)iVar17 + 1];
      }
      uVar8 = -uVar9 & uVar9;
      uVar2 = (ulonglong)uVar8 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar9 = (uVar19 - 1) + (int)lVar13;
      if ((int)uVar16 < (int)uVar9) {
        uVar9 = uVar16;
      }
    }
LAB_1440aec0d:
    uVar10 = *(uint *)&(this->Map).field_0x28;
    uVar22 = uVar10 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar8,uVar7);
    TStack_60.CurrentBitIndex = uVar9;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar10 >> 5;
    TStack_60._28_4_ = local_9c;
    TStack_60.BaseBitIndex = uVar19;
    uStack_40 = CONCAT44(uStack_6c,*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34)
    ;
    local_res18 = pTVar1;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar15;
    if ((((int)uVar10 < 0) || ((int)uVar16 < (int)uVar10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar5 = local_res18;
    uVar7 = *(uint *)&(this->Map).field_0x28;
    if (uVar10 != uVar7) {
      puVar21 = *(undefined1 **)&(this->Map).field_0x20;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = puVar15;
      }
      uVar16 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar17 * 4);
      while (uVar16 == 0) {
        lVar13 = (longlong)iVar17;
        uVar22 = uVar22 + 0x20;
        iVar17 = iVar17 + 1;
        uVar10 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_1440aed10;
        uVar16 = *(uint *)(puVar21 + lVar13 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar10 = (int)lVar13 + -1 + uVar22;
      if ((int)uVar7 < (int)uVar10) {
        uVar10 = uVar7;
      }
    }
LAB_1440aed10:
    while( true ) {
      if (*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_60.CurrentBitIndex == uVar10) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar15)) &&
         (pTVar1 == pTVar5)) break;
      lVar13 = *(longlong *)pTVar1;
      lVar14 = (longlong)TStack_60.CurrentBitIndex * 0x40;
      if (*(FName *)(lVar14 + 8 + lVar13) == param_2) {
        iVar17 = (**(code **)(**(longlong **)(lVar14 + 0x30 + lVar13) + 0x68))();
        if (iVar17 < param_1) {
          FValueType::MakeUniqueForWrite((FValueType *)(lVar14 + lVar13 + 0x10));
          plVar3 = *(longlong **)(lVar14 + lVar13 + 0x30);
          (**(code **)(*plVar3 + 8))(plVar3,param_1);
        }
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// Resize @ 1440af8d0

void __thiscall
FManagedArrayCollection::Resize(FManagedArrayCollection *this,int param_1,FName param_2)

{
  TMap<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
  *this_00;
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 *puVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  uint *puVar18;
  
  this_00 = &this->GroupInfo;
  uVar5 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar13 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->GroupInfo).field_0x38;
    }
    iVar15 = *(int *)(puVar13 +
                     (ulonglong)
                     (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_2.Number + uVar5) * 4);
    if (iVar15 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar15 * 0x14) == param_2)
        goto LAB_1440af982;
        iVar15 = *(int *)(*(longlong *)&this_00->field_0x0 + 0xc + (longlong)iVar15 * 0x14);
      } while (iVar15 != -1);
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8864559100168503715>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                     ,0x1a3,"HasGroup(Group)");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1440af982:
  puVar16 = (uint *)0x0;
  uVar5 = 0;
  pTVar9 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                   *)this_00,param_2);
  puVar10 = (uint *)&pTVar9->field_0x8;
  if (pTVar9 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    puVar10 = puVar16;
  }
  uVar14 = uVar5;
  if (puVar10 != (uint *)0x0) {
    uVar14 = *puVar10;
  }
  if (uVar14 != param_1) {
    pTVar9 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                     *)this_00,param_2);
    puVar10 = (uint *)&pTVar9->field_0x8;
    if (pTVar9 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
      puVar10 = puVar16;
    }
    uVar14 = uVar5;
    if (puVar10 != (uint *)0x0) {
      uVar14 = *puVar10;
    }
    if (param_1 <= (int)uVar14) {
      local_res10[0] = 0;
      `FManagedArrayCollection::Resize'::__l2::<lambda_1>::operator()(local_res10);
    }
    pTVar9 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                     *)this_00,param_2);
    if ((pTVar9 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar14 = *(uint *)&(this->Map).field_0x28;
    puVar13 = &(this->Map).field_0x10;
    uVar6 = 1;
    uVar17 = 0;
    uVar7 = uVar17;
    if (uVar14 != 0) {
      puVar10 = *(uint **)&(this->Map).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)puVar13;
      }
      uVar7 = *puVar10;
      puVar18 = puVar16;
      uVar17 = 0;
      uVar5 = 0;
      while (uVar7 == 0) {
        iVar15 = (int)puVar16;
        uVar17 = (int)puVar18 + 0x20;
        puVar18 = (uint *)(ulonglong)uVar17;
        uVar5 = iVar15 + 1;
        puVar16 = (uint *)(ulonglong)uVar5;
        uVar7 = uVar14;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar5)
        goto LAB_1440afaad;
        uVar7 = puVar10[(longlong)iVar15 + 1];
      }
      uVar6 = -uVar7 & uVar7;
      uVar1 = (ulonglong)uVar6 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res18 = (int)lVar11;
      uVar7 = (uVar17 - 1) + local_res18;
      if ((int)uVar14 < (int)uVar7) {
        uVar7 = uVar14;
      }
    }
LAB_1440afaad:
    uVar8 = *(uint *)&(this->Map).field_0x28;
    TStack_98._padding_ = CONCAT44(uVar6,uVar5);
    uVar5 = uVar8 & 0xffffffe0;
    TStack_98.CurrentBitIndex = uVar7;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar8 >> 5;
    TStack_98._28_4_ = local_54;
    TStack_98.BaseBitIndex = uVar17;
    uStack_78 = CONCAT44(uStack_a4,*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34)
    ;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar13;
    if ((((int)uVar8 < 0) || ((int)uVar14 < (int)uVar8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar14 = *(uint *)&(this->Map).field_0x28;
    if (uVar8 != uVar14) {
      puVar19 = *(undefined1 **)&(this->Map).field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = puVar13;
      }
      uVar17 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
      while (uVar17 == 0) {
        lVar11 = (longlong)iVar15;
        uVar5 = uVar5 + 0x20;
        iVar15 = iVar15 + 1;
        uVar8 = uVar14;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_1440afbd1;
        uVar17 = *(uint *)(puVar19 + lVar11 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res20 = (int)lVar11;
      uVar8 = local_res20 + -1 + uVar5;
      if ((int)uVar14 < (int)uVar8) {
        uVar8 = uVar14;
      }
    }
LAB_1440afbd1:
    while( true ) {
      if (*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34 != (int)uStack_78) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_98.CurrentBitIndex == uVar8) &&
         (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar13)) break;
      lVar11 = *(longlong *)&this->Map;
      lVar12 = (longlong)TStack_98.CurrentBitIndex * 0x40;
      if (*(FName *)(lVar12 + 8 + lVar11) == param_2) {
        iVar15 = (**(code **)(**(longlong **)(lVar12 + 0x30 + lVar11) + 0x60))();
        if (iVar15 < param_1) {
          FValueType::MakeUniqueForWrite((FValueType *)(lVar12 + lVar11 + 0x10));
          puVar2 = *(undefined8 **)(lVar12 + lVar11 + 0x30);
          (**(code **)*puVar2)(puVar2,param_1);
        }
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
    pTVar9 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                     *)this_00,param_2);
    if ((pTVar9 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(int *)&pTVar9->field_0x8 = param_1;
  }
  return;
}

// Serialize @ 1440b0ec0

bool __thiscall FManagedArrayCollection::Serialize(FManagedArrayCollection *this,FArchive *param_1)

{
  int iVar1;
  FChaosArchiveContext *pFVar2;
  FArchiveProxy local_a8;
  FChaosArchiveContext *local_10;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xaf) {
      return false;
    }
  }
  FArchiveProxy::FArchiveProxy(&local_a8,param_1);
  local_a8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
  pFVar2 = ::operator_new(0x158);
  local_10 = (FChaosArchiveContext *)0x0;
  if (pFVar2 != (FChaosArchiveContext *)0x0) {
    local_10 = Chaos::FChaosArchiveContext::FChaosArchiveContext(pFVar2);
  }
  (**(code **)(this->_padding_ + 0x40))(this,&local_a8);
  pFVar2 = local_10;
  if (local_10 != (FChaosArchiveContext *)0x0) {
    Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_10);
    ::operator_delete(pFVar2,0x158);
  }
  FArchiveProxy::~FArchiveProxy(&local_a8);
  return true;
}

// Serialize @ 1440b0fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FManagedArrayCollection::Serialize(FManagedArrayCollection *this,FChaosArchive *param_1)

{
  undefined1 *puVar1;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *pTVar2;
  FName *pFVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  *pTVar7;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  *pTVar8;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  *this_00;
  FManagedArrayCollection *pFVar9;
  FManagedArrayCollection *this_01;
  longlong *plVar10;
  bool bVar11;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar12;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar14;
  byte bVar15;
  longlong lVar16;
  FValueType *pFVar17;
  int iVar18;
  int iVar19;
  ForAnyElementType FVar20;
  FValueType *pFVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  undefined1 *puVar26;
  FValueType *pFVar27;
  uint uVar28;
  uint uVar29;
  TBitArray<FDefaultBitArrayAllocator> *pTVar30;
  TTuple<FName,FName> *pTVar31;
  undefined1 auStack_448 [32];
  TTuple<FName,FName> *local_428;
  TTuple<FName,FName> *local_420;
  longlong local_418;
  longlong local_410;
  undefined8 local_408;
  undefined1 local_3f8;
  undefined1 local_3f7;
  undefined1 local_3f6;
  undefined1 local_3f5;
  undefined1 local_3f4 [4];
  ForAnyElementType local_3f0;
  undefined8 local_3e8;
  undefined1 local_3e0 [8];
  ulonglong local_3d8;
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *local_3d0;
  uint uStack_3c8;
  uint uStack_3c4;
  TBitArray<FDefaultBitArrayAllocator> *local_3c0;
  undefined4 uStack_3b8;
  uint uStack_3b4;
  uint local_3b0;
  undefined4 uStack_3ac;
  int iStack_3a8;
  undefined4 uStack_3a4;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  *local_3a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_398;
  undefined8 uStack_378;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  *local_370;
  TArray<FName,TSizedDefaultAllocator<32>_> local_368;
  FManagedArrayCollection *local_358;
  undefined1 local_350 [12];
  uint uStack_344;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_340;
  undefined8 uStack_338;
  longlong lStack_330;
  int local_328;
  undefined4 uStack_324;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_320;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_300;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2e0;
  TPairInitializer<FName_const_&,FManagedArrayCollection::FGroupInfo_const_&> local_2c0;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  undefined1 local_2a4 [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_290;
  int iStack_270;
  undefined4 uStack_26c;
  longlong *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  undefined8 uStack_240;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_230;
  undefined8 uStack_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  undefined1 *local_1f0;
  TRangedForIterator local_1e8;
  undefined4 local_19c;
  undefined4 local_17c;
  undefined4 local_15c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_158;
  undefined1 local_138 [32];
  uint *local_118;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  undefined1 local_e8 [32];
  undefined8 local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollectionValueTypeWrapper>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollectionValueTypeWrapper,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_448;
  local_358 = this;
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  ::operator<<((FArchive *)param_1,&this->Version);
  if ((param_1->_padding_ & 0x4000000) == 0) {
    if ((param_1->_padding_ & 1) == 0) {
      TSetPrivateFriend::
      Serialize<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                ((FArchive *)param_1,
                 (TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                  *)&this->GroupInfo);
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._0_8_ = 0;
      puVar1 = &(this->Map).field_0x10;
      local_98.Elements._8_8_ = 0;
      pTVar2 = &this->Map;
      local_98.Elements._32_8_ = 0;
      local_98.Elements._40_4_ = 0;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      local_98.Elements._48_4_ = 0xffffffff;
      local_2e0._padding_._0_4_ = 0;
      local_2e0._padding_._4_4_ = 1;
      local_2e0.UnvisitedBitMask = 0xffffffff;
      local_2e0.CurrentBitIndex = 0;
      local_2e0.BaseBitIndex = 0;
      local_2e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if (*(int *)&(this->Map).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2e0);
      }
      TStack_398._padding_ = CONCAT44(local_2e0._padding_._4_4_,(undefined4)local_2e0._padding_);
      TStack_398._16_8_ = CONCAT44(local_2e0.CurrentBitIndex,local_2e0.UnvisitedBitMask);
      TStack_398._24_8_ = CONCAT44(local_2e0._28_4_,local_2e0.BaseBitIndex);
      uStack_378._0_4_ = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
      TStack_398.Array = local_2e0.Array;
      pTStack_340 = local_2e0.Array;
      uStack_324 = uStack_378._4_4_;
      local_3a0 = (TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)pTVar2;
      local_350._0_8_ = pTVar2;
      unique0x1000193a = TStack_398._padding_;
      uStack_338 = TStack_398._16_8_;
      lStack_330 = TStack_398._24_8_;
      local_328 = (int)uStack_378;
      pTVar14 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_158,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                           *(int *)&(this->Map).field_0x28);
      TStack_398._padding_ = pTVar14->_padding_;
      TStack_398.Array = pTVar14->Array;
      TStack_398.UnvisitedBitMask = pTVar14->UnvisitedBitMask;
      TStack_398.CurrentBitIndex = pTVar14->CurrentBitIndex;
      TStack_398._24_8_ = *(undefined8 *)&pTVar14->BaseBitIndex;
      uStack_378._0_4_ = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
      local_1e8.InitialNum = (int)uStack_378;
      local_1e8._44_4_ = uStack_378._4_4_;
      local_3a0 = (TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)pTVar2;
      local_1e8._padding_ = (longlong)pTVar2;
      local_1e8._padding_ = TStack_398._padding_;
      local_1e8._padding_ = (longlong)TStack_398.Array;
      local_1e8._padding_ = TStack_398._16_8_;
      local_1e8._padding_ = TStack_398._24_8_;
      bVar11 = TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_350,&local_1e8);
      if (bVar11) {
        do {
          lVar16 = *(longlong *)local_350._0_8_ + (longlong)uStack_338._4_4_ * 0x40;
          if (*(char *)(lVar16 + 0x1c) != '\0') {
            local_1f0 = local_2a4 + 4;
            local_2a4._4_8_ = lVar16 + 0x10;
            local_1f8 = lVar16;
            TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollectionValueTypeWrapper>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollectionValueTypeWrapper,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<TTuple<FName,FName>_&,FManagedArrayCollectionValueTypeWrapper_&&>_>
                      (&local_98,
                       (TPairInitializer<TTuple<FName,FName>_&,FManagedArrayCollectionValueTypeWrapper_&&>
                        *)local_2a4,(bool *)&local_1f8);
          }
          uStack_338 = CONCAT44(uStack_338._4_4_,(uint)uStack_338 & ~uStack_344);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_350 + 8));
          bVar11 = TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=((TRangedForIterator *)local_350,&local_1e8);
        } while (bVar11);
      }
      TSetPrivateFriend::
      Serialize<TTuple<TTuple<FName,FName>,FManagedArrayCollectionValueTypeWrapper>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollectionValueTypeWrapper,0>,FDefaultSetAllocator>
                ((FArchive *)param_1,&local_98);
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollectionValueTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollectionValueTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
    }
    else {
      pFVar21 = (FValueType *)0x0;
      uVar22 = 0;
      local_e8._0_8_ = 0;
      local_e8._8_8_ = 0;
      local_c8 = 0;
      uVar23 = 0;
      local_c0 = 0;
      local_b4 = 0;
      local_a8 = (ForElementType<FSetElementId>)0x0;
      local_a0 = 0;
      local_bc = 0x80;
      local_b8 = 0xffffffff;
      TSetPrivateFriend::
      Serialize<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                ((FArchive *)param_1,
                 (TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                  *)local_e8);
      local_300.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
      local_300._padding_._0_4_ = 0;
      local_3d8 = 1;
      local_300._padding_._4_4_ = 1;
      local_300.UnvisitedBitMask = 0xffffffff;
      local_300.CurrentBitIndex = 0;
      local_300.BaseBitIndex = 0;
      if (local_c0 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_300);
      }
      uVar24 = local_c0;
      unique0x10000d55 = CONCAT44(local_300._padding_._4_4_,(undefined4)local_300._padding_);
      local_350._0_8_ = local_e8;
      uStack_338 = CONCAT44(local_300.CurrentBitIndex,local_300.UnvisitedBitMask);
      lStack_330 = CONCAT44(local_300._28_4_,local_300.BaseBitIndex);
      bVar15 = (byte)local_c0 & 0x1f;
      local_328 = local_e8._8_4_ - local_b4;
      local_320._padding_._0_4_ = (int)local_c0 >> 5;
      local_320._padding_._4_4_ = 1 << bVar15;
      pTVar30 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
      local_320.UnvisitedBitMask = -1 << bVar15;
      pTStack_340 = local_300.Array;
      local_320.BaseBitIndex = local_c0 & 0xffffffe0;
      local_320.CurrentBitIndex = local_c0;
      TStack_290.Array = local_300.Array;
      iStack_270 = local_e8._8_4_ - local_b4;
      uStack_26c = uStack_324;
      local_320.Array = pTVar30;
      local_2a4._12_8_ = local_350._0_8_;
      TStack_290._padding_ = unique0x10000d55;
      TStack_290._16_8_ = uStack_338;
      TStack_290._24_8_ = lStack_330;
      if (((int)local_c0 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar24 != local_c0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_320);
        pTVar30 = local_320.Array;
        uVar24 = local_320.CurrentBitIndex;
      }
      while( true ) {
        uVar5 = local_2a4._12_8_;
        if ((int)*(longlong *)(local_2a4._12_8_ + 8) - *(int *)(local_2a4._12_8_ + 0x34) !=
            iStack_270) {
          local_3f8 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FManagedArrayCollection::FGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3f8);
        }
        if (((TStack_290.CurrentBitIndex == uVar24) && (TStack_290.Array == pTVar30)) &&
           ((undefined1 *)uVar5 == local_e8)) break;
        local_208 = *(longlong *)uVar5 + (longlong)TStack_290.CurrentBitIndex * 0x14;
        local_200 = local_208 + 8;
        TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FManagedArrayCollection::FGroupInfo_const_&>_>
                  ((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                    *)&this->GroupInfo,&local_2c0,(bool *)&local_208);
        TStack_290.UnvisitedBitMask = TStack_290.UnvisitedBitMask & ~TStack_290._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_290);
      }
      local_138._0_8_ = 0;
      local_138._8_8_ = 0;
      local_118 = (uint *)0x0;
      local_110 = 0;
      local_10c = 0x80;
      local_108 = 0xffffffff;
      local_104 = 0;
      local_f8 = (ForElementType<FSetElementId>)0x0;
      local_f0 = 0;
      TSetPrivateFriend::
      Serialize<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ((FArchive *)param_1,
                 (TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                  *)local_138);
      uVar28 = local_110;
      uVar24 = 0;
      uStack_3c4 = (uint)local_3d8;
      uStack_3b4 = uVar24;
      local_3b0 = uVar24;
      if (local_110 != 0) {
        puVar25 = (uint *)(local_138 + 0x10);
        if (local_118 != (uint *)0x0) {
          puVar25 = local_118;
        }
        uVar29 = *puVar25;
        pFVar17 = pFVar21;
        pFVar27 = pFVar21;
        local_3b0 = uVar22;
        uVar23 = uVar22;
        while (uVar29 == 0) {
          iVar18 = (int)pFVar17;
          local_3b0 = (int)pFVar27 + 0x20;
          pFVar27 = (FValueType *)(ulonglong)local_3b0;
          uVar23 = iVar18 + 1;
          pFVar17 = (FValueType *)(ulonglong)uVar23;
          uStack_3b4 = local_110;
          if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar23)
          goto LAB_1440b1323;
          uVar29 = puVar25[(longlong)iVar18 + 1];
        }
        uStack_3c4 = -uVar29 & uVar29;
        uVar4 = (ulonglong)uStack_3c4 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_2c0.Key._4_4_ = (int)lVar16;
        uStack_3b4 = local_2c0.Key._4_4_ + -1 + local_3b0;
        if ((int)local_110 < (int)uStack_3b4) {
          uStack_3b4 = local_110;
        }
      }
LAB_1440b1323:
      local_3d0 = (TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
                   *)local_138;
      uStack_3ac = local_19c;
      local_3c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
      uVar29 = local_110 & 0xffffffe0;
      iStack_3a8 = local_138._8_4_ - local_104;
      uStack_3b8 = 0xffffffff;
      TStack_260.CurrentBitIndex = uStack_3b4;
      TStack_260.UnvisitedBitMask = 0xffffffff;
      TStack_260._padding_ = CONCAT44(uStack_3c4,uVar23);
      iVar18 = (int)local_110 >> 5;
      TStack_260._28_4_ = local_19c;
      TStack_260.BaseBitIndex = local_3b0;
      uStack_240 = CONCAT44(uStack_3a4,iStack_3a8);
      bVar15 = (byte)local_110;
      uStack_3c8 = uVar23;
      local_268 = (longlong *)local_3d0;
      TStack_260.Array = local_3c0;
      if (((int)local_110 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar28 != local_110) {
        puVar25 = (uint *)(local_138 + 0x10);
        if (local_118 != (uint *)0x0) {
          puVar25 = local_118;
        }
        uVar23 = -1 << (bVar15 & 0x1f) & puVar25[iVar18];
        while (uVar23 == 0) {
          lVar16 = (longlong)iVar18;
          uVar29 = uVar29 + 0x20;
          iVar18 = iVar18 + 1;
          uVar28 = local_110;
          if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_1440b1450;
          uVar23 = puVar25[lVar16 + 1];
        }
        uVar4 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_2c0.Value._0_4_ = (int)lVar16;
        uVar28 = (int)local_2c0.Value + -1 + uVar29;
        if ((int)local_110 < (int)uVar28) {
          uVar28 = local_110;
        }
      }
LAB_1440b1450:
      while( true ) {
        plVar10 = local_268;
        if ((int)local_268[1] - *(int *)((longlong)local_268 + 0x34) != (int)uStack_240) {
          local_3f7 = 0;
          `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3f7);
        }
        if (((TStack_260.CurrentBitIndex == uVar28) &&
            (TStack_260.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10))) &&
           (plVar10 == (longlong *)local_138)) break;
        pTVar31 = (TTuple<FName,FName> *)((longlong)TStack_260.CurrentBitIndex * 0x40 + *plVar10);
        pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                          *)&this->Map,pTVar31);
        pFVar17 = (FValueType *)&pTVar12->field_0x10;
        if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
          pFVar17 = pFVar21;
        }
        if (pFVar17 == (FValueType *)0x0) {
          TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
          ::Emplace<TTuple<FName,FName>_const_&,FManagedArrayCollection::FValueType>
                    ((TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
                      *)&this->Map,pTVar31,(FValueType *)(pTVar31 + 1));
        }
        else if (pFVar17->ArrayType == *(EManagedArrayType *)(pTVar31 + 1)) {
          FValueType::MakeUniqueForWrite(pFVar17);
          if ((pFVar17->ArrayType != *(EManagedArrayType *)(pTVar31 + 1)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayType == Other.ArrayType",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                                  ,0x423,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (**(code **)(pFVar17->ManagedArray->_padding_ + 0x50))
                    (pFVar17->ManagedArray,*(undefined8 *)(pTVar31 + 3));
        }
        else {
          FValueType::MakeUniqueForWrite(pFVar17);
          if ((pFVar17->ArrayType == *(EManagedArrayType *)(pTVar31 + 1)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayType != Other.ArrayType",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                                  ,0x42a,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (**(code **)(pFVar17->ManagedArray->_padding_ + 0x28))
                    (pFVar17->ManagedArray,*(undefined8 *)(pTVar31 + 3));
        }
        TStack_260.UnvisitedBitMask = TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
      }
      local_3d0 = &this->Map;
      puVar1 = &(this->Map).field_0x10;
      local_3f0.Data = (FScriptContainerElement *)0x0;
      local_3e8 = 0;
      uVar23 = *(uint *)&(this->Map).field_0x28;
      uStack_3c4 = (uint)local_3d8;
      uStack_3b4 = uVar24;
      local_3b0 = uVar24;
      if (uVar23 != 0) {
        puVar25 = *(uint **)&(this->Map).field_0x20;
        if (puVar25 == (uint *)0x0) {
          puVar25 = (uint *)puVar1;
        }
        uVar28 = *puVar25;
        pFVar17 = pFVar21;
        pFVar27 = pFVar21;
        local_3b0 = uVar22;
        uVar24 = uVar22;
        while (uVar28 == 0) {
          iVar18 = (int)pFVar17;
          local_3b0 = (int)pFVar27 + 0x20;
          pFVar27 = (FValueType *)(ulonglong)local_3b0;
          uVar24 = iVar18 + 1;
          pFVar17 = (FValueType *)(ulonglong)uVar24;
          uStack_3b4 = uVar23;
          if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
          goto LAB_1440b1630;
          uVar28 = puVar25[(longlong)iVar18 + 1];
        }
        uStack_3c4 = -uVar28 & uVar28;
        uVar4 = (ulonglong)uStack_3c4 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_2c0.Value._4_4_ = (int)lVar16;
        uStack_3b4 = (local_3b0 - 1) + local_2c0.Value._4_4_;
        if ((int)uVar23 < (int)uStack_3b4) {
          uStack_3b4 = uVar23;
        }
      }
LAB_1440b1630:
      uVar22 = *(uint *)&(this->Map).field_0x28;
      uStack_3ac = local_17c;
      iStack_3a8 = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
      uVar28 = uVar22 & 0xffffffe0;
      TStack_230._padding_ = CONCAT44(uStack_3c4,uVar24);
      uStack_3b8 = 0xffffffff;
      TStack_230.CurrentBitIndex = uStack_3b4;
      TStack_230.UnvisitedBitMask = 0xffffffff;
      iVar18 = (int)uVar22 >> 5;
      TStack_230._28_4_ = local_17c;
      TStack_230.BaseBitIndex = local_3b0;
      uStack_210 = CONCAT44(uStack_3a4,iStack_3a8);
      uStack_3c8 = uVar24;
      local_3c0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      local_370 = (TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)local_3d0;
      local_238 = (TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)local_3d0;
      TStack_230.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar22 < 0) || ((int)uVar23 < (int)uVar22)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar8 = local_370;
      uVar23 = *(uint *)&(this->Map).field_0x28;
      if (uVar22 != uVar23) {
        puVar26 = *(undefined1 **)&(this->Map).field_0x20;
        if (puVar26 == (undefined1 *)0x0) {
          puVar26 = puVar1;
        }
        uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar18 * 4);
        while (uVar22 == 0) {
          lVar16 = (longlong)iVar18;
          uVar28 = uVar28 + 0x20;
          iVar18 = iVar18 + 1;
          uVar22 = uVar23;
          if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_1440b1750;
          uVar22 = *(uint *)(puVar26 + lVar16 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_2b0 = (int)lVar16;
        uVar22 = (uVar28 - 1) + local_2b0;
        if ((int)uVar23 < (int)uVar22) {
          uVar22 = uVar23;
        }
      }
LAB_1440b1750:
      while( true ) {
        pTVar7 = local_238;
        if (*(int *)&(local_238->Elements).field_0x8 - *(int *)&(local_238->Elements).field_0x34 !=
            (int)uStack_210) {
          local_3f6 = 0;
          `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3f6);
        }
        pFVar9 = local_358;
        this_00 = local_370;
        if (((TStack_230.CurrentBitIndex == uVar22) &&
            (TStack_230.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar7 == pTVar8)) break;
        pTVar31 = (TTuple<FName,FName> *)
                  (*(longlong *)&pTVar7->Elements + (longlong)TStack_230.CurrentBitIndex * 0x40);
        if (pTVar31[1].field_0xd == '\0') {
          pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                            *)local_138,pTVar31);
          pFVar17 = (FValueType *)&pTVar12->field_0x10;
          if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pFVar17 = pFVar21;
          }
          if (pFVar17 == (FValueType *)0x0) {
            if (local_3f0.Data <= pTVar31) {
              if (pTVar31 < (TTuple<FName,FName> *)
                            (local_3f0.Data + (longlong)local_3e8._4_4_ * 0x10)) {
                local_410 = (longlong)(int)local_3e8;
                local_408 = 0x10;
                local_420 = (TTuple<FName,FName> *)local_3f0.Data;
                local_428 = pTVar31;
                local_418 = (longlong)local_3e8._4_4_;
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar11) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
            }
            iVar18 = (int)local_3e8;
            if ((int)local_3e8 == local_3e8._4_4_) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&local_3f0,(int *)((longlong)&local_3e8 + 4));
            }
            local_3e8 = CONCAT44(local_3e8._4_4_,iVar18 + 1);
            uVar5 = *(undefined8 *)&pTVar31->field_0x8;
            *(undefined8 *)(local_3f0.Data + (longlong)iVar18 * 0x10) = *(undefined8 *)pTVar31;
            *(undefined8 *)(local_3f0.Data + (longlong)iVar18 * 0x10 + 8) = uVar5;
          }
        }
        TStack_230.UnvisitedBitMask = TStack_230.UnvisitedBitMask & ~TStack_230._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_230);
      }
      iVar18 = (int)local_3e8;
      pTVar31 = (TTuple<FName,FName> *)(local_3f0.Data + (longlong)(int)local_3e8 * 0x10);
      FVar20.Data = local_3f0.Data;
      while( true ) {
        if ((int)local_3e8 != iVar18) {
          local_3f5 = 0;
          `TCheckedPointerIterator<TTuple<FName,FName>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_3f5);
        }
        if ((TTuple<FName,FName> *)FVar20.Data == pTVar31) break;
        if (*(int *)&(pFVar9->Map).field_0x8 != *(int *)&(pFVar9->Map).field_0x34) {
          uVar5 = *(undefined8 *)FVar20.Data;
          uVar23 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
          uVar23 = uVar23 + (int)((ulonglong)uVar5 >> 0x20);
          uVar5 = *(undefined8 *)&((TTuple<FName,FName> *)FVar20.Data)->field_0x8;
          uVar22 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
          TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
          ::RemoveImpl<TTuple<FName,FName>_>
                    (this_00,uVar23 * 0x40 + (int)((ulonglong)uVar5 >> 0x20) +
                             (uVar23 >> 2) + 0x9e3779b9 + uVar22 ^ uVar23,
                     (TTuple<FName,FName> *)FVar20.Data);
        }
        FVar20.Data = FVar20.Data + 0x10;
      }
      local_3d0 = &pFVar9->Map;
      iVar18 = *(int *)&(pFVar9->Map).field_0x28;
      puVar1 = &(pFVar9->Map).field_0x10;
      uStack_3c8 = 0;
      local_3b0 = 0;
      uStack_3b4 = uStack_3c8;
      if (iVar18 != 0) {
        puVar25 = *(uint **)&(pFVar9->Map).field_0x20;
        if (puVar25 == (uint *)0x0) {
          puVar25 = (uint *)puVar1;
        }
        uVar23 = *puVar25;
        local_3b0 = 0;
        uStack_3c8 = 0;
        while (uVar23 == 0) {
          lVar16 = (longlong)(int)uStack_3c8;
          local_3b0 = local_3b0 + 0x20;
          uStack_3c8 = uStack_3c8 + 1;
          uStack_3b4 = iVar18;
          if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_3c8)
          goto LAB_1440b19a3;
          uVar23 = puVar25[lVar16 + 1];
        }
        local_3d8 = (ulonglong)(-uVar23 & uVar23);
        uVar4 = local_3d8 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_2ac = (int)lVar16;
        uStack_3b4 = local_2ac + -1 + local_3b0;
        if (iVar18 < (int)uStack_3b4) {
          uStack_3b4 = iVar18;
        }
      }
LAB_1440b19a3:
      uVar23 = *(uint *)&(pFVar9->Map).field_0x28;
      uStack_3c4 = (uint)local_3d8;
      uStack_3ac = local_15c;
      iStack_3a8 = *(int *)&(pFVar9->Map).field_0x8 - *(int *)&(pFVar9->Map).field_0x34;
      uVar24 = uVar23 & 0xffffffe0;
      uStack_3b8 = 0xffffffff;
      uVar22 = -1 << ((byte)uVar23 & 0x1f);
      TStack_398._padding_ = CONCAT44(uStack_3c4,uStack_3c8);
      TStack_398.CurrentBitIndex = uStack_3b4;
      TStack_398.UnvisitedBitMask = 0xffffffff;
      iVar19 = (int)uVar23 >> 5;
      local_3d8 = CONCAT44(local_3d8._4_4_,uVar22);
      TStack_398._28_4_ = local_15c;
      TStack_398.BaseBitIndex = local_3b0;
      uStack_378 = CONCAT44(uStack_3a4,iStack_3a8);
      local_3c0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      local_3a0 = (TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)local_3d0;
      TStack_398.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if (((int)uVar23 < 0) || (iVar18 < (int)uVar23)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar22 = (uint)local_3d8;
      }
      pTVar8 = local_370;
      uVar28 = *(uint *)&(pFVar9->Map).field_0x28;
      if (uVar23 != uVar28) {
        puVar26 = *(undefined1 **)&(pFVar9->Map).field_0x20;
        if (puVar26 == (undefined1 *)0x0) {
          puVar26 = puVar1;
        }
        uVar22 = uVar22 & *(uint *)(puVar26 + (longlong)iVar19 * 4);
        while (uVar22 == 0) {
          lVar16 = (longlong)iVar19;
          uVar24 = uVar24 + 0x20;
          iVar19 = iVar19 + 1;
          uVar23 = uVar28;
          if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
          goto LAB_1440b1ac3;
          uVar22 = *(uint *)(puVar26 + lVar16 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_2a8 = (int)lVar16;
        uVar23 = local_2a8 + -1 + uVar24;
        if ((int)uVar28 < (int)uVar23) {
          uVar23 = uVar28;
        }
      }
LAB_1440b1ac3:
      while( true ) {
        pTVar7 = local_3a0;
        if (*(int *)&(local_3a0->Elements).field_0x8 - *(int *)&(local_3a0->Elements).field_0x34 !=
            (int)uStack_378) {
          local_3f4[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3f4);
        }
        this_01 = local_358;
        if (((TStack_398.CurrentBitIndex == uVar23) &&
            (TStack_398.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar7 == pTVar8)) break;
        lVar16 = (longlong)TStack_398.CurrentBitIndex * 0x40 + *(longlong *)&pTVar7->Elements;
        pTVar13 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                          *)&pFVar9->GroupInfo,*(FName *)(lVar16 + 8));
        if ((pTVar13 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar18 = *(int *)&pTVar13->field_0x8;
        iVar19 = (**(code **)(**(longlong **)(lVar16 + 0x30) + 0x60))();
        if ((iVar18 != iVar19) &&
           (iVar19 = (**(code **)(**(longlong **)(lVar16 + 0x30) + 0x60))(), iVar19 < iVar18)) {
          FValueType::MakeUniqueForWrite((FValueType *)(lVar16 + 0x10));
          (**(code **)**(undefined8 **)(lVar16 + 0x30))(*(undefined8 **)(lVar16 + 0x30),iVar18);
        }
        TStack_398.UnvisitedBitMask = TStack_398.UnvisitedBitMask & ~TStack_398._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_398);
      }
      local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_368.ArrayNum = 0;
      local_368.ArrayMax = 0;
      if (*(int *)&(pFVar9->GroupInfo).field_0x8 != *(int *)&(pFVar9->GroupInfo).field_0x34) {
        TMapBase<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
        ::GetKeys<TSizedDefaultAllocator<32>_>
                  ((TMapBase<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
                    *)&pFVar9->GroupInfo,&local_368);
      }
      iVar18 = local_368.ArrayNum;
      pFVar3 = (FName *)(local_368.AllocatorInstance.Data + (longlong)local_368.ArrayNum * 8);
      FVar20.Data = local_368.AllocatorInstance.Data;
      while( true ) {
        if (local_368.ArrayNum != iVar18) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_3e0);
        }
        if ((FName *)FVar20.Data == pFVar3) break;
        bVar11 = HasAttribute(this_01,GuidName,*(FName *)FVar20.Data);
        if (bVar11) {
          RemoveAttribute(this_01,GuidName,*(FName *)FVar20.Data);
        }
        FVar20.Data = FVar20.Data + 8;
      }
      if ((FName *)local_368.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_368.AllocatorInstance.Data);
      }
      if ((TTuple<FName,FName> *)local_3f0.Data != (TTuple<FName,FName> *)0x0) {
        FMemory::Free(local_3f0.Data);
      }
      local_f0 = 0;
      if (local_f8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_f8);
      }
      TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_138);
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FManagedArrayCollection::FGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FManagedArrayCollection::FGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FManagedArrayCollection::FGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
    }
  }
  else {
    TSetPrivateFriend::
    Serialize<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
              ((FArchive *)param_1,
               (TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                *)&this->GroupInfo);
    TSetPrivateFriend::
    Serialize<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ((FArchive *)param_1,
               (TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                *)&this->Map);
  }
  return;
}

// SetDefaults @ 1440b25e0

void __thiscall
FManagedArrayCollection::SetDefaults
          (FManagedArrayCollection *this,FName param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->Map).field_0x28;
  puVar1 = &(this->Map).field_0x10;
  iVar13 = 0;
  uVar6 = 1;
  iVar10 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Map).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar13;
      iVar10 = iVar10 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1440b268e;
      uVar9 = puVar12[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = iVar10 + -1 + (int)lVar8;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1440b268e:
  uVar9 = *(uint *)&(this->Map).field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar6,iVar13);
  TStack_68.CurrentBitIndex = iVar7;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar9 >> 5;
  TStack_68._28_4_ = iVar7;
  TStack_68.BaseBitIndex = iVar10;
  uStack_48 = CONCAT44(uStack_74,*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Map).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(this->Map).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar13 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1440b2790;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_1440b2790:
  while( true ) {
    if (*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar9) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = (longlong)TStack_68.CurrentBitIndex * 0x40 + *(longlong *)&this->Map;
    if (*(FName *)(lVar8 + 8) == param_1) {
      FValueType::MakeUniqueForWrite((FValueType *)(lVar8 + 0x10));
      *(undefined1 *)(*(longlong *)(lVar8 + 0x30) + 8) = 1;
      (**(code **)(**(longlong **)(lVar8 + 0x30) + 0x38))
                (*(longlong **)(lVar8 + 0x30),param_2,param_3,*(longlong *)(lVar8 + 0x14) != 0);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// SetDependency @ 1440b2830

void __thiscall
FManagedArrayCollection::SetDependency
          (FManagedArrayCollection *this,FName param_1,FName param_2,FName param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FName local_18;
  FName local_10;
  
  bVar2 = HasAttribute(this,param_1,param_2);
  if ((!bVar2) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8864559100168503797>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                         ,0x1f5,"HasAttribute(Name, Group)"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_18 = param_1;
  local_10 = param_2;
  if ((!param_4) && (bVar2 = IsConnected(this,param_3,param_2), bVar2)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8864559100168503799>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\ManagedArrayCollection.cpp"
                       ,0x1f7,"bAllowCircularDependency || !IsConnected(DependencyGroup, Group)");
    if (!bVar2) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&this->Map,(TTuple<FName,FName> *)&local_18);
  if ((pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(uint *)&pTVar3->field_0x14 = param_3.ComparisonIndex.Value;
  *(uint *)&pTVar3->field_0x18 = param_3.Number;
  return;
}

// SyncGroupSizeFrom @ 1440b62f0

void __thiscall
FManagedArrayCollection::SyncGroupSizeFrom
          (FManagedArrayCollection *this,FManagedArrayCollection *param_1,FName param_2,
          FName param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar5;
  undefined1 *puVar6;
  
  uVar3 = ::GetTypeHash(param_3.ComparisonIndex.Value);
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    puVar6 = *(undefined1 **)&(this->GroupInfo).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->GroupInfo).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->GroupInfo).field_0x48 - 1U & param_3.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GroupInfo + (longlong)iVar4 * 0x14) == param_3)
        goto LAB_1440b6380;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_3);
LAB_1440b6380:
  pTVar5 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                   *)&param_1->GroupInfo,param_2);
  if (pTVar5 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Resize(this,*(int *)&pTVar5->field_0x8,param_3);
  return;
}

// SyncGroupSizeFrom @ 1440b63f0

void __thiscall
FManagedArrayCollection::SyncGroupSizeFrom
          (FManagedArrayCollection *this,FManagedArrayCollection *param_1,FName param_2)

{
  SyncGroupSizeFrom(this,param_1,param_2,param_2);
  return;
}

// ToString @ 1440b65c0

FString * __thiscall
FManagedArrayCollection::ToString(FManagedArrayCollection *this,FString *__return_storage_ptr__)

{
  FName *pFVar1;
  code *pcVar2;
  FName *pFVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  FString *pFVar7;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
  *this_00;
  ForAnyElementType FVar13;
  int iVar14;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  FName local_208;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_200;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1f0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1e0;
  FName *local_1d0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1c8;
  FString local_1b8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1a8;
  FName local_198;
  TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
  *local_190;
  FName *local_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FName local_140;
  FName local_138;
  FStringFormatArg local_130;
  FStringFormatArg local_108;
  FStringFormatArg local_e8;
  FStringFormatArg local_c8;
  FStringFormatArg local_a8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar6 = GetAllocatedSize(this);
  pFVar7 = ::FString::FormatAsNumber(&local_88,(int)uVar6);
  FStringFormatArg::FStringFormatArg(&local_130,pFVar7);
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_1e0.AllocatorInstance,1,&local_1e0.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_1e0.AllocatorInstance.Data,&local_130,1);
  if (local_130.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.StringValue.Data.AllocatorInstance.Data);
  }
  ::FString::FormatImpl(&local_180,L"All attributes [{0} bytes]\n",&local_1e0);
  iVar14 = local_180.Data.ArrayNum + -1;
  if (local_180.Data.ArrayNum == 0) {
    iVar14 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_180.Data.AllocatorInstance.Data,iVar14);
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  this_00 = (TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
             *)&this->GroupInfo;
  local_1d0 = (FName *)0x0;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  local_190 = this_00;
  if (*(int *)&(this->GroupInfo).field_0x8 != *(int *)&(this->GroupInfo).field_0x34) {
    TMapBase<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,FManagedArrayCollection::FGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>_>
                *)this_00,&local_1c8);
  }
  uVar11 = (ulonglong)local_1c8.ArrayNum;
  local_188 = (FName *)(local_1c8.AllocatorInstance.Data + uVar11 * 8);
  local_res20 = local_1c8.ArrayNum;
  local_1d0 = (FName *)local_1c8.AllocatorInstance.Data;
  while( true ) {
    pFVar3 = local_188;
    pFVar1 = local_1d0;
    puVar12 = (uint *)0x0;
    if (local_1c8.ArrayNum != (uint)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar1 == pFVar3) break;
    local_208 = *pFVar1;
    pFVar7 = ::FName::ToString(&local_208,&local_78);
    FStringFormatArg::FStringFormatArg(&local_108,pFVar7);
    pTVar8 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
             ::Find(this_00,local_208);
    puVar10 = (uint *)&pTVar8->field_0x8;
    if (pTVar8 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
      puVar10 = puVar12;
    }
    if (puVar10 != (uint *)0x0) {
      puVar12 = (uint *)(ulonglong)*puVar10;
    }
    pFVar7 = ::FString::FormatAsNumber(&local_68,(int)puVar12);
    FStringFormatArg::FStringFormatArg(&local_e8,pFVar7);
    local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_1f0.AllocatorInstance,2,&local_1f0.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1f0.AllocatorInstance.Data,&local_108,2);
    if (local_e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_108.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.StringValue.Data.AllocatorInstance.Data);
    }
    ::FString::FormatImpl(&local_170,L"{0} - [{1} elements]\n",&local_1f0);
    iVar14 = local_170.Data.ArrayNum + -1;
    if (local_170.Data.ArrayNum == 0) {
      iVar14 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_170.Data.AllocatorInstance.Data,iVar14);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    AttributeNames(this,&local_1a8,local_208);
    iVar14 = local_1a8.ArrayNum;
    pFVar1 = (FName *)(local_1a8.AllocatorInstance.Data + (longlong)iVar14 * 8);
    FVar13.Data = local_1a8.AllocatorInstance.Data;
    while( true ) {
      if (local_1a8.ArrayNum != iVar14) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      pFVar3 = local_1d0;
      if ((FName *)FVar13.Data == pFVar1) break;
      local_198 = *(FName *)FVar13.Data;
      local_138 = local_208;
      local_140 = local_198;
      pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                       *)&this->Map,(TTuple<FName,FName> *)&local_140);
      if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar2)();
          return pFVar7;
        }
      }
      iVar5 = (**(code **)(**(longlong **)&pTVar9->field_0x30 + 0x40))();
      ::FString::FormatAsNumber(&local_150,iVar5);
      pFVar7 = ::FName::ToString(&local_198,&local_58);
      FStringFormatArg::FStringFormatArg(&local_c8,pFVar7);
      _Src.Data = local_150.Data.AllocatorInstance.Data;
      local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar5 = local_150.Data.ArrayNum;
      local_1b8.Data.ArrayNum = iVar5;
      if (iVar5 == 0) {
        local_1b8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,0,(ForAnyElementType *)&local_1b8,iVar5,&local_1b8.Data.ArrayMax);
        memcpy(local_1b8.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar5 * 2);
      }
      FStringFormatArg::FStringFormatArg(&local_a8,&local_1b8);
      local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_200.AllocatorInstance,2,&local_200.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_200.AllocatorInstance.Data,&local_c8,2);
      if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.StringValue.Data.AllocatorInstance.Data);
      }
      ::FString::FormatImpl(&local_160,L" |-- {0} [{1} bytes]\n",&local_200);
      iVar5 = local_160.Data.ArrayNum + -1;
      if (local_160.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_160.Data.AllocatorInstance.Data,iVar5);
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_200.AllocatorInstance.Data,local_200.ArrayNum);
      if ((FStringFormatArg *)local_200.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_200.AllocatorInstance.Data);
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      FVar13.Data = FVar13.Data + 8;
    }
    if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1f0.AllocatorInstance.Data,local_1f0.ArrayNum);
    if ((FStringFormatArg *)local_1f0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1f0.AllocatorInstance.Data);
    }
    local_1d0 = pFVar3 + 1;
    uVar11 = (ulonglong)local_res20;
    this_00 = local_190;
  }
  if ((FName *)local_1c8.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_1e0.AllocatorInstance.Data,local_1e0.ArrayNum);
  if ((FStringFormatArg *)local_1e0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AddAttribute<TRefCountPtr<Chaos::FImplicitObject>_> @ 1440f8250

TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> * __thiscall
FManagedArrayCollection::AddAttribute<TRefCountPtr<Chaos::FImplicitObject>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2,
          FConstructionParameters *param_3)

{
  bool bVar1;
  TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *pTVar2;
  
  bVar1 = HasAttribute(this,param_1,param_2);
  if (!bVar1) {
    AddNewAttributeImpl<TRefCountPtr<Chaos::FImplicitObject>_>(this,param_1,param_2,param_3);
  }
  pTVar2 = ModifyAttribute<TRefCountPtr<Chaos::FImplicitObject>_>(this,param_1,param_2);
  return pTVar2;
}

// AddNewAttributeImpl<TRefCountPtr<Chaos::FImplicitObject>_> @ 1440f82c0

void __thiscall
FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FImplicitObject>_>
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
        goto LAB_1440f8351;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_1440f8351:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FImplicitObject>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FImplicitObject>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FImplicitObject>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FImplicitObject>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FImplicitObject>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FImplicitObject>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FImplicitObject>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    *(undefined ***)pFVar5 = &___7__TManagedArray_V__TRefCountPtr_VFImplicitObject_Chaos______6B_;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<TRefCountPtr<Chaos::FImplicitObject>_>
            (&local_58,
             (TUniquePtr<TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_>,TDefaultDelete<TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_>_>_>
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

// AddNewAttributeImpl<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_> @ 1440f84e0

void __thiscall
FManagedArrayCollection::
AddNewAttributeImpl<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
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
        goto LAB_1440f8571;
        iVar4 = *(int *)(*(longlong *)&this->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  AddGroup(this,param_2);
LAB_1440f8571:
  pFVar6 = (FValueType *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.ComparisonIndex.Value = 0;
    `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
    ::__l2::EmptyName.Number = 0;
    _Init_thread_footer(&`private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
    FVar8 = `private:_void___cdecl_FManagedArrayCollection::AddNewAttributeImpl<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>(FName,FName,FManagedArrayCollection::FConstructionParameters_const&___ptr64)___ptr64'
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
         ___7__TManagedArray_V__TUniquePtr_VFBVHParticles_Chaos__U__TDefaultDelete_VFBVHParticles_Chaos________6B_
    ;
    (pFVar5->SharedManagedArray).Object = (FManagedArrayBase *)0x0;
    (pFVar5->SharedManagedArray).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = pFVar5;
  }
  local_res8.Value = pFVar6;
  FValueType::MakeManaged<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
            (&local_58,
             (TUniquePtr<TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>,TDefaultDelete<TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>_>_>
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

// FindAttribute<TRefCountPtr<Chaos::FImplicitObject>_> @ 1440faf50

TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> * __thiscall
FManagedArrayCollection::FindAttribute<TRefCountPtr<Chaos::FImplicitObject>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar1;
  TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *pTVar2;
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
    pTVar2 = FValueType::ModifyTypedPtr<TRefCountPtr<Chaos::FImplicitObject>_>(this_00);
    return pTVar2;
  }
  return (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)0x0;
}

// FindAttribute<TRefCountPtr<Chaos::FImplicitObject>_> @ 1440fafa0

TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> * __thiscall
FManagedArrayCollection::FindAttribute<TRefCountPtr<Chaos::FImplicitObject>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *pTVar4;
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
    if (*pcVar5 != '*') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSameType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x303,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4 = *(TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> **)(pcVar5 + 0x20);
    if (pTVar4 == (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    return pTVar4;
  }
  return (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)0x0;
}

// FindAttribute<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_> @ 1440fb050

TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_> * __thiscall
FManagedArrayCollection::
FindAttribute<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_> *pTVar4;
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
    if (*pcVar5 != '\x17') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSameType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x303,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4 = *(TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
               **)(pcVar5 + 0x20);
    if (pTVar4 == (TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
                   *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
    return pTVar4;
  }
  return (TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_> *)
         0x0;
}

// GetAttribute<UE::Math::TTransform<double>_> @ 1440fb2d0

TManagedArray<UE::Math::TTransform<double>_> * __thiscall
FManagedArrayCollection::GetAttribute<UE::Math::TTransform<double>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar3;
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
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TTransform<double>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (pTVar4->field_0x10 != '\a') {
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
  pTVar3 = *(TManagedArray<UE::Math::TTransform<double>_> **)&pTVar4->field_0x30;
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

// ModifyAttribute<TRefCountPtr<Chaos::FImplicitObject>_> @ 1440fbcf0

TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> * __thiscall
FManagedArrayCollection::ModifyAttribute<TRefCountPtr<Chaos::FImplicitObject>_>
          (FManagedArrayCollection *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *pTVar3;
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
      pTVar3 = (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)(*pcVar1)();
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
      pTVar3 = (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FValueType::ModifyTypedPtr<TRefCountPtr<Chaos::FImplicitObject>_>
                     ((FValueType *)&pTVar4->field_0x10);
  return pTVar3;
}

// operator() @ 1504ad550

bool __thiscall `FManagedArrayCollection::Resize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8864559100168503722>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8864559100168503722>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ad690

bool __thiscall `FManagedArrayCollection::Append'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8864559100168503635>);
  if (bVar4) {
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_18);
    ::FName::ToString(*(FName **)this,&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8864559100168503635>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504ad72c;
    }
  }
  bVar4 = false;
LAB_1504ad72c:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

