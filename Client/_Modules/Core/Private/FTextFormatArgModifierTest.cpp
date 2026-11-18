// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141bbe590

EAutomationTestFlags __thiscall
FTextFormatArgModifierTest::GetTestFlags(FTextFormatArgModifierTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bbe5a0

bool __thiscall FTextFormatArgModifierTest::IsStressTest(FTextFormatArgModifierTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bbe5b0

uint __thiscall FTextFormatArgModifierTest::GetRequiredDeviceNum(FTextFormatArgModifierTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bbe5c0

FString * __thiscall
FTextFormatArgModifierTest::GetTestSourceFileName
          (FTextFormatArgModifierTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Internationalization\\TextTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bbe5f0

int __thiscall FTextFormatArgModifierTest::GetTestSourceFileLine(FTextFormatArgModifierTest *this)

{
  return 0x504;
}

// GetTests @ 141bbe600

/* WARNING: Removing unreachable block (ram,0x000141bbe77e) */

void __thiscall
FTextFormatArgModifierTest::GetTests
          (FTextFormatArgModifierTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bbe7a0

bool __thiscall
FTextFormatArgModifierTest::RunTest(FTextFormatArgModifierTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bbe7d0

FString * __thiscall
FTextFormatArgModifierTest::GetBeautifiedTestName
          (FTextFormatArgModifierTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTextFormatArgModifierTest @ 141be9960

FTextFormatArgModifierTest * __thiscall
FTextFormatArgModifierTest::FTextFormatArgModifierTest
          (FTextFormatArgModifierTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTextFormatArgModifierTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,
                              "[.][EditorContext][ClientContext][EngineFilter][ServerContext][CommandletContext][SupportsAutoRTFM]"
                             );
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::TextFormatArgModifiers");
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
  ::FString::FString(&local_18,
                     "[.][EditorContext][ClientContext][EngineFilter][ServerContext][CommandletContext][SupportsAutoRTFM]"
                    );
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

// operator() @ 141befaa0

void __thiscall
`FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  int iVar4;
  FAutomationTestFramework *pFVar5;
  bool bVar6;
  FString local_18;
  
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (param_2->Data).ArrayNum;
  if (iVar4 == iVar1) {
    if (iVar4 < 2) {
      return;
    }
    iVar4 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                   (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar6 = iVar4 == 0;
  }
  else {
    bVar6 = iVar4 + iVar1 == 1;
  }
  if (!bVar6) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s failure: result \'%s\' (expected \'%s\'). %s.");
    (*pcVar3)(pFVar2,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// TestBody @ 141c3d940

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTextFormatArgModifierTest::TestBody(FTextFormatArgModifierTest *this,FString *param_1)

{
  int *piVar1;
  uint uVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  int iVar5;
  FInternationalization *this_00;
  FText *pFVar6;
  TTuple<FString,FFormatArgumentValue> *pTVar7;
  FString *pFVar8;
  FAutomationTestFramework *pFVar9;
  FString *pFVar10;
  FTextFormat *pFVar11;
  bool bVar12;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  FText local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  FText local_158;
  undefined1 local_148 [16];
  FText local_138;
  undefined1 local_128 [16];
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FCultureStateSnapshot local_98;
  FText local_68;
  FText local_58;
  FText local_48;
  
  this_00 = FInternationalization::Get();
  local_98.Language.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Language.Data.ArrayNum = 0;
  local_98.Language.Data.ArrayMax = 0;
  local_98.Locale.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Locale.Data.ArrayNum = 0;
  local_98.Locale.Data.ArrayMax = 0;
  local_98.AssetGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.AssetGroups.ArrayNum = 0;
  local_98.AssetGroups.ArrayMax = 0;
  FInternationalization::BackupCultureState(this_00,&local_98);
  ::FString::FString((FString *)&local_198,L"en");
  FInternationalization::SetCurrentCulture(this_00,(FString *)&local_198);
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_198.TextData.Reference);
  }
  pFVar6 = FText::AsCultureInvariant
                     ((FText *)local_188,
                      L"There {NumCats}|plural(one=is,other=are) {NumCats} {NumCats}|plural(one=cat,other=cats)"
                     );
  FTextFormat::FTextFormat((FTextFormat *)local_128,pFVar6,Default);
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_188._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)local_128,(FText *)local_188);
  FText::ToString(pFVar6);
  ::FString::FString((FString *)&local_118,L"CardinalResult0");
  ::FString::FString((FString *)&local_198,L"There are 0 cats");
  local_148._0_8_ = local_128._0_8_;
  local_148._8_8_ = local_128._8_8_;
  if ((TReferenceControllerBase<1> *)local_128._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_128._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_128._8_8_ + 8) + 1);
    UNLOCK();
  }
  local_158.TextData.Reference = (ITextData *)0x0;
  local_158.Flags = 0;
  local_158._12_4_ = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,(ForAnyElementType *)&local_158,0,(int *)&local_158.field_0xc);
  pTVar7 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[8]>
                     ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                       *)&local_158,(wchar_t (*) [8])L"NumCats");
  ::FString::FString((FString *)pTVar7,L"NumCats");
  *(undefined4 *)&pTVar7->field_0x10 = 0;
  *(undefined8 *)&pTVar7->field_0x20 = 0;
  *(undefined4 *)&pTVar7->field_0x28 = 0;
  *(undefined8 *)&pTVar7->field_0x18 = 0;
  FText::FormatNamedImpl
            ((FText *)local_178,(FTextFormat *)local_148,
             (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              *)&local_158);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_158.TextData.Reference,local_158.Flags);
  if ((TTuple<FString,FFormatArgumentValue> *)local_158.TextData.Reference !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_158.TextData.Reference);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_148._8_8_);
  pFVar8 = FText::ToString((FText *)local_178);
  uVar2 = (pFVar8->Data).ArrayNum;
  if (uVar2 == local_198.Flags) {
    if (1 < (int)uVar2) {
      iVar5 = wcscmp((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                     (wchar_t *)local_198.TextData.Reference);
      bVar12 = iVar5 == 0;
      goto LAB_141c3db2d;
    }
  }
  else {
    bVar12 = local_198.Flags + uVar2 == 1;
LAB_141c3db2d:
    if (!bVar12) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar3 = pFVar9->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::PrintfImpl
                ((FString *)&local_158,L"%s failure: result \'%s\' (expected \'%s\'). %s.");
      (*pcVar4)(pFVar3,&local_158,0);
      if ((TTuple<FString,FFormatArgumentValue> *)local_158.TextData.Reference !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_158.TextData.Reference);
      }
    }
  }
  if ((ITextData *)local_178._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_178._0_8_ + 0x10))();
  }
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_198.TextData.Reference);
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_118.TextData.Reference);
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_188._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)local_128,(FText *)local_168);
  FText::ToString(pFVar6);
  ::FString::FString((FString *)&local_118,L"CardinalResult1");
  ::FString::FString((FString *)&local_198,L"There is 1 cat");
  local_178._0_8_ = local_128._0_8_;
  local_178._8_8_ = local_128._8_8_;
  if ((TReferenceControllerBase<1> *)local_128._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_128._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_128._8_8_ + 8) + 1);
    UNLOCK();
  }
  local_158.TextData.Reference = (ITextData *)0x0;
  local_158.Flags = 0;
  local_158._12_4_ = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,(ForAnyElementType *)&local_158,0,(int *)&local_158.field_0xc);
  pTVar7 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[8]>
                     ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                       *)&local_158,(wchar_t (*) [8])L"NumCats");
  ::FString::FString((FString *)pTVar7,L"NumCats");
  *(undefined4 *)&pTVar7->field_0x10 = 0;
  *(undefined8 *)&pTVar7->field_0x20 = 0;
  *(undefined4 *)&pTVar7->field_0x28 = 0;
  *(undefined8 *)&pTVar7->field_0x18 = 1;
  FText::FormatNamedImpl
            ((FText *)local_188,(FTextFormat *)local_178,
             (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              *)&local_158);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_158.TextData.Reference,local_158.Flags);
  if ((TTuple<FString,FFormatArgumentValue> *)local_158.TextData.Reference !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_158.TextData.Reference);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_178._8_8_);
  pFVar8 = FText::ToString((FText *)local_188);
  uVar2 = (pFVar8->Data).ArrayNum;
  if (uVar2 == local_198.Flags) {
    if (1 < (int)uVar2) {
      iVar5 = wcscmp((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                     (wchar_t *)local_198.TextData.Reference);
      bVar12 = iVar5 == 0;
      goto LAB_141c3dd2a;
    }
  }
  else {
    bVar12 = local_198.Flags + uVar2 == 1;
LAB_141c3dd2a:
    if (!bVar12) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar3 = pFVar9->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::PrintfImpl
                ((FString *)local_148,L"%s failure: result \'%s\' (expected \'%s\'). %s.");
      (*pcVar4)(pFVar3,local_148,0);
      if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
        FMemory::Free((void *)local_148._0_8_);
      }
    }
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_188._0_8_ + 0x10))();
  }
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_198.TextData.Reference);
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_118.TextData.Reference);
  }
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)local_128,(FText *)local_168);
  FText::ToString(pFVar6);
  ::FString::FString((FString *)&local_118,L"CardinalResult2");
  ::FString::FString((FString *)&local_198,L"There are 2 cats");
  local_188._0_8_ = local_128._0_8_;
  local_188._8_8_ = local_128._8_8_;
  if ((TReferenceControllerBase<1> *)local_128._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_128._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_128._8_8_ + 8) + 1);
    UNLOCK();
  }
  local_158.TextData.Reference = (ITextData *)0x0;
  local_158.Flags = 0;
  local_158._12_4_ = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,(ForAnyElementType *)&local_158,0,(int *)&local_158.field_0xc);
  pTVar7 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[8]>
                     ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                       *)&local_158,(wchar_t (*) [8])L"NumCats");
  ::FString::FString((FString *)pTVar7,L"NumCats");
  *(undefined4 *)&pTVar7->field_0x10 = 0;
  *(undefined8 *)&pTVar7->field_0x20 = 0;
  *(undefined4 *)&pTVar7->field_0x28 = 0;
  *(undefined8 *)&pTVar7->field_0x18 = 2;
  FText::FormatNamedImpl
            ((FText *)local_148,(FTextFormat *)local_188,
             (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              *)&local_158);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_158.TextData.Reference,local_158.Flags);
  if ((TTuple<FString,FFormatArgumentValue> *)local_158.TextData.Reference !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_158.TextData.Reference);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_188._8_8_);
  pFVar8 = FText::ToString((FText *)local_148);
  uVar2 = (pFVar8->Data).ArrayNum;
  if (uVar2 == local_198.Flags) {
    if (1 < (int)uVar2) {
      iVar5 = wcscmp((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                     (wchar_t *)local_198.TextData.Reference);
      bVar12 = iVar5 == 0;
      goto LAB_141c3df1e;
    }
  }
  else {
    bVar12 = local_198.Flags + uVar2 == 1;
LAB_141c3df1e:
    if (!bVar12) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar3 = pFVar9->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::PrintfImpl
                ((FString *)local_178,L"%s failure: result \'%s\' (expected \'%s\'). %s.");
      (*pcVar4)(pFVar3,local_178,0);
      if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
        FMemory::Free((void *)local_178._0_8_);
      }
    }
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_198.TextData.Reference);
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_118.TextData.Reference);
  }
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)local_128,(FText *)local_168);
  FText::ToString(pFVar6);
  ::FString::FString((FString *)&local_118,L"CardinalResult3");
  ::FString::FString((FString *)&local_198,L"There are 3 cats");
  local_188._0_8_ = local_128._0_8_;
  local_188._8_8_ = local_128._8_8_;
  if ((TReferenceControllerBase<1> *)local_128._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_128._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_128._8_8_ + 8) + 1);
    UNLOCK();
  }
  local_158.TextData.Reference = (ITextData *)0x0;
  local_158.Flags = 0;
  local_158._12_4_ = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,(ForAnyElementType *)&local_158,0,(int *)&local_158.field_0xc);
  pTVar7 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[8]>
                     ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                       *)&local_158,(wchar_t (*) [8])L"NumCats");
  ::FString::FString((FString *)pTVar7,L"NumCats");
  *(undefined4 *)&pTVar7->field_0x10 = 0;
  *(undefined8 *)&pTVar7->field_0x20 = 0;
  *(undefined4 *)&pTVar7->field_0x28 = 0;
  *(undefined8 *)&pTVar7->field_0x18 = 3;
  FText::FormatNamedImpl
            ((FText *)local_148,(FTextFormat *)local_188,
             (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              *)&local_158);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_158.TextData.Reference,local_158.Flags);
  if ((TTuple<FString,FFormatArgumentValue> *)local_158.TextData.Reference !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_158.TextData.Reference);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_188._8_8_);
  pFVar8 = FText::ToString((FText *)local_148);
  uVar2 = (pFVar8->Data).ArrayNum;
  if (uVar2 == local_198.Flags) {
    if (1 < (int)uVar2) {
      iVar5 = wcscmp((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                     (wchar_t *)local_198.TextData.Reference);
      bVar12 = iVar5 == 0;
      goto LAB_141c3e118;
    }
  }
  else {
    bVar12 = local_198.Flags + uVar2 == 1;
LAB_141c3e118:
    if (!bVar12) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar3 = pFVar9->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::PrintfImpl
                ((FString *)local_178,L"%s failure: result \'%s\' (expected \'%s\'). %s.");
      (*pcVar4)(pFVar3,local_178,0);
      if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
        FMemory::Free((void *)local_178._0_8_);
      }
    }
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_198.TextData.Reference);
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_118.TextData.Reference);
  }
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)local_128,(FText *)local_168);
  FText::ToString(pFVar6);
  ::FString::FString((FString *)&local_118,L"CardinalResult4");
  ::FString::FString((FString *)&local_198,L"There are 4 cats");
  local_188._0_8_ = local_128._0_8_;
  local_188._8_8_ = local_128._8_8_;
  if ((TReferenceControllerBase<1> *)local_128._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_128._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_128._8_8_ + 8) + 1);
    UNLOCK();
  }
  local_158.TextData.Reference = (ITextData *)0x0;
  local_158.Flags = 0;
  local_158._12_4_ = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,(ForAnyElementType *)&local_158,0,(int *)&local_158.field_0xc);
  pTVar7 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[8]>
                     ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                       *)&local_158,(wchar_t (*) [8])L"NumCats");
  ::FString::FString((FString *)pTVar7,L"NumCats");
  *(undefined4 *)&pTVar7->field_0x10 = 0;
  *(undefined8 *)&pTVar7->field_0x20 = 0;
  *(undefined4 *)&pTVar7->field_0x28 = 0;
  *(undefined8 *)&pTVar7->field_0x18 = 4;
  FText::FormatNamedImpl
            ((FText *)local_148,(FTextFormat *)local_188,
             (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              *)&local_158);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_158.TextData.Reference,local_158.Flags);
  if ((TTuple<FString,FFormatArgumentValue> *)local_158.TextData.Reference !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_158.TextData.Reference);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_188._8_8_);
  pFVar8 = FText::ToString((FText *)local_148);
  uVar2 = (pFVar8->Data).ArrayNum;
  if (uVar2 == local_198.Flags) {
    if ((int)uVar2 < 2) goto LAB_141c3e39f;
    iVar5 = wcscmp((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                   (wchar_t *)local_198.TextData.Reference);
    bVar12 = iVar5 == 0;
  }
  else {
    bVar12 = local_198.Flags + uVar2 == 1;
  }
  if (!bVar12) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)local_178,L"%s failure: result \'%s\' (expected \'%s\'). %s.");
    (*pcVar4)(pFVar3,local_178,0);
    if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
      FMemory::Free((void *)local_178._0_8_);
    }
  }
LAB_141c3e39f:
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_198.TextData.Reference);
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_118.TextData.Reference);
  }
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_128._8_8_);
  pFVar6 = FText::AsCultureInvariant
                     ((FText *)local_168,
                      L"You came {Place}{Place}|ordinal(one=st,two=nd,few=rd,other=th)!");
  FTextFormat::FTextFormat((FTextFormat *)local_128,pFVar6,Default);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)local_128,&local_198);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"OrdinalResult0");
  ::FString::FString((FString *)local_188,L"You came 0th!");
  local_168._0_8_ = local_128._0_8_;
  local_168._8_8_ = local_128._8_8_;
  local_res20[0] = 0;
  if ((TReferenceControllerBase<1> *)local_128._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_128._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_128._8_8_ + 8) + 1);
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[6],int>
                     ((FText *)local_148,(FTextFormat *)local_168,(wchar_t (*) [6])L"Place",
                      (int *)local_res20);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)local_128,&local_198);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"OrdinalResult1");
  ::FString::FString((FString *)local_188,L"You came 1st!");
  local_168._0_8_ = local_128._0_8_;
  local_168._8_8_ = local_128._8_8_;
  local_res20[0] = 1;
  if ((TReferenceControllerBase<1> *)local_128._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_128._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_128._8_8_ + 8) + 1);
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[6],int>
                     ((FText *)local_148,(FTextFormat *)local_168,(wchar_t (*) [6])L"Place",
                      (int *)local_res20);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)local_128,&local_198);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"OrdinalResult2");
  ::FString::FString((FString *)local_188,L"You came 2nd!");
  local_168._0_8_ = local_128._0_8_;
  local_168._8_8_ = local_128._8_8_;
  local_res20[0] = 2;
  if ((TReferenceControllerBase<1> *)local_128._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_128._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_128._8_8_ + 8) + 1);
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[6],int>
                     ((FText *)local_148,(FTextFormat *)local_168,(wchar_t (*) [6])L"Place",
                      (int *)local_res20);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)local_128,&local_198);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"OrdinalResult3");
  ::FString::FString((FString *)local_188,L"You came 3rd!");
  local_168._0_8_ = local_128._0_8_;
  local_168._8_8_ = local_128._8_8_;
  local_res20[0] = 3;
  if ((TReferenceControllerBase<1> *)local_128._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_128._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_128._8_8_ + 8) + 1);
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[6],int>
                     ((FText *)local_148,(FTextFormat *)local_168,(wchar_t (*) [6])L"Place",
                      (int *)local_res20);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)local_128,&local_198);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"OrdinalResult4");
  ::FString::FString((FString *)local_188,L"You came 4th!");
  local_168._0_8_ = local_128._0_8_;
  local_168._8_8_ = local_128._8_8_;
  local_res20[0] = 4;
  if ((TReferenceControllerBase<1> *)local_128._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_128._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_128._8_8_ + 8) + 1);
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[6],int>
                     ((FText *)local_148,(FTextFormat *)local_168,(wchar_t (*) [6])L"Place",
                      (int *)local_res20);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_128._8_8_);
  pFVar6 = FText::AsCultureInvariant
                     ((FText *)local_168,
                      L"{Gender}|gender(Le,La) {Gender}|gender(guerrier,guerrière) est {Gender}|gender(fort,forte)"
                     );
  FTextFormat::FTextFormat((FTextFormat *)&local_198,pFVar6,Default);
  if ((FTextFormatData *)local_168._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,&local_158);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"GenderResultM");
  ::FString::FString((FString *)local_188,L"Le guerrier est fort");
  local_168._0_8_ = local_198.TextData.Reference;
  local_res20[0] = local_res20[0] & 0xffffff00;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[7],enum_ETextGender>
                     ((FText *)local_148,(FTextFormat *)local_168,(wchar_t (*) [7])L"Gender",
                      (ETextGender *)local_res20);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((TTuple<FString,FFormatArgumentValue> *)local_158.TextData.Reference !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,&local_158);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"GenderResultF");
  ::FString::FString((FString *)local_188,L"La guerrière est forte");
  local_168._0_8_ = local_198.TextData.Reference;
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,1);
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[7],enum_ETextGender>
                     ((FText *)local_148,(FTextFormat *)local_168,(wchar_t (*) [7])L"Gender",
                      (ETextGender *)local_res20);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((TTuple<FString,FFormatArgumentValue> *)local_158.TextData.Reference !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_198._12_4_,local_198.Flags));
  pFVar6 = FText::AsCultureInvariant
                     ((FText *)local_168,
                      L"{Gender}|gender(Le guerrier est fort,La guerrière est forte)");
  FTextFormat::FTextFormat((FTextFormat *)&local_198,pFVar6,Default);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,&local_158);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"GenderResultM");
  ::FString::FString((FString *)local_188,L"Le guerrier est fort");
  local_168._0_8_ = local_198.TextData.Reference;
  local_res20[0] = local_res20[0] & 0xffffff00;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[7],enum_ETextGender>
                     ((FText *)local_148,(FTextFormat *)local_168,(wchar_t (*) [7])L"Gender",
                      (ETextGender *)local_res20);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((TTuple<FString,FFormatArgumentValue> *)local_158.TextData.Reference !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,&local_158);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"GenderResultF");
  ::FString::FString((FString *)local_188,L"La guerrière est forte");
  local_168._0_8_ = local_198.TextData.Reference;
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,1);
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[7],enum_ETextGender>
                     ((FText *)local_148,(FTextFormat *)local_168,(wchar_t (*) [7])L"Gender",
                      (ETextGender *)local_res20);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((TTuple<FString,FFormatArgumentValue> *)local_158.TextData.Reference !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_198._12_4_,local_198.Flags));
  FText::AsCultureInvariant(&local_158,L"사람");
  FText::AsCultureInvariant(&local_118,L"서울");
  FText::AsCultureInvariant((FText *)local_128,L"사자");
  pFVar6 = FText::AsCultureInvariant((FText *)local_168,L"{Arg}|hpp(은,는)");
  FTextFormat::FTextFormat((FTextFormat *)&local_198,pFVar6,Default);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,&local_138);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonant");
  ::FString::FString((FString *)local_188,L"사람은");
  local_168._0_8_ = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_148,(FTextFormat *)local_168,(wchar_t (*) [4])L"Arg",&local_158
                     );
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonantRieul");
  ::FString::FString((FString *)local_188,L"서울은");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      &local_118);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultVowel");
  ::FString::FString((FString *)local_188,L"사자는");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      (FText *)local_128);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_198._12_4_,local_198.Flags));
  pFVar6 = FText::AsCultureInvariant(&local_138,L"{Arg}|hpp(이,가)");
  FTextFormat::FTextFormat((FTextFormat *)&local_198,pFVar6,Default);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonant");
  ::FString::FString((FString *)local_188,L"사람이");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      &local_158);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonantRieul");
  ::FString::FString((FString *)local_188,L"서울이");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      &local_118);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultVowel");
  ::FString::FString((FString *)local_188,L"사자가");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      (FText *)local_128);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_198._12_4_,local_198.Flags));
  pFVar6 = FText::AsCultureInvariant(&local_138,L"{Arg}|hpp(을,를)");
  FTextFormat::FTextFormat((FTextFormat *)&local_198,pFVar6,Default);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonant");
  ::FString::FString((FString *)local_188,L"사람을");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      &local_158);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonantRieul");
  ::FString::FString((FString *)local_188,L"서울을");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      &local_118);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultVowel");
  ::FString::FString((FString *)local_188,L"사자를");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      (FText *)local_128);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_198._12_4_,local_198.Flags));
  pFVar6 = FText::AsCultureInvariant(&local_138,L"{Arg}|hpp(과,와)");
  FTextFormat::FTextFormat((FTextFormat *)&local_198,pFVar6,Default);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonant");
  ::FString::FString((FString *)local_188,L"사람과");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      &local_158);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonantRieul");
  ::FString::FString((FString *)local_188,L"서울과");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      &local_118);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultVowel");
  ::FString::FString((FString *)local_188,L"사자와");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      (FText *)local_128);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_198._12_4_,local_198.Flags));
  pFVar6 = FText::AsCultureInvariant(&local_138,L"{Arg}|hpp(아,야)");
  FTextFormat::FTextFormat((FTextFormat *)&local_198,pFVar6,Default);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonant");
  ::FString::FString((FString *)local_188,L"사람아");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      &local_158);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonantRieul");
  ::FString::FString((FString *)local_188,L"서울아");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      &local_118);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultVowel");
  ::FString::FString((FString *)local_188,L"사자야");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      (FText *)local_128);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_198._12_4_,local_198.Flags));
  pFVar6 = FText::AsCultureInvariant(&local_138,L"{Arg}|hpp(이어,여)");
  FTextFormat::FTextFormat((FTextFormat *)&local_198,pFVar6,Default);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonant");
  ::FString::FString((FString *)local_188,L"사람이어");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      &local_158);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonantRieul");
  ::FString::FString((FString *)local_188,L"서울이어");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      &local_118);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultVowel");
  ::FString::FString((FString *)local_188,L"사자여");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      (FText *)local_128);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if ((FTextFormatData *)local_178._0_8_ != (FTextFormatData *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if ((FTextFormatData *)local_148._0_8_ != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_198._12_4_,local_198.Flags));
  pFVar6 = FText::AsCultureInvariant(&local_138,L"{Arg}|hpp(이에,예)");
  FTextFormat::FTextFormat((FTextFormat *)&local_198,pFVar6,Default);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,(FText *)local_148);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonant");
  ::FString::FString((FString *)local_188,L"사람이에");
  local_138.TextData.Reference = local_198.TextData.Reference;
  if (CONCAT44(local_198._12_4_,local_198.Flags) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(local_198._12_4_,local_198.Flags) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     ((FText *)local_168,(FTextFormat *)&local_138,(wchar_t (*) [4])L"Arg",
                      &local_158);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  FText::~FText((FText *)local_168);
  ::FString::~FString((FString *)local_188);
  ::FString::~FString((FString *)local_178);
  FText::~FText((FText *)local_148);
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,&local_c8);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonantRieul");
  ::FString::FString((FString *)local_188,L"서울이에");
  pFVar11 = FTextFormat::FTextFormat((FTextFormat *)local_168,(FTextFormat *)&local_198);
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     (&local_138,pFVar11,(wchar_t (*) [4])L"Arg",&local_118);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  FText::~FText(&local_138);
  ::FString::~FString((FString *)local_188);
  ::FString::~FString((FString *)local_178);
  FText::~FText(&local_c8);
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,&local_68);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultVowel");
  ::FString::FString((FString *)local_188,L"사자예");
  pFVar11 = FTextFormat::FTextFormat((FTextFormat *)&local_138,(FTextFormat *)&local_198);
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     (&local_c8,pFVar11,(wchar_t (*) [4])L"Arg",(FText *)local_128);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  FText::~FText(&local_c8);
  ::FString::~FString((FString *)local_188);
  ::FString::~FString((FString *)local_178);
  FText::~FText(&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_198._12_4_,local_198.Flags));
  pFVar6 = FText::AsCultureInvariant(&local_108,L"{Arg}|hpp(이었,영)");
  FTextFormat::FTextFormat((FTextFormat *)&local_198,pFVar6,Default);
  FText::~FText(&local_108);
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,&local_f8);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonant");
  ::FString::FString((FString *)local_188,L"사람이었");
  pFVar11 = FTextFormat::FTextFormat((FTextFormat *)&local_68,(FTextFormat *)&local_198);
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     (&local_108,pFVar11,(wchar_t (*) [4])L"Arg",&local_158);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  FText::~FText(&local_108);
  ::FString::~FString((FString *)local_188);
  ::FString::~FString((FString *)local_178);
  FText::~FText(&local_f8);
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,&local_b8);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonantRieul");
  ::FString::FString((FString *)local_188,L"서울이었");
  pFVar11 = FTextFormat::FTextFormat((FTextFormat *)&local_108,(FTextFormat *)&local_198);
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     (&local_f8,pFVar11,(wchar_t (*) [4])L"Arg",&local_118);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  FText::~FText(&local_f8);
  ::FString::~FString((FString *)local_188);
  ::FString::~FString((FString *)local_178);
  FText::~FText(&local_b8);
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,&local_58);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultVowel");
  ::FString::FString((FString *)local_188,L"사자영");
  pFVar11 = FTextFormat::FTextFormat((FTextFormat *)&local_f8,(FTextFormat *)&local_198);
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     (&local_b8,pFVar11,(wchar_t (*) [4])L"Arg",(FText *)local_128);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  FText::~FText(&local_b8);
  ::FString::~FString((FString *)local_188);
  ::FString::~FString((FString *)local_178);
  FText::~FText(&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_198._12_4_,local_198.Flags));
  pFVar6 = FText::AsCultureInvariant(&local_e8,L"{Arg}|hpp(으로,로)");
  FTextFormat::FTextFormat((FTextFormat *)&local_198,pFVar6,Default);
  FText::~FText(&local_e8);
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,&local_d8);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonant");
  ::FString::FString((FString *)local_188,L"사람으로");
  pFVar11 = FTextFormat::FTextFormat((FTextFormat *)&local_58,(FTextFormat *)&local_198);
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     (&local_e8,pFVar11,(wchar_t (*) [4])L"Arg",&local_158);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  FText::~FText(&local_e8);
  ::FString::~FString((FString *)local_188);
  ::FString::~FString((FString *)local_178);
  FText::~FText(&local_d8);
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,&local_a8);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultConsonantRieul");
  ::FString::FString((FString *)local_188,L"서울로");
  pFVar11 = FTextFormat::FTextFormat((FTextFormat *)&local_e8,(FTextFormat *)&local_198);
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     (&local_d8,pFVar11,(wchar_t (*) [4])L"Arg",&local_118);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  FText::~FText(&local_d8);
  ::FString::~FString((FString *)local_188);
  ::FString::~FString((FString *)local_178);
  FText::~FText(&local_a8);
  pFVar6 = FTextFormat::GetSourceText((FTextFormat *)&local_198,&local_48);
  pFVar8 = FText::ToString(pFVar6);
  ::FString::FString((FString *)local_178,L"HppResultVowel");
  ::FString::FString((FString *)local_188,L"사자로");
  pFVar11 = FTextFormat::FTextFormat((FTextFormat *)&local_d8,(FTextFormat *)&local_198);
  pFVar6 = FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
                     (&local_a8,pFVar11,(wchar_t (*) [4])L"Arg",(FText *)local_128);
  pFVar10 = FText::ToString(pFVar6);
  `FTextFormatArgModifierTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,(FString *)local_188,(FString *)local_178,pFVar8);
  FText::~FText(&local_a8);
  ::FString::~FString((FString *)local_188);
  ::FString::~FString((FString *)local_178);
  FText::~FText(&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_198._12_4_,local_198.Flags));
  FText::~FText((FText *)local_128);
  FText::~FText(&local_118);
  FText::~FText(&local_158);
  FInternationalization::RestoreCultureState(this_00,&local_98);
  FInternationalization::FCultureStateSnapshot::~FCultureStateSnapshot(&local_98);
  return;
}

