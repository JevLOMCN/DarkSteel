// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cba200

EAutomationTestFlags __thiscall FCbWriterStreamTest::GetTestFlags(FCbWriterStreamTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cba210

bool __thiscall FCbWriterStreamTest::IsStressTest(FCbWriterStreamTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cba220

uint __thiscall FCbWriterStreamTest::GetRequiredDeviceNum(FCbWriterStreamTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cba230

FString * __thiscall
FCbWriterStreamTest::GetTestSourceFileName
          (FCbWriterStreamTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryWriterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cba260

int __thiscall FCbWriterStreamTest::GetTestSourceFileLine(FCbWriterStreamTest *this)

{
  return 0x3d4;
}

// GetTests @ 141cba270

/* WARNING: Removing unreachable block (ram,0x000141cba3ee) */

void __thiscall
FCbWriterStreamTest::GetTests
          (FCbWriterStreamTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cba410

bool __thiscall FCbWriterStreamTest::RunTest(FCbWriterStreamTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cba440

FString * __thiscall
FCbWriterStreamTest::GetBeautifiedTestName
          (FCbWriterStreamTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbWriterStreamTest @ 141ce64a0

FCbWriterStreamTest * __thiscall
FCbWriterStreamTest::FCbWriterStreamTest(FCbWriterStreamTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbWriterStreamTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::CbWriter::Stream");
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

// TestBody @ 141d16620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCbWriterStreamTest::TestBody(FCbWriterStreamTest *this,FString *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  FAutomationTestBase *pFVar6;
  code *pcVar7;
  bool bVar8;
  ECbValidateError EVar9;
  FCbFieldView *pFVar10;
  FDateTime *pFVar11;
  FCbObjectId *pFVar12;
  FCbFieldIterator *this_00;
  FCbObject *pFVar13;
  FAutomationTestFramework *pFVar14;
  void *pvVar15;
  ulonglong uVar16;
  void *pvVar17;
  undefined1 auStackY_528 [32];
  FCbWriter local_4e8;
  undefined4 local_4c0 [2];
  wchar_t *local_4b8;
  undefined8 uStack_4b0;
  FCbObjectView local_4a8;
  longlong *local_498;
  FTimespan local_490;
  TMemoryView<void_const_> local_488;
  char *local_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  TMemoryView<void_const_> local_468;
  FString local_458;
  char *local_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  char *local_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  char *local_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  char *local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  char *local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  char *local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  char *local_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  char *local_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  char *local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  char *local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  char *local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  wchar_t *local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  char *local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  char *local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  char *local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  char *local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  char *local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  char *local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  char *local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  char *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  char *local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  char *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  char *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  char *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  TStringView<char8_t> local_2c8;
  FDateTime local_2b8 [2];
  TStringView<char8_t> local_2a8;
  TStringView<char8_t> local_298;
  TStringView<char8_t> local_288;
  TStringView<char8_t> local_278;
  FCbFieldView local_268;
  TStringView<char8_t> local_258;
  FCbFieldView local_248;
  TStringView<char8_t> local_238;
  TStringView<char8_t> local_228;
  TStringView<char8_t> local_218;
  TStringView<char8_t> local_208;
  TStringView<char8_t> local_1f8;
  TStringView<char8_t> local_1e8;
  TStringView<char8_t> local_1d8;
  TStringView<wchar_t> local_1c8;
  TStringView<char8_t> local_1b8;
  TStringView<wchar_t> local_1a8;
  TStringView<char8_t> local_198;
  TStringView<char8_t> local_188;
  TStringView<char8_t> local_178;
  TStringView<char8_t> local_168;
  TStringView<char8_t> local_158;
  TStringView<char8_t> local_148;
  TStringView<char8_t> local_138;
  TStringView<char8_t> local_128;
  TStringView<char8_t> local_118;
  TStringView<char8_t> local_108;
  undefined1 local_f8 [24];
  FCbFieldView local_e0;
  undefined1 local_d0 [32];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  FCbObjectId local_a0;
  FIoHash local_94;
  FCbAttachment local_80;
  FCbObjectId local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_528;
  FCbObjectView::FCbObjectView(&local_4a8);
  pvVar15 = (void *)0x0;
  local_498 = (longlong *)0x0;
  FCbWriter::FCbWriter(&local_4e8);
  FCbWriter::BeginObject(&local_4e8);
  uStack_440 = 9;
  local_448 = "FieldCopy";
  local_288._12_4_ = uStack_43c;
  local_288.Size = 9;
  local_288.DataPtr = "FieldCopy";
  local_4c0[0] = 0x2a490188;
  FCbWriter::SetNameOrAddString(&local_4e8,&local_288);
  pFVar10 = FCbFieldView::FCbFieldView(&local_e0,local_4c0,HasFieldType);
  FCbWriter::AddField(&local_4e8,pFVar10);
  uStack_430 = 10;
  local_438 = "ObjectCopy";
  local_278._12_4_ = uStack_42c;
  local_278.Size = 10;
  local_278.DataPtr = "ObjectCopy";
  local_30 = 0x74f0182;
  local_2c = 0x2a490188;
  local_28 = 0x181;
  local_26 = 0x4e;
  FCbWriter::SetNameOrAddString(&local_4e8,&local_278);
  FCbFieldView::FCbFieldView(&local_268,&local_30,HasFieldType);
  FCbWriter::AddObject(&local_4e8,(FCbObjectView *)&local_268);
  uStack_420 = 9;
  local_428 = "ArrayCopy";
  local_258._12_4_ = uStack_41c;
  local_258.Size = 9;
  local_258.DataPtr = "ArrayCopy";
  local_38 = 0x4410185;
  local_34 = 0x152a0802;
  FCbWriter::SetNameOrAddString(&local_4e8,&local_258);
  FCbFieldView::FCbFieldView(&local_248,&local_38,HasFieldType);
  FCbWriter::AddArray(&local_4e8,(FCbArrayView *)&local_248);
  uStack_410 = 4;
  local_418 = "Null";
  local_238._12_4_ = uStack_40c;
  local_238.Size = 4;
  local_238.DataPtr = "Null";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_238);
  FCbWriter::AddNull(&local_4e8);
  uStack_400 = 7;
  local_408 = "Strings";
  local_228._12_4_ = uStack_3fc;
  local_228.Size = 7;
  local_228.DataPtr = "Strings";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_228);
  FCbWriter::BeginObject(&local_4e8);
  local_3f8 = "AnsiString";
  uStack_3f0 = 10;
  local_218._12_4_ = uStack_3ec;
  local_218.Size = 10;
  local_218.DataPtr = "AnsiString";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_218);
  uStack_3e0 = 9;
  local_3e8 = "AnsiValue";
  local_208._12_4_ = uStack_3dc;
  local_208.Size = 9;
  local_208.DataPtr = "AnsiValue";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_208);
  uStack_3d0 = 0x11;
  local_3d8 = "AnsiStringLiteral";
  local_1f8._12_4_ = uStack_3cc;
  local_1f8.Size = 0x11;
  local_1f8.DataPtr = "AnsiStringLiteral";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_1f8);
  local_3c8 = "AnsiValue";
  uStack_3c0 = 9;
  local_1e8._12_4_ = uStack_3bc;
  local_1e8.Size = 9;
  local_1e8.DataPtr = "AnsiValue";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_1e8);
  uStack_3b0 = 10;
  local_3b8 = "WideString";
  local_1d8._12_4_ = uStack_3ac;
  local_1d8.Size = 10;
  local_1d8.DataPtr = "WideString";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_1d8);
  uStack_4b0._0_4_ = 9;
  local_4b8 = L"WideValue";
  local_1c8.DataPtr = L"WideValue";
  local_1c8.Size = 9;
  local_1c8._12_4_ = uStack_4b0._4_4_;
  FCbWriter::AddString(&local_4e8,&local_1c8);
  uStack_3a0 = 0x11;
  local_3a8 = "WideStringLiteral";
  local_1b8._12_4_ = uStack_39c;
  local_1b8.Size = 0x11;
  local_1b8.DataPtr = "WideStringLiteral";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_1b8);
  local_398 = L"WideValue";
  uStack_390 = 9;
  local_1a8._12_4_ = uStack_38c;
  local_1a8.Size = 9;
  local_1a8.DataPtr = L"WideValue";
  FCbWriter::AddString(&local_4e8,&local_1a8);
  FCbWriter::EndObject(&local_4e8);
  uStack_380 = 8;
  local_388 = "Integers";
  local_2c8._12_4_ = uStack_37c;
  local_2c8.Size = 8;
  local_2c8.DataPtr = "Integers";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_2c8);
  FCbWriter::BeginArray(&local_4e8);
  FCbWriter::AddInteger(&local_4e8,-1);
  FCbWriter::AddInteger(&local_4e8,-1);
  FCbWriter::AddInteger(&local_4e8,1);
  FCbWriter::AddInteger(&local_4e8,1);
  FCbWriter::AddInteger(&local_4e8,-1);
  FCbWriter::AddInteger(&local_4e8,0xffffffffffffffff);
  FCbWriter::AddInteger(&local_4e8,-1);
  FCbWriter::AddInteger(&local_4e8,0xffffffffffffffff);
  FCbWriter::EndArray(&local_4e8);
  uStack_370 = 7;
  local_378 = "Float32";
  local_2a8._12_4_ = uStack_36c;
  local_2a8.Size = 7;
  local_2a8.DataPtr = "Float32";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_2a8);
  FCbWriter::AddFloat(&local_4e8,__real_3f800000);
  uStack_360 = 7;
  local_368 = "Float64";
  local_198._12_4_ = uStack_35c;
  local_198.Size = 7;
  local_198.DataPtr = "Float64";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_198);
  FCbWriter::AddFloat(&local_4e8,__real_4000000000000000);
  uStack_350 = 5;
  local_358 = "False";
  local_188._12_4_ = uStack_34c;
  local_188.Size = 5;
  local_188.DataPtr = "False";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_188);
  FCbWriter::AddBool(&local_4e8,false);
  uStack_340 = 4;
  local_348 = "True";
  local_178._12_4_ = uStack_33c;
  local_178.Size = 4;
  local_178.DataPtr = "True";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_178);
  FCbWriter::AddBool(&local_4e8,true);
  uStack_330 = 10;
  local_338 = "Attachment";
  local_168._12_4_ = uStack_32c;
  local_168.Size = 10;
  local_168.DataPtr = "Attachment";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_168);
  local_80.Value._padding_ = 0;
  local_80.Value._padding_ = 0;
  local_80.Value._48_8_ = 0;
  local_80.Value._padding_ = 0;
  local_80.Value._padding_ = 0;
  local_80.Value._padding_ = 0;
  local_80.Value._padding_ = 0;
  FCbWriter::AddAttachment(&local_4e8,&local_80);
  uVar16 = local_80.Value._48_8_ & 0xff;
  if ((3 < local_80.Value.TypeIndex) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16] !=
      UE::Core::Private::TDestructorCaller<std::nullptr_t>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16])(&local_80);
  }
  uStack_320 = 4;
  local_328 = "Hash";
  local_158._12_4_ = uStack_31c;
  local_158.Size = 4;
  local_158.DataPtr = "Hash";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_158);
  local_94.Hash[0] = '\0';
  local_94.Hash[1] = '\0';
  local_94.Hash[2] = '\0';
  local_94.Hash[3] = '\0';
  local_94.Hash[4] = '\0';
  local_94.Hash[5] = '\0';
  local_94.Hash[6] = '\0';
  local_94.Hash[7] = '\0';
  local_94.Hash[8] = '\0';
  local_94.Hash[9] = '\0';
  local_94.Hash[10] = '\0';
  local_94.Hash[0xb] = '\0';
  local_94.Hash[0xc] = '\0';
  local_94.Hash[0xd] = '\0';
  local_94.Hash[0xe] = '\0';
  local_94.Hash[0xf] = '\0';
  local_94.Hash[0x10] = '\0';
  local_94.Hash[0x11] = '\0';
  local_94.Hash[0x12] = '\0';
  local_94.Hash[0x13] = '\0';
  FCbWriter::AddHash(&local_4e8,&local_94);
  uStack_310 = 4;
  local_318 = "Uuid";
  local_148._12_4_ = uStack_30c;
  local_148.Size = 4;
  local_148.DataPtr = "Uuid";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_148);
  local_4b8 = (wchar_t *)0x0;
  uStack_4b0._0_4_ = 0;
  uStack_4b0._4_4_ = 0;
  FCbWriter::AddUuid(&local_4e8,(FGuid *)&local_4b8);
  uStack_300 = 8;
  local_308 = "DateTime";
  local_138._12_4_ = uStack_2fc;
  local_138.Size = 8;
  local_138.DataPtr = "DateTime";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_138);
  pFVar11 = FDateTime::FDateTime(local_2b8,0x7e4,5,0xd,0xf,10,0,0);
  FCbWriter::operator<<(&local_4e8,(FDateTime)pFVar11->Ticks);
  uStack_2f0 = 8;
  local_2f8 = "TimeSpan";
  local_128._12_4_ = uStack_2ec;
  local_128.Size = 8;
  local_128.DataPtr = "TimeSpan";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_128);
  FTimespan::Assign(&local_490,1,2,4,8,0);
  FCbWriter::operator<<(&local_4e8,local_490);
  uStack_2e0 = 0xc;
  local_2e8 = "ObjectIdZero";
  local_118._12_4_ = uStack_2dc;
  local_118.Size = 0xc;
  local_118.DataPtr = "ObjectIdZero";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_118);
  local_a0.Bytes[0] = '\0';
  local_a0.Bytes[1] = '\0';
  local_a0.Bytes[2] = '\0';
  local_a0.Bytes[3] = '\0';
  local_a0.Bytes[4] = '\0';
  local_a0.Bytes[5] = '\0';
  local_a0.Bytes[6] = '\0';
  local_a0.Bytes[7] = '\0';
  local_a0.Bytes[8] = '\0';
  local_a0.Bytes[9] = '\0';
  local_a0.Bytes[10] = '\0';
  local_a0.Bytes[0xb] = '\0';
  FCbWriter::AddObjectId(&local_4e8,&local_a0);
  local_2d8 = "ObjectId";
  uStack_2d0 = 8;
  local_108._12_4_ = uStack_2cc;
  local_108.Size = 8;
  local_108.DataPtr = "ObjectId";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_108);
  local_488.Data = &local_b0;
  local_b0 = 0x4030201;
  local_ac = 0x8070605;
  local_a8 = 0xc0b0a09;
  local_488.Size = 0xc;
  pFVar12 = FCbObjectId::FCbObjectId(&local_48,&local_488);
  FCbWriter::AddObjectId(&local_4e8,pFVar12);
  uStack_470 = 0xb;
  local_478 = "LiteralName";
  local_298._12_4_ = uStack_46c;
  local_298.Size = 0xb;
  local_298.DataPtr = "LiteralName";
  FCbWriter::SetNameOrAddString(&local_4e8,&local_298);
  FCbWriter::AddNull(&local_4e8);
  FCbWriter::EndObject(&local_4e8);
  this_00 = FCbWriter::Save(&local_4e8,(FCbFieldIterator *)local_d0);
  pFVar13 = FCbField::AsObject((FCbField *)this_00,(FCbObject *)local_f8);
  plVar3 = local_498;
  local_4a8._0_4_ = *(undefined4 *)pFVar13;
  local_4a8._4_4_ = *(undefined4 *)&pFVar13->field_0x4;
  local_4a8._8_4_ = *(undefined4 *)&pFVar13->field_0x8;
  local_4a8._12_4_ = *(undefined4 *)&pFVar13->field_0xc;
  plVar5 = *(longlong **)&pFVar13->field_0x10;
  *(undefined8 *)&pFVar13->field_0x10 = 0;
  if (local_498 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_498 + 3;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar4 & 0x3fffffff) == 1) {
      lVar4 = *local_498;
      local_498 = plVar5;
      (**(code **)(lVar4 + 0x10))(plVar3);
      plVar3[1] = 0;
      plVar3[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar3 + 3);
      uVar16 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      plVar5 = local_498;
      if (((uint)(uVar16 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar3)(plVar3,1);
        plVar5 = local_498;
      }
    }
  }
  local_498 = plVar5;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_f8 + 0x10));
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_d0 + 0x10));
  FCbWriter::~FCbWriter(&local_4e8);
  pFVar14 = FAutomationTestFramework::Get();
  plVar5 = local_498;
  pFVar6 = pFVar14->CurrentTest;
  pvVar17 = pvVar15;
  if (local_498 != (longlong *)0x0) {
    if (((ulonglong)local_498[3] >> 0x3c & 4) == 0) {
      (**(code **)(*local_498 + 8))(local_498);
    }
    pvVar17 = (void *)plVar5[2];
  }
  plVar5 = local_498;
  if (local_498 != (longlong *)0x0) {
    if (((ulonglong)local_498[3] >> 0x3c & 4) == 0) {
      (**(code **)(*local_498 + 8))(local_498);
    }
    pvVar15 = (void *)plVar5[1];
  }
  local_468.Data = pvVar15;
  local_468.Size = (ulong64)pvVar17;
  EVar9 = ValidateCompactBinary(&local_468,All,HasFieldType);
  if (EVar9 != None) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_458,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_458,0);
    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
  }
  plVar5 = local_498;
  if (local_498 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_498 + 3;
    lVar4 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (((uint)lVar4 & 0x3fffffff) == 1) {
      (**(code **)(*local_498 + 0x10))(local_498);
      plVar5[1] = 0;
      plVar5[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar5 + 3);
      uVar16 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar16 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar5)(plVar5,1);
      }
    }
  }
  return;
}

