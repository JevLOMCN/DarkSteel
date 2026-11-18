// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationTest
// Functions: 6

// StaticStruct @ 148becff0

UScriptStruct * __cdecl FAutomationTestExcludelistEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutomationTestExcludelistEntry.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationTest();
    Z_Registration_Info_UScriptStruct_FAutomationTestExcludelistEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry,(UObject *)pUVar1
                         ,L"AutomationTestExcludelistEntry");
  }
  return Z_Registration_Info_UScriptStruct_FAutomationTestExcludelistEntry.OuterSingleton;
}

// FAutomationTestExcludelistEntry @ 148bf1800

FAutomationTestExcludelistEntry * __thiscall
FAutomationTestExcludelistEntry::FAutomationTestExcludelistEntry
          (FAutomationTestExcludelistEntry *this,FAutomationTestExcludelistEntry *param_1)

{
  ::FString::FString(&this->FullTestName,&param_1->FullTestName);
  this->bIsPropagated = param_1->bIsPropagated;
  *(undefined8 *)&(this->Platforms).Elements = 0;
  *(undefined8 *)&(this->Platforms).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Platforms).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Platforms).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Platforms).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Platforms).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Platforms).Elements.field_0x34 = 0;
  (this->Platforms).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Platforms).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->Platforms,&param_1->Platforms);
  this->Map = param_1->Map;
  this->Test = param_1->Test;
  this->Reason = param_1->Reason;
  *(undefined8 *)&(this->RHIs).Elements = 0;
  *(undefined8 *)&(this->RHIs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RHIs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RHIs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RHIs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RHIs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RHIs).Elements.field_0x34 = 0;
  (this->RHIs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RHIs).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=(&this->RHIs,&param_1->RHIs);
  this->Warn = param_1->Warn;
  return this;
}

// ~FAutomationTestExcludelistEntry @ 148bf1cf0

void __thiscall
FAutomationTestExcludelistEntry::~FAutomationTestExcludelistEntry
          (FAutomationTestExcludelistEntry *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  (this->RHIs).HashSize = 0;
  FVar1 = (this->RHIs).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RHIs).Elements);
  (this->Platforms).HashSize = 0;
  FVar1 = (this->Platforms).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Platforms).Elements);
  pFVar2 = (this->FullTestName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Finalize @ 148bf2b50

void __thiscall FAutomationTestExcludelistEntry::Finalize(FAutomationTestExcludelistEntry *this)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  FAutomationTestExcludelistEntry *pFVar6;
  int iVar7;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (1 < (this->FullTestName).Data.ArrayNum) {
    return;
  }
  pFVar5 = ::FName::ToString(&this->Test,&local_18);
  ::FString::TrimStartAndEnd(pFVar5,&local_58);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar7 = FunctionalTestsPreFix.Data.ArrayNum + -1;
  FVar2.Data = FunctionalTestsPreFix.Data.AllocatorInstance.Data;
  if (FunctionalTestsPreFix.Data.ArrayNum == 0) {
    iVar7 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  bVar3 = ::FString::StartsWith(&local_58,(wchar_t *)FVar2.Data,iVar7,IgnoreCase);
  pFVar5 = ::FName::ToString(&this->Map,&local_18);
  ::FString::TrimStartAndEnd(pFVar5,&local_38);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  bVar4 = ::FString::StartsWith(&local_38,L"/",1,IgnoreCase);
  if (bVar4) {
    if (!bVar3) {
      ::FString::ConcatFF(&local_18,&FunctionalTestsPreFix,&local_38);
      ::FString::ConcatFC(&local_28,&local_18,L".");
      ::FString::ConcatFF(&local_48,&local_28,&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      local_58.Data.ArrayNum = local_48.Data.ArrayNum;
      local_58.Data.ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (!bVar3) goto LAB_148bf2d40;
  pFVar5 = ::FString::Replace(&local_58,&local_28,L"./Game/",L".",IgnoreCase);
  pFVar5 = ::FString::Replace(pFVar5,&local_18,L"/",L".",IgnoreCase);
  if (&local_58 != pFVar5) {
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_58.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_148bf2d40:
  pFVar6 = (FAutomationTestExcludelistEntry *)::FString::ToLower(&local_58,&local_18);
  if (this != pFVar6) {
    pFVar1 = (this->FullTestName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->FullTestName).Data.AllocatorInstance.Data =
         (pFVar6->FullTestName).Data.AllocatorInstance.Data;
    (pFVar6->FullTestName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->FullTestName).Data.ArrayNum = (pFVar6->FullTestName).Data.ArrayNum;
    (this->FullTestName).Data.ArrayMax = (pFVar6->FullTestName).Data.ArrayMax;
    (pFVar6->FullTestName).Data.ArrayNum = 0;
    (pFVar6->FullTestName).Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// GetStringForHash @ 148bf4f10

FString * __thiscall
FAutomationTestExcludelistEntry::GetStringForHash
          (FAutomationTestExcludelistEntry *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar1 = this->Warn;
  pFVar2 = SetToString(&local_18,&this->RHIs);
  pFVar3 = ::FName::ToString(&this->Reason,&local_28);
  ::FString::ConcatFF(&local_38,&this->FullTestName,pFVar3);
  ::FString::ConcatFF(&local_48,&local_38,pFVar2);
  pwVar4 = L"0";
  if (bVar1 != false) {
    pwVar4 = L"1";
  }
  ::FString::ConcatFC(__return_storage_ptr__,&local_48,pwVar4);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// NumRHIType @ 148bf5fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

schar __thiscall FAutomationTestExcludelistEntry::NumRHIType(FAutomationTestExcludelistEntry *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar7;
  int *piVar8;
  undefined1 auStack_98 [32];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pTVar7 = FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings();
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_OptionNames.Elements._0_8_ = 0;
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_OptionNames.Elements._8_8_ = 0;
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_OptionNames.Elements._32_8_ = 0;
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_OptionNames.Elements._40_4_ = 0;
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_OptionNames.Elements._44_4_ = 0x80;
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_OptionNames.Elements._48_4_ = 0xffffffff;
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_OptionNames.Elements._52_4_ = 0;
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_OptionNames.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_OptionNames.HashSize = 0;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                (&`public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'
                  ::__l2::AllRHI_OptionNames,pTVar7);
      atexit(`FAutomationTestExcludelistEntry::NumRHIType'::__l2::
             _dynamic_atexit_destructor_for__AllRHI_OptionNames__);
      _Init_thread_footer(&`public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar7 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Difference
                     (&this->RHIs,&local_78,
                      &`public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'
                       ::__l2::AllRHI_OptionNames);
  iVar1 = *(int *)&(this->RHIs).Elements.field_0x8;
  iVar2 = *(int *)&(this->RHIs).Elements.field_0x34;
  iVar3 = *(int *)&(pTVar7->Elements).field_0x8;
  iVar4 = *(int *)&(pTVar7->Elements).field_0x34;
  local_78.HashSize = 0;
  if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_78.Elements);
  bVar5 = iVar3 - iVar4 < iVar1 - iVar2;
  if (*piVar8 < `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      pTVar7 = FAutomationTestExcludeOptions::
               GetAllRHIOptionNames<enum_ETEST_RHI_FeatureLevel_Options>();
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_FeatureLevel_OptionNames.Elements._0_8_ = 0;
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_FeatureLevel_OptionNames.Elements._8_8_ = 0;
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_FeatureLevel_OptionNames.Elements._32_8_ = 0;
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_FeatureLevel_OptionNames.Elements._40_4_ = 0;
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_FeatureLevel_OptionNames.Elements._44_4_ = 0x80;
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_FeatureLevel_OptionNames.Elements._48_4_ = 0xffffffff;
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_FeatureLevel_OptionNames.Elements._52_4_ = 0;
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_FeatureLevel_OptionNames.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_FeatureLevel_OptionNames.HashSize = 0;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                (&`public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'
                  ::__l2::AllRHI_FeatureLevel_OptionNames,pTVar7);
      atexit(`FAutomationTestExcludelistEntry::NumRHIType'::__l2::
             _dynamic_atexit_destructor_for__AllRHI_FeatureLevel_OptionNames__);
      _Init_thread_footer(&`public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  pTVar7 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Difference
                     (&this->RHIs,&local_78,
                      &`public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'
                       ::__l2::AllRHI_FeatureLevel_OptionNames);
  iVar1 = *(int *)&(this->RHIs).Elements.field_0x8;
  iVar2 = *(int *)&(this->RHIs).Elements.field_0x34;
  iVar3 = *(int *)&(pTVar7->Elements).field_0x8;
  iVar4 = *(int *)&(pTVar7->Elements).field_0x34;
  local_78.HashSize = 0;
  if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_78.Elements);
  cVar6 = bVar5 + '\x01';
  if (iVar1 - iVar2 <= iVar3 - iVar4) {
    cVar6 = bVar5;
  }
  return cVar6;
}

