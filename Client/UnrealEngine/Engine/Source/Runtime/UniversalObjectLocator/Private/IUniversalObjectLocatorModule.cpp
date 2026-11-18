// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 12

// <lambda_invoker_cdecl> @ 144344560

FResolveResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FDirectPathObjectLocator>'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FResolveResult *__return_storage_ptr__,void *param_1,FResolveParams *param_2)

{
  longlong *plVar1;
  UObject *pUVar2;
  byte local_res8;
  undefined7 uStack_f;
  
  pUVar2 = FSoftObjectPath::ResolveObject(param_1);
  if (pUVar2 == (UObject *)0x0) {
    if ((param_2->Flags & Load) == None) {
      plVar1 = &(__return_storage_ptr__->Value)._padding_;
      *(byte *)plVar1 = (byte)*plVar1 & 0xfc;
      (__return_storage_ptr__->Value)._padding_ = 0;
    }
    else {
      pUVar2 = FSoftObjectPath::TryLoad(param_1,(FUObjectSerializeContext *)0x0);
      (__return_storage_ptr__->Value)._padding_ = (longlong)pUVar2;
      (__return_storage_ptr__->Value)._padding_ =
           CONCAT71(uStack_f,pUVar2 != (UObject *)0x0 | local_res8 & 0xfc);
    }
  }
  else {
    (__return_storage_ptr__->Value)._padding_ = (longlong)pUVar2;
    (__return_storage_ptr__->Value)._padding_ = CONCAT71(uStack_f,local_res8) & 0xfffffffffffffffc;
  }
  (__return_storage_ptr__->Value).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 144344600

FResolveResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::RegisterFragmentType<FSubObjectLocator>'
::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FResolveResult *__return_storage_ptr__,void *param_1,FResolveParams *param_2)

{
  longlong *plVar1;
  UObject *pUVar2;
  char cVar3;
  size_t sVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  wchar_t *pwVar7;
  int iVar8;
  UObject *local_res8;
  TStringView<wchar_t> local_28;
  
  pUVar2 = param_2->Context;
  iVar8 = 0;
  if (pUVar2 == (UObject *)0x0) {
    plVar1 = &(__return_storage_ptr__->Value)._padding_;
    *(byte *)plVar1 = (byte)*plVar1 & 0xfc;
    (__return_storage_ptr__->Value)._padding_ = 0;
    (__return_storage_ptr__->Value).TypeIndex = '\0';
    return __return_storage_ptr__;
  }
  local_res8 = (UObject *)0x0;
  if (*(int *)((longlong)param_1 + 8) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = *(wchar_t **)param_1;
  }
  cVar3 = (**(code **)(*(longlong *)pUVar2 + 0x88))(pUVar2,pwVar7,&local_res8);
  pUVar6 = local_res8;
  if (cVar3 != '\0') goto LAB_1443446aa;
  if (*(int *)((longlong)param_1 + 8) == 0) {
    local_28.DataPtr = L"";
LAB_144344672:
    sVar4 = wcslen(local_28.DataPtr);
    iVar8 = (int)sVar4;
  }
  else {
    local_28.DataPtr = *(wchar_t **)param_1;
    if (local_28.DataPtr != (wchar_t *)0x0) goto LAB_144344672;
  }
  local_28.Size = iVar8;
  pUVar5 = Z_Construct_UClass_UObject_NoRegister();
  pUVar6 = StaticFindObject(pUVar5,pUVar2,&local_28,None);
LAB_1443446aa:
  local_28._8_8_ = CONCAT71(local_28._9_7_,local_res8._0_1_) & 0xfffffffffffffffc;
  (__return_storage_ptr__->Value)._padding_ = (longlong)pUVar6;
  (__return_storage_ptr__->Value)._padding_ = local_28._8_8_;
  (__return_storage_ptr__->Value).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 144344700

FInitializeResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FDirectPathObjectLocator>'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (FInitializeResult *__return_storage_ptr__,void *param_1,FInitializeParams *param_2)

{
  int iVar1;
  FString *pFVar2;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  pFVar2 = UObjectBaseUtility::GetPathName
                     ((UObjectBaseUtility *)param_2->Object,&local_18,(UObject *)0x0);
  local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  FSoftObjectPath::SetPath(param_1,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_28._8_8_ = local_28._8_8_ & 0xffffffffffffff00;
  __return_storage_ptr__->RelativeToContext = (UObject *)0x0;
  *(undefined8 *)&__return_storage_ptr__->Type = local_28._8_8_;
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 1443447a0

FInitializeResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::RegisterFragmentType<FSubObjectLocator>'
::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (FInitializeResult *__return_storage_ptr__,void *param_1,FInitializeParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInitializeResult *pFVar3;
  FInitializeParams *local_res8;
  UObject *local_18;
  undefined1 uStack_10;
  undefined7 uStack_f;
  
  ::FString::Reset(param_1,0);
  if (param_2->Context == (UObject *)0x0) {
LAB_1443447d7:
    local_res8 = param_2;
    bVar2 = `FSubObjectLocator::Initialize'::__l3::<lambda_1>::operator()(&local_res8);
    if (!bVar2) {
      local_18 = (UObject *)0x0;
      uStack_10 = 2;
      goto LAB_144344842;
    }
  }
  else {
    bVar2 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)param_2->Object,param_2->Context);
    if (!bVar2) goto LAB_1443447d7;
  }
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2->Object,param_2->Context,param_1);
  local_18 = param_2->Context;
  if (local_18 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRelativeToContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorInitializeResult.h"
                       ,0x28,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FInitializeResult *)(*pcVar1)();
      return pFVar3;
    }
  }
  uStack_10 = 1;
LAB_144344842:
  __return_storage_ptr__->RelativeToContext = local_18;
  *(ulonglong *)&__return_storage_ptr__->Type = CONCAT71(uStack_f,uStack_10);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 144344870

void __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FDirectPathObjectLocator>'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (void *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  int iVar1;
  
  if (*(longlong *)param_1 != 0) {
    ::operator<<(param_2,param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x18) + -1;
    if (*(int *)((longlong)param_1 + 0x18) == 0) {
      iVar1 = 0;
    }
    if (0 < iVar1) {
      if (param_2->End < param_2->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_2,1);
      }
      *param_2->CurPos = L':';
      param_2->CurPos = param_2->CurPos + 1;
      operator<<<wchar_t,FUtf8String_const_&>(param_2,(FUtf8String *)((longlong)param_1 + 0x10));
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 144344880

void __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::RegisterFragmentType<FSubObjectLocator>'
::__l2::<lambda_3>::<lambda_invoker_cdecl>(void *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 8) + -1;
  if (*(int *)((longlong)param_1 + 8) == 0) {
    iVar1 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,*(wchar_t **)param_1,iVar1);
  return;
}

// <lambda_invoker_cdecl> @ 1443448b0

FParseStringResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FDirectPathObjectLocator>'::__l2::<lambda_4>::<lambda_invoker_cdecl>
          (FParseStringResult *__return_storage_ptr__,void *param_1,TStringView<wchar_t> *param_2,
          FParseStringParams *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 local_res8 [32];
  TStringView<wchar_t> local_28;
  undefined8 local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.Size = param_2->Size;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FSoftObjectPath::SetPath(param_1,&local_28);
  local_28.DataPtr = (wchar_t *)0x0;
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_18 = 0;
  FText::FText((FText *)&local_28);
  iVar1 = 0;
  local_18 = CONCAT35((int3)((ulonglong)local_18 >> 0x28),0x100000000);
  (__return_storage_ptr__->ErrorMessage).TextData.Reference = (ITextData *)local_28.DataPtr;
  uVar2 = true;
  if ((ITextData *)local_28.DataPtr != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.DataPtr + 8))(local_28.DataPtr,local_res8);
    iVar1 = (int)local_18;
    uVar2 = local_18._4_1_;
  }
  (__return_storage_ptr__->ErrorMessage).Flags = local_28.Size;
  __return_storage_ptr__->NumCharsParsed = iVar1;
  __return_storage_ptr__->bSuccess = (bool)uVar2;
  if ((ITextData *)local_28.DataPtr != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.DataPtr + 0x10))();
  }
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 144344950

FParseStringResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::RegisterFragmentType<FSubObjectLocator>'
::__l2::<lambda_4>::<lambda_invoker_cdecl>
          (FParseStringResult *__return_storage_ptr__,void *param_1,TStringView<wchar_t> *param_2,
          FParseStringParams *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 local_res8 [8];
  FText local_28;
  undefined8 local_18;
  
  iVar1 = (int)*(undefined8 *)&param_2->Size;
  ::FString::Reset(param_1,iVar1);
  ::FString::AppendChars(param_1,param_2->DataPtr,iVar1);
  local_28.TextData.Reference = (ITextData *)0x0;
  local_28.Flags = 0;
  local_28._12_4_ = 0;
  local_18 = 0;
  FText::FText(&local_28);
  iVar1 = 0;
  local_18 = CONCAT35((int3)((ulonglong)local_18 >> 0x28),0x100000000);
  (__return_storage_ptr__->ErrorMessage).TextData.Reference = local_28.TextData.Reference;
  uVar2 = true;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res8);
    iVar1 = (int)local_18;
    uVar2 = local_18._4_1_;
  }
  (__return_storage_ptr__->ErrorMessage).Flags = local_28.Flags;
  __return_storage_ptr__->NumCharsParsed = iVar1;
  __return_storage_ptr__->bSuccess = (bool)uVar2;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 144344a20

void __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FDirectPathObjectLocator>'::__l2::<lambda_5>::<lambda_invoker_cdecl>
          (void *param_1)

{
  *(undefined ***)param_1 =
       &___7__TFragmentPayload_UFDirectPathObjectLocator___UniversalObjectLocator_UE__6B_;
  return;
}

// <lambda_invoker_cdecl> @ 144344a40

void __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::RegisterFragmentType<FSubObjectLocator>'
::__l2::<lambda_5>::<lambda_invoker_cdecl>(void *param_1)

{
  *(undefined ***)param_1 =
       &___7__TFragmentPayload_UFSubObjectLocator___UniversalObjectLocator_UE__6B_;
  return;
}

// RegisterFragmentType<FDirectPathObjectLocator> @ 144344fa0

TFragmentTypeHandle<FDirectPathObjectLocator> __thiscall
UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FDirectPathObjectLocator>
          (IUniversalObjectLocatorModule *this,FFragmentTypeParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  TFragmentTypeHandle<FDirectPathObjectLocator> TVar5;
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
    TVar5 = (TFragmentTypeHandle<FDirectPathObjectLocator>)(*pcVar2)();
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
      TVar5 = (TFragmentTypeHandle<FDirectPathObjectLocator>)(*pcVar2)();
      return TVar5;
    }
  }
  local_48 = (UScriptStruct *)0x0;
  FText::FText(&local_40);
  local_30 = *(undefined8 *)(in_R8 + 0x10);
  local_28 = *(undefined8 *)(in_R8 + 0x18);
  local_20 = *(undefined1 *)(in_R8 + 0x20);
  if (Z_Registration_Info_UScriptStruct_FDirectPathObjectLocator.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_UniversalObjectLocator();
    Z_Registration_Info_UScriptStruct_FDirectPathObjectLocator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDirectPathObjectLocator,(UObject *)pUVar8,
                         L"DirectPathObjectLocator");
  }
  pUVar3 = Z_Registration_Info_UScriptStruct_FDirectPathObjectLocator.OuterSingleton;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UScriptStruct_FDirectPathObjectLocator.OuterSingleton !=
      (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)
                        Z_Registration_Info_UScriptStruct_FDirectPathObjectLocator.OuterSingleton);
  }
  local_58 = FDirectPathObjectLocator::ComputePriority;
  local_70 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FDirectPathObjectLocator>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_78 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FDirectPathObjectLocator>'::__l2::<lambda_2>::
             <lambda_invoker_cdecl>;
  local_68 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FDirectPathObjectLocator>'::__l2::<lambda_3>::
             <lambda_invoker_cdecl>;
  local_60 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FDirectPathObjectLocator>'::__l2::<lambda_4>::
             <lambda_invoker_cdecl>;
  local_50 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FDirectPathObjectLocator>'::__l2::<lambda_5>::
             <lambda_invoker_cdecl>;
  local_48 = pUVar3;
  puVar9 = (undefined1 *)(**(code **)((longlong)*this + 0x40))(this,local_res8,&local_78);
  *(undefined1 *)&(param_1->DisplayText).TextData.Reference = *puVar9;
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  return SUB81(param_1,0);
}

// RegisterFragmentType<FSubObjectLocator> @ 144345230

TFragmentTypeHandle<FSubObjectLocator> __thiscall
UE::UniversalObjectLocator::IUniversalObjectLocatorModule::RegisterFragmentType<FSubObjectLocator>
          (IUniversalObjectLocatorModule *this,FFragmentTypeParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  TFragmentTypeHandle<FSubObjectLocator> TVar5;
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
    TVar5 = (TFragmentTypeHandle<FSubObjectLocator>)(*pcVar2)();
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
      TVar5 = (TFragmentTypeHandle<FSubObjectLocator>)(*pcVar2)();
      return TVar5;
    }
  }
  local_48 = (UScriptStruct *)0x0;
  FText::FText(&local_40);
  local_30 = *(undefined8 *)(in_R8 + 0x10);
  local_28 = *(undefined8 *)(in_R8 + 0x18);
  local_20 = *(undefined1 *)(in_R8 + 0x20);
  if (Z_Registration_Info_UScriptStruct_FSubObjectLocator.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_UniversalObjectLocator();
    Z_Registration_Info_UScriptStruct_FSubObjectLocator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSubObjectLocator,(UObject *)pUVar8,
                         L"SubObjectLocator");
  }
  pUVar3 = Z_Registration_Info_UScriptStruct_FSubObjectLocator.OuterSingleton;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UScriptStruct_FSubObjectLocator.OuterSingleton != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)
                        Z_Registration_Info_UScriptStruct_FSubObjectLocator.OuterSingleton);
  }
  local_58 = FSubObjectLocator::ComputePriority;
  local_70 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FSubObjectLocator>'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_78 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FSubObjectLocator>'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
  local_68 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FSubObjectLocator>'::__l2::<lambda_3>::<lambda_invoker_cdecl>;
  local_60 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FSubObjectLocator>'::__l2::<lambda_4>::<lambda_invoker_cdecl>;
  local_50 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FSubObjectLocator>'::__l2::<lambda_5>::<lambda_invoker_cdecl>;
  local_48 = pUVar3;
  puVar9 = (undefined1 *)(**(code **)((longlong)*this + 0x40))(this,local_res8,&local_78);
  *(undefined1 *)&(param_1->DisplayText).TextData.Reference = *puVar9;
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  return SUB81(param_1,0);
}

