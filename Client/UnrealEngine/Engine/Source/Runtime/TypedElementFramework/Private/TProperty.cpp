// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 4

// Get @ 142cacc60

FText * __thiscall
UE::Editor::DataStorage::Private::TProperty<FText>::Get
          (TProperty<FText> *this,void *param_1,
          TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> param_2)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  UObject *pUVar4;
  ulonglong uVar5;
  FName local_res8;
  <lambda_2> local_res10;
  FWeakObjectPtr local_res18 [2];
  FWeakObjectPtr *local_48;
  TProperty<FText> *local_40;
  FString local_38;
  
  local_res18[0] = param_2.WeakPtr;
  if ((param_1 == (void *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementAttributeBindingProperty.h"
                         ,0xe3,
                         L"Nullptr pointer provided to Object while trying to retrieve a property value."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FText *)(*pcVar1)();
    return pFVar3;
  }
  bVar2 = FWeakObjectPtr::IsValid(local_res18);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementAttributeBindingProperty.h"
                         ,0xe4,
                         L"Nullptr pointer provided to Type while trying to retrieve a property value."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FText *)(*pcVar1)();
    return pFVar3;
  }
  uVar5 = (ulonglong)(this->InternalProperty).TypeIndex;
  if ((2 < uVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FText *)(*pcVar1)();
    return pFVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TEmptyProperty<class_FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) != '\0') {
    pUVar4 = FWeakObjectPtr::Get(local_res18);
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
    local_res8.Number = *(uint *)&pUVar4->field_0x1c;
    ::FName::ToString(&local_res8,&local_38);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementAttributeBindingProperty.h"
                       ,0xe6,
                       L"Attempting to retrieve the value of object type (%s) from a property that wasn\'t bound."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  bVar2 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::UEOpEquals<UScriptStruct_const_,bool>
                    ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)local_res18,
                     &this->ObjectTypeInfo);
  if (!bVar2) {
    local_48 = local_res18;
    local_40 = this;
    `UE::Editor::DataStorage::Private::TProperty<FText>::Get'::__l2::<lambda_1>::operator()
              (&local_48);
  }
  local_res10.Object = param_1;
  pFVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_class_FText&___ptr64___cdecl_UE::Editor::DataStorage::Private::TProperty<FText>::Get(void*___ptr64,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)const___ptr64'::`2'::<lambda_2>,0,1,2,0,TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>_const&___ptr64>(unsigned___int64,`public:_class_FText&___ptr64___cdecl_UE::Editor::DataStorage::Private::TProperty<FText>::Get(void*___ptr64,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)const___ptr64'::`2'::<lambda_2>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>_const&___ptr64)'
             ::__l2::Invokers[(this->InternalProperty).TypeIndex])
                     (&local_res10,&this->InternalProperty);
  return pFVar3;
}

// GetObjectTypeInfo @ 142cae520

TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> __thiscall
UE::Editor::DataStorage::Private::TProperty<FText>::GetObjectTypeInfo(TProperty<FText> *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->ObjectTypeInfo).WeakPtr;
  return (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)in_RDX;
}

// IsBound @ 142caf980

bool __thiscall UE::Editor::DataStorage::Private::TProperty<FText>::IsBound(TProperty<FText> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->InternalProperty).TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return *(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TEmptyProperty<class_FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar4) == '\0';
}

// operator() @ 150499190

bool __thiscall
`UE::Editor::DataStorage::Private::TProperty<FText>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  FString *pFVar7;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar2 = false;
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1482141206090612968>);
  if (bVar3) {
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 0x50));
    if (bVar4) {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 0x50));
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res10.Number = *(uint *)&pUVar6->field_0x1c;
      pFVar7 = ::FName::ToString(&local_res10,&local_28);
      if ((pFVar7->Data).ArrayNum == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
    pUVar6 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
    bVar4 = true;
    local_res18[0].ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
    local_res18[0].Number = *(uint *)&pUVar6->field_0x1c;
    ::FName::ToString(local_res18,&local_38);
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1482141206090612968>,
                       &`public:___cdecl_`public:_class_FText&___ptr64___cdecl_UE::Editor::DataStorage::Private::TProperty<FText>::Get(void*___ptr64,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15049927a;
    }
  }
  bVar3 = false;
LAB_15049927a:
  if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

