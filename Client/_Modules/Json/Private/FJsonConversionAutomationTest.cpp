// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 11

// GetTestFlags @ 141da08a0

EAutomationTestFlags __thiscall
FJsonConversionAutomationTest::GetTestFlags(FJsonConversionAutomationTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141da08b0

bool __thiscall FJsonConversionAutomationTest::IsStressTest(FJsonConversionAutomationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141da08c0

uint __thiscall
FJsonConversionAutomationTest::GetRequiredDeviceNum(FJsonConversionAutomationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141da08d0

FString * __thiscall
FJsonConversionAutomationTest::GetTestSourceFileName
          (FJsonConversionAutomationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonConversionTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141da0900

int __thiscall
FJsonConversionAutomationTest::GetTestSourceFileLine(FJsonConversionAutomationTest *this)

{
  return 0xf;
}

// GetTests @ 141da0910

/* WARNING: Removing unreachable block (ram,0x000141da0a8e) */

void __thiscall
FJsonConversionAutomationTest::GetTests
          (FJsonConversionAutomationTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141da0ab0

bool __thiscall
FJsonConversionAutomationTest::RunTest(FJsonConversionAutomationTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141da0ae0

FString * __thiscall
FJsonConversionAutomationTest::GetBeautifiedTestName
          (FJsonConversionAutomationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FJsonConversionAutomationTest @ 141dc42f0

FJsonConversionAutomationTest * __thiscall
FJsonConversionAutomationTest::FJsonConversionAutomationTest
          (FJsonConversionAutomationTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FJsonConversionAutomationTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Engine::FileSystem::JSON::Conversion");
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

// operator() @ 141dc7910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FJsonConversionAutomationTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FJsonObject,1> *param_1,
          GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          *param_2)

{
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  TSharedPtr<FJsonValue,1> *pTVar9;
  FAutomationTestFramework *pFVar10;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar11;
  FJsonValue *pFVar12;
  FJsonObject *pFVar13;
  FString *pFVar14;
  FString *pFVar15;
  longlong *plVar16;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar17;
  TSharedPtr<FJsonValue,1> *this_01;
  FJsonValue *pFVar18;
  ulonglong uVar19;
  TReferenceControllerBase<1> *pTVar20;
  byte bVar21;
  uint uVar22;
  double dVar24;
  double dVar25;
  int local_res18 [2];
  int local_res20 [2];
  int local_878;
  int local_874;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_870;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_860;
  TReferenceControllerBase<1> *local_850;
  TReferenceControllerBase<1> *local_848;
  TReferenceControllerBase<1> *local_840;
  TSharedPtr<FJsonValue,1> local_838;
  TSharedPtr<FJsonValue,1> local_828;
  TSharedPtr<FJsonValue,1> local_818;
  TSharedPtr<FJsonValue,1> local_808;
  TSharedPtr<FJsonValue,1> local_7f8;
  TSharedPtr<FJsonValue,1> local_7e8;
  TSharedPtr<FJsonValue,1> local_7d8;
  TSharedPtr<FJsonValue,1> local_7c8;
  TSharedPtr<FJsonValue,1> local_7b8;
  TSharedPtr<FJsonValue,1> local_7a8;
  TSharedPtr<FJsonValue,1> local_798;
  TSharedPtr<FJsonValue,1> local_788;
  TSharedPtr<FJsonValue,1> local_778;
  TSharedPtr<FJsonValue,1> local_768;
  TSharedPtr<FJsonValue,1> local_758;
  TSharedPtr<FJsonValue,1> local_748;
  TSharedPtr<FJsonObject,1> local_738;
  TSharedPtr<FJsonObject,1> local_728;
  wchar_t *local_718;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  wchar_t *local_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  FJsonValue *local_6f8;
  TReferenceControllerBase<1> *local_6f0;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  wchar_t *local_698;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  FJsonValue *local_688;
  TReferenceControllerBase<1> *local_680;
  wchar_t *local_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  FJsonValue *local_668;
  TReferenceControllerBase<1> *local_660;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  wchar_t *local_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  wchar_t *local_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  wchar_t *local_538;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  wchar_t *local_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  wchar_t *local_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  wchar_t *local_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  wchar_t *local_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  wchar_t *local_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  wchar_t *local_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  wchar_t *local_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  wchar_t *local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  wchar_t *local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  wchar_t *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  wchar_t *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  TStringView<wchar_t> local_1f8;
  FJsonValue *local_1e8;
  TReferenceControllerBase<1> *local_1e0;
  TStringView<wchar_t> local_1d8;
  undefined8 local_1c8;
  TReferenceControllerBase<1> *pTStack_1c0;
  TStringView<wchar_t> local_1b8;
  undefined8 local_1a8;
  TReferenceControllerBase<1> *pTStack_1a0;
  TStringView<wchar_t> local_198;
  undefined8 local_188;
  TReferenceControllerBase<1> *pTStack_180;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  FString local_138;
  FString local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong uVar23;
  
  local_res18[0] = 0;
  if (*(short *)((longlong)&param_2->_padding_ + 6) != 3) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_208,L"Required condition failed, interrupting test");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    return;
  }
  UE::Json::ConvertRapidJsonToSharedJsonValue
            (&local_748,
             (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)param_2);
  if (local_748.Object == (FJsonValue *)0x0) {
LAB_141dc9879:
    if (1 < (byte)LogJsonConversion._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogJsonConversion);
    }
    pTVar20 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_748.SharedReferenceCount.ReferenceController);
  }
  else {
    if ((local_748.Object == (FJsonValue *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_748.Object)->Type != Object) goto LAB_141dc9879;
    puVar8 = (undefined8 *)(**(code **)(local_748.Object)->_padding_)(local_748.Object);
    pTVar20 = (TReferenceControllerBase<1> *)puVar8[1];
    this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               *)*puVar8;
    if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_840 = pTVar20;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_748.SharedReferenceCount.ReferenceController);
    if (this_00 !=
        (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
         *)0x0) {
      if ((param_1->Object == (FJsonObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar11 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                 *)param_1->Object;
      local_718 = L"int";
      uStack_710 = 3;
      local_1f8._12_4_ = uStack_70c;
      local_1f8.Size = 3;
      local_1f8.DataPtr = L"int";
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(3,L"int");
      pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               ::FindByHash<TStringView<wchar_t>_>(pTVar11,uVar7,&local_1f8);
      if ((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) ||
         (pFVar12 = pTVar9->Object, pFVar12 == (FJsonValue *)0x0)) {
        pFVar12 = (FJsonValue *)0x0;
        local_58 = 0;
        uStack_50 = 0;
        pTVar20 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        pTVar20 = (pTVar9->SharedReferenceCount).ReferenceController;
        if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
          UNLOCK();
          if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        local_1e8 = pFVar12;
        local_1e0 = pTVar20;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20)
        ;
      }
      local_708 = L"int";
      uStack_700 = 3;
      local_1d8._12_4_ = uStack_6fc;
      local_1d8.Size = 3;
      local_1d8.DataPtr = L"int";
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(3,L"int");
      pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               ::FindByHash<TStringView<wchar_t>_>(this_00,uVar7,&local_1d8);
      if ((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) ||
         (pFVar18 = pTVar9->Object, pFVar18 == (FJsonValue *)0x0)) {
        pFVar18 = (FJsonValue *)0x0;
        local_848 = (TReferenceControllerBase<1> *)0x0;
        bVar21 = 8;
        local_1c8 = 0;
        pTStack_1c0 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        local_848 = (pTVar9->SharedReferenceCount).ReferenceController;
        if (local_848 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_848->SharedReferenceCount = (atomic<int>)((int)local_848->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar21 = 4;
        local_6f8 = pFVar18;
        local_6f0 = local_848;
        if (local_848 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_848->SharedReferenceCount = (atomic<int>)((int)local_848->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      pTVar3 = local_6f0;
      if ((bVar21 & 8) != 0) {
        bVar21 = bVar21 & 0xf7;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_1c0);
      }
      if ((bVar21 & 4) != 0) {
        bVar21 = bVar21 & 0xfb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
      if (pFVar12 == (FJsonValue *)0x0) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar1 = pFVar10->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_6e8,L"Required condition failed, interrupting test");
        (*pcVar2)(pFVar1,&local_6e8,0);
        if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
        }
      }
      else if (pFVar18 == (FJsonValue *)0x0) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar1 = pFVar10->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_6d8,L"Required condition failed, interrupting test");
        (*pcVar2)(pFVar1,&local_6d8,0);
        if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
        }
      }
      else if (pFVar12->Type == Number) {
        if (pFVar18->Type == Number) {
          dVar24 = FJsonValue::AsNumber(pFVar12);
          dVar25 = FJsonValue::AsNumber(pFVar18);
          if (dVar24 == dVar25) {
            pTVar11 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)TSharedPtr<FJsonObject,1>::operator->(param_1);
            uStack_690 = 10;
            local_698 = L"round_down";
            local_1b8._12_4_ = uStack_68c;
            local_1b8.Size = 10;
            local_1b8.DataPtr = L"round_down";
            uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"round_down");
            pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                     ::FindByHash<TStringView<wchar_t>_>(pTVar11,uVar7,&local_1b8);
            if ((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) ||
               (pFVar12 = pTVar9->Object, pFVar12 == (FJsonValue *)0x0)) {
              pFVar12 = (FJsonValue *)0x0;
              local_850 = (TReferenceControllerBase<1> *)0x0;
              local_1a8 = 0;
              pTStack_1a0 = (TReferenceControllerBase<1> *)0x0;
              bVar21 = bVar21 | 0x20;
            }
            else {
              local_850 = (pTVar9->SharedReferenceCount).ReferenceController;
              if (local_850 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_850->SharedReferenceCount =
                     (atomic<int>)((int)local_850->SharedReferenceCount + 1);
                UNLOCK();
              }
              bVar21 = bVar21 | 0x10;
              local_688 = pFVar12;
              local_680 = local_850;
              if (local_850 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_850->SharedReferenceCount =
                     (atomic<int>)((int)local_850->SharedReferenceCount + 1);
                UNLOCK();
              }
            }
            pTVar3 = local_680;
            if ((bVar21 & 0x20) != 0) {
              bVar21 = bVar21 & 0xdf;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStack_1a0);
            }
            if ((bVar21 & 0x10) != 0) {
              bVar21 = bVar21 & 0xef;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
            }
            local_678 = L"round_down";
            uStack_670 = 10;
            local_198._12_4_ = uStack_66c;
            local_198.Size = 10;
            local_198.DataPtr = L"round_down";
            uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"round_down");
            pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                     ::FindByHash<TStringView<wchar_t>_>(this_00,uVar7,&local_198);
            if ((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) ||
               (local_818.Object = pTVar9->Object, local_818.Object == (FJsonValue *)0x0)) {
              local_818.Object = (FJsonValue *)0x0;
              bVar21 = bVar21 | 0x80;
              local_818.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              local_188 = 0;
              pTStack_180 = (TReferenceControllerBase<1> *)0x0;
            }
            else {
              local_818.SharedReferenceCount.ReferenceController =
                   (pTVar9->SharedReferenceCount).ReferenceController;
              if (local_818.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_818.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_818.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              bVar21 = bVar21 | 0x40;
              local_668 = local_818.Object;
              local_660 = local_818.SharedReferenceCount.ReferenceController;
              if (local_818.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_818.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_818.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
            }
            pTVar3 = local_660;
            pFVar18 = local_818.Object;
            if ((char)bVar21 < '\0') {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStack_180);
            }
            if ((bVar21 & 0x40) != 0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
            }
            if (pFVar12 == (FJsonValue *)0x0) {
              pFVar10 = FAutomationTestFramework::Get();
              pFVar1 = pFVar10->CurrentTest;
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
              ::FString::FString(&local_658,L"Required condition failed, interrupting test");
              (*pcVar2)(pFVar1,&local_658,0);
              if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_658.Data.AllocatorInstance.Data);
              }
            }
            else if (pFVar18 == (FJsonValue *)0x0) {
              pFVar10 = FAutomationTestFramework::Get();
              pFVar1 = pFVar10->CurrentTest;
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
              ::FString::FString(&local_648,L"Required condition failed, interrupting test");
              (*pcVar2)(pFVar1,&local_648,0);
              if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_648.Data.AllocatorInstance.Data);
              }
            }
            else if (pFVar12->Type == Number) {
              if (pFVar18->Type == Number) {
                dVar24 = FJsonValue::AsNumber(pFVar12);
                dVar25 = FJsonValue::AsNumber(pFVar18);
                if (dVar24 == dVar25) {
                  uVar19 = 0;
                  local_res20[0] = 0;
                  local_res18[0] = 0;
                  cVar5 = (**(code **)(pFVar12->_padding_ + 0x30))(pFVar12,local_res20);
                  if (cVar5 == '\0') {
                    pFVar10 = FAutomationTestFramework::Get();
                    pFVar1 = pFVar10->CurrentTest;
                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                    ::FString::FString(&local_608,L"Required condition failed, interrupting test");
                    (*pcVar2)(pFVar1,&local_608,0);
                    if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_608.Data.AllocatorInstance.Data);
                    }
                  }
                  else {
                    pFVar12 = TSharedPtr<FJsonValue,1>::operator->(&local_818);
                    cVar5 = (**(code **)(pFVar12->_padding_ + 0x30))(pFVar12,local_res18);
                    if (cVar5 == '\0') {
                      pFVar10 = FAutomationTestFramework::Get();
                      pFVar1 = pFVar10->CurrentTest;
                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                      ::FString::FString(&local_5f8,L"Required condition failed, interrupting test")
                      ;
                      (*pcVar2)(pFVar1,&local_5f8,0);
                      if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
                      }
                    }
                    else if (local_res20[0] == local_res18[0]) {
                      pFVar13 = TSharedPtr<FJsonObject,1>::operator->(param_1);
                      uStack_5d0 = 10;
                      local_5d8 = L"round_down";
                      local_178._12_4_ = uStack_5cc;
                      local_178.Size = 10;
                      local_178.DataPtr = L"round_down";
                      FJsonObject::TryGetField(pFVar13,&local_828,&local_178);
                      local_5c8 = L"round_down";
                      uStack_5c0 = 10;
                      local_168._12_4_ = uStack_5bc;
                      local_168.Size = 10;
                      local_168.DataPtr = L"round_down";
                      FJsonObject::TryGetField((FJsonObject *)this_00,&local_838,&local_168);
                      if (local_828.Object == (FJsonValue *)0x0) {
                        pFVar10 = FAutomationTestFramework::Get();
                        pFVar1 = pFVar10->CurrentTest;
                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                        ::FString::FString(&local_5b8,
                                           L"Required condition failed, interrupting test");
                        (*pcVar2)(pFVar1,&local_5b8,0);
                        if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
                        }
                      }
                      else if (local_838.Object == (FJsonValue *)0x0) {
                        pFVar10 = FAutomationTestFramework::Get();
                        pFVar1 = pFVar10->CurrentTest;
                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                        ::FString::FString(&local_5a8,
                                           L"Required condition failed, interrupting test");
                        (*pcVar2)(pFVar1,&local_5a8,0);
                        if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
                        }
                      }
                      else {
                        pFVar12 = TSharedPtr<FJsonValue,1>::operator->(&local_828);
                        if (pFVar12->Type == Number) {
                          pFVar12 = TSharedPtr<FJsonValue,1>::operator->(&local_838);
                          if (pFVar12->Type == Number) {
                            pFVar12 = TSharedPtr<FJsonValue,1>::operator->(&local_828);
                            dVar24 = FJsonValue::AsNumber(pFVar12);
                            pFVar12 = TSharedPtr<FJsonValue,1>::operator->(&local_838);
                            dVar25 = FJsonValue::AsNumber(pFVar12);
                            if (dVar24 == dVar25) {
                              local_874 = 0;
                              local_878 = 0;
                              pFVar12 = TSharedPtr<FJsonValue,1>::operator->(&local_828);
                              cVar5 = (**(code **)(pFVar12->_padding_ + 0x30))(pFVar12,&local_874);
                              if (cVar5 == '\0') {
                                pFVar10 = FAutomationTestFramework::Get();
                                pFVar1 = pFVar10->CurrentTest;
                                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                ::FString::FString(&local_568,
                                                   L"Required condition failed, interrupting test");
                                (*pcVar2)(pFVar1,&local_568,0);
                                if (local_568.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_568.Data.AllocatorInstance.Data);
                                }
                              }
                              else {
                                pFVar12 = TSharedPtr<FJsonValue,1>::operator->(&local_838);
                                cVar5 = (**(code **)(pFVar12->_padding_ + 0x30))(pFVar12,&local_878)
                                ;
                                if (cVar5 == '\0') {
                                  pFVar10 = FAutomationTestFramework::Get();
                                  pFVar1 = pFVar10->CurrentTest;
                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                  ::FString::FString(&local_558,
                                                     L"Required condition failed, interrupting test"
                                                    );
                                  (*pcVar2)(pFVar1,&local_558,0);
                                  if (local_558.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_558.Data.AllocatorInstance.Data);
                                  }
                                }
                                else if (local_874 == local_878) {
                                  pFVar13 = TSharedPtr<FJsonObject,1>::operator->(param_1);
                                  uStack_530 = 6;
                                  local_538 = L"string";
                                  local_158._12_4_ = uStack_52c;
                                  local_158.Size = 6;
                                  local_158.DataPtr = L"string";
                                  FJsonObject::TryGetField(pFVar13,&local_758,&local_158);
                                  local_528 = L"string";
                                  uStack_520 = 6;
                                  local_148._12_4_ = uStack_51c;
                                  local_148.Size = 6;
                                  local_148.DataPtr = L"string";
                                  FJsonObject::TryGetField
                                            ((FJsonObject *)this_00,&local_768,&local_148);
                                  if (local_758.Object == (FJsonValue *)0x0) {
                                    pFVar10 = FAutomationTestFramework::Get();
                                    pFVar1 = pFVar10->CurrentTest;
                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                    ::FString::FString(&local_518,
                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                    (*pcVar2)(pFVar1,&local_518,0);
                                    if (local_518.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_518.Data.AllocatorInstance.Data);
                                    }
                                  }
                                  else if (local_768.Object == (FJsonValue *)0x0) {
                                    pFVar10 = FAutomationTestFramework::Get();
                                    pFVar1 = pFVar10->CurrentTest;
                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                    ::FString::FString(&local_508,
                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                    (*pcVar2)(pFVar1,&local_508,0);
                                    if (local_508.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_508.Data.AllocatorInstance.Data);
                                    }
                                  }
                                  else {
                                    pFVar12 = TSharedPtr<FJsonValue,1>::operator->(&local_758);
                                    if (pFVar12->Type == String) {
                                      pFVar12 = TSharedPtr<FJsonValue,1>::operator->(&local_768);
                                      if (pFVar12->Type == String) {
                                        pFVar12 = TSharedPtr<FJsonValue,1>::operator->(&local_768);
                                        pFVar14 = FJsonValue::AsString(pFVar12,&local_128);
                                        pFVar12 = TSharedPtr<FJsonValue,1>::operator->(&local_758);
                                        pFVar15 = FJsonValue::AsString(pFVar12,&local_138);
                                        bVar4 = ::FString::Equals(pFVar15,pFVar14,IgnoreCase);
                                        if (local_138.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_138.Data.AllocatorInstance.Data);
                                        }
                                        if (local_128.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_128.Data.AllocatorInstance.Data);
                                        }
                                        if (bVar4) {
                                          pFVar13 = TSharedPtr<FJsonObject,1>::operator->(param_1);
                                          uStack_4c0 = 2;
                                          local_4c8 = L"on";
                                          local_118._12_4_ = uStack_4bc;
                                          local_118.Size = 2;
                                          local_118.DataPtr = L"on";
                                          FJsonObject::TryGetField(pFVar13,&local_778,&local_118);
                                          local_4b8 = L"on";
                                          uStack_4b0 = 2;
                                          local_108._12_4_ = uStack_4ac;
                                          local_108.Size = 2;
                                          local_108.DataPtr = L"on";
                                          FJsonObject::TryGetField
                                                    ((FJsonObject *)this_00,&local_788,&local_108);
                                          if (local_778.Object == (FJsonValue *)0x0) {
                                            pFVar10 = FAutomationTestFramework::Get();
                                            pFVar1 = pFVar10->CurrentTest;
                                            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                            ::FString::FString(&local_4a8,
                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                            (*pcVar2)(pFVar1,&local_4a8,0);
                                            if (local_4a8.Data.AllocatorInstance.Data !=
                                                (FScriptContainerElement *)0x0) {
                                              FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
                                            }
                                          }
                                          else if (local_788.Object == (FJsonValue *)0x0) {
                                            pFVar10 = FAutomationTestFramework::Get();
                                            pFVar1 = pFVar10->CurrentTest;
                                            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                            ::FString::FString(&local_498,
                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                            (*pcVar2)(pFVar1,&local_498,0);
                                            if (local_498.Data.AllocatorInstance.Data !=
                                                (FScriptContainerElement *)0x0) {
                                              FMemory::Free(local_498.Data.AllocatorInstance.Data);
                                            }
                                          }
                                          else {
                                            pFVar12 = TSharedPtr<FJsonValue,1>::operator->
                                                                (&local_778);
                                            if (pFVar12->Type == Boolean) {
                                              pFVar12 = TSharedPtr<FJsonValue,1>::operator->
                                                                  (&local_788);
                                              if (pFVar12->Type == Boolean) {
                                                pFVar12 = TSharedPtr<FJsonValue,1>::operator->
                                                                    (&local_788);
                                                bVar4 = FJsonValue::AsBool(pFVar12);
                                                pFVar12 = TSharedPtr<FJsonValue,1>::operator->
                                                                    (&local_778);
                                                bVar6 = FJsonValue::AsBool(pFVar12);
                                                if (bVar6 == bVar4) {
                                                  pFVar13 = TSharedPtr<FJsonObject,1>::operator->
                                                                      (param_1);
                                                  uStack_450 = 3;
                                                  local_458 = L"off";
                                                  local_f8._12_4_ = uStack_44c;
                                                  local_f8.Size = 3;
                                                  local_f8.DataPtr = L"off";
                                                  FJsonObject::TryGetField
                                                            (pFVar13,&local_798,&local_f8);
                                                  local_448 = L"off";
                                                  uStack_440 = 3;
                                                  local_e8._12_4_ = uStack_43c;
                                                  local_e8.Size = 3;
                                                  local_e8.DataPtr = L"off";
                                                  FJsonObject::TryGetField
                                                            ((FJsonObject *)this_00,&local_7a8,
                                                             &local_e8);
                                                  if (local_798.Object == (FJsonValue *)0x0) {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_438,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_438,0);
                                                  if (local_438.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_438.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  else if (local_7a8.Object == (FJsonValue *)0x0) {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_428,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_428,0);
                                                  if (local_428.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_428.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  else {
                                                    pFVar12 = TSharedPtr<FJsonValue,1>::operator->
                                                                        (&local_798);
                                                    if (pFVar12->Type == Boolean) {
                                                      pFVar12 = TSharedPtr<FJsonValue,1>::operator->
                                                                          (&local_7a8);
                                                      if (pFVar12->Type == Boolean) {
                                                        pFVar12 = TSharedPtr<FJsonValue,1>::
                                                                  operator->(&local_7a8);
                                                        bVar4 = FJsonValue::AsBool(pFVar12);
                                                        pFVar12 = TSharedPtr<FJsonValue,1>::
                                                                  operator->(&local_798);
                                                        bVar6 = FJsonValue::AsBool(pFVar12);
                                                        if (bVar6 == bVar4) {
                                                          pFVar13 = TSharedPtr<FJsonObject,1>::
                                                                    operator->(param_1);
                                                          uStack_3e0 = 6;
                                                          local_3e8 = L"object";
                                                          local_d8._12_4_ = uStack_3dc;
                                                          local_d8.Size = 6;
                                                          local_d8.DataPtr = L"object";
                                                          FJsonObject::TryGetField
                                                                    (pFVar13,&local_7b8,&local_d8);
                                                          local_3d8 = L"object";
                                                          uStack_3d0 = 6;
                                                          local_c8._12_4_ = uStack_3cc;
                                                          local_c8.Size = 6;
                                                          local_c8.DataPtr = L"object";
                                                          FJsonObject::TryGetField
                                                                    ((FJsonObject *)this_00,
                                                                     &local_7c8,&local_c8);
                                                          if (local_7b8.Object == (FJsonValue *)0x0)
                                                          {
                                                            pFVar10 = FAutomationTestFramework::Get
                                                                                ();
                                                            pFVar1 = pFVar10->CurrentTest;
                                                            pcVar2 = *(code **)(pFVar1->_padding_ +
                                                                               0x28);
                                                            ::FString::FString(&local_3c8,
                                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_3c8,0);
                                                  if (local_3c8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_3c8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  else if (local_7c8.Object == (FJsonValue *)0x0) {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_3b8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_3b8,0);
                                                  if (local_3b8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_3b8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  else {
                                                    pFVar12 = TSharedPtr<FJsonValue,1>::operator->
                                                                        (&local_7b8);
                                                    if (pFVar12->Type == Object) {
                                                      pFVar12 = TSharedPtr<FJsonValue,1>::operator->
                                                                          (&local_7c8);
                                                      if (pFVar12->Type == Object) {
                                                        pFVar12 = TSharedPtr<FJsonValue,1>::
                                                                  operator->(&local_7b8);
                                                        plVar16 = (longlong *)
                                                                  (**(code **)pFVar12->_padding_)
                                                                            (pFVar12);
                                                        local_728.SharedReferenceCount.
                                                        ReferenceController =
                                                             (TReferenceControllerBase<1> *)
                                                             plVar16[1];
                                                        pFVar13 = (FJsonObject *)*plVar16;
                                                        if (local_728.SharedReferenceCount.
                                                            ReferenceController !=
                                                            (TReferenceControllerBase<1> *)0x0) {
                                                          LOCK();
                                                          (local_728.SharedReferenceCount.
                                                          ReferenceController)->SharedReferenceCount
                                                               = (atomic<int>)
                                                                 ((int)(local_728.
                                                                        SharedReferenceCount.
                                                                       ReferenceController)->
                                                                       SharedReferenceCount + 1);
                                                          UNLOCK();
                                                        }
                                                        local_728.Object = pFVar13;
                                                        pFVar12 = TSharedPtr<FJsonValue,1>::
                                                                  operator->(&local_7c8);
                                                        plVar16 = (longlong *)
                                                                  (**(code **)pFVar12->_padding_)
                                                                            (pFVar12);
                                                        local_738.SharedReferenceCount.
                                                        ReferenceController =
                                                             (TReferenceControllerBase<1> *)
                                                             plVar16[1];
                                                        local_738.Object = (FJsonObject *)*plVar16;
                                                        if (local_738.SharedReferenceCount.
                                                            ReferenceController !=
                                                            (TReferenceControllerBase<1> *)0x0) {
                                                          LOCK();
                                                          (local_738.SharedReferenceCount.
                                                          ReferenceController)->SharedReferenceCount
                                                               = (atomic<int>)
                                                                 ((int)(local_738.
                                                                        SharedReferenceCount.
                                                                       ReferenceController)->
                                                                       SharedReferenceCount + 1);
                                                          UNLOCK();
                                                        }
                                                        if (pFVar13 == (FJsonObject *)0x0) {
                                                          pFVar10 = FAutomationTestFramework::Get();
                                                          pFVar1 = pFVar10->CurrentTest;
                                                          pcVar2 = *(code **)(pFVar1->_padding_ +
                                                                             0x28);
                                                          ::FString::FString(&local_388,
                                                                                                                                                          
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_388,0);
                                                  if (local_388.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_388.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  else if (local_738.Object == (FJsonObject *)0x0) {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_378,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_378,0);
                                                  if (local_378.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_378.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  else {
                                                    pFVar13 = TSharedPtr<FJsonObject,1>::operator->
                                                                        (&local_728);
                                                    uStack_360 = 5;
                                                    local_368 = L"value";
                                                    local_b8._12_4_ = uStack_35c;
                                                    local_b8.Size = 5;
                                                    local_b8.DataPtr = L"value";
                                                    FJsonObject::TryGetField
                                                              (pFVar13,&local_7d8,&local_b8);
                                                    pFVar13 = TSharedPtr<FJsonObject,1>::operator->
                                                                        (&local_738);
                                                    local_358 = L"value";
                                                    uStack_350 = 5;
                                                    local_a8._12_4_ = uStack_34c;
                                                    local_a8.Size = 5;
                                                    local_a8.DataPtr = L"value";
                                                    FJsonObject::TryGetField
                                                              (pFVar13,&local_7e8,&local_a8);
                                                    if (local_7d8.Object == (FJsonValue *)0x0) {
                                                      pFVar10 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar10->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_348,
                                                                                                                                                  
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_348,0);
                                                  if (local_348.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_348.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  else if (local_7e8.Object == (FJsonValue *)0x0) {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_338,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_338,0);
                                                  if (local_338.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_338.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  else {
                                                    pFVar12 = TSharedPtr<FJsonValue,1>::operator->
                                                                        (&local_7d8);
                                                    if (pFVar12->Type == Number) {
                                                      pFVar12 = TSharedPtr<FJsonValue,1>::operator->
                                                                          (&local_7e8);
                                                      if (pFVar12->Type == Number) {
                                                        pFVar12 = TSharedPtr<FJsonValue,1>::
                                                                  operator->(&local_7d8);
                                                        dVar24 = FJsonValue::AsNumber(pFVar12);
                                                        pFVar12 = TSharedPtr<FJsonValue,1>::
                                                                  operator->(&local_7e8);
                                                        dVar25 = FJsonValue::AsNumber(pFVar12);
                                                        if (dVar24 == dVar25) {
                                                          pFVar13 = TSharedPtr<FJsonObject,1>::
                                                                    operator->(param_1);
                                                          uStack_2f0 = 5;
                                                          local_2f8 = L"array";
                                                          local_98._12_4_ = uStack_2ec;
                                                          local_98.Size = 5;
                                                          local_98.DataPtr = L"array";
                                                          FJsonObject::TryGetField
                                                                    (pFVar13,&local_7f8,&local_98);
                                                          local_2e8 = L"array";
                                                          uStack_2e0 = 5;
                                                          local_88._12_4_ = uStack_2dc;
                                                          local_88.Size = 5;
                                                          local_88.DataPtr = L"array";
                                                          FJsonObject::TryGetField
                                                                    ((FJsonObject *)this_00,
                                                                     &local_808,&local_88);
                                                          if (local_7f8.Object == (FJsonValue *)0x0)
                                                          {
                                                            pFVar10 = FAutomationTestFramework::Get
                                                                                ();
                                                            pFVar1 = pFVar10->CurrentTest;
                                                            pcVar2 = *(code **)(pFVar1->_padding_ +
                                                                               0x28);
                                                            ::FString::FString(&local_2d8,
                                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_2d8,0);
                                                  }
                                                  else if (local_808.Object == (FJsonValue *)0x0) {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_2c8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_2c8,0);
                                                  local_2d8.Data.AllocatorInstance.Data =
                                                       local_2c8.Data.AllocatorInstance.Data;
                                                  }
                                                  else {
                                                    pFVar12 = TSharedPtr<FJsonValue,1>::operator->
                                                                        (&local_7f8);
                                                    if (pFVar12->Type == Array) {
                                                      pFVar12 = TSharedPtr<FJsonValue,1>::operator->
                                                                          (&local_808);
                                                      if (pFVar12->Type == Array) {
                                                        pFVar12 = TSharedPtr<FJsonValue,1>::
                                                                  operator->(&local_7f8);
                                                        pTVar17 = FJsonValue::AsArray(pFVar12);
                                                        local_860.AllocatorInstance.Data =
                                                             (FScriptContainerElement *)0x0;
                                                                                                                
                                                  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>
                                                  ::CopyToEmpty<TSharedPtr<FJsonValue,1>,int>
                                                            (&local_860,
                                                             (TSharedPtr<FJsonValue,1> *)
                                                             (pTVar17->AllocatorInstance).Data,
                                                             pTVar17->ArrayNum,0);
                                                  pFVar12 = TSharedPtr<FJsonValue,1>::operator->
                                                                      (&local_808);
                                                  pTVar17 = FJsonValue::AsArray(pFVar12);
                                                  local_870.AllocatorInstance.Data =
                                                       (FScriptContainerElement *)0x0;
                                                  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>
                                                  ::CopyToEmpty<TSharedPtr<FJsonValue,1>,int>
                                                            (&local_870,
                                                             (TSharedPtr<FJsonValue,1> *)
                                                             (pTVar17->AllocatorInstance).Data,
                                                             pTVar17->ArrayNum,0);
                                                  if (local_860.ArrayNum == 0) {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_298,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_298,0);
LAB_141dc975d:
                                                  if (local_298.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_298.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  else {
                                                    if (local_870.ArrayNum == 0) {
                                                      pFVar10 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar10->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_288,
                                                                                                                                                  
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_288,0);
                                                  local_298.Data.AllocatorInstance.Data =
                                                       local_288.Data.AllocatorInstance.Data;
                                                  goto LAB_141dc975d;
                                                  }
                                                  if (local_860.ArrayNum != local_870.ArrayNum) {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_278,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_278,0);
                                                  local_298.Data.AllocatorInstance.Data =
                                                       local_278.Data.AllocatorInstance.Data;
                                                  goto LAB_141dc975d;
                                                  }
                                                  uVar23 = uVar19;
                                                  if (0 < local_860.ArrayNum) {
                                                    do {
                                                      uVar22 = (uint)uVar23;
                                                      uVar7 = 0;
                                                      if ((int)uVar22 < local_860.ArrayNum) {
                                                        uVar7 = ~uVar22 >> 0x1f;
                                                      }
                                                      if ((uVar7 == 0) &&
                                                         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                                                            (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar4)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pTVar9 = (TSharedPtr<FJsonValue,1> *)
                                                           (local_860.AllocatorInstance.Data +
                                                           uVar19);
                                                  uVar7 = 0;
                                                  if ((int)uVar22 < local_870.ArrayNum) {
                                                    uVar7 = ~uVar22 >> 0x1f;
                                                  }
                                                  if ((uVar7 == 0) &&
                                                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar4)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  this_01 = (TSharedPtr<FJsonValue,1> *)
                                                            (local_870.AllocatorInstance.Data +
                                                            uVar19);
                                                  if (pTVar9->Object == (FJsonValue *)0x0) {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_228,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_228,0);
                                                  local_298.Data.AllocatorInstance.Data =
                                                       local_228.Data.AllocatorInstance.Data;
                                                  goto LAB_141dc975d;
                                                  }
                                                  if (this_01->Object == (FJsonValue *)0x0) {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_238,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_238,0);
                                                  local_298.Data.AllocatorInstance.Data =
                                                       local_238.Data.AllocatorInstance.Data;
                                                  goto LAB_141dc975d;
                                                  }
                                                  pFVar12 = TSharedPtr<FJsonValue,1>::operator->
                                                                      (pTVar9);
                                                  if (pFVar12->Type != String) {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_248,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_248,0);
                                                  local_298.Data.AllocatorInstance.Data =
                                                       local_248.Data.AllocatorInstance.Data;
                                                  goto LAB_141dc975d;
                                                  }
                                                  pFVar12 = TSharedPtr<FJsonValue,1>::operator->
                                                                      (this_01);
                                                  if (pFVar12->Type != String) {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_258,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_258,0);
                                                  local_298.Data.AllocatorInstance.Data =
                                                       local_258.Data.AllocatorInstance.Data;
                                                  goto LAB_141dc975d;
                                                  }
                                                  pFVar12 = TSharedPtr<FJsonValue,1>::operator->
                                                                      (this_01);
                                                  pFVar14 = FJsonValue::AsString(pFVar12,&local_68);
                                                  pFVar12 = TSharedPtr<FJsonValue,1>::operator->
                                                                      (pTVar9);
                                                  pFVar15 = FJsonValue::AsString(pFVar12,&local_78);
                                                  bVar4 = ::FString::Equals(pFVar15,pFVar14,
                                                                            IgnoreCase);
                                                  if (local_78.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_78.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (local_68.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_68.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (!bVar4) {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_268,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_268,0);
                                                  local_298.Data.AllocatorInstance.Data =
                                                       local_268.Data.AllocatorInstance.Data;
                                                  goto LAB_141dc975d;
                                                  }
                                                  uVar19 = uVar19 + 0x10;
                                                  uVar23 = (ulonglong)(uVar22 + 1);
                                                  } while ((int)(uVar22 + 1) < local_860.ArrayNum);
                                                  }
                                                  }
                                                  DestructItems<TSharedPtr<FJsonValue,1>,int>
                                                            ((TSharedPtr<FJsonValue,1> *)
                                                             local_870.AllocatorInstance.Data,
                                                             local_870.ArrayNum);
                                                  if ((TSharedPtr<FJsonValue,1> *)
                                                      local_870.AllocatorInstance.Data !=
                                                      (TSharedPtr<FJsonValue,1> *)0x0) {
                                                    FMemory::Free(local_870.AllocatorInstance.Data);
                                                  }
                                                  DestructItems<TSharedPtr<FJsonValue,1>,int>
                                                            ((TSharedPtr<FJsonValue,1> *)
                                                             local_860.AllocatorInstance.Data,
                                                             local_860.ArrayNum);
                                                  local_2d8.Data.AllocatorInstance.Data =
                                                       local_860.AllocatorInstance.Data;
                                                  }
                                                  else {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_2a8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_2a8,0);
                                                  local_2d8.Data.AllocatorInstance.Data =
                                                       local_2a8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_2b8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_2b8,0);
                                                  local_2d8.Data.AllocatorInstance.Data =
                                                       local_2b8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  if ((TSharedPtr<FJsonValue,1> *)
                                                      local_2d8.Data.AllocatorInstance.Data !=
                                                      (TSharedPtr<FJsonValue,1> *)0x0) {
                                                    FMemory::Free(local_2d8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  SharedPointerInternals::
                                                  TReferenceControllerBase<1>::
                                                  ReleaseSharedReferenceNoInline
                                                            (local_808.SharedReferenceCount.
                                                             ReferenceController);
                                                  SharedPointerInternals::
                                                  TReferenceControllerBase<1>::
                                                  ReleaseSharedReferenceNoInline
                                                            (local_7f8.SharedReferenceCount.
                                                             ReferenceController);
                                                  }
                                                  else {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_308,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_308,0);
                                                  if (local_308.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_308.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_318,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_318,0);
                                                  if (local_318.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_318.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_328,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_328,0);
                                                  if (local_328.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_328.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  }
                                                  SharedPointerInternals::
                                                  TReferenceControllerBase<1>::
                                                  ReleaseSharedReferenceNoInline
                                                            (local_7e8.SharedReferenceCount.
                                                             ReferenceController);
                                                  SharedPointerInternals::
                                                  TReferenceControllerBase<1>::
                                                  ReleaseSharedReferenceNoInline
                                                            (local_7d8.SharedReferenceCount.
                                                             ReferenceController);
                                                  }
                                                  SharedPointerInternals::
                                                  TReferenceControllerBase<1>::
                                                  ReleaseSharedReferenceNoInline
                                                            (local_738.SharedReferenceCount.
                                                             ReferenceController);
                                                  SharedPointerInternals::
                                                  TReferenceControllerBase<1>::
                                                  ReleaseSharedReferenceNoInline
                                                            (local_728.SharedReferenceCount.
                                                             ReferenceController);
                                                  }
                                                  else {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_398,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_398,0);
                                                  if (local_398.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_398.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_3a8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_3a8,0);
                                                  if (local_3a8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_3a8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  }
                                                  SharedPointerInternals::
                                                  TReferenceControllerBase<1>::
                                                  ReleaseSharedReferenceNoInline
                                                            (local_7c8.SharedReferenceCount.
                                                             ReferenceController);
                                                  SharedPointerInternals::
                                                  TReferenceControllerBase<1>::
                                                  ReleaseSharedReferenceNoInline
                                                            (local_7b8.SharedReferenceCount.
                                                             ReferenceController);
                                                  }
                                                  else {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_3f8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_3f8,0);
                                                  if (local_3f8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_3f8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_408,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_408,0);
                                                  if (local_408.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_408.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_418,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_418,0);
                                                  if (local_418.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_418.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  }
                                                  SharedPointerInternals::
                                                  TReferenceControllerBase<1>::
                                                  ReleaseSharedReferenceNoInline
                                                            (local_7a8.SharedReferenceCount.
                                                             ReferenceController);
                                                  SharedPointerInternals::
                                                  TReferenceControllerBase<1>::
                                                  ReleaseSharedReferenceNoInline
                                                            (local_798.SharedReferenceCount.
                                                             ReferenceController);
                                                }
                                                else {
                                                  pFVar10 = FAutomationTestFramework::Get();
                                                  pFVar1 = pFVar10->CurrentTest;
                                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                  ::FString::FString(&local_468,
                                                                                                                                          
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_468,0);
                                                  if (local_468.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_468.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                }
                                              }
                                              else {
                                                pFVar10 = FAutomationTestFramework::Get();
                                                pFVar1 = pFVar10->CurrentTest;
                                                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                ::FString::FString(&local_478,
                                                                                                                                      
                                                  L"Required condition failed, interrupting test");
                                                (*pcVar2)(pFVar1,&local_478,0);
                                                if (local_478.Data.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_478.Data.AllocatorInstance.
                                                                Data);
                                                }
                                              }
                                            }
                                            else {
                                              pFVar10 = FAutomationTestFramework::Get();
                                              pFVar1 = pFVar10->CurrentTest;
                                              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                              ::FString::FString(&local_488,
                                                                                                                                  
                                                  L"Required condition failed, interrupting test");
                                              (*pcVar2)(pFVar1,&local_488,0);
                                              if (local_488.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_488.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                            }
                                          }
                                          SharedPointerInternals::TReferenceControllerBase<1>::
                                          ReleaseSharedReferenceNoInline
                                                    (local_788.SharedReferenceCount.
                                                     ReferenceController);
                                          SharedPointerInternals::TReferenceControllerBase<1>::
                                          ReleaseSharedReferenceNoInline
                                                    (local_778.SharedReferenceCount.
                                                     ReferenceController);
                                        }
                                        else {
                                          pFVar10 = FAutomationTestFramework::Get();
                                          pFVar1 = pFVar10->CurrentTest;
                                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                          ::FString::FString(&local_4d8,
                                                                                                                          
                                                  L"Required condition failed, interrupting test");
                                          (*pcVar2)(pFVar1,&local_4d8,0);
                                          if (local_4d8.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
                                          }
                                        }
                                      }
                                      else {
                                        pFVar10 = FAutomationTestFramework::Get();
                                        pFVar1 = pFVar10->CurrentTest;
                                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                        ::FString::FString(&local_4e8,
                                                                                                                      
                                                  L"Required condition failed, interrupting test");
                                        (*pcVar2)(pFVar1,&local_4e8,0);
                                        if (local_4e8.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
                                        }
                                      }
                                    }
                                    else {
                                      pFVar10 = FAutomationTestFramework::Get();
                                      pFVar1 = pFVar10->CurrentTest;
                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                      ::FString::FString(&local_4f8,
                                                                                                                  
                                                  L"Required condition failed, interrupting test");
                                      (*pcVar2)(pFVar1,&local_4f8,0);
                                      if (local_4f8.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
                                      }
                                    }
                                  }
                                  SharedPointerInternals::TReferenceControllerBase<1>::
                                  ReleaseSharedReferenceNoInline
                                            (local_768.SharedReferenceCount.ReferenceController);
                                  SharedPointerInternals::TReferenceControllerBase<1>::
                                  ReleaseSharedReferenceNoInline
                                            (local_758.SharedReferenceCount.ReferenceController);
                                }
                                else {
                                  pFVar10 = FAutomationTestFramework::Get();
                                  pFVar1 = pFVar10->CurrentTest;
                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                  ::FString::FString(&local_548,
                                                     L"Required condition failed, interrupting test"
                                                    );
                                  (*pcVar2)(pFVar1,&local_548,0);
                                  if (local_548.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_548.Data.AllocatorInstance.Data);
                                  }
                                }
                              }
                            }
                            else {
                              pFVar10 = FAutomationTestFramework::Get();
                              pFVar1 = pFVar10->CurrentTest;
                              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                              ::FString::FString(&local_578,
                                                 L"Required condition failed, interrupting test");
                              (*pcVar2)(pFVar1,&local_578,0);
                              if (local_578.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_578.Data.AllocatorInstance.Data);
                              }
                            }
                          }
                          else {
                            pFVar10 = FAutomationTestFramework::Get();
                            pFVar1 = pFVar10->CurrentTest;
                            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                            ::FString::FString(&local_588,
                                               L"Required condition failed, interrupting test");
                            (*pcVar2)(pFVar1,&local_588,0);
                            if (local_588.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_588.Data.AllocatorInstance.Data);
                            }
                          }
                        }
                        else {
                          pFVar10 = FAutomationTestFramework::Get();
                          pFVar1 = pFVar10->CurrentTest;
                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                          ::FString::FString(&local_598,
                                             L"Required condition failed, interrupting test");
                          (*pcVar2)(pFVar1,&local_598,0);
                          if (local_598.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_598.Data.AllocatorInstance.Data);
                          }
                        }
                      }
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_838.SharedReferenceCount.ReferenceController);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_828.SharedReferenceCount.ReferenceController);
                    }
                    else {
                      pFVar10 = FAutomationTestFramework::Get();
                      pFVar1 = pFVar10->CurrentTest;
                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                      ::FString::FString(&local_5e8,L"Required condition failed, interrupting test")
                      ;
                      (*pcVar2)(pFVar1,&local_5e8,0);
                      if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
                      }
                    }
                  }
                }
                else {
                  pFVar10 = FAutomationTestFramework::Get();
                  pFVar1 = pFVar10->CurrentTest;
                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                  ::FString::FString(&local_618,L"Required condition failed, interrupting test");
                  (*pcVar2)(pFVar1,&local_618,0);
                  if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_618.Data.AllocatorInstance.Data);
                  }
                }
              }
              else {
                pFVar10 = FAutomationTestFramework::Get();
                pFVar1 = pFVar10->CurrentTest;
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::FString(&local_628,L"Required condition failed, interrupting test");
                (*pcVar2)(pFVar1,&local_628,0);
                if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_628.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              pFVar10 = FAutomationTestFramework::Get();
              pFVar1 = pFVar10->CurrentTest;
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
              ::FString::FString(&local_638,L"Required condition failed, interrupting test");
              (*pcVar2)(pFVar1,&local_638,0);
              if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_638.Data.AllocatorInstance.Data);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_818.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_850);
          }
          else {
            pFVar10 = FAutomationTestFramework::Get();
            pFVar1 = pFVar10->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString(&local_6a8,L"Required condition failed, interrupting test");
            (*pcVar2)(pFVar1,&local_6a8,0);
            if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          pFVar10 = FAutomationTestFramework::Get();
          pFVar1 = pFVar10->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_6b8,L"Required condition failed, interrupting test");
          (*pcVar2)(pFVar1,&local_6b8,0);
          if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar1 = pFVar10->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_6c8,L"Required condition failed, interrupting test");
        (*pcVar2)(pFVar1,&local_6c8,0);
        if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_848)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
      pTVar20 = local_840;
      goto LAB_141dc98e6;
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_218,L"Required condition failed, interrupting test");
  (*pcVar2)(pFVar1,&local_218,0);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
LAB_141dc98e6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  return;
}

// TestBody @ 141df6cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FJsonConversionAutomationTest::TestBody(FJsonConversionAutomationTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  TJsonStringReader<wchar_t> *this_00;
  FAutomationTestFramework *pFVar5;
  FString *pFVar6;
  TJsonStringReader<wchar_t> *pTVar7;
  FJsonObject *pFVar8;
  ulonglong uVar9;
  undefined1 auStack_228 [32];
  undefined1 local_208 [8];
  FString local_200;
  TSharedPtr<FJsonObject,1> local_1f0;
  TRawPtrProxy<TJsonStringReader<wchar_t>_> local_1e0;
  StackState local_1d8;
  FString local_1a0;
  FScriptContainerElement *local_190;
  int local_188;
  int local_184;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_180;
  FString local_170;
  FString local_160;
  wchar_t *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  wchar_t *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  FString local_108;
  Data local_f8;
  void *local_e0;
  void *local_d0;
  void *local_c8;
  char local_98;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  local_88;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_228;
  pTVar7 = (TJsonStringReader<wchar_t> *)0x0;
  local_1e0.Object = local_1e0.Object & 0xffffffff00000000;
  local_208[0] = 0;
  ::FString::FString(&local_200,
                     L"\n{\n\t\"int\": 1234,\n\t\"round_down\": 1.1,\n\t\"round_up\" : 1.9,\n\t\"string\": \"hello world\",\n\t\"on\": true,\n\t\"off\": false,\n\t\"object\": {\n\t\t\"value\": 42\n\t},\n\t\"array\": [\n\t\t\"aaa\",\n\t\t\"bbb\",\n\t\t\"ccc\",\n\t\t\"ddd\"\n\t],\t\n\t\"null\": null\n}\n\n"
                    );
  this_00 = ::operator_new(0x88);
  if (this_00 != (TJsonStringReader<wchar_t> *)0x0) {
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    *(undefined4 *)&this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 1;
    *(undefined2 *)&this_00->_padding_ = 0;
    this_00->_padding_ = (longlong)&___7__TJsonStringReader__W__6B_;
    (this_00->Content).Data.AllocatorInstance.Data = local_200.Data.AllocatorInstance.Data;
    local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->Content).Data.ArrayNum = local_200.Data.ArrayNum;
    (this_00->Content).Data.ArrayMax = local_200.Data.ArrayMax;
    local_200.Data.ArrayNum = 0;
    local_200.Data.ArrayMax = 0;
    (this_00->Reader).Ptr = (FBufferReader *)0x0;
    TJsonStringReader<wchar_t>::InitReader(this_00);
    pTVar7 = this_00;
  }
  local_1e0.Object = pTVar7;
  TSharedRef<TJsonStringReader<wchar_t>,1>::
  TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_>(&local_180,&local_1e0);
  if (local_180.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.SharedReferenceCount.ReferenceController);
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
  local_1d8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.Object = (FJsonObject *)0x0;
  local_1f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1d8.Identifier.Data.ArrayNum = 0;
  local_1d8.Identifier.Data.ArrayMax = 0;
  local_1d8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Array.ArrayNum = 0;
  local_1d8.Array.ArrayMax = 0;
  local_1d8.Object.Object = (FJsonObject *)0x0;
  local_1d8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)local_180.Object,&local_1d8,None);
  pFVar8 = local_1d8.Object.Object;
  if (bVar4) {
    if (local_1d8.Object.Object == (FJsonObject *)0x0) {
      bVar4 = false;
      pFVar8 = local_1f0.Object;
    }
    else {
      if (local_1d8.Object.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1d8.Object.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1d8.Object.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      local_1f0.Object = local_1d8.Object.Object;
      local_1f0.SharedReferenceCount.ReferenceController =
           local_1d8.Object.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      bVar4 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_1d8.Array.AllocatorInstance.Data,
               local_1d8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_1d8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_1d8.Array.AllocatorInstance.Data);
    }
    if (local_1d8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Identifier.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      if ((pFVar8 == (FJsonObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UE::Json::ConvertSharedJsonToRapidJsonDocument
                ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
                  *)&local_f8.s,pFVar8);
      if (local_98 == '\0') {
        pFVar5 = FAutomationTestFramework::Get();
        pFVar1 = pFVar5->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_160,L"Required condition failed, interrupting test");
        (*pcVar2)(pFVar1,&local_160,0);
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
      }
      else {
        `FJsonConversionAutomationTest::TestBody'::__l2::<lambda_1>::operator()
                  (local_208,&local_1f0,
                   (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                    *)&local_f8.s);
        local_148 = 
        L"\n{\n\t\"int\": 1234,\n\t\"round_down\": 1.1,\n\t\"round_up\" : 1.9,\n\t\"string\": \"hello world\",\n\t\"on\": true,\n\t\"off\": false,\n\t\"object\": {\n\t\t\"value\": 42\n\t},\n\t\"array\": [\n\t\t\"aaa\",\n\t\t\"bbb\",\n\t\t\"ccc\",\n\t\t\"ddd\"\n\t],\t\n\t\"null\": null\n}\n\n"
        ;
        uStack_140 = 0xd2;
        local_128._12_4_ = uStack_13c;
        local_128.Size = 0xd2;
        local_128.DataPtr =
             L"\n{\n\t\"int\": 1234,\n\t\"round_down\": 1.1,\n\t\"round_up\" : 1.9,\n\t\"string\": \"hello world\",\n\t\"on\": true,\n\t\"off\": false,\n\t\"object\": {\n\t\t\"value\": 42\n\t},\n\t\"array\": [\n\t\t\"aaa\",\n\t\t\"bbb\",\n\t\t\"ccc\",\n\t\t\"ddd\"\n\t],\t\n\t\"null\": null\n}\n\n"
        ;
        UE::Json::Parse(&local_88,&local_128);
        uVar9 = (ulonglong)local_88.Variant.TypeIndex;
        if ((2 < uVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar9) == '\0') {
          local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar6 = &local_1a0;
          local_1a0.Data.ArrayNum = 0;
          local_1a0.Data.ArrayMax = 0;
          bVar3 = false;
          bVar4 = true;
        }
        else {
          if ((local_88.Variant.TypeIndex != 1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_138 = 
          L"\n{\n\t\"int\": 1234,\n\t\"round_down\": 1.1,\n\t\"round_up\" : 1.9,\n\t\"string\": \"hello world\",\n\t\"on\": true,\n\t\"off\": false,\n\t\"object\": {\n\t\t\"value\": 42\n\t},\n\t\"array\": [\n\t\t\"aaa\",\n\t\t\"bbb\",\n\t\t\"ccc\",\n\t\t\"ddd\"\n\t],\t\n\t\"null\": null\n}\n\n"
          ;
          uStack_130 = 0xd2;
          local_118._12_4_ = uStack_12c;
          local_118.Size = 0xd2;
          local_118.DataPtr =
               L"\n{\n\t\"int\": 1234,\n\t\"round_down\": 1.1,\n\t\"round_up\" : 1.9,\n\t\"string\": \"hello world\",\n\t\"on\": true,\n\t\"off\": false,\n\t\"object\": {\n\t\t\"value\": 42\n\t},\n\t\"array\": [\n\t\t\"aaa\",\n\t\t\"bbb\",\n\t\t\"ccc\",\n\t\t\"ddd\"\n\t],\t\n\t\"null\": null\n}\n\n"
          ;
          pFVar6 = UE::Json::FParseError::CreateMessage
                             ((FParseError *)&local_88,&local_108,&local_118);
          bVar3 = true;
          bVar4 = false;
        }
        local_190 = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188 = (pFVar6->Data).ArrayNum;
        local_184 = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
        if ((bVar4) && (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        if ((bVar3) && (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        uVar9 = (ulonglong)local_88.Variant.TypeIndex;
        if ((2 < uVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar9 + 4) == '\0') {
          pFVar5 = FAutomationTestFramework::Get();
          (**(code **)(pFVar5->CurrentTest->_padding_ + 0x28))(pFVar5->CurrentTest,&local_190,0);
        }
        else {
          if ((local_88.Variant.TypeIndex != 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          `FJsonConversionAutomationTest::TestBody'::__l2::<lambda_1>::operator()
                    (local_208,&local_1f0,
                     (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                      *)&local_88);
        }
        if (local_190 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190);
        }
        if ((2 < local_88.Variant.TypeIndex) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_88.Variant.TypeIndex])(&local_88);
      }
      if (local_98 != '\0') {
        if (local_e0 != (void *)0x0) {
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_f8.s);
          local_f8.n.i64 = (Number)0x0;
          local_f8.s.str = (wchar_t *)0x0;
        }
        ::operator_delete(local_e0,1);
        free(local_c8);
        ::operator_delete(local_d0,1);
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_f8.s);
      }
      goto LAB_141df720a;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_1d8.Array.AllocatorInstance.Data,
               local_1d8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_1d8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_1d8.Array.AllocatorInstance.Data);
    }
    if (local_1d8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Identifier.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_170,L"Required condition failed, interrupting test");
  (*pcVar2)(pFVar1,&local_170,0);
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
LAB_141df720a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.SharedReferenceCount.ReferenceController);
  return;
}

