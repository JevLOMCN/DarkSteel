// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 6

// <lambda_invoker_cdecl> @ 146c48570

FResolveResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FLegacyLazyObjectPtrFragment>'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FResolveResult *__return_storage_ptr__,void *param_1,FResolveParams *param_2)

{
  longlong *plVar1;
  UObject *pUVar2;
  undefined1 local_res8;
  TPersistentObjectPtr<FUniqueObjectGuid> local_28;
  
  if ((((*(int *)((longlong)param_1 + 0xc) == 0 && *(int *)((longlong)param_1 + 8) == 0) &&
       *(int *)((longlong)param_1 + 4) == 0) && *(int *)param_1 == 0) ||
     ((UObjectBaseUtility *)param_2->Context == (UObjectBaseUtility *)0x0)) {
    plVar1 = &(__return_storage_ptr__->Value)._padding_;
    *(byte *)plVar1 = (byte)*plVar1 & 0xfc;
    (__return_storage_ptr__->Value)._padding_ = 0;
  }
  else {
    UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_2->Context);
    local_28.ObjectID.Guid._0_8_ = *(undefined8 *)param_1;
    local_28.ObjectID.Guid._8_8_ = *(undefined8 *)((longlong)param_1 + 8);
    local_28.WeakPtr.ObjectIndex = 0;
    local_28.WeakPtr.ObjectSerialNumber = 0;
    pUVar2 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(&local_28);
    local_28.ObjectID.Guid._0_8_ =
         CONCAT71(local_28.ObjectID.Guid._1_7_,local_res8) & 0xfffffffffffffffc;
    (__return_storage_ptr__->Value)._padding_ = (longlong)pUVar2;
    (__return_storage_ptr__->Value)._padding_ = local_28.ObjectID.Guid._0_8_;
  }
  (__return_storage_ptr__->Value).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 146c48600

FInitializeResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FLegacyLazyObjectPtrFragment>'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (FInitializeResult *__return_storage_ptr__,void *param_1,FInitializeParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInitializeResult *pFVar3;
  undefined7 uStack_f;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LegacyLazyObjectPtrFragment.cpp"
                     ,0x2c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInitializeResult *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->RelativeToContext = (UObject *)0x0;
  *(ulonglong *)&__return_storage_ptr__->Type = CONCAT71(uStack_f,2);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 146c48660

void __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FLegacyLazyObjectPtrFragment>'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (void *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  return;
}

// <lambda_invoker_cdecl> @ 146c48670

FParseStringResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FLegacyLazyObjectPtrFragment>'::__l2::<lambda_4>::<lambda_invoker_cdecl>
          (FParseStringResult *__return_storage_ptr__,void *param_1,TStringView<wchar_t> *param_2,
          FParseStringParams *param_3)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  bool bVar3;
  FText *this;
  undefined1 uVar4;
  TStringView<wchar_t> *local_res18 [2];
  FText local_38;
  FText local_28;
  undefined8 local_18;
  
  local_28.TextData.Reference = (ITextData *)0x0;
  local_28.Flags = 0;
  local_28._12_4_ = 0;
  local_18 = 0;
  local_res18[0] = param_2;
  FText::FText(&local_28);
  local_18 = local_18 & 0xffffff0000000000;
  this = FText::FText(&local_38);
  bVar3 = FText::IsEmpty(this);
  TVar2.Reference = local_28.TextData.Reference;
  if (!bVar3) {
    pIVar1 = (this->TextData).Reference;
    if (local_28.TextData.Reference != pIVar1) {
      local_28.TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))();
      }
      if (TVar2.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
      }
    }
    local_28.Flags = this->Flags;
  }
  local_18._0_5_ = (uint5)(uint)local_18;
  (__return_storage_ptr__->ErrorMessage).TextData.Reference = local_28.TextData.Reference;
  uVar4 = false;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res18);
    uVar4 = local_18._4_1_;
  }
  (__return_storage_ptr__->ErrorMessage).Flags = local_28.Flags;
  __return_storage_ptr__->bSuccess = (bool)uVar4;
  __return_storage_ptr__->NumCharsParsed = (uint)local_18;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))(local_38.TextData.Reference);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 146c48780

void __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FLegacyLazyObjectPtrFragment>'::__l2::<lambda_5>::<lambda_invoker_cdecl>
          (void *param_1)

{
  *(undefined ***)param_1 =
       &___7__TFragmentPayload_UFLegacyLazyObjectPtrFragment___UniversalObjectLocator_UE__6B_;
  return;
}

// RegisterFragmentType<FLegacyLazyObjectPtrFragment> @ 146c4ce10

TFragmentTypeHandle<FLegacyLazyObjectPtrFragment> __thiscall
UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FLegacyLazyObjectPtrFragment>
          (IUniversalObjectLocatorModule *this,FFragmentTypeParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  TFragmentTypeHandle<FLegacyLazyObjectPtrFragment> TVar5;
  FString *pFVar6;
  ulonglong uVar7;
  UPackage *pUVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong in_R8;
  wchar_t *pwVar11;
  undefined1 local_res8 [8];
  FString local_98;
  FString local_88;
  code *local_78;
  code *local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  UScriptStruct *local_48;
  FText local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  if ((*(longlong *)(in_R8 + 0x10) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentTypeParameters.FragmentTypeID != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\IUniversalObjectLocatorModule.h"
                         ,0x48,L"\'None\' is not a valid Fragment Type ID for type %s"), bVar4)) {
    pcVar2 = (code *)swi(3);
    TVar5 = (TFragmentTypeHandle<FLegacyLazyObjectPtrFragment>)(*pcVar2)();
    return TVar5;
  }
  pFVar6 = ::FName::ToString((FName *)(in_R8 + 0x10),&local_98);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  uVar1 = *pwVar11;
  uVar10 = 0;
  if (uVar1 >> 6 == 0) {
    uVar10 = 0xfc00dfffffffffff;
  }
  uVar7 = 0;
  if (uVar1 >> 6 == 1) {
    uVar7 = 0xf800000178000001;
  }
  for (uVar10 = (uVar10 | uVar7) >> (uVar1 & 0x3f); (uVar10 & 1) == 0;
      uVar10 = (uVar10 | uVar7) >> (uVar1 & 0x3f)) {
    uVar1 = *(ushort *)((longlong)pwVar11 + 2);
    pwVar11 = (wchar_t *)((longlong)pwVar11 + 2);
    uVar10 = 0;
    if (uVar1 >> 6 == 0) {
      uVar10 = 0xfc00dfffffffffff;
    }
    uVar7 = 0;
    if (uVar1 >> 6 == 1) {
      uVar7 = 0xf800000178000001;
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (uVar1 != 0) {
    ::FName::ToString((FName *)(in_R8 + 0x10),&local_88);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FAsciiSet::HasAny(*FragmentTypeParameters.FragmentTypeID.ToString(), ~FUniversalObjectLocatorFragment::ValidFragmentTypeCharacters)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\IUniversalObjectLocatorModule.h"
                       ,0x49,L"Fragment Type ID \'%s\' contains invalid characters");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      TVar5 = (TFragmentTypeHandle<FLegacyLazyObjectPtrFragment>)(*pcVar2)();
      return TVar5;
    }
  }
  local_48 = (UScriptStruct *)0x0;
  FText::FText(&local_40);
  local_30 = *(undefined8 *)(in_R8 + 0x10);
  local_28 = *(undefined8 *)(in_R8 + 0x18);
  local_20 = *(undefined1 *)(in_R8 + 0x20);
  if (Z_Registration_Info_UScriptStruct_FLegacyLazyObjectPtrFragment.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_LevelSequence();
    Z_Registration_Info_UScriptStruct_FLegacyLazyObjectPtrFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment,(UObject *)pUVar8,
                         L"LegacyLazyObjectPtrFragment");
  }
  pUVar3 = Z_Registration_Info_UScriptStruct_FLegacyLazyObjectPtrFragment.OuterSingleton;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UScriptStruct_FLegacyLazyObjectPtrFragment.OuterSingleton !=
      (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)
                        Z_Registration_Info_UScriptStruct_FLegacyLazyObjectPtrFragment.
                        OuterSingleton);
  }
  local_58 = FLegacyLazyObjectPtrFragment::ComputePriority;
  local_70 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FLegacyLazyObjectPtrFragment>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_78 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FLegacyLazyObjectPtrFragment>'::__l2::<lambda_2>::
             <lambda_invoker_cdecl>;
  local_68 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FLegacyLazyObjectPtrFragment>'::__l2::<lambda_3>::
             <lambda_invoker_cdecl>;
  local_60 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FLegacyLazyObjectPtrFragment>'::__l2::<lambda_4>::
             <lambda_invoker_cdecl>;
  local_50 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FLegacyLazyObjectPtrFragment>'::__l2::<lambda_5>::
             <lambda_invoker_cdecl>;
  local_48 = pUVar3;
  puVar9 = (undefined1 *)(**(code **)((longlong)*this + 0x40))(this,local_res8,&local_78);
  *(undefined1 *)&(param_1->DisplayText).TextData.Reference = *puVar9;
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  return SUB81(param_1,0);
}

