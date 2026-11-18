// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 2

// Load @ 141e27240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall FPluginManifest::Load(FPluginManifest *this,FString *param_1,FText *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStackY_208 [32];
  FString local_1d8;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_1c8;
  TOptional<FText>_u_0 local_1c0;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_188;
  FText local_178;
  FText local_168;
  TArrayView<wchar_t,int> local_158;
  TStringView<wchar_t> local_148;
  FText local_138;
  FText local_128;
  FString local_118;
  FScopedBootTiming local_108;
  FText local_f0;
  FTextFormat local_e0;
  FText local_d0;
  FTextFormat local_c0;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  local_b0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Data.ArrayNum = 0;
  local_1d8.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = FFileHelper::LoadFileToString(&local_1d8,pwVar10,None,0);
  if (!bVar3) {
    pFVar6 = FText::FromString(&local_f0,param_1);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_168,L"PluginManifest",L"FailedToLoadDescriptorFile",
                        L"Failed to open descriptor file \'{0}\'");
    pFVar8 = FTextFormat::FTextFormat(&local_e0,pFVar7,Default);
    pFVar6 = FText::Format<FText>(&local_178,pFVar8,pFVar6);
    FText::operator=(param_2,pFVar6);
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
    bVar3 = false;
    goto LAB_141e276f2;
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId90,"FPluginManifest::Load RapidJson",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManifest.cpp"
               ,0x5a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId90);
  }
  FScopedBootTiming::FScopedBootTiming(&local_108,"FPluginManifest::Load RapidJson");
  FVar2.Data = local_1d8.Data.AllocatorInstance.Data;
  iStack_1a0 = local_1d8.Data.ArrayNum;
  local_1a8 = local_1d8.Data.AllocatorInstance.Data;
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Data.ArrayNum = 0;
  local_1d8.Data.ArrayMax = 0;
  if ((iStack_1a0 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  local_158._12_4_ = uStack_19c;
  local_158.ArrayNum = iStack_1a0;
  local_158.DataPtr = (wchar_t *)local_1a8;
  UE::Json::ParseInPlace(&local_b0,&local_158);
  uVar11 = (ulonglong)local_b0.Variant.TypeIndex;
  if ((2 < uVar11) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar11) == '\0') {
    if ((local_b0.Variant.TypeIndex != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    UE::Json::GetRootObject
              (&local_188,
               (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                *)&local_b0);
    if (local_188.bIsSet == false) {
      if ((2 < local_b0.Variant.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_b0.Variant.TypeIndex])(&local_b0);
      if (FVar2.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar2.Data);
      }
      FScopedBootTiming::~FScopedBootTiming(&local_108);
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      bVar3 = false;
      goto LAB_141e276f2;
    }
    local_1c8 = local_188.TypedValue.value_;
    UE::Projects::Private::Read
              ((TOptional<FText> *)&local_1c0.TypedValue,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_1c8,this);
    if (local_1c0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      FText::operator=(param_2,&local_1c0.TypedValue);
      if (local_1c0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_1c0.TypedValue.TextData.Reference + 0x10))();
      }
      goto LAB_141e27606;
    }
    bVar3 = true;
  }
  else {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar3 = FFileHelper::LoadFileToString(&local_1d8,pwVar10,None,0);
    if ((!bVar3) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6142178076550758301>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManifest.cpp"
                           ,99,"FFileHelper::LoadFileToString(FileContents, *FileName)"), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if ((local_b0.Variant.TypeIndex != 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    local_198 = local_1d8.Data.AllocatorInstance.Data;
    iStack_190 = local_1d8.Data.ArrayNum + -1;
    if (local_1d8.Data.ArrayNum == 0) {
      iStack_190 = 0;
    }
    local_148._12_4_ = uStack_18c;
    local_148.Size = iStack_190;
    local_148.DataPtr = (wchar_t *)local_1d8.Data.AllocatorInstance.Data;
    pFVar9 = UE::Json::FParseError::CreateMessage((FParseError *)&local_b0,&local_118,&local_148);
    pFVar6 = FText::FromString(&local_d0,pFVar9);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_128,L"PluginManifest",L"FailedToReadDescriptorFile",
                        L"Failed to read file. {0}");
    pFVar8 = FTextFormat::FTextFormat(&local_c0,pFVar7,Default);
    pFVar6 = FText::Format<FText>(&local_138,pFVar8,pFVar6);
    FText::operator=(param_2,pFVar6);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
    if (local_118.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
LAB_141e27606:
      bVar3 = false;
    }
    else {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
      bVar3 = false;
    }
  }
  if ((2 < local_b0.Variant.TypeIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_b0.Variant.TypeIndex])(&local_b0);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FScopedBootTiming::~FScopedBootTiming(&local_108);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_141e276f2:
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// Read @ 141e2d870

bool __thiscall FPluginManifest::Read(FPluginManifest *this,FJsonObject *param_1,FText *param_2)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res8;
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  UE::Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 != '\0') {
    UE::Json::GetRootObject
              (&local_88,
               (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                *)&local_78.s);
    if (local_88.bIsSet != false) {
      local_res8 = local_88.TypedValue.value_;
      UE::Projects::Private::Read
                ((TOptional<FText> *)&local_98.TypedValue,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_res8,this);
      if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar1 = true;
      }
      else {
        if (param_2 != (FText *)0x0) {
          FText::operator=(param_2,&local_98.TypedValue);
        }
        if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
        }
        bVar1 = false;
      }
      if (local_18 == '\0') {
        return bVar1;
      }
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      return bVar1;
    }
    if (local_18 != '\0') {
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
    }
  }
  return false;
}

