// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 4

// StaticStruct @ 14a738d30

UScriptStruct * __cdecl FMVVMViewClass_Binding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_Binding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UScriptStruct_FMVVMViewClass_Binding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewClass_Binding,(UObject *)pUVar1,
                         L"MVVMViewClass_Binding");
  }
  return Z_Registration_Info_UScriptStruct_FMVVMViewClass_Binding.OuterSingleton;
}

// operator() @ 14a740f50

void __thiscall `FMVVMViewClass_Binding::ToString'::__l58::<lambda_2>::operator()(void *this)

{
  TStringBuilderBase<wchar_t> *this_00;
  char *pcVar1;
  
  pcVar1 = *(char **)((longlong)this + 8);
  if (*pcVar1 != '\0') {
    this_00 = *(TStringBuilderBase<wchar_t> **)this;
    if (this_00->End < this_00->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(this_00,1);
    }
    *this_00->CurPos = L'|';
    this_00->CurPos = this_00->CurPos + 1;
    pcVar1 = *(char **)((longlong)this + 8);
  }
  *pcVar1 = '\x01';
  return;
}

// GetExecuteMode @ 14a751440

EMVVMExecutionMode __thiscall FMVVMViewClass_Binding::GetExecuteMode(FMVVMViewClass_Binding *this)

{
  code *pcVar1;
  bool bVar2;
  EMVVMExecutionMode EVar3;
  longlong *plVar4;
  FLocal FVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            EVar3 = (*pcVar1)();
            return EVar3;
          }
        }
      }
      plVar4 = (longlong *)
               (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                         (IConsoleManager::Singleton,L"MVVM.DefaultExecutionMode",1);
      if (plVar4 == (longlong *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1675003697450451342>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMViewClass.cpp"
                           ,0x18e,"CVarDefaultExecutionMode");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          EVar3 = (*pcVar1)();
          return EVar3;
        }
      }
      else {
        ::Local.DefaultMode = (**(code **)(*plVar4 + 200))(plVar4);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5.DefaultMode = ::Local.DefaultMode;
  if ((this->Flags & 4) != 0) {
    FVar5.DefaultMode = this->ExecutionMode;
  }
  if (FVar5.DefaultMode == DelayedWhenSharedElseImmediate) {
    return this->Flags >> 1 & Delayed;
  }
  return FVar5.DefaultMode;
}

// ToString @ 14a7614b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FMVVMViewClass_Binding::ToString
          (FMVVMViewClass_Binding *this,FString *__return_storage_ptr__,UMVVMViewClass *param_1,
          FToStringArgs param_2)

{
  uchar uVar1;
  FMVVMVCompiledFieldPath FVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  void *pvVar9;
  FString *pFVar10;
  void **ppvVar11;
  void *pvVar12;
  UPackage *pUVar13;
  FName this_00;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulong64 uVar17;
  undefined3 in_register_0000008d;
  char *pcVar18;
  char cVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStack_9a8 [32];
  char local_988;
  char local_987;
  int local_984;
  int local_980;
  FScriptContainerElement *local_978;
  char *local_970;
  FScriptContainerElement *local_968;
  void *local_960;
  undefined4 local_958;
  undefined4 local_954;
  void *local_950;
  undefined4 local_948;
  undefined4 uStack_944;
  FString local_940;
  FString *local_930;
  TStringBuilderBase<wchar_t> *local_928;
  char *local_920;
  undefined1 local_918 [8];
  FString local_910;
  FString local_900;
  FString local_8f0;
  FString local_8e0;
  FString local_8d0;
  FString local_8c0;
  TValueOrError<FString,FString> local_8b0;
  TVariant<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<FString,FString>::FEmptyType>
  local_898;
  TVariant<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<FString,FString>::FEmptyType>
  local_880;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  pcVar18 = (char *)CONCAT35(in_register_0000008d,param_2);
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_9a8;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.End = (wchar_t *)local_48;
  local_984 = 0;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  cVar19 = '\0';
  local_970 = pcVar18;
  local_930 = __return_storage_ptr__;
  if (pcVar18[3] == '\0') goto LAB_14a761e44;
  if ((((this->Binding).SourceFieldPath.Num < 0) && (uVar1 = (this->Binding).Type, uVar1 != '\x02'))
     && (uVar1 != '\x03')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((((this->Binding).ConversionFunctionFieldPath.Num < 0) &&
      (uVar1 = (this->Binding).Type, uVar1 != '\0')) && (uVar1 != '\x03')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (((!bVar6) || ((this->Binding).DestinationFieldPath.Num < 0)) || (!bVar7)) {
    pvVar9 = FGenericPlatformString::Memcpy(local_848,L"!!Invalid Binding Error!!",0x32);
    local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 0x32);
    goto LAB_14a761e44;
  }
  local_987 = '\x01';
  pvVar9 = FGenericPlatformString::Memcpy(local_848,L"Binding: ",0x12);
  FVar2 = (this->Binding).SourceFieldPath;
  local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 0x12);
  local_968 = (FScriptContainerElement *)0x0;
  bVar6 = false;
  local_984 = 0;
  local_978 = (FScriptContainerElement *)0x0;
  local_980 = 0;
  if (-1 < (int)FVar2) {
    FMVVMCompiledBindingLibrary::FieldPathToString
              (&param_1->BindingLibrary,(TValueOrError<FString,FString> *)&local_898,FVar2,
               (bool)*pcVar18);
    uVar14 = (ulonglong)local_898.TypeIndex;
    if ((2 < uVar14) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FString *)(*pcVar3)();
      return pFVar10;
    }
    bVar6 = *(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FString,FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar14) == '\0';
    if (bVar6) {
      pFVar10 = TValueOrError<FString,FString>::StealError
                          ((TValueOrError<FString,FString> *)&local_898,&local_910);
    }
    else {
      pFVar10 = TValueOrError<FString,FString>::StealValue
                          ((TValueOrError<FString,FString> *)&local_898,&local_900);
    }
    if (&local_8d0 != pFVar10) {
      local_968 = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_984 = (pFVar10->Data).ArrayNum;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if ((bVar6) && (local_910.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_910.Data.AllocatorInstance.Data);
    }
    if ((!bVar6) && (local_900.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_900.Data.AllocatorInstance.Data);
    }
    bVar6 = TVariant<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<FString,FString>::FEmptyType>
            ::IsType<TValueOrError<FString,FString>::FWrapErrorType>(&local_898);
    if ((2 < local_898.TypeIndex) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FString *)(*pcVar3)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_898.TypeIndex])(&local_898);
  }
  FMVVMCompiledBindingLibrary::FieldPathToString
            (&param_1->BindingLibrary,&local_8b0,(this->Binding).DestinationFieldPath,(bool)*pcVar18
            );
  uVar14 = (ulonglong)local_8b0.Variant.TypeIndex;
  if ((2 < uVar14) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FString *)(*pcVar3)();
    return pFVar10;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FString,FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar14) == '\0') {
    bVar4 = false;
    bVar7 = true;
    if ((local_8b0.Variant.TypeIndex != 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FString *)(*pcVar3)();
      return pFVar10;
    }
    pvVar9 = (void *)local_8b0.Variant._padding_;
    local_958 = (undefined4)local_8b0.Variant._padding_;
    local_954 = local_8b0.Variant._padding_._4_4_;
    local_8b0.Variant._padding_ = 0;
    local_960 = (void *)local_8b0.Variant._padding_;
    local_8b0.Variant._padding_ = 0;
    if ((2 < local_8b0.Variant.TypeIndex) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FString *)(*pcVar3)();
      return pFVar10;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_8b0.Variant.TypeIndex] !=
        UE::Core::Private::TDestructorCaller<TValueOrError<FString,FString>::FEmptyType>::Destruct)
    {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_8b0.Variant.TypeIndex])();
    }
    ppvVar11 = &local_960;
  }
  else {
    bVar4 = true;
    bVar7 = false;
    if ((local_8b0.Variant.TypeIndex != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FString *)(*pcVar3)();
      return pFVar10;
    }
    pvVar9 = (void *)local_8b0.Variant._padding_;
    local_948 = (undefined4)local_8b0.Variant._padding_;
    uStack_944 = local_8b0.Variant._padding_._4_4_;
    local_8b0.Variant._padding_ = 0;
    local_950 = (void *)local_8b0.Variant._padding_;
    local_8b0.Variant._padding_ = 0;
    if ((2 < local_8b0.Variant.TypeIndex) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FString *)(*pcVar3)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_8b0.Variant.TypeIndex])();
    ppvVar11 = &local_950;
  }
  *ppvVar11 = (void *)0x0;
  iVar16 = *(int *)(ppvVar11 + 1);
  local_8b0.Variant.TypeIndex = 2;
  ppvVar11[1] = (void *)0x0;
  if ((bVar7) && (local_960 != (void *)0x0)) {
    FMemory::Free(local_960);
  }
  if ((bVar4) && (local_950 != (void *)0x0)) {
    FMemory::Free(local_950);
  }
  if (bVar6 == false) {
    uVar14 = (ulonglong)local_8b0.Variant.TypeIndex;
    if ((2 < uVar14) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FString *)(*pcVar3)();
      return pFVar10;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar14 + 4) != '\0') goto LAB_14a76191d;
    bVar6 = false;
  }
  else {
LAB_14a76191d:
    bVar6 = true;
  }
  uVar14 = (ulonglong)local_8b0.Variant.TypeIndex;
  if ((2 < local_8b0.Variant.TypeIndex) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FString *)(*pcVar3)();
    return pFVar10;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar14])(&local_8b0);
  FVar2 = (this->Binding).ConversionFunctionFieldPath;
  pFVar20 = local_978;
  if (-1 < (int)FVar2) {
    FMVVMCompiledBindingLibrary::FieldPathToString
              (&param_1->BindingLibrary,(TValueOrError<FString,FString> *)&local_880,FVar2,
               (bool)*local_970);
    uVar14 = (ulonglong)local_880.TypeIndex;
    if ((2 < uVar14) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FString *)(*pcVar3)();
      return pFVar10;
    }
    bVar7 = *(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FString,FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar14) == '\0';
    if (bVar7) {
      pFVar10 = TValueOrError<FString,FString>::StealError
                          ((TValueOrError<FString,FString> *)&local_880,&local_8f0);
    }
    else {
      pFVar10 = TValueOrError<FString,FString>::StealValue
                          ((TValueOrError<FString,FString> *)&local_880,&local_8e0);
    }
    if (&local_8c0 != pFVar10) {
      local_978 = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_980 = (pFVar10->Data).ArrayNum;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    pFVar20 = local_978;
    if ((bVar7) && (local_8f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_8f0.Data.AllocatorInstance.Data);
    }
    if ((!bVar7) && (local_8e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_8e0.Data.AllocatorInstance.Data);
    }
    if ((bVar6) ||
       (bVar7 = TVariant<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<FString,FString>::FEmptyType>
                ::IsType<TValueOrError<FString,FString>::FWrapErrorType>(&local_880), bVar7)) {
      bVar6 = true;
    }
    if ((2 < local_880.TypeIndex) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FString *)(*pcVar3)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_880.TypeIndex])(&local_880);
  }
  if (bVar6) {
    if (local_868.End < local_868.CurPos + 7) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,7);
    }
    pvVar12 = FGenericPlatformString::Memcpy(local_868.CurPos,L"Error: ",0xe);
    local_868.CurPos = (wchar_t *)((longlong)pvVar12 + 0xe);
  }
  cVar19 = *local_970;
  if (cVar19 != '\0') {
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\"';
    local_868.CurPos = local_868.CurPos + 1;
  }
  iVar15 = iVar16 + -1;
  if (iVar16 == 0) {
    iVar15 = 0;
  }
  uVar17 = (ulong64)iVar15;
  if (local_868.End < local_868.CurPos + uVar17) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,uVar17);
  }
  if (iVar15 != 0) {
    pvVar12 = FGenericPlatformString::Memcpy(local_868.CurPos,pvVar9,uVar17 * 2);
    local_868.CurPos = (wchar_t *)(uVar17 * 2 + (longlong)pvVar12);
  }
  if (cVar19 != '\0') {
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\"';
    local_868.CurPos = local_868.CurPos + 1;
  }
  if ((this->Binding).Type == '\x03') {
    if (local_868.End < local_868.CurPos + 2) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,2);
    }
    pvVar12 = FGenericPlatformString::Memcpy(local_868.CurPos,L"()",4);
    local_868.CurPos = (wchar_t *)((longlong)pvVar12 + 4);
  }
  else {
    if (local_868.End < local_868.CurPos + 3) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,3);
    }
    pvVar12 = FGenericPlatformString::Memcpy(local_868.CurPos,L" = ",6);
    local_868.CurPos = (wchar_t *)((longlong)pvVar12 + 6);
    if (-1 < (this->Binding).ConversionFunctionFieldPath.Num) {
      if (cVar19 != '\0') {
        if (local_868.End < (wchar_t *)((longlong)pvVar12 + 8)) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,1);
        }
        *local_868.CurPos = L'\"';
        local_868.CurPos = local_868.CurPos + 1;
      }
      iVar16 = local_980 + -1;
      if (local_980 == 0) {
        iVar16 = 0;
      }
      uVar17 = (ulong64)iVar16;
      if (local_868.End < local_868.CurPos + uVar17) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,uVar17);
      }
      if (iVar16 != 0) {
        pvVar12 = FGenericPlatformString::Memcpy(local_868.CurPos,pFVar20,uVar17 * 2);
        local_868.CurPos = (wchar_t *)(uVar17 * 2 + (longlong)pvVar12);
      }
      if (cVar19 != '\0') {
        if (local_868.End < local_868.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,1);
        }
        *local_868.CurPos = L'\"';
        local_868.CurPos = local_868.CurPos + 1;
      }
      if (local_868.End < local_868.CurPos + 3) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,3);
      }
      pvVar12 = FGenericPlatformString::Memcpy(local_868.CurPos,L" ( ",6);
      local_868.CurPos = (wchar_t *)((longlong)pvVar12 + 6);
    }
    if ((this->Binding).Type != '\x02') {
      if (cVar19 != '\0') {
        if (local_868.End < local_868.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,1);
        }
        *local_868.CurPos = L'\"';
        local_868.CurPos = local_868.CurPos + 1;
      }
      iVar16 = local_984 + -1;
      if (local_984 == 0) {
        iVar16 = 0;
      }
      uVar17 = (ulong64)iVar16;
      if (local_868.End < local_868.CurPos + uVar17) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,uVar17);
      }
      if (iVar16 != 0) {
        pvVar12 = FGenericPlatformString::Memcpy(local_868.CurPos,local_968,uVar17 * 2);
        local_868.CurPos = (wchar_t *)(uVar17 * 2 + (longlong)pvVar12);
      }
      if (cVar19 != '\0') {
        if (local_868.End < local_868.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,1);
        }
        *local_868.CurPos = L'\"';
        local_868.CurPos = local_868.CurPos + 1;
      }
    }
    if (-1 < (this->Binding).ConversionFunctionFieldPath.Num) {
      operator<<<wchar_t,wchar_t_const_(&)[3]>(&local_868,(wchar_t (*) [3])L" )");
    }
  }
  if (local_978 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978);
  }
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  pcVar18 = local_970;
  cVar19 = local_987;
  if (local_968 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_968);
    pcVar18 = local_970;
    cVar19 = local_987;
  }
LAB_14a761e44:
  if (pcVar18[4] != '\0') {
    if (cVar19 != '\0') {
      if (local_868.End < local_868.CurPos + 5) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,5);
      }
      pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L"\n    ",10);
      local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 10);
    }
    cVar19 = '\x01';
    if (local_868.End < local_868.CurPos + 0xb) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,0xb);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L"Sources: 0x",0x16);
    local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 0x16);
    ::FString::PrintfImpl(&local_940,L"%llx");
    FVar5.Data = local_940.Data.AllocatorInstance.Data;
    iVar16 = local_940.Data.ArrayNum + -1;
    if (local_940.Data.ArrayNum == 0) {
      iVar16 = 0;
    }
    uVar17 = (ulong64)iVar16;
    if (local_868.End < local_868.CurPos + uVar17) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,uVar17);
    }
    if (iVar16 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,FVar5.Data,uVar17 * 2);
      local_868.CurPos = (wchar_t *)(uVar17 * 2 + (longlong)pvVar9);
    }
    if (local_940.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_940.Data.AllocatorInstance.Data);
    }
  }
  if (pcVar18[1] != '\0') {
    if (cVar19 != '\0') {
      if (local_868.End < local_868.CurPos + 5) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,5);
      }
      pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L"\n    ",10);
      local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 10);
    }
    if ((this->Flags & 4) != 0) {
      if (local_868.End < local_868.CurPos + 8) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,8);
      }
      pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L", Mode: ",0x10);
      local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 0x10);
      if (Z_Registration_Info_UEnum_EMVVMExecutionMode.OuterSingleton == (UEnum *)0x0) {
        pUVar13 = Z_Construct_UPackage__Script_ModelViewViewModel();
        Z_Registration_Info_UEnum_EMVVMExecutionMode.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode,
                           (UObject *)pUVar13,L"EMVVMExecutionMode");
      }
      this_00 = UEnum::GetNameByValue
                          (Z_Registration_Info_UEnum_EMVVMExecutionMode.OuterSingleton,
                           (long64)local_918);
      ::FName::AppendString((FName *)this_00,&local_868);
    }
    if (local_868.End < local_868.CurPos + 9) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,9);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L", Flags: ",0x12);
    local_928 = &local_868;
    local_920 = &local_988;
    local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 0x12);
    local_988 = '\0';
    if ((this->Flags & 1) != 0) {
      local_988 = '\x01';
      if (local_868.End < (wchar_t *)((longlong)pvVar9 + 0x1e)) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,6);
      }
      pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L"OneWay",0xc);
      local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 0xc);
    }
    if ((this->Flags & 2) != 0) {
      if (local_988 != '\0') {
        if (local_868.End < local_868.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,1);
        }
        *local_868.CurPos = L'|';
        local_868.CurPos = local_868.CurPos + 1;
      }
      local_988 = '\x01';
      if (local_868.End < local_868.CurPos + 6) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,6);
      }
      pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L"Shared",0xc);
      local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 0xc);
    }
    if ((this->Flags & 4) != 0) {
      if (local_988 != '\0') {
        if (local_868.End < local_868.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,1);
        }
        *local_868.CurPos = L'|';
        local_868.CurPos = local_868.CurPos + 1;
      }
      local_988 = '\x01';
      if (local_868.End < local_868.CurPos + 0x13) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,0x13);
      }
      pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L"OverrideExecuteMode",0x26);
      local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 0x26);
    }
    if ((this->Flags & 8) != 0) {
      if (local_988 != '\0') {
        if (local_868.End < local_868.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,1);
        }
        *local_868.CurPos = L'|';
        local_868.CurPos = local_868.CurPos + 1;
      }
      local_988 = '\x01';
      if (local_868.End < local_868.CurPos + 7) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,7);
      }
      pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L"Enabled",0xe);
      local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 0xe);
    }
    uVar1 = (this->Binding).Type;
    if (uVar1 == '\x03') {
      if (local_988 != '\0') {
        if (local_868.End < local_868.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,1);
        }
        *local_868.CurPos = L'|';
        local_868.CurPos = local_868.CurPos + 1;
      }
      local_988 = '\x01';
      if (local_868.End < local_868.CurPos + 7) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,7);
      }
      pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L"Complex",0xe);
      local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 0xe);
    }
    else if (uVar1 == '\x02') {
      if (local_988 != '\0') {
        if (local_868.End < local_868.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,1);
        }
        *local_868.CurPos = L'|';
        local_868.CurPos = local_868.CurPos + 1;
      }
      local_988 = '\x01';
      if (local_868.End < local_868.CurPos + 0x11) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,0x11);
      }
      pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L"ComplexConversion",0x22);
      local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 0x22);
    }
    else if (uVar1 == '\x01') {
      `FMVVMViewClass_Binding::ToString'::__l58::<lambda_2>::operator()(&local_928);
      if (local_868.End < local_868.CurPos + 0x10) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,0x10);
      }
      pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L"SimpleConversion",0x20);
      local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 0x20);
    }
  }
  if (local_868.End < local_868.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,1);
  }
  *local_868.CurPos = L'\0';
  ::FString::FString(local_930,local_868.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return local_930;
}

