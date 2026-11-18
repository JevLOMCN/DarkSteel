// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cc6a80

EAutomationTestFlags __thiscall FTCharToUTF8Test::GetTestFlags(FTCharToUTF8Test *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc6a90

bool __thiscall FTCharToUTF8Test::IsStressTest(FTCharToUTF8Test *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc6aa0

uint __thiscall FTCharToUTF8Test::GetRequiredDeviceNum(FTCharToUTF8Test *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc6ab0

FString * __thiscall
FTCharToUTF8Test::GetTestSourceFileName(FTCharToUTF8Test *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TCharToUTF8.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc6ae0

int __thiscall FTCharToUTF8Test::GetTestSourceFileLine(FTCharToUTF8Test *this)

{
  return 0xb;
}

// GetTests @ 141cc6af0

/* WARNING: Removing unreachable block (ram,0x000141cc6c6e) */

void __thiscall
FTCharToUTF8Test::GetTests
          (FTCharToUTF8Test *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141cc6c90

bool __thiscall FTCharToUTF8Test::RunTest(FTCharToUTF8Test *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc6cc0

FString * __thiscall
FTCharToUTF8Test::GetBeautifiedTestName(FTCharToUTF8Test *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTCharToUTF8Test @ 141ced8e0

FTCharToUTF8Test * __thiscall
FTCharToUTF8Test::FTCharToUTF8Test(FTCharToUTF8Test *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FTCharToUTF8Test__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::TCharToUtf8");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// TestBody @ 141d4ab10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FTCharToUTF8Test::TestBody(FTCharToUTF8Test *this,FString *param_1)

{
  uint uVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  char *pcVar4;
  int iVar5;
  size_t sVar6;
  FAutomationTestFramework *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ENullTerminatedString EVar14;
  undefined1 auStack_2a8 [32];
  FString local_288;
  undefined2 local_278;
  undefined1 local_276;
  TStringView<char8_t> local_268;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_258;
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_1b8;
  TStringView<char8_t> local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  ::FString::FString((FString *)&local_98,L"ן");
  local_278 = _s__;
  local_276 = DAT_150780606;
  local_258._padding_ = 0;
  iVar11 = 0;
  if (local_98.Size == 0) {
    pwVar9 = L"";
LAB_141d4aba0:
    sVar6 = wcslen(pwVar9);
    local_258.StringLength = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar9,(int)sVar6);
    uVar1 = local_258.StringLength + 1;
    uVar12 = uVar1;
    if (uVar1 < 0x81) {
      if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
          (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
        uVar12 = 0;
        goto LAB_141d4abd7;
      }
    }
    else {
LAB_141d4abd7:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_258._padding_,0,uVar12,1);
    }
    local_258.Ptr = (char *)&local_258;
    if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
        (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
      local_258.Ptr = (char *)local_258._padding_;
    }
    UE::Core::Private::Convert((uchar *)local_258.Ptr,uVar1,pwVar9,(int)sVar6 + 1);
  }
  else {
    pwVar9 = (wchar_t *)local_98.DataPtr;
    if ((wchar_t *)local_98.DataPtr != (wchar_t *)0x0) goto LAB_141d4aba0;
    local_258.StringLength = 0;
    local_258.Ptr = (char *)0x0;
  }
  pcVar4 = local_258.Ptr;
  local_1b8._padding_ = 0;
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258.Ptr ==
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    local_1b8.Ptr = (wchar_t *)0x0;
    local_1b8.StringLength = 0;
  }
  else {
    sVar6 = strlen(local_258.Ptr);
    local_1b8.StringLength =
         UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)pcVar4,(int)sVar6);
    uVar1 = local_1b8.StringLength + 1;
    uVar12 = uVar1;
    if (uVar1 < 0x81) {
      if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
          (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
        uVar12 = 0;
        goto LAB_141d4ac57;
      }
    }
    else {
LAB_141d4ac57:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1b8._padding_,0,uVar12,2);
    }
    local_1b8.Ptr = (wchar_t *)&local_1b8;
    if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
        (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
      local_1b8.Ptr = (wchar_t *)local_1b8._padding_;
    }
    UE::Core::Private::Convert(local_1b8.Ptr,uVar1,(uchar *)pcVar4,(int)sVar6 + 1);
  }
  iVar5 = strcmp((char *)&local_278,local_258.Ptr);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    pFVar8 = ::FString::FString((FString *)&local_268,
                                L"Expected test string 1 to have different encoded value");
    (*pcVar3)(pFVar2,pFVar8,0);
    if (local_268.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  pwVar9 = L"";
  if (local_98.Size != 0) {
    pwVar9 = (wchar_t *)local_98.DataPtr;
  }
  iVar5 = wcscmp(pwVar9,local_1b8.Ptr);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    pFVar8 = ::FString::FString((FString *)&local_268,
                                L"Expected test string 1 to have different decoded value");
    (*pcVar3)(pFVar2,pFVar8,0);
    if (local_268.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
      (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
    FMemory::Free((void *)local_1b8._padding_);
  }
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_1b8._padding_ = 0;
  sVar6 = strlen((char *)&local_278);
  local_1b8.StringLength =
       UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)&local_278,(int)sVar6);
  uVar1 = local_1b8.StringLength + 1;
  uVar12 = uVar1;
  if (uVar1 < 0x81) {
    if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
        (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
      uVar12 = 0;
      goto LAB_141d4adbb;
    }
  }
  else {
LAB_141d4adbb:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1b8._padding_,0,uVar12,2);
  }
  local_1b8.Ptr = (wchar_t *)&local_1b8;
  if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
      (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
    local_1b8.Ptr = (wchar_t *)local_1b8._padding_;
  }
  UE::Core::Private::Convert(local_1b8.Ptr,uVar1,(uchar *)&local_278,(int)sVar6 + 1);
  pwVar9 = local_1b8.Ptr;
  local_258._padding_ = 0;
  if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8.Ptr ==
      (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
    local_258.Ptr = (char *)0x0;
    local_258.StringLength = 0;
  }
  else {
    sVar6 = wcslen(local_1b8.Ptr);
    local_258.StringLength = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar9,(int)sVar6);
    uVar1 = local_258.StringLength + 1;
    uVar12 = uVar1;
    if (uVar1 < 0x81) {
      if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
          (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
        uVar12 = 0;
        goto LAB_141d4ae3f;
      }
    }
    else {
LAB_141d4ae3f:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_258._padding_,0,uVar12,1);
    }
    local_258.Ptr = (char *)&local_258;
    if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
        (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
      local_258.Ptr = (char *)local_258._padding_;
    }
    UE::Core::Private::Convert((uchar *)local_258.Ptr,uVar1,pwVar9,(int)sVar6 + 1);
  }
  pwVar9 = L"";
  if (local_98.Size != 0) {
    pwVar9 = (wchar_t *)local_98.DataPtr;
  }
  iVar5 = wcscmp(pwVar9,local_1b8.Ptr);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    pFVar8 = ::FString::FString((FString *)&local_268,
                                L"Expected test string 2 to have different encoded value");
    (*pcVar3)(pFVar2,pFVar8,0);
    if (local_268.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  iVar5 = strcmp((char *)&local_278,local_258.Ptr);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    pFVar8 = ::FString::FString((FString *)&local_268,
                                L"Expected test string 2 to have different decoded value");
    (*pcVar3)(pFVar2,pFVar8,0);
    if (local_268.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
      (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
    FMemory::Free((void *)local_1b8._padding_);
  }
  if ((wchar_t *)local_98.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_98.DataPtr);
  }
  ::FString::FString(&local_288,L"😆🀜");
  local_98.DataPtr = _s_____;
  local_98.Size._0_1_ = DAT_1507807e8;
  local_258._padding_ = 0;
  if (local_288.Data.ArrayNum == 0) {
    pwVar9 = L"";
LAB_141d4afb0:
    sVar6 = wcslen(pwVar9);
    local_258.StringLength = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar9,(int)sVar6);
    uVar1 = local_258.StringLength + 1;
    uVar12 = uVar1;
    if (uVar1 < 0x81) {
      if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
          (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
        uVar12 = 0;
        goto LAB_141d4afe7;
      }
    }
    else {
LAB_141d4afe7:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_258._padding_,0,uVar12,1);
    }
    local_258.Ptr = (char *)&local_258;
    if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
        (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
      local_258.Ptr = (char *)local_258._padding_;
    }
    UE::Core::Private::Convert((uchar *)local_258.Ptr,uVar1,pwVar9,(int)sVar6 + 1);
  }
  else {
    pwVar9 = (wchar_t *)local_288.Data.AllocatorInstance.Data;
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_141d4afb0;
    local_258.StringLength = 0;
    local_258.Ptr = (char *)0x0;
  }
  pcVar4 = local_258.Ptr;
  local_1b8._padding_ = 0;
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258.Ptr ==
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    local_1b8.Ptr = (wchar_t *)0x0;
    local_1b8.StringLength = 0;
  }
  else {
    sVar6 = strlen(local_258.Ptr);
    local_1b8.StringLength =
         UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)pcVar4,(int)sVar6);
    uVar1 = local_1b8.StringLength + 1;
    uVar12 = uVar1;
    if (uVar1 < 0x81) {
      if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
          (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
        uVar12 = 0;
        goto LAB_141d4b067;
      }
    }
    else {
LAB_141d4b067:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1b8._padding_,0,uVar12,2);
    }
    local_1b8.Ptr = (wchar_t *)&local_1b8;
    if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
        (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
      local_1b8.Ptr = (wchar_t *)local_1b8._padding_;
    }
    UE::Core::Private::Convert(local_1b8.Ptr,uVar1,(uchar *)pcVar4,(int)sVar6 + 1);
  }
  iVar5 = strcmp((char *)&local_98,local_258.Ptr);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    pFVar8 = ::FString::FString((FString *)&local_268,
                                L"Expected test string 3 to have different encoded value");
    (*pcVar3)(pFVar2,pFVar8,0);
    if (local_268.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_288.Data.ArrayNum != 0) {
    FVar10.Data = local_288.Data.AllocatorInstance.Data;
  }
  iVar5 = wcscmp((wchar_t *)FVar10.Data,local_1b8.Ptr);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    pFVar8 = ::FString::FString((FString *)&local_268,
                                L"Expected test string 3 to have different decoded value");
    (*pcVar3)(pFVar2,pFVar8,0);
    if (local_268.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
      (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
    FMemory::Free((void *)local_1b8._padding_);
  }
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_1b8._padding_ = 0;
  sVar6 = strlen((char *)&local_98);
  local_1b8.StringLength =
       UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)&local_98,(int)sVar6);
  uVar1 = local_1b8.StringLength + 1;
  uVar12 = uVar1;
  if (uVar1 < 0x81) {
    if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
        (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
      uVar12 = 0;
      goto LAB_141d4b1cd;
    }
  }
  else {
LAB_141d4b1cd:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1b8._padding_,0,uVar12,2);
  }
  local_1b8.Ptr = (wchar_t *)&local_1b8;
  if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
      (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
    local_1b8.Ptr = (wchar_t *)local_1b8._padding_;
  }
  UE::Core::Private::Convert(local_1b8.Ptr,uVar1,(uchar *)&local_98,(int)sVar6 + 1);
  pwVar9 = local_1b8.Ptr;
  local_258._padding_ = 0;
  if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8.Ptr ==
      (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
    local_258.Ptr = (char *)0x0;
    local_258.StringLength = 0;
  }
  else {
    sVar6 = wcslen(local_1b8.Ptr);
    local_258.StringLength = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar9,(int)sVar6);
    uVar1 = local_258.StringLength + 1;
    uVar12 = uVar1;
    if (uVar1 < 0x81) {
      if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
          (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
        uVar12 = 0;
        goto LAB_141d4b253;
      }
    }
    else {
LAB_141d4b253:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_258._padding_,0,uVar12,1);
    }
    local_258.Ptr = (char *)&local_258;
    if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
        (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
      local_258.Ptr = (char *)local_258._padding_;
    }
    UE::Core::Private::Convert((uchar *)local_258.Ptr,uVar1,pwVar9,(int)sVar6 + 1);
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_288.Data.ArrayNum != 0) {
    FVar10.Data = local_288.Data.AllocatorInstance.Data;
  }
  iVar5 = wcscmp((wchar_t *)FVar10.Data,local_1b8.Ptr);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    pFVar8 = ::FString::FString((FString *)&local_268,
                                L"Expected test string 4 to have different encoded value");
    (*pcVar3)(pFVar2,pFVar8,0);
    if (local_268.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  iVar5 = strcmp((char *)&local_98,local_258.Ptr);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    pFVar8 = ::FString::FString((FString *)&local_268,
                                L"Expected test string 4 to have different decoded value");
    (*pcVar3)(pFVar2,pFVar8,0);
    if (local_268.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
      (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
    FMemory::Free((void *)local_1b8._padding_);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_288,L"Iñtërnâtiônàlizætiøn");
  local_80 = DAT_15077c1b0;
  local_98.DataPtr = _s_I_t_rn_ti_n_liz_ti_n;
  local_98.Size = _UNK_15077c1a0;
  local_98._12_4_ = _UNK_15077c1a4;
  local_258._padding_ = 0;
  local_88 = DAT_15077c1a8;
  if (local_288.Data.ArrayNum == 0) {
    pwVar9 = L"";
LAB_141d4b3d5:
    sVar6 = wcslen(pwVar9);
    TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init
              (&local_258,pwVar9,(int)sVar6,Yes);
  }
  else {
    pwVar9 = (wchar_t *)local_288.Data.AllocatorInstance.Data;
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_141d4b3d5;
    local_258.StringLength = 0;
    local_258.Ptr = (char *)0x0;
  }
  TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
            (&local_1b8,local_258.Ptr);
  iVar5 = strcmp((char *)&local_98,local_258.Ptr);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    pFVar8 = ::FString::FString((FString *)&local_268,
                                L"Expected test string 5 to have different encoded value");
    (*pcVar3)(pFVar2,pFVar8,0);
    if (local_268.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_288.Data.ArrayNum != 0) {
    FVar10.Data = local_288.Data.AllocatorInstance.Data;
  }
  iVar5 = wcscmp((wchar_t *)FVar10.Data,local_1b8.Ptr);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    pFVar8 = ::FString::FString((FString *)&local_268,
                                L"Expected test string 5 to have different decoded value");
    (*pcVar3)(pFVar2,pFVar8,0);
    if (local_268.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
      (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
    FMemory::Free((void *)local_1b8._padding_);
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_1b8._padding_ = 0;
  sVar6 = strlen((char *)&local_98);
  local_1b8.StringLength =
       UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)&local_98,(int)sVar6);
  iVar5 = local_1b8.StringLength + 1;
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
  ResizeAllocation((ForElementType<wchar_t> *)&local_1b8,0,iVar5,2);
  local_1b8.Ptr = (wchar_t *)&local_1b8;
  if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
      (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
    local_1b8.Ptr = (wchar_t *)local_1b8._padding_;
  }
  UE::Core::Private::Convert(local_1b8.Ptr,iVar5,(uchar *)&local_98,(int)sVar6 + 1);
  pwVar9 = local_1b8.Ptr;
  local_258._padding_ = 0;
  if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8.Ptr ==
      (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
    local_258.Ptr = (char *)0x0;
    local_258.StringLength = 0;
  }
  else {
    sVar6 = wcslen(local_1b8.Ptr);
    TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init
              (&local_258,pwVar9,(int)sVar6,Yes);
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_288.Data.ArrayNum != 0) {
    FVar10.Data = local_288.Data.AllocatorInstance.Data;
  }
  iVar5 = wcscmp((wchar_t *)FVar10.Data,local_1b8.Ptr);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    pFVar8 = ::FString::FString((FString *)&local_268,
                                L"Expected test string 6 to have different encoded value");
    (*pcVar3)(pFVar2,pFVar8,0);
    if (local_268.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  iVar5 = strcmp((char *)&local_98,local_258.Ptr);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    pFVar8 = ::FString::FString((FString *)&local_268,
                                L"Expected test string 6 to have different decoded value");
    (*pcVar3)(pFVar2,pFVar8,0);
    if (local_268.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
      (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
    FMemory::Free((void *)local_1b8._padding_);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_288,
                     L"𝙐п𝗋𝘦𝕒l 𝑬𝔫ｇ𝒾𝖓𝕖 𝚒ｓ 𝑮𝚛℮𝜶ｔ!");
  local_78 = _s__________l______;
  uStack_70 = _UNK_15077c088;
  local_58 = _DAT_15077c0a0;
  uStack_50 = _UNK_15077c0a8;
  local_68 = _DAT_15077c090;
  uStack_60 = _UNK_15077c098;
  local_38 = DAT_15077c0c0;
  local_48 = _DAT_15077c0b0;
  uStack_40 = _UNK_15077c0b8;
  local_258._padding_ = 0;
  if (local_288.Data.ArrayNum == 0) {
    pwVar9 = L"";
LAB_141d4b6cf:
    sVar6 = wcslen(pwVar9);
    TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init
              (&local_258,pwVar9,(int)sVar6,Yes);
  }
  else {
    pwVar9 = (wchar_t *)local_288.Data.AllocatorInstance.Data;
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_141d4b6cf;
    local_258.StringLength = 0;
    local_258.Ptr = (char *)0x0;
  }
  TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
            (&local_1b8,local_258.Ptr);
  iVar5 = strcmp((char *)&local_78,local_258.Ptr);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    pFVar8 = ::FString::FString((FString *)&local_268,
                                L"Expected test string 7 to have different encoded value");
    (*pcVar3)(pFVar2,pFVar8,0);
    if (local_268.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_288.Data.ArrayNum != 0) {
    FVar10.Data = local_288.Data.AllocatorInstance.Data;
  }
  iVar5 = wcscmp((wchar_t *)FVar10.Data,local_1b8.Ptr);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    pFVar8 = ::FString::FString((FString *)&local_268,
                                L"Expected test string 7 to have different decoded value");
    (*pcVar3)(pFVar2,pFVar8,0);
    if (local_268.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
      (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
    FMemory::Free((void *)local_1b8._padding_);
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_1b8._padding_ = 0;
  sVar6 = strlen((char *)&local_78);
  local_1b8.StringLength =
       UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)&local_78,(int)sVar6);
  iVar5 = local_1b8.StringLength + 1;
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
  ResizeAllocation((ForElementType<wchar_t> *)&local_1b8,0,iVar5,2);
  local_1b8.Ptr = (wchar_t *)&local_1b8;
  if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
      (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
    local_1b8.Ptr = (wchar_t *)local_1b8._padding_;
  }
  UE::Core::Private::Convert(local_1b8.Ptr,iVar5,(uchar *)&local_78,(int)sVar6 + 1);
  pwVar9 = local_1b8.Ptr;
  local_258._padding_ = 0;
  if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8.Ptr ==
      (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
    local_258.Ptr = (char *)0x0;
    local_258.StringLength = 0;
  }
  else {
    sVar6 = wcslen(local_1b8.Ptr);
    TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init
              (&local_258,pwVar9,(int)sVar6,Yes);
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_288.Data.ArrayNum != 0) {
    FVar10.Data = local_288.Data.AllocatorInstance.Data;
  }
  iVar5 = wcscmp((wchar_t *)FVar10.Data,local_1b8.Ptr);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    pFVar8 = ::FString::FString((FString *)&local_268,
                                L"Expected test string 8 to have different encoded value");
    (*pcVar3)(pFVar2,pFVar8,0);
    if (local_268.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  iVar5 = strcmp((char *)&local_78,local_258.Ptr);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    pFVar8 = ::FString::FString((FString *)&local_268,
                                L"Expected test string 8 to have different decoded value");
    (*pcVar3)(pFVar2,pFVar8,0);
    if (local_268.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)local_1b8._padding_ !=
      (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
    FMemory::Free((void *)local_1b8._padding_);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_288,L"Test");
  local_258._padding_ = 0;
  EVar14 = No;
  if (local_288.Data.ArrayNum == 0) {
    pwVar9 = L"";
LAB_141d4b983:
    sVar6 = wcslen(pwVar9);
    TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init
              (&local_258,pwVar9,(int)sVar6,Yes);
  }
  else {
    pwVar9 = (wchar_t *)local_288.Data.AllocatorInstance.Data;
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_141d4b983;
    local_258.Ptr = (char *)0x0;
    local_258.StringLength = 0;
  }
  if (*(uchar *)((longlong)(longlong *)local_258.Ptr + (longlong)local_258.StringLength) != '\0') {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_98,L"Expected converted value to be null-terminated");
    (*pcVar3)(pFVar2,&local_98,0);
    if (local_98.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_98.DataPtr);
    }
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_258._padding_ = 0;
  iVar5 = local_288.Data.ArrayNum + -1;
  if (local_288.Data.ArrayNum == 0) {
    iVar5 = iVar11;
  }
  iVar13 = iVar5 + 1;
  if (local_288.Data.ArrayNum == 0) {
    pwVar9 = L"";
LAB_141d4ba36:
    if ((0 < iVar13) && (*(short *)((longlong)pwVar9 + (longlong)iVar5 * 2) == 0)) {
      EVar14 = Yes;
      iVar13 = iVar5;
    }
    TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init
              (&local_258,pwVar9,iVar13,EVar14);
  }
  else {
    pwVar9 = (wchar_t *)local_288.Data.AllocatorInstance.Data;
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_141d4ba36;
    local_258.Ptr = (char *)0x0;
    local_258.StringLength = 0;
  }
  if (*(uchar *)((longlong)(longlong *)local_258.Ptr + (longlong)local_258.StringLength) != '\0') {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_98,L"Expected converted value to be null-terminated");
    (*pcVar3)(pFVar2,&local_98,0);
    if (local_98.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_98.DataPtr);
    }
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  local_258._padding_ = 0;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init(&local_258,u_Hello_,6,Yes);
  iVar5 = strcmp(local_258.Ptr,"Hello?");
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_288,
                       L"UTF-16 string ending with a single high surrogate converted to UTF-8");
    (*pcVar3)(pFVar2,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_258._padding_ = 0;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init(&local_258,u_Hello__,7,Yes);
  iVar5 = strcmp(local_258.Ptr,"Hello??");
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_288,
                       L"UTF-16 string ending with two high surrogates converted to UTF-8");
    (*pcVar3)(pFVar2,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_258._padding_ = 0;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init(&local_258,u_Hello___,8,Yes);
  iVar5 = strcmp(local_258.Ptr,"Hello???");
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_288,
                       L"UTF-16 string ending with three high surrogates converted to UTF-8");
    (*pcVar3)(pFVar2,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_258._padding_ = 0;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init(&local_258,u_Hello__i,8,Yes);
  iVar5 = strcmp(local_258.Ptr,s_Hello___);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_288,
                       L"UTF-16 string ending with a high surrogate and a surrogate pair converted to UTF-8"
                      );
    (*pcVar3)(pFVar2,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_258._padding_ = 0;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init(&local_258,u_Helloi,6,Yes);
  iVar5 = strcmp(local_258.Ptr,"Hello?");
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_288,
                       L"UTF-16 string ending with a single low surrogate converted to UTF-8");
    (*pcVar3)(pFVar2,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_258._padding_ = 0;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init(&local_258,u_Helloii,7,Yes);
  iVar5 = strcmp(local_258.Ptr,"Hello??");
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_288,L"UTF-16 string ending with two low surrogates converted to UTF-8"
                      );
    (*pcVar3)(pFVar2,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_258._padding_ = 0;
  local_258.StringLength = UE::Core::Private::GetConvertedLength((uchar *)0x0,u_Helloiii,8);
  uVar1 = local_258.StringLength + 1;
  uVar12 = uVar1;
  if (uVar1 < 0x81) {
    if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
        (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
      uVar12 = 0;
      goto LAB_141d4be16;
    }
  }
  else {
LAB_141d4be16:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_258._padding_,0,uVar12,1);
  }
  local_258.Ptr = (char *)&local_258;
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    local_258.Ptr = (char *)local_258._padding_;
  }
  UE::Core::Private::Convert((uchar *)local_258.Ptr,uVar1,u_Helloiii,9);
  iVar5 = strcmp(local_258.Ptr,"Hello???");
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_288,
                       L"UTF-16 string ending with three low surrogates converted to UTF-8");
    (*pcVar3)(pFVar2,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_258._padding_ = 0;
  local_258.StringLength = UE::Core::Private::GetConvertedLength((uchar *)0x0,u_Helloi_i,8);
  uVar1 = local_258.StringLength + 1;
  uVar12 = uVar1;
  if (uVar1 < 0x81) {
    if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
        (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
      uVar12 = 0;
      goto LAB_141d4bee8;
    }
  }
  else {
LAB_141d4bee8:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_258._padding_,0,uVar12,1);
  }
  local_258.Ptr = (char *)&local_258;
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    local_258.Ptr = (char *)local_258._padding_;
  }
  UE::Core::Private::Convert((uchar *)local_258.Ptr,uVar1,u_Helloi_i,9);
  iVar5 = strcmp(local_258.Ptr,s_Hello___);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_288,
                       L"UTF-16 string ending with a low surrogate and a surrogate pair converted to UTF-8"
                      );
    (*pcVar3)(pFVar2,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_258._padding_ = 0;
  local_258.StringLength = UE::Core::Private::GetConvertedLength((uchar *)0x0,u_Hello_World,0xb);
  uVar1 = local_258.StringLength + 1;
  uVar12 = uVar1;
  if (uVar1 < 0x81) {
    if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
        (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
      uVar12 = 0;
      goto LAB_141d4bfba;
    }
  }
  else {
LAB_141d4bfba:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_258._padding_,0,uVar12,1);
  }
  local_258.Ptr = (char *)&local_258;
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    local_258.Ptr = (char *)local_258._padding_;
  }
  UE::Core::Private::Convert((uchar *)local_258.Ptr,uVar1,u_Hello_World,0xc);
  iVar5 = strcmp(local_258.Ptr,"Hello?World");
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_288,
                       L"UTF-16 string containing a single high surrogate converted to UTF-8");
    (*pcVar3)(pFVar2,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_258._padding_ = 0;
  local_258.StringLength = UE::Core::Private::GetConvertedLength((uchar *)0x0,u_Hello__World,0xc);
  uVar1 = local_258.StringLength + 1;
  uVar12 = uVar1;
  if (uVar1 < 0x81) {
    if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
        (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
      uVar12 = 0;
      goto LAB_141d4c08c;
    }
  }
  else {
LAB_141d4c08c:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_258._padding_,0,uVar12,1);
  }
  local_258.Ptr = (char *)&local_258;
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    local_258.Ptr = (char *)local_258._padding_;
  }
  UE::Core::Private::Convert((uchar *)local_258.Ptr,uVar1,u_Hello__World,0xd);
  iVar5 = strcmp(local_258.Ptr,"Hello??World");
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_288,L"UTF-16 string containing two high surrogates converted to UTF-8"
                      );
    (*pcVar3)(pFVar2,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_258._padding_ = 0;
  local_258.StringLength = UE::Core::Private::GetConvertedLength((uchar *)0x0,u_Hello___World,0xd);
  uVar1 = local_258.StringLength + 1;
  uVar12 = uVar1;
  if (uVar1 < 0x81) {
    if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ ==
        (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) goto LAB_141d4c173;
    uVar12 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_258._padding_,0,uVar12,1);
LAB_141d4c173:
  local_258.Ptr = (char *)&local_258;
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    local_258.Ptr = (char *)local_258._padding_;
  }
  UE::Core::Private::Convert((uchar *)local_258.Ptr,uVar1,u_Hello___World,0xe);
  iVar5 = strcmp(local_258.Ptr,"Hello???World");
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_288,
                       L"UTF-16 string containing three high surrogates converted to UTF-8");
    (*pcVar3)(pFVar2,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258._padding_ !=
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_258._padding_ = 0;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init
            (&local_258,u_Hello__iWorld,0xd,Yes);
  iVar5 = strcmp(local_258.Ptr,s_Hello___World);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_288,
                       L"UTF-16 string containing a high surrogate and a surrogate pair converted to UTF-8"
                      );
    (*pcVar3)(pFVar2,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_258._padding_ = 0;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init
            (&local_258,u_HelloiWorld,0xb,Yes);
  iVar5 = strcmp(local_258.Ptr,"Hello?World");
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_288,
                       L"UTF-16 string containing a single low surrogate converted to UTF-8");
    (*pcVar3)(pFVar2,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_258._padding_ = 0;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init
            (&local_258,u_HelloiiWorld,0xc,Yes);
  iVar5 = strcmp(local_258.Ptr,"Hello??World");
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_288,L"UTF-16 string containing two low surrogates converted to UTF-8")
    ;
    (*pcVar3)(pFVar2,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_258._padding_ = 0;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init
            (&local_258,u_HelloiiiWorld,0xd,Yes);
  iVar5 = strcmp(local_258.Ptr,"Hello???World");
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_288,
                       L"UTF-16 string containing three low surrogates converted to UTF-8");
    (*pcVar3)(pFVar2,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_258._padding_ = 0;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init
            (&local_258,u_Helloi_iWorld,0xd,Yes);
  iVar5 = strcmp(local_258.Ptr,s_Hello___World);
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_288,
                       L"UTF-16 string containing a low surrogate and a surrogate pair converted to UTF-8"
                      );
    (*pcVar3)(pFVar2,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  pFVar7 = FAutomationTestFramework::Get();
  local_98.Size = 3;
  pFVar2 = pFVar7->CurrentTest;
  local_98.DataPtr = "ab?";
  local_258._padding_ = 0;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init(&local_258,u_ab,3,Yes);
  local_268.DataPtr = (uchar *)local_258.Ptr;
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)local_258.Ptr !=
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    sVar6 = strlen(local_258.Ptr);
    iVar11 = (int)sVar6;
  }
  local_268.Size = iVar11;
  ::FString::FString(&local_288,"IllegalSurrogatePair");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_288.Data.ArrayNum != 0) {
    FVar10.Data = local_288.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual(pFVar2,(wchar_t *)FVar10.Data,&local_268,&local_98);
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  return;
}

