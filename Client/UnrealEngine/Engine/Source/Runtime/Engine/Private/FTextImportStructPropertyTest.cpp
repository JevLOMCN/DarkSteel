// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// GetTestFlags @ 148876880

EAutomationTestFlags __thiscall
FTextImportStructPropertyTest::GetTestFlags(FTextImportStructPropertyTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 148876890

bool __thiscall FTextImportStructPropertyTest::IsStressTest(FTextImportStructPropertyTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1488768a0

uint __thiscall
FTextImportStructPropertyTest::GetRequiredDeviceNum(FTextImportStructPropertyTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1488768b0

FString * __thiscall
FTextImportStructPropertyTest::GetTestSourceFileName
          (FTextImportStructPropertyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\TextImportTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1488768e0

int __thiscall
FTextImportStructPropertyTest::GetTestSourceFileLine(FTextImportStructPropertyTest *this)

{
  return 0xc;
}

// GetTests @ 1488768f0

/* WARNING: Removing unreachable block (ram,0x000148876a6e) */

void __thiscall
FTextImportStructPropertyTest::GetTests
          (FTextImportStructPropertyTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 148876a90

bool __thiscall
FTextImportStructPropertyTest::RunTest(FTextImportStructPropertyTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 148876ac0

FString * __thiscall
FTextImportStructPropertyTest::GetBeautifiedTestName
          (FTextImportStructPropertyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTextImportStructPropertyTest @ 14887c9b0

FTextImportStructPropertyTest * __thiscall
FTextImportStructPropertyTest::FTextImportStructPropertyTest
          (FTextImportStructPropertyTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTextImportStructPropertyTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Engine][TextImport][StructProperty]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Engine::TextImport::StructProperty");
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
  ::FString::FString(&local_18,"[Engine][TextImport][StructProperty]");
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

// TestBody @ 14889c410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FTextImportStructPropertyTest::TestBody(FTextImportStructPropertyTest *this,FString *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  UStruct *pUVar3;
  FScriptContainerElement *pFVar4;
  UScriptStruct *this_00;
  FAutomationTestBase *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  FName FVar11;
  FString *pFVar12;
  FAutomationTestFramework *pFVar13;
  longlong *plVar14;
  FString *pFVar15;
  longlong lVar16;
  undefined1 *puVar17;
  FName FVar18;
  FName FVar19;
  undefined1 auStackY_438 [32];
  TFieldIterator<FStructProperty> local_3e0;
  int local_3c8;
  undefined4 local_3c4;
  FString local_3c0;
  FOutputDevice local_3b0;
  FString local_3a0;
  FName local_390;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  undefined1 local_328 [128];
  undefined1 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  FString local_298;
  wchar_t *local_288;
  undefined4 local_280;
  undefined1 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  FString local_268;
  wchar_t *local_258;
  undefined4 local_250;
  undefined1 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  FString local_238;
  wchar_t *local_228;
  undefined4 local_220;
  undefined1 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  FString local_208;
  wchar_t *local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  FString local_1d8;
  wchar_t *local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  FString local_1a8;
  wchar_t *local_198;
  undefined4 local_190;
  undefined1 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  FString local_178;
  wchar_t *local_168;
  undefined4 local_160;
  undefined1 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  FString local_148;
  wchar_t *local_138;
  undefined4 local_130;
  undefined1 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  FString local_118;
  wchar_t *local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  FString local_e8;
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  FString local_b8;
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  FString local_88;
  wchar_t *local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  FString local_58;
  wchar_t *local_48;
  undefined4 local_40;
  FString local_38;
  
  local_38.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStackY_438);
  local_2a8 = 0;
  local_2a0 = 1;
  local_29c = 2;
  ::FString::FString(&local_298,"String,With,Commas");
  local_280 = 0x58;
  local_288 = 
  L"(EmbeddedFlags=\"ETextImportTestFlags::FlagA\",TestInt=2, TestString=\"String,With,Commas\")";
  local_278 = 0;
  local_270 = 1;
  local_26c = 2;
  ::FString::FString(&local_268,"String,With,Commas");
  local_250 = 0x43;
  local_258 = L"(EmbeddedFlags=\"FlagA \",TestInt=2, TestString=\"String,With,Commas\")";
  local_248 = 0;
  local_240 = 3;
  local_23c = 2;
  ::FString::FString(&local_238,"String,With,Commas");
  local_220 = 0x76;
  local_228 = 
  L"(EmbeddedFlags=\"ETextImportTestFlags::FlagA | ETextImportTestFlags::FlagB\",TestInt=2, TestString=\"String,With,Commas\")"
  ;
  local_218 = 0;
  local_210 = 3;
  local_20c = 2;
  ::FString::FString(&local_208,"String,With,Commas");
  local_1f0 = 0x4a;
  local_1f8 = L"(EmbeddedFlags=\"FlagA | FlagB\",TestInt=2, TestString=\"String,With,Commas\")";
  local_1e8 = 0;
  local_1e0 = 3;
  local_1dc = 2;
  ::FString::FString(&local_1d8,"String,With,Commas");
  local_1c0 = 0x74;
  local_1c8 = 
  L"(EmbeddedFlags=ETextImportTestFlags::FlagA | ETextImportTestFlags::FlagB,TestInt=2, TestString=\"String,With,Commas\")"
  ;
  local_1b8 = 0;
  local_1b0 = 3;
  local_1ac = 2;
  ::FString::FString(&local_1a8,"String,With,Commas");
  local_190 = 0x48;
  local_198 = L"(EmbeddedFlags=FlagA | FlagB,TestInt=2, TestString=\"String,With,Commas\")";
  local_188 = 1;
  local_180 = 3;
  local_17c = 2;
  ::FString::FString(&local_178,"String,With,Commas");
  local_160 = 0x49;
  local_168 = L"(EmbeddedFlags=\"FlagA | FlagB,TestInt=2, TestString=\"String,With,Commas\")";
  local_158 = 1;
  local_150 = 3;
  local_14c = 2;
  ::FString::FString(&local_148,"String,With,Commas");
  local_130 = 0x49;
  local_138 = L"(EmbeddedFlags=FlagA | FlagB\",TestInt=2, TestString=\"String,With,Commas\")";
  local_128 = 1;
  local_120 = 0x20;
  local_11c = 1;
  ::FString::FString(&local_118,"");
  local_100 = 0x2c;
  local_108 = L"(EmbeddedFlags=\"\",TestInt=\"\", TestString=\"\")";
  local_f8 = 0;
  local_f0 = 0x20;
  local_ec = 1;
  ::FString::FString(&local_e8,"DefaultString");
  local_d0 = 0x26;
  local_d8 = L"(EmbeddedFlags=,TestInt=, TestString=)";
  local_c8 = 0;
  local_c0 = 0x20;
  local_bc = 1;
  ::FString::FString(&local_b8,"DefaultString");
  local_a0 = 0x58;
  local_a8 = 
  L"(WrongNameA=\"ETextImportTestFlags::FlagA\",WrongNameB=2, WrongNameC=\"String,With,Commas\")";
  local_98 = 1;
  local_90 = 0x20;
  local_8c = 1;
  ::FString::FString(&local_88,"");
  local_70 = 0x27;
  local_78 = L"(EmbeddedFlags=(,TestInt=, TestString=)";
  local_68 = 1;
  local_60 = 0x20;
  local_5c = 1;
  ::FString::FString(&local_58,"");
  local_40 = 0x27;
  local_48 = L"(EmbeddedFlags=\",TestInt=, TestString=)";
  pUVar9 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar9,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar10 = UTextImportContainer::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_328,pUVar10);
  local_328._8_8_ = pUVar9;
  pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_328);
  if (local_328._64_8_ != 0) {
    plVar14 = (longlong *)(local_328 + 0x50);
    if ((longlong *)local_328._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_328._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if ((pUVar9 == (UObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Container",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\TextImportTest.cpp"
                         ,0x29,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar3 = *(UStruct **)&pUVar9->field_0x10;
  ::FName::FName(&local_390,L"ResultStruct",FNAME_Find);
  FVar18.ComparisonIndex.Value = 0;
  FVar18.Number = 0;
  if (local_390 != (FName)0x0) {
    if (pUVar3 == (UStruct *)0x0) {
      local_3e0.Field = (FField *)0x0;
    }
    else {
      local_3e0.Field = pUVar3->ChildProperties;
    }
    local_3e0.InterfaceIndex = -1;
    local_3e0.bIncludeSuper = true;
    local_3e0.bIncludeDeprecated = true;
    local_3e0.bIncludeInterface = false;
    local_3e0.Struct = pUVar3;
    TFieldIterator<FStructProperty>::IterateToNext(&local_3e0);
    FVar19 = (FName)local_3e0.Field;
    while (local_3e0.Field = (FField *)FVar19, FVar19 != (FName)0x0) {
      bVar7 = IsThisNotNull((void *)FVar19,"FField::GetFName");
      FVar11 = FVar18;
      if (bVar7) {
        FVar11 = *(FName *)((longlong)FVar19 + 0x20);
      }
      if (FVar11 == local_390) {
        FVar18 = FVar19;
        if (FVar19 != (FName)0x0) goto LAB_14889c945;
        break;
      }
      local_3e0.Field = *(FField **)((longlong)FVar19 + 0x18);
      TFieldIterator<FStructProperty>::IterateToNext(&local_3e0);
      FVar19 = (FName)local_3e0.Field;
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("ObjProp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\TextImportTest.cpp"
                     ,0x2b,L"");
  FVar19 = FVar18;
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14889c945:
  if ((*(longlong *)((longlong)FVar19 + 0x70) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjProp->Struct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\TextImportTest.cpp"
                         ,0x2c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar17 = &pUVar9[1].field_0x8;
  pFVar15 = &local_298;
  do {
    local_3c8 = 0x20;
    local_3c4 = 1;
    local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3c0.Data.ArrayNum = 0;
    local_3c0.Data.ArrayMax = 0;
    ::FString::FString(&local_3c0,"DefaultString");
    *(int *)(pUVar9 + 1) = local_3c8;
    *(undefined4 *)&pUVar9[1].field_0x4 = local_3c4;
    if ((FString *)puVar17 == &local_3c0) {
      if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
      }
    }
    else {
      if (*(void **)puVar17 != (void *)0x0) {
        FMemory::Free(*(void **)puVar17);
      }
      *(FScriptContainerElement **)puVar17 = local_3c0.Data.AllocatorInstance.Data;
      *(int *)&pUVar9[1].field_0x10 = local_3c0.Data.ArrayNum;
      *(int *)&pUVar9[1].field_0x14 = local_3c0.Data.ArrayMax;
    }
    pFVar4 = pFVar15[1].Data.AllocatorInstance.Data;
    ::FString::FString(&local_3a0,L"");
    FOutputDevice::FOutputDevice(&local_3b0);
    this_00 = *(UScriptStruct **)((longlong)FVar19 + 0x70);
    local_3b0._padding_ = (longlong)&___7FStringOutputDevice__6B_;
    local_3b0.bAutoEmitLineTerminator = false;
    pFVar12 = ::FString::FString(&local_338,"FTextImportTestStruct");
    UScriptStruct::ImportText(this_00,(wchar_t *)pFVar4,pUVar9 + 1,pUVar9,0,&local_3b0,pFVar12,true)
    ;
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
    iVar8 = local_3a0.Data.ArrayNum + -1;
    if (local_3a0.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    if ((*(char *)&pFVar15[-1].Data.AllocatorInstance.Data == '\0') && (0 < iVar8)) {
      ::FString::PrintfImpl(&local_368,L"Test case failed due to ImportError %s for Test Case: %s");
      pFVar13 = FAutomationTestFramework::Get();
      (**(code **)(pFVar13->CurrentTest->_padding_ + 0x28))(pFVar13->CurrentTest,&local_368,0);
      if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Data.AllocatorInstance.Data);
      }
    }
    if ((bool)*(char *)&pFVar15[-1].Data.AllocatorInstance.Data != 0 < iVar8) {
      pFVar13 = FAutomationTestFramework::Get();
      pFVar5 = pFVar13->CurrentTest;
      pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_358,L"Import Error Mismatch. Result: %s Expected: %s for TestCase: %s");
      (*pcVar6)(pFVar5,&local_358,0);
      if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.Data.AllocatorInstance.Data);
      }
    }
    if (*(char *)&pFVar15[-1].Data.AllocatorInstance.Data == '\0') {
      if ((*(int *)(pUVar9 + 1) == pFVar15[-1].Data.ArrayNum) &&
         (*(int *)&pUVar9[1].field_0x4 == pFVar15[-1].Data.ArrayMax)) {
        iVar8 = *(int *)&pUVar9[1].field_0x10;
        iVar2 = (pFVar15->Data).ArrayNum;
        if (iVar8 == iVar2) {
          if (iVar8 < 2) goto LAB_14889ccb8;
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)puVar17,(wchar_t *)(pFVar15->Data).AllocatorInstance.Data)
          ;
          bVar7 = iVar8 == 0;
        }
        else {
          bVar7 = iVar8 + iVar2 == 1;
        }
        if (bVar7) goto LAB_14889ccb8;
      }
      pFVar13 = FAutomationTestFramework::Get();
      pFVar5 = pFVar13->CurrentTest;
      pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_378,L"EmbeddedFlags: %d TestInt: %d TestString: %s");
      ::FString::PrintfImpl(&local_388,L"EmbeddedFlags: %d TestInt: %d TestString: %s");
      ::FString::PrintfImpl
                (&local_348,L"Import Results are Incorrect: %s Expected: %s for TestCase: %s");
      (*pcVar6)(pFVar5,&local_348,0);
      if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.Data.AllocatorInstance.Data);
      }
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
      if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data.AllocatorInstance.Data);
      }
    }
LAB_14889ccb8:
    FOutputDevice::~FOutputDevice(&local_3b0);
    if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
    }
    pFVar12 = pFVar15 + 2;
    pFVar15 = pFVar15 + 3;
    if (pFVar12 == &local_38) {
      lVar16 = 0xd;
      puVar17 = &stack0xffffffffffffffd8;
      do {
        puVar1 = (undefined8 *)(puVar17 + -0x30);
        puVar17 = puVar17 + -0x30;
        lVar16 = lVar16 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
      } while (lVar16 != 0);
      return;
    }
  } while( true );
}

