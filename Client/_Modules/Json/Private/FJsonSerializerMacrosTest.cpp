// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 10

// GetTestFlags @ 141d9f340

EAutomationTestFlags __thiscall
FJsonSerializerMacrosTest::GetTestFlags(FJsonSerializerMacrosTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d9f350

bool __thiscall FJsonSerializerMacrosTest::IsStressTest(FJsonSerializerMacrosTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d9f360

uint __thiscall FJsonSerializerMacrosTest::GetRequiredDeviceNum(FJsonSerializerMacrosTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d9f370

FString * __thiscall
FJsonSerializerMacrosTest::GetTestSourceFileName
          (FJsonSerializerMacrosTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d9f3a0

int __thiscall FJsonSerializerMacrosTest::GetTestSourceFileLine(FJsonSerializerMacrosTest *this)

{
  return 0x5c4;
}

// GetTests @ 141d9f3b0

/* WARNING: Removing unreachable block (ram,0x000141d9f52e) */

void __thiscall
FJsonSerializerMacrosTest::GetTests
          (FJsonSerializerMacrosTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d9f550

bool __thiscall FJsonSerializerMacrosTest::RunTest(FJsonSerializerMacrosTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d9f580

FString * __thiscall
FJsonSerializerMacrosTest::GetBeautifiedTestName
          (FJsonSerializerMacrosTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FJsonSerializerMacrosTest @ 141dc4a10

FJsonSerializerMacrosTest * __thiscall
FJsonSerializerMacrosTest::FJsonSerializerMacrosTest
          (FJsonSerializerMacrosTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FJsonSerializerMacrosTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Engine::FileSystem::JSON::MacroToSerializeMembers")
  ;
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

// TestBody @ 141df7260

void __thiscall
FJsonSerializerMacrosTest::TestBody(FJsonSerializerMacrosTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  FString *pFVar6;
  FAutomationTestFramework *pFVar7;
  atomic<int> *paVar8;
  ForAnyElementType FVar9;
  FString local_88;
  undefined1 local_78 [16];
  FJsonSerializerBase local_68;
  FScriptContainerElement *local_60;
  TReferenceControllerBase<1> *local_58;
  FJsonSerializable local_50;
  int local_48;
  undefined **local_40;
  int local_38;
  FString local_30;
  
  local_50 = (FJsonSerializable)&`FJsonSerializerMacrosTest::TestBody'::`2'::FJsonStruct::_vftable_;
  local_48 = 0;
  local_40 = &`FJsonSerializerMacrosTest::TestBody'::`2'::FJsonStruct::FSubJsonStruct::_vftable_;
  local_38 = 0;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize((FString *)local_78,L"",0);
  if (&local_30 != pFVar6) {
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    local_30.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_30.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  local_78._8_4_ = 0x35;
  local_78._0_8_ = L"{\"var_int\":2,\"sub_var_int\":10,\"sub_var_string\":\"abc\"}";
  UE::JsonSerializable::Private::FromJsonStringView<wchar_t>
            (&local_50,(TStringView<wchar_t> *)local_78);
  if (local_48 != 2) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_78,L"Condition failed");
    (*pcVar2)(pFVar1,local_78);
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  if (local_38 != 10) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_78,L"Condition failed");
    (*pcVar2)(pFVar1,local_78);
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_30.Data.ArrayNum != 0) {
    FVar9.Data = local_30.Data.AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,L"abc");
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_78,L"Condition failed");
    (*pcVar2)(pFVar1,local_78);
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create
            ((TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> *)local_78,
             &local_88,0);
  uVar4 = local_78._8_8_;
  uVar3 = local_78._0_8_;
  if ((TReferenceControllerBase<1> *)local_78._8_8_ == (TReferenceControllerBase<1> *)0x0) {
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar8 = (atomic<int> *)(local_78._8_8_ + 8);
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  local_68 = (FJsonSerializerBase)
             &___7__FJsonSerializerWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
  local_60 = (FScriptContainerElement *)local_78._0_8_;
  local_58 = (TReferenceControllerBase<1> *)local_78._8_8_;
  if ((TReferenceControllerBase<1> *)local_78._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_78._8_8_);
  if (*(code **)((longlong)local_50 + 0x50) ==
      `FJsonSerializerMacrosTest::TestBody'::__l2::FJsonStruct::Serialize) {
    `FJsonSerializerMacrosTest::TestBody'::__l2::FJsonStruct::Serialize(&local_50,&local_68,false);
  }
  else {
    (**(code **)((longlong)local_50 + 0x50))();
  }
  (**(code **)(*(longlong *)uVar3 + 8))(uVar3);
  local_68 = (FJsonSerializerBase)
             &___7__FJsonSerializerWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)uVar4);
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar9.Data = local_88.Data.AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp
                    ((wchar_t *)FVar9.Data,
                     L"{\"var_int\":2,\"sub_var_int\":10,\"sub_var_string\":\"abc\"}");
  if (iVar5 != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_78,L"Condition failed");
    (*pcVar2)(pFVar1,local_78,0);
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

