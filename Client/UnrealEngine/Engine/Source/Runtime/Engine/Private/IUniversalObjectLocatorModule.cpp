// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// <lambda_invoker_cdecl> @ 148b06390

FResolveResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FActorLocatorFragment>'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FResolveResult *__return_storage_ptr__,void *param_1,FResolveParams *param_2)

{
  FActorLocatorFragment::Resolve(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 148b063c0

FResolveResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FAnimInstanceLocatorFragment>'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FResolveResult *__return_storage_ptr__,void *param_1,FResolveParams *param_2)

{
  FAnimInstanceLocatorFragment::Resolve(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 148b063f0

FResolveResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FAssetLocatorFragment>'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FResolveResult *__return_storage_ptr__,void *param_1,FResolveParams *param_2)

{
  FAssetLocatorFragment::Resolve(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 148b06500

FInitializeResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FActorLocatorFragment>'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (FInitializeResult *__return_storage_ptr__,void *param_1,FInitializeParams *param_2)

{
  FInitializeResult local_18;
  
  FActorLocatorFragment::Initialize(param_1,&local_18,param_2);
  __return_storage_ptr__->RelativeToContext = local_18.RelativeToContext;
  __return_storage_ptr__->Type = local_18.Type;
  *(undefined7 *)&__return_storage_ptr__->field_0x9 = local_18._9_7_;
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 148b06530

FInitializeResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FAnimInstanceLocatorFragment>'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (FInitializeResult *__return_storage_ptr__,void *param_1,FInitializeParams *param_2)

{
  FInitializeResult local_18;
  
  FAnimInstanceLocatorFragment::Initialize(param_1,&local_18,param_2);
  __return_storage_ptr__->RelativeToContext = local_18.RelativeToContext;
  __return_storage_ptr__->Type = local_18.Type;
  *(undefined7 *)&__return_storage_ptr__->field_0x9 = local_18._9_7_;
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 148b06560

FInitializeResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FAssetLocatorFragment>'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (FInitializeResult *__return_storage_ptr__,void *param_1,FInitializeParams *param_2)

{
  FInitializeResult local_18;
  
  FAssetLocatorFragment::Initialize(param_1,&local_18,param_2);
  __return_storage_ptr__->RelativeToContext = local_18.RelativeToContext;
  __return_storage_ptr__->Type = local_18.Type;
  *(undefined7 *)&__return_storage_ptr__->field_0x9 = local_18._9_7_;
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 148b06630

void __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FActorLocatorFragment>'::__l2::<lambda_3>::<lambda_invoker_cdecl>
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

// <lambda_invoker_cdecl> @ 148b06640

void __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FAnimInstanceLocatorFragment>'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (void *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  void *pvVar1;
  
  if (*(int *)param_1 == 1) {
    if (param_2->End < param_2->CurPos + 0xc) {
      TStringBuilderBase<wchar_t>::Extend(param_2,0xc);
    }
    pvVar1 = FGenericPlatformString::Memcpy(param_2->CurPos,L"post_process",0x18);
    param_2->CurPos = (wchar_t *)((longlong)pvVar1 + 0x18);
  }
  return;
}

// <lambda_invoker_cdecl> @ 148b06650

void __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FAssetLocatorFragment>'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (void *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  if (*(longlong *)param_1 != 0) {
    ::FName::AppendString(param_1,param_2);
    if (*(longlong *)((longlong)param_1 + 8) != 0) {
      if (param_2->End < param_2->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_2,1);
      }
      *param_2->CurPos = L'.';
      param_2->CurPos = param_2->CurPos + 1;
      ::FName::AppendString((FName *)((longlong)param_1 + 8),param_2);
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 148b066c0

FParseStringResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FActorLocatorFragment>'::__l2::<lambda_4>::<lambda_invoker_cdecl>
          (FParseStringResult *__return_storage_ptr__,void *param_1,TStringView<wchar_t> *param_2,
          FParseStringParams *param_3)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FActorLocatorFragment::TryParseString(param_1,__return_storage_ptr__,&local_18,param_3);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 148b06700

FParseStringResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FAnimInstanceLocatorFragment>'::__l2::<lambda_4>::<lambda_invoker_cdecl>
          (FParseStringResult *__return_storage_ptr__,void *param_1,TStringView<wchar_t> *param_2,
          FParseStringParams *param_3)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FAnimInstanceLocatorFragment::TryParseString(param_1,__return_storage_ptr__,&local_18,param_3);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 148b06740

FParseStringResult * __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FAssetLocatorFragment>'::__l2::<lambda_4>::<lambda_invoker_cdecl>
          (FParseStringResult *__return_storage_ptr__,void *param_1,TStringView<wchar_t> *param_2,
          FParseStringParams *param_3)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FAssetLocatorFragment::TryParseString(param_1,__return_storage_ptr__,&local_18,param_3);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 148b06790

void __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FActorLocatorFragment>'::__l2::<lambda_5>::<lambda_invoker_cdecl>
          (void *param_1)

{
  *(undefined ***)param_1 =
       &___7__TFragmentPayload_UFActorLocatorFragment___UniversalObjectLocator_UE__6B_;
  return;
}

// <lambda_invoker_cdecl> @ 148b067b0

void __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FAnimInstanceLocatorFragment>'::__l2::<lambda_5>::<lambda_invoker_cdecl>
          (void *param_1)

{
  *(undefined ***)param_1 =
       &___7__TFragmentPayload_UFAnimInstanceLocatorFragment___UniversalObjectLocator_UE__6B_;
  return;
}

// <lambda_invoker_cdecl> @ 148b067d0

void __cdecl
`UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FAssetLocatorFragment>'::__l2::<lambda_5>::<lambda_invoker_cdecl>
          (void *param_1)

{
  *(undefined ***)param_1 =
       &___7__TFragmentPayload_UFAssetLocatorFragment___UniversalObjectLocator_UE__6B_;
  return;
}

// RegisterFragmentType<FActorLocatorFragment> @ 148b1c140

TFragmentTypeHandle<FActorLocatorFragment> __thiscall
UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FActorLocatorFragment>
          (IUniversalObjectLocatorModule *this,FFragmentTypeParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  TFragmentTypeHandle<FActorLocatorFragment> TVar4;
  FString *pFVar5;
  ulonglong uVar6;
  UScriptStruct *pUVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong in_R8;
  wchar_t *pwVar10;
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
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentTypeParameters.FragmentTypeID != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\IUniversalObjectLocatorModule.h"
                         ,0x48,L"\'None\' is not a valid Fragment Type ID for type %s"), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar4 = (TFragmentTypeHandle<FActorLocatorFragment>)(*pcVar2)();
    return TVar4;
  }
  pFVar5 = ::FName::ToString((FName *)(in_R8 + 0x10),&local_98);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  uVar1 = *pwVar10;
  uVar9 = 0;
  if (uVar1 >> 6 == 0) {
    uVar9 = 0xfc00dfffffffffff;
  }
  uVar6 = 0;
  if (uVar1 >> 6 == 1) {
    uVar6 = 0xf800000178000001;
  }
  for (uVar9 = (uVar9 | uVar6) >> (uVar1 & 0x3f); (uVar9 & 1) == 0;
      uVar9 = (uVar9 | uVar6) >> (uVar1 & 0x3f)) {
    uVar1 = *(ushort *)((longlong)pwVar10 + 2);
    pwVar10 = (wchar_t *)((longlong)pwVar10 + 2);
    uVar9 = 0;
    if (uVar1 >> 6 == 0) {
      uVar9 = 0xfc00dfffffffffff;
    }
    uVar6 = 0;
    if (uVar1 >> 6 == 1) {
      uVar6 = 0xf800000178000001;
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (uVar1 != 0) {
    ::FName::ToString((FName *)(in_R8 + 0x10),&local_88);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FAsciiSet::HasAny(*FragmentTypeParameters.FragmentTypeID.ToString(), ~FUniversalObjectLocatorFragment::ValidFragmentTypeCharacters)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\IUniversalObjectLocatorModule.h"
                       ,0x49,L"Fragment Type ID \'%s\' contains invalid characters");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (TFragmentTypeHandle<FActorLocatorFragment>)(*pcVar2)();
      return TVar4;
    }
  }
  local_48 = (UScriptStruct *)0x0;
  FText::FText(&local_40);
  local_30 = *(undefined8 *)(in_R8 + 0x10);
  local_28 = *(undefined8 *)(in_R8 + 0x18);
  local_20 = *(undefined1 *)(in_R8 + 0x20);
  pUVar7 = FActorLocatorFragment::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_58 = FActorLocatorFragment::ComputePriority;
  local_70 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FActorLocatorFragment>'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_78 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FActorLocatorFragment>'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
  local_68 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FActorLocatorFragment>'::__l2::<lambda_3>::<lambda_invoker_cdecl>;
  local_60 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FActorLocatorFragment>'::__l2::<lambda_4>::<lambda_invoker_cdecl>;
  local_50 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FActorLocatorFragment>'::__l2::<lambda_5>::<lambda_invoker_cdecl>;
  local_48 = pUVar7;
  puVar8 = (undefined1 *)(**(code **)((longlong)*this + 0x40))(this,local_res8,&local_78);
  *(undefined1 *)&(param_1->DisplayText).TextData.Reference = *puVar8;
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  return SUB81(param_1,0);
}

// RegisterFragmentType<FAnimInstanceLocatorFragment> @ 148b1c3a0

TFragmentTypeHandle<FAnimInstanceLocatorFragment> __thiscall
UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FAnimInstanceLocatorFragment>
          (IUniversalObjectLocatorModule *this,FFragmentTypeParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  TFragmentTypeHandle<FAnimInstanceLocatorFragment> TVar4;
  FString *pFVar5;
  ulonglong uVar6;
  UScriptStruct *pUVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong in_R8;
  wchar_t *pwVar10;
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
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentTypeParameters.FragmentTypeID != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\IUniversalObjectLocatorModule.h"
                         ,0x48,L"\'None\' is not a valid Fragment Type ID for type %s"), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar4 = (TFragmentTypeHandle<FAnimInstanceLocatorFragment>)(*pcVar2)();
    return TVar4;
  }
  pFVar5 = ::FName::ToString((FName *)(in_R8 + 0x10),&local_98);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  uVar1 = *pwVar10;
  uVar9 = 0;
  if (uVar1 >> 6 == 0) {
    uVar9 = 0xfc00dfffffffffff;
  }
  uVar6 = 0;
  if (uVar1 >> 6 == 1) {
    uVar6 = 0xf800000178000001;
  }
  for (uVar9 = (uVar9 | uVar6) >> (uVar1 & 0x3f); (uVar9 & 1) == 0;
      uVar9 = (uVar9 | uVar6) >> (uVar1 & 0x3f)) {
    uVar1 = *(ushort *)((longlong)pwVar10 + 2);
    pwVar10 = (wchar_t *)((longlong)pwVar10 + 2);
    uVar9 = 0;
    if (uVar1 >> 6 == 0) {
      uVar9 = 0xfc00dfffffffffff;
    }
    uVar6 = 0;
    if (uVar1 >> 6 == 1) {
      uVar6 = 0xf800000178000001;
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (uVar1 != 0) {
    ::FName::ToString((FName *)(in_R8 + 0x10),&local_88);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FAsciiSet::HasAny(*FragmentTypeParameters.FragmentTypeID.ToString(), ~FUniversalObjectLocatorFragment::ValidFragmentTypeCharacters)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\IUniversalObjectLocatorModule.h"
                       ,0x49,L"Fragment Type ID \'%s\' contains invalid characters");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (TFragmentTypeHandle<FAnimInstanceLocatorFragment>)(*pcVar2)();
      return TVar4;
    }
  }
  local_48 = (UScriptStruct *)0x0;
  FText::FText(&local_40);
  local_30 = *(undefined8 *)(in_R8 + 0x10);
  local_28 = *(undefined8 *)(in_R8 + 0x18);
  local_20 = *(undefined1 *)(in_R8 + 0x20);
  pUVar7 = FAnimInstanceLocatorFragment::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_58 = FAnimInstanceLocatorFragment::ComputePriority;
  local_70 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FAnimInstanceLocatorFragment>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_78 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FAnimInstanceLocatorFragment>'::__l2::<lambda_2>::
             <lambda_invoker_cdecl>;
  local_68 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FAnimInstanceLocatorFragment>'::__l2::<lambda_3>::
             <lambda_invoker_cdecl>;
  local_60 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FAnimInstanceLocatorFragment>'::__l2::<lambda_4>::
             <lambda_invoker_cdecl>;
  local_50 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FAnimInstanceLocatorFragment>'::__l2::<lambda_5>::
             <lambda_invoker_cdecl>;
  local_48 = pUVar7;
  puVar8 = (undefined1 *)(**(code **)((longlong)*this + 0x40))(this,local_res8,&local_78);
  *(undefined1 *)&(param_1->DisplayText).TextData.Reference = *puVar8;
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  return SUB81(param_1,0);
}

// RegisterFragmentType<FAssetLocatorFragment> @ 148b1c600

TFragmentTypeHandle<FAssetLocatorFragment> __thiscall
UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
RegisterFragmentType<FAssetLocatorFragment>
          (IUniversalObjectLocatorModule *this,FFragmentTypeParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  TFragmentTypeHandle<FAssetLocatorFragment> TVar4;
  FString *pFVar5;
  ulonglong uVar6;
  UScriptStruct *pUVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong in_R8;
  wchar_t *pwVar10;
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
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentTypeParameters.FragmentTypeID != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\IUniversalObjectLocatorModule.h"
                         ,0x48,L"\'None\' is not a valid Fragment Type ID for type %s"), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar4 = (TFragmentTypeHandle<FAssetLocatorFragment>)(*pcVar2)();
    return TVar4;
  }
  pFVar5 = ::FName::ToString((FName *)(in_R8 + 0x10),&local_98);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  uVar1 = *pwVar10;
  uVar9 = 0;
  if (uVar1 >> 6 == 0) {
    uVar9 = 0xfc00dfffffffffff;
  }
  uVar6 = 0;
  if (uVar1 >> 6 == 1) {
    uVar6 = 0xf800000178000001;
  }
  for (uVar9 = (uVar9 | uVar6) >> (uVar1 & 0x3f); (uVar9 & 1) == 0;
      uVar9 = (uVar9 | uVar6) >> (uVar1 & 0x3f)) {
    uVar1 = *(ushort *)((longlong)pwVar10 + 2);
    pwVar10 = (wchar_t *)((longlong)pwVar10 + 2);
    uVar9 = 0;
    if (uVar1 >> 6 == 0) {
      uVar9 = 0xfc00dfffffffffff;
    }
    uVar6 = 0;
    if (uVar1 >> 6 == 1) {
      uVar6 = 0xf800000178000001;
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (uVar1 != 0) {
    ::FName::ToString((FName *)(in_R8 + 0x10),&local_88);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FAsciiSet::HasAny(*FragmentTypeParameters.FragmentTypeID.ToString(), ~FUniversalObjectLocatorFragment::ValidFragmentTypeCharacters)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\IUniversalObjectLocatorModule.h"
                       ,0x49,L"Fragment Type ID \'%s\' contains invalid characters");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (TFragmentTypeHandle<FAssetLocatorFragment>)(*pcVar2)();
      return TVar4;
    }
  }
  local_48 = (UScriptStruct *)0x0;
  FText::FText(&local_40);
  local_30 = *(undefined8 *)(in_R8 + 0x10);
  local_28 = *(undefined8 *)(in_R8 + 0x18);
  local_20 = *(undefined1 *)(in_R8 + 0x20);
  pUVar7 = FAssetLocatorFragment::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_58 = FAssetLocatorFragment::ComputePriority;
  local_70 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FAssetLocatorFragment>'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_78 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FAssetLocatorFragment>'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
  local_68 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FAssetLocatorFragment>'::__l2::<lambda_3>::<lambda_invoker_cdecl>;
  local_60 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FAssetLocatorFragment>'::__l2::<lambda_4>::<lambda_invoker_cdecl>;
  local_50 = `UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
             RegisterFragmentType<FAssetLocatorFragment>'::__l2::<lambda_5>::<lambda_invoker_cdecl>;
  local_48 = pUVar7;
  puVar8 = (undefined1 *)(**(code **)((longlong)*this + 0x40))(this,local_res8,&local_78);
  *(undefined1 *)&(param_1->DisplayText).TextData.Reference = *puVar8;
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  return SUB81(param_1,0);
}

