// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// GetTestFlags @ 141cbb270

EAutomationTestFlags __thiscall FCbValidateTest::GetTestFlags(FCbValidateTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbb2b0

bool __thiscall FCbValidateTest::IsStressTest(FCbValidateTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbb2f0

uint __thiscall FCbValidateTest::GetRequiredDeviceNum(FCbValidateTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbb300

FString * __thiscall
FCbValidateTest::GetTestSourceFileName(FCbValidateTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryValidationTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbb330

int __thiscall FCbValidateTest::GetTestSourceFileLine(FCbValidateTest *this)

{
  return 0xf;
}

// GetTests @ 141cbb340

/* WARNING: Removing unreachable block (ram,0x000141cbb4be) */

void __thiscall
FCbValidateTest::GetTests
          (FCbValidateTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cbb4e0

bool __thiscall FCbValidateTest::RunTest(FCbValidateTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbb510

FString * __thiscall
FCbValidateTest::GetBeautifiedTestName(FCbValidateTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbValidateTest @ 141ce4400

FCbValidateTest * __thiscall
FCbValidateTest::FCbValidateTest(FCbValidateTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbValidateTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::ValidateCompactBinary");
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

// operator() @ 141cf2c50

ECbValidateError __thiscall
`FCbValidateTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,initializer_list<unsigned_char> *param_1,ECbFieldType param_2)

{
  ECbValidateError EVar1;
  TMemoryView<void_const_> local_18;
  
  local_18.Data = param_1->_First;
  local_18.Size = (ulong64)((int)param_1->_Last - (int)local_18.Data);
  EVar1 = ValidateCompactBinary(&local_18,All,param_2);
  return EVar1;
}

// operator() @ 141cf60c0

ECbValidateError __thiscall
`FCbValidateTest::TestBody'::__l2::<lambda_2>::operator()
          (void *this,initializer_list<unsigned_char> *param_1,ECbValidateMode param_2,
          ECbFieldType param_3)

{
  ECbValidateError EVar1;
  TMemoryView<void_const_> local_18;
  
  local_18.Data = param_1->_First;
  local_18.Size = (ulong64)((int)param_1->_Last - (int)local_18.Data);
  EVar1 = ValidateCompactBinary(&local_18,param_2,param_3);
  return EVar1;
}

// TestBody @ 141d0a160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCbValidateTest::TestBody(FCbValidateTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  ECbValidateError EVar3;
  FAutomationTestFramework *pFVar4;
  undefined1 auStack_11e8 [32];
  TMemoryView<void_const_> local_11c8;
  undefined1 local_11b8 [4];
  ECbValidateError local_11b4;
  ECbValidateError local_11b0;
  uchar local_11ac [32];
  uchar local_118c [4];
  uchar local_1188 [4];
  uchar local_1184 [4];
  uchar local_1180 [4];
  uchar local_117c [4];
  uchar local_1178 [4];
  uchar local_1174 [4];
  uchar local_1170 [4];
  uchar local_116c [4];
  uchar local_1168 [4];
  uchar local_1164 [4];
  uchar local_1160 [4];
  uchar local_115c [4];
  uchar local_1158 [4];
  uchar local_1154 [4];
  uchar local_1150 [4];
  uchar local_114c [4];
  uchar local_1148 [4];
  uchar local_1144 [4];
  uchar local_1140 [4];
  uchar local_113c [4];
  uchar local_1138 [4];
  uchar local_1134 [4];
  uchar local_1130 [4];
  uchar local_112c [4];
  uchar local_1128 [4];
  uchar local_1124 [4];
  uchar local_1120 [4];
  uchar local_111c [4];
  uchar local_1118 [4];
  uchar local_1114 [16];
  uchar local_1104 [4];
  uchar local_1100 [4];
  uchar local_10fc [4];
  uchar local_10f8 [4];
  uchar local_10f4 [4];
  uchar local_10f0 [4];
  uchar local_10ec [4];
  uchar local_10e8 [4];
  uchar local_10e4 [4];
  uchar local_10e0 [4];
  uchar local_10dc [4];
  uchar local_10d8 [4];
  uchar local_10d4 [4];
  uchar local_10d0 [4];
  uchar local_10cc [4];
  uchar local_10c8 [4];
  uchar local_10c4 [4];
  uchar local_10c0 [4];
  uchar local_10bc [4];
  uchar local_10b8 [4];
  uchar local_10b4 [4];
  uchar local_10b0 [88];
  FString local_1058;
  FString local_1048;
  FString local_1038;
  FString local_1028;
  FString local_1018;
  FString local_1008;
  FString local_ff8;
  FString local_fe8;
  FString local_fd8;
  FString local_fc8;
  FString local_fb8;
  FString local_fa8;
  FString local_f98;
  FString local_f88;
  FString local_f78;
  FString local_f68;
  FString local_f58;
  FString local_f48;
  FString local_f38;
  FString local_f28;
  FString local_f18;
  FString local_f08;
  FString local_ef8;
  FString local_ee8;
  FString local_ed8;
  FString local_ec8;
  FString local_eb8;
  FString local_ea8;
  FString local_e98;
  FString local_e88;
  FString local_e78;
  FString local_e68;
  FString local_e58;
  FString local_e48;
  FString local_e38;
  FString local_e28;
  FString local_e18;
  FString local_e08;
  FString local_df8;
  FString local_de8;
  FString local_dd8;
  FString local_dc8;
  FString local_db8;
  FString local_da8;
  FString local_d98;
  FString local_d88;
  FString local_d78;
  FString local_d68;
  FString local_d58;
  FString local_d48;
  FString local_d38;
  FString local_d28;
  FString local_d18;
  FString local_d08;
  FString local_cf8;
  FString local_ce8;
  FString local_cd8;
  FString local_cc8;
  FString local_cb8;
  FString local_ca8;
  FString local_c98;
  FString local_c88;
  FString local_c78;
  FString local_c68;
  FString local_c58;
  FString local_c48;
  FString local_c38;
  FString local_c28;
  FString local_c18;
  FString local_c08;
  FString local_bf8;
  FString local_be8;
  FString local_bd8;
  FString local_bc8;
  FString local_bb8;
  FString local_ba8;
  FString local_b98;
  FString local_b88;
  FString local_b78;
  FString local_b68;
  FString local_b58;
  FString local_b48;
  FString local_b38;
  FString local_b28;
  FString local_b18;
  FString local_b08;
  FString local_af8;
  FString local_ae8;
  FString local_ad8;
  FString local_ac8;
  FString local_ab8;
  FString local_aa8;
  FString local_a98;
  FString local_a88;
  FString local_a78;
  FString local_a68;
  FString local_a58;
  FString local_a48;
  FString local_a38;
  FString local_a28;
  FString local_a18;
  FString local_a08;
  FString local_9f8;
  FString local_9e8;
  FString local_9d8;
  FString local_9c8;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  FString local_978;
  FString local_968;
  FString local_958;
  FString local_948;
  FString local_938;
  FString local_928;
  FString local_918;
  FString local_908;
  FString local_8f8;
  FString local_8e8;
  FString local_8d8;
  FString local_8c8;
  FString local_8b8;
  FString local_8a8;
  FString local_898;
  FString local_888;
  FString local_878;
  FString local_868;
  FString local_858;
  FString local_848;
  FString local_838;
  FString local_828;
  FString local_818;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  FString local_7d8;
  FString local_7c8;
  FString local_7b8;
  FString local_7a8;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  uchar local_498 [8];
  uchar local_490 [8];
  uchar local_488 [8];
  uchar local_480 [8];
  uchar local_478 [8];
  uchar local_470 [8];
  uchar local_468 [8];
  uchar local_460 [8];
  uchar local_458 [8];
  uchar local_450 [8];
  uchar local_448 [8];
  uchar local_440 [32];
  uchar local_420 [16];
  uchar local_410 [16];
  uchar local_400 [16];
  uchar local_3f0 [16];
  uchar local_3e0 [16];
  uchar local_3d0 [8];
  uchar local_3c8 [8];
  uchar local_3c0 [8];
  uchar local_3b8 [8];
  uchar local_3b0 [8];
  uchar local_3a8 [8];
  uchar local_3a0 [8];
  uchar local_398 [8];
  uchar local_390 [8];
  uchar local_388 [8];
  uchar local_380 [8];
  uchar local_378 [8];
  uchar local_370 [8];
  uchar local_368 [8];
  uchar local_360 [8];
  uchar local_358 [8];
  uchar local_350 [8];
  uchar local_348 [8];
  uchar local_340 [8];
  uchar local_338 [8];
  uchar local_330 [8];
  uchar local_328 [8];
  uchar local_320 [8];
  uchar local_318 [8];
  uchar local_310 [8];
  uchar local_308 [8];
  uchar local_300 [8];
  uchar local_2f8 [96];
  uchar local_298 [16];
  uchar local_288 [16];
  uchar local_278 [16];
  uchar local_268 [16];
  uchar local_258 [16];
  uchar local_248 [16];
  uchar local_238 [16];
  uchar local_228 [16];
  uchar local_218 [16];
  uchar local_208 [16];
  uchar local_1f8 [16];
  uchar local_1e8 [16];
  uchar local_1d8 [16];
  uchar local_1c8 [16];
  uchar local_1b8 [16];
  uchar local_1a8 [16];
  uchar local_198 [16];
  uchar local_188 [16];
  uchar local_178 [16];
  uchar local_168 [56];
  uchar local_130 [24];
  uchar local_118 [24];
  uchar local_100 [24];
  uchar local_e8 [24];
  uchar local_d0 [24];
  uchar local_b8 [24];
  uchar local_a0 [24];
  uchar local_88 [24];
  uchar local_70 [24];
  uchar local_58 [24];
  uchar local_40 [24];
  uchar local_28 [24];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_11e8;
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Data = (void *)0x0;
  local_11c8.Size = 0;
  pFVar1 = pFVar4->CurrentTest;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_b78,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_b78,0);
    if (local_b78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b78.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Data = (void *)0x0;
  local_11c8.Size = 0;
  pFVar1 = pFVar4->CurrentTest;
  EVar3 = ValidateCompactBinary(&local_11c8,None,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_b68,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_b68,0);
    if (local_b68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b68.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac;
  local_11ac[0] = '\x01';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_b58,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_b58,0);
    if (local_b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b58.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10c8;
  local_10c8[0] = 0x81;
  local_10c8[1] = '\x01';
  local_10c8[2] = 0x4e;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_b48,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_b48,0);
    if (local_b48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b48.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 1;
  local_11ac[1] = 0x81;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_b38,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_b38,0);
    if (local_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b38.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1120;
  local_1120[0] = 0x81;
  local_1120[1] = '\x01';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_b28,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_b28,0);
    if (local_b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b28.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_111c;
  local_111c[0] = 0x81;
  local_111c[1] = 0x80;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_e08,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_e08,0);
    if (local_e08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e08.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10c4;
  local_10c4[0] = 0x81;
  local_10c4[1] = 0x80;
  local_10c4[2] = 0x80;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_b08,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_b08,0);
    if (local_b08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b08.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1118;
  local_1118[0] = '\x02';
  local_1118[1] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_af8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_af8,0);
    if (local_af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_af8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 2;
  local_11ac[2] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,Object);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_ae8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_ae8,0);
    if (local_ae8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ae8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000009;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_218;
  local_218[0] = '\x02';
  local_218[1] = '\a';
  local_218[2] = 0x81;
  local_218[3] = '\x01';
  local_218[4] = 'N';
  local_218[5] = 0x88;
  local_218[6] = '\x01';
  local_218[7] = 'I';
  local_218[8] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_ad8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_ad8,0);
    if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000008;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_2f8 + 0x18;
  local_2f8[0x18] = '\a';
  local_2f8[0x19] = 0x81;
  local_2f8[0x1a] = '\x01';
  local_2f8[0x1b] = 'N';
  local_2f8[0x1c] = 0x88;
  local_2f8[0x1d] = '\x01';
  local_2f8[0x1e] = 'I';
  local_2f8[0x1f] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,Object);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_ac8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_ac8,0);
    if (local_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ac8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 3;
  local_11ac[3] = 2;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_ab8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_ab8,0);
    if (local_ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ab8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Data = (void *)0x0;
  local_11c8.Size = 0;
  pFVar1 = pFVar4->CurrentTest;
  EVar3 = ValidateCompactBinary(&local_11c8,All,Object);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_aa8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_aa8,0);
    if (local_aa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_aa8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1114 + 0xc;
  local_1114[0xc] = '\x02';
  local_1114[0xd] = '\x01';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_a98,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_a98,0);
    if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a98.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 4;
  local_11ac[4] = 1;
  EVar3 = ValidateCompactBinary(&local_11c8,All,Object);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_a88,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_a88,0);
    if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a88.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000005;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_3a0;
  local_3a0[0] = '\x02';
  local_3a0[1] = '\x03';
  local_3a0[2] = 0x8a;
  local_3a0[3] = '\x01';
  local_3a0[4] = 0x4e;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_a78,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_a78,0);
    if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a78.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0x1c;
  local_10b0[0x1c] = '\x03';
  local_10b0[0x1d] = 0x8a;
  local_10b0[0x1e] = '\x01';
  local_10b0[0x1f] = 'N';
  EVar3 = ValidateCompactBinary(&local_11c8,All,Object);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_a68,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_a68,0);
    if (local_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a68.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000005;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_398;
  local_398[0] = '\x03';
  local_398[1] = '\x03';
  local_398[2] = 0x81;
  local_398[3] = '\x01';
  local_398[4] = 0x4e;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_a58,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_a58,0);
    if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a58.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0x48;
  local_10b0[0x48] = '\x03';
  local_10b0[0x49] = 0x81;
  local_10b0[0x4a] = '\x01';
  local_10b0[0x4b] = 'N';
  EVar3 = ValidateCompactBinary(&local_11c8,All,UniformObject);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_a48,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_a48,0);
    if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a48.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 5;
  local_11ac[5] = 3;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_a38,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_a38,0);
    if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a38.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Data = (void *)0x0;
  local_11c8.Size = 0;
  pFVar1 = pFVar4->CurrentTest;
  EVar3 = ValidateCompactBinary(&local_11c8,All,UniformObject);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_a28,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_a28,0);
    if (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a28.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1104;
  local_1104[0] = '\x03';
  local_1104[1] = '\x01';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_a18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_a18,0);
    if (local_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a18.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 6;
  local_11ac[6] = 1;
  EVar3 = ValidateCompactBinary(&local_11c8,All,UniformObject);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_a08,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_a08,0);
    if (local_a08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a08.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000005;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_390;
  local_390[0] = '\x03';
  local_390[1] = '\x03';
  local_390[2] = 0x8a;
  local_390[3] = '\x01';
  local_390[4] = 0x4e;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_9f8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_9f8,0);
    if (local_9f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9f8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0x4c;
  local_10b0[0x4c] = '\x03';
  local_10b0[0x4d] = 0x8a;
  local_10b0[0x4e] = '\x01';
  local_10b0[0x4f] = 'N';
  EVar3 = ValidateCompactBinary(&local_11c8,All,UniformObject);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_9e8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_9e8,0);
    if (local_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9e8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10c0;
  local_10c0[0] = '\x04';
  local_10c0[1] = '\x01';
  local_10c0[2] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_9d8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_9d8,0);
    if (local_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9d8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_117c;
  local_117c[0] = '\x01';
  local_117c[1] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,Array);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_9c8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_9c8,0);
    if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000006;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_340;
  builtin_memcpy(local_340,"\x04\x04\x02\x01\b",6);
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_9b8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_9b8,0);
    if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000005;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_388;
  builtin_memcpy(local_388,"\x04\x02\x01\b",5);
  EVar3 = ValidateCompactBinary(&local_11c8,All,Array);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_9a8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_9a8,0);
    if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 7;
  local_11ac[7] = 4;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_998,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_998,0);
    if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_998.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Data = (void *)0x0;
  local_11c8.Size = 0;
  pFVar1 = pFVar4->CurrentTest;
  EVar3 = ValidateCompactBinary(&local_11c8,All,Array);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_988,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_988,0);
    if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_988.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1178;
  local_1178[0] = '\x04';
  local_1178[1] = '\x01';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_978,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_978,0);
    if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_978.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 8;
  local_11ac[8] = 1;
  EVar3 = ValidateCompactBinary(&local_11c8,All,Array);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_968,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_968,0);
    if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_968.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0;
  builtin_memcpy(local_10b0,"\x04\x02\x01\n",4);
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_958,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_958,0);
    if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10bc;
  local_10bc[0] = '\x02';
  local_10bc[1] = '\x01';
  local_10bc[2] = 10;
  EVar3 = ValidateCompactBinary(&local_11c8,All,Array);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_948,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_948,0);
    if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_948.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000005;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_380;
  builtin_memcpy(local_380,"\x05\x03\x01\b",5);
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_938,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_938,0);
    if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_938.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 4;
  builtin_memcpy(local_10b0 + 4,"\x03\x01\b",4);
  EVar3 = ValidateCompactBinary(&local_11c8,All,UniformArray);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_928,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_928,0);
    if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_928.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 9;
  local_11ac[9] = 5;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_918,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_918,0);
    if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_918.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Data = (void *)0x0;
  local_11c8.Size = 0;
  pFVar1 = pFVar4->CurrentTest;
  EVar3 = ValidateCompactBinary(&local_11c8,All,UniformArray);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_908,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_908,0);
    if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_908.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1174;
  local_1174[0] = '\x05';
  local_1174[1] = '\x01';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_8f8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_8f8,0);
    if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 10;
  local_11ac[10] = 1;
  EVar3 = ValidateCompactBinary(&local_11c8,All,UniformArray);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_8e8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_8e8,0);
    if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 8;
  builtin_memcpy(local_10b0 + 8,"\x05\x02\x01\n",4);
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_8d8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_8d8,0);
    if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b8;
  local_10b8[0] = '\x02';
  local_10b8[1] = '\x01';
  local_10b8[2] = 10;
  EVar3 = ValidateCompactBinary(&local_11c8,All,UniformArray);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_8c8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_8c8,0);
    if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1170;
  local_1170[0] = '\x06';
  local_1170[1] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_8b8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_8b8,0);
    if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0xb;
  local_11ac[0xb] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,Binary);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_8a8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_8a8,0);
    if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b4;
  local_10b4[0] = '\x06';
  local_10b4[1] = '\x01';
  local_10b4[2] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_898,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_898,0);
    if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_898.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_116c;
  local_116c[0] = '\x01';
  local_116c[1] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,Binary);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_888,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_888,0);
    if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_888.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0xc;
  local_11ac[0xc] = 6;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_878,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_878,0);
    if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_878.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Data = (void *)0x0;
  local_11c8.Size = 0;
  pFVar1 = pFVar4->CurrentTest;
  EVar3 = ValidateCompactBinary(&local_11c8,All,Binary);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_868,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_868,0);
    if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1168;
  local_1168[0] = '\x06';
  local_1168[1] = '\x01';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_858,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_858,0);
    if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_858.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0xd;
  local_11ac[0xd] = 1;
  EVar3 = ValidateCompactBinary(&local_11c8,All,Binary);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_848,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_848,0);
    if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_848.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1164;
  local_1164[0] = '\a';
  local_1164[1] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_838,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_838,0);
    if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_838.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0xe;
  local_11ac[0xe] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,String);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_828,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_828,0);
    if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_828.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1100;
  local_1100[0] = '\a';
  local_1100[1] = '\x01';
  local_1100[2] = 0x53;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_b18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_b18,0);
    if (local_b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b18.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1160;
  local_1160[0] = '\x01';
  local_1160[1] = 'S';
  EVar3 = ValidateCompactBinary(&local_11c8,All,String);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_818,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_818,0);
    if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_818.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0xf;
  local_11ac[0xf] = 7;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_808,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_808,0);
    if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_808.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Data = (void *)0x0;
  local_11c8.Size = 0;
  pFVar1 = pFVar4->CurrentTest;
  EVar3 = ValidateCompactBinary(&local_11c8,All,String);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_7f8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_7f8,0);
    if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_115c;
  local_115c[0] = '\a';
  local_115c[1] = '\x01';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_7e8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_7e8,0);
    if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0x10;
  local_11ac[0x10] = 1;
  EVar3 = ValidateCompactBinary(&local_11c8,All,String);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_7d8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_7d8,0);
    if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1158;
  local_1158[0] = '\b';
  local_1158[1] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_7c8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_7c8,0);
    if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1188;
  local_1188[0] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,IntegerPositive);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_7b8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_7b8,0);
    if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10fc;
  local_10fc[0] = '\b';
  local_10fc[1] = 0x80;
  local_10fc[2] = 0x80;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_7a8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_7a8,0);
    if (local_7a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1154;
  local_1154[0] = 0x80;
  local_1154[1] = 0x80;
  EVar3 = ValidateCompactBinary(&local_11c8,All,IntegerPositive);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_798,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_798,0);
    if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_798.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1188 + 2;
  local_1188[2] = 8;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_788,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_788,0);
    if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_788.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Data = (void *)0x0;
  local_11c8.Size = 0;
  pFVar1 = pFVar4->CurrentTest;
  EVar3 = ValidateCompactBinary(&local_11c8,All,IntegerPositive);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_778,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_778,0);
    if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_778.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1150;
  local_1150[0] = '\b';
  local_1150[1] = 0x80;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_768,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_768,0);
    if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_768.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1188 + 1;
  local_1188[1] = 0x80;
  EVar3 = ValidateCompactBinary(&local_11c8,All,IntegerPositive);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_758,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_758,0);
    if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_758.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000009;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_2f8 + 0x50;
  local_2f8[0x50] = '\b';
  local_2f8[0x51] = 0xff;
  local_2f8[0x52] = '\0';
  local_2f8[0x53] = '\0';
  local_2f8[0x54] = '\0';
  local_2f8[0x55] = '\0';
  local_2f8[0x56] = '\0';
  local_2f8[0x57] = '\0';
  local_2f8[0x58] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_748,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_748,0);
    if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_748.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000008;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_2f8 + 0x20;
  local_2f8[0x20] = 0xff;
  local_2f8[0x21] = '\0';
  local_2f8[0x22] = '\0';
  local_2f8[0x23] = '\0';
  local_2f8[0x24] = '\0';
  local_2f8[0x25] = '\0';
  local_2f8[0x26] = '\0';
  local_2f8[0x27] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,IntegerPositive);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_738,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_738,0);
    if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_114c;
  local_114c[0] = '\t';
  local_114c[1] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_728,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_728,0);
    if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_728.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0x11;
  local_11ac[0x11] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,IntegerNegative);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_718,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_718,0);
    if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_718.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10f8;
  local_10f8[0] = '\t';
  local_10f8[1] = 0x80;
  local_10f8[2] = 0x80;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_708,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_708,0);
    if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_708.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1148;
  local_1148[0] = 0x80;
  local_1148[1] = 0x80;
  EVar3 = ValidateCompactBinary(&local_11c8,All,IntegerNegative);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_6f8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_6f8,0);
    if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0x12;
  local_11ac[0x12] = 9;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_6e8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_6e8,0);
    if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Data = (void *)0x0;
  local_11c8.Size = 0;
  pFVar1 = pFVar4->CurrentTest;
  EVar3 = ValidateCompactBinary(&local_11c8,All,IntegerNegative);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_6d8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_6d8,0);
    if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1144;
  local_1144[0] = '\t';
  local_1144[1] = 0x80;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_6c8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_6c8,0);
    if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0x13;
  local_11ac[0x13] = 0x80;
  EVar3 = ValidateCompactBinary(&local_11c8,All,IntegerNegative);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_6b8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_6b8,0);
    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000009;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_298;
  local_298[0] = '\t';
  local_298[1] = 0xff;
  local_298[2] = '\0';
  local_298[3] = '\0';
  local_298[4] = '\0';
  local_298[5] = '\0';
  local_298[6] = '\0';
  local_298[7] = '\0';
  local_298[8] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_6a8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_6a8,0);
    if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000008;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_2f8 + 0x28;
  local_2f8[0x28] = 0xff;
  local_2f8[0x29] = '\0';
  local_2f8[0x2a] = '\0';
  local_2f8[0x2b] = '\0';
  local_2f8[0x2c] = '\0';
  local_2f8[0x2d] = '\0';
  local_2f8[0x2e] = '\0';
  local_2f8[0x2f] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,IntegerNegative);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_698,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_698,0);
    if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_698.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000005;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_378;
  local_378[0] = '\n';
  local_378[1] = '\0';
  local_378[2] = '\0';
  local_378[3] = '\0';
  local_378[4] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_688,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_688,0);
    if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0xc;
  local_10b0[0xc] = '\0';
  local_10b0[0xd] = '\0';
  local_10b0[0xe] = '\0';
  local_10b0[0xf] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,Float32);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_678,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_678,0);
    if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_678.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0x10;
  local_10b0[0x10] = '\n';
  local_10b0[0x11] = '\0';
  local_10b0[0x12] = '\0';
  local_10b0[0x13] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_668,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_668,0);
    if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_668.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10f4;
  local_10f4[0] = '\0';
  local_10f4[1] = '\0';
  local_10f4[2] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,Float32);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_658,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_658,0);
    if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000009;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_288;
  local_288[0] = '\v';
  local_288[1] = '?';
  local_288[2] = 0xff;
  local_288[3] = 0xff;
  local_288[4] = 0xff;
  local_288[5] = 0xf0;
  local_288[6] = '\0';
  local_288[7] = '\0';
  local_288[8] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_648,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_648,0);
    if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_648.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000008;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_2f8 + 0x30;
  local_2f8[0x30] = '?';
  local_2f8[0x31] = 0xff;
  local_2f8[0x32] = 0xff;
  local_2f8[0x33] = 0xff;
  local_2f8[0x34] = 0xf0;
  local_2f8[0x35] = '\0';
  local_2f8[0x36] = '\0';
  local_2f8[0x37] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,Float64);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_638,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_638,0);
    if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_638.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000008;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_2f8 + 0x38;
  local_2f8[0x38] = '\v';
  local_2f8[0x39] = '\0';
  local_2f8[0x3a] = '\0';
  local_2f8[0x3b] = '\0';
  local_2f8[0x3c] = '\0';
  local_2f8[0x3d] = '\0';
  local_2f8[0x3e] = '\0';
  local_2f8[0x3f] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_628,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_628,0);
    if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_628.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000007;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_320;
  local_320[0] = '\0';
  local_320[1] = '\0';
  local_320[2] = '\0';
  local_320[3] = '\0';
  local_320[4] = '\0';
  local_320[5] = '\0';
  local_320[6] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,Float64);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_618,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_618,0);
    if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_618.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0x14;
  local_11ac[0x14] = 0xc;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_608,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_608,0);
    if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_608.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0x15;
  local_11ac[0x15] = 0xd;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_5f8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_5f8,0);
    if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000015;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_58;
  local_58[0] = '\x0e';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_58[0xc] = '\0';
  local_58[0xd] = '\0';
  local_58[0xe] = '\0';
  local_58[0xf] = '\0';
  local_58[0x10] = '\0';
  local_58[0x11] = '\0';
  local_58[0x12] = '\0';
  local_58[0x13] = '\0';
  local_58[0x14] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_5e8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_5e8,0);
    if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000014;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_e8;
  local_e8[0] = '\0';
  local_e8[1] = '\0';
  local_e8[2] = '\0';
  local_e8[3] = '\0';
  local_e8[4] = '\0';
  local_e8[5] = '\0';
  local_e8[6] = '\0';
  local_e8[7] = '\0';
  local_e8[8] = '\0';
  local_e8[9] = '\0';
  local_e8[10] = '\0';
  local_e8[0xb] = '\0';
  local_e8[0xc] = '\0';
  local_e8[0xd] = '\0';
  local_e8[0xe] = '\0';
  local_e8[0xf] = '\0';
  local_e8[0x10] = '\0';
  local_e8[0x11] = '\0';
  local_e8[0x12] = '\0';
  local_e8[0x13] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,ObjectAttachment);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_5d8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_5d8,0);
    if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000014;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_d0;
  local_d0[0] = '\x0e';
  local_d0[1] = '\0';
  local_d0[2] = '\0';
  local_d0[3] = '\0';
  local_d0[4] = '\0';
  local_d0[5] = '\0';
  local_d0[6] = '\0';
  local_d0[7] = '\0';
  local_d0[8] = '\0';
  local_d0[9] = '\0';
  local_d0[10] = '\0';
  local_d0[0xb] = '\0';
  local_d0[0xc] = '\0';
  local_d0[0xd] = '\0';
  local_d0[0xe] = '\0';
  local_d0[0xf] = '\0';
  local_d0[0x10] = '\0';
  local_d0[0x11] = '\0';
  local_d0[0x12] = '\0';
  local_d0[0x13] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_5c8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_5c8,0);
    if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000013;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_130;
  local_130[0] = '\0';
  local_130[1] = '\0';
  local_130[2] = '\0';
  local_130[3] = '\0';
  local_130[4] = '\0';
  local_130[5] = '\0';
  local_130[6] = '\0';
  local_130[7] = '\0';
  local_130[8] = '\0';
  local_130[9] = '\0';
  local_130[10] = '\0';
  local_130[0xb] = '\0';
  local_130[0xc] = '\0';
  local_130[0xd] = '\0';
  local_130[0xe] = '\0';
  local_130[0xf] = '\0';
  local_130[0x10] = '\0';
  local_130[0x11] = '\0';
  local_130[0x12] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,ObjectAttachment);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_5b8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_5b8,0);
    if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000015;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_40;
  local_40[0] = '\x0f';
  local_40[1] = '\0';
  local_40[2] = '\0';
  local_40[3] = '\0';
  local_40[4] = '\0';
  local_40[5] = '\0';
  local_40[6] = '\0';
  local_40[7] = '\0';
  local_40[8] = '\0';
  local_40[9] = '\0';
  local_40[10] = '\0';
  local_40[0xb] = '\0';
  local_40[0xc] = '\0';
  local_40[0xd] = '\0';
  local_40[0xe] = '\0';
  local_40[0xf] = '\0';
  local_40[0x10] = '\0';
  local_40[0x11] = '\0';
  local_40[0x12] = '\0';
  local_40[0x13] = '\0';
  local_40[0x14] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_5a8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_5a8,0);
    if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000014;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_b8;
  local_b8[0] = '\0';
  local_b8[1] = '\0';
  local_b8[2] = '\0';
  local_b8[3] = '\0';
  local_b8[4] = '\0';
  local_b8[5] = '\0';
  local_b8[6] = '\0';
  local_b8[7] = '\0';
  local_b8[8] = '\0';
  local_b8[9] = '\0';
  local_b8[10] = '\0';
  local_b8[0xb] = '\0';
  local_b8[0xc] = '\0';
  local_b8[0xd] = '\0';
  local_b8[0xe] = '\0';
  local_b8[0xf] = '\0';
  local_b8[0x10] = '\0';
  local_b8[0x11] = '\0';
  local_b8[0x12] = '\0';
  local_b8[0x13] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,BinaryAttachment);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_598,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_598,0);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000014;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_a0;
  local_a0[0] = '\x0f';
  local_a0[1] = '\0';
  local_a0[2] = '\0';
  local_a0[3] = '\0';
  local_a0[4] = '\0';
  local_a0[5] = '\0';
  local_a0[6] = '\0';
  local_a0[7] = '\0';
  local_a0[8] = '\0';
  local_a0[9] = '\0';
  local_a0[10] = '\0';
  local_a0[0xb] = '\0';
  local_a0[0xc] = '\0';
  local_a0[0xd] = '\0';
  local_a0[0xe] = '\0';
  local_a0[0xf] = '\0';
  local_a0[0x10] = '\0';
  local_a0[0x11] = '\0';
  local_a0[0x12] = '\0';
  local_a0[0x13] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_588,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_588,0);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000013;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_118;
  local_118[0] = '\0';
  local_118[1] = '\0';
  local_118[2] = '\0';
  local_118[3] = '\0';
  local_118[4] = '\0';
  local_118[5] = '\0';
  local_118[6] = '\0';
  local_118[7] = '\0';
  local_118[8] = '\0';
  local_118[9] = '\0';
  local_118[10] = '\0';
  local_118[0xb] = '\0';
  local_118[0xc] = '\0';
  local_118[0xd] = '\0';
  local_118[0xe] = '\0';
  local_118[0xf] = '\0';
  local_118[0x10] = '\0';
  local_118[0x11] = '\0';
  local_118[0x12] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,BinaryAttachment);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_578,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_578,0);
    if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000015;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_28;
  local_28[0] = '\x10';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  local_28[0x10] = '\0';
  local_28[0x11] = '\0';
  local_28[0x12] = '\0';
  local_28[0x13] = '\0';
  local_28[0x14] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_568,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_568,0);
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000014;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_88;
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,Hash);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_558,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_558,0);
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000014;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_70;
  local_70[0] = '\x10';
  local_70[1] = '\0';
  local_70[2] = '\0';
  local_70[3] = '\0';
  local_70[4] = '\0';
  local_70[5] = '\0';
  local_70[6] = '\0';
  local_70[7] = '\0';
  local_70[8] = '\0';
  local_70[9] = '\0';
  local_70[10] = '\0';
  local_70[0xb] = '\0';
  local_70[0xc] = '\0';
  local_70[0xd] = '\0';
  local_70[0xe] = '\0';
  local_70[0xf] = '\0';
  local_70[0x10] = '\0';
  local_70[0x11] = '\0';
  local_70[0x12] = '\0';
  local_70[0x13] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_548,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_548,0);
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000013;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_100;
  local_100[0] = '\0';
  local_100[1] = '\0';
  local_100[2] = '\0';
  local_100[3] = '\0';
  local_100[4] = '\0';
  local_100[5] = '\0';
  local_100[6] = '\0';
  local_100[7] = '\0';
  local_100[8] = '\0';
  local_100[9] = '\0';
  local_100[10] = '\0';
  local_100[0xb] = '\0';
  local_100[0xc] = '\0';
  local_100[0xd] = '\0';
  local_100[0xe] = '\0';
  local_100[0xf] = '\0';
  local_100[0x10] = '\0';
  local_100[0x11] = '\0';
  local_100[0x12] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,Hash);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_538,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_538,0);
    if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000011;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_168 + 0x20;
  local_168[0x20] = '\x11';
  local_168[0x21] = '\0';
  local_168[0x22] = '\0';
  local_168[0x23] = '\0';
  local_168[0x24] = '\0';
  local_168[0x25] = '\0';
  local_168[0x26] = '\0';
  local_168[0x27] = '\0';
  local_168[0x28] = '\0';
  local_168[0x29] = '\0';
  local_168[0x2a] = '\0';
  local_168[0x2b] = '\0';
  local_168[0x2c] = '\0';
  local_168[0x2d] = '\0';
  local_168[0x2e] = '\0';
  local_168[0x2f] = '\0';
  local_168[0x30] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_528,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_528,0);
    if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_528.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000010;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_168;
  local_168[0] = '\0';
  local_168[1] = '\0';
  local_168[2] = '\0';
  local_168[3] = '\0';
  local_168[4] = '\0';
  local_168[5] = '\0';
  local_168[6] = '\0';
  local_168[7] = '\0';
  local_168[8] = '\0';
  local_168[9] = '\0';
  local_168[10] = '\0';
  local_168[0xb] = '\0';
  local_168[0xc] = '\0';
  local_168[0xd] = '\0';
  local_168[0xe] = '\0';
  local_168[0xf] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,Uuid);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_518,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_518,0);
    if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000010;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_168 + 0x10;
  local_168[0x10] = '\x11';
  local_168[0x11] = '\0';
  local_168[0x12] = '\0';
  local_168[0x13] = '\0';
  local_168[0x14] = '\0';
  local_168[0x15] = '\0';
  local_168[0x16] = '\0';
  local_168[0x17] = '\0';
  local_168[0x18] = '\0';
  local_168[0x19] = '\0';
  local_168[0x1a] = '\0';
  local_168[0x1b] = '\0';
  local_168[0x1c] = '\0';
  local_168[0x1d] = '\0';
  local_168[0x1e] = '\0';
  local_168[0x1f] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_508,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_508,0);
    if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_508.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_0000000f;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_178;
  local_178[0] = '\0';
  local_178[1] = '\0';
  local_178[2] = '\0';
  local_178[3] = '\0';
  local_178[4] = '\0';
  local_178[5] = '\0';
  local_178[6] = '\0';
  local_178[7] = '\0';
  local_178[8] = '\0';
  local_178[9] = '\0';
  local_178[10] = '\0';
  local_178[0xb] = '\0';
  local_178[0xc] = '\0';
  local_178[0xd] = '\0';
  local_178[0xe] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,Uuid);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_4f8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_4f8,0);
    if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000009;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_278;
  local_278[0] = '\x12';
  local_278[1] = '\0';
  local_278[2] = '\0';
  local_278[3] = '\0';
  local_278[4] = '\0';
  local_278[5] = '\0';
  local_278[6] = '\0';
  local_278[7] = '\0';
  local_278[8] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_4e8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_4e8,0);
    if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000008;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_2f8 + 0x40;
  local_2f8[0x40] = '\0';
  local_2f8[0x41] = '\0';
  local_2f8[0x42] = '\0';
  local_2f8[0x43] = '\0';
  local_2f8[0x44] = '\0';
  local_2f8[0x45] = '\0';
  local_2f8[0x46] = '\0';
  local_2f8[0x47] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,DateTime);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_4d8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_4d8,0);
    if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000008;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_2f8 + 0x48;
  local_2f8[0x48] = '\x12';
  local_2f8[0x49] = '\0';
  local_2f8[0x4a] = '\0';
  local_2f8[0x4b] = '\0';
  local_2f8[0x4c] = '\0';
  local_2f8[0x4d] = '\0';
  local_2f8[0x4e] = '\0';
  local_2f8[0x4f] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_4c8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_4c8,0);
    if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000007;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_318;
  local_318[0] = '\0';
  local_318[1] = '\0';
  local_318[2] = '\0';
  local_318[3] = '\0';
  local_318[4] = '\0';
  local_318[5] = '\0';
  local_318[6] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,DateTime);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_4b8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_4b8,0);
    if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000009;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_268;
  local_268[0] = '\x13';
  local_268[1] = '\0';
  local_268[2] = '\0';
  local_268[3] = '\0';
  local_268[4] = '\0';
  local_268[5] = '\0';
  local_268[6] = '\0';
  local_268[7] = '\0';
  local_268[8] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_4a8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_4a8,0);
    if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000008;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_2f8;
  local_2f8[0] = '\0';
  local_2f8[1] = '\0';
  local_2f8[2] = '\0';
  local_2f8[3] = '\0';
  local_2f8[4] = '\0';
  local_2f8[5] = '\0';
  local_2f8[6] = '\0';
  local_2f8[7] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,TimeSpan);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1058,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1058,0);
    if (local_1058.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1058.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000008;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_2f8 + 8;
  local_2f8[8] = '\x13';
  local_2f8[9] = '\0';
  local_2f8[10] = '\0';
  local_2f8[0xb] = '\0';
  local_2f8[0xc] = '\0';
  local_2f8[0xd] = '\0';
  local_2f8[0xe] = '\0';
  local_2f8[0xf] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1048,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1048,0);
    if (local_1048.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1048.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000007;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_310;
  local_310[0] = '\0';
  local_310[1] = '\0';
  local_310[2] = '\0';
  local_310[3] = '\0';
  local_310[4] = '\0';
  local_310[5] = '\0';
  local_310[6] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,TimeSpan);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1038,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1038,0);
    if (local_1038.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1038.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_0000000d;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_188;
  local_188[0] = '\x14';
  local_188[1] = '\0';
  local_188[2] = '\0';
  local_188[3] = '\0';
  local_188[4] = '\0';
  local_188[5] = '\0';
  local_188[6] = '\0';
  local_188[7] = '\0';
  local_188[8] = '\0';
  local_188[9] = '\0';
  local_188[10] = '\0';
  local_188[0xb] = '\0';
  local_188[0xc] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1028,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1028,0);
    if (local_1028.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1028.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_0000000c;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1b8;
  local_1b8[0] = '\0';
  local_1b8[1] = '\0';
  local_1b8[2] = '\0';
  local_1b8[3] = '\0';
  local_1b8[4] = '\0';
  local_1b8[5] = '\0';
  local_1b8[6] = '\0';
  local_1b8[7] = '\0';
  local_1b8[8] = '\0';
  local_1b8[9] = '\0';
  local_1b8[10] = '\0';
  local_1b8[0xb] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,ObjectId);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1018,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1018,0);
    if (local_1018.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1018.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_0000000c;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1a8;
  local_1a8[0] = '\x14';
  local_1a8[1] = '\0';
  local_1a8[2] = '\0';
  local_1a8[3] = '\0';
  local_1a8[4] = '\0';
  local_1a8[5] = '\0';
  local_1a8[6] = '\0';
  local_1a8[7] = '\0';
  local_1a8[8] = '\0';
  local_1a8[9] = '\0';
  local_1a8[10] = '\0';
  local_1a8[0xb] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1008,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1008,0);
    if (local_1008.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1008.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = 0xb;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1e8;
  local_1e8[0] = '\0';
  local_1e8[1] = '\0';
  local_1e8[2] = '\0';
  local_1e8[3] = '\0';
  local_1e8[4] = '\0';
  local_1e8[5] = '\0';
  local_1e8[6] = '\0';
  local_1e8[7] = '\0';
  local_1e8[8] = '\0';
  local_1e8[9] = '\0';
  local_1e8[10] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,ObjectId);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_ff8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_ff8,0);
    if (local_ff8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ff8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10f0;
  local_10f0[0] = '\x1e';
  local_10f0[1] = '\x01';
  local_10f0[2] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_fe8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_fe8,0);
    if (local_fe8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fe8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1140;
  local_1140[0] = '\x01';
  local_1140[1] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomById);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_fd8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_fd8,0);
    if (local_fd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fd8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0x14;
  local_10b0[0x14] = '\x1e';
  local_10b0[0x15] = '\x02';
  local_10b0[0x16] = '\0';
  local_10b0[0x17] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_fc8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_fc8,0);
    if (local_fc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fc8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10ec;
  local_10ec[0] = '\x02';
  local_10ec[1] = '\0';
  local_10ec[2] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomById);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_fb8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_fb8,0);
    if (local_fb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fb8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = 0xb;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1d8;
  local_1d8[0] = '\x1e';
  local_1d8[1] = '\t';
  local_1d8[2] = 0xff;
  local_1d8[3] = 0xff;
  local_1d8[4] = 0xff;
  local_1d8[5] = 0xff;
  local_1d8[6] = 0xff;
  local_1d8[7] = 0xff;
  local_1d8[8] = 0xff;
  local_1d8[9] = 0xff;
  local_1d8[10] = 0xff;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_fa8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_fa8,0);
    if (local_fa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fa8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_0000000a;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_208;
  local_208[0] = '\t';
  local_208[1] = 0xff;
  local_208[2] = 0xff;
  local_208[3] = 0xff;
  local_208[4] = 0xff;
  local_208[5] = 0xff;
  local_208[6] = 0xff;
  local_208[7] = 0xff;
  local_208[8] = 0xff;
  local_208[9] = 0xff;
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomById);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_f98,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_f98,0);
    if (local_f98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f98.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_0000000c;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_198;
  local_198[0] = '\x1e';
  local_198[1] = '\n';
  local_198[2] = 0xff;
  local_198[3] = 0xff;
  local_198[4] = 0xff;
  local_198[5] = 0xff;
  local_198[6] = 0xff;
  local_198[7] = 0xff;
  local_198[8] = 0xff;
  local_198[9] = 0xff;
  local_198[10] = 0xff;
  local_198[0xb] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_f88,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_f88,0);
    if (local_f88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f88.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = 0xb;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1c8;
  local_1c8[0] = '\n';
  local_1c8[1] = 0xff;
  local_1c8[2] = 0xff;
  local_1c8[3] = 0xff;
  local_1c8[4] = 0xff;
  local_1c8[5] = 0xff;
  local_1c8[6] = 0xff;
  local_1c8[7] = 0xff;
  local_1c8[8] = 0xff;
  local_1c8[9] = 0xff;
  local_1c8[10] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomById);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_f78,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_f78,0);
    if (local_f78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f78.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0x16;
  local_11ac[0x16] = 0x1e;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_f68,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_f68,0);
    if (local_f68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f68.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Data = (void *)0x0;
  local_11c8.Size = 0;
  pFVar1 = pFVar4->CurrentTest;
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomById);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_f58,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_f58,0);
    if (local_f58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f58.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_113c;
  local_113c[0] = '\x1e';
  local_113c[1] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_f48,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_f48,0);
    if (local_f48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f48.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0x17;
  local_11ac[0x17] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomById);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_f38,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_f38,0);
    if (local_f38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f38.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_10e8[0] = '\x1e';
  local_10e8[1] = '\x01';
  local_10e8[2] = 0x80;
  local_11c8.Data = local_10e8;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_f28,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_f28,0);
    if (local_f28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f28.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1138;
  local_1138[0] = '\x01';
  local_1138[1] = 0x80;
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomById);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_f18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_f18,0);
    if (local_f18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f18.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10e4;
  local_10e4[0] = '\x1e';
  local_10e4[1] = '\x02';
  local_10e4[2] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_f08,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_f08,0);
    if (local_f08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f08.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1134;
  local_1134[0] = '\x02';
  local_1134[1] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomById);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_ef8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_ef8,0);
    if (local_ef8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ef8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0x18;
  local_10b0[0x18] = '\x1e';
  local_10b0[0x19] = '\x03';
  local_10b0[0x1a] = '\0';
  local_10b0[0x1b] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_ee8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_ee8,0);
    if (local_ee8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ee8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10e0;
  local_10e0[0] = '\x03';
  local_10e0[1] = '\0';
  local_10e0[2] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomById);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_ed8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_ed8,0);
    if (local_ed8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ed8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0x50;
  builtin_memcpy(local_10b0 + 0x50,"\x1f\x02\x01A",4);
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_ec8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_ec8,0);
    if (local_ec8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ec8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10dc;
  local_10dc[0] = '\x02';
  local_10dc[1] = '\x01';
  local_10dc[2] = 0x41;
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomByName);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_eb8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_eb8,0);
    if (local_eb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_eb8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000005;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_370;
  builtin_memcpy(local_370,"\x1f\x03\x01A",5);
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_ea8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_ea8,0);
    if (local_ea8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ea8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0x20;
  builtin_memcpy(local_10b0 + 0x20,"\x03\x01A",4);
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomByName);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_e98,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_e98,0);
    if (local_e98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e98.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0x18;
  local_11ac[0x18] = 0x1f;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_e88,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_e88,0);
    if (local_e88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e88.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Data = (void *)0x0;
  local_11c8.Size = 0;
  pFVar1 = pFVar4->CurrentTest;
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomByName);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_e78,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_e78,0);
    if (local_e78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e78.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1130;
  local_1130[0] = '\x1f';
  local_1130[1] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_e68,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_e68,0);
    if (local_e68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e68.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0x19;
  local_11ac[0x19] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomByName);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_e58,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_e58,0);
    if (local_e58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e58.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10d8;
  local_10d8[0] = '\x1f';
  local_10d8[1] = '\x01';
  local_10d8[2] = 0x80;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_e48,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_e48,0);
    if (local_e48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e48.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_112c;
  local_112c[0] = '\x01';
  local_112c[1] = 0x80;
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomByName);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_e38,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_e38,0);
    if (local_e38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e38.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10d4;
  local_10d4[0] = '\x1f';
  local_10d4[1] = '\x01';
  local_10d4[2] = 1;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_e28,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_e28,0);
    if (local_e28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e28.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1128;
  local_1128[0] = '\x01';
  local_1128[1] = '\x01';
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomByName);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_e18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_e18,0);
    if (local_e18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e18.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0x24;
  builtin_memcpy(local_10b0 + 0x24,"\x1f\x03\x01A",4);
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_df8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_df8,0);
    if (local_df8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_df8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10d0;
  local_10d0[0] = '\x03';
  local_10d0[1] = '\x01';
  local_10d0[2] = 0x41;
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomByName);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_de8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_de8,0);
    if (local_de8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_de8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000005;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_368;
  builtin_memcpy(local_368,"\x1f\x04\x01A",5);
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_dd8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_dd8,0);
    if (local_dd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_dd8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0x28;
  builtin_memcpy(local_10b0 + 0x28,"\x04\x01A",4);
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomByName);
  if (EVar3 != OutOfBounds) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_dc8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_dc8,0);
    if (local_dc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_dc8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0x1a;
  local_11ac[0x1a] = 0x15;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidType) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_db8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_db8,0);
    if (local_db8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_db8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Data = (void *)0x0;
  local_11c8.Size = 0;
  pFVar1 = pFVar4->CurrentTest;
  EVar3 = ValidateCompactBinary(&local_11c8,All,ObjectId|Null);
  if (EVar3 != InvalidType) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_da8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_da8,0);
    if (local_da8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_da8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000001;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0x1b;
  local_11ac[0x1b] = 0x41;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidType) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_d98,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_d98,0);
    if (local_d98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d98.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Data = (void *)0x0;
  local_11c8.Size = 0;
  pFVar1 = pFVar4->CurrentTest;
  EVar3 = ValidateCompactBinary(&local_11c8,All,Null);
  if (EVar3 != InvalidType) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_d88,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_d88,0);
    if (local_d88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d88.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Data = (void *)0x0;
  local_11c8.Size = 0;
  pFVar1 = pFVar4->CurrentTest;
  EVar3 = ValidateCompactBinary(&local_11c8,All,BoolFalse);
  if (EVar3 != InvalidType) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_d78,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_d78,0);
    if (local_d78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d78.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Data = (void *)0x0;
  local_11c8.Size = 0;
  pFVar1 = pFVar4->CurrentTest;
  EVar3 = ValidateCompactBinary(&local_11c8,All,BoolTrue);
  if (EVar3 != InvalidType) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_d68,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_d68,0);
    if (local_d68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d68.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0x2c;
  builtin_memcpy(local_10b0 + 0x2c,"\x05\x02\x02\x01",4);
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidType) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_d58,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_d58,0);
    if (local_d58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d58.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0x30;
  builtin_memcpy(local_10b0 + 0x30,"\x03\x02\x01",4);
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidType) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_d48,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_d48,0);
    if (local_d48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d48.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000003;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10cc;
  local_10cc[0] = '\x1f';
  local_10cc[1] = '\x01';
  local_10cc[2] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidType) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_d38,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_d38,0);
    if (local_d38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d38.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000002;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1124;
  local_1124[0] = '\x01';
  local_1124[1] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,CustomByName);
  if (EVar3 != InvalidType) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_d28,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_d28,0);
    if (local_d28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d28.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000009;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_258;
  local_258[0] = '\x03';
  local_258[1] = '\a';
  local_258[2] = 0x81;
  local_258[3] = '\x01';
  local_258[4] = 'A';
  local_258[5] = '\x01';
  local_258[6] = 'B';
  local_258[7] = '\x01';
  local_258[8] = 0x41;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != DuplicateName) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_d18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_d18,0);
    if (local_d18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d18.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000009;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_248;
  local_248[0] = '\x03';
  local_248[1] = '\a';
  local_248[2] = 0x81;
  local_248[3] = '\x01';
  local_248[4] = 'A';
  local_248[5] = '\x01';
  local_248[6] = 'B';
  local_248[7] = '\x01';
  local_248[8] = 0x61;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_d08,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_d08,0);
    if (local_d08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d08.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000009;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_238;
  local_238[0] = '\x03';
  local_238[1] = '\a';
  local_238[2] = 0x81;
  local_238[3] = '\x01';
  local_238[4] = 'A';
  local_238[5] = '\x01';
  local_238[6] = 'B';
  local_238[7] = '\x01';
  local_238[8] = 0x41;
  EVar3 = ValidateCompactBinary(&local_11c8,PackageHash|Package|Padding|Format|Default,HasFieldType)
  ;
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_cf8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_cf8,0);
    if (local_cf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cf8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000005;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_360;
  builtin_memcpy(local_360,"\x02\x03\x01\b",5);
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != MissingName) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_ce8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_ce8,0);
    if (local_ce8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ce8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000005;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_358;
  builtin_memcpy(local_358,"\x03\x03\b",4);
  local_358[4] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != MissingName) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_cd8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_cd8,0);
    if (local_cd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cd8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000005;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_3d0;
  builtin_memcpy(local_3d0,"\x02\x03\x01\b",5);
  EVar3 = ValidateCompactBinary(&local_11c8,PackageHash|Package|Padding|Format|Default,HasFieldType)
  ;
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_cc8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_cc8,0);
    if (local_cc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cc8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000005;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_3c8;
  builtin_memcpy(local_3c8,"\x03\x03\b",4);
  local_3c8[4] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,PackageHash|Package|Padding|Format|Default,HasFieldType)
  ;
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_cb8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_cb8,0);
    if (local_cb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cb8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000007;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_308;
  local_308[0] = '\x04';
  local_308[1] = '\x05';
  local_308[2] = '\x02';
  local_308[3] = '\x01';
  local_308[4] = 0x81;
  local_308[5] = '\x01';
  local_308[6] = 0x46;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != ArrayName) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_ca8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_ca8,0);
    if (local_ca8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ca8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000006;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_338;
  local_338[0] = '\x05';
  local_338[1] = '\x04';
  local_338[2] = '\x01';
  local_338[3] = 0x81;
  local_338[4] = '\x01';
  local_338[5] = 'F';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != ArrayName) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_c98,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_c98,0);
    if (local_c98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c98.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000007;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_328;
  local_328[0] = '\x04';
  local_328[1] = '\x05';
  local_328[2] = '\x02';
  local_328[3] = '\x01';
  local_328[4] = 0x81;
  local_328[5] = '\x01';
  local_328[6] = 0x46;
  EVar3 = ValidateCompactBinary(&local_11c8,PackageHash|Package|Padding|Format|Default,HasFieldType)
  ;
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_c88,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_c88,0);
    if (local_c88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c88.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000006;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_350;
  local_350[0] = '\x05';
  local_350[1] = '\x04';
  local_350[2] = '\x01';
  local_350[3] = 0x81;
  local_350[4] = '\x01';
  local_350[5] = 'F';
  EVar3 = ValidateCompactBinary(&local_11c8,PackageHash|Package|Padding|Format|Default,HasFieldType)
  ;
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_c78,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_c78,0);
    if (local_c78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c78.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0x34;
  local_10b0[0x34] = 0x81;
  local_10b0[0x35] = 0x80;
  local_10b0[0x36] = '\x01';
  local_10b0[0x37] = 'N';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidInteger) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_c68,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_c68,0);
    if (local_c68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c68.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0x38;
  local_10b0[0x38] = '\x02';
  local_10b0[0x39] = 0xc0;
  local_10b0[0x3a] = '\0';
  local_10b0[0x3b] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidInteger) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_c58,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_c58,0);
    if (local_c58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c58.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000006;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_348;
  local_348[0] = '\x04';
  local_348[1] = 0xe0;
  local_348[2] = '\0';
  local_348[3] = '\0';
  local_348[4] = '\x01';
  local_348[5] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidInteger) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_c48,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_c48,0);
    if (local_c48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c48.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000007;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_330;
  local_330[0] = '\x04';
  local_330[1] = '\x05';
  local_330[2] = 0xf0;
  local_330[3] = '\0';
  local_330[4] = '\0';
  local_330[5] = '\0';
  local_330[6] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidInteger) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_c38,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_c38,0);
    if (local_c38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c38.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000007;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_300;
  local_300[0] = '\x06';
  local_300[1] = 0xf8;
  local_300[2] = '\0';
  local_300[3] = '\0';
  local_300[4] = '\0';
  local_300[5] = '\0';
  local_300[6] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidInteger) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_c28,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_c28,0);
    if (local_c28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c28.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000008;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_2f8 + 0x10;
  local_2f8[0x10] = '\a';
  local_2f8[0x11] = 0xfc;
  local_2f8[0x12] = '\0';
  local_2f8[0x13] = '\0';
  local_2f8[0x14] = '\0';
  local_2f8[0x15] = '\0';
  local_2f8[0x16] = '\0';
  local_2f8[0x17] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidInteger) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_c18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_c18,0);
    if (local_c18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c18.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000009;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_228;
  local_228[0] = '\b';
  local_228[1] = 0xfe;
  local_228[2] = '\0';
  local_228[3] = '\0';
  local_228[4] = '\0';
  local_228[5] = '\0';
  local_228[6] = '\0';
  local_228[7] = '\0';
  local_228[8] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidInteger) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_c08,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_c08,0);
    if (local_c08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c08.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_0000000a;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1f8;
  local_1f8[0] = '\t';
  local_1f8[1] = 0xff;
  local_1f8[2] = '\0';
  local_1f8[3] = '\0';
  local_1f8[4] = '\0';
  local_1f8[5] = '\0';
  local_1f8[6] = '\0';
  local_1f8[7] = '\0';
  local_1f8[8] = '\0';
  local_1f8[9] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidInteger) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_bf8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_bf8,0);
    if (local_bf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bf8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0x3c;
  local_10b0[0x3c] = '\x04';
  local_10b0[0x3d] = 0x80;
  local_10b0[0x3e] = '\x01';
  local_10b0[0x3f] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidInteger) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_be8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_be8,0);
    if (local_be8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_be8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000005;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_3c0;
  local_3c0[0] = '\x04';
  local_3c0[1] = '\x03';
  local_3c0[2] = 0xc0;
  local_3c0[3] = '\0';
  local_3c0[4] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidInteger) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_bd8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_bd8,0);
    if (local_bd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bd8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000005;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_3b8;
  local_3b8[0] = '\x02';
  local_3b8[1] = 0xe0;
  local_3b8[2] = '\0';
  local_3b8[3] = '\0';
  local_3b8[4] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidInteger) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_bc8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_bc8,0);
    if (local_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bc8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0x40;
  local_10b0[0x40] = '\x1e';
  local_10b0[0x41] = '\x02';
  local_10b0[0x42] = 0x80;
  local_10b0[0x43] = '\0';
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidInteger) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_bb8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_bb8,0);
    if (local_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bb8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000005;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_3b0;
  local_3b0[0] = '\x1f';
  local_3b0[1] = '\x03';
  local_3b0[2] = 0x80;
  local_3b0[3] = '\x01';
  local_3b0[4] = 0x41;
  EVar3 = ValidateCompactBinary(&local_11c8,All,HasFieldType);
  if (EVar3 != InvalidInteger) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_ba8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_ba8,0);
    if (local_ba8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ba8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000004;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_10b0 + 0x44;
  local_10b0[0x44] = 0x81;
  local_10b0[0x45] = 0x80;
  local_10b0[0x46] = '\x01';
  local_10b0[0x47] = 'N';
  EVar3 = ValidateCompactBinary(&local_11c8,PackageHash|Package|Padding|Names|Default,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_b98,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_b98,0);
    if (local_b98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b98.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11c8.Size = (ulong64)&DAT_00000005;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_3a8;
  local_3a8[0] = '\x04';
  local_3a8[1] = 0xc0;
  local_3a8[2] = '\0';
  local_3a8[3] = '\x01';
  local_3a8[4] = 0;
  EVar3 = ValidateCompactBinary(&local_11c8,PackageHash|Package|Padding|Names|Default,HasFieldType);
  if (EVar3 != None) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_b88,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_b88,0);
    if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b88.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  local_11b4 = None;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_498;
  local_11c8.Size = (ulong64)(local_498 + 5);
  local_498[0] = '\x02';
  local_498[1] = 0xe0;
  local_498[2] = '\0';
  local_498[3] = '\0';
  local_498[4] = 0;
  local_11b0 = `FCbValidateTest::TestBody'::__l2::<lambda_2>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,
                          PackageHash|Package|Padding|Names|Default,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(InvalidInteger, ObjectSize, Mode)",&local_11b0,
             &local_11b4);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = None;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1114 + 8;
  local_11c8.Size = (ulong64)(local_1114 + 0xc);
  local_1114[8] = '\x1e';
  local_1114[9] = '\x02';
  local_1114[10] = 0x80;
  local_1114[0xb] = '\0';
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_2>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,
                          PackageHash|Package|Padding|Names|Default,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(InvalidInteger, CustomById, Mode)",&local_11b4,
             &local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = None;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_490;
  local_11c8.Size = (ulong64)(local_490 + 5);
  local_490[0] = '\x1f';
  local_490[1] = '\x03';
  local_490[2] = 0x80;
  local_490[3] = '\x01';
  local_490[4] = 0x41;
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_2>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,
                          PackageHash|Package|Padding|Names|Default,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(InvalidInteger, CustomByName, Mode)",&local_11b4,
             &local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = None;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_420;
  local_11c8.Size = (ulong64)(local_420 + 9);
  local_420[0] = '\v';
  local_420[1] = '?';
  local_420[2] = 0xff;
  local_420[3] = 0xff;
  local_420[4] = 0xff;
  local_420[5] = 0xf0;
  local_420[6] = '\0';
  local_420[7] = '\0';
  local_420[8] = 0;
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_1>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(InvalidFloat, MaxSignificant+1)",&local_11b4,&local_11b0
            );
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_440 + 0x10;
  local_11b0 = None;
  local_11c8.Size = (ulong64)(local_440 + 0x19);
  local_440[0x10] = '\v';
  local_440[0x11] = 'G';
  local_440[0x12] = 0xff;
  local_440[0x13] = 0xff;
  local_440[0x14] = 0xff;
  local_440[0x15] = 0xe0;
  local_440[0x16] = '\0';
  local_440[0x17] = '\0';
  local_440[0x18] = 0;
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_1>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(InvalidFloat, MaxExponent+1)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = InvalidFloat;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_410;
  local_11c8.Size = (ulong64)(local_410 + 9);
  local_410[0] = '\v';
  local_410[1] = '?';
  local_410[2] = 0xff;
  local_410[3] = 0xff;
  local_410[4] = 0xff;
  local_410[5] = 0xe0;
  local_410[6] = '\0';
  local_410[7] = '\0';
  local_410[8] = 0;
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_1>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(InvalidFloat, MaxSignificand)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = InvalidFloat;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_400;
  local_11c8.Size = (ulong64)(local_400 + 9);
  local_400[0] = '\v';
  local_400[1] = 'G';
  local_400[2] = 0xef;
  local_400[3] = 0xff;
  local_400[4] = 0xff;
  local_400[5] = 0xe0;
  local_400[6] = '\0';
  local_400[7] = '\0';
  local_400[8] = 0;
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_1>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(InvalidFloat, MaxExponent)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = None;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_3f0;
  local_11c8.Size = (ulong64)(local_3f0 + 9);
  local_3f0[0] = '\v';
  local_3f0[1] = '?';
  local_3f0[2] = 0xff;
  local_3f0[3] = 0xff;
  local_3f0[4] = 0xff;
  local_3f0[5] = 0xe0;
  local_3f0[6] = '\0';
  local_3f0[7] = '\0';
  local_3f0[8] = 0;
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_2>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,
                          PackageHash|Package|Padding|Names|Default,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(InvalidFloat, MaxSignificand, Mode)",&local_11b4,
             &local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_3e0;
  local_11b0 = None;
  local_11c8.Size = (ulong64)(local_3e0 + 9);
  local_3e0[0] = '\v';
  local_3e0[1] = 'G';
  local_3e0[2] = 0xef;
  local_3e0[3] = 0xff;
  local_3e0[4] = 0xff;
  local_3e0[5] = 0xe0;
  local_3e0[6] = '\0';
  local_3e0[7] = '\0';
  local_3e0[8] = 0;
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_2>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,
                          PackageHash|Package|Padding|Names|Default,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(InvalidFloat, MaxExponent, Mode)",&local_11b4,
             &local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = NonUniformObject;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_488;
  local_11c8.Size = (ulong64)(local_488 + 5);
  local_488[0] = '\x02';
  local_488[1] = '\x03';
  local_488[2] = 0x81;
  local_488[3] = '\x01';
  local_488[4] = 0x41;
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_1>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(NonUniformObject)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = NonUniformObject;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_440;
  local_11c8.Size = (ulong64)(local_440 + 8);
  local_440[0] = '\x02';
  local_440[1] = '\x06';
  local_440[2] = 0x81;
  local_440[3] = '\x01';
  local_440[4] = 'A';
  local_440[5] = 0x81;
  local_440[6] = '\x01';
  local_440[7] = 'B';
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_1>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(NonUniformObject)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = None;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_480;
  local_11c8.Size = (ulong64)(local_480 + 5);
  local_480[0] = '\x02';
  local_480[1] = '\x03';
  local_480[2] = 0x81;
  local_480[3] = '\x01';
  local_480[4] = 0x41;
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_2>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,
                          PackageHash|Package|Padding|Names|Default,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(NonUniformObject, Mode)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = None;
  pFVar1 = pFVar4->CurrentTest;
  local_440[8] = '\x02';
  local_440[9] = '\x06';
  local_440[10] = 0x81;
  local_440[0xb] = '\x01';
  local_11c8.Data = local_440 + 8;
  local_440[0xc] = 'A';
  local_440[0xd] = 0x81;
  local_440[0xe] = '\x01';
  local_440[0xf] = 'B';
  local_11c8.Size = (ulong64)(local_440 + 0x10);
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_2>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,
                          PackageHash|Package|Padding|Names|Default,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(NonUniformObject, Mode)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = NonUniformArray;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_478;
  local_11c8.Size = (ulong64)(local_478 + 5);
  builtin_memcpy(local_478,"\x04\x03\x01\b",5);
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_1>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(NonUniformArray)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = NonUniformArray;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_450;
  local_11c8.Size = (ulong64)(local_450 + 7);
  builtin_memcpy(local_450,"\x04\x05\x02\b\x01\b\x02",7);
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_1>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(NonUniformArray)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = None;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_470;
  local_11c8.Size = (ulong64)(local_470 + 5);
  builtin_memcpy(local_470,"\x04\x03\x02\x01\x01",5);
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_1>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(NonUniformArray, Null)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = None;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_468;
  builtin_memcpy(local_468,"\x04\x03\x02\f\f",5);
  local_11c8.Size = (ulong64)(local_468 + 5);
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_1>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(NonUniformArray, Bool)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = None;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_460;
  local_11c8.Size = (ulong64)(local_460 + 5);
  builtin_memcpy(local_460,"\x04\x03\x02\r\r",5);
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_1>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(NonUniformArray, Bool)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = None;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_458;
  local_11c8.Size = (ulong64)(local_458 + 5);
  builtin_memcpy(local_458,"\x04\x03\x01\b",5);
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_2>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,
                          PackageHash|Package|Padding|Names|Default,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(NonUniformArray, Mode)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = None;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_448;
  local_11c8.Size = (ulong64)(local_448 + 7);
  builtin_memcpy(local_448,"\x04\x05\x02\b\x01\b\x02",7);
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_2>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,
                          PackageHash|Package|Padding|Names|Default,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(NonUniformArray, Mode)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = Padding;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_11ac + 0x1c;
  local_11c8.Size = (ulong64)(local_11ac + 0x1e);
  local_11ac[0x1c] = '\x01';
  local_11ac[0x1d] = '\0';
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_1>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(Padding)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = Padding;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1114;
  local_11c8.Size = (ulong64)(local_1114 + 4);
  local_1114[0] = '\x04';
  local_1114[1] = '\x01';
  local_1114[2] = '\0';
  local_1114[3] = '\0';
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_1>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(Padding)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = Padding;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1180;
  local_11c8.Size = (ulong64)(local_1180 + 3);
  local_1180[0] = '\x02';
  local_1180[1] = '\0';
  local_1180[2] = 0;
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_1>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(Padding)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = None;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_118c;
  local_11c8.Size = (ulong64)(local_118c + 2);
  local_118c[0] = '\x01';
  local_118c[1] = '\0';
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_2>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,
                          PackageHash|Package|Format|Names|Default,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(Padding, Mode)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = None;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1114 + 4;
  local_11c8.Size = (ulong64)(local_1114 + 8);
  local_1114[4] = '\x04';
  local_1114[5] = '\x01';
  local_1114[6] = '\0';
  local_1114[7] = '\0';
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_2>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,
                          PackageHash|Package|Format|Names|Default,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(Padding, Mode)",&local_11b4,&local_11b0);
  pFVar4 = FAutomationTestFramework::Get();
  local_11b0 = None;
  pFVar1 = pFVar4->CurrentTest;
  local_11c8.Data = local_1184;
  local_11c8.Size = (ulong64)(local_1184 + 3);
  local_1184[0] = '\x02';
  local_1184[1] = '\0';
  local_1184[2] = 0;
  local_11b4 = `FCbValidateTest::TestBody'::__l2::<lambda_2>::operator()
                         (local_11b8,(initializer_list<unsigned_char> *)&local_11c8,
                          PackageHash|Package|Format|Names|Default,HasFieldType);
  FAutomationTestBase::TestEqual<enum_ECbValidateError>
            (pFVar1,L"ValidateCompactBinary(Padding, Mode)",&local_11b4,&local_11b0);
  return;
}

