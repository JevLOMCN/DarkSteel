// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 2

// StaticStruct @ 14a73a900

UScriptStruct * __cdecl FMVVMViewClass_Event::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_Event.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UScriptStruct_FMVVMViewClass_Event.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewClass_Event,(UObject *)pUVar1,
                         L"MVVMViewClass_Event");
  }
  return Z_Registration_Info_UScriptStruct_FMVVMViewClass_Event.OuterSingleton;
}

// ToString @ 14a7625e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FMVVMViewClass_Event::ToString
          (FMVVMViewClass_Event *this,FString *__return_storage_ptr__,UMVVMViewClass *param_1,
          FToStringArgs param_2)

{
  code *pcVar1;
  bool bVar2;
  FMVVMViewClass_Event *pFVar3;
  UMVVMViewClass *this_00;
  bool bVar4;
  void *pvVar5;
  FString *pFVar6;
  FMVVMViewClass_Source *pFVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  void *pvVar13;
  undefined1 auStack_8e8 [32];
  FName local_8c8;
  void *local_8c0;
  int local_8b8;
  undefined4 local_8b4;
  void *local_8b0;
  int local_8a8;
  undefined4 local_8a4;
  FMVVMViewClass_Event *local_8a0;
  FString *local_898;
  UMVVMViewClass *local_890;
  FName local_888;
  TValueOrError<FString,FString> local_880;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_8e8;
  local_868.Base = local_848;
  local_8c8 = (FName)((ulonglong)local_8c8 & 0xffffffff00000000);
  local_868.End = (wchar_t *)local_48;
  local_868.CurPos = local_848;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_8a0 = this;
  local_898 = __return_storage_ptr__;
  local_890 = param_1;
  if (-1 < (this->FieldPath).Num) {
    pvVar5 = FGenericPlatformString::Memcpy(local_848,L"Event: ",0xe);
    local_868.CurPos = (wchar_t *)((longlong)pvVar5 + 0xe);
    if (param_2.bUseDisplayName != false) {
      if (local_868.End < (wchar_t *)((longlong)pvVar5 + 0x10)) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,1);
      }
      *local_868.CurPos = L'\"';
      local_868.CurPos = local_868.CurPos + 1;
    }
    FMVVMCompiledBindingLibrary::FieldPathToString
              (&param_1->BindingLibrary,&local_880,this->FieldPath,param_2.bUseDisplayName);
    uVar9 = (ulonglong)local_880.Variant.TypeIndex;
    if (2 < uVar9) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FString,FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar9) == '\0') {
      if (local_880.Variant.TypeIndex != 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar1)();
          return pFVar6;
        }
      }
      pvVar5 = (void *)local_880.Variant._padding_;
      iVar11 = (int)local_880.Variant._padding_;
      local_8c0 = (void *)local_880.Variant._padding_;
      local_880.Variant._padding_ = 0;
      local_8b8 = (int)local_880.Variant._padding_;
      local_8b4 = local_880.Variant._padding_._4_4_;
      local_880.Variant._padding_ = 0;
      if (2 < local_880.Variant.TypeIndex) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar1)();
          return pFVar6;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_880.Variant.TypeIndex] !=
          UE::Core::Private::TDestructorCaller<TValueOrError<FString,FString>::FEmptyType>::Destruct
         ) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_880.Variant.TypeIndex])(&local_880);
      }
      bVar2 = false;
      bVar4 = true;
      pvVar10 = local_8b0;
      pvVar13 = pvVar5;
    }
    else {
      if (local_880.Variant.TypeIndex != 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar1)();
          return pFVar6;
        }
      }
      pvVar5 = (void *)local_880.Variant._padding_;
      iVar11 = (int)local_880.Variant._padding_;
      local_8b0 = (void *)local_880.Variant._padding_;
      local_880.Variant._padding_ = 0;
      local_8a8 = (int)local_880.Variant._padding_;
      local_8a4 = local_880.Variant._padding_._4_4_;
      local_880.Variant._padding_ = 0;
      if (2 < local_880.Variant.TypeIndex) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar1)();
          return pFVar6;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_880.Variant.TypeIndex])(&local_880);
      bVar2 = true;
      bVar4 = false;
      pvVar10 = pvVar5;
      pvVar13 = local_8c0;
    }
    iVar12 = iVar11 + -1;
    local_880.Variant.TypeIndex = 2;
    if (iVar11 == 0) {
      iVar12 = 0;
    }
    uVar8 = (ulong64)iVar12;
    if (local_868.End < local_868.CurPos + uVar8) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,uVar8);
    }
    if (iVar12 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy(local_868.CurPos,pvVar5,uVar8 * 2);
      local_868.CurPos = (wchar_t *)((longlong)pvVar5 + uVar8 * 2);
    }
    if ((bVar4) && (pvVar13 != (void *)0x0)) {
      FMemory::Free(pvVar13);
    }
    if ((bVar2) && (pvVar10 != (void *)0x0)) {
      FMemory::Free(pvVar10);
    }
    if (param_2.bUseDisplayName != false) {
      if (local_868.End < local_868.CurPos + 2) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,2);
      }
      pvVar5 = FGenericPlatformString::Memcpy(local_868.CurPos,L"\"\n",4);
      local_868.CurPos = (wchar_t *)((longlong)pvVar5 + 4);
    }
    uVar9 = (ulonglong)local_880.Variant.TypeIndex;
    if (2 < local_880.Variant.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(&local_880);
  }
  this_00 = local_890;
  pFVar6 = local_898;
  pFVar3 = local_8a0;
  if ((local_8a0->SourceToReevaluate).Index != -1) {
    if (local_868.End < local_868.CurPos + 0xc) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,0xc);
    }
    pvVar5 = FGenericPlatformString::Memcpy(local_868.CurPos,L"SourceName: ",0x18);
    local_868.CurPos = (wchar_t *)((longlong)pvVar5 + 0x18);
    pFVar7 = UMVVMViewClass::GetSource
                       (this_00,(FMVVMViewClass_SourceKey)(pFVar3->SourceToReevaluate).Index);
    local_8c8 = pFVar7->PropertyName;
    ::FName::AppendString(&local_8c8,&local_868);
  }
  if (local_868.End < local_868.CurPos + 0xc) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,0xc);
  }
  pvVar5 = FGenericPlatformString::Memcpy(local_868.CurPos,L", Function: ",0x18);
  local_868.CurPos = (wchar_t *)((longlong)pvVar5 + 0x18);
  local_888 = pFVar3->UserWidgetFunctionName;
  ::FName::AppendString(&local_888,&local_868);
  if (local_868.End < local_868.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,1);
  }
  *local_868.CurPos = L'\0';
  ::FString::FString(pFVar6,local_868.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return pFVar6;
}

