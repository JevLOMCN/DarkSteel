// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cbf860

EAutomationTestFlags __thiscall FCbValidatePackageTest::GetTestFlags(FCbValidatePackageTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbf870

bool __thiscall FCbValidatePackageTest::IsStressTest(FCbValidatePackageTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbf880

uint __thiscall FCbValidatePackageTest::GetRequiredDeviceNum(FCbValidatePackageTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbf890

FString * __thiscall
FCbValidatePackageTest::GetTestSourceFileName
          (FCbValidatePackageTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryValidationTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbf8c0

int __thiscall FCbValidatePackageTest::GetTestSourceFileLine(FCbValidatePackageTest *this)

{
  return 0x199;
}

// GetTests @ 141cbf8d0

/* WARNING: Removing unreachable block (ram,0x000141cbfa4e) */

void __thiscall
FCbValidatePackageTest::GetTests
          (FCbValidatePackageTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cbfa70

bool __thiscall FCbValidatePackageTest::RunTest(FCbValidatePackageTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbfaa0

FString * __thiscall
FCbValidatePackageTest::GetBeautifiedTestName
          (FCbValidatePackageTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbValidatePackageTest @ 141ce4060

FCbValidatePackageTest * __thiscall
FCbValidatePackageTest::FCbValidatePackageTest(FCbValidatePackageTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbValidatePackageTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::ValidateCompactBinaryPackage")
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

// TestBody @ 141d071e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCbValidatePackageTest::TestBody(FCbValidatePackageTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [8];
  bool bVar4;
  ECbValidateError EVar5;
  int iVar6;
  FBlake3Hash *pFVar7;
  FSharedBuffer FVar8;
  FCbFieldIterator *pFVar9;
  FAutomationTestFramework *pFVar10;
  ulonglong uVar11;
  ulong64 uVar12;
  FCbWriter *this_00;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStackY_2268 [32];
  undefined1 local_2238 [4];
  undefined2 local_2234 [2];
  undefined2 local_2230 [2];
  undefined4 local_222c;
  undefined1 local_2228 [8];
  undefined1 local_2220 [24];
  undefined8 local_2208;
  undefined8 local_2200;
  undefined8 local_21f8;
  FArchiveState local_21e8;
  undefined8 local_2158;
  ForAnyElementType *local_2150;
  undefined8 local_2148;
  ForAnyElementType local_2140;
  int local_2138 [4];
  FArchiveState local_2128;
  undefined8 local_2098;
  ForAnyElementType *local_2090;
  undefined8 local_2088;
  ForAnyElementType local_2080;
  int local_2078 [4];
  FArchiveState local_2068;
  undefined8 local_1fd8;
  ForAnyElementType *local_1fd0;
  undefined8 local_1fc8;
  ForAnyElementType local_1fc0;
  int local_1fb8 [4];
  TMemoryView<void_const_> local_1fa8;
  TMemoryView<void_const_> local_1f98;
  FString local_1f88;
  TMemoryView<void_const_> local_1f78;
  FString local_1f68;
  TMemoryView<void_const_> local_1f58;
  FString local_1f48;
  TMemoryView<void_const_> local_1f38;
  FString local_1f28;
  FScriptContainerElement *local_1f18;
  ulong64 uStack_1f10;
  FString local_1f08;
  FScriptContainerElement *local_1ef8;
  ulong64 uStack_1ef0;
  FString local_1ee8;
  FScriptContainerElement *local_1ed8;
  ulong64 uStack_1ed0;
  FString local_1ec8;
  FScriptContainerElement *local_1eb8;
  ulong64 uStack_1eb0;
  FString local_1ea8;
  TMemoryView<void_const_> local_1e98;
  FString local_1e88;
  TMemoryView<void_const_> local_1e78;
  FString local_1e68;
  TMemoryView<void_const_> local_1e58;
  FString local_1e48;
  TMemoryView<void_const_> local_1e38;
  FString local_1e28;
  FScriptContainerElement *local_1e18;
  ulonglong uStack_1e10;
  FString local_1e08;
  FScriptContainerElement *local_1df8;
  ulonglong uStack_1df0;
  FString local_1de8;
  FScriptContainerElement *local_1dd8;
  ulonglong uStack_1dd0;
  FString local_1dc8;
  TMemoryView<void_const_> local_1db8;
  FString local_1da8;
  FScriptContainerElement *local_1d98;
  ulong64 uStack_1d90;
  FString local_1d88;
  FScriptContainerElement *local_1d78;
  ulong64 uStack_1d70;
  FString local_1d68;
  TMemoryView<void_const_> local_1d58;
  FString local_1d48;
  TMemoryView<void_const_> local_1d38;
  FString local_1d28;
  TMemoryView<void_const_> local_1d18;
  FString local_1d08;
  TMemoryView<void_const_> local_1cf8;
  FString local_1ce8;
  FScriptContainerElement *local_1cd8;
  ulonglong uStack_1cd0;
  FString local_1cc8;
  FScriptContainerElement *local_1cb8;
  ulonglong uStack_1cb0;
  FString local_1ca8;
  FScriptContainerElement *local_1c98;
  ulonglong uStack_1c90;
  FString local_1c88;
  TMemoryView<void_const_> local_1c78;
  FString local_1c68;
  FScriptContainerElement *local_1c58;
  ulong64 uStack_1c50;
  FString local_1c48;
  FScriptContainerElement *local_1c38;
  ulong64 uStack_1c30;
  FString local_1c28;
  TMemoryView<void_const_> local_1c18;
  FString local_1c08;
  TMemoryView<void_const_> local_1bf8;
  FString local_1be8;
  TMemoryView<void_const_> local_1bd8;
  FString local_1bc8;
  TMemoryView<void_const_> local_1bb8;
  FString local_1ba8;
  FScriptContainerElement *local_1b98;
  ulonglong uStack_1b90;
  FString local_1b88;
  FScriptContainerElement *local_1b78;
  ulonglong uStack_1b70;
  FString local_1b68;
  FScriptContainerElement *local_1b58;
  ulonglong uStack_1b50;
  FString local_1b48;
  TMemoryView<void_const_> local_1b38;
  FString local_1b28;
  TMemoryView<void_const_> local_1b18;
  FString local_1b08;
  undefined *local_1af8;
  undefined4 uStack_1af0;
  undefined4 uStack_1aec;
  TMemoryView<void_const_> local_1ae8;
  FString local_1ad8;
  TMemoryView<void_const_> local_1ac8;
  FString local_1ab8;
  undefined *local_1aa8;
  undefined4 uStack_1aa0;
  undefined4 uStack_1a9c;
  TMemoryView<void_const_> local_1a98;
  FString local_1a88;
  TMemoryView<void_const_> local_1a78;
  FString local_1a68;
  undefined *local_1a58;
  undefined4 uStack_1a50;
  undefined4 uStack_1a4c;
  TMemoryView<void_const_> local_1a48;
  FString local_1a38;
  TMemoryView<void_const_> local_1a28;
  FString local_1a18;
  TMemoryView<void_const_> local_1a08;
  FString local_19f8;
  TMemoryView<void_const_> local_19e8;
  FString local_19d8;
  TMemoryView<void_const_> local_19c8;
  FString local_19b8;
  TMemoryView<void_const_> local_19a8;
  FString local_1998;
  TMemoryView<void_const_> local_1988;
  FString local_1978;
  TMemoryView<void_const_> local_1968;
  FString local_1958;
  TMemoryView<void_const_> local_1948;
  FString local_1938;
  TMemoryView<void_const_> local_1928;
  FString local_1918;
  TMemoryView<void_const_> local_1908;
  FString local_18f8;
  TMemoryView<void_const_> local_18e8;
  FString local_18d8;
  TMemoryView<void_const_> local_18c8;
  TMemoryView<void_const_> local_18b8;
  FString local_18a8;
  TMemoryView<void_const_> local_1898;
  FString local_1888;
  undefined4 *local_1878;
  undefined8 local_1870;
  TMemoryView<void_const_> local_1868;
  undefined4 *local_1858;
  undefined8 local_1850;
  char *local_1848;
  undefined4 uStack_1840;
  undefined4 uStack_183c;
  undefined1 local_1838 [32];
  TMemoryView<void_const_> local_1818;
  TMemoryView<void_const_> local_1808;
  TMemoryView<void_const_> local_17f8;
  TMemoryView<void_const_> local_17e8;
  TMemoryView<void_const_> local_17d8;
  TMemoryView<void_const_> local_17c8;
  TMemoryView<void_const_> local_17b8;
  TStringView<char8_t> local_17a8;
  TMemoryView<void_const_> local_1798;
  TMemoryView<void_const_> local_1788;
  TMemoryView<void_const_> local_1778;
  TMemoryView<void_const_> local_1768;
  TMemoryView<void_const_> local_1758;
  TMemoryView<void_const_> local_1748;
  TStringView<char8_t> local_1738;
  TStringView<char8_t> local_1728;
  TStringView<char8_t> local_1718;
  TMemoryView<void_const_> local_1708;
  TMemoryView<void_const_> local_16f8;
  TMemoryView<void_const_> local_16e8;
  TMemoryView<void_const_> local_16d8;
  undefined1 local_16c8 [32];
  undefined1 local_16a8 [32];
  undefined1 local_1688 [176];
  int local_15d8;
  undefined1 local_15c8 [176];
  int local_1518;
  undefined1 local_1508 [176];
  int local_1458;
  undefined1 local_1448 [176];
  int local_1398;
  undefined1 local_1388 [176];
  int local_12d8;
  undefined1 local_12c8 [176];
  int local_1218;
  undefined1 local_1208 [176];
  int local_1158;
  undefined1 local_1148 [176];
  int local_1098;
  undefined1 local_1088 [176];
  int local_fd8;
  FIoHash local_fc8;
  FIoHash local_fb4;
  FIoHash local_fa0;
  FCompressedBuffer local_f88;
  FIoHash local_f70;
  FCbWriter local_f58 [2];
  FCbWriter local_f08 [2];
  FBlake3Hash local_eb8;
  FBlake3Hash local_e98;
  FCbWriter local_e78 [7];
  FCbWriter local_d48 [7];
  FCbWriter local_c18 [7];
  FCbWriter local_ae8 [7];
  FCbWriter local_9b8 [7];
  FCbWriter local_888 [7];
  FCbWriter local_758 [7];
  FCbWriter local_628 [7];
  FCbWriter local_4f8 [7];
  FCbWriter local_3c8 [7];
  FCbWriter local_298 [7];
  FCbWriter local_168 [7];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x141d0720a;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2268;
  local_1878 = &local_222c;
  local_222c = 0x3020100;
  local_1870 = 4;
  FSharedBuffer::MakeView((TMemoryView<void_const_> *)local_2228);
  auVar3 = local_2228;
  local_1868.Data = (void *)0x0;
  local_1868.Size = (ulong64)local_1868.Data;
  if (local_2228 != (undefined1  [8])0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_2228 + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_2228 + 8))(local_2228);
    }
    local_1868.Size = *(ulong64 *)((longlong)auVar3 + 0x10);
    if (local_2228 != (undefined1  [8])0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_2228 + 0x18) >> 0x3c & 4) == 0)
      {
        (**(code **)(*(longlong *)local_2228 + 8))(local_2228);
      }
      local_1868.Data = *(void **)((longlong)local_2228 + 8);
    }
  }
  pFVar7 = FBlake3::HashBuffer(&local_eb8,&local_1868);
  local_1850 = 4;
  local_fb4.Hash._0_8_ = *(undefined8 *)pFVar7->Hash;
  local_fb4.Hash._8_8_ = *(undefined8 *)(pFVar7->Hash + 8);
  local_fb4.Hash._16_4_ = *(undefined4 *)(pFVar7->Hash + 0x10);
  local_1858 = &local_222c;
  FVar8 = FSharedBuffer::MakeView(&local_1fa8);
  FCompressedBuffer::Compress(&local_f88,(FSharedBuffer *)FVar8.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_1fa8);
  FCbWriter::FCbWriter(local_f58,0x20);
  FCbWriter::BeginObject(local_f58);
  uStack_1840 = 5;
  local_1848 = "Field";
  local_17a8._12_4_ = uStack_183c;
  local_17a8.Size = 5;
  local_17a8.DataPtr = "Field";
  FCbWriter::SetNameOrAddString(local_f58,&local_17a8);
  FCbWriter::AddInteger(local_f58,0x2a);
  FCbWriter::EndObject(local_f58);
  pFVar9 = FCbWriter::Save(local_f58,(FCbFieldIterator *)local_16c8);
  FCbField::AsObject((FCbField *)pFVar9,(FCbObject *)local_2220);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_16c8 + 0x10));
  FCbObjectView::GetHash((FCbObjectView *)local_2220,&local_fc8);
  pFVar10 = FAutomationTestFramework::Get();
  local_1f98.Size = 1;
  pFVar1 = pFVar10->CurrentTest;
  local_1f98.Data = local_2238;
  local_2238[0] = 1;
  EVar5 = ValidateCompactBinaryPackage(&local_1f98,All);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1f88,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1f88,0);
    if (local_1f88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f88.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  local_1f78.Size = 2;
  pFVar1 = pFVar10->CurrentTest;
  local_1f78.Data = local_2234;
  local_2234[0] = 1;
  EVar5 = ValidateCompactBinaryPackage(&local_1f78,All);
  if (EVar5 != Padding) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1f68,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1f68,0);
    if (local_1f68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f68.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  local_1f58.Size = 2;
  pFVar1 = pFVar10->CurrentTest;
  local_1f58.Data = local_2230;
  local_2230[0] = 1;
  EVar5 = ValidateCompactBinaryPackage(&local_1f58,PackageHash|Package|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1f48,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1f48,0);
    if (local_1f48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f48.Data.AllocatorInstance.Data);
    }
  }
  local_2208 = 0;
  local_21e8._padding_ = 0;
  local_21e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_21e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_21e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_21e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_21e8._40_8_ = 0;
  local_21e8.ArSerializingDefaults = 0;
  local_21e8.ArPortFlags = 0;
  local_21e8.ArMaxSerializeSize = 0;
  local_21e8.ArUEVer.FileVersionUE4 = 0;
  local_21e8.ArUEVer.FileVersionUE5 = 0;
  local_21e8.ArLicenseeUEVer = 0;
  local_21e8.ArEngineVer.Major = 0;
  local_21e8.ArEngineVer.Minor = 0;
  local_21e8.ArEngineVer.Patch = 0;
  local_21e8.ArEngineVer._6_2_ = 0;
  local_21e8.ArEngineVer.Changelist = 0;
  local_21e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_21e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_21e8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_21e8.SerializedProperty = (FProperty *)0x0;
  local_21e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_21e8.bCustomVersionsAreReset = false;
  local_21e8._129_7_ = 0;
  local_21e8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_21e8);
  local_2150 = &local_2140;
  local_2158 = 0;
  local_21e8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_2148 = 0;
  FArchiveState::SetIsSaving(&local_21e8,true);
  (**(code **)(local_21e8._padding_ + 0x108))(&local_21e8,0);
  local_2140.Data = (FScriptContainerElement *)0x0;
  local_21e8._padding_ = (longlong)&___7FBufferArchive__6B_;
  local_2138[0] = 0;
  local_2138[1] = 0;
  FCbWriter::FCbWriter(local_4f8,0x100);
  FCbWriter::AddHash(local_4f8,&local_fc8);
  FCbWriter::AddObject(local_4f8,(FCbObject *)local_2220);
  FCbWriter::AddNull(local_4f8);
  FCbWriter::Save(local_4f8,(FArchive *)&local_21e8);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1f38.Data = local_2140.Data;
  local_1f38.Size = (ulong64)local_2138[0];
  EVar5 = ValidateCompactBinaryPackage(&local_1f38,All);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1f28,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1f28,0);
    if (local_1f28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f28.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  uVar14 = (ulonglong)local_2138[0];
  pFVar1 = pFVar10->CurrentTest;
  local_1f18 = local_2140.Data;
  uVar11 = 0x22;
  if (uVar14 < 0x22) {
    uVar11 = uVar14;
  }
  uStack_1f10 = uVar14 - uVar11;
  local_16e8.Data = local_2140.Data;
  local_16e8.Size = uStack_1f10;
  EVar5 = ValidateCompactBinaryPackage(&local_16e8,All);
  if (EVar5 != InvalidPackageFormat) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1f08,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1f08,0);
    if (local_1f08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f08.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  uVar14 = (ulonglong)local_2138[0];
  pFVar1 = pFVar10->CurrentTest;
  uVar11 = 0x22;
  if (uVar14 < 0x22) {
    uVar11 = uVar14;
  }
  uStack_1ef0 = uVar14 - uVar11;
  local_1ef8 = local_2140.Data;
  local_16d8.Data = local_2140.Data;
  local_16d8.Size = uStack_1ef0;
  EVar5 = ValidateCompactBinaryPackage(&local_16d8,PackageHash|Padding|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1ee8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1ee8,0);
    if (local_1ee8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1ee8.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1ed8 = local_2140.Data;
  uStack_1ed0 = (longlong)local_2138[0] - (ulonglong)((longlong)local_2138[0] != 0);
  local_16f8.Data = local_2140.Data;
  local_16f8.Size = uStack_1ed0;
  EVar5 = ValidateCompactBinaryPackage(&local_16f8,All);
  if (EVar5 != InvalidPackageFormat) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1ec8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1ec8,0);
    if (local_1ec8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1ec8.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1eb8 = local_2140.Data;
  uStack_1eb0 = (longlong)local_2138[0] - (ulonglong)((longlong)local_2138[0] != 0);
  local_1818.Data = local_2140.Data;
  local_1818.Size = uStack_1eb0;
  EVar5 = ValidateCompactBinaryPackage(&local_1818,PackageHash|Padding|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1ea8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1ea8,0);
    if (local_1ea8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1ea8.Data.AllocatorInstance.Data);
    }
  }
  uVar13 = 0;
  if ((int)(local_2138[0] - 2U) < local_2138[0]) {
    uVar13 = ~(local_2138[0] - 2U) >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_2140.Data[(longlong)local_2138[0] + -2] =
       (FScriptContainerElement)((char)local_2140.Data[(longlong)local_2138[0] + -2] + '\x01');
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1e98.Data = local_2140.Data;
  local_1e98.Size = (ulong64)local_2138[0];
  EVar5 = ValidateCompactBinaryPackage(&local_1e98,All);
  if (EVar5 != InvalidPackageHash) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1e88,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1e88,0);
    if (local_1e88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e88.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1e78.Data = local_2140.Data;
  local_1e78.Size = (ulong64)local_2138[0];
  EVar5 = ValidateCompactBinaryPackage(&local_1e78,Package|Padding|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1e68,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1e68,0);
    if (local_1e68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e68.Data.AllocatorInstance.Data);
    }
  }
  uVar13 = 0;
  if ((int)(local_2138[0] - 2U) < local_2138[0]) {
    uVar13 = ~(local_2138[0] - 2U) >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_2140.Data[(longlong)local_2138[0] + -2] =
       (FScriptContainerElement)((char)local_2140.Data[(longlong)local_2138[0] + -2] + -1);
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,1,&local_2140,local_2138,local_2138 + 1);
  local_2140.Data[iVar6] = (FScriptContainerElement)0x0;
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1e58.Data = local_2140.Data;
  local_1e58.Size = (ulong64)local_2138[0];
  EVar5 = ValidateCompactBinaryPackage(&local_1e58,All);
  if (EVar5 != Padding) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1e48,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1e48,0);
    if (local_1e48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e48.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1e38.Data = local_2140.Data;
  local_1e38.Size = (ulong64)local_2138[0];
  EVar5 = ValidateCompactBinaryPackage(&local_1e38,PackageHash|Package|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1e28,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1e28,0);
    if (local_1e28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e28.Data.AllocatorInstance.Data);
    }
  }
  if (local_2138[0] < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar15 = ~(local_2138[0] - 1U) + local_2138[0];
  iVar6 = local_2138[0];
  if (iVar15 != 0) {
    memmove(local_2140.Data + (int)(local_2138[0] - 1U),
            local_2140.Data + (int)(local_2138[0] - 1U) + 1,(longlong)iVar15);
    iVar6 = local_2138[0];
  }
  local_2138[0] = iVar6 + -1;
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1e18 = local_2140.Data;
  uStack_1e10 = (ulonglong)(local_2138[0] != 0);
  local_1808.Data = local_2140.Data;
  local_1808.Size = uStack_1e10;
  EVar5 = ValidateCompactBinaryPackage(&local_1808,All);
  if (EVar5 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1e08,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1e08,0);
    if (local_1e08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e08.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1df8 = local_2140.Data;
  uStack_1df0 = 0xb;
  if ((ulonglong)(longlong)local_2138[0] < 0xb) {
    uStack_1df0 = (longlong)local_2138[0];
  }
  local_17f8.Data = local_2140.Data;
  local_17f8.Size = uStack_1df0;
  EVar5 = ValidateCompactBinaryPackage(&local_17f8,All);
  if (EVar5 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1de8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1de8,0);
    if (local_1de8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1de8.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  uStack_1dd0 = 0xb;
  if ((ulonglong)(longlong)local_2138[0] < 0xb) {
    uStack_1dd0 = (longlong)local_2138[0];
  }
  local_1dd8 = local_2140.Data;
  local_17e8.Data = local_2140.Data;
  local_17e8.Size = uStack_1dd0;
  EVar5 = ValidateCompactBinaryPackage(&local_17e8,None);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1dc8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1dc8,0);
    if (local_1dc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1dc8.Data.AllocatorInstance.Data);
    }
  }
  FCbWriter::~FCbWriter(local_4f8);
  if (local_2140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2140.Data);
  }
  FArchive::~FArchive((FArchive *)&local_21e8);
  local_2200 = 0;
  local_2128._padding_ = 0;
  local_2128.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_2128.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_2128.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_2128.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_2128._40_8_ = 0;
  local_2128.ArSerializingDefaults = 0;
  local_2128.ArPortFlags = 0;
  local_2128.ArMaxSerializeSize = 0;
  local_2128.ArUEVer.FileVersionUE4 = 0;
  local_2128.ArUEVer.FileVersionUE5 = 0;
  local_2128.ArLicenseeUEVer = 0;
  local_2128.ArEngineVer.Major = 0;
  local_2128.ArEngineVer.Minor = 0;
  local_2128.ArEngineVer.Patch = 0;
  local_2128.ArEngineVer._6_2_ = 0;
  local_2128.ArEngineVer.Changelist = 0;
  local_2128.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_2128.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_2128.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_2128.SerializedProperty = (FProperty *)0x0;
  local_2128.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_2128.bCustomVersionsAreReset = false;
  local_2128._129_7_ = 0;
  local_2128.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_2128);
  local_2090 = &local_2080;
  local_2098 = 0;
  local_2128._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_2088 = 0;
  FArchiveState::SetIsSaving(&local_2128,true);
  (**(code **)(local_2128._padding_ + 0x108))(&local_2128,0);
  local_2080.Data = (FScriptContainerElement *)0x0;
  local_2078[0] = 0;
  local_2078[1] = 0;
  local_2128._padding_ = (longlong)&___7FBufferArchive__6B_;
  FCbWriter::FCbWriter(local_e78,0x100);
  FCbWriter::AddHash(local_e78,&local_fc8);
  FCbWriter::AddObject(local_e78,(FCbObject *)local_2220);
  uVar12 = FCbWriter::GetSaveSize(local_e78);
  FCbWriter::AddBinaryAttachment(local_e78,&local_fb4);
  FCbWriter::AddBinary(local_e78,(FSharedBuffer *)local_2228);
  FCbWriter::AddNull(local_e78);
  FCbWriter::Save(local_e78,(FArchive *)&local_2128);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1db8.Data = local_2080.Data;
  local_1db8.Size = (ulong64)local_2078[0];
  EVar5 = ValidateCompactBinaryPackage(&local_1db8,All);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1da8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1da8,0);
    if (local_1da8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1da8.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1d98 = local_2080.Data;
  uStack_1d90 = (longlong)local_2078[0] - (ulonglong)((longlong)local_2078[0] != 0);
  local_17d8.Data = local_2080.Data;
  local_17d8.Size = uStack_1d90;
  EVar5 = ValidateCompactBinaryPackage(&local_17d8,All);
  if (EVar5 != InvalidPackageFormat) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1d88,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1d88,0);
    if (local_1d88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d88.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1d78 = local_2080.Data;
  uStack_1d70 = (longlong)local_2078[0] - (ulonglong)((longlong)local_2078[0] != 0);
  local_17c8.Data = local_2080.Data;
  local_17c8.Size = uStack_1d70;
  EVar5 = ValidateCompactBinaryPackage(&local_17c8,PackageHash|Padding|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1d68,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1d68,0);
    if (local_1d68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d68.Data.AllocatorInstance.Data);
    }
  }
  if ((local_2078[0] < 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_2080.Data[2] = (FScriptContainerElement)((char)local_2080.Data[2] + '\x01');
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1d58.Data = local_2080.Data;
  local_1d58.Size = (ulong64)local_2078[0];
  EVar5 = ValidateCompactBinaryPackage(&local_1d58,All);
  if (EVar5 != InvalidPackageHash) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1d48,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1d48,0);
    if (local_1d48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d48.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1d38.Data = local_2080.Data;
  local_1d38.Size = (ulong64)local_2078[0];
  EVar5 = ValidateCompactBinaryPackage(&local_1d38,Package|Padding|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1d28,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1d28,0);
    if (local_1d28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d28.Data.AllocatorInstance.Data);
    }
  }
  if ((local_2078[0] < 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_2080.Data[2] = (FScriptContainerElement)((char)local_2080.Data[2] + -1);
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,1,&local_2080,local_2078,local_2078 + 1);
  local_2080.Data[iVar6] = (FScriptContainerElement)0x0;
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1d18.Data = local_2080.Data;
  local_1d18.Size = (ulong64)local_2078[0];
  EVar5 = ValidateCompactBinaryPackage(&local_1d18,All);
  if (EVar5 != Padding) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1d08,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1d08,0);
    if (local_1d08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d08.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1cf8.Data = local_2080.Data;
  local_1cf8.Size = (ulong64)local_2078[0];
  EVar5 = ValidateCompactBinaryPackage(&local_1cf8,PackageHash|Package|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1ce8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1ce8,0);
    if (local_1ce8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1ce8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2078[0] < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar15 = ~(local_2078[0] - 1U) + local_2078[0];
  iVar6 = local_2078[0];
  if (iVar15 != 0) {
    memmove(local_2080.Data + (int)(local_2078[0] - 1U),
            local_2080.Data + (int)(local_2078[0] - 1U) + 1,(longlong)iVar15);
    iVar6 = local_2078[0];
  }
  local_2078[0] = iVar6 + -1;
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  uStack_1cd0 = uVar12 + 1;
  if ((ulonglong)(longlong)local_2078[0] < uVar12 + 1) {
    uStack_1cd0 = (longlong)local_2078[0];
  }
  local_1cd8 = local_2080.Data;
  local_17b8.Data = local_2080.Data;
  local_17b8.Size = uStack_1cd0;
  EVar5 = ValidateCompactBinaryPackage(&local_17b8,All);
  if (EVar5 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1cc8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1cc8,0);
    if (local_1cc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1cc8.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  uVar11 = uVar12 + 7;
  pFVar1 = pFVar10->CurrentTest;
  local_1cb8 = local_2080.Data;
  uStack_1cb0 = uVar11;
  if ((ulonglong)(longlong)local_2078[0] < uVar11) {
    uStack_1cb0 = (longlong)local_2078[0];
  }
  local_1708.Data = local_2080.Data;
  local_1708.Size = uStack_1cb0;
  EVar5 = ValidateCompactBinaryPackage(&local_1708,All);
  if (EVar5 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1ca8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1ca8,0);
    if (local_1ca8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1ca8.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  uStack_1c90 = uVar11;
  if ((ulonglong)(longlong)local_2078[0] < uVar11) {
    uStack_1c90 = (longlong)local_2078[0];
  }
  local_1c98 = local_2080.Data;
  local_1798.Data = local_2080.Data;
  local_1798.Size = uStack_1c90;
  EVar5 = ValidateCompactBinaryPackage(&local_1798,None);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1c88,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1c88,0);
    if (local_1c88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c88.Data.AllocatorInstance.Data);
    }
  }
  FCbWriter::~FCbWriter(local_e78);
  if (local_2080.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2080.Data);
  }
  FArchive::~FArchive((FArchive *)&local_2128);
  local_21f8 = 0;
  local_2068._padding_ = 0;
  local_2068.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_2068.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_2068.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_2068.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_2068._40_8_ = 0;
  local_2068.ArSerializingDefaults = 0;
  local_2068.ArPortFlags = 0;
  local_2068.ArMaxSerializeSize = 0;
  local_2068.ArUEVer.FileVersionUE4 = 0;
  local_2068.ArUEVer.FileVersionUE5 = 0;
  local_2068.ArLicenseeUEVer = 0;
  local_2068.ArEngineVer.Major = 0;
  local_2068.ArEngineVer.Minor = 0;
  local_2068.ArEngineVer.Patch = 0;
  local_2068.ArEngineVer._6_2_ = 0;
  local_2068.ArEngineVer.Changelist = 0;
  local_2068.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_2068.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_2068.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_2068.SerializedProperty = (FProperty *)0x0;
  local_2068.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_2068.bCustomVersionsAreReset = false;
  local_2068._129_7_ = 0;
  local_2068.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_2068);
  local_1fd0 = &local_1fc0;
  local_1fd8 = 0;
  local_2068._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_1fc8 = 0;
  FArchiveState::SetIsSaving(&local_2068,true);
  (**(code **)(local_2068._padding_ + 0x108))(&local_2068,0);
  local_1fc0.Data = (FScriptContainerElement *)0x0;
  local_1fb8[0] = 0;
  local_1fb8[1] = 0;
  local_2068._padding_ = (longlong)&___7FBufferArchive__6B_;
  FCbWriter::FCbWriter(local_d48,0x100);
  FCbWriter::AddHash(local_d48,&local_fc8);
  FCbWriter::AddObject(local_d48,(FCbObject *)local_2220);
  uVar12 = FCbWriter::GetSaveSize(local_d48);
  FCbWriter::AddBinary(local_d48,&local_f88.CompressedData);
  FCbWriter::AddNull(local_d48);
  FCbWriter::Save(local_d48,(FArchive *)&local_2068);
  pFVar10 = FAutomationTestFramework::Get();
  local_1c78.Data = local_1fc0.Data;
  local_1c78.Size = (ulong64)local_1fb8[0];
  pFVar1 = pFVar10->CurrentTest;
  EVar5 = ValidateCompactBinaryPackage(&local_1c78,All);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1c68,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1c68,0);
    if (local_1c68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c68.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1c58 = local_1fc0.Data;
  uStack_1c50 = (longlong)local_1fb8[0] - (ulonglong)((longlong)local_1fb8[0] != 0);
  local_1788.Data = local_1fc0.Data;
  local_1788.Size = uStack_1c50;
  EVar5 = ValidateCompactBinaryPackage(&local_1788,All);
  if (EVar5 != InvalidPackageFormat) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1c48,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1c48,0);
    if (local_1c48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c48.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1c38 = local_1fc0.Data;
  uStack_1c30 = (longlong)local_1fb8[0] - (ulonglong)((longlong)local_1fb8[0] != 0);
  local_1778.Data = local_1fc0.Data;
  local_1778.Size = uStack_1c30;
  EVar5 = ValidateCompactBinaryPackage(&local_1778,PackageHash|Padding|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1c28,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1c28,0);
    if (local_1c28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c28.Data.AllocatorInstance.Data);
    }
  }
  if ((local_1fb8[0] < 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_1fc0.Data[2] = (FScriptContainerElement)((char)local_1fc0.Data[2] + '\x01');
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1c18.Data = local_1fc0.Data;
  local_1c18.Size = (ulong64)local_1fb8[0];
  EVar5 = ValidateCompactBinaryPackage(&local_1c18,All);
  if (EVar5 != InvalidPackageHash) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1c08,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1c08,0);
    if (local_1c08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c08.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1bf8.Data = local_1fc0.Data;
  local_1bf8.Size = (ulong64)local_1fb8[0];
  EVar5 = ValidateCompactBinaryPackage(&local_1bf8,Package|Padding|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1be8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1be8,0);
    if (local_1be8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1be8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_1fb8[0] < 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_1fc0.Data[2] = (FScriptContainerElement)((char)local_1fc0.Data[2] + -1);
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,1,&local_1fc0,local_1fb8,local_1fb8 + 1);
  local_1fc0.Data[iVar6] = (FScriptContainerElement)0x0;
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1bd8.Data = local_1fc0.Data;
  local_1bd8.Size = (ulong64)local_1fb8[0];
  EVar5 = ValidateCompactBinaryPackage(&local_1bd8,All);
  if (EVar5 != Padding) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1bc8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1bc8,0);
    if (local_1bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1bc8.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1bb8.Data = local_1fc0.Data;
  local_1bb8.Size = (ulong64)local_1fb8[0];
  EVar5 = ValidateCompactBinaryPackage(&local_1bb8,PackageHash|Package|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1ba8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1ba8,0);
    if (local_1ba8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1ba8.Data.AllocatorInstance.Data);
    }
  }
  if (local_1fb8[0] < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar15 = ~(local_1fb8[0] - 1U) + local_1fb8[0];
  iVar6 = local_1fb8[0];
  if (iVar15 != 0) {
    memmove(local_1fc0.Data + (int)(local_1fb8[0] - 1U),
            local_1fc0.Data + (int)(local_1fb8[0] - 1U) + 1,(longlong)iVar15);
    iVar6 = local_1fb8[0];
  }
  local_1fb8[0] = iVar6 + -1;
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  uStack_1b90 = uVar12 + 1;
  if ((ulonglong)(longlong)local_1fb8[0] < uVar12 + 1) {
    uStack_1b90 = (longlong)local_1fb8[0];
  }
  local_1b98 = local_1fc0.Data;
  local_1768.Data = local_1fc0.Data;
  local_1768.Size = uStack_1b90;
  EVar5 = ValidateCompactBinaryPackage(&local_1768,All);
  if (EVar5 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1b88,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1b88);
    if (local_1b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b88.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  uVar11 = uVar12 + 7;
  pFVar1 = pFVar10->CurrentTest;
  local_1b78 = local_1fc0.Data;
  uStack_1b70 = uVar11;
  if ((ulonglong)(longlong)local_1fb8[0] < uVar11) {
    uStack_1b70 = (longlong)local_1fb8[0];
  }
  local_1758.Data = local_1fc0.Data;
  local_1758.Size = uStack_1b70;
  EVar5 = ValidateCompactBinaryPackage(&local_1758,All);
  if (EVar5 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1b68,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1);
    if (local_1b68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b68.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  uStack_1b50 = uVar11;
  if ((ulonglong)(longlong)local_1fb8[0] < uVar11) {
    uStack_1b50 = (longlong)local_1fb8[0];
  }
  local_1b58 = local_1fc0.Data;
  local_1748.Data = local_1fc0.Data;
  local_1748.Size = uStack_1b50;
  EVar5 = ValidateCompactBinaryPackage(&local_1748,None);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1b48,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1b48);
    if (local_1b48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b48.Data.AllocatorInstance.Data);
    }
  }
  FCbWriter::~FCbWriter(local_d48);
  if (local_1fc0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1fc0.Data);
  }
  FArchive::~FArchive((FArchive *)&local_2068);
  pFVar10 = FAutomationTestFramework::Get();
  local_1b38.Data = (void *)0x0;
  local_1b38.Size = 0;
  pFVar1 = pFVar10->CurrentTest;
  EVar5 = ValidateCompactBinaryPackage(&local_1b38,All);
  if (EVar5 != InvalidPackageFormat) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1b28,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1b28);
    if (local_1b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b28.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  local_1b18.Data = (void *)0x0;
  local_1b18.Size = 0;
  pFVar1 = pFVar10->CurrentTest;
  EVar5 = ValidateCompactBinaryPackage(&local_1b18,PackageHash|Padding|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1b08,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1b08);
    if (local_1b08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b08.Data.AllocatorInstance.Data);
    }
  }
  FBufferArchive::FBufferArchive((FBufferArchive *)local_1448);
  FCbWriter::FCbWriter(local_888,0x100);
  FCbWriter::AddHash(local_888,&local_fc8);
  uStack_1af0 = 4;
  local_1af8 = &s_Name;
  local_1738._12_4_ = uStack_1aec;
  local_1738.Size = 4;
  local_1738.DataPtr = "Name";
  FCbWriter::SetName(local_888,&local_1738);
  FCbWriter::AddObject(local_888,(FCbObject *)local_2220);
  FCbWriter::AddNull(local_888);
  FCbWriter::Save(local_888,(FArchive *)local_1448);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1ae8.Data = (void *)local_1448._168_8_;
  local_1ae8.Size = (ulong64)local_1398;
  EVar5 = ValidateCompactBinaryPackage(&local_1ae8,All);
  if (EVar5 != InvalidPackageFormat) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1ad8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1ad8);
    if (local_1ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1ad8.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1ac8.Data = (void *)local_1448._168_8_;
  local_1ac8.Size = (ulong64)local_1398;
  EVar5 = ValidateCompactBinaryPackage(&local_1ac8,PackageHash|Padding|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1ab8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1ab8);
    if (local_1ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1ab8.Data.AllocatorInstance.Data);
    }
  }
  FCbWriter::~FCbWriter(local_888);
  if ((void *)local_1448._168_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1448._168_8_);
  }
  FArchive::~FArchive((FArchive *)local_1448);
  FBufferArchive::FBufferArchive((FBufferArchive *)local_1388);
  FCbWriter::FCbWriter(local_758,0x100);
  local_1aa8 = &s_Name;
  uStack_1aa0 = 4;
  local_1728._12_4_ = uStack_1a9c;
  local_1728.Size = 4;
  local_1728.DataPtr = "Name";
  FCbWriter::SetName(local_758,&local_1728);
  FCbWriter::AddHash(local_758,&local_fc8);
  FCbWriter::AddObject(local_758,(FCbObject *)local_2220);
  FCbWriter::AddNull(local_758);
  FCbWriter::Save(local_758,(FArchive *)local_1388);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1a98.Data = (void *)local_1388._168_8_;
  local_1a98.Size = (ulong64)local_12d8;
  EVar5 = ValidateCompactBinaryPackage(&local_1a98,All);
  if (EVar5 != InvalidPackageFormat) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1a88,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1a88);
    if (local_1a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a88.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1a78.Data = (void *)local_1388._168_8_;
  local_1a78.Size = (ulong64)local_12d8;
  EVar5 = ValidateCompactBinaryPackage(&local_1a78,PackageHash|Padding|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1a68,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1a68);
    if (local_1a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a68.Data.AllocatorInstance.Data);
    }
  }
  FCbWriter::~FCbWriter(local_758);
  if ((void *)local_1388._168_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1388._168_8_);
  }
  FArchive::~FArchive((FArchive *)local_1388);
  FBufferArchive::FBufferArchive((FBufferArchive *)local_12c8);
  FCbWriter::FCbWriter(local_c18,0x100);
  FCbWriter::AddHash(local_c18,&local_fc8);
  FCbWriter::AddObject(local_c18,(FCbObject *)local_2220);
  FCbWriter::AddBinaryAttachment(local_c18,&local_fb4);
  local_1a58 = &s_Name;
  uStack_1a50 = 4;
  local_1718._12_4_ = uStack_1a4c;
  local_1718.Size = 4;
  local_1718.DataPtr = "Name";
  this_00 = FCbWriter::SetName(local_c18,&local_1718);
  FCbWriter::AddBinary(this_00,(FSharedBuffer *)local_2228);
  FCbWriter::AddNull(local_c18);
  FCbWriter::Save(local_c18,(FArchive *)local_12c8);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1a48.Data = (void *)local_12c8._168_8_;
  local_1a48.Size = (ulong64)local_1218;
  EVar5 = ValidateCompactBinaryPackage(&local_1a48,All);
  if (EVar5 != InvalidPackageFormat) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1a38,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1a38);
    if (local_1a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a38.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1a28.Data = (void *)local_12c8._168_8_;
  local_1a28.Size = (ulong64)local_1218;
  EVar5 = ValidateCompactBinaryPackage(&local_1a28,PackageHash|Padding|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1a18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1a18);
    if (local_1a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a18.Data.AllocatorInstance.Data);
    }
  }
  FCbWriter::~FCbWriter(local_c18);
  if ((void *)local_12c8._168_8_ != (void *)0x0) {
    FMemory::Free((void *)local_12c8._168_8_);
  }
  FArchive::~FArchive((FArchive *)local_12c8);
  FBufferArchive::FBufferArchive((FBufferArchive *)local_1208);
  FCbWriter::FCbWriter(local_ae8,0x100);
  FCbWriter::AddHash(local_ae8,&local_fc8);
  FCbWriter::AddObject(local_ae8,(FCbObject *)local_2220);
  FCbWriter::AddHash(local_ae8,&local_fc8);
  FCbWriter::AddObject(local_ae8,(FCbObject *)local_2220);
  FCbWriter::AddNull(local_ae8);
  FCbWriter::Save(local_ae8,(FArchive *)local_1208);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1a08.Data = (void *)local_1208._168_8_;
  local_1a08.Size = (ulong64)local_1158;
  EVar5 = ValidateCompactBinaryPackage(&local_1a08,All);
  if (EVar5 != MultiplePackageObjects) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_19f8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_19f8);
    if (local_19f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_19f8.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_19e8.Data = (void *)local_1208._168_8_;
  local_19e8.Size = (ulong64)local_1158;
  EVar5 = ValidateCompactBinaryPackage(&local_19e8,PackageHash|Padding|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_19d8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_19d8);
    if (local_19d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_19d8.Data.AllocatorInstance.Data);
    }
  }
  FCbWriter::~FCbWriter(local_ae8);
  if ((void *)local_1208._168_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1208._168_8_);
  }
  FArchive::~FArchive((FArchive *)local_1208);
  FBufferArchive::FBufferArchive((FBufferArchive *)local_1148);
  FCbWriter::FCbWriter(local_9b8,0x100);
  FCbWriter::AddBinaryAttachment(local_9b8,&local_fb4);
  FCbWriter::AddBinary(local_9b8,(FSharedBuffer *)local_2228);
  FCbWriter::AddBinaryAttachment(local_9b8,&local_fb4);
  FCbWriter::AddBinary(local_9b8,(FSharedBuffer *)local_2228);
  FCbWriter::AddNull(local_9b8);
  FCbWriter::Save(local_9b8,(FArchive *)local_1148);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_19c8.Data = (void *)local_1148._168_8_;
  local_19c8.Size = (ulong64)local_1098;
  EVar5 = ValidateCompactBinaryPackage(&local_19c8,All);
  if (EVar5 != DuplicateAttachments) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_19b8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_19b8);
    if (local_19b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_19b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_19a8.Data = (void *)local_1148._168_8_;
  local_19a8.Size = (ulong64)local_1098;
  EVar5 = ValidateCompactBinaryPackage(&local_19a8,PackageHash|Padding|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1998,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1998);
    if (local_1998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1998.Data.AllocatorInstance.Data);
    }
  }
  FCbWriter::~FCbWriter(local_9b8);
  if ((void *)local_1148._168_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1148._168_8_);
  }
  FArchive::~FArchive((FArchive *)local_1148);
  FBufferArchive::FBufferArchive((FBufferArchive *)local_1088);
  FCbWriter::FCbWriter(local_3c8,0x100);
  FCbWriter::AddBinary(local_3c8,&local_f88.CompressedData);
  FCbWriter::AddBinary(local_3c8,&local_f88.CompressedData);
  FCbWriter::AddNull(local_3c8);
  FCbWriter::Save(local_3c8,(FArchive *)local_1088);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1988.Data = (void *)local_1088._168_8_;
  local_1988.Size = (ulong64)local_fd8;
  EVar5 = ValidateCompactBinaryPackage(&local_1988,All);
  if (EVar5 != DuplicateAttachments) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1978,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1978);
    if (local_1978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1978.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1968.Data = (void *)local_1088._168_8_;
  local_1968.Size = (ulong64)local_fd8;
  EVar5 = ValidateCompactBinaryPackage(&local_1968,PackageHash|Padding|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1958,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1958);
    if (local_1958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1958.Data.AllocatorInstance.Data);
    }
  }
  FCbWriter::~FCbWriter(local_3c8);
  if ((void *)local_1088._168_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1088._168_8_);
  }
  FArchive::~FArchive((FArchive *)local_1088);
  FBufferArchive::FBufferArchive((FBufferArchive *)local_1688);
  FCbWriter::FCbWriter(local_628,0x100);
  FCbWriter::AddBinaryAttachment(local_628,&local_fb4);
  FCbWriter::AddBinary(local_628,(FSharedBuffer *)local_2228);
  FCbWriter::AddBinary(local_628,&local_f88.CompressedData);
  FCbWriter::AddNull(local_628);
  FCbWriter::Save(local_628,(FArchive *)local_1688);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1948.Data = (void *)local_1688._168_8_;
  local_1948.Size = (ulong64)local_15d8;
  EVar5 = ValidateCompactBinaryPackage(&local_1948,All);
  if (EVar5 != DuplicateAttachments) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1938,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1938);
    if (local_1938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1938.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1928.Data = (void *)local_1688._168_8_;
  local_1928.Size = (ulong64)local_15d8;
  EVar5 = ValidateCompactBinaryPackage(&local_1928,PackageHash|Padding|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1918,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1918);
    if (local_1918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1918.Data.AllocatorInstance.Data);
    }
  }
  FCbWriter::~FCbWriter(local_628);
  if ((void *)local_1688._168_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1688._168_8_);
  }
  FArchive::~FArchive((FArchive *)local_1688);
  FCbWriter::FCbWriter(local_f08,0x20);
  FCbWriter::BeginObject(local_f08);
  FCbWriter::EndObject(local_f08);
  pFVar9 = FCbWriter::Save(local_f08,(FCbFieldIterator *)local_16a8);
  FCbField::AsObject((FCbField *)pFVar9,(FCbObject *)local_1838);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_16a8 + 0x10));
  FCbObjectView::GetHash((FCbObjectView *)local_1838,&local_f70);
  FBufferArchive::FBufferArchive((FBufferArchive *)local_15c8);
  FCbWriter::FCbWriter(local_298,0x100);
  FCbWriter::AddHash(local_298,&local_f70);
  FCbWriter::AddObject(local_298,(FCbObject *)local_1838);
  FCbWriter::AddNull(local_298);
  FCbWriter::Save(local_298,(FArchive *)local_15c8);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1908.Data = (void *)local_15c8._168_8_;
  local_1908.Size = (ulong64)local_1518;
  EVar5 = ValidateCompactBinaryPackage(&local_1908,All);
  if (EVar5 != NullPackageObject) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18f8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18f8);
    if (local_18f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18f8.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_18e8.Data = (void *)local_15c8._168_8_;
  local_18e8.Size = (ulong64)local_1518;
  EVar5 = ValidateCompactBinaryPackage(&local_18e8,PackageHash|Padding|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18d8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18d8);
    if (local_18d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18d8.Data.AllocatorInstance.Data);
    }
  }
  FCbWriter::~FCbWriter(local_298);
  if ((void *)local_15c8._168_8_ != (void *)0x0) {
    FMemory::Free((void *)local_15c8._168_8_);
  }
  FArchive::~FArchive((FArchive *)local_15c8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_1838 + 0x10));
  FCbWriter::~FCbWriter(local_f08);
  FBufferArchive::FBufferArchive((FBufferArchive *)local_1508);
  FCbWriter::FCbWriter(local_168,0x100);
  local_18c8.Data = (void *)0x0;
  local_18c8.Size = 0;
  pFVar7 = FBlake3::HashBuffer(&local_e98,&local_18c8);
  local_fa0.Hash._0_8_ = *(undefined8 *)pFVar7->Hash;
  local_fa0.Hash._8_8_ = *(undefined8 *)(pFVar7->Hash + 8);
  local_fa0.Hash._16_4_ = *(undefined4 *)(pFVar7->Hash + 0x10);
  FCbWriter::AddBinaryAttachment(local_168,&local_fa0);
  FCbWriter::AddBinary(local_168,(void *)0x0,0);
  FCbWriter::AddNull(local_168);
  FCbWriter::Save(local_168,(FArchive *)local_1508);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_18b8.Data = (void *)local_1508._168_8_;
  local_18b8.Size = (ulong64)local_1458;
  EVar5 = ValidateCompactBinaryPackage(&local_18b8,All);
  if (EVar5 != NullPackageAttachment) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18a8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18a8,0);
    if (local_18a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar1 = pFVar10->CurrentTest;
  local_1898.Data = (void *)local_1508._168_8_;
  local_1898.Size = (ulong64)local_1458;
  EVar5 = ValidateCompactBinaryPackage(&local_1898,PackageHash|Padding|Format|Names|Default);
  if (EVar5 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1888,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1888,0);
    if (local_1888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1888.Data.AllocatorInstance.Data);
    }
  }
  FCbWriter::~FCbWriter(local_168);
  if ((void *)local_1508._168_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1508._168_8_);
  }
  FArchive::~FArchive((FArchive *)local_1508);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_2220 + 0x10));
  FCbWriter::~FCbWriter(local_f58);
  FCompositeBuffer::~FCompositeBuffer(&local_f88.CompressedData);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_2228);
  return;
}

