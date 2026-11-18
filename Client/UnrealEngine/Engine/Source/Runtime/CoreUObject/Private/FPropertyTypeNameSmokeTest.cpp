// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 12

// GetTestFlags @ 1422c69d0

EAutomationTestFlags __thiscall
UE::FPropertyTypeNameSmokeTest::GetTestFlags(FPropertyTypeNameSmokeTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1422c69e0

bool __thiscall UE::FPropertyTypeNameSmokeTest::IsStressTest(FPropertyTypeNameSmokeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422c69f0

uint __thiscall
UE::FPropertyTypeNameSmokeTest::GetRequiredDeviceNum(FPropertyTypeNameSmokeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422c6a00

FString * __thiscall
UE::FPropertyTypeNameSmokeTest::GetTestSourceFileName
          (FPropertyTypeNameSmokeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Tests\\UObject\\PropertyTypeNameTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422c6a30

int __thiscall
UE::FPropertyTypeNameSmokeTest::GetTestSourceFileLine(FPropertyTypeNameSmokeTest *this)

{
  return 0x4a;
}

// GetTests @ 1422c6a40

/* WARNING: Removing unreachable block (ram,0x0001422c6bbe) */

void __thiscall
UE::FPropertyTypeNameSmokeTest::GetTests
          (FPropertyTypeNameSmokeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 1422c6be0

bool __thiscall
UE::FPropertyTypeNameSmokeTest::RunTest(FPropertyTypeNameSmokeTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1422c6c10

FString * __thiscall
UE::FPropertyTypeNameSmokeTest::GetBeautifiedTestName
          (FPropertyTypeNameSmokeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPropertyTypeNameSmokeTest @ 1422ce0b0

FPropertyTypeNameSmokeTest * __thiscall
UE::FPropertyTypeNameSmokeTest::FPropertyTypeNameSmokeTest
          (FPropertyTypeNameSmokeTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPropertyTypeNameSmokeTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][UObject][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"CoreUObject::PropertyTypeName::Smoke");
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
  ::FString::FString(&local_18,"[Core][UObject][SmokeFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// operator() @ 1422d1fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPropertyTypeName __thiscall
`UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  undefined8 *in_R8;
  undefined1 auStack_118 [32];
  TStringView<wchar_t> local_f8;
  FPropertyTypeNameBuilder local_e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f8.DataPtr = (wchar_t *)*in_R8;
  local_f8._8_8_ = in_R8[1];
  local_e8.Nodes.ArrayMax = 10;
  local_e8.Nodes.AllocatorInstance.SecondaryData = (ForElementType<UE::FPropertyTypeNameNode>)0x0;
  local_e8.Nodes.ArrayNum = 0;
  local_e8.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_e8.OuterNodeIndex.ArrayNum = 0;
  local_e8.OuterNodeIndex.ArrayMax = 10;
  local_e8.ActiveIndex = -1;
  bVar3 = UE::FPropertyTypeNameBuilder::TryParse(&local_e8,&local_f8);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_f8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_f8.DataPtr);
    }
  }
  UE::FPropertyTypeNameBuilder::Build(&local_e8);
  if (local_e8.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_e8.OuterNodeIndex.AllocatorInstance.SecondaryData);
  }
  if (local_e8.Nodes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
    FMemory::Free((void *)local_e8.Nodes.AllocatorInstance.SecondaryData);
  }
  return (FPropertyTypeName)(int)param_1;
}

// operator() @ 1422d20e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
          (void *this,TStringView<wchar_t> *param_1)

{
  bool bVar1;
  undefined1 auStack_118 [32];
  TStringView<wchar_t> local_f8;
  FPropertyTypeNameBuilder local_e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f8.DataPtr = param_1->DataPtr;
  local_f8.Size = param_1->Size;
  local_f8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_e8.Nodes.ArrayMax = 10;
  local_e8.Nodes.AllocatorInstance.SecondaryData = (ForElementType<UE::FPropertyTypeNameNode>)0x0;
  local_e8.Nodes.ArrayNum = 0;
  local_e8.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_e8.OuterNodeIndex.ArrayNum = 0;
  local_e8.OuterNodeIndex.ArrayMax = 10;
  local_e8.ActiveIndex = -1;
  bVar1 = UE::FPropertyTypeNameBuilder::TryParse(&local_e8,&local_f8);
  if (local_e8.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_e8.OuterNodeIndex.AllocatorInstance.SecondaryData);
  }
  if (local_e8.Nodes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
    FMemory::Free((void *)local_e8.Nodes.AllocatorInstance.SecondaryData);
  }
  return bVar1;
}

// TestBody @ 1422f5b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::FPropertyTypeNameSmokeTest::TestBody(FPropertyTypeNameSmokeTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  ulonglong uVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  FName FVar15;
  FName FVar16;
  FName FVar17;
  FName FVar18;
  FName FVar19;
  FName FVar20;
  FName FVar21;
  FName FVar22;
  FName FVar23;
  bool bVar24;
  int iVar25;
  FPropertyTypeName FVar26;
  FNameEntryId FVar27;
  uint uVar28;
  uint uVar29;
  FPropertyTypeName FVar30;
  FAutomationTestFramework *pFVar31;
  FName FVar32;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  undefined4 extraout_var_09;
  undefined4 extraout_var_10;
  undefined4 extraout_var_11;
  undefined4 extraout_var_12;
  undefined4 extraout_var_13;
  undefined4 extraout_var_14;
  undefined4 extraout_var_15;
  undefined4 extraout_var_16;
  undefined4 extraout_var_17;
  undefined4 extraout_var_18;
  undefined4 extraout_var_19;
  undefined4 extraout_var_20;
  undefined4 extraout_var_21;
  undefined4 extraout_var_22;
  undefined4 extraout_var_23;
  undefined4 extraout_var_24;
  undefined4 extraout_var_25;
  undefined4 extraout_var_26;
  undefined4 extraout_var_27;
  undefined4 extraout_var_28;
  undefined4 extraout_var_29;
  undefined4 extraout_var_30;
  undefined4 extraout_var_31;
  undefined4 extraout_var_32;
  undefined4 extraout_var_33;
  undefined4 extraout_var_34;
  undefined4 extraout_var_35;
  undefined4 extraout_var_36;
  undefined4 extraout_var_37;
  undefined4 extraout_var_38;
  undefined4 extraout_var_39;
  undefined4 extraout_var_40;
  undefined4 extraout_var_41;
  undefined4 extraout_var_42;
  undefined4 extraout_var_43;
  undefined4 extraout_var_44;
  undefined4 extraout_var_45;
  undefined4 extraout_var_46;
  undefined4 extraout_var_47;
  undefined4 extraout_var_48;
  undefined4 extraout_var_49;
  undefined4 extraout_var_50;
  undefined4 extraout_var_51;
  undefined4 extraout_var_52;
  undefined4 extraout_var_53;
  undefined4 extraout_var_54;
  undefined4 extraout_var_55;
  undefined4 extraout_var_56;
  undefined4 extraout_var_57;
  undefined4 extraout_var_58;
  undefined4 extraout_var_59;
  undefined4 extraout_var_60;
  undefined4 extraout_var_61;
  undefined4 extraout_var_62;
  undefined4 extraout_var_63;
  undefined4 extraout_var_64;
  undefined4 extraout_var_65;
  undefined4 extraout_var_66;
  undefined4 extraout_var_67;
  undefined4 extraout_var_68;
  undefined4 extraout_var_69;
  undefined4 extraout_var_70;
  undefined4 extraout_var_71;
  undefined4 extraout_var_72;
  undefined4 extraout_var_73;
  undefined4 extraout_var_74;
  undefined4 extraout_var_75;
  undefined4 extraout_var_76;
  undefined4 extraout_var_77;
  undefined4 extraout_var_78;
  undefined4 extraout_var_79;
  undefined4 extraout_var_80;
  undefined4 extraout_var_81;
  undefined4 extraout_var_82;
  undefined4 extraout_var_83;
  undefined4 extraout_var_84;
  undefined4 extraout_var_85;
  undefined4 extraout_var_86;
  undefined4 extraout_var_87;
  undefined4 extraout_var_88;
  undefined4 extraout_var_89;
  undefined4 extraout_var_90;
  undefined4 extraout_var_91;
  undefined4 extraout_var_92;
  undefined4 extraout_var_93;
  undefined4 extraout_var_94;
  FArchive *pFVar33;
  undefined4 extraout_var_95;
  undefined4 extraout_var_96;
  undefined4 extraout_var_97;
  undefined4 extraout_var_98;
  undefined4 extraout_var_99;
  undefined4 extraout_var_x00100;
  undefined4 extraout_var_x00101;
  undefined4 extraout_var_x00102;
  undefined1 auStackY_1ca8 [32];
  undefined1 local_1c78;
  undefined1 local_1c77 [3];
  FPropertyTypeName local_1c74;
  FPropertyTypeName local_1c70;
  FPropertyTypeName local_1c6c;
  wchar_t *local_1c68;
  undefined4 uStack_1c60;
  uint uStack_1c5c;
  FPropertyTypeName local_1c58;
  FPropertyTypeName local_1c54;
  FPropertyTypeName local_1c50;
  FPropertyTypeName local_1c4c;
  FPropertyTypeName local_1c48;
  FPropertyTypeName local_1c44;
  FPropertyTypeName local_1c40;
  FPropertyTypeName local_1c3c;
  FPropertyTypeName local_1c38;
  FPropertyTypeName local_1c34;
  FPropertyTypeName local_1c30;
  FPropertyTypeName local_1c2c;
  FPropertyTypeName local_1c28;
  FPropertyTypeName local_1c24;
  FPropertyTypeName local_1c20;
  FPropertyTypeName local_1c1c;
  FPropertyTypeName local_1c18;
  FPropertyTypeName local_1c14;
  FPropertyTypeName local_1c10 [2];
  FBinaryArchiveFormatter *local_1c08;
  FName local_1c00;
  FBinaryArchiveFormatter *local_1bf8;
  FPropertyTypeName local_1bf0;
  FPropertyTypeName local_1bec;
  FPropertyTypeName local_1be8;
  FPropertyTypeName local_1be4;
  FPropertyTypeName local_1be0;
  FPropertyTypeName local_1bdc;
  FPropertyTypeName local_1bd8;
  FPropertyTypeName local_1bd4;
  FPropertyTypeName local_1bd0;
  FPropertyTypeName local_1bcc;
  FPropertyTypeName local_1bc8;
  FPropertyTypeName local_1bc4;
  FName local_1bc0;
  FPropertyTypeName local_1bb8 [2];
  uint local_1bb0;
  undefined4 uStack_1bac;
  uint local_1ba8;
  undefined4 uStack_1ba4;
  uint local_1ba0;
  undefined4 uStack_1b9c;
  uint local_1b98;
  undefined4 uStack_1b94;
  uint local_1b90;
  undefined4 uStack_1b8c;
  uint local_1b88;
  undefined4 uStack_1b84;
  uint local_1b80;
  undefined4 uStack_1b7c;
  uint local_1b78;
  undefined4 uStack_1b74;
  uint local_1b70;
  undefined4 uStack_1b6c;
  uint local_1b68;
  undefined4 uStack_1b64;
  uint local_1b60;
  undefined4 uStack_1b5c;
  uint local_1b58;
  undefined4 uStack_1b54;
  uint local_1b50;
  undefined4 uStack_1b4c;
  uint local_1b48;
  undefined4 uStack_1b44;
  undefined8 local_1b40;
  undefined8 local_1b38;
  undefined8 local_1b30;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1b28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1b18;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1b08;
  uint local_1af8;
  undefined4 uStack_1af4;
  uint local_1af0;
  undefined4 uStack_1aec;
  uint local_1ae8;
  undefined4 uStack_1ae4;
  uint local_1ae0;
  undefined4 uStack_1adc;
  uint local_1ad8;
  undefined4 uStack_1ad4;
  uint local_1ad0;
  undefined4 uStack_1acc;
  uint local_1ac8;
  undefined4 uStack_1ac4;
  undefined1 local_1ac0 [4];
  undefined1 local_1abc [4];
  undefined1 local_1ab8 [4];
  undefined1 local_1ab4 [4];
  undefined1 local_1ab0 [4];
  undefined1 local_1aac [4];
  undefined1 local_1aa8 [4];
  undefined1 local_1aa4 [4];
  undefined1 local_1aa0 [4];
  undefined1 local_1a9c [4];
  undefined1 local_1a98 [4];
  undefined1 local_1a94 [4];
  undefined1 local_1a90 [4];
  undefined1 local_1a8c [4];
  undefined1 local_1a88 [4];
  undefined1 local_1a84 [4];
  undefined1 local_1a80 [4];
  undefined1 local_1a7c [4];
  undefined1 local_1a78 [4];
  undefined1 local_1a74 [4];
  undefined1 local_1a70 [4];
  undefined1 local_1a6c [4];
  undefined1 local_1a68 [4];
  undefined1 local_1a64 [4];
  undefined1 local_1a60 [4];
  undefined1 local_1a5c [4];
  undefined1 local_1a58 [4];
  undefined1 local_1a54 [4];
  undefined1 local_1a50 [4];
  undefined1 local_1a4c [4];
  undefined1 local_1a48 [4];
  undefined1 local_1a44 [4];
  undefined1 local_1a40 [4];
  undefined1 local_1a3c [4];
  undefined1 local_1a38 [4];
  undefined1 local_1a34 [4];
  undefined1 local_1a30 [4];
  undefined1 local_1a2c [4];
  undefined1 local_1a28 [4];
  undefined1 local_1a24 [4];
  undefined1 local_1a20 [4];
  undefined1 local_1a1c [4];
  undefined1 local_1a18 [4];
  undefined1 local_1a14 [4];
  undefined1 local_1a10 [4];
  undefined1 local_1a0c [4];
  undefined1 local_1a08 [4];
  undefined1 local_1a04 [12];
  undefined1 local_19f8 [4];
  undefined1 local_19f4 [4];
  undefined1 local_19f0 [4];
  undefined1 local_19ec [4];
  undefined1 local_19e8 [4];
  undefined1 local_19e4 [4];
  undefined1 local_19e0 [4];
  undefined1 local_19dc [4];
  undefined1 local_19d8 [4];
  undefined1 local_19d4 [4];
  undefined1 local_19d0 [4];
  undefined1 local_19cc [4];
  undefined1 local_19c8 [4];
  undefined1 local_19c4 [4];
  undefined1 local_19c0 [8];
  undefined1 local_19b8 [12];
  undefined1 local_19ac [12];
  undefined1 local_19a0 [4];
  undefined1 local_199c [4];
  undefined1 local_1998 [4];
  undefined1 local_1994 [4];
  undefined1 local_1990 [4];
  undefined1 local_198c [4];
  undefined1 local_1988 [4];
  undefined1 local_1984 [4];
  undefined1 local_1980 [4];
  undefined1 local_197c [4];
  undefined1 local_1978 [4];
  undefined1 local_1974 [4];
  undefined1 local_1970 [4];
  undefined1 local_196c [4];
  undefined1 local_1968 [4];
  undefined1 local_1964 [4];
  undefined1 local_1960 [4];
  undefined1 local_195c [4];
  undefined1 local_1958 [4];
  undefined1 local_1954 [4];
  undefined1 local_1950 [8];
  undefined1 local_1948 [4];
  undefined1 local_1944 [8];
  undefined1 local_193c [4];
  undefined1 local_1938 [4];
  undefined1 local_1934 [4];
  FName local_1930;
  ulonglong local_1928;
  FName local_1920;
  ulonglong local_1918;
  undefined1 local_1910 [12];
  undefined1 local_1904 [4];
  FString local_1900;
  FString local_18f0;
  FString local_18e0;
  FString local_18d0;
  FString local_18c0;
  FString local_18b0;
  FString local_18a0;
  FString local_1890;
  FString local_1880;
  FString local_1870;
  FString local_1860;
  FString local_1850;
  FString local_1840;
  FString local_1830;
  FString local_1820;
  FString local_1810;
  FString local_1800;
  FString local_17f0;
  FString local_17e0;
  FString local_17d0;
  FString local_17c0;
  FString local_17b0;
  FString local_17a0;
  FString local_1790;
  FString local_1780;
  FString local_1770;
  FString local_1760;
  FString local_1750;
  FString local_1740;
  FString local_1730;
  FString local_1720;
  FString local_1710;
  FString local_1700;
  FString local_16f0;
  FString local_16e0;
  FString local_16d0;
  FString local_16c0;
  FString local_16b0;
  FString local_16a0;
  FString local_1690;
  FString local_1680;
  FString local_1670;
  FString local_1660;
  FString local_1650;
  FString local_1640;
  FString local_1630;
  FString local_1620;
  FString local_1610;
  FString local_1600;
  FString local_15f0;
  FString local_15e0;
  FString local_15d0;
  FString local_15c0;
  FString local_15b0;
  FString local_15a0;
  FString local_1590;
  FString local_1580;
  FString local_1570;
  FString local_1560;
  FString local_1550;
  FString local_1540;
  FString local_1530;
  FString local_1520;
  FString local_1510;
  FString local_1500;
  FString local_14f0;
  FString local_14e0;
  FString local_14d0;
  FString local_14c0;
  FString local_14b0;
  FString local_14a0;
  FString local_1490;
  FString local_1480;
  FString local_1470;
  FString local_1460;
  FString local_1450;
  FString local_1440;
  FString local_1430;
  FString local_1420;
  FString local_1410;
  FString local_1400;
  FString local_13f0;
  FString local_13e0;
  FString local_13d0;
  FString local_13c0;
  FString local_13b0;
  FString local_13a0;
  FString local_1390;
  FString local_1380;
  FString local_1370;
  FString local_1360;
  FString local_1350;
  FString local_1340;
  FString local_1330;
  FString local_1320;
  FString local_1310;
  FString local_1300;
  FString local_12f0;
  FString local_12e0;
  FString local_12d0;
  FString local_12c0;
  FString local_12b0;
  FString local_12a0;
  FString local_1290;
  FString local_1280;
  FString local_1270;
  FString local_1260;
  FString local_1250;
  FString local_1240;
  FString local_1230;
  FString local_1220;
  FString local_1210;
  FString local_1200;
  FBinaryArchiveFormatter local_11f0;
  FString local_11e0;
  FString local_11d0;
  FString local_11c0;
  FString local_11b0;
  FString local_11a0;
  FString local_1190;
  FString local_1180;
  FString local_1170;
  FBinaryArchiveFormatter local_1160;
  FString local_1150;
  FString local_1140;
  FString local_1130;
  FString local_1120;
  FString local_1110;
  FString local_1100;
  FString local_10f0;
  FString local_10e0;
  FString local_10d0;
  wchar_t *local_10b8;
  undefined4 uStack_10b0;
  undefined4 uStack_10ac;
  FString local_10a8;
  wchar_t *local_1098;
  undefined4 uStack_1090;
  undefined4 uStack_108c;
  FString local_1088;
  wchar_t *local_1078;
  undefined4 uStack_1070;
  undefined4 uStack_106c;
  FString local_1068;
  wchar_t *local_1058;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
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
  FString local_fa8 [8];
  wchar_t *local_f28;
  undefined8 uStack_f20;
  wchar_t *local_f18;
  undefined8 uStack_f10;
  wchar_t *local_f08;
  undefined8 uStack_f00;
  wchar_t *local_ef8;
  undefined8 uStack_ef0;
  wchar_t *local_ee8;
  undefined8 uStack_ee0;
  wchar_t *local_ed8;
  undefined8 uStack_ed0;
  TStringView<wchar_t> local_ec8;
  TStringView<wchar_t> local_eb8;
  TStringView<wchar_t> local_ea8;
  TStringView<wchar_t> local_e98;
  TStringView<wchar_t> local_e88;
  TStringView<wchar_t> local_e78;
  TStringView<wchar_t> local_e68;
  TStringView<wchar_t> local_e58;
  TStringView<wchar_t> local_e48;
  TStringView<wchar_t> local_e38;
  TStringView<wchar_t> local_e28;
  TStringView<wchar_t> local_e18;
  TStringView<wchar_t> local_e08;
  TStringView<wchar_t> local_df8;
  TStringView<wchar_t> local_de8;
  TStringView<wchar_t> local_dd8;
  TStringView<wchar_t> local_dc8;
  TStringView<wchar_t> local_db8;
  TStringView<wchar_t> local_da8;
  FMemoryWriter local_d98;
  FMemoryWriter local_ce8;
  FMemoryWriter local_c38;
  FMemoryReader local_b88;
  FMemoryReader local_ad8;
  FMemoryReader local_a28;
  FPropertyTypeNameBuilder local_978;
  FPropertyTypeNameBuilder local_8a8;
  FPropertyTypeNameBuilder local_7d8;
  FPropertyTypeNameBuilder local_708;
  FPropertyTypeNameBuilder local_638;
  FPropertyTypeNameBuilder local_568;
  TStringBuilderBase<wchar_t> local_498;
  wchar_t local_478 [128];
  TStringBuilderBase<wchar_t> local_378;
  wchar_t local_358 [128];
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [128];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[1] = 0x1422f5b72;
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_1ca8;
  pFVar31 = FAutomationTestFramework::Get();
  pFVar1 = pFVar31->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1840,L"Empty");
  (*pcVar2)(pFVar1,&local_1840,0);
  if (local_1840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1840.Data.AllocatorInstance.Data);
  }
  local_1c20.Index = 0;
  FVar32 = FPropertyTypeName::GetName(&local_1c20);
  if (*(longlong *)FVar32 != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1830,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1830,0);
    if (local_1830.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1830.Data.AllocatorInstance.Data);
    }
  }
  iVar25 = FPropertyTypeName::GetParameterCount(&local_1c20);
  if (iVar25 != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1820,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1820,0);
    if (local_1820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1820.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c20,(int)local_1ac0);
  if (*(int *)CONCAT44(extraout_var,FVar26.Index) != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1810,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1810,0);
    if (local_1810.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1810.Data.AllocatorInstance.Data);
    }
  }
  pFVar31 = FAutomationTestFramework::Get();
  pFVar1 = pFVar31->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1800,L"Numeric");
  (*pcVar2)(pFVar1,&local_1800,0);
  if (local_1800.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1800.Data.AllocatorInstance.Data);
  }
  PropertyTypeNameTest::CreateInt();
  if (local_1c24.Index == 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_17f0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_17f0,0);
    if (local_17f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_17f0.Data.AllocatorInstance.Data);
    }
  }
  FVar32 = FPropertyTypeName::GetName(&local_1c24);
  uVar3 = *(ulonglong *)FVar32;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1abc);
  if (uVar3 != *(uint *)CONCAT44(extraout_var_00,FVar27.Value)) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_17e0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_17e0,0);
    if (local_17e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_17e0.Data.AllocatorInstance.Data);
    }
  }
  iVar25 = FPropertyTypeName::GetParameterCount(&local_1c24);
  if (iVar25 != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_17d0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_17d0,0);
    if (local_17d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_17d0.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c24,(int)local_1ab8);
  if (*(int *)CONCAT44(extraout_var_01,FVar26.Index) != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_17c0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_17c0,0);
    if (local_17c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_17c0.Data.AllocatorInstance.Data);
    }
  }
  pFVar31 = FAutomationTestFramework::Get();
  pFVar1 = pFVar31->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_17b0,L"NumericArray");
  (*pcVar2)(pFVar1,&local_17b0,0);
  if (local_17b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_17b0.Data.AllocatorInstance.Data);
  }
  local_708.Nodes.AllocatorInstance.SecondaryData = (ForElementType<UE::FPropertyTypeNameNode>)0x0;
  local_708.Nodes.ArrayNum = 0;
  local_708.Nodes.ArrayMax = 10;
  local_708.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_708.OuterNodeIndex.ArrayNum = 0;
  local_708.OuterNodeIndex.ArrayMax = 10;
  local_708.ActiveIndex = -1;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1ab4);
  uStack_1aec = 0;
  local_1af0 = *(uint *)CONCAT44(extraout_var_02,FVar27.Value);
  FVar32.Number = 0;
  FVar32.ComparisonIndex.Value = local_1af0;
  FPropertyTypeNameBuilder::AddName(&local_708,FVar32);
  FPropertyTypeNameBuilder::BeginParameters(&local_708);
  FVar27 = FNameEntryId::FromValidEName((EName)local_1ab0);
  uStack_1ae4 = 0;
  local_1ae8 = *(uint *)CONCAT44(extraout_var_03,FVar27.Value);
  FVar19.Number = 0;
  FVar19.ComparisonIndex.Value = local_1ae8;
  FPropertyTypeNameBuilder::AddName(&local_708,FVar19);
  FPropertyTypeNameBuilder::EndParameters(&local_708);
  FPropertyTypeNameBuilder::Build(&local_708);
  if (local_1c34.Index == 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_17a0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_17a0,0);
    if (local_17a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_17a0.Data.AllocatorInstance.Data);
    }
  }
  FVar32 = FPropertyTypeName::GetName(&local_1c34);
  uVar3 = *(ulonglong *)FVar32;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1aac);
  if (uVar3 != *(uint *)CONCAT44(extraout_var_04,FVar27.Value)) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1790,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1790,0);
    if (local_1790.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1790.Data.AllocatorInstance.Data);
    }
  }
  iVar25 = FPropertyTypeName::GetParameterCount(&local_1c34);
  if (iVar25 != 1) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1780,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1780,0);
    if (local_1780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1780.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c34,(int)local_1aa8);
  FVar32 = FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var_05,FVar26.Index));
  uVar3 = *(ulonglong *)FVar32;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1aa4);
  if (uVar3 != *(uint *)CONCAT44(extraout_var_06,FVar27.Value)) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1770,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1770,0);
    if (local_1770.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1770.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c34,(int)local_1aa0);
  iVar25 = FPropertyTypeName::GetParameterCount
                     ((FPropertyTypeName *)CONCAT44(extraout_var_07,FVar26.Index));
  if (iVar25 != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1760,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1760,0);
    if (local_1760.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1760.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c34,(int)local_1a9c);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_08,FVar26.Index),(int)local_1a98);
  if (*(int *)CONCAT44(extraout_var_09,FVar26.Index) != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1750,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1750,0);
    if (local_1750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1750.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c34,(int)local_1a94);
  if (*(int *)CONCAT44(extraout_var_10,FVar26.Index) != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1740,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1740,0);
    if (local_1740.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1740.Data.AllocatorInstance.Data);
    }
  }
  if (local_708.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_708.OuterNodeIndex.AllocatorInstance.SecondaryData);
  }
  if (local_708.Nodes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
    FMemory::Free((void *)local_708.Nodes.AllocatorInstance.SecondaryData);
  }
  pFVar31 = FAutomationTestFramework::Get();
  pFVar1 = pFVar31->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1730,L"StructArray");
  (*pcVar2)(pFVar1,&local_1730,0);
  if (local_1730.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1730.Data.AllocatorInstance.Data);
  }
  PropertyTypeNameTest::CreateVectorArray();
  if (local_1c54.Index == 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1720,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1720,0);
    if (local_1720.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1720.Data.AllocatorInstance.Data);
    }
  }
  FVar32 = FPropertyTypeName::GetName(&local_1c54);
  uVar3 = *(ulonglong *)FVar32;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1a90);
  if (uVar3 != *(uint *)CONCAT44(extraout_var_11,FVar27.Value)) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1710,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1710,0);
    if (local_1710.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1710.Data.AllocatorInstance.Data);
    }
  }
  iVar25 = FPropertyTypeName::GetParameterCount(&local_1c54);
  if (iVar25 != 1) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1700,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1700,0);
    if (local_1700.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1700.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c54,(int)local_1a8c);
  FVar32 = FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var_12,FVar26.Index));
  uVar3 = *(ulonglong *)FVar32;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1a88);
  if (uVar3 != *(uint *)CONCAT44(extraout_var_13,FVar27.Value)) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_16f0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_16f0,0);
    if (local_16f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_16f0.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c54,(int)local_1a84);
  iVar25 = FPropertyTypeName::GetParameterCount
                     ((FPropertyTypeName *)CONCAT44(extraout_var_14,FVar26.Index));
  if (iVar25 != 1) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_16e0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_16e0,0);
    if (local_16e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_16e0.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c54,(int)local_1a80);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_15,FVar26.Index),(int)local_1a7c);
  FVar32 = FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var_16,FVar26.Index));
  uVar3 = *(ulonglong *)FVar32;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1a78);
  if (uVar3 != *(uint *)CONCAT44(extraout_var_17,FVar27.Value)) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_16d0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_16d0,0);
    if (local_16d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_16d0.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c54,(int)local_1a74);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_18,FVar26.Index),(int)local_1a70);
  iVar25 = FPropertyTypeName::GetParameterCount
                     ((FPropertyTypeName *)CONCAT44(extraout_var_19,FVar26.Index));
  if (iVar25 != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_16c0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_16c0,0);
    if (local_16c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_16c0.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c54,(int)local_1a6c);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_20,FVar26.Index),(int)local_1a68);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_21,FVar26.Index),(int)local_1a64);
  if (*(int *)CONCAT44(extraout_var_22,FVar26.Index) != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_16b0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_16b0,0);
    if (local_16b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_16b0.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c54,(int)local_1a60);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_23,FVar26.Index),(int)local_1a5c);
  if (*(int *)CONCAT44(extraout_var_24,FVar26.Index) != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_16a0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_16a0,0);
    if (local_16a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_16a0.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c54,(int)local_1a58);
  if (*(int *)CONCAT44(extraout_var_25,FVar26.Index) != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1690,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1690,0);
    if (local_1690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1690.Data.AllocatorInstance.Data);
    }
  }
  pFVar31 = FAutomationTestFramework::Get();
  pFVar1 = pFVar31->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1680,L"NumericMap");
  (*pcVar2)(pFVar1,&local_1680,0);
  if (local_1680.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1680.Data.AllocatorInstance.Data);
  }
  local_8a8.Nodes.AllocatorInstance.SecondaryData = (ForElementType<UE::FPropertyTypeNameNode>)0x0;
  local_8a8.Nodes.ArrayNum = 0;
  local_8a8.Nodes.ArrayMax = 10;
  local_8a8.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_8a8.OuterNodeIndex.ArrayNum = 0;
  local_8a8.OuterNodeIndex.ArrayMax = 10;
  local_8a8.ActiveIndex = -1;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1a54);
  uStack_1adc = 0;
  local_1ae0 = *(uint *)CONCAT44(extraout_var_26,FVar27.Value);
  FVar20.Number = 0;
  FVar20.ComparisonIndex.Value = local_1ae0;
  FPropertyTypeNameBuilder::AddName(&local_8a8,FVar20);
  FPropertyTypeNameBuilder::BeginParameters(&local_8a8);
  FVar27 = FNameEntryId::FromValidEName((EName)local_1a50);
  uStack_1ad4 = 0;
  local_1ad8 = *(uint *)CONCAT44(extraout_var_27,FVar27.Value);
  FVar21.Number = 0;
  FVar21.ComparisonIndex.Value = local_1ad8;
  FPropertyTypeNameBuilder::AddName(&local_8a8,FVar21);
  FVar27 = FNameEntryId::FromValidEName((EName)local_1a4c);
  uStack_1acc = 0;
  local_1ad0 = *(uint *)CONCAT44(extraout_var_28,FVar27.Value);
  FVar22.Number = 0;
  FVar22.ComparisonIndex.Value = local_1ad0;
  FPropertyTypeNameBuilder::AddName(&local_8a8,FVar22);
  FPropertyTypeNameBuilder::EndParameters(&local_8a8);
  FPropertyTypeNameBuilder::Build(&local_8a8);
  if (local_1c38.Index == 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1670,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1670,0);
    if (local_1670.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1670.Data.AllocatorInstance.Data);
    }
  }
  FVar32 = FPropertyTypeName::GetName(&local_1c38);
  uVar3 = *(ulonglong *)FVar32;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1a48);
  if (uVar3 != *(uint *)CONCAT44(extraout_var_29,FVar27.Value)) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1660,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1660,0);
    if (local_1660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1660.Data.AllocatorInstance.Data);
    }
  }
  iVar25 = FPropertyTypeName::GetParameterCount(&local_1c38);
  if (iVar25 != 2) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1650,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1650,0);
    if (local_1650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1650.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c38,(int)local_1a44);
  FVar32 = FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var_30,FVar26.Index));
  uVar3 = *(ulonglong *)FVar32;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1a40);
  if (uVar3 != *(uint *)CONCAT44(extraout_var_31,FVar27.Value)) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1640,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1640,0);
    if (local_1640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1640.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c38,(int)local_1a3c);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_32,FVar26.Index),(int)local_1a38);
  if (*(int *)CONCAT44(extraout_var_33,FVar26.Index) != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1630,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1630,0);
    if (local_1630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1630.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c38,(int)local_1a34);
  FVar32 = FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var_34,FVar26.Index));
  uVar3 = *(ulonglong *)FVar32;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1a30);
  if (uVar3 != *(uint *)CONCAT44(extraout_var_35,FVar27.Value)) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1620,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1620,0);
    if (local_1620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1620.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c38,(int)local_1a2c);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_36,FVar26.Index),(int)local_1a28);
  if (*(int *)CONCAT44(extraout_var_37,FVar26.Index) != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1610,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1610,0);
    if (local_1610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1610.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c38,(int)local_1a24);
  if (*(int *)CONCAT44(extraout_var_38,FVar26.Index) != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1600,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1600,0);
    if (local_1600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1600.Data.AllocatorInstance.Data);
    }
  }
  if (local_8a8.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_8a8.OuterNodeIndex.AllocatorInstance.SecondaryData);
  }
  if (local_8a8.Nodes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
    FMemory::Free((void *)local_8a8.Nodes.AllocatorInstance.SecondaryData);
  }
  pFVar31 = FAutomationTestFramework::Get();
  pFVar1 = pFVar31->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_15f0,L"EnumMap");
  (*pcVar2)(pFVar1,&local_15f0,0);
  if (local_15f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_15f0.Data.AllocatorInstance.Data);
  }
  PropertyTypeNameTest::CreateEnumMap();
  if (local_1c6c.Index == 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_15e0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_15e0,0);
    if (local_15e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_15e0.Data.AllocatorInstance.Data);
    }
  }
  FVar32 = FPropertyTypeName::GetName(&local_1c6c);
  uVar3 = *(ulonglong *)FVar32;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1a20);
  if (uVar3 != *(uint *)CONCAT44(extraout_var_39,FVar27.Value)) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_15d0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_15d0,0);
    if (local_15d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_15d0.Data.AllocatorInstance.Data);
    }
  }
  iVar25 = FPropertyTypeName::GetParameterCount(&local_1c6c);
  if (iVar25 != 2) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_15c0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_15c0,0);
    if (local_15c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_15c0.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c6c,(int)local_1a1c);
  FVar32 = FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var_40,FVar26.Index));
  uVar3 = *(ulonglong *)FVar32;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1a18);
  if (uVar3 != *(uint *)CONCAT44(extraout_var_41,FVar27.Value)) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_15b0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_15b0,0);
    if (local_15b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_15b0.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c6c,(int)local_1a14);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_42,FVar26.Index),(int)local_1a10);
  FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var_43,FVar26.Index));
  bVar24 = ::FName::Equals(local_1930,L"Key");
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_15a0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_15a0,0);
    if (local_15a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_15a0.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c6c,(int)local_1a0c);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_44,FVar26.Index),(int)local_1910);
  FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var_45,FVar26.Index));
  FVar27 = FNameEntryId::FromValidEName((EName)local_1994);
  if (local_1928 != *(uint *)CONCAT44(extraout_var_46,FVar27.Value)) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1590,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1590,0);
    if (local_1590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1590.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c6c,(int)local_1998);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_47,FVar26.Index),(int)local_199c);
  iVar25 = FPropertyTypeName::GetParameterCount
                     ((FPropertyTypeName *)CONCAT44(extraout_var_48,FVar26.Index));
  if (iVar25 != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1580,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1580,0);
    if (local_1580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1580.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c6c,(int)local_19a0);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_49,FVar26.Index),(int)local_196c);
  iVar25 = FPropertyTypeName::GetParameterCount
                     ((FPropertyTypeName *)CONCAT44(extraout_var_50,FVar26.Index));
  if (iVar25 != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1570,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1570,0);
    if (local_1570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1570.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c6c,(int)local_19c4);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_51,FVar26.Index),(int)local_1990);
  if (*(int *)CONCAT44(extraout_var_52,FVar26.Index) != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1560,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1560,0);
    if (local_1560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1560.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c6c,(int)local_198c);
  FVar32 = FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var_53,FVar26.Index));
  uVar3 = *(ulonglong *)FVar32;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1988);
  if (uVar3 != *(uint *)CONCAT44(extraout_var_54,FVar27.Value)) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1550,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1550,0);
    if (local_1550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1550.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c6c,(int)local_1984);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_55,FVar26.Index),(int)local_1980);
  FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var_56,FVar26.Index));
  bVar24 = ::FName::Equals(local_1920,L"Value");
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1540,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1540,0);
    if (local_1540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1540.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c6c,(int)local_197c);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_57,FVar26.Index),(int)local_1978);
  FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var_58,FVar26.Index));
  FVar27 = FNameEntryId::FromValidEName((EName)local_1974);
  if (local_1918 != *(uint *)CONCAT44(extraout_var_59,FVar27.Value)) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1530,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1530,0);
    if (local_1530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1530.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c6c,(int)local_1970);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_60,FVar26.Index),(int)local_1968);
  iVar25 = FPropertyTypeName::GetParameterCount
                     ((FPropertyTypeName *)CONCAT44(extraout_var_61,FVar26.Index));
  if (iVar25 != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1520,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1520,0);
    if (local_1520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1520.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c6c,(int)local_1964);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_62,FVar26.Index),(int)local_1960);
  iVar25 = FPropertyTypeName::GetParameterCount
                     ((FPropertyTypeName *)CONCAT44(extraout_var_63,FVar26.Index));
  if (iVar25 != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1510,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1510,0);
    if (local_1510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1510.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c6c,(int)local_195c);
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_64,FVar26.Index),(int)local_1958);
  if (*(int *)CONCAT44(extraout_var_65,FVar26.Index) != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1500,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1500,0);
    if (local_1500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1500.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c6c,(int)local_1954);
  if (*(int *)CONCAT44(extraout_var_66,FVar26.Index) != 0) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_14f0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_14f0,0);
    if (local_14f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_14f0.Data.AllocatorInstance.Data);
    }
  }
  pFVar31 = FAutomationTestFramework::Get();
  pFVar1 = pFVar31->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_14e0,L"IsStruct");
  (*pcVar2)(pFVar1,&local_14e0,0);
  if (local_14e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_14e0.Data.AllocatorInstance.Data);
  }
  local_638.Nodes.AllocatorInstance.SecondaryData = (ForElementType<UE::FPropertyTypeNameNode>)0x0;
  local_638.Nodes.ArrayNum = 0;
  local_638.Nodes.ArrayMax = 10;
  local_638.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_638.OuterNodeIndex.ArrayNum = 0;
  local_638.OuterNodeIndex.ArrayMax = 10;
  local_638.ActiveIndex = -1;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1950);
  uStack_1ac4 = 0;
  local_1ac8 = *(uint *)CONCAT44(extraout_var_67,FVar27.Value);
  FVar23.Number = 0;
  FVar23.ComparisonIndex.Value = local_1ac8;
  FPropertyTypeNameBuilder::AddName(&local_638,FVar23);
  FVar26 = FPropertyTypeNameBuilder::Build(&local_638);
  FVar27 = FNameEntryId::FromValidEName((EName)local_1948);
  uStack_1bac = 0;
  local_1bb0 = *(uint *)CONCAT44(extraout_var_69,FVar27.Value);
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = local_1bb0;
  bVar24 = FPropertyTypeName::IsStruct
                     ((FPropertyTypeName *)CONCAT44(extraout_var_68,FVar26.Index),FVar4);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_14d0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_14d0,0);
    if (local_14d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_14d0.Data.AllocatorInstance.Data);
    }
  }
  local_1bc4.Index = 0;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1944);
  uStack_1ba4 = 0;
  local_1ba8 = *(uint *)CONCAT44(extraout_var_70,FVar27.Value);
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = local_1ba8;
  bVar24 = FPropertyTypeName::IsStruct(&local_1bc4,FVar5);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_14c0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_14c0,0);
    if (local_14c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_14c0.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = PropertyTypeNameTest::CreateVectorArray();
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_71,FVar26.Index),(int)local_193c);
  FVar27 = FNameEntryId::FromValidEName((EName)local_1938);
  uStack_1b9c = 0;
  local_1ba0 = *(uint *)CONCAT44(extraout_var_73,FVar27.Value);
  FVar6.Number = 0;
  FVar6.ComparisonIndex.Value = local_1ba0;
  bVar24 = FPropertyTypeName::IsStruct
                     ((FPropertyTypeName *)CONCAT44(extraout_var_72,FVar26.Index),FVar6);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_14b0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_14b0,0);
    if (local_14b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_14b0.Data.AllocatorInstance.Data);
    }
  }
  if (local_638.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_638.OuterNodeIndex.AllocatorInstance.SecondaryData);
  }
  if (local_638.Nodes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
    FMemory::Free((void *)local_638.Nodes.AllocatorInstance.SecondaryData);
  }
  pFVar31 = FAutomationTestFramework::Get();
  pFVar1 = pFVar31->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_14a0,L"IsEnum(EnumProperty)");
  (*pcVar2)(pFVar1,&local_14a0,0);
  if (local_14a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_14a0.Data.AllocatorInstance.Data);
  }
  ::FName::FName(&local_1bc0,L"Key");
  local_568.Nodes.AllocatorInstance.SecondaryData = (ForElementType<UE::FPropertyTypeNameNode>)0x0;
  local_568.Nodes.ArrayNum = 0;
  local_568.Nodes.ArrayMax = 10;
  local_568.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_568.OuterNodeIndex.ArrayNum = 0;
  local_568.OuterNodeIndex.ArrayMax = 10;
  local_568.ActiveIndex = -1;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1934);
  uStack_1af4 = 0;
  local_1af8 = *(uint *)CONCAT44(extraout_var_74,FVar27.Value);
  FVar18.Number = 0;
  FVar18.ComparisonIndex.Value = local_1af8;
  FPropertyTypeNameBuilder::AddName(&local_568,FVar18);
  FVar26 = FPropertyTypeNameBuilder::Build(&local_568);
  bVar24 = FPropertyTypeName::IsEnum
                     ((FPropertyTypeName *)CONCAT44(extraout_var_75,FVar26.Index),local_1bc0);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1490,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1490,0);
    if (local_1490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1490.Data.AllocatorInstance.Data);
    }
  }
  local_1bf0.Index = 0;
  bVar24 = FPropertyTypeName::IsEnum(&local_1bf0,local_1bc0);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1480,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1480,0);
    if (local_1480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1480.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = PropertyTypeNameTest::CreateEnumMap();
  FVar26 = FPropertyTypeName::GetParameter
                     ((FPropertyTypeName *)CONCAT44(extraout_var_76,FVar26.Index),(int)local_1a08);
  bVar24 = FPropertyTypeName::IsEnum
                     ((FPropertyTypeName *)CONCAT44(extraout_var_77,FVar26.Index),local_1bc0);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1470,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1470,0);
    if (local_1470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1470.Data.AllocatorInstance.Data);
    }
  }
  if (local_568.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_568.OuterNodeIndex.AllocatorInstance.SecondaryData);
  }
  if (local_568.Nodes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
    FMemory::Free((void *)local_568.Nodes.AllocatorInstance.SecondaryData);
  }
  pFVar31 = FAutomationTestFramework::Get();
  pFVar1 = pFVar31->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1460,L"IsEnum(ByteProperty)");
  (*pcVar2)(pFVar1,&local_1460,0);
  if (local_1460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1460.Data.AllocatorInstance.Data);
  }
  ::FName::FName(&local_1c00,L"Key");
  local_7d8.Nodes.AllocatorInstance.SecondaryData = (ForElementType<UE::FPropertyTypeNameNode>)0x0;
  local_7d8.Nodes.ArrayNum = 0;
  local_7d8.Nodes.ArrayMax = 10;
  local_7d8.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_7d8.OuterNodeIndex.ArrayNum = 0;
  local_7d8.OuterNodeIndex.ArrayMax = 10;
  local_7d8.ActiveIndex = -1;
  FVar27 = FNameEntryId::FromValidEName((EName)local_1a04);
  uStack_1b94 = 0;
  local_1b98 = *(uint *)CONCAT44(extraout_var_78,FVar27.Value);
  FVar7.Number = 0;
  FVar7.ComparisonIndex.Value = local_1b98;
  FPropertyTypeNameBuilder::AddName(&local_7d8,FVar7);
  FVar26 = FPropertyTypeNameBuilder::Build(&local_7d8);
  bVar24 = FPropertyTypeName::IsEnum
                     ((FPropertyTypeName *)CONCAT44(extraout_var_79,FVar26.Index),local_1c00);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1450,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1450,0);
    if (local_1450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1450.Data.AllocatorInstance.Data);
    }
  }
  local_1bec.Index = 0;
  bVar24 = FPropertyTypeName::IsEnum(&local_1bec,local_1c00);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1440,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1440,0);
    if (local_1440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1440.Data.AllocatorInstance.Data);
    }
  }
  FPropertyTypeNameBuilder::BeginParameters(&local_7d8);
  FPropertyTypeNameBuilder::AddName(&local_7d8,local_1c00);
  FPropertyTypeNameBuilder::EndParameters(&local_7d8);
  FVar26 = FPropertyTypeNameBuilder::Build(&local_7d8);
  bVar24 = FPropertyTypeName::IsEnum
                     ((FPropertyTypeName *)CONCAT44(extraout_var_80,FVar26.Index),local_1c00);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1430,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1430,0);
    if (local_1430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1430.Data.AllocatorInstance.Data);
    }
  }
  if (local_7d8.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_7d8.OuterNodeIndex.AllocatorInstance.SecondaryData);
  }
  if (local_7d8.Nodes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
    FMemory::Free((void *)local_7d8.Nodes.AllocatorInstance.SecondaryData);
  }
  pFVar31 = FAutomationTestFramework::Get();
  pFVar1 = pFVar31->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1420,L"Equals+Less+GetTypeHash");
  (*pcVar2)(pFVar1,&local_1420,0);
  if (local_1420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1420.Data.AllocatorInstance.Data);
  }
  PropertyTypeNameTest::CreateInt();
  PropertyTypeNameTest::CreateVectorArray();
  local_978.Nodes.AllocatorInstance.SecondaryData = (ForElementType<UE::FPropertyTypeNameNode>)0x0;
  local_978.Nodes.ArrayNum = 0;
  local_978.Nodes.ArrayMax = 10;
  local_978.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_978.OuterNodeIndex.ArrayNum = 0;
  local_978.OuterNodeIndex.ArrayMax = 10;
  local_978.ActiveIndex = -1;
  FVar27 = FNameEntryId::FromValidEName((EName)local_19f8);
  uStack_1b8c = 0;
  local_1b90 = *(uint *)CONCAT44(extraout_var_81,FVar27.Value);
  FVar8.Number = 0;
  FVar8.ComparisonIndex.Value = local_1b90;
  FPropertyTypeNameBuilder::AddName(&local_978,FVar8);
  FPropertyTypeNameBuilder::BeginParameters(&local_978);
  FVar27 = FNameEntryId::FromValidEName((EName)local_19f4);
  uStack_1b84 = 0;
  local_1b88 = *(uint *)CONCAT44(extraout_var_82,FVar27.Value);
  FVar9.Number = 0;
  FVar9.ComparisonIndex.Value = local_1b88;
  FPropertyTypeNameBuilder::AddName(&local_978,FVar9);
  FVar27 = FNameEntryId::FromValidEName((EName)local_19f0);
  uStack_1b7c = 0;
  local_1b80 = *(uint *)CONCAT44(extraout_var_83,FVar27.Value);
  FVar10.Number = 0;
  FVar10.ComparisonIndex.Value = local_1b80;
  FPropertyTypeNameBuilder::AddName(&local_978,FVar10);
  FPropertyTypeNameBuilder::EndParameters(&local_978);
  FPropertyTypeNameBuilder::Build(&local_978);
  FPropertyTypeNameBuilder::Reset(&local_978);
  FVar27 = FNameEntryId::FromValidEName((EName)local_19ec);
  uStack_1b74 = 0;
  local_1b78 = *(uint *)CONCAT44(extraout_var_84,FVar27.Value);
  FVar11.Number = 0;
  FVar11.ComparisonIndex.Value = local_1b78;
  FPropertyTypeNameBuilder::AddName(&local_978,FVar11);
  FPropertyTypeNameBuilder::BeginParameters(&local_978);
  FVar27 = FNameEntryId::FromValidEName((EName)local_19e8);
  uStack_1b6c = 0;
  local_1b70 = *(uint *)CONCAT44(extraout_var_85,FVar27.Value);
  FVar12.Number = 0;
  FVar12.ComparisonIndex.Value = local_1b70;
  FPropertyTypeNameBuilder::AddName(&local_978,FVar12);
  FVar27 = FNameEntryId::FromValidEName((EName)local_19e4);
  uStack_1b64 = 0;
  local_1b68 = *(uint *)CONCAT44(extraout_var_86,FVar27.Value);
  FVar13.Number = 0;
  FVar13.ComparisonIndex.Value = local_1b68;
  FPropertyTypeNameBuilder::AddName(&local_978,FVar13);
  FPropertyTypeNameBuilder::BeginParameters(&local_978);
  FVar27 = FNameEntryId::FromValidEName((EName)local_19e0);
  local_1b60 = *(uint *)CONCAT44(extraout_var_87,FVar27.Value);
  uStack_1b5c = 0;
  FVar14.Number = 0;
  FVar14.ComparisonIndex.Value = local_1b60;
  FPropertyTypeNameBuilder::AddName(&local_978,FVar14);
  FVar27 = FNameEntryId::FromValidEName((EName)local_19dc);
  uStack_1b54 = 0;
  local_1b58 = *(uint *)CONCAT44(extraout_var_88,FVar27.Value);
  FVar15.Number = 0;
  FVar15.ComparisonIndex.Value = local_1b58;
  FPropertyTypeNameBuilder::AddName(&local_978,FVar15);
  FPropertyTypeNameBuilder::EndParameters(&local_978);
  FPropertyTypeNameBuilder::EndParameters(&local_978);
  FPropertyTypeNameBuilder::Build(&local_978);
  FPropertyTypeNameBuilder::Reset(&local_978);
  FVar27 = FNameEntryId::FromValidEName((EName)local_19d8);
  uStack_1b4c = 0;
  local_1b50 = *(uint *)CONCAT44(extraout_var_89,FVar27.Value);
  FVar16.Number = 0;
  FVar16.ComparisonIndex.Value = local_1b50;
  FPropertyTypeNameBuilder::AddName(&local_978,FVar16);
  FPropertyTypeNameBuilder::BeginParameters(&local_978);
  FVar27 = FNameEntryId::FromValidEName((EName)local_19d4);
  uStack_1b44 = 0;
  local_1b48 = *(uint *)CONCAT44(extraout_var_90,FVar27.Value);
  FVar17.Number = 0;
  FVar17.ComparisonIndex.Value = local_1b48;
  FPropertyTypeNameBuilder::AddName(&local_978,FVar17);
  FPropertyTypeNameBuilder::AddType(&local_978,local_1c70);
  FPropertyTypeNameBuilder::EndParameters(&local_978);
  FPropertyTypeNameBuilder::Build(&local_978);
  local_1be8.Index = 0;
  local_1be4.Index = 0;
  bVar24 = UE::operator==(&local_1be4,&local_1be8);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1410,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1410,0);
    if (local_1410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1410.Data.AllocatorInstance.Data);
    }
  }
  local_1be0.Index = 0;
  local_1bdc.Index = 0;
  uVar28 = UE::GetTypeHash(&local_1be0);
  uVar29 = UE::GetTypeHash(&local_1bdc);
  if (uVar29 != uVar28) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1400,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1400,0);
    if (local_1400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1400.Data.AllocatorInstance.Data);
    }
  }
  local_1bc8.Index = local_1c74.Index;
  bVar24 = UE::operator==(&local_1c74,&local_1bc8);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_13f0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_13f0,0);
    if (local_13f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13f0.Data.AllocatorInstance.Data);
    }
  }
  local_1bd8.Index = local_1c74.Index;
  bVar24 = UE::operator<(&local_1c74,&local_1bd8);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_13e0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_13e0,0);
    if (local_13e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13e0.Data.AllocatorInstance.Data);
    }
  }
  local_1bd4.Index = local_1c74.Index;
  uVar28 = UE::GetTypeHash(&local_1bd4);
  uVar29 = UE::GetTypeHash(&local_1c74);
  if (uVar29 != uVar28) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_13d0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_13d0,0);
    if (local_13d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13d0.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator==(&local_1c74,&local_1c50);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_13c0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_13c0,0);
    if (local_13c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13c0.Data.AllocatorInstance.Data);
    }
  }
  local_1bd0.Index = 0;
  bVar24 = UE::operator==(&local_1c74,&local_1bd0);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_13b0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_13b0,0);
    if (local_13b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13b0.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator<(&local_1c50,&local_1c50);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_13a0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_13a0,0);
    if (local_13a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13a0.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator<(&local_1c74,&local_1c50);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1390,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1390,0);
    if (local_1390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1390.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator<(&local_1c50,&local_1c74);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1380,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1380,0);
    if (local_1380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1380.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = UE::GetTypeHash(&local_1c50);
  uVar29 = UE::GetTypeHash(&local_1c74);
  if (uVar29 == uVar28) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1370,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1370,0);
    if (local_1370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1370.Data.AllocatorInstance.Data);
    }
  }
  local_1bcc.Index = 0;
  uVar28 = UE::GetTypeHash(&local_1bcc);
  uVar29 = UE::GetTypeHash(&local_1c74);
  if (uVar29 == uVar28) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1360,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1360,0);
    if (local_1360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1360.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c70,(int)local_19d0);
  bVar24 = UE::operator==(&local_1c74,(FPropertyTypeName *)CONCAT44(extraout_var_91,FVar26.Index));
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1350,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1350,0);
    if (local_1350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1350.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator==(&local_1c74,&local_1c70);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1340,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1340,0);
    if (local_1340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1340.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator==(&local_1c70,&local_1c74);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1330,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1330,0);
    if (local_1330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1330.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator<(&local_1c70,&local_1c70);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1320,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1320,0);
    if (local_1320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1320.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator<(&local_1c74,&local_1c70);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1310,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1310,0);
    if (local_1310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1310.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator<(&local_1c70,&local_1c74);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1300,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1300,0);
    if (local_1300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1300.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator<(&local_1c70,&local_1c50);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_12f0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_12f0,0);
    if (local_12f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12f0.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator<(&local_1c50,&local_1c70);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_12e0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_12e0,0);
    if (local_12e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12e0.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c70,(int)local_19cc);
  uVar28 = UE::GetTypeHash((FPropertyTypeName *)CONCAT44(extraout_var_92,FVar26.Index));
  uVar29 = UE::GetTypeHash(&local_1c74);
  if (uVar29 != uVar28) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_12d0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_12d0,0);
    if (local_12d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12d0.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = UE::GetTypeHash(&local_1c70);
  uVar29 = UE::GetTypeHash(&local_1c74);
  if (uVar29 == uVar28) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_12c0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_12c0,0);
    if (local_12c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12c0.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = UE::GetTypeHash(&local_1c70);
  uVar29 = UE::GetTypeHash(&local_1c74);
  if (uVar28 == uVar29) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_12b0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_12b0,0);
    if (local_12b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12b0.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c58,(int)local_19c8);
  bVar24 = UE::operator==(&local_1c70,(FPropertyTypeName *)CONCAT44(extraout_var_93,FVar26.Index));
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_12a0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_12a0,0);
    if (local_12a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12a0.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator==(&local_1c70,&local_1c58);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1290,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1290,0);
    if (local_1290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1290.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator<(&local_1c58,&local_1c58);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1280,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1280,0);
    if (local_1280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1280.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator<(&local_1c70,&local_1c58);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1270,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1270,0);
    if (local_1270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1270.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator<(&local_1c58,&local_1c70);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1260,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1260,0);
    if (local_1260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1260.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator<(&local_1c58,&local_1c50);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1250,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1250,0);
    if (local_1250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1250.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator<(&local_1c50,&local_1c58);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1240,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1240,0);
    if (local_1240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1240.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = FPropertyTypeName::GetParameter(&local_1c58,(int)local_1904);
  uVar28 = UE::GetTypeHash((FPropertyTypeName *)CONCAT44(extraout_var_94,FVar26.Index));
  uVar29 = UE::GetTypeHash(&local_1c70);
  if (uVar29 != uVar28) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1230,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1230,0);
    if (local_1230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1230.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = UE::GetTypeHash(&local_1c58);
  uVar29 = UE::GetTypeHash(&local_1c70);
  if (uVar29 == uVar28) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1220,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1220,0);
    if (local_1220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1220.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator==(&local_1c58,local_1bb8);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1210,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1210,0);
    if (local_1210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1210.Data.AllocatorInstance.Data);
    }
  }
  if (local_978.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_978.OuterNodeIndex.AllocatorInstance.SecondaryData);
  }
  if (local_978.Nodes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
    FMemory::Free((void *)local_978.Nodes.AllocatorInstance.SecondaryData);
  }
  pFVar31 = FAutomationTestFramework::Get();
  pFVar1 = pFVar31->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1200,L"Archive");
  (*pcVar2)(pFVar1,&local_1200,0);
  if (local_1200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1200.Data.AllocatorInstance.Data);
  }
  local_1c30.Index = 0;
  PropertyTypeNameTest::CreateInt();
  PropertyTypeNameTest::CreateEnumMap();
  PropertyTypeNameTest::CreateVectorArray();
  local_1b08.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b08.ArrayNum = 0;
  local_1b08.ArrayMax = 0;
  local_1b40 = 0;
  FMemoryWriter::FMemoryWriter(&local_d98,&local_1b08,true,false,(FName)0x0);
  pFVar33 = UE::operator<<((FArchive *)&local_d98,&local_1c30);
  pFVar33 = UE::operator<<(pFVar33,&local_1c4c);
  pFVar33 = UE::operator<<(pFVar33,&local_1c2c);
  UE::operator<<(pFVar33,&local_1c28);
  FArchive::~FArchive((FArchive *)&local_d98);
  local_1b18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b18.ArrayNum = 0;
  local_1b18.ArrayMax = 0;
  local_1b38 = 0;
  FMemoryWriter::FMemoryWriter(&local_ce8,&local_1b18,false,false,(FName)0x0);
  pFVar33 = UE::operator<<((FArchive *)&local_ce8,&local_1c30);
  pFVar33 = UE::operator<<(pFVar33,&local_1c4c);
  pFVar33 = UE::operator<<(pFVar33,&local_1c2c);
  UE::operator<<(pFVar33,&local_1c28);
  FArchive::~FArchive((FArchive *)&local_ce8);
  local_1b28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b28.ArrayNum = 0;
  local_1b28.ArrayMax = 0;
  local_1b30 = 0;
  FMemoryWriter::FMemoryWriter(&local_c38,&local_1b28,true,false,(FName)0x0);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_11f0,(FArchive *)&local_c38);
  local_1c08 = &local_11f0;
  UE::operator<<((FStructuredArchiveSlot)&local_1c08,&local_1c30);
  UE::operator<<((FStructuredArchiveSlot)&local_1c08,&local_1c4c);
  UE::operator<<((FStructuredArchiveSlot)&local_1c08,&local_1c2c);
  UE::operator<<((FStructuredArchiveSlot)&local_1c08,&local_1c28);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_11f0);
  FArchive::~FArchive((FArchive *)&local_c38);
  local_1c48.Index = local_1c4c.Index;
  local_1c44.Index = 0;
  local_1c40.Index = 0;
  local_1c3c.Index = 0;
  FMemoryReader::FMemoryReader(&local_b88,&local_1b08,true);
  pFVar33 = UE::operator<<((FArchive *)&local_b88,&local_1c48);
  pFVar33 = UE::operator<<(pFVar33,&local_1c44);
  pFVar33 = UE::operator<<(pFVar33,&local_1c40);
  UE::operator<<(pFVar33,&local_1c3c);
  FArchive::~FArchive((FArchive *)&local_b88);
  bVar24 = UE::operator==(&local_1c30,&local_1c48);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_11e0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_11e0);
    if (local_11e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11e0.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator==(&local_1c4c,&local_1c44);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_11d0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_11d0);
    if (local_11d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11d0.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator==(&local_1c2c,&local_1c40);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_11c0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_11c0);
    if (local_11c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11c0.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator==(&local_1c28,&local_1c3c);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_11b0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_11b0);
    if (local_11b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11b0.Data.AllocatorInstance.Data);
    }
  }
  local_1c48.Index = local_1c4c.Index;
  local_1c44.Index = 0;
  local_1c40.Index = 0;
  local_1c3c.Index = 0;
  FMemoryReader::FMemoryReader(&local_ad8,&local_1b18,false);
  pFVar33 = UE::operator<<((FArchive *)&local_ad8,&local_1c48);
  pFVar33 = UE::operator<<(pFVar33,&local_1c44);
  pFVar33 = UE::operator<<(pFVar33,&local_1c40);
  UE::operator<<(pFVar33,&local_1c3c);
  FArchive::~FArchive((FArchive *)&local_ad8);
  bVar24 = UE::operator==(&local_1c30,&local_1c48);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_11a0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_11a0,0);
    if (local_11a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11a0.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator==(&local_1c4c,&local_1c44);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1190,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1190,0);
    if (local_1190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1190.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator==(&local_1c2c,&local_1c40);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1180,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1180,0);
    if (local_1180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1180.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator==(&local_1c28,&local_1c3c);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1170,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1170,0);
    if (local_1170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1170.Data.AllocatorInstance.Data);
    }
  }
  local_1c48.Index = local_1c4c.Index;
  local_1c44.Index = 0;
  local_1c40.Index = 0;
  local_1c3c.Index = 0;
  FMemoryReader::FMemoryReader(&local_a28,&local_1b28,true);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_1160,(FArchive *)&local_a28);
  local_1bf8 = &local_1160;
  UE::operator<<((FStructuredArchiveSlot)&local_1bf8,&local_1c48);
  UE::operator<<((FStructuredArchiveSlot)&local_1bf8,&local_1c44);
  UE::operator<<((FStructuredArchiveSlot)&local_1bf8,&local_1c40);
  UE::operator<<((FStructuredArchiveSlot)&local_1bf8,&local_1c3c);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_1160);
  FArchive::~FArchive((FArchive *)&local_a28);
  bVar24 = UE::operator==(&local_1c30,&local_1c48);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1150,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1150,0);
    if (local_1150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1150.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator==(&local_1c4c,&local_1c44);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1140,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1140,0);
    if (local_1140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1140.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator==(&local_1c2c,&local_1c40);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1130,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1130,0);
    if (local_1130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1130.Data.AllocatorInstance.Data);
    }
  }
  bVar24 = UE::operator==(&local_1c28,&local_1c3c);
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1120,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1120,0);
    if (local_1120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1120.Data.AllocatorInstance.Data);
    }
  }
  local_1c48.Index = local_1c4c.Index;
  local_1c44.Index = 0;
  local_1c40.Index = 0;
  local_1c3c.Index = 0;
  if (local_1b28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b28.AllocatorInstance.Data);
  }
  if (local_1b18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b18.AllocatorInstance.Data);
  }
  if (local_1b08.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b08.AllocatorInstance.Data);
  }
  pFVar31 = FAutomationTestFramework::Get();
  pFVar1 = pFVar31->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1110,L"String");
  (*pcVar2)(pFVar1,&local_1110,0,0);
  if (local_1110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1110.Data.AllocatorInstance.Data);
  }
  local_1c10[0].Index = 0;
  PropertyTypeNameTest::CreateInt();
  PropertyTypeNameTest::CreateEnumMap();
  PropertyTypeNameTest::CreateVectorArray();
  local_138.Base = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  UE::operator<<(&local_138,local_1c10);
  local_258.Base = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)&local_138;
  UE::operator<<(&local_258,&local_1c1c);
  local_378.Base = local_358;
  local_378.bIsDynamic = false;
  local_378.bIsExternal = false;
  local_378.CurPos = local_358;
  local_378.End = (wchar_t *)&local_258;
  UE::operator<<(&local_378,&local_1c18);
  local_498.Base = local_478;
  local_498.bIsDynamic = false;
  local_498.bIsExternal = false;
  local_498.CurPos = local_478;
  local_498.End = (wchar_t *)&local_378;
  UE::operator<<(&local_498,&local_1c14);
  if (((int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1) != 4) ||
     (iVar25 = wcsncmp(L"None",local_138.Base,4), iVar25 != 0)) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1100,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1100,0);
    if (local_1100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1100.Data.AllocatorInstance.Data);
    }
  }
  if (((int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1) != 0xb) ||
     (iVar25 = wcsncmp(L"IntProperty",local_258.Base,0xb), iVar25 != 0)) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_10f0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_10f0,0);
    if (local_10f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10f0.Data.AllocatorInstance.Data);
    }
  }
  if (((int)((longlong)local_378.CurPos - (longlong)local_378.Base >> 1) != 0x4c) ||
     (iVar25 = wcsncmp(L"MapProperty(EnumProperty(Key,ByteProperty),EnumProperty(Value,ByteProperty))"
                       ,local_378.Base,0x4c), iVar25 != 0)) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_10e0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_10e0,0);
    if (local_10e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10e0.Data.AllocatorInstance.Data);
    }
  }
  if (((int)((longlong)local_498.CurPos - (longlong)local_498.Base >> 1) != 0x25) ||
     (iVar25 = wcsncmp(L"ArrayProperty(StructProperty(Vector))",local_498.Base,0x25), iVar25 != 0))
  {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_10d0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_10d0,0);
    if (local_10d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10d0.Data.AllocatorInstance.Data);
    }
  }
  local_10b8 = local_138.Base;
  uStack_10b0 = (undefined4)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1);
  uStack_f20 = CONCAT44(uStack_10ac,uStack_10b0);
  local_f28 = local_138.Base;
  FVar26 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_1>::operator()
                     (local_1c77,(TStringView<wchar_t> *)local_19c0);
  bVar24 = UE::operator==(local_1c10,(FPropertyTypeName *)CONCAT44(extraout_var_95,FVar26.Index));
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_10a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_10a8,0);
    if (local_10a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10a8.Data.AllocatorInstance.Data);
    }
  }
  local_1098 = local_258.Base;
  uStack_1090 = (undefined4)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  uStack_f10 = CONCAT44(uStack_108c,uStack_1090);
  local_f18 = local_258.Base;
  FVar26 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_1>::operator()
                     (local_1c77,(TStringView<wchar_t> *)(local_19c0 + 4));
  bVar24 = UE::operator==(&local_1c1c,(FPropertyTypeName *)CONCAT44(extraout_var_96,FVar26.Index));
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1088,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1088,0);
    if (local_1088.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1088.Data.AllocatorInstance.Data);
    }
  }
  local_1078 = local_378.Base;
  uStack_1070 = (undefined4)((longlong)local_378.CurPos - (longlong)local_378.Base >> 1);
  uStack_f00 = CONCAT44(uStack_106c,uStack_1070);
  local_f08 = local_378.Base;
  FVar26 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_1>::operator()
                     (local_1c77,(TStringView<wchar_t> *)local_19b8);
  bVar24 = UE::operator==(&local_1c18,(FPropertyTypeName *)CONCAT44(extraout_var_97,FVar26.Index));
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1068,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1068,0);
    if (local_1068.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.Data.AllocatorInstance.Data);
    }
  }
  local_1058 = local_498.Base;
  uStack_1050 = (undefined4)((longlong)local_498.CurPos - (longlong)local_498.Base >> 1);
  uStack_ef0 = CONCAT44(uStack_104c,uStack_1050);
  local_ef8 = local_498.Base;
  FVar26 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_1>::operator()
                     (local_1c77,(TStringView<wchar_t> *)(local_19b8 + 4));
  bVar24 = UE::operator==(&local_1c14,(FPropertyTypeName *)CONCAT44(extraout_var_98,FVar26.Index));
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1048,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1048,0);
    if (local_1048.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1048.Data.AllocatorInstance.Data);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_498);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_378);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  pFVar31 = FAutomationTestFramework::Get();
  pFVar1 = pFVar31->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1038,L"Parse");
  (*pcVar2)(pFVar1,&local_1038,0,0);
  if (local_1038.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1038.Data.AllocatorInstance.Data);
  }
  FVar26 = PropertyTypeNameTest::CreateInt();
  uStack_1c60 = 0x11;
  local_1c68 = L" \t IntProperty \t ";
  uStack_ee0 = CONCAT44(uStack_1c5c,0x11);
  local_ee8 = L" \t IntProperty \t ";
  FVar30 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_1>::operator()
                     (local_1c77,(TStringView<wchar_t> *)local_19ac);
  bVar24 = UE::operator==((FPropertyTypeName *)CONCAT44(extraout_var_x00100,FVar30.Index),
                          (FPropertyTypeName *)CONCAT44(extraout_var_99,FVar26.Index));
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1028,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1028,0);
    if (local_1028.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1028.Data.AllocatorInstance.Data);
    }
  }
  FVar26 = PropertyTypeNameTest::CreateVectorArray();
  uStack_1c60 = 0x32;
  local_1c68 = L" \t ArrayProperty ( StructProperty\t(\tVector\t)\t ) \t ";
  uStack_ed0 = CONCAT44(uStack_1c5c,0x32);
  local_ed8 = L" \t ArrayProperty ( StructProperty\t(\tVector\t)\t ) \t ";
  FVar30 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_1>::operator()
                     (local_1c77,(TStringView<wchar_t> *)(local_19ac + 8));
  bVar24 = UE::operator==((FPropertyTypeName *)CONCAT44(extraout_var_x00102,FVar30.Index),
                          (FPropertyTypeName *)CONCAT44(extraout_var_x00101,FVar26.Index));
  if (!bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1018,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1018,0);
    if (local_1018.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1018.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 0;
  local_1c68 = L"";
  local_ec8._8_8_ = (ulonglong)uStack_1c5c << 0x20;
  local_ec8.DataPtr = L"";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_ec8);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1008,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1008,0);
    if (local_1008.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1008.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 1;
  local_1c68 = L",";
  local_eb8._12_4_ = uStack_1c5c;
  local_eb8.Size = 1;
  local_eb8.DataPtr = L",";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_eb8);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_ff8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_ff8,0);
    if (local_ff8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ff8.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 2;
  local_1c68 = L"()";
  local_ea8._12_4_ = uStack_1c5c;
  local_ea8.Size = 2;
  local_ea8.DataPtr = L"()";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_ea8);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_fe8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_fe8,0);
    if (local_fe8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fe8.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 0xc;
  local_1c68 = L",IntProperty";
  local_e98._12_4_ = uStack_1c5c;
  local_e98.Size = 0xc;
  local_e98.DataPtr = L",IntProperty";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_e98);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_fd8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_fd8,0);
    if (local_fd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fd8.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 0xc;
  local_1c68 = L"IntProperty,";
  local_e88._12_4_ = uStack_1c5c;
  local_e88.Size = 0xc;
  local_e88.DataPtr = L"IntProperty,";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_e88);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_fc8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_fc8,0);
    if (local_fc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fc8.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 0x17;
  local_1c68 = L"IntProperty,IntProperty";
  local_e78._12_4_ = uStack_1c5c;
  local_e78.Size = 0x17;
  local_e78.DataPtr = L"IntProperty,IntProperty";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_e78);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_fb8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_fb8,0);
    if (local_fb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fb8.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 0xc;
  local_1c68 = L"IntProperty)";
  local_e68._12_4_ = uStack_1c5c;
  local_e68.Size = 0xc;
  local_e68.DataPtr = L"IntProperty)";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_e68);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_fa8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,local_fa8,0);
    if (local_fa8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fa8[0].Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 0xd;
  local_1c68 = L"(IntProperty)";
  local_e58._12_4_ = uStack_1c5c;
  local_e58.Size = 0xd;
  local_e58.DataPtr = L"(IntProperty)";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_e58);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1900,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1900,0);
    if (local_1900.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1900.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 0xc;
  local_1c68 = L"(IntProperty";
  local_e48._12_4_ = uStack_1c5c;
  local_e48.Size = 0xc;
  local_e48.DataPtr = L"(IntProperty";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_e48);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18f0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_18f0,0);
    if (local_18f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18f0.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 0x19;
  local_1c68 = L"ArrayProperty(IntProperty";
  local_e38._12_4_ = uStack_1c5c;
  local_e38.Size = 0x19;
  local_e38.DataPtr = L"ArrayProperty(IntProperty";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_e38);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18e0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_18e0,0);
    if (local_18e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18e0.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 0x1b;
  local_1c68 = L"ArrayProperty(IntProperty))";
  local_e28._12_4_ = uStack_1c5c;
  local_e28.Size = 0x1b;
  local_e28.DataPtr = L"ArrayProperty(IntProperty))";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_e28);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18d0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_18d0,0);
    if (local_18d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18d0.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 0x1b;
  local_1c68 = L"ArrayProperty((IntProperty)";
  local_e18._12_4_ = uStack_1c5c;
  local_e18.Size = 0x1b;
  local_e18.DataPtr = L"ArrayProperty((IntProperty)";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_e18);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18c0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_18c0,0);
    if (local_18c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18c0.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 0x25;
  local_1c68 = L"ArrayProperty(IntProperty)IntProperty";
  local_e08._12_4_ = uStack_1c5c;
  local_e08.Size = 0x25;
  local_e08.DataPtr = L"ArrayProperty(IntProperty)IntProperty";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_e08);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18b0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_18b0,0);
    if (local_18b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18b0.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 0xd;
  local_1c68 = L"MapProperty()";
  local_df8._12_4_ = uStack_1c5c;
  local_df8.Size = 0xd;
  local_df8.DataPtr = L"MapProperty()";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_df8);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18a0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_18a0,0);
    if (local_18a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18a0.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 0xe;
  local_1c68 = L"MapProperty(,)";
  local_de8._12_4_ = uStack_1c5c;
  local_de8.Size = 0xe;
  local_de8.DataPtr = L"MapProperty(,)";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_de8);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1890,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1890,0);
    if (local_1890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1890.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 0x19;
  local_1c68 = L"MapProperty(IntProperty,)";
  local_dd8._12_4_ = uStack_1c5c;
  local_dd8.Size = 0x19;
  local_dd8.DataPtr = L"MapProperty(IntProperty,)";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_dd8);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1880,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1880,0);
    if (local_1880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1880.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 0x19;
  local_1c68 = L"MapProperty(,IntProperty)";
  local_dc8._12_4_ = uStack_1c5c;
  local_dc8.Size = 0x19;
  local_dc8.DataPtr = L"MapProperty(,IntProperty)";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_dc8);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1870,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1870,0);
    if (local_1870.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1870.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 0x25;
  local_1c68 = L"MapProperty(IntProperty,,IntProperty)";
  local_db8._12_4_ = uStack_1c5c;
  local_db8.Size = 0x25;
  local_db8.DataPtr = L"MapProperty(IntProperty,,IntProperty)";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_db8);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1860,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1860,0);
    if (local_1860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1860.Data.AllocatorInstance.Data);
    }
  }
  uStack_1c60 = 0x25;
  local_1c68 = L"MapProperty(IntProperty)(IntProperty)";
  local_da8._12_4_ = uStack_1c5c;
  local_da8.Size = 0x25;
  local_da8.DataPtr = L"MapProperty(IntProperty)(IntProperty)";
  bVar24 = `UE::FPropertyTypeNameSmokeTest::TestBody'::__l2::<lambda_2>::operator()
                     (&local_1c78,&local_da8);
  if (bVar24) {
    pFVar31 = FAutomationTestFramework::Get();
    pFVar1 = pFVar31->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1850,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1850,0);
    if (local_1850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1850.Data.AllocatorInstance.Data);
    }
  }
  return;
}

