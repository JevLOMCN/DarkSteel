// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ccd100

EAutomationTestFlags __thiscall FCbWriterComplexTest::GetTestFlags(FCbWriterComplexTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ccd110

bool __thiscall FCbWriterComplexTest::IsStressTest(FCbWriterComplexTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ccd120

uint __thiscall FCbWriterComplexTest::GetRequiredDeviceNum(FCbWriterComplexTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ccd130

FString * __thiscall
FCbWriterComplexTest::GetTestSourceFileName
          (FCbWriterComplexTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryWriterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ccd160

int __thiscall FCbWriterComplexTest::GetTestSourceFileLine(FCbWriterComplexTest *this)

{
  return 0x312;
}

// GetTests @ 141ccd1c0

/* WARNING: Removing unreachable block (ram,0x000141ccd33e) */

void __thiscall
FCbWriterComplexTest::GetTests
          (FCbWriterComplexTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ccd360

bool __thiscall FCbWriterComplexTest::RunTest(FCbWriterComplexTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ccd390

FString * __thiscall
FCbWriterComplexTest::GetBeautifiedTestName
          (FCbWriterComplexTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbWriterComplexTest @ 141ce4d10

FCbWriterComplexTest * __thiscall
FCbWriterComplexTest::FCbWriterComplexTest(FCbWriterComplexTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbWriterComplexTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::CbWriter::Complex");
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

// TestBody @ 141d120d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCbWriterComplexTest::TestBody(FCbWriterComplexTest *this,FString *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  FAutomationTestBase *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ECbValidateError EVar9;
  FCbFieldView *pFVar10;
  FSharedBuffer FVar11;
  FString *pFVar12;
  FDateTime *pFVar13;
  FCbObjectId *pFVar14;
  FCbFieldIterator *this_00;
  FCbObject *pFVar15;
  FAutomationTestFramework *pFVar16;
  ulong64 uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  void *pvVar22;
  longlong lVar23;
  undefined1 auStackY_ad8 [32];
  FCbWriter local_a98;
  undefined4 local_a70 [2];
  char *local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  FCbObjectView local_a50;
  FSharedBuffer local_a40;
  wchar_t *local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 local_a20;
  undefined8 local_a18;
  TMemoryView<void_const_> local_a10;
  uchar *local_9f8;
  undefined8 uStack_9f0;
  char *local_9e8;
  undefined4 uStack_9e0;
  undefined4 uStack_9dc;
  char *local_9d8;
  undefined4 uStack_9d0;
  undefined4 uStack_9cc;
  char *local_9c8;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  TMemoryView<void_const_> local_9b8;
  FString local_9a8;
  TMemoryView<void_const_> local_998;
  FString local_988;
  char *local_978;
  undefined4 uStack_970;
  undefined4 uStack_96c;
  undefined4 *local_968;
  undefined8 local_960;
  char *local_958;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  char *local_948;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined4 *local_938;
  undefined8 local_930;
  char *local_928;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  char *local_918;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined4 *local_908;
  undefined8 local_900;
  char *local_8f8;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  char *local_8e8;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  char *local_8d8;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  char *local_8c8;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  char *local_8b8;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  char *local_8a8;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  FScriptContainerElement *local_898;
  longlong local_890;
  char *local_888;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  char *local_878;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  char *local_868;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  uchar *local_858;
  int iStack_850;
  undefined4 uStack_84c;
  char *local_848;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  FScriptContainerElement *local_838;
  int iStack_830;
  undefined4 uStack_82c;
  undefined8 local_828;
  undefined8 local_820;
  char *local_818;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  uchar *local_808;
  int iStack_800;
  undefined4 uStack_7fc;
  char *local_7f8;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  char *local_7e8;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  uchar *local_7d8;
  int iStack_7d0;
  undefined4 uStack_7cc;
  char *local_7c8;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  wchar_t *local_7b8;
  int iStack_7b0;
  undefined4 uStack_7ac;
  char *local_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  char *local_798;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  char *local_788;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  char *local_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  char *local_768;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  char *local_758;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  char *local_748;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  char *local_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  char *local_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  char *local_718;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  char *local_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  char *local_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  char *local_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  char *local_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  char *local_6c8;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  char *local_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  char *local_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  TMemoryView<void_const_> local_698;
  char *local_688;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  char *local_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  char *local_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  char *local_658;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  char *local_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  char *local_638;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  char *local_628;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  char *local_618;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  FArchiveState local_608;
  undefined8 local_578;
  void **local_570;
  undefined8 local_568;
  void *local_560;
  undefined8 local_558;
  FCbFieldView local_548;
  undefined1 local_538 [16];
  TMemoryView<void_const_> local_528;
  TCbBuffer<FCbObjectView> local_518;
  TCbBuffer<FCbArrayView> local_500;
  TStringView<char8_t> local_4e8;
  TStringView<char8_t> local_4d8;
  TStringView<char8_t> local_4c8;
  FString local_4b8;
  TStringView<char8_t> local_4a8;
  TStringView<char8_t> local_498;
  FCbFieldView local_488;
  TStringView<char8_t> local_478;
  TStringView<char8_t> local_468;
  TStringView<char8_t> local_458;
  TStringView<char8_t> local_448;
  TStringView<char8_t> local_438;
  TStringView<char8_t> local_428;
  TStringView<char8_t> local_418;
  FString local_408;
  TStringView<char8_t> local_3f8;
  TStringView<char8_t> local_3e8;
  TStringView<char8_t> local_3d8;
  TStringView<char8_t> local_3c8;
  TStringView<wchar_t> local_3b8;
  FString local_3a8;
  TStringView<char8_t> local_398;
  TStringView<char8_t> local_388;
  TStringView<char8_t> local_378;
  TStringView<wchar_t> local_368;
  TStringView<char8_t> local_358;
  TStringView<char8_t> local_348;
  TStringView<char8_t> local_338;
  TStringView<char8_t> local_328;
  TStringView<char8_t> local_318;
  TStringView<wchar_t> local_308;
  TStringView<char8_t> local_2f8;
  TStringView<char8_t> local_2e8;
  TStringView<char8_t> local_2d8;
  TStringView<char8_t> local_2c8;
  TStringView<char8_t> local_2b8;
  TStringView<char8_t> local_2a8;
  TStringView<char8_t> local_298;
  TStringView<char8_t> local_288;
  TStringView<char8_t> local_278;
  TStringView<char8_t> local_268;
  TStringView<char8_t> local_258;
  TStringView<char8_t> local_248;
  TStringView<char8_t> local_238;
  TStringView<char8_t> local_228;
  TStringView<char8_t> local_218;
  TStringView<char8_t> local_208;
  TStringView<char8_t> local_1f8;
  TStringView<char8_t> local_1e8;
  TStringView<char8_t> local_1d8;
  TStringView<char8_t> local_1c8;
  TStringView<char8_t> local_1b8;
  TStringView<char8_t> local_1a8;
  TStringView<char8_t> local_198;
  TStringView<char8_t> local_188;
  TStringView<char8_t> local_178;
  TStringView<char8_t> local_168;
  TStringView<char8_t> local_158;
  TStringView<char8_t> local_148;
  TCbBuffer<FCbFieldView> local_138;
  undefined1 local_120 [24];
  FCbFieldView local_108;
  undefined1 local_f8 [32];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  FCbObjectId local_c8;
  FIoHash local_bc;
  FIoHash local_a8;
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
  void *pvVar21;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_ad8;
  FCbObjectView::FCbObjectView(&local_a50);
  pvVar22 = (void *)0x0;
  local_608._padding_ = 0;
  local_608.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_a40.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_608.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_608.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_a58 = 0;
  local_608.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_608._40_8_ = 0;
  local_608.ArSerializingDefaults = 0;
  local_608.ArPortFlags = 0;
  local_608.ArMaxSerializeSize = 0;
  local_608.ArUEVer.FileVersionUE4 = 0;
  local_608.ArUEVer.FileVersionUE5 = 0;
  local_608.ArLicenseeUEVer = 0;
  local_608.ArEngineVer.Major = 0;
  local_608.ArEngineVer.Minor = 0;
  local_608.ArEngineVer.Patch = 0;
  local_608.ArEngineVer._6_2_ = 0;
  local_608.ArEngineVer.Changelist = 0;
  local_608.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_608.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_608.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_608.SerializedProperty = (FProperty *)0x0;
  local_608.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_608.bCustomVersionsAreReset = false;
  local_608._129_7_ = 0;
  local_608.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_608);
  local_578 = 0;
  local_608._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_570 = &local_560;
  local_568 = 0;
  FArchiveState::SetIsSaving(&local_608,true);
  (**(code **)(local_608._padding_ + 0x108))(&local_608,0);
  local_560 = (void *)0x0;
  local_608._padding_ = (longlong)&___7FBufferArchive__6B_;
  local_558 = 0;
  FCbWriter::FCbWriter(&local_a98);
  FCbWriter::BeginObject(&local_a98);
  local_a70[0] = 0x2a490188;
  pFVar10 = FCbFieldView::FCbFieldView(&local_108,local_a70,HasFieldType);
  uStack_970 = 0xd;
  local_978 = "FieldViewCopy";
  local_4e8._12_4_ = uStack_96c;
  local_4e8.Size = 0xd;
  local_4e8.DataPtr = "FieldViewCopy";
  FCbWriter::SetName(&local_a98,&local_4e8);
  FCbWriter::AddField(&local_a98,pFVar10);
  local_968 = local_a70;
  local_960 = 4;
  FVar11 = FSharedBuffer::Clone((TMemoryView<void_const_> *)local_538);
  local_a28 = *(undefined8 *)FVar11.Owner.Owner;
  *(undefined8 *)FVar11.Owner.Owner = 0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            (&local_138,(FSharedBuffer)&local_a28,HasFieldType);
  plVar3 = *(longlong **)FVar11.Owner.Owner;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 3;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar23 & 0x3fffffff) == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      plVar3[1] = 0;
      plVar3[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar3 + 3);
      uVar20 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar20 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar3)(plVar3,1);
      }
    }
  }
  uStack_950 = 9;
  local_958 = "FieldCopy";
  local_4d8._12_4_ = uStack_94c;
  local_4d8.Size = 9;
  local_4d8.DataPtr = "FieldCopy";
  FCbWriter::SetName(&local_a98,&local_4d8);
  FCbWriter::AddField(&local_a98,(FCbField *)&local_138);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_138.Buffer.Owner);
  local_30 = 0x74f0182;
  local_2c = 0x2a490188;
  local_28 = 0x181;
  local_26 = 0x4e;
  FCbFieldView::FCbFieldView(&local_548,&local_30,HasFieldType);
  uStack_940 = 0xe;
  local_948 = "ObjectViewCopy";
  local_4c8._12_4_ = uStack_93c;
  local_4c8.Size = 0xe;
  local_4c8.DataPtr = "ObjectViewCopy";
  FCbWriter::SetName(&local_a98,&local_4c8);
  FCbWriter::AddObject(&local_a98,(FCbObjectView *)&local_548);
  local_938 = &local_30;
  local_930 = 0xb;
  FVar11 = FSharedBuffer::Clone((TMemoryView<void_const_> *)(local_538 + 8));
  local_a20 = *(undefined8 *)FVar11.Owner.Owner;
  *(undefined8 *)FVar11.Owner.Owner = 0;
  TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>
            (&local_518,(FSharedBuffer)&local_a20,HasFieldType);
  plVar3 = *(longlong **)FVar11.Owner.Owner;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 3;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar23 & 0x3fffffff) == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      plVar3[1] = 0;
      plVar3[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar3 + 3);
      uVar20 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar20 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar3)(plVar3,1);
      }
    }
  }
  uStack_920 = 10;
  local_928 = "ObjectCopy";
  local_4a8._12_4_ = uStack_91c;
  local_4a8.Size = 10;
  local_4a8.DataPtr = "ObjectCopy";
  FCbWriter::SetName(&local_a98,&local_4a8);
  FCbWriter::AddObject(&local_a98,(FCbObject *)&local_518);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_518.Buffer.Owner);
  local_38 = 0x4410185;
  local_34 = 0x152a0802;
  FCbFieldView::FCbFieldView(&local_488,&local_38,HasFieldType);
  uStack_910 = 0xd;
  local_918 = "ArrayViewCopy";
  local_498._12_4_ = uStack_90c;
  local_498.Size = 0xd;
  local_498.DataPtr = "ArrayViewCopy";
  FCbWriter::SetName(&local_a98,&local_498);
  FCbWriter::AddArray(&local_a98,(FCbArrayView *)&local_488);
  local_908 = &local_38;
  local_900 = 8;
  FVar11 = FSharedBuffer::Clone(&local_528);
  local_a18 = *(undefined8 *)FVar11.Owner.Owner;
  *(undefined8 *)FVar11.Owner.Owner = 0;
  TCbBuffer<FCbArrayView>::TCbBuffer<FCbArrayView>
            (&local_500,(FSharedBuffer)&local_a18,HasFieldType);
  plVar3 = *(longlong **)FVar11.Owner.Owner;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 3;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar23 & 0x3fffffff) == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      plVar3[1] = 0;
      plVar3[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar3 + 3);
      uVar20 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar20 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar3)(plVar3,1);
      }
    }
  }
  uStack_8f0 = 9;
  local_8f8 = "ArrayCopy";
  local_478._12_4_ = uStack_8ec;
  local_478.Size = 9;
  local_478.DataPtr = "ArrayCopy";
  FCbWriter::SetName(&local_a98,&local_478);
  FCbWriter::AddArray(&local_a98,(FCbArray *)&local_500);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_500.Buffer.Owner);
  uStack_8e0 = 4;
  local_8e8 = "Null";
  local_468._12_4_ = uStack_8dc;
  local_468.Size = 4;
  local_468.DataPtr = "Null";
  FCbWriter::SetName(&local_a98,&local_468);
  FCbWriter::AddNull(&local_a98);
  uStack_8d0 = 6;
  local_8d8 = "Binary";
  local_458._12_4_ = uStack_8cc;
  local_458.Size = 6;
  local_458.DataPtr = "Binary";
  FCbWriter::SetName(&local_a98,&local_458);
  FCbWriter::BeginObject(&local_a98);
  uStack_8c0 = 5;
  local_8c8 = "Empty";
  local_448._12_4_ = uStack_8bc;
  local_448.Size = 5;
  local_448.DataPtr = "Empty";
  FCbWriter::SetName(&local_a98,&local_448);
  FCbWriter::AddBinary(&local_a98,(void *)0x0,0);
  uStack_8b0 = 5;
  local_8b8 = "Value";
  local_438._12_4_ = uStack_8ac;
  local_438.Size = 5;
  local_438.DataPtr = "Value";
  FCbWriter::SetName(&local_a98,&local_438);
  FCbWriter::AddBinary(&local_a98,"BinaryValue",0xc);
  pFVar12 = ::FString::ChrN(&local_4b8,0x100,L'.');
  uStack_8a0 = 0xe;
  iVar18 = (pFVar12->Data).ArrayNum;
  pFVar4 = (pFVar12->Data).AllocatorInstance.Data;
  local_8a8 = "LargeViewValue";
  local_428._12_4_ = uStack_89c;
  local_428.Size = 0xe;
  local_428.DataPtr = "LargeViewValue";
  FCbWriter::SetName(&local_a98,&local_428);
  iVar8 = iVar18 + -1;
  if (iVar18 == 0) {
    iVar8 = 0;
  }
  FCbWriter::AddBinary(&local_a98,pFVar4,(longlong)iVar8 * 2);
  if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
  }
  pFVar12 = ::FString::ChrN(&local_408,0x100,L'!');
  iVar18 = (pFVar12->Data).ArrayNum;
  local_898 = (pFVar12->Data).AllocatorInstance.Data;
  iVar8 = iVar18 + -1;
  if (iVar18 == 0) {
    iVar8 = 0;
  }
  local_890 = (longlong)iVar8 * 2;
  FVar11 = FSharedBuffer::Clone(&local_a10);
  uStack_880 = 10;
  local_888 = "LargeValue";
  local_418._12_4_ = uStack_87c;
  local_418.Size = 10;
  local_418.DataPtr = "LargeValue";
  FCbWriter::SetName(&local_a98,&local_418);
  FCbWriter::AddBinary(&local_a98,(FSharedBuffer *)FVar11.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_a10);
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  FCbWriter::EndObject(&local_a98);
  uStack_870 = 7;
  local_878 = "Strings";
  local_3f8._12_4_ = uStack_86c;
  local_3f8.Size = 7;
  local_3f8.DataPtr = "Strings";
  FCbWriter::SetName(&local_a98,&local_3f8);
  FCbWriter::BeginObject(&local_a98);
  uStack_860 = 10;
  local_868 = "AnsiString";
  local_3e8._12_4_ = uStack_85c;
  local_3e8.Size = 10;
  local_3e8.DataPtr = "AnsiString";
  local_858 = "AnsiValue";
  iStack_850 = 9;
  FCbWriter::SetName(&local_a98,&local_3e8);
  local_3d8._12_4_ = uStack_84c;
  local_3d8.Size = iStack_850;
  local_3d8.DataPtr = local_858;
  FCbWriter::AddString(&local_a98,&local_3d8);
  pFVar12 = ::FString::ChrN(&local_3a8,0x100,L'.');
  uStack_840 = 10;
  local_838 = (pFVar12->Data).AllocatorInstance.Data;
  iVar18 = (pFVar12->Data).ArrayNum;
  iStack_830 = iVar18 + -1;
  if (iVar18 == 0) {
    iStack_830 = 0;
  }
  local_848 = "WideString";
  local_3c8._12_4_ = uStack_83c;
  local_3c8.Size = 10;
  local_3c8.DataPtr = "WideString";
  FCbWriter::SetName(&local_a98,&local_3c8);
  local_3b8._12_4_ = uStack_82c;
  local_3b8.Size = iStack_830;
  local_3b8.DataPtr = (wchar_t *)local_838;
  FCbWriter::AddString(&local_a98,&local_3b8);
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  uStack_810 = 0xf;
  local_818 = "EmptyAnsiString";
  local_398._12_4_ = uStack_80c;
  local_398.Size = 0xf;
  local_398.DataPtr = "EmptyAnsiString";
  local_828 = 0;
  local_820 = 0;
  local_808 = (uchar *)0x0;
  iStack_800 = 0;
  FCbWriter::SetName(&local_a98,&local_398);
  local_388._12_4_ = uStack_7fc;
  local_388.Size = iStack_800;
  local_388.DataPtr = local_808;
  FCbWriter::AddString(&local_a98,&local_388);
  uStack_7f0 = 0xf;
  local_7f8 = "EmptyWideString";
  local_378._12_4_ = uStack_7ec;
  local_378.Size = 0xf;
  local_378.DataPtr = "EmptyWideString";
  uStack_a30._0_4_ = 0;
  uStack_a30._4_4_ = 0;
  local_a38 = (wchar_t *)0x0;
  FCbWriter::SetName(&local_a98,&local_378);
  local_368.DataPtr = local_a38;
  local_368.Size = (int)uStack_a30;
  local_368._12_4_ = uStack_a30._4_4_;
  FCbWriter::AddString(&local_a98,&local_368);
  uStack_a60._0_4_ = 0xf;
  local_a68 = "EmptyUtf8String";
  local_358.DataPtr = "EmptyUtf8String";
  local_358.Size = 0xf;
  local_358._12_4_ = uStack_a60._4_4_;
  uStack_9f0._0_4_ = 0;
  uStack_9f0._4_4_ = 0;
  local_9f8 = (uchar *)0x0;
  FCbWriter::SetName(&local_a98,&local_358);
  local_348.DataPtr = local_9f8;
  local_348.Size = (int)uStack_9f0;
  local_348._12_4_ = uStack_9f0._4_4_;
  FCbWriter::AddString(&local_a98,&local_348);
  uStack_7e0 = 0x11;
  local_7e8 = "AnsiStringLiteral";
  local_338._12_4_ = uStack_7dc;
  local_338.Size = 0x11;
  local_338.DataPtr = "AnsiStringLiteral";
  local_7d8 = "AnsiValue";
  iStack_7d0 = 9;
  FCbWriter::SetName(&local_a98,&local_338);
  local_328._12_4_ = uStack_7cc;
  local_328.Size = iStack_7d0;
  local_328.DataPtr = local_7d8;
  FCbWriter::AddString(&local_a98,&local_328);
  uStack_7c0 = 0x11;
  local_7b8 = L"AnsiValue";
  iStack_7b0 = 9;
  local_7c8 = "WideStringLiteral";
  local_318._12_4_ = uStack_7bc;
  local_318.Size = 0x11;
  local_318.DataPtr = "WideStringLiteral";
  FCbWriter::SetName(&local_a98,&local_318);
  local_308._12_4_ = uStack_7ac;
  local_308.Size = iStack_7b0;
  local_308.DataPtr = local_7b8;
  FCbWriter::AddString(&local_a98,&local_308);
  FCbWriter::EndObject(&local_a98);
  uStack_7a0 = 8;
  local_7a8 = "Integers";
  local_2f8._12_4_ = uStack_79c;
  local_2f8.Size = 8;
  local_2f8.DataPtr = "Integers";
  FCbWriter::SetName(&local_a98,&local_2f8);
  FCbWriter::BeginArray(&local_a98);
  FCbWriter::AddInteger(&local_a98,-1);
  FCbWriter::AddInteger(&local_a98,-1);
  FCbWriter::AddInteger(&local_a98,1);
  FCbWriter::AddInteger(&local_a98,1);
  FCbWriter::AddInteger(&local_a98,-0x80000000);
  FCbWriter::AddInteger(&local_a98,0x7fffffff);
  FCbWriter::AddInteger(&local_a98,0xffffffff);
  FCbWriter::AddInteger(&local_a98,-0x8000000000000000);
  FCbWriter::AddInteger(&local_a98,0x7fffffffffffffff);
  FCbWriter::AddInteger(&local_a98,0xffffffffffffffff);
  FCbWriter::EndArray(&local_a98);
  uStack_790 = 0xf;
  local_798 = "UniformIntegers";
  local_2e8._12_4_ = uStack_78c;
  local_2e8.Size = 0xf;
  local_2e8.DataPtr = "UniformIntegers";
  FCbWriter::SetName(&local_a98,&local_2e8);
  FCbWriter::BeginArray(&local_a98);
  FCbWriter::AddInteger(&local_a98,0);
  FCbWriter::AddInteger(&local_a98,0x7fffffff);
  FCbWriter::AddInteger(&local_a98,0xffffffff);
  FCbWriter::AddInteger(&local_a98,0x7fffffffffffffff);
  FCbWriter::AddInteger(&local_a98,0xffffffffffffffff);
  FCbWriter::EndArray(&local_a98);
  uStack_780 = 7;
  local_788 = "Float32";
  local_1b8._12_4_ = uStack_77c;
  local_1b8.Size = 7;
  local_1b8.DataPtr = "Float32";
  FCbWriter::SetName(&local_a98,&local_1b8);
  FCbWriter::AddFloat(&local_a98,__real_3f800000);
  uStack_770 = 0xb;
  local_778 = "Float64as32";
  local_2d8._12_4_ = uStack_76c;
  local_2d8.Size = 0xb;
  local_2d8.DataPtr = "Float64as32";
  FCbWriter::SetName(&local_a98,&local_2d8);
  FCbWriter::AddFloat(&local_a98,__real_4000000000000000);
  uStack_760 = 7;
  local_768 = "Float64";
  local_2c8._12_4_ = uStack_75c;
  local_2c8.Size = 7;
  local_2c8.DataPtr = "Float64";
  FCbWriter::SetName(&local_a98,&local_2c8);
  FCbWriter::AddFloat(&local_a98,__real_54cb6e83b85f253b);
  uStack_750 = 5;
  local_758 = "False";
  local_2b8._12_4_ = uStack_74c;
  local_2b8.Size = 5;
  local_2b8.DataPtr = "False";
  FCbWriter::SetName(&local_a98,&local_2b8);
  FCbWriter::AddBool(&local_a98,false);
  uStack_740 = 4;
  local_748 = "True";
  local_2a8._12_4_ = uStack_73c;
  local_2a8.Size = 4;
  local_2a8.DataPtr = "True";
  FCbWriter::SetName(&local_a98,&local_2a8);
  FCbWriter::AddBool(&local_a98,true);
  local_a8.Hash[0x10] = '\0';
  local_a8.Hash[0x11] = '\0';
  local_a8.Hash[0x12] = '\0';
  local_a8.Hash[0x13] = '\0';
  lVar23 = 0x10;
  local_738 = "ObjectAttachment";
  local_a8.Hash[0] = '\0';
  local_a8.Hash[1] = '\0';
  local_a8.Hash[2] = '\0';
  local_a8.Hash[3] = '\0';
  local_a8.Hash[4] = '\0';
  local_a8.Hash[5] = '\0';
  local_a8.Hash[6] = '\0';
  local_a8.Hash[7] = '\0';
  local_a8.Hash[8] = '\0';
  local_a8.Hash[9] = '\0';
  local_a8.Hash[10] = '\0';
  local_a8.Hash[0xb] = '\0';
  local_a8.Hash[0xc] = '\0';
  local_a8.Hash[0xd] = '\0';
  local_a8.Hash[0xe] = '\0';
  local_a8.Hash[0xf] = '\0';
  uStack_730 = 0x10;
  local_298._12_4_ = uStack_72c;
  local_298.Size = 0x10;
  local_298.DataPtr = "ObjectAttachment";
  FCbWriter::SetName(&local_a98,&local_298);
  FCbWriter::AddObjectAttachment(&local_a98,&local_a8);
  uStack_720 = 0x10;
  local_94.Hash[0x10] = '\0';
  local_94.Hash[0x11] = '\0';
  local_94.Hash[0x12] = '\0';
  local_94.Hash[0x13] = '\0';
  local_728 = "BinaryAttachment";
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
  local_288._12_4_ = uStack_71c;
  local_288.Size = 0x10;
  local_288.DataPtr = "BinaryAttachment";
  FCbWriter::SetName(&local_a98,&local_288);
  FCbWriter::AddBinaryAttachment(&local_a98,&local_94);
  local_80.Value._padding_ = 0;
  local_80.Value._padding_ = 0;
  local_80.Value._48_8_ = 0;
  local_80.Value._padding_ = 0;
  local_80.Value._padding_ = 0;
  local_80.Value._padding_ = 0;
  local_80.Value._padding_ = 0;
  uStack_710 = 10;
  local_718 = "Attachment";
  local_278._12_4_ = uStack_70c;
  local_278.Size = 10;
  local_278.DataPtr = "Attachment";
  FCbWriter::SetName(&local_a98,&local_278);
  FCbWriter::AddAttachment(&local_a98,&local_80);
  uVar20 = local_80.Value._48_8_ & 0xff;
  if ((3 < local_80.Value.TypeIndex) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar20] !=
      UE::Core::Private::TDestructorCaller<std::nullptr_t>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar20])(&local_80);
  }
  uStack_700 = 4;
  local_bc.Hash[0x10] = '\0';
  local_bc.Hash[0x11] = '\0';
  local_bc.Hash[0x12] = '\0';
  local_bc.Hash[0x13] = '\0';
  local_708 = "Hash";
  local_bc.Hash[0] = '\0';
  local_bc.Hash[1] = '\0';
  local_bc.Hash[2] = '\0';
  local_bc.Hash[3] = '\0';
  local_bc.Hash[4] = '\0';
  local_bc.Hash[5] = '\0';
  local_bc.Hash[6] = '\0';
  local_bc.Hash[7] = '\0';
  local_bc.Hash[8] = '\0';
  local_bc.Hash[9] = '\0';
  local_bc.Hash[10] = '\0';
  local_bc.Hash[0xb] = '\0';
  local_bc.Hash[0xc] = '\0';
  local_bc.Hash[0xd] = '\0';
  local_bc.Hash[0xe] = '\0';
  local_bc.Hash[0xf] = '\0';
  local_268._12_4_ = uStack_6fc;
  local_268.Size = 4;
  local_268.DataPtr = "Hash";
  FCbWriter::SetName(&local_a98,&local_268);
  FCbWriter::AddHash(&local_a98,&local_bc);
  uStack_6f0 = 4;
  local_6f8 = "Uuid";
  local_258._12_4_ = uStack_6ec;
  local_258.Size = 4;
  local_258.DataPtr = "Uuid";
  local_a68 = (char *)0x0;
  uStack_a60._0_4_ = 0;
  uStack_a60._4_4_ = 0;
  FCbWriter::SetName(&local_a98,&local_258);
  FCbWriter::AddUuid(&local_a98,(FGuid *)&local_a68);
  uStack_6e0 = 0xc;
  local_6e8 = "DateTimeZero";
  local_248._12_4_ = uStack_6dc;
  local_248.Size = 0xc;
  local_248.DataPtr = "DateTimeZero";
  FCbWriter::SetName(&local_a98,&local_248);
  FCbWriter::AddDateTimeTicks(&local_a98,0);
  pFVar13 = FDateTime::FDateTime((FDateTime *)&local_528.Size,0x7e4,5,0xd,0xf,10,0,0);
  uStack_6d0 = 0xc;
  local_6d8 = "DateTime2020";
  local_238._12_4_ = uStack_6cc;
  local_238.Size = 0xc;
  local_238.DataPtr = "DateTime2020";
  FCbWriter::AddDateTime(&local_a98,&local_238,(FDateTime)pFVar13->Ticks);
  uStack_6c0 = 0xc;
  local_6c8 = "TimeSpanZero";
  local_228._12_4_ = uStack_6bc;
  local_228.Size = 0xc;
  local_228.DataPtr = "TimeSpanZero";
  FCbWriter::SetName(&local_a98,&local_228);
  FCbWriter::AddTimeSpanTicks(&local_a98,0);
  FTimespan::Assign((FTimespan *)&local_a10.Size,1,2,4,8,0);
  local_6b8 = "TimeSpan";
  uStack_6b0 = 8;
  local_218._12_4_ = uStack_6ac;
  local_218.Size = 8;
  local_218.DataPtr = "TimeSpan";
  FCbWriter::AddTimeSpan(&local_a98,&local_218,(FTimespan)local_a10.Size);
  uStack_6a0 = 0xc;
  local_c8.Bytes[0] = '\0';
  local_c8.Bytes[1] = '\0';
  local_c8.Bytes[2] = '\0';
  local_c8.Bytes[3] = '\0';
  local_c8.Bytes[4] = '\0';
  local_c8.Bytes[5] = '\0';
  local_c8.Bytes[6] = '\0';
  local_c8.Bytes[7] = '\0';
  local_c8.Bytes[8] = '\0';
  local_c8.Bytes[9] = '\0';
  local_c8.Bytes[10] = '\0';
  local_c8.Bytes[0xb] = '\0';
  local_6a8 = "ObjectIdZero";
  local_208._12_4_ = uStack_69c;
  local_208.Size = 0xc;
  local_208.DataPtr = "ObjectIdZero";
  FCbWriter::SetName(&local_a98,&local_208);
  FCbWriter::AddObjectId(&local_a98,&local_c8);
  local_698.Data = &local_d8;
  local_d8 = 0x4030201;
  local_d4 = 0x8070605;
  local_d0 = 0xc0b0a09;
  local_698.Size = 0xc;
  pFVar14 = FCbObjectId::FCbObjectId(&local_48,&local_698);
  uStack_680 = 8;
  local_688 = "ObjectId";
  local_1f8._12_4_ = uStack_67c;
  local_1f8.Size = 8;
  local_1f8.DataPtr = "ObjectId";
  FCbWriter::SetName(&local_a98,&local_1f8);
  FCbWriter::AddObjectId(&local_a98,pFVar14);
  uStack_670 = 0xd;
  local_678 = "NestedObjects";
  local_1e8._12_4_ = uStack_66c;
  local_1e8.Size = 0xd;
  local_1e8.DataPtr = "NestedObjects";
  FCbWriter::SetName(&local_a98,&local_1e8);
  FCbWriter::BeginObject(&local_a98);
  local_668 = "Empty";
  uStack_660 = 5;
  local_1d8._12_4_ = uStack_65c;
  local_1d8.Size = 5;
  local_1d8.DataPtr = "Empty";
  FCbWriter::SetName(&local_a98,&local_1d8);
  FCbWriter::BeginObject(&local_a98);
  FCbWriter::EndObject(&local_a98);
  local_658 = "Null";
  uStack_650 = 4;
  local_1c8._12_4_ = uStack_64c;
  local_1c8.Size = 4;
  local_1c8.DataPtr = "Null";
  FCbWriter::SetName(&local_a98,&local_1c8);
  FCbWriter::BeginObject(&local_a98);
  local_648 = "Null";
  uStack_640 = 4;
  local_148._12_4_ = uStack_63c;
  local_148.Size = 4;
  local_148.DataPtr = "Null";
  FCbWriter::SetName(&local_a98,&local_148);
  FCbWriter::AddNull(&local_a98);
  FCbWriter::EndObject(&local_a98);
  FCbWriter::EndObject(&local_a98);
  uStack_630 = 0xc;
  local_638 = "NestedArrays";
  local_1a8._12_4_ = uStack_62c;
  local_1a8.Size = 0xc;
  local_1a8.DataPtr = "NestedArrays";
  FCbWriter::SetName(&local_a98,&local_1a8);
  FCbWriter::BeginArray(&local_a98);
  FCbWriter::BeginArray(&local_a98);
  FCbWriter::EndArray(&local_a98);
  FCbWriter::BeginArray(&local_a98);
  FCbWriter::AddNull(&local_a98);
  FCbWriter::AddNull(&local_a98);
  FCbWriter::AddNull(&local_a98);
  FCbWriter::EndArray(&local_a98);
  FCbWriter::BeginArray(&local_a98);
  FCbWriter::AddBool(&local_a98,false);
  FCbWriter::AddBool(&local_a98,false);
  FCbWriter::AddBool(&local_a98,false);
  FCbWriter::EndArray(&local_a98);
  FCbWriter::BeginArray(&local_a98);
  FCbWriter::AddBool(&local_a98,true);
  FCbWriter::AddBool(&local_a98,true);
  FCbWriter::AddBool(&local_a98,true);
  FCbWriter::EndArray(&local_a98);
  FCbWriter::EndArray(&local_a98);
  uStack_620 = 0xe;
  local_628 = "ArrayOfObjects";
  local_198._12_4_ = uStack_61c;
  local_198.Size = 0xe;
  local_198.DataPtr = "ArrayOfObjects";
  FCbWriter::SetName(&local_a98,&local_198);
  FCbWriter::BeginArray(&local_a98);
  FCbWriter::BeginObject(&local_a98);
  FCbWriter::EndObject(&local_a98);
  FCbWriter::BeginObject(&local_a98);
  local_618 = "Null";
  uStack_610 = 4;
  local_188._12_4_ = uStack_60c;
  local_188.Size = 4;
  local_188.DataPtr = "Null";
  FCbWriter::SetName(&local_a98,&local_188);
  FCbWriter::AddNull(&local_a98);
  FCbWriter::EndObject(&local_a98);
  FCbWriter::EndArray(&local_a98);
  uStack_9e0 = 10;
  local_9e8 = "LargeArray";
  local_178._12_4_ = uStack_9dc;
  local_178.Size = 10;
  local_178.DataPtr = "LargeArray";
  FCbWriter::SetName(&local_a98,&local_178);
  FCbWriter::BeginArray(&local_a98);
  iVar18 = -0x80;
  do {
    FCbWriter::AddInteger(&local_a98,iVar18);
    iVar18 = iVar18 + 1;
  } while (iVar18 != 0x80);
  FCbWriter::EndArray(&local_a98);
  uStack_9d0 = 0x11;
  local_9d8 = "LargeUniformArray";
  local_168._12_4_ = uStack_9cc;
  local_168.Size = 0x11;
  local_168.DataPtr = "LargeUniformArray";
  FCbWriter::SetName(&local_a98,&local_168);
  FCbWriter::BeginArray(&local_a98);
  pvVar21 = pvVar22;
  do {
    FCbWriter::AddInteger(&local_a98,(int)pvVar21);
    uVar19 = (int)pvVar21 + 1;
    pvVar21 = (void *)(ulonglong)uVar19;
  } while ((int)uVar19 < 0x100);
  FCbWriter::EndArray(&local_a98);
  uStack_9c0 = 0x12;
  local_9c8 = "NestedUniformArray";
  local_158._12_4_ = uStack_9bc;
  local_158.Size = 0x12;
  local_158.DataPtr = "NestedUniformArray";
  FCbWriter::SetName(&local_a98,&local_158);
  FCbWriter::BeginArray(&local_a98);
  do {
    FCbWriter::BeginArray(&local_a98);
    pvVar21 = pvVar22;
    do {
      FCbWriter::AddInteger(&local_a98,(int)pvVar21);
      uVar19 = (int)pvVar21 + 1;
      pvVar21 = (void *)(ulonglong)uVar19;
    } while ((int)uVar19 < 4);
    FCbWriter::EndArray(&local_a98);
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  FCbWriter::EndArray(&local_a98);
  FCbWriter::EndObject(&local_a98);
  this_00 = FCbWriter::Save(&local_a98,(FCbFieldIterator *)local_f8);
  pFVar15 = FCbField::AsObject((FCbField *)this_00,(FCbObject *)local_120);
  local_a50._0_8_ = *(undefined8 *)pFVar15;
  local_a50._8_8_ = *(undefined8 *)&pFVar15->field_0x8;
  FSharedBuffer::operator=(&local_a40,(FSharedBuffer *)&pFVar15->field_0x10);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_120 + 0x10));
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_f8 + 0x10));
  FCbWriter::Save(&local_a98,(FArchive *)&local_608);
  pFVar16 = FAutomationTestFramework::Get();
  pFVar5 = pFVar16->CurrentTest;
  uVar17 = FCbWriter::GetSaveSize(&local_a98);
  FAutomationTestBase::TestEqual
            (pFVar5,L"FCbWriter(Complex).Save(Ar)->Num()",(longlong)(int)local_558,uVar17);
  FCbWriter::~FCbWriter(&local_a98);
  pFVar16 = FAutomationTestFramework::Get();
  FVar11.Owner.Owner = local_a40.Owner.Owner;
  pFVar5 = pFVar16->CurrentTest;
  pvVar21 = pvVar22;
  if (local_a40.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_a40.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_a40.Owner.Owner + 8))(local_a40.Owner.Owner);
    }
    pvVar21 = *(void **)((longlong)FVar11.Owner.Owner + 0x10);
  }
  FVar11.Owner.Owner = local_a40.Owner.Owner;
  if (local_a40.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_a40.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_a40.Owner.Owner + 8))(local_a40.Owner.Owner);
    }
    pvVar22 = *(void **)((longlong)FVar11.Owner.Owner + 8);
  }
  local_9b8.Data = pvVar22;
  local_9b8.Size = (ulong64)pvVar21;
  EVar9 = ValidateCompactBinary(&local_9b8,All,HasFieldType);
  if (EVar9 != None) {
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_9a8,L"%s: The two values are not equal.");
    (*pcVar6)(pFVar5,&local_9a8,0);
    if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar16 = FAutomationTestFramework::Get();
  pFVar5 = pFVar16->CurrentTest;
  local_998.Data = local_560;
  local_998.Size = (ulong64)(int)local_558;
  EVar9 = ValidateCompactBinary(&local_998,All,HasFieldType);
  if (EVar9 != None) {
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_988,L"%s: The two values are not equal.");
    (*pcVar6)(pFVar5,&local_988,0);
    if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_988.Data.AllocatorInstance.Data);
    }
  }
  if (local_560 != (void *)0x0) {
    FMemory::Free(local_560);
  }
  FArchive::~FArchive((FArchive *)&local_608);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_a40.Owner);
  return;
}

