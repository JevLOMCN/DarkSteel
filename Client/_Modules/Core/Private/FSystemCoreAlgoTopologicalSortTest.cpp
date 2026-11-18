// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// GetTestFlags @ 141ac6880

EAutomationTestFlags __thiscall
FSystemCoreAlgoTopologicalSortTest::GetTestFlags(FSystemCoreAlgoTopologicalSortTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac6890

bool __thiscall
FSystemCoreAlgoTopologicalSortTest::IsStressTest(FSystemCoreAlgoTopologicalSortTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac68a0

uint __thiscall
FSystemCoreAlgoTopologicalSortTest::GetRequiredDeviceNum(FSystemCoreAlgoTopologicalSortTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac68b0

FString * __thiscall
FSystemCoreAlgoTopologicalSortTest::GetTestSourceFileName
          (FSystemCoreAlgoTopologicalSortTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Algo\\TopologicalSort.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac68e0

int __thiscall
FSystemCoreAlgoTopologicalSortTest::GetTestSourceFileLine(FSystemCoreAlgoTopologicalSortTest *this)

{
  return 9;
}

// GetTests @ 141ac68f0

/* WARNING: Removing unreachable block (ram,0x000141ac6a6e) */

void __thiscall
FSystemCoreAlgoTopologicalSortTest::GetTests
          (FSystemCoreAlgoTopologicalSortTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ac6a90

bool __thiscall
FSystemCoreAlgoTopologicalSortTest::RunTest
          (FSystemCoreAlgoTopologicalSortTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ac6ac0

FString * __thiscall
FSystemCoreAlgoTopologicalSortTest::GetBeautifiedTestName
          (FSystemCoreAlgoTopologicalSortTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FSystemCoreAlgoTopologicalSortTest @ 141b27350

FSystemCoreAlgoTopologicalSortTest * __thiscall
FSystemCoreAlgoTopologicalSortTest::FSystemCoreAlgoTopologicalSortTest
          (FSystemCoreAlgoTopologicalSortTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FSystemCoreAlgoTopologicalSortTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Algo::TopologicalSort");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
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

// operator() @ 141b2e270

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
`FSystemCoreAlgoTopologicalSortTest::TestBody'::__l3::<lambda_1>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType local_28;
  undefined4 local_20;
  int iStack_1c;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  FVar3.Data = (FScriptContainerElement *)0x0;
  bVar2 = param_1 < 2;
  if (bVar2) {
    local_10 = 0;
    pFVar4 = &local_18;
  }
  else {
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,0,&local_28,1,&iStack_1c);
    pFVar4 = &local_28;
    *(int *)local_28.Data = param_1 + -1;
    FVar3.Data = local_28.Data;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = FVar3.Data;
  pFVar4->Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = *(int *)&pFVar4[1].Data;
  iVar1 = *(int *)((longlong)&pFVar4[1].Data + 4);
  pFVar4[1].Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayMax = iVar1;
  if (bVar2) {
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  if ((!bVar2) && (local_28.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 141b31130

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
`FSystemCoreAlgoTopologicalSortTest::TestBody'::__l10::<lambda_2>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType local_28;
  undefined4 local_20;
  int iStack_1c;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  FVar3.Data = (FScriptContainerElement *)0x0;
  bVar2 = 2 < param_1;
  if (bVar2) {
    local_10 = 0;
    pFVar4 = &local_18;
  }
  else {
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,0,&local_28,1,&iStack_1c);
    pFVar4 = &local_28;
    *(int *)local_28.Data = param_1 + 1;
    FVar3.Data = local_28.Data;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = FVar3.Data;
  pFVar4->Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = *(int *)&pFVar4[1].Data;
  iVar1 = *(int *)((longlong)&pFVar4[1].Data + 4);
  pFVar4[1].Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayMax = iVar1;
  if (bVar2) {
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  if ((!bVar2) && (local_28.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 141b34160

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
`FSystemCoreAlgoTopologicalSortTest::TestBody'::__l27::<lambda_5>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  ForAnyElementType FVar1;
  ForAnyElementType *pFVar2;
  bool bVar3;
  ForAnyElementType local_28;
  undefined4 local_20;
  int local_1c;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  bVar3 = param_1 != 500;
  if (bVar3) {
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,0,&local_28,1,&local_1c);
    pFVar2 = &local_28;
    *(undefined4 *)local_28.Data = 500;
    FVar1.Data = local_28.Data;
  }
  else {
    local_10 = 0;
    pFVar2 = &local_18;
    FVar1.Data = (FScriptContainerElement *)0x0;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = FVar1.Data;
  pFVar2->Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = *(int *)&pFVar2[1].Data;
  __return_storage_ptr__->ArrayMax = *(int *)((longlong)&pFVar2[1].Data + 4);
  pFVar2[1].Data = (FScriptContainerElement *)0x0;
  if (bVar3) {
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  if ((!bVar3) && (local_18.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data);
  }
  return __return_storage_ptr__;
}

// TestBody @ 141b9dab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSystemCoreAlgoTopologicalSortTest::TestBody
          (FSystemCoreAlgoTopologicalSortTest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 uVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  FAutomationTestFramework *pFVar17;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  int iVar22;
  ForAnyElementType FVar23;
  ForAnyElementType FVar24;
  ForAnyElementType FVar25;
  longlong lVar26;
  int iVar27;
  ForAnyElementType FVar28;
  ForAnyElementType FVar29;
  int iVar30;
  int *piVar31;
  undefined8 uVar32;
  undefined1 auStackY_e38 [32];
  <lambda_5> local_de8 [4];
  int local_de4;
  TArray<int,TSizedDefaultAllocator<32>_> local_de0;
  TArray<int,TSizedDefaultAllocator<32>_> local_dd0;
  TArray<int,TSizedDefaultAllocator<32>_> local_dc0;
  TArray<int,TSizedDefaultAllocator<32>_> local_db0;
  TArray<int,TSizedDefaultAllocator<32>_> local_da0;
  undefined4 local_d8c;
  TArray<int,TSizedDefaultAllocator<32>_> local_d88;
  undefined4 local_d78;
  undefined4 local_d74;
  undefined4 local_d70;
  undefined4 local_d6c;
  undefined4 local_d68;
  undefined4 local_d64;
  undefined4 local_d60;
  undefined4 local_d5c;
  undefined4 local_d58;
  undefined4 local_d54;
  undefined4 local_d50;
  undefined4 local_d4c;
  undefined4 local_d48;
  undefined4 local_d44;
  undefined4 local_d40;
  undefined4 local_d3c;
  undefined4 local_d38;
  undefined4 local_d34;
  undefined4 local_d30;
  undefined4 local_d2c;
  undefined4 local_d28;
  undefined4 local_d24;
  undefined4 local_d20;
  undefined4 local_d1c;
  undefined4 local_d18;
  undefined4 local_d14;
  undefined4 local_d10;
  undefined4 local_d0c;
  undefined4 local_d08;
  undefined4 local_d04;
  undefined4 local_d00;
  undefined4 local_cfc;
  undefined4 local_cf8;
  undefined4 local_cf4;
  undefined4 local_cf0;
  undefined4 local_cec;
  undefined4 local_ce8;
  undefined4 local_ce4;
  undefined4 local_ce0;
  undefined4 local_cdc;
  undefined4 local_cd8;
  undefined4 local_cd4;
  undefined4 local_cd0;
  undefined4 local_ccc;
  undefined4 local_cc8;
  undefined4 local_cc4;
  undefined4 local_cc0;
  undefined4 local_cbc;
  undefined4 local_cb8;
  undefined4 local_cb4;
  undefined4 local_cb0;
  undefined4 local_cac;
  undefined4 local_ca8;
  undefined4 local_ca4;
  undefined4 local_ca0;
  undefined4 local_c9c;
  undefined4 local_c98;
  undefined4 local_c94;
  undefined4 local_c90;
  undefined4 local_c8c;
  undefined4 local_c88;
  undefined4 local_c84;
  undefined4 local_c80;
  undefined4 local_c7c;
  undefined4 local_c78;
  undefined4 local_c74;
  undefined4 local_c70;
  undefined4 local_c6c;
  undefined4 local_c68;
  undefined4 local_c64;
  undefined4 local_c60;
  undefined4 local_c5c;
  undefined4 local_c58;
  undefined4 local_c54;
  undefined4 local_c50;
  undefined4 local_c4c;
  undefined4 local_c48;
  undefined4 local_c44;
  undefined4 local_c40;
  undefined4 local_c3c;
  undefined4 local_c38;
  undefined4 local_c34;
  undefined4 local_c30;
  undefined4 local_c2c;
  undefined4 local_c28;
  undefined4 local_c24;
  undefined4 local_c20;
  undefined4 local_c1c;
  undefined4 local_c18;
  undefined4 local_c14;
  undefined4 local_c10;
  undefined4 local_c0c;
  undefined4 local_c08 [2];
  int local_c00 [10];
  ForAnyElementType local_bd8;
  int local_bd0;
  int local_bcc;
  TArray<int,TSizedDefaultAllocator<32>_> local_bc8;
  TArray<int,TSizedDefaultAllocator<32>_> local_bb8;
  TArray<int,TSizedDefaultAllocator<32>_> local_ba8;
  TArray<int,TSizedDefaultAllocator<32>_> local_b98;
  TArray<int,TSizedDefaultAllocator<32>_> local_b88;
  TArray<int,TSizedDefaultAllocator<32>_> local_b78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b68;
  undefined1 local_b48 [8];
  undefined1 local_b40 [8];
  undefined1 local_b38 [8];
  undefined1 local_b30 [8];
  undefined1 local_b28 [8];
  undefined1 local_b20 [8];
  undefined1 local_b18 [8];
  undefined1 local_b10 [8];
  undefined1 local_b08 [8];
  undefined1 local_b00 [8];
  undefined1 local_af8 [8];
  undefined1 local_af0 [8];
  undefined1 local_ae8 [8];
  undefined1 local_ae0 [8];
  undefined1 local_ad8 [8];
  undefined1 local_ad0 [8];
  undefined1 local_ac8 [8];
  undefined1 local_ac0 [8];
  undefined1 local_ab8 [8];
  undefined1 local_ab0 [8];
  undefined1 local_aa8 [8];
  undefined1 local_aa0 [8];
  undefined1 local_a98 [8];
  undefined1 local_a90 [8];
  undefined1 local_a88 [8];
  longlong *local_a80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a78;
  undefined8 uStack_a58;
  FString local_a50;
  undefined4 *local_a40;
  undefined4 *local_a38;
  undefined4 *local_a30;
  undefined4 *local_a28;
  initializer_list<int> local_a18;
  FString local_a08;
  initializer_list<int> local_9f8;
  FString local_9e8;
  initializer_list<int> local_9d8;
  FString local_9c8;
  initializer_list<int> local_9b8;
  FString local_9a8;
  initializer_list<int> local_998;
  FString local_988;
  initializer_list<int> local_978;
  FString local_968;
  FString local_958;
  FString local_948;
  FString local_938;
  initializer_list<int> local_928;
  int *local_918;
  int *local_910;
  int *local_908;
  int *local_900;
  int *local_8f8;
  int *local_8f0;
  undefined4 *local_8e8;
  undefined4 *local_8e0;
  undefined4 *local_8d8;
  undefined4 *local_8d0;
  undefined4 *local_8c8;
  undefined4 *local_8c0;
  undefined4 *local_8b8;
  undefined4 *local_8b0;
  undefined4 *local_8a8;
  undefined4 *local_8a0;
  undefined4 *local_898;
  undefined4 *local_890;
  undefined4 *local_888;
  undefined4 *local_880;
  undefined4 *local_878;
  undefined4 *local_870;
  undefined4 *local_868;
  undefined4 *local_860;
  FString local_858;
  undefined4 *local_848;
  undefined4 *local_840;
  initializer_list<int> local_838;
  undefined4 *local_828;
  undefined4 *local_820;
  undefined4 *local_818;
  undefined4 *local_810;
  undefined4 *local_808;
  undefined4 *local_800;
  undefined4 *local_7f8;
  undefined4 *local_7f0;
  FString local_7e8;
  undefined4 *local_7d8;
  undefined4 *local_7d0;
  initializer_list<int> local_7c8;
  FString local_7b8;
  initializer_list<int> local_7a8;
  FString local_798;
  FString local_788;
  initializer_list<int> local_778;
  undefined4 *local_768;
  undefined4 *local_760;
  undefined4 *local_758;
  undefined4 *local_750;
  undefined4 *local_748;
  undefined4 *local_740;
  undefined4 *local_738;
  undefined4 *local_730;
  FString local_728;
  initializer_list<int> local_718;
  FString local_708;
  undefined4 *local_6f8;
  undefined4 *local_6f0;
  undefined4 *local_6e8;
  undefined4 *local_6e0;
  undefined4 *local_6d8;
  undefined4 *local_6d0;
  undefined4 *local_6c8;
  undefined4 *local_6c0;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  undefined4 *local_688;
  undefined4 *local_680;
  undefined4 *local_678;
  undefined4 *local_670;
  undefined4 *local_668;
  undefined4 *local_660;
  undefined4 *local_658;
  undefined4 *local_650;
  FString local_648;
  FString local_638;
  FString local_628;
  undefined4 *local_618;
  undefined4 *local_610;
  undefined4 *local_608;
  undefined4 *local_600;
  undefined4 *local_5f8;
  undefined4 *local_5f0;
  undefined4 *local_5e8;
  undefined4 *local_5e0;
  undefined4 *local_5d8;
  undefined4 *local_5d0;
  undefined4 *local_5c8;
  undefined4 *local_5c0;
  undefined4 *local_5b8;
  undefined4 *local_5b0;
  FString local_5a8;
  FString local_598;
  undefined4 *local_588;
  undefined4 *local_580;
  undefined4 *local_578;
  undefined4 *local_570;
  undefined4 *local_568;
  undefined4 *local_560;
  undefined4 *local_558;
  undefined4 *local_550;
  undefined4 *local_548;
  undefined4 *local_540;
  undefined4 *local_538;
  undefined4 *local_530;
  undefined4 *local_528;
  undefined4 *local_520;
  undefined4 *local_518;
  undefined4 *local_510;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  undefined4 *local_4d8;
  undefined4 *local_4d0;
  undefined4 *local_4c8;
  undefined4 *local_4c0;
  undefined4 *local_4b8;
  undefined4 *local_4b0;
  undefined1 local_4a8 [40];
  int local_480;
  undefined4 uStack_47c;
  TArray<int,TSizedDefaultAllocator<32>_> local_478;
  TArray<int,TSizedDefaultAllocator<32>_> local_468;
  TArray<int,TSizedDefaultAllocator<32>_> local_458;
  TArray<int,TSizedDefaultAllocator<32>_> local_448;
  TArray<int,TSizedDefaultAllocator<32>_> local_438;
  TArray<int,TSizedDefaultAllocator<32>_> local_428;
  int local_418 [4];
  int local_408 [4];
  int local_3f8 [4];
  int local_3e8 [4];
  undefined1 local_3d8 [16];
  TBitArray<FDefaultBitArrayAllocator> TStack_3c8;
  undefined4 local_3a8;
  undefined4 local_3a4;
  ForElementType<FSetElementId> local_398;
  int local_390;
  undefined1 local_388 [32];
  undefined8 local_368;
  int local_360;
  undefined4 local_35c;
  undefined4 local_358;
  int local_354;
  ForElementType<FSetElementId> local_348;
  int local_340;
  undefined1 local_338 [32];
  void *local_318;
  undefined4 local_310;
  uint local_30c;
  undefined4 local_308;
  undefined4 local_304;
  ForElementType<FSetElementId> local_2f8;
  int local_2f0;
  undefined1 local_2e8 [32];
  void *local_2c8;
  undefined4 local_2c0;
  uint local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  ForElementType<FSetElementId> local_2a8;
  int local_2a0;
  undefined1 local_298 [32];
  void *local_278;
  undefined4 local_270;
  uint local_26c;
  undefined4 local_268;
  undefined4 local_264;
  ForElementType<FSetElementId> local_258;
  int local_250;
  undefined1 local_248 [32];
  void *local_228;
  undefined4 local_220;
  uint local_21c;
  undefined4 local_218;
  undefined4 local_214;
  ForElementType<FSetElementId> local_208;
  int local_200;
  undefined1 local_1f8 [32];
  void *local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  ForElementType<FSetElementId> local_1b8;
  int local_1b0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> local_1a8;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  int local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  int local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e38;
  local_a18._First = local_408;
  bVar13 = false;
  local_d8c = 0;
  local_a18._Last = local_408 + 3;
  local_408[0] = 1;
  local_408[1] = 2;
  local_408[2] = 3;
  TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
            (&local_b98,&local_a18);
  bVar12 = Algo::
           KahnTopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>_&,_FSystemCoreAlgoTopologicalSortTest::TestBody_::__l3::<lambda_1>_>
                     (&local_b98,(<lambda_1>)local_de8[0],None);
  if (!bVar12) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_a08,
                       L"TopologicalSort returned true when each node depends on the previous one");
    (*pcVar3)(pFVar2,&local_a08);
    if (local_a08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a08.Data.AllocatorInstance.Data);
    }
  }
  local_9f8._First = local_3e8;
  local_3e8[0] = 1;
  local_9f8._Last = local_3e8 + 3;
  local_3e8[1] = 2;
  local_3e8[2] = 3;
  pTVar18 = TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
                      (&local_478,&local_9f8);
  if ((local_b98.ArrayNum == pTVar18->ArrayNum) &&
     ((local_b98.ArrayNum == 0 ||
      (iVar14 = memcmp(local_b98.AllocatorInstance.Data,(pTVar18->AllocatorInstance).Data,
                       (longlong)local_b98.ArrayNum << 2), iVar14 == 0)))) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (local_478.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.AllocatorInstance.Data);
  }
  if (bVar12) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_9e8,
                       L"TopologicalSort sorted correctly when each node depends on the previous one"
                      );
    (*pcVar3)(pFVar2,&local_9e8);
    if (local_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_b98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b98.AllocatorInstance.Data);
  }
  local_9d8._First = local_3f8;
  local_3f8[0] = 1;
  local_9d8._Last = local_3f8 + 3;
  local_3f8[1] = 2;
  local_3f8[2] = 3;
  TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
            (&local_b88,&local_9d8);
  bVar12 = Algo::
           KahnTopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>_&,_FSystemCoreAlgoTopologicalSortTest::TestBody_::__l10::<lambda_2>_>
                     (&local_b88,(<lambda_2>)local_de8[0],None);
  if (!bVar12) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_9c8,
                       L"TopologicalSort returned true when each node depends on the next one");
    (*pcVar3)(pFVar2,&local_9c8);
    if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
    }
  }
  local_9b8._First = local_418;
  local_418[0] = 3;
  local_9b8._Last = local_418 + 3;
  local_418[1] = 2;
  local_418[2] = 1;
  pTVar18 = TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
                      (&local_468,&local_9b8);
  if ((local_b88.ArrayNum == pTVar18->ArrayNum) &&
     ((local_b88.ArrayNum == 0 ||
      (iVar14 = memcmp(local_b88.AllocatorInstance.Data,(pTVar18->AllocatorInstance).Data,
                       (longlong)local_b88.ArrayNum << 2), iVar14 == 0)))) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (local_468.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.AllocatorInstance.Data);
  }
  if (bVar12) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_9a8,
                       L"TopologicalSort sorted correctly when each node depends on the next one");
    (*pcVar3)(pFVar2,&local_9a8);
    if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
    }
  }
  if (local_b88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b88.AllocatorInstance.Data);
  }
  local_998._First = local_c00;
  local_c00[0] = 1;
  local_998._Last = local_c00 + 2;
  local_c00[1] = 2;
  TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
            (&local_ba8,&local_998);
  bVar12 = Algo::
           KahnTopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>_&,_FSystemCoreAlgoTopologicalSortTest::TestBody_::__l17::<lambda_3>_>
                     (&local_ba8,(<lambda_3>)local_de8[0],None);
  if (bVar12) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_988,
                       L"TopologicalSort returned false when a cycle is detected and AllowCycles is not specified"
                      );
    (*pcVar3)(pFVar2,&local_988,0);
    if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_988.Data.AllocatorInstance.Data);
    }
  }
  local_978._First = local_c00 + 2;
  local_c00[2] = 1;
  local_978._Last = local_c00 + 4;
  local_c00[3] = 2;
  pTVar18 = TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
                      (&local_458,&local_978);
  if ((local_ba8.ArrayNum == pTVar18->ArrayNum) &&
     ((local_ba8.ArrayNum == 0 ||
      (iVar14 = memcmp(local_ba8.AllocatorInstance.Data,(pTVar18->AllocatorInstance).Data,
                       (longlong)local_ba8.ArrayNum << 2), iVar14 == 0)))) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (local_458.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.AllocatorInstance.Data);
  }
  if (bVar12) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_968,
                       L"TopologicalSort does not modify the array when a cycle is detected and AllowCycles is not specified"
                      );
    (*pcVar3)(pFVar2,&local_968,0);
    if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_968.Data.AllocatorInstance.Data);
    }
  }
  bVar12 = Algo::
           KahnTopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>_&,_FSystemCoreAlgoTopologicalSortTest::TestBody_::__l17::<lambda_4>_>
                     (&local_ba8,(<lambda_4>)local_de8[0],AllowCycles);
  if (!bVar12) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_a50,
                       L"TopologicalSort returned true when a cycle is detected but AllowCycles is specified"
                      );
    (*pcVar3)(pFVar2,&local_a50,0);
    if (local_a50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a50.Data.AllocatorInstance.Data);
    }
  }
  if (local_ba8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ba8.AllocatorInstance.Data);
  }
  local_dd0.ArrayNum = 0;
  local_dd0.ArrayMax = 0;
  local_dd0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_de4 = 0;
  do {
    if (((local_dd0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_de4) &&
        ((FScriptContainerElement *)&local_de4 <
         local_dd0.AllocatorInstance.Data + (longlong)local_dd0.ArrayMax * 4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_dd0.ArrayNum == local_dd0.ArrayMax) {
      local_dd0.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_dd0.AllocatorInstance,&local_dd0.ArrayMax);
    }
    iVar14 = local_dd0.ArrayNum + 1;
    *(int *)(local_dd0.AllocatorInstance.Data + (longlong)local_dd0.ArrayNum * 4) = local_de4;
    local_de4 = local_de4 + 1;
    local_dd0.ArrayNum = iVar14;
  } while (local_de4 < 1000);
  bVar12 = Algo::
           KahnTopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>_&,_FSystemCoreAlgoTopologicalSortTest::TestBody_::__l27::<lambda_5>_>
                     (&local_dd0,local_de8[0],None);
  if (!bVar12) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_948,
                       L"TopologicalSort returned true when every node has a dependency on a single node"
                      );
    (*pcVar3)(pFVar2,&local_948,0);
    if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_948.Data.AllocatorInstance.Data);
    }
  }
  if ((local_dd0.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)local_dd0.AllocatorInstance.Data != 500) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_938,
                       L"TopologicalSort sorted correctly when every node has a dependency on a single node"
                      );
    (*pcVar3)(pFVar2,&local_938,0);
    if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_938.Data.AllocatorInstance.Data);
    }
  }
  if (local_dd0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dd0.AllocatorInstance.Data);
  }
  uVar7 = _UNK_150631e38;
  uVar6 = ___xmm_00000004000000030000000200000001;
  local_928._First = (int *)&local_b0;
  local_928._Last = (int *)&local_88;
  local_90 = 9;
  local_b0 = ___xmm_00000004000000030000000200000001;
  uStack_a8 = _UNK_150631e38;
  local_8c = 10;
  local_a0 = ___xmm_00000008000000070000000600000005;
  uStack_98 = _UNK_150631ed8;
  TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
            (&local_b78,&local_928);
  local_918 = local_c00 + 4;
  local_388._0_8_ = 0;
  local_910 = local_c00 + 5;
  local_388._8_8_ = 0;
  local_368 = 0;
  local_360 = 0;
  local_35c = 0x80;
  local_358 = 0xffffffff;
  local_354 = 0;
  local_348 = (ForElementType<FSetElementId>)0x0;
  local_340 = 0;
  local_c00[5] = 7;
  local_c00[4] = 6;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_388,(TPairInitializer<int_&&,int_&&> *)local_ac0,(bool *)&local_918);
  local_908 = local_c00 + 6;
  local_c00[7] = 6;
  local_900 = local_c00 + 7;
  local_c00[6] = 1;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_388,(TPairInitializer<int_&&,int_&&> *)(local_ac0 + 4),(bool *)&local_908);
  local_8f8 = local_c00 + 8;
  local_c00[9] = 1;
  local_8f0 = local_c00 + 9;
  local_c00[8] = 4;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_388,(TPairInitializer<int_&&,int_&&> *)local_ab8,(bool *)&local_8f8);
  local_8e8 = &local_d78;
  local_d74 = 4;
  local_8e0 = &local_d74;
  local_d78 = 3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_388,(TPairInitializer<int_&&,int_&&> *)(local_ab8 + 4),(bool *)&local_8e8);
  local_8d8 = &local_d70;
  local_d6c = 10;
  local_8d0 = &local_d6c;
  local_d70 = 3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_388,(TPairInitializer<int_&&,int_&&> *)local_ab0,(bool *)&local_8d8);
  local_8c8 = &local_d68;
  local_d64 = 5;
  local_d68 = 10;
  local_8c0 = &local_d64;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_388,(TPairInitializer<int_&&,int_&&> *)(local_ab0 + 4),(bool *)&local_8c8);
  local_8b8 = &local_d60;
  local_d5c = 9;
  local_8b0 = &local_d5c;
  local_d60 = 10;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_388,(TPairInitializer<int_&&,int_&&> *)local_aa8,(bool *)&local_8b8);
  local_8a8 = &local_d58;
  local_d54 = 8;
  local_8a0 = &local_d54;
  local_d58 = 9;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_388,(TPairInitializer<int_&&,int_&&> *)(local_aa8 + 4),(bool *)&local_8a8);
  local_898 = &local_d50;
  local_d4c = 7;
  local_890 = &local_d4c;
  local_d50 = 8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_388,(TPairInitializer<int_&&,int_&&> *)local_aa0,(bool *)&local_898);
  local_888 = &local_d48;
  local_d44 = 6;
  local_880 = &local_d44;
  local_d48 = 2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_388,(TPairInitializer<int_&&,int_&&> *)(local_aa0 + 4),(bool *)&local_888);
  local_878 = &local_d40;
  local_d3c = 2;
  local_870 = &local_d3c;
  local_d40 = 5;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_388,(TPairInitializer<int_&&,int_&&> *)local_a98,(bool *)&local_878);
  bVar12 = Algo::
           KahnTopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>_&,_FSystemCoreAlgoTopologicalSortTest::TestBody_::__l36::<lambda_6>_>
                     (&local_b78,
                      (TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>
                       *)local_388,None);
  if (!bVar12) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_958,L"TopologicalSort returned true on sketched-out-example-1");
    (*pcVar3)(pFVar2,&local_958,0);
    if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.Data.AllocatorInstance.Data);
    }
  }
  local_b68.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_388 + 0x10);
  local_b68._padding_._0_4_ = 0;
  local_b68._padding_._4_4_ = 1;
  local_b68.UnvisitedBitMask = 0xffffffff;
  local_b68.CurrentBitIndex = 0;
  local_b68.BaseBitIndex = 0;
  if (local_360 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b68);
  }
  TStack_a78._padding_ = CONCAT44(local_b68._padding_._4_4_,(undefined4)local_b68._padding_);
  local_a80 = (longlong *)local_388;
  TStack_a78.CurrentBitIndex = local_b68.CurrentBitIndex;
  TStack_a78.UnvisitedBitMask = local_b68.UnvisitedBitMask;
  TStack_a78._28_4_ = local_b68._28_4_;
  TStack_a78.BaseBitIndex = local_b68.BaseBitIndex;
  local_480 = local_388._8_4_ - local_354;
  local_4a8._16_8_ = local_b68.Array;
  uStack_a58 = CONCAT44(uStack_47c,local_480);
  TStack_a78.Array = local_b68.Array;
  local_4a8._0_8_ = local_a80;
  local_4a8._8_8_ = TStack_a78._padding_;
  local_4a8._24_8_ = TStack_a78._16_8_;
  local_4a8._32_8_ = TStack_a78._24_8_;
  pTVar19 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_4a8,
                       (TBitArray<FDefaultBitArrayAllocator> *)(local_388 + 0x10),local_360);
  local_3d8._8_8_ = pTVar19->_padding_;
  pTVar4 = pTVar19->Array;
  TStack_3c8.AllocatorInstance.InlineData._8_8_ = *(undefined8 *)&pTVar19->UnvisitedBitMask;
  TStack_3c8.AllocatorInstance.SecondaryData =
       *(ForElementType<unsigned_int> *)&pTVar19->BaseBitIndex;
  uVar11 = TStack_3c8.AllocatorInstance.InlineData._12_4_;
  TStack_3c8.AllocatorInstance.InlineData._0_8_ = pTVar4;
  while( true ) {
    plVar10 = local_a80;
    if ((int)local_a80[1] - *(int *)((longlong)local_a80 + 0x34) != (int)uStack_a58) {
      local_de8[0] = (<lambda_5>)0x0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_de8);
    }
    if (((TStack_a78.CurrentBitIndex == uVar11) && (TStack_a78.Array == pTVar4)) &&
       (plVar10 == (longlong *)local_388)) break;
    piVar31 = (int *)((longlong)TStack_a78.CurrentBitIndex * 0x10 + *plVar10);
    pFVar1 = local_b78.AllocatorInstance.Data + (longlong)local_b78.ArrayNum * 4;
    if (local_b78.AllocatorInstance.Data != pFVar1) {
      FVar23.Data = local_b78.AllocatorInstance.Data;
      do {
        if (*(int *)FVar23.Data == *piVar31) {
          iVar14 = (int)((longlong)FVar23.Data - (longlong)local_b78.AllocatorInstance.Data >> 2);
          goto LAB_141b9e74d;
        }
        FVar23.Data = FVar23.Data + 4;
      } while (FVar23.Data != pFVar1);
    }
    iVar30 = -1;
    iVar14 = -1;
    if (local_b78.AllocatorInstance.Data != pFVar1) {
LAB_141b9e74d:
      iVar30 = iVar14;
      FVar23.Data = local_b78.AllocatorInstance.Data;
      do {
        if (*(int *)FVar23.Data == piVar31[1]) {
          iVar14 = (int)((longlong)FVar23.Data - (longlong)local_b78.AllocatorInstance.Data >> 2);
          goto LAB_141b9e766;
        }
        FVar23.Data = FVar23.Data + 4;
      } while (FVar23.Data != pFVar1);
    }
    iVar14 = -1;
LAB_141b9e766:
    if (iVar30 <= iVar14) {
      pFVar17 = FAutomationTestFramework::Get();
      pFVar2 = pFVar17->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_858,L"TopologicalSort sorted correctly on sketched-out-example-1");
      (*pcVar3)(pFVar2,&local_858,0);
      if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_858.Data.AllocatorInstance.Data);
      }
    }
    TStack_a78.UnvisitedBitMask = TStack_a78.UnvisitedBitMask & ~TStack_a78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a78);
  }
  local_340 = 0;
  if (local_348 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_348);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_388);
  if (local_b78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b78.AllocatorInstance.Data);
  }
  local_838._First = (int *)&local_118;
  local_838._Last = (int *)&local_108;
  local_118 = uVar6;
  uStack_110 = uVar7;
  TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
            (&local_bc8,&local_838);
  local_3d8._0_8_ = (FScriptContainerElement *)0x0;
  local_820 = &local_d34;
  local_3d8._8_8_ = 0;
  TStack_3c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  TStack_3c8.NumBits = 0;
  TStack_3c8.MaxBits = 0x80;
  local_3a8 = 0xffffffff;
  local_3a4 = 0;
  local_398 = (ForElementType<FSetElementId>)0x0;
  local_390 = 0;
  local_d34 = 2;
  local_d38 = 1;
  local_828 = &local_d38;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_3d8,(TPairInitializer<int_&&,int_&&> *)(local_a98 + 4),(bool *)&local_828);
  local_818 = &local_d30;
  local_d2c = 1;
  local_810 = &local_d2c;
  local_d30 = 2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_3d8,(TPairInitializer<int_&&,int_&&> *)local_a90,(bool *)&local_818);
  local_808 = &local_d28;
  local_d24 = 3;
  local_800 = &local_d24;
  local_d28 = 2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_3d8,(TPairInitializer<int_&&,int_&&> *)(local_a90 + 4),(bool *)&local_808);
  local_7f8 = &local_d20;
  local_d1c = 4;
  local_7f0 = &local_d1c;
  local_d20 = 3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_3d8,(TPairInitializer<int_&&,int_&&> *)local_a88,(bool *)&local_7f8);
  bVar12 = Algo::
           KahnTopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>_&,_FSystemCoreAlgoTopologicalSortTest::TestBody_::__l47::<lambda_7>_>
                     (&local_bc8,
                      (TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>
                       *)local_3d8,AllowCycles);
  if (!bVar12) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_7e8,
                       L"TopologicalSort returned true with a cycle in the root and with the root cycle depending on a chain of non-cycle verts"
                      );
    (*pcVar3)(pFVar2,&local_7e8);
    if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
    }
  }
  local_7c8._First = (int *)&local_108;
  local_7c8._Last = (int *)&local_f8;
  local_108 = ___xmm_00000001000000020000000300000004;
  uStack_100 = _UNK_15071d278;
  pTVar18 = TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
                      (&local_438,&local_7c8);
  if ((local_bc8.ArrayNum == pTVar18->ArrayNum) &&
     ((local_bc8.ArrayNum == 0 ||
      (iVar14 = memcmp(local_bc8.AllocatorInstance.Data,(pTVar18->AllocatorInstance).Data,
                       (longlong)local_bc8.ArrayNum << 2), iVar14 == 0)))) {
LAB_141b9eaed:
    bVar5 = false;
    bVar12 = false;
    if (bVar13) goto LAB_141b9eafc;
  }
  else {
    local_7a8._First = (int *)&local_f8;
    local_7a8._Last = (int *)&local_e8;
    local_f8 = ___xmm_00000002000000010000000300000004;
    uStack_f0 = _UNK_15071d288;
    pTVar18 = TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
                        (&local_448,&local_7a8);
    if ((local_bc8.ArrayNum == pTVar18->ArrayNum) &&
       ((local_bc8.ArrayNum == 0 ||
        (iVar14 = memcmp(local_bc8.AllocatorInstance.Data,(pTVar18->AllocatorInstance).Data,
                         (longlong)local_bc8.ArrayNum << 2), iVar14 == 0)))) {
      bVar13 = true;
      goto LAB_141b9eaed;
    }
    bVar12 = true;
LAB_141b9eafc:
    bVar5 = bVar12;
    if (local_448.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_448.AllocatorInstance.Data);
    }
  }
  if (local_438.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.AllocatorInstance.Data);
  }
  if (bVar5) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_798,
                       L"TopologicalSort sorted correctly with a cycle in the root and with the root cycle depending on a chain of non-cycle verts"
                      );
    (*pcVar3)(pFVar2);
    if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_798.Data.AllocatorInstance.Data);
    }
  }
  local_390 = 0;
  if (local_398 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_398);
  }
  iVar14 = SUB84(local_3d8._8_8_,4);
  local_3d8._8_8_ = local_3d8._8_8_ & 0xffffffff00000000;
  if (iVar14 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_3d8,0,(int *)(local_3d8 + 0xc));
  }
  local_3a8 = 0xffffffff;
  local_3a4 = 0;
  TStack_3c8.NumBits = 0;
  if (0x80 < (uint)TStack_3c8.MaxBits) {
    TStack_3c8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&TStack_3c8,0);
  }
  if (TStack_3c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)TStack_3c8.AllocatorInstance.SecondaryData);
  }
  if ((FScriptContainerElement *)local_3d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_3d8._0_8_);
  }
  if (local_bc8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bc8.AllocatorInstance.Data);
  }
  local_778._First = (int *)&local_e8;
  local_778._Last = (int *)&local_d8;
  local_e8 = uVar6;
  uStack_e0 = uVar7;
  TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
            (&local_bb8,&local_778);
  local_768 = &local_d8c;
  local_1a8.Elements._0_8_ = 0;
  local_760 = &local_d18;
  local_1a8.Elements._8_8_ = 0;
  local_1a8.Elements._32_8_ = 0;
  local_1a8.Elements._40_4_ = 0;
  local_1a8.Elements._44_4_ = 0x80;
  local_1a8.Elements._48_4_ = 0xffffffff;
  local_1a8.Elements._52_4_ = 0;
  local_1a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1a8.HashSize = 0;
  local_d18 = 3;
  local_d8c = 4;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            (&local_1a8,(TPairInitializer<int_&&,int_&&> *)(local_a88 + 4),(bool *)&local_768);
  local_758 = &local_d14;
  local_d10 = 4;
  local_750 = &local_d10;
  local_d14 = 3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            (&local_1a8,(TPairInitializer<int_&&,int_&&> *)local_b48,(bool *)&local_758);
  local_748 = &local_d0c;
  local_d08 = 2;
  local_740 = &local_d08;
  local_d0c = 3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            (&local_1a8,(TPairInitializer<int_&&,int_&&> *)(local_b48 + 4),(bool *)&local_748);
  local_738 = &local_d04;
  local_d00 = 1;
  local_730 = &local_d00;
  local_d04 = 2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            (&local_1a8,(TPairInitializer<int_&&,int_&&> *)local_b40,(bool *)&local_738);
  bVar13 = Algo::
           KahnTopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>_&,_FSystemCoreAlgoTopologicalSortTest::TestBody_::__l54::<lambda_8>_>
                     (&local_bb8,
                      (TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>
                       *)&local_1a8,AllowCycles);
  if (!bVar13) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_728,
                       L"TopologicalSort returned true with a cycle in the root and with the root cycle depending on a chain of non-cycle verts, submitted in revese"
                      );
    (*pcVar3)(pFVar2,&local_728,0);
    if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_728.Data.AllocatorInstance.Data);
    }
  }
  local_bd8.Data = (FScriptContainerElement *)0x0;
  local_bd0 = 4;
  bVar13 = false;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_bd8,4,&local_bcc);
  local_88 = uVar6;
  uStack_80 = uVar7;
  *(undefined8 *)local_bd8.Data = uVar6;
  *(undefined8 *)(local_bd8.Data + 8) = uVar7;
  if ((local_bb8.ArrayNum == local_bd0) &&
     ((local_bb8.ArrayNum == 0 ||
      (iVar14 = memcmp(local_bb8.AllocatorInstance.Data,local_bd8.Data,
                       (longlong)local_bb8.ArrayNum << 2), iVar14 == 0)))) {
LAB_141b9ef07:
    bVar5 = false;
    bVar12 = false;
    if (bVar13) goto LAB_141b9ef13;
  }
  else {
    local_718._First = (int *)&local_d8;
    local_718._Last = (int *)&local_c8;
    bVar13 = true;
    local_d8 = ___xmm_00000003000000040000000200000001;
    uStack_d0 = _UNK_15071d2b8;
    pTVar18 = TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
                        (&local_428,&local_718);
    if ((local_bb8.ArrayNum == pTVar18->ArrayNum) &&
       ((local_bb8.ArrayNum == 0 ||
        (iVar14 = memcmp(local_bb8.AllocatorInstance.Data,(pTVar18->AllocatorInstance).Data,
                         (longlong)local_bb8.ArrayNum << 2), iVar14 == 0)))) goto LAB_141b9ef07;
    bVar12 = true;
LAB_141b9ef13:
    bVar5 = bVar12;
    if (local_428.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.AllocatorInstance.Data);
    }
  }
  if (local_bd8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bd8.Data);
  }
  if (bVar5) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_708,
                       L"TopologicalSort sorted correctly with a cycle in the root and with the root cycle depending on a chain of non-cycle verts, submitted in revese"
                      );
    (*pcVar3)(pFVar2,&local_708,0);
    if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_708.Data.AllocatorInstance.Data);
    }
  }
  local_1a8.HashSize = 0;
  if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1a8.Elements);
  if (local_bb8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bb8.AllocatorInstance.Data);
  }
  local_dc0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_dc0.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_dc0.AllocatorInstance,4,&local_dc0.ArrayMax);
  local_cf8 = 2;
  local_cfc = 1;
  *(undefined8 *)local_dc0.AllocatorInstance.Data = uVar6;
  *(undefined8 *)(local_dc0.AllocatorInstance.Data + 8) = uVar7;
  local_6f8 = &local_cfc;
  local_248._0_8_ = (FScriptContainerElement *)0x0;
  local_6f0 = &local_cf8;
  local_78 = uVar6;
  uStack_70 = uVar7;
  local_248._8_8_ = 0;
  local_228 = (void *)0x0;
  local_220 = 0;
  local_21c = 0x80;
  local_218 = 0xffffffff;
  local_214 = 0;
  local_208 = (ForElementType<FSetElementId>)0x0;
  local_200 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_248,(TPairInitializer<int_&&,int_&&> *)(local_b40 + 4),(bool *)&local_6f8);
  local_6e8 = &local_cf4;
  local_cf0 = 3;
  local_6e0 = &local_cf0;
  local_cf4 = 2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_248,(TPairInitializer<int_&&,int_&&> *)local_b38,(bool *)&local_6e8);
  local_6d8 = &local_cec;
  local_ce8 = 4;
  local_6d0 = &local_ce8;
  local_cec = 3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_248,(TPairInitializer<int_&&,int_&&> *)(local_b38 + 4),(bool *)&local_6d8);
  local_6c8 = &local_ce4;
  local_ce0 = 3;
  local_6c0 = &local_ce0;
  local_ce4 = 4;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_248,(TPairInitializer<int_&&,int_&&> *)local_b30,(bool *)&local_6c8);
  bVar13 = Algo::
           KahnTopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>_&,_FSystemCoreAlgoTopologicalSortTest::TestBody_::__l61::<lambda_9>_>
                     (&local_dc0,
                      (TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>
                       *)local_248,AllowCycles);
  if (!bVar13) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_6b8,
                       L"TopologicalSort returned true with a cycle at a leaf and a chain from the root depending on that cycle"
                      );
    (*pcVar3)(pFVar2,&local_6b8,0);
    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
    }
  }
  for (FVar23.Data = local_dc0.AllocatorInstance.Data;
      FVar24.Data = local_dc0.AllocatorInstance.Data,
      FVar23.Data != local_dc0.AllocatorInstance.Data + (longlong)local_dc0.ArrayNum * 4;
      FVar23.Data = FVar23.Data + 4) {
    if (*(int *)FVar23.Data == 1) {
      lVar26 = (longlong)FVar23.Data - (longlong)local_dc0.AllocatorInstance.Data >> 2;
      goto LAB_141b9f1d5;
    }
  }
  lVar26 = 0xffffffff;
  iVar14 = -1;
  for (; FVar24.Data != local_dc0.AllocatorInstance.Data + (longlong)local_dc0.ArrayNum * 4;
      FVar24.Data = FVar24.Data + 4) {
LAB_141b9f1d5:
    iVar14 = (int)lVar26;
    if (*(int *)FVar24.Data == 2) {
      iVar30 = (int)((longlong)FVar24.Data - (longlong)local_dc0.AllocatorInstance.Data >> 2);
      goto LAB_141b9f1ea;
    }
  }
  iVar30 = -1;
LAB_141b9f1ea:
  if (iVar14 <= iVar30) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_6a8,
                       L"TopologicalSort sorted correctly with a cycle at a leaf and a chain from the root depending on that cycle"
                      );
    (*pcVar3)(pFVar2);
    if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_dc0.ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)local_dc0.AllocatorInstance.Data != 3) {
    if ((local_dc0.ArrayNum < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)local_dc0.AllocatorInstance.Data != 4) {
      pFVar17 = FAutomationTestFramework::Get();
      pFVar2 = pFVar17->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_698,
                         L"TopologicalSort sorted correctly with a cycle at a leaf and a chain from the root depending on that cycle"
                        );
      (*pcVar3)(pFVar2);
      if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_698.Data.AllocatorInstance.Data);
      }
    }
  }
  local_200 = 0;
  if (local_208 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_208);
  }
  iVar14 = SUB84(local_248._8_8_,4);
  local_248._8_8_ = local_248._8_8_ & 0xffffffff00000000;
  if (iVar14 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_248,0,(int *)(local_248 + 0xc));
  }
  local_218 = 0xffffffff;
  local_214 = 0;
  local_220 = 0;
  if (0x80 < local_21c) {
    local_21c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0x10),0);
  }
  if (local_228 != (void *)0x0) {
    FMemory::Free(local_228);
  }
  if ((FScriptContainerElement *)local_248._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_248._0_8_);
  }
  if (local_dc0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dc0.AllocatorInstance.Data);
  }
  local_db0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_db0.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_db0.AllocatorInstance,4,&local_db0.ArrayMax);
  local_cd8 = 3;
  local_cdc = 4;
  *(undefined8 *)local_db0.AllocatorInstance.Data = uVar6;
  *(undefined8 *)(local_db0.AllocatorInstance.Data + 8) = uVar7;
  local_688 = &local_cdc;
  local_1f8._0_8_ = (FScriptContainerElement *)0x0;
  local_680 = &local_cd8;
  local_68 = uVar6;
  uStack_60 = uVar7;
  local_1f8._8_8_ = 0;
  local_1d8 = (void *)0x0;
  local_1d0 = 0;
  local_1cc = 0x80;
  local_1c8 = 0xffffffff;
  local_1c4 = 0;
  local_1b8 = (ForElementType<FSetElementId>)0x0;
  local_1b0 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_1f8,(TPairInitializer<int_&&,int_&&> *)(local_b30 + 4),(bool *)&local_688);
  local_678 = &local_cd4;
  local_cd0 = 2;
  local_670 = &local_cd0;
  local_cd4 = 3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_1f8,(TPairInitializer<int_&&,int_&&> *)local_b28,(bool *)&local_678);
  local_668 = &local_ccc;
  local_cc8 = 1;
  local_660 = &local_cc8;
  local_ccc = 2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_1f8,(TPairInitializer<int_&&,int_&&> *)(local_b28 + 4),(bool *)&local_668);
  local_658 = &local_cc4;
  local_cc0 = 2;
  local_650 = &local_cc0;
  local_cc4 = 1;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_1f8,(TPairInitializer<int_&&,int_&&> *)local_b20,(bool *)&local_658);
  bVar13 = Algo::
           KahnTopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>_&,_FSystemCoreAlgoTopologicalSortTest::TestBody_::__l71::<lambda_10>_>
                     (&local_db0,
                      (TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>
                       *)local_1f8,AllowCycles);
  if (!bVar13) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_648,
                       L"TopologicalSort returned true with a cycle in the root and with the root cycle depending on a chain of non-cycle verts, submitted in reverse"
                      );
    (*pcVar3)(pFVar2,&local_648,0);
    if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_648.Data.AllocatorInstance.Data);
    }
  }
  for (FVar23.Data = local_db0.AllocatorInstance.Data;
      FVar24.Data = local_db0.AllocatorInstance.Data,
      FVar23.Data != local_db0.AllocatorInstance.Data + (longlong)local_db0.ArrayNum * 4;
      FVar23.Data = FVar23.Data + 4) {
    if (*(int *)FVar23.Data == 4) {
      lVar26 = (longlong)FVar23.Data - (longlong)local_db0.AllocatorInstance.Data >> 2;
      goto LAB_141b9f5e1;
    }
  }
  lVar26 = 0xffffffff;
  iVar14 = -1;
  for (; FVar24.Data != local_db0.AllocatorInstance.Data + (longlong)local_db0.ArrayNum * 4;
      FVar24.Data = FVar24.Data + 4) {
LAB_141b9f5e1:
    iVar14 = (int)lVar26;
    if (*(int *)FVar24.Data == 3) {
      iVar30 = (int)((longlong)FVar24.Data - (longlong)local_db0.AllocatorInstance.Data >> 2);
      goto LAB_141b9f5f6;
    }
  }
  iVar30 = -1;
LAB_141b9f5f6:
  if (iVar14 <= iVar30) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_638,
                       L"TopologicalSort sorted correctly with a cycle in the root and with the root cycle depending on a chain of non-cycle verts, submitted in reverse"
                      );
    (*pcVar3)(pFVar2);
    if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_638.Data.AllocatorInstance.Data);
    }
  }
  if ((local_db0.ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)local_db0.AllocatorInstance.Data != 1) {
    if ((local_db0.ArrayNum < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)local_db0.AllocatorInstance.Data != 2) {
      pFVar17 = FAutomationTestFramework::Get();
      pFVar2 = pFVar17->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_628,
                         L"TopologicalSort sorted correctly with a cycle in the root and with the root cycle depending on a chain of non-cycle verts, submitted in reverse"
                        );
      (*pcVar3)(pFVar2);
      if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_628.Data.AllocatorInstance.Data);
      }
    }
  }
  local_1b0 = 0;
  if (local_1b8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1b8);
  }
  iVar14 = SUB84(local_1f8._8_8_,4);
  local_1f8._8_8_ = local_1f8._8_8_ & 0xffffffff00000000;
  if (iVar14 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_1f8,0,(int *)(local_1f8 + 0xc));
  }
  local_1c8 = 0xffffffff;
  local_1c4 = 0;
  local_1d0 = 0;
  if (0x80 < local_1cc) {
    local_1cc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10),0);
  }
  if (local_1d8 != (void *)0x0) {
    FMemory::Free(local_1d8);
  }
  if ((FScriptContainerElement *)local_1f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1f8._0_8_);
  }
  if (local_db0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_db0.AllocatorInstance.Data);
  }
  local_d88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d88.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_d88.AllocatorInstance,4,&local_d88.ArrayMax);
  local_cb8 = 2;
  local_cbc = 1;
  *(undefined8 *)local_d88.AllocatorInstance.Data = uVar6;
  *(undefined8 *)(local_d88.AllocatorInstance.Data + 8) = uVar7;
  local_618 = &local_cbc;
  local_298._0_8_ = (FScriptContainerElement *)0x0;
  local_610 = &local_cb8;
  local_58 = uVar6;
  uStack_50 = uVar7;
  local_298._8_8_ = 0;
  local_278 = (void *)0x0;
  local_270 = 0;
  local_26c = 0x80;
  local_268 = 0xffffffff;
  local_264 = 0;
  local_258 = (ForElementType<FSetElementId>)0x0;
  local_250 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_298,(TPairInitializer<int_&&,int_&&> *)(local_b20 + 4),(bool *)&local_618);
  local_608 = &local_cb4;
  local_cb0 = 3;
  local_600 = &local_cb0;
  local_cb4 = 2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_298,(TPairInitializer<int_&&,int_&&> *)local_b18,(bool *)&local_608);
  local_5f8 = &local_cac;
  local_ca8 = 4;
  local_5f0 = &local_ca8;
  local_cac = 2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_298,(TPairInitializer<int_&&,int_&&> *)(local_b18 + 4),(bool *)&local_5f8);
  local_5e8 = &local_ca4;
  local_ca0 = 2;
  local_5e0 = &local_ca0;
  local_ca4 = 3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_298,(TPairInitializer<int_&&,int_&&> *)local_b10,(bool *)&local_5e8);
  local_5d8 = &local_c9c;
  local_c98 = 4;
  local_5d0 = &local_c98;
  local_c9c = 3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_298,(TPairInitializer<int_&&,int_&&> *)(local_b10 + 4),(bool *)&local_5d8);
  local_c90 = 2;
  local_c94 = 4;
  local_5c8 = &local_c94;
  local_5c0 = &local_c90;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_298,(TPairInitializer<int_&&,int_&&> *)local_b08,(bool *)&local_5c8);
  local_5b8 = &local_c8c;
  local_c88 = 3;
  local_5b0 = &local_c88;
  local_c8c = 4;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_298,(TPairInitializer<int_&&,int_&&> *)(local_b08 + 4),(bool *)&local_5b8);
  bVar13 = Algo::
           KahnTopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>_&,_FSystemCoreAlgoTopologicalSortTest::TestBody_::__l81::<lambda_11>_>
                     (&local_d88,
                      (TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>
                       *)local_298,AllowCycles);
  if (!bVar13) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_5a8,
                       L"TopologicalSort returned true with a vertex dependent upon a cycle");
    (*pcVar3)(pFVar2,&local_5a8,0);
    if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
    }
  }
  for (FVar23.Data = local_d88.AllocatorInstance.Data;
      FVar24.Data = local_d88.AllocatorInstance.Data,
      FVar23.Data != local_d88.AllocatorInstance.Data + (longlong)local_d88.ArrayNum * 4;
      FVar23.Data = FVar23.Data + 4) {
    if (*(int *)FVar23.Data == 1) {
      lVar26 = (longlong)FVar23.Data - (longlong)local_d88.AllocatorInstance.Data >> 2;
      goto LAB_141b9fb00;
    }
  }
  lVar26 = 0xffffffff;
  iVar14 = -1;
  for (; FVar24.Data != local_d88.AllocatorInstance.Data + (longlong)local_d88.ArrayNum * 4;
      FVar24.Data = FVar24.Data + 4) {
LAB_141b9fb00:
    iVar14 = (int)lVar26;
    if (*(int *)FVar24.Data == 2) {
      iVar30 = (int)((longlong)FVar24.Data - (longlong)local_d88.AllocatorInstance.Data >> 2);
      goto LAB_141b9fb15;
    }
  }
  iVar30 = -1;
LAB_141b9fb15:
  if (iVar14 <= iVar30) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_598,
                       L"TopologicalSort sorted correctly with a vertex dependent upon a cycle");
    (*pcVar3)(pFVar2);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
  }
  local_250 = 0;
  if (local_258 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_258);
  }
  iVar14 = SUB84(local_298._8_8_,4);
  local_298._8_8_ = local_298._8_8_ & 0xffffffff00000000;
  if (iVar14 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_298,0,(int *)(local_298 + 0xc));
  }
  local_268 = 0xffffffff;
  local_264 = 0;
  local_270 = 0;
  if (0x80 < local_26c) {
    local_26c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_298 + 0x10),0);
  }
  if (local_278 != (void *)0x0) {
    FMemory::Free(local_278);
  }
  if ((FScriptContainerElement *)local_298._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  if (local_d88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d88.AllocatorInstance.Data);
  }
  local_588 = &local_c84;
  local_338._0_8_ = (FScriptContainerElement *)0x0;
  local_580 = &local_c80;
  local_338._8_8_ = 0;
  local_318 = (void *)0x0;
  local_310 = 0;
  local_30c = 0x80;
  local_308 = 0xffffffff;
  local_304 = 0;
  local_2f8 = (ForElementType<FSetElementId>)0x0;
  local_2f0 = 0;
  local_c80 = 2;
  local_c84 = 1;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_338,(TPairInitializer<int_&&,int_&&> *)local_b00,(bool *)&local_588);
  local_578 = &local_c7c;
  local_c78 = 3;
  local_570 = &local_c78;
  local_c7c = 2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_338,(TPairInitializer<int_&&,int_&&> *)(local_b00 + 4),(bool *)&local_578);
  local_568 = &local_c74;
  local_c70 = 4;
  local_560 = &local_c70;
  local_c74 = 3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_338,(TPairInitializer<int_&&,int_&&> *)local_af8,(bool *)&local_568);
  local_558 = &local_c6c;
  local_c68 = 6;
  local_550 = &local_c68;
  local_c6c = 3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_338,(TPairInitializer<int_&&,int_&&> *)(local_af8 + 4),(bool *)&local_558);
  local_548 = &local_c64;
  local_c60 = 2;
  local_540 = &local_c60;
  local_c64 = 4;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_338,(TPairInitializer<int_&&,int_&&> *)local_af0,(bool *)&local_548);
  local_538 = &local_c5c;
  local_c58 = 6;
  local_530 = &local_c58;
  local_c5c = 5;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_338,(TPairInitializer<int_&&,int_&&> *)(local_af0 + 4),(bool *)&local_538);
  local_528 = &local_c54;
  local_c50 = 7;
  local_520 = &local_c50;
  local_c54 = 6;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_338,(TPairInitializer<int_&&,int_&&> *)local_ae8,(bool *)&local_528);
  local_518 = &local_c4c;
  local_c48 = 5;
  local_510 = &local_c48;
  local_c4c = 7;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_338,(TPairInitializer<int_&&,int_&&> *)(local_ae8 + 4),(bool *)&local_518);
  uVar9 = _UNK_15071d2c8;
  uVar8 = ___xmm_00000004000000050000000600000007;
  iVar14 = 0;
  while( true ) {
    local_de0.ArrayNum = 0;
    local_de0.ArrayMax = 0;
    iVar30 = iVar14 + 1;
    local_de0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar14 != 0) break;
    local_128 = 5;
    uStack_124 = 6;
    local_120 = 7;
    local_de0.ArrayNum = 7;
    local_de0.ArrayMax = 0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,7,0,&local_de0.AllocatorInstance,7,&local_de0.ArrayMax);
    uVar32 = CONCAT44(uStack_124,local_128);
    local_138 = uVar6;
    uStack_130 = uVar7;
    *(undefined8 *)local_de0.AllocatorInstance.Data = uVar6;
    *(undefined8 *)(local_de0.AllocatorInstance.Data + 8) = uVar7;
    iVar14 = local_120;
LAB_141ba0036:
    *(undefined8 *)(local_de0.AllocatorInstance.Data + 0x10) = uVar32;
    *(int *)(local_de0.AllocatorInstance.Data + 0x18) = iVar14;
    if (iVar30 < 0) goto LAB_141ba031f;
    bVar13 = Algo::
             KahnTopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>_&,_FSystemCoreAlgoTopologicalSortTest::TestBody_::__l90::<lambda_12>_>
                       (&local_de0,
                        (TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>
                         *)local_338,AllowCycles);
    if (!bVar13) {
      pFVar17 = FAutomationTestFramework::Get();
      pFVar2 = pFVar17->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_508,
                         L"TopologicalSort returned true for one cycle dependent upon another");
      (*pcVar3)(pFVar2,&local_508,0);
      if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_508.Data.AllocatorInstance.Data);
      }
    }
    uVar15 = 0;
    if ((int)(local_de0.ArrayNum - 1U) < local_de0.ArrayNum) {
      uVar15 = ~(local_de0.ArrayNum - 1U) >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar14 = local_de0.ArrayNum;
    if (*(int *)(local_de0.AllocatorInstance.Data + (longlong)(local_de0.ArrayNum + -1) * 4) != 1) {
      pFVar17 = FAutomationTestFramework::Get();
      pFVar2 = pFVar17->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_4f8,
                         L"TopologicalSort sorted correctly for one cycle dependent upon another");
      (*pcVar3)(pFVar2,&local_4f8,0);
      if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
      }
      iVar14 = local_de0.ArrayNum;
    }
    pFVar1 = local_de0.AllocatorInstance.Data + (longlong)iVar14 * 4;
    for (FVar23.Data = local_de0.AllocatorInstance.Data;
        FVar20.Data = local_de0.AllocatorInstance.Data,
        FVar24.Data = local_de0.AllocatorInstance.Data,
        FVar25.Data = local_de0.AllocatorInstance.Data,
        FVar29.Data = local_de0.AllocatorInstance.Data,
        FVar28.Data = local_de0.AllocatorInstance.Data, FVar23.Data != pFVar1;
        FVar23.Data = FVar23.Data + 4) {
      if (*(int *)FVar23.Data == 7) {
        lVar26 = (longlong)FVar23.Data - (longlong)local_de0.AllocatorInstance.Data >> 2;
        iVar14 = (int)lVar26;
        goto LAB_141ba0193;
      }
    }
    lVar26 = 0xffffffff;
    iVar14 = -1;
    for (; FVar24.Data != pFVar1; FVar24.Data = FVar24.Data + 4) {
LAB_141ba0193:
      if (*(int *)FVar24.Data == 6) {
        lVar21 = (longlong)FVar24.Data - (longlong)local_de0.AllocatorInstance.Data >> 2;
        iVar16 = (int)lVar21;
        goto LAB_141ba01b6;
      }
    }
    iVar22 = (int)lVar26;
    lVar21 = 0xffffffff;
    iVar27 = -1;
    iVar16 = -1;
    for (; FVar28.Data != pFVar1; FVar28.Data = FVar28.Data + 4) {
LAB_141ba01b6:
      iVar22 = (int)lVar26;
      iVar27 = (int)lVar21;
      if (*(int *)FVar28.Data == 5) {
        iVar27 = (int)((longlong)FVar28.Data - (longlong)local_de0.AllocatorInstance.Data >> 2);
        if (iVar16 < iVar27) {
          iVar16 = iVar27;
        }
        if (iVar16 <= iVar14) goto LAB_141ba01e1;
        iVar14 = iVar16;
        goto LAB_141ba01e1;
      }
    }
    if (iVar27 < -1) {
      iVar27 = -1;
    }
    iVar14 = iVar22;
    if (iVar22 < iVar27) {
      iVar14 = iVar27;
    }
    for (; FVar25.Data != pFVar1; FVar25.Data = FVar25.Data + 4) {
LAB_141ba01e1:
      if (*(int *)FVar25.Data == 4) {
        lVar26 = (longlong)FVar25.Data - (longlong)local_de0.AllocatorInstance.Data >> 2;
        goto LAB_141ba0201;
      }
    }
    lVar26 = 0xffffffff;
    for (; FVar20.Data != pFVar1; FVar20.Data = FVar20.Data + 4) {
LAB_141ba0201:
      if (*(int *)FVar20.Data == 3) {
        lVar21 = (longlong)FVar20.Data - (longlong)local_de0.AllocatorInstance.Data >> 2;
        goto LAB_141ba0220;
      }
    }
    iVar27 = (int)lVar26;
    lVar21 = 0xffffffff;
    iVar16 = -1;
    for (; FVar29.Data != pFVar1; FVar29.Data = FVar29.Data + 4) {
LAB_141ba0220:
      iVar27 = (int)lVar26;
      iVar16 = (int)lVar21;
      if (*(int *)FVar29.Data == 2) {
        iVar22 = (int)((longlong)FVar29.Data - (longlong)local_de0.AllocatorInstance.Data >> 2);
        goto LAB_141ba0235;
      }
    }
    iVar22 = -1;
LAB_141ba0235:
    if (iVar22 < iVar16) {
      iVar16 = iVar22;
    }
    if (iVar16 < iVar27) {
      iVar27 = iVar16;
    }
    if (iVar27 <= iVar14) {
      pFVar17 = FAutomationTestFramework::Get();
      pFVar2 = pFVar17->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_4e8,
                         L"TopologicalSort sorted correctly for one cycle dependent upon another");
      (*pcVar3)(pFVar2,&local_4e8);
      if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
      }
    }
    iVar14 = iVar30;
    if (local_de0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_de0.AllocatorInstance.Data);
    }
  }
  if (iVar14 == 1) {
    local_148 = 3;
    uStack_144 = 2;
    local_de0.ArrayNum = 7;
    local_de0.ArrayMax = 0;
    local_140 = iVar14;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,7,0,&local_de0.AllocatorInstance,7,&local_de0.ArrayMax);
    uVar32 = CONCAT44(uStack_144,local_148);
    local_158 = uVar8;
    uStack_150 = uVar9;
    *(undefined8 *)local_de0.AllocatorInstance.Data = uVar8;
    *(undefined8 *)(local_de0.AllocatorInstance.Data + 8) = uVar9;
    iVar14 = local_140;
    goto LAB_141ba0036;
  }
LAB_141ba031f:
  if (local_de0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_de0.AllocatorInstance.Data);
  }
  local_2f0 = 0;
  if (local_2f8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2f8);
  }
  iVar14 = SUB84(local_338._8_8_,4);
  local_338._8_8_ = local_338._8_8_ & 0xffffffff00000000;
  if (iVar14 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_338,0,(int *)(local_338 + 0xc));
  }
  local_308 = 0xffffffff;
  local_304 = 0;
  local_310 = 0;
  if (0x80 < local_30c) {
    local_30c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_338 + 0x10),0);
  }
  if (local_318 != (void *)0x0) {
    FMemory::Free(local_318);
  }
  if ((FScriptContainerElement *)local_338._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_338._0_8_);
  }
  uVar7 = _UNK_150631e08;
  uVar6 = __xmm_00000003000000020000000100000000;
  local_b8 = 4;
  uStack_b4 = 5;
  local_da0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_da0.ArrayNum = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,6,0,&local_da0.AllocatorInstance,6,&local_da0.ArrayMax);
  local_c40 = 1;
  local_c44 = 0;
  *(undefined8 *)local_da0.AllocatorInstance.Data = uVar6;
  *(undefined8 *)(local_da0.AllocatorInstance.Data + 8) = uVar7;
  *(ulonglong *)(local_da0.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_b4,local_b8);
  local_4d8 = &local_c44;
  local_4d0 = &local_c40;
  local_c8 = uVar6;
  uStack_c0 = uVar7;
  local_2e8._0_8_ = (FScriptContainerElement *)0x0;
  local_2e8._8_8_ = 0;
  local_2c8 = (void *)0x0;
  local_2c0 = 0;
  local_2bc = 0x80;
  local_2b8 = 0xffffffff;
  local_2b4 = 0;
  local_2a8 = (ForElementType<FSetElementId>)0x0;
  local_2a0 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_2e8,(TPairInitializer<int_&&,int_&&> *)local_ae0,(bool *)&local_4d8);
  local_4c8 = &local_c3c;
  local_c38 = 2;
  local_4c0 = &local_c38;
  local_c3c = 1;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_2e8,(TPairInitializer<int_&&,int_&&> *)(local_ae0 + 4),(bool *)&local_4c8);
  local_4b8 = &local_c34;
  local_c30 = 1;
  local_4b0 = &local_c30;
  local_c34 = 2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_2e8,(TPairInitializer<int_&&,int_&&> *)local_ad8,(bool *)&local_4b8);
  local_a40 = &local_c2c;
  local_c28 = 5;
  local_a38 = &local_c28;
  local_c2c = 2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_2e8,(TPairInitializer<int_&&,int_&&> *)(local_ad8 + 4),(bool *)&local_a40);
  local_a30 = &local_c24;
  local_c20 = 3;
  local_a28 = &local_c20;
  local_c24 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_2e8,(TPairInitializer<int_&&,int_&&> *)local_ad0,(bool *)&local_a30);
  local_868 = &local_c1c;
  local_c18 = 4;
  local_860 = &local_c18;
  local_c1c = 3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_2e8,(TPairInitializer<int_&&,int_&&> *)(local_ad0 + 4),(bool *)&local_868);
  local_848 = &local_c14;
  local_c10 = 3;
  local_840 = &local_c10;
  local_c14 = 4;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_2e8,(TPairInitializer<int_&&,int_&&> *)local_ac8,(bool *)&local_848);
  local_7d8 = &local_c0c;
  local_c08[0] = 0;
  local_7d0 = local_c08;
  local_c0c = 5;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             local_2e8,(TPairInitializer<int_&&,int_&&> *)(local_ac8 + 4),(bool *)&local_7d8);
  bVar13 = Algo::
           KahnTopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>_&,_FSystemCoreAlgoTopologicalSortTest::TestBody_::__l105::<lambda_13>_>
                     (&local_da0,
                      (TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>
                       *)local_2e8,AllowCycles);
  if (!bVar13) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar2 = pFVar17->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_7b8,L"TopologicalSort returned true for MutuallyReachableSet Problem1"
                      );
    (*pcVar3)(pFVar2);
    if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_da0.ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)local_da0.AllocatorInstance.Data == 3) {
    if ((local_da0.ArrayNum < 2) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)(local_da0.AllocatorInstance.Data + 4) == 4) goto LAB_141ba08c4;
  }
  if ((local_da0.ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)local_da0.AllocatorInstance.Data == 4) {
    if ((local_da0.ArrayNum < 2) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)(local_da0.AllocatorInstance.Data + 4) == 3) goto LAB_141ba08c4;
  }
  pFVar17 = FAutomationTestFramework::Get();
  pFVar2 = pFVar17->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString(&local_788,
                     L"TopologicalSort sorted correctly for MutuallyReachableSet Problem1");
  (*pcVar3)(pFVar2);
  if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_788.Data.AllocatorInstance.Data);
  }
LAB_141ba08c4:
  local_2a0 = 0;
  if (local_2a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2a8);
  }
  iVar14 = SUB84(local_2e8._8_8_,4);
  local_2e8._8_8_ = local_2e8._8_8_ & 0xffffffff00000000;
  if (iVar14 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_2e8,0,(int *)(local_2e8 + 0xc));
  }
  local_2b8 = 0xffffffff;
  local_2b4 = 0;
  local_2c0 = 0;
  if (0x80 < local_2bc) {
    local_2bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_2e8 + 0x10),0);
  }
  if (local_2c8 != (void *)0x0) {
    FMemory::Free(local_2c8);
  }
  if ((FScriptContainerElement *)local_2e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2e8._0_8_);
  }
  if (local_da0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_da0.AllocatorInstance.Data);
  }
  return;
}

