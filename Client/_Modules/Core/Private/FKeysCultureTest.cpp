// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bc90c0

EAutomationTestFlags __thiscall FKeysCultureTest::GetTestFlags(FKeysCultureTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc90d0

bool __thiscall FKeysCultureTest::IsStressTest(FKeysCultureTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc90e0

uint __thiscall FKeysCultureTest::GetRequiredDeviceNum(FKeysCultureTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc90f0

FString * __thiscall
FKeysCultureTest::GetTestSourceFileName(FKeysCultureTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Internationalization\\KeysCultureTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc9120

int __thiscall FKeysCultureTest::GetTestSourceFileLine(FKeysCultureTest *this)

{
  return 0x30;
}

// GetTests @ 141bc9130

/* WARNING: Removing unreachable block (ram,0x000141bc92ae) */

void __thiscall
FKeysCultureTest::GetTests
          (FKeysCultureTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc92d0

bool __thiscall FKeysCultureTest::RunTest(FKeysCultureTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc9300

FString * __thiscall
FKeysCultureTest::GetBeautifiedTestName(FKeysCultureTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FKeysCultureTest @ 141be45d0

FKeysCultureTest * __thiscall
FKeysCultureTest::FKeysCultureTest(FKeysCultureTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FKeysCultureTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][EditorContext][ClientContext][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"Development::System::Core::Misc::KeysCulture");
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
  ::FString::FString(&local_18,"[.][EditorContext][ClientContext][EngineFilter]");
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

// TestBody @ 141c18d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FKeysCultureTest::TestBody(FKeysCultureTest *this,FString *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCulture *pFVar3;
  FAutomationTestBase *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FInternationalization *pFVar10;
  FString *pFVar11;
  FAutomationTestFramework *pFVar12;
  FString *pFVar13;
  int *piVar14;
  longlong lVar15;
  undefined1 auStackY_468 [32];
  ELocalizedTextSourceCategory local_428 [8];
  ForAnyElementType local_420;
  int local_418;
  int local_414;
  ForAnyElementType local_410;
  int local_408;
  int local_404;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FText local_3a0;
  FText local_390;
  FCultureStateSnapshot local_380;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  undefined1 local_188 [136];
  void *local_100;
  undefined4 local_f8;
  TRefCountPtr<ITextData> local_e8;
  undefined1 local_d8 [136];
  void *local_50;
  undefined4 local_48;
  TRefCountPtr<ITextData> local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_468;
  local_380.Language.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_380.Language.Data.ArrayNum = 0;
  local_380.Language.Data.ArrayMax = 0;
  local_380.Locale.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_380.Locale.Data.ArrayNum = 0;
  local_380.Locale.Data.ArrayMax = 0;
  local_380.AssetGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_380.AssetGroups.ArrayNum = 0;
  local_380.AssetGroups.ArrayMax = 0;
  pFVar10 = FInternationalization::Get();
  FInternationalization::BackupCultureState(pFVar10,&local_380);
  piVar14 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar14 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&NativeCulture,L"en");
    atexit(`FKeysCultureTest::TestBody'::__l2::_dynamic_atexit_destructor_for__NativeCulture__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar14 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&TargetCulture,L"ja");
    atexit(`FKeysCultureTest::TestBody'::__l2::_dynamic_atexit_destructor_for__TargetCulture__);
    _Init_thread_footer(&::_TSS1);
  }
  pFVar10 = FInternationalization::Get();
  FInternationalization::SetCurrentCulture(pFVar10,&NativeCulture);
  if (((pFVar10->CurrentLanguage).Object == (FCulture *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar2 = (pFVar10->CurrentLanguage).SharedReferenceCount.ReferenceController;
  pFVar3 = (pFVar10->CurrentLanguage).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar3 == (FCulture *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar11 = FCulture::GetName(pFVar3);
  iVar9 = (pFVar11->Data).ArrayNum;
  if (iVar9 == NativeCulture.Data.ArrayNum) {
    if (1 < iVar9) {
      iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar11->Data).AllocatorInstance.Data,
                         (wchar_t *)NativeCulture.Data.AllocatorInstance.Data);
      bVar8 = iVar9 == 0;
      goto LAB_141c18e50;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  else {
    bVar8 = NativeCulture.Data.ArrayNum + iVar9 == 1;
LAB_141c18e50:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (!bVar8) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar4 = pFVar12->CurrentTest;
      pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_1a0,L"Required condition failed, interrupting test");
      (*pcVar6)(pFVar4,&local_1a0,0);
      goto LAB_141c19bc2;
    }
  }
  ::FString::FString(&local_2b0,L"Test1 Native");
  ::FString::FString(&local_2c0,L"Test1Key");
  ::FString::FString(&local_2d0,L"Core.Tests.KeysCultureTests");
  local_428[0] = Editor;
  FPolyglotTextData::FPolyglotTextData
            ((FPolyglotTextData *)local_d8,local_428,&local_2d0,&local_2c0,&local_2b0,&NativeCulture
            );
  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
  }
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2a0,L"Test1 Target");
  FPolyglotTextData::AddLocalizedString((FPolyglotTextData *)local_d8,&TargetCulture,&local_2a0);
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_270,L"Test2 Native");
  ::FString::FString(&local_280,L"Test2Key");
  ::FString::FString(&local_290,L"Core.Tests.KeysCultureTests");
  local_428[1] = 2;
  FPolyglotTextData::FPolyglotTextData
            ((FPolyglotTextData *)local_188,local_428 + 1,&local_290,&local_280,&local_270,
             &NativeCulture);
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  FPolyglotTextData::GetText((FPolyglotTextData *)local_d8,&local_390);
  FPolyglotTextData::GetText((FPolyglotTextData *)local_188,&local_3a0);
  pFVar11 = FText::ToString(&local_390);
  local_410.Data = (FScriptContainerElement *)0x0;
  local_408 = (pFVar11->Data).ArrayNum;
  lVar15 = (longlong)local_408;
  pFVar5 = (pFVar11->Data).AllocatorInstance.Data;
  if (local_408 == 0) {
    local_404 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_408,0,&local_410,local_408,&local_404);
    memcpy(local_410.Data,pFVar5,lVar15 * 2);
  }
  pFVar11 = FPolyglotTextData::GetNativeString((FPolyglotTextData *)local_d8);
  iVar9 = (pFVar11->Data).ArrayNum;
  if (local_408 == iVar9) {
    if (1 < local_408) {
      iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_410.Data,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data
                        );
      bVar8 = iVar9 == 0;
      goto LAB_141c190e0;
    }
LAB_141c19128:
    pFVar11 = FText::ToString(&local_3a0);
    local_420.Data = (FScriptContainerElement *)0x0;
    local_418 = (pFVar11->Data).ArrayNum;
    lVar15 = (longlong)local_418;
    pFVar5 = (pFVar11->Data).AllocatorInstance.Data;
    if (local_418 == 0) {
      local_414 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_418,0,&local_420,local_418,&local_414);
      memcpy(local_420.Data,pFVar5,lVar15 * 2);
    }
    pFVar11 = FPolyglotTextData::GetNativeString((FPolyglotTextData *)local_188);
    iVar9 = (pFVar11->Data).ArrayNum;
    if (local_418 == iVar9) {
      if (1 < local_418) {
        iVar9 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_420.Data,
                           (wchar_t *)(pFVar11->Data).AllocatorInstance.Data);
        bVar8 = iVar9 == 0;
        goto LAB_141c191bc;
      }
LAB_141c19204:
      FInternationalization::SetCurrentCulture(pFVar10,&TargetCulture);
      if (((pFVar10->CurrentLanguage).Object == (FCulture *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar2 = (pFVar10->CurrentLanguage).SharedReferenceCount.ReferenceController;
      pFVar3 = (pFVar10->CurrentLanguage).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar3 == (FCulture *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = FCulture::GetName(pFVar3);
      iVar9 = (pFVar11->Data).ArrayNum;
      if (iVar9 == TargetCulture.Data.ArrayNum) {
        if (1 < iVar9) {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(pFVar11->Data).AllocatorInstance.Data,
                             (wchar_t *)TargetCulture.Data.AllocatorInstance.Data);
          bVar8 = iVar9 == 0;
          goto LAB_141c192af;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      else {
        bVar8 = TargetCulture.Data.ArrayNum + iVar9 == 1;
LAB_141c192af:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        if (!bVar8) {
          pFVar12 = FAutomationTestFramework::Get();
          pFVar4 = pFVar12->CurrentTest;
          pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::FString(&local_240,L"Changing from native culture to target culture.");
          (*pcVar6)(pFVar4,&local_240,0);
          local_250.Data.AllocatorInstance.Data = local_240.Data.AllocatorInstance.Data;
          goto LAB_141c19a92;
        }
      }
      pFVar11 = FText::ToString(&local_390);
      ::FString::FString(&local_2e0,pFVar11);
      local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3c0.Data.ArrayNum = 0;
      local_3c0.Data.ArrayMax = 0;
      FPolyglotTextData::GetLocalizedString((FPolyglotTextData *)local_d8,&TargetCulture,&local_3c0)
      ;
      if (local_2e0.Data.ArrayNum == local_3c0.Data.ArrayNum) {
        if (1 < local_2e0.Data.ArrayNum) {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_2e0.Data.AllocatorInstance.Data,
                             (wchar_t *)local_3c0.Data.AllocatorInstance.Data);
          bVar8 = iVar9 == 0;
          goto LAB_141c19376;
        }
      }
      else {
        bVar8 = local_2e0.Data.ArrayNum + local_3c0.Data.ArrayNum == 1;
LAB_141c19376:
        if (!bVar8) {
          pFVar12 = FAutomationTestFramework::Get();
          pFVar4 = pFVar12->CurrentTest;
          pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::FString(&local_230,
                             L"Text with translation display is the same as the localized string in target culture."
                            );
          (*pcVar6)(pFVar4,&local_230,0);
          if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_230.Data.AllocatorInstance.Data);
          }
        }
      }
      pFVar11 = FText::ToString(&local_3a0);
      ::FString::FString(&local_2f0,pFVar11);
      local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3b0.Data.ArrayNum = 0;
      local_3b0.Data.ArrayMax = 0;
      FPolyglotTextData::GetLocalizedString
                ((FPolyglotTextData *)local_188,&TargetCulture,&local_3b0);
      if (1 < local_3b0.Data.ArrayNum) {
        pFVar12 = FAutomationTestFramework::Get();
        pFVar4 = pFVar12->CurrentTest;
        pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::FString(&local_220,
                           L"Text without translation should not have a localized string in the target culture."
                          );
        (*pcVar6)(pFVar4,&local_220,0);
        if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.Data.AllocatorInstance.Data);
        }
      }
      pFVar11 = FPolyglotTextData::GetNativeString((FPolyglotTextData *)local_188);
      iVar9 = (pFVar11->Data).ArrayNum;
      if (local_2f0.Data.ArrayNum == iVar9) {
        if (1 < local_2f0.Data.ArrayNum) {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_2f0.Data.AllocatorInstance.Data,
                             (wchar_t *)(pFVar11->Data).AllocatorInstance.Data);
          bVar8 = iVar9 == 0;
          goto LAB_141c19478;
        }
      }
      else {
        bVar8 = iVar9 + local_2f0.Data.ArrayNum == 1;
LAB_141c19478:
        if (!bVar8) {
          pFVar12 = FAutomationTestFramework::Get();
          pFVar4 = pFVar12->CurrentTest;
          pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::FString(&local_210,
                             L"Text without translation display string is the same as the native string in target culture."
                            );
          (*pcVar6)(pFVar4,&local_210,0);
          if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_210.Data.AllocatorInstance.Data);
          }
        }
      }
      pFVar11 = FKeysCulture::StaticGetName();
      FInternationalization::SetCurrentCulture(pFVar10,pFVar11);
      pFVar11 = FKeysCulture::StaticGetName();
      if (((pFVar10->CurrentLanguage).Object == (FCulture *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar2 = (pFVar10->CurrentLanguage).SharedReferenceCount.ReferenceController;
      pFVar3 = (pFVar10->CurrentLanguage).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar3 == (FCulture *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar13 = FCulture::GetName(pFVar3);
      iVar9 = (pFVar11->Data).ArrayNum;
      iVar1 = (pFVar13->Data).ArrayNum;
      if (iVar1 == iVar9) {
        if (1 < iVar1) {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,
                             (wchar_t *)(pFVar11->Data).AllocatorInstance.Data);
          bVar8 = iVar9 == 0;
          goto LAB_141c19572;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_141c195ce:
        pFVar11 = FText::ToString(&local_390);
        ::FString::FString(&local_300,pFVar11);
        local_3f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3f0.Data.ArrayNum = 0;
        local_3f0.Data.ArrayMax = 0;
        local_400.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_400.Data.ArrayNum = 0;
        local_400.Data.ArrayMax = 0;
        FPolyglotTextData::GetIdentity((FPolyglotTextData *)local_d8,&local_400,&local_3f0);
        ::FString::PrintfImpl(&local_350,L"%s, %s");
        if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_400.Data.AllocatorInstance.Data);
        }
        if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
        }
        bVar8 = false;
        if (local_300.Data.ArrayNum == local_350.Data.ArrayNum) {
          bVar7 = bVar8;
          if (1 < local_300.Data.ArrayNum) {
            iVar9 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_300.Data.AllocatorInstance.Data,
                               (wchar_t *)local_350.Data.AllocatorInstance.Data);
            bVar7 = iVar9 != 0;
          }
        }
        else {
          bVar7 = local_300.Data.ArrayNum + local_350.Data.ArrayNum != 1;
        }
        if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_350.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          pFVar12 = FAutomationTestFramework::Get();
          pFVar4 = pFVar12->CurrentTest;
          pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::FString(&local_1f0,
                             L"Text with translation now has display string that matches its localization key and namespace in keys culture."
                            );
          (*pcVar6)(pFVar4,&local_1f0,0);
          if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
          }
        }
        pFVar11 = FText::ToString(&local_3a0);
        ::FString::FString(&local_310,pFVar11);
        local_3d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3d0.Data.ArrayNum = 0;
        local_3d0.Data.ArrayMax = 0;
        local_3e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3e0.Data.ArrayNum = 0;
        local_3e0.Data.ArrayMax = 0;
        FPolyglotTextData::GetIdentity((FPolyglotTextData *)local_188,&local_3e0,&local_3d0);
        ::FString::PrintfImpl(&local_340,L"%s, %s");
        if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
        }
        if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
        }
        if (local_310.Data.ArrayNum == local_340.Data.ArrayNum) {
          if (1 < local_310.Data.ArrayNum) {
            iVar9 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_310.Data.AllocatorInstance.Data,
                               (wchar_t *)local_340.Data.AllocatorInstance.Data);
            bVar8 = iVar9 != 0;
          }
        }
        else {
          bVar8 = local_310.Data.ArrayNum + local_340.Data.ArrayNum != 1;
        }
        if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          pFVar12 = FAutomationTestFramework::Get();
          pFVar4 = pFVar12->CurrentTest;
          pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::FString(&local_1e0,
                             L"Text with blank translation has display string that matches its localization key and namespace in keys culture."
                            );
          (*pcVar6)(pFVar4,&local_1e0,0);
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
        }
        FInternationalization::SetCurrentCulture(pFVar10,&NativeCulture);
        if (((pFVar10->CurrentLanguage).Object == (FCulture *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar2 = (pFVar10->CurrentLanguage).SharedReferenceCount.ReferenceController;
        pFVar3 = (pFVar10->CurrentLanguage).Object;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pFVar3 == (FCulture *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar11 = FCulture::GetName(pFVar3);
        iVar9 = (pFVar11->Data).ArrayNum;
        if (iVar9 == NativeCulture.Data.ArrayNum) {
          if (1 < iVar9) {
            iVar9 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)(pFVar11->Data).AllocatorInstance.Data,
                               (wchar_t *)NativeCulture.Data.AllocatorInstance.Data);
            bVar8 = iVar9 == 0;
            goto LAB_141c1989d;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
LAB_141c198f9:
          pFVar11 = FText::ToString(&local_390);
          ::FString::FString(&local_320,pFVar11);
          pFVar11 = FPolyglotTextData::GetNativeString((FPolyglotTextData *)local_d8);
          iVar9 = (pFVar11->Data).ArrayNum;
          if (local_320.Data.ArrayNum == iVar9) {
            if (1 < local_320.Data.ArrayNum) {
              iVar9 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)local_320.Data.AllocatorInstance.Data,
                                 (wchar_t *)(pFVar11->Data).AllocatorInstance.Data);
              bVar8 = iVar9 == 0;
              goto LAB_141c19940;
            }
          }
          else {
            bVar8 = iVar9 + local_320.Data.ArrayNum == 1;
LAB_141c19940:
            if (!bVar8) {
              pFVar12 = FAutomationTestFramework::Get();
              pFVar4 = pFVar12->CurrentTest;
              pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
              ::FString::FString(&local_1c0,
                                 L"Text with translation has display string that is the same as the original native string in native culture."
                                );
              (*pcVar6)(pFVar4,&local_1c0,0);
              if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
              }
            }
          }
          pFVar11 = FText::ToString(&local_3a0);
          ::FString::FString(&local_330,pFVar11);
          pFVar11 = FPolyglotTextData::GetNativeString((FPolyglotTextData *)local_188);
          iVar9 = (pFVar11->Data).ArrayNum;
          if (local_330.Data.ArrayNum == iVar9) {
            if (1 < local_330.Data.ArrayNum) {
              iVar9 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)local_330.Data.AllocatorInstance.Data,
                                 (wchar_t *)(pFVar11->Data).AllocatorInstance.Data);
              bVar8 = iVar9 == 0;
              goto LAB_141c199d4;
            }
          }
          else {
            bVar8 = iVar9 + local_330.Data.ArrayNum == 1;
LAB_141c199d4:
            if (!bVar8) {
              pFVar12 = FAutomationTestFramework::Get();
              pFVar4 = pFVar12->CurrentTest;
              pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
              ::FString::FString(&local_1b0,
                                 L"Text without translation has display string the same as its native string in native culture."
                                );
              (*pcVar6)(pFVar4,&local_1b0,0);
              if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
              }
            }
          }
          local_1d0.Data.AllocatorInstance.Data = local_320.Data.AllocatorInstance.Data;
          if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_330.Data.AllocatorInstance.Data);
            local_1d0.Data.AllocatorInstance.Data = local_320.Data.AllocatorInstance.Data;
          }
        }
        else {
          bVar8 = NativeCulture.Data.ArrayNum + iVar9 == 1;
LAB_141c1989d:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          if (bVar8) goto LAB_141c198f9;
          pFVar12 = FAutomationTestFramework::Get();
          pFVar4 = pFVar12->CurrentTest;
          pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::FString(&local_1d0,L"Able to revert from keys culture to native culture..");
          (*pcVar6)(pFVar4,&local_1d0,0);
        }
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
        local_200.Data.AllocatorInstance.Data = local_300.Data.AllocatorInstance.Data;
        if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_310.Data.AllocatorInstance.Data);
          local_200.Data.AllocatorInstance.Data = local_300.Data.AllocatorInstance.Data;
        }
      }
      else {
        bVar8 = iVar9 + iVar1 == 1;
LAB_141c19572:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        if (bVar8) goto LAB_141c195ce;
        pFVar12 = FAutomationTestFramework::Get();
        pFVar4 = pFVar12->CurrentTest;
        pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::FString(&local_200,L"Changing from native culture to keys culture.");
        (*pcVar6)(pFVar4,&local_200,0);
      }
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
      }
      if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
      }
      local_250.Data.AllocatorInstance.Data = local_2e0.Data.AllocatorInstance.Data;
      if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
        local_250.Data.AllocatorInstance.Data = local_2e0.Data.AllocatorInstance.Data;
      }
    }
    else {
      bVar8 = iVar9 + local_418 == 1;
LAB_141c191bc:
      if (bVar8) goto LAB_141c19204;
      pFVar12 = FAutomationTestFramework::Get();
      pFVar4 = pFVar12->CurrentTest;
      pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_250,L"Required condition failed, interrupting test");
      (*pcVar6)(pFVar4,&local_250,0);
    }
LAB_141c19a92:
    local_260.Data.AllocatorInstance.Data = local_420.Data;
    if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data.AllocatorInstance.Data);
      local_260.Data.AllocatorInstance.Data = local_420.Data;
    }
  }
  else {
    bVar8 = local_408 + iVar9 == 1;
LAB_141c190e0:
    if (bVar8) goto LAB_141c19128;
    pFVar12 = FAutomationTestFramework::Get();
    pFVar4 = pFVar12->CurrentTest;
    pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_260,L"Required condition failed, interrupting test");
    (*pcVar6)(pFVar4,&local_260,0);
  }
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  if (local_410.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_410.Data);
  }
  if (local_3a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3a0.TextData.Reference + 0x10))();
  }
  if (local_390.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_390.TextData.Reference + 0x10))();
  }
  if (local_e8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.Reference + 0x10))();
  }
  local_f8 = 0;
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_188 + 0x48));
  if ((FScriptContainerElement *)local_188._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_188._56_8_);
  }
  if ((FScriptContainerElement *)local_188._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_188._40_8_);
  }
  if ((FScriptContainerElement *)local_188._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_188._24_8_);
  }
  if ((FScriptContainerElement *)local_188._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_188._8_8_);
  }
  if (local_38.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.Reference + 0x10))();
  }
  local_48 = 0;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_d8 + 0x48));
  if ((FScriptContainerElement *)local_d8._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._56_8_);
  }
  if ((FScriptContainerElement *)local_d8._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._40_8_);
  }
  local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_d8._8_8_;
  if ((FScriptContainerElement *)local_d8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._24_8_);
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_d8._8_8_;
  }
LAB_141c19bc2:
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  pFVar10 = FInternationalization::Get();
  FInternationalization::RestoreCultureState(pFVar10,&local_380);
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)local_380.AssetGroups.AllocatorInstance.Data,
             local_380.AssetGroups.ArrayNum);
  if ((TTuple<FName,FString> *)local_380.AssetGroups.AllocatorInstance.Data !=
      (TTuple<FName,FString> *)0x0) {
    FMemory::Free(local_380.AssetGroups.AllocatorInstance.Data);
  }
  if (local_380.Locale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Locale.Data.AllocatorInstance.Data);
  }
  if (local_380.Language.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Language.Data.AllocatorInstance.Data);
  }
  return;
}

