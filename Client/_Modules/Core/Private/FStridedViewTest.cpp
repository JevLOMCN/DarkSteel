// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bc6160

EAutomationTestFlags __thiscall FStridedViewTest::GetTestFlags(FStridedViewTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc6170

bool __thiscall FStridedViewTest::IsStressTest(FStridedViewTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc6180

uint __thiscall FStridedViewTest::GetRequiredDeviceNum(FStridedViewTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc6190

FString * __thiscall
FStridedViewTest::GetTestSourceFileName(FStridedViewTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\StridedViewTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc61c0

int __thiscall FStridedViewTest::GetTestSourceFileLine(FStridedViewTest *this)

{
  return 0x50;
}

// GetTests @ 141bc61d0

/* WARNING: Removing unreachable block (ram,0x000141bc634e) */

void __thiscall
FStridedViewTest::GetTests
          (FStridedViewTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc6370

bool __thiscall FStridedViewTest::RunTest(FStridedViewTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc63a0

FString * __thiscall
FStridedViewTest::GetBeautifiedTestName(FStridedViewTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FStridedViewTest @ 141be6b00

FStridedViewTest * __thiscall
FStridedViewTest::FStridedViewTest(FStridedViewTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FStridedViewTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::StridedView::Misc");
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

// TestBody @ 141c322e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FStridedViewTest::TestBody(FStridedViewTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [12];
  ForAnyElementType FVar8;
  TVector<double>_u_0 *pTVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  undefined8 *puVar12;
  TVector<double> *pTVar13;
  FAutomationTestFramework *pFVar14;
  TStridedView<UE::Math::TVector<double>_const_,int> *pTVar15;
  TStridedView<UE::Math::TVector<double>,int> *this_00;
  undefined8 *puVar16;
  TVector<double>_u_0 *pTVar17;
  longlong lVar18;
  double *pdVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  double *pdVar26;
  uint uVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar30 [16];
  undefined4 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  undefined1 auStackY_f38 [32];
  ForAnyElementType local_ef8;
  int local_ef0;
  int local_eec;
  ForAnyElementType local_ee8;
  int local_ee0;
  int local_edc;
  ForAnyElementType local_ed8;
  int local_ed0;
  int local_ecc [3];
  undefined4 local_ec0;
  undefined4 uStack_ebc;
  double local_eb8;
  double dStack_eb0;
  double local_ea8;
  TStridedView<UE::Math::TVector<double>,int> local_ea0;
  FMyStruct *local_e88;
  int iStack_e80;
  int iStack_e7c;
  TVector<double> *local_e78;
  int iStack_e70;
  int iStack_e6c;
  TVector<double> *local_e68;
  int iStack_e60;
  int iStack_e5c;
  TVector<double> *local_e58;
  int iStack_e50;
  int iStack_e4c;
  TVector<double> *local_e48;
  int iStack_e40;
  int iStack_e3c;
  TVector<double> *local_e38;
  int iStack_e30;
  int iStack_e2c;
  TVector<double> *local_e28;
  int iStack_e20;
  int iStack_e1c;
  TStridedView<UE::Math::TVector<double>,int> local_e18;
  TStridedView<UE::StridedViewTest::FMyStruct,int> local_e08;
  TStridedView<UE::Math::TVector<double>,int> local_df8;
  TStridedView<UE::Math::TVector<double>,int> local_de8;
  TStridedView<UE::Math::TVector<double>,int> local_dd8;
  TStridedView<UE::Math::TVector<double>,int> local_dc8;
  TStridedView<UE::Math::TVector<double>,int> local_db8;
  TStridedView<UE::Math::TVector<double>,int> local_da8;
  TStridedView<UE::Math::TVector<double>,int> local_d98;
  TStridedView<UE::Math::TVector<double>,int> local_d88;
  TStridedView<UE::Math::TVector<double>,int> local_d78;
  TStridedView<UE::Math::TVector<double>,int> local_d68;
  TStridedView<UE::Math::TVector<double>,int> local_d58;
  TStridedView<UE::Math::TVector<double>,int> local_d48;
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
  undefined4 local_c20;
  undefined4 uStack_c1c;
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
  TVector<double>_u_0 local_b78;
  TVector<double>_u_0 local_b60;
  TVector<double>_u_0 local_b48;
  TVector<double>_u_0 local_b30;
  TVector<double>_u_0 local_b18;
  TVector<double>_u_0 local_b00;
  TVector<double>_u_0 local_ae8;
  TVector<double>_u_0 local_ad0;
  TVector<double>_u_0 local_ab8;
  TVector<double>_u_0 local_aa0;
  TVector<double>_u_0 local_a88;
  TStridedView<UE::StridedViewTest::FMyStruct_const_,int> local_a68;
  TStridedView<UE::Math::TVector<double>_const_,int> local_a58;
  TStridedView<UE::Math::TVector<double>_const_,int> local_a48;
  TStridedView<UE::Math::TVector<double>_const_,int> local_a38;
  TStridedView<UE::Math::TVector<double>_const_,int> local_a28;
  TStridedView<UE::Math::TVector<double>_const_,int> local_a18;
  TStridedView<UE::Math::TVector<double>_const_,int> local_a08;
  TStridedView<UE::Math::TVector<double>_const_,int> local_9f8;
  TStridedView<UE::Math::TVector<double>_const_,int> local_9e8;
  TStridedView<UE::Math::TVector<double>_const_,int> local_9d8;
  TStridedView<UE::Math::TVector<double>_const_,int> local_9c8;
  TStridedView<UE::Math::TVector<double>_const_,int> local_9b8;
  TStridedView<UE::Math::TVector<double>_const_,int> local_9a8;
  TStridedView<UE::Math::TVector<double>_const_,int> local_998;
  TStridedView<UE::Math::TVector<double>,int> local_988;
  TStridedView<UE::Math::TVector<double>_const_,int> local_978 [2];
  undefined1 local_958 [24];
  double adStack_940 [4];
  double dStack_920;
  double local_918;
  double dStack_900;
  double local_8f8;
  double adStack_8f0 [3];
  double local_8d8;
  double dStack_8d0;
  double local_8c8;
  double local_8b0;
  double dStack_8a8;
  double local_8a0;
  double local_888;
  double dStack_880;
  double local_878;
  double local_860;
  double dStack_858;
  double local_850;
  double local_838;
  double dStack_830;
  double local_828;
  double local_810;
  double dStack_808;
  double local_800;
  double local_7e8;
  double dStack_7e0;
  double local_7d8;
  double local_7c0;
  double dStack_7b8;
  double local_7b0;
  double local_798;
  double dStack_790;
  double local_788;
  double local_770;
  double dStack_768;
  double local_760;
  double local_748;
  double dStack_740;
  double local_738;
  double local_720;
  double dStack_718;
  double local_710;
  double local_6f8;
  double dStack_6f0;
  double local_6e8;
  double local_6d0;
  double dStack_6c8;
  double local_6c0;
  TVector<double>_u_0 local_6a8;
  double dStack_690;
  double dStack_688;
  double dStack_680;
  double local_678;
  double dStack_670;
  double local_668;
  double dStack_660;
  double dStack_658;
  double dStack_650;
  double local_648;
  double dStack_640;
  double local_638;
  double dStack_630;
  double dStack_628;
  double dStack_620;
  double local_618;
  double dStack_610;
  double local_608;
  double local_600;
  double dStack_5f8;
  double local_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  double local_5d0;
  double dStack_5c8;
  double local_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double local_5a0;
  double dStack_598;
  double local_590;
  double local_588;
  double dStack_580;
  double local_578;
  double local_570;
  double dStack_568;
  double local_560;
  double local_558;
  double dStack_550;
  double local_548;
  double local_540;
  double dStack_538;
  double local_530;
  double local_528;
  double dStack_520;
  double local_518;
  undefined8 local_508;
  undefined1 auStack_500 [8];
  double local_4f8 [3];
  TVector<double> aTStack_4e0 [43];
  ulonglong local_c8;
  undefined8 uVar31;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_f38;
  lVar22 = 0x11;
  puVar12 = (undefined8 *)(local_958 + 0x10);
  do {
    *(undefined4 *)(puVar12 + -2) = 0x7b;
    puVar12[-1] = 0x4014000000000000;
    *puVar12 = 0x4018000000000000;
    puVar12[1] = 0x401c000000000000;
    *(undefined4 *)(puVar12 + 2) = 0x37a;
    puVar12 = puVar12 + 5;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  TStridedView<UE::Math::TVector<double>,int>::
  TStridedView<UE::Math::TVector<double>,int><UE::Math::TVector<double>_>
            (&local_ea0,0x28,(TVector<double> *)(local_958 + 8),0x11);
  pFVar25 = (FScriptContainerElement *)0x0;
  pFVar23 = pFVar25;
  iVar20 = local_ea0.NumElements;
  if (0 < local_ea0.NumElements) {
    do {
      iVar21 = (int)pFVar23;
      dVar35 = (double)iVar21;
      pTVar13 = TStridedView<UE::Math::TVector<double>,int>::GetElementPtr(&local_ea0,iVar21);
      auVar3._8_4_ = SUB84(dVar35,0);
      auVar3._0_8_ = dVar35;
      auVar3._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      *(undefined1 (*) [16])&pTVar13->field0_0x0 = auVar3;
      *(double *)((longlong)&pTVar13->field0_0x0 + 0x10) = dVar35;
      pFVar23 = (FScriptContainerElement *)(ulonglong)(iVar21 + 1U);
      iVar20 = local_ea0.NumElements;
    } while ((int)(iVar21 + 1U) < local_ea0.NumElements);
  }
  pdVar19 = (double *)(local_958 + 0x10);
  pFVar23 = pFVar25;
  do {
    dVar35 = (double)(int)pFVar23;
    if (((dVar35 != pdVar19[-1]) || (dVar35 != *pdVar19)) || (dVar35 != pdVar19[1])) {
      pFVar14 = FAutomationTestFramework::Get();
      pFVar1 = pFVar14->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_b88,L"Structs[i].Position");
      (*pcVar2)(pFVar1,&local_b88,0);
      if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b88.Data.AllocatorInstance.Data);
      }
    }
    dVar36 = __real_4010000000000000;
    dVar35 = __real_4008000000000000;
    uVar27 = (int)pFVar23 + 1;
    pFVar23 = (FScriptContainerElement *)(ulonglong)uVar27;
    pdVar19 = pdVar19 + 5;
    pFVar24 = pFVar25;
  } while ((int)uVar27 < 0x11);
  while (iVar21 = (int)pFVar24, iVar21 != iVar20) {
    lVar22 = (longlong)iVar21 * (longlong)local_ea0.BytesBetweenElements;
    dVar37 = (((TVector<double>_u_0 *)((longlong)&(local_ea0.FirstElementPtr)->field0_0x0 + lVar22))
             ->_s_0).X;
    dVar38 = *(double *)((longlong)&(local_ea0.FirstElementPtr)->field0_0x0 + lVar22 + 0x10);
    (((TVector<double>_u_0 *)((longlong)&(local_ea0.FirstElementPtr)->field0_0x0 + lVar22))->_s_0).X
         = dVar37 + dVar37;
    *(double *)((longlong)&(local_ea0.FirstElementPtr)->field0_0x0 + lVar22 + 0x10) =
         dVar38 * dVar36;
    *(double *)((longlong)&(local_ea0.FirstElementPtr)->field0_0x0 + lVar22 + 8) =
         *(double *)((longlong)&(local_ea0.FirstElementPtr)->field0_0x0 + lVar22 + 8) * dVar35;
    pFVar24 = (FScriptContainerElement *)(ulonglong)(iVar21 + 1);
  }
  pdVar19 = (double *)(local_958 + 0x10);
  pFVar23 = pFVar25;
  do {
    dVar37 = (double)(int)pFVar23;
    if (((dVar37 + dVar37 != pdVar19[-1]) || (dVar37 * dVar35 != *pdVar19)) ||
       (dVar37 * dVar36 != pdVar19[1])) {
      pFVar14 = FAutomationTestFramework::Get();
      pFVar1 = pFVar14->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_d38,L"Structs[i].Position");
      (*pcVar2)(pFVar1,&local_d38,0);
      if (local_d38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d38.Data.AllocatorInstance.Data);
      }
    }
    uVar27 = (int)pFVar23 + 1;
    pFVar23 = (FScriptContainerElement *)(ulonglong)uVar27;
    pdVar19 = pdVar19 + 5;
  } while ((int)uVar27 < 0x11);
  dVar38 = (adStack_940[3] + (double)local_958._8_8_ + dStack_900 + local_8d8 + local_8b0 +
            local_888 + local_860 + local_838 + local_810 + local_7e8 + local_7c0 + local_798 +
            local_770 + local_748 + local_720 + local_6f8 + local_6d0) * __real_3fae1e1e1e1e1e1e;
  dVar37 = (dStack_920 + (double)local_958._16_8_ + local_8f8 + dStack_8d0 + dStack_8a8 + dStack_880
            + dStack_858 + dStack_830 + dStack_808 + dStack_7e0 + dStack_7b8 + dStack_790 +
            dStack_768 + dStack_740 + dStack_718 + dStack_6f0 + dStack_6c8) *
           __real_3fae1e1e1e1e1e1e;
  dVar36 = (local_918 + adStack_940[0] + adStack_8f0[0] + local_8c8 + local_8a0 + local_878 +
            local_850 + local_828 + local_800 + local_7d8 + local_7b0 + local_788 + local_760 +
            local_738 + local_710 + local_6e8 + local_6c0) * __real_3fae1e1e1e1e1e1e;
  pTVar15 = MakeStridedView<UE::Math::TVector<double>_const_>
                      (&local_998,0x28,(TVector<double> *)(local_958 + 8),0x11);
  local_9b8.FirstElementPtr = pTVar15->FirstElementPtr;
  local_9b8.BytesBetweenElements = pTVar15->BytesBetweenElements;
  local_9b8.NumElements = pTVar15->NumElements;
  UE::StridedViewTest::ComputeMean((TVector<double> *)&local_b60._s_0,&local_9b8);
  if (((local_b60._s_0.X != dVar38) || (local_b60._s_0.Y != dVar37)) || (local_b60._s_0.Z != dVar36)
     ) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_d28,L"ComputeMeanPosition(MakeArrayView(Structs))");
    (*pcVar2)(pFVar1,&local_d28,0);
    if (local_d28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d28.Data.AllocatorInstance.Data);
    }
  }
  TStridedView<UE::StridedViewTest::FMyStruct,int>::
  TStridedView<UE::StridedViewTest::FMyStruct,int><UE::StridedViewTest::FMyStruct>
            (&local_e08,0x28,(FMyStruct *)local_958,0x11);
  iStack_e80 = local_e08.BytesBetweenElements;
  local_e88 = (FMyStruct *)0x0;
  iStack_e7c = local_e08.NumElements;
  if (local_e08.NumElements != 0) {
    local_e88 = TStridedView<UE::StridedViewTest::FMyStruct,int>::GetElementPtr(&local_e08,0);
  }
  local_a68.NumElements = iStack_e7c;
  local_a68.BytesBetweenElements = iStack_e80;
  local_a68.FirstElementPtr = local_e88;
  UE::StridedViewTest::ComputeMeanPositionStrided((TVector<double> *)&local_b48._s_0,&local_a68);
  if (((local_b48._s_0.X != dVar38) || (local_b48._s_0.Y != dVar37)) || (local_b48._s_0.Z != dVar36)
     ) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_d18,L"ComputeMeanPositionStrided(MakeStridedView(Structs))");
    (*pcVar2)(pFVar1,&local_d18,0);
    if (local_d18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d18.Data.AllocatorInstance.Data);
    }
  }
  this_00 = TStridedView<UE::Math::TVector<double>,int>::
            TStridedView<UE::Math::TVector<double>,int><UE::Math::TVector<double>_>
                      (&local_988,0x28,(TVector<double> *)(local_958 + 8),0x11);
  local_e78 = (TVector<double> *)0x0;
  iStack_e70 = this_00->BytesBetweenElements;
  iStack_e6c = this_00->NumElements;
  if (iStack_e6c != 0) {
    local_e78 = TStridedView<UE::Math::TVector<double>,int>::GetElementPtr(this_00,0);
  }
  local_a58.NumElements = iStack_e6c;
  local_a58.BytesBetweenElements = iStack_e70;
  local_a58.FirstElementPtr = local_e78;
  UE::StridedViewTest::ComputeMean((TVector<double> *)&local_b30._s_0,&local_a58);
  if (((local_b30._s_0.X != dVar38) || (local_b30._s_0.Y != dVar37)) || (local_b30._s_0.Z != dVar36)
     ) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_d08,
                       L"ComputeMean(TStridedView<FVector>(sizeof(FMyStruct), &Structs[0].Position, Num))"
                      );
    (*pcVar2)(pFVar1,&local_d08,0);
    if (local_d08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d08.Data.AllocatorInstance.Data);
    }
  }
  pTVar15 = TStridedView<UE::Math::TVector<double>_const_,int>::
            TStridedView<UE::Math::TVector<double>_const_,int><UE::Math::TVector<double>_>
                      (local_978,0x28,(TVector<double> *)(local_958 + 8),0x11);
  local_a48.FirstElementPtr = pTVar15->FirstElementPtr;
  local_a48.BytesBetweenElements = pTVar15->BytesBetweenElements;
  local_a48.NumElements = pTVar15->NumElements;
  UE::StridedViewTest::ComputeMean((TVector<double> *)&local_b78._s_0,&local_a48);
  if (((local_b78._s_0.X != dVar38) || (local_b78._s_0.Y != dVar37)) || (local_b78._s_0.Z != dVar36)
     ) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_cf8,
                       L"ComputeMean(TStridedView<const FVector>(sizeof(FMyStruct), &Structs[0].Position, Num))"
                      );
    (*pcVar2)(pFVar1,&local_cf8,0);
    if (local_cf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cf8.Data.AllocatorInstance.Data);
    }
  }
  TStridedView<UE::Math::TVector<double>,int>::
  TStridedView<UE::Math::TVector<double>,int><UE::Math::TVector<double>_>
            (&local_df8,0x28,(TVector<double> *)(local_958 + 8),0x11);
  iStack_e60 = local_df8.BytesBetweenElements;
  local_e68 = (TVector<double> *)0x0;
  iStack_e5c = local_df8.NumElements;
  if (local_df8.NumElements != 0) {
    local_e68 = TStridedView<UE::Math::TVector<double>,int>::GetElementPtr(&local_df8,0);
  }
  local_a38.NumElements = iStack_e5c;
  local_a38.BytesBetweenElements = iStack_e60;
  local_a38.FirstElementPtr = local_e68;
  UE::StridedViewTest::ComputeMean((TVector<double> *)&local_b18._s_0,&local_a38);
  if (((local_b18._s_0.X != dVar38) || (local_b18._s_0.Y != dVar37)) || (local_b18._s_0.Z != dVar36)
     ) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_ce8,
                       L"ComputeMean(MakeStridedView(sizeof(FMyStruct), &Structs[0].Position, Num))"
                      );
    (*pcVar2)(pFVar1,&local_ce8,0);
    if (local_ce8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ce8.Data.AllocatorInstance.Data);
    }
  }
  TStridedView<UE::Math::TVector<double>,int>::
  TStridedView<UE::Math::TVector<double>,int><UE::Math::TVector<double>_>
            (&local_de8,0x28,(TVector<double> *)(local_958 + 8),0x11);
  iStack_e50 = local_de8.BytesBetweenElements;
  local_e58 = (TVector<double> *)0x0;
  iStack_e4c = local_de8.NumElements;
  if (local_de8.NumElements != 0) {
    local_e58 = TStridedView<UE::Math::TVector<double>,int>::GetElementPtr(&local_de8,0);
  }
  local_a28.NumElements = iStack_e4c;
  local_a28.BytesBetweenElements = iStack_e50;
  local_a28.FirstElementPtr = local_e58;
  UE::StridedViewTest::ComputeMean((TVector<double> *)&local_b00._s_0,&local_a28);
  if (((local_b00._s_0.X != dVar38) || (local_b00._s_0.Y != dVar37)) || (local_b00._s_0.Z != dVar36)
     ) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_cd8,
                       L"ComputeMean(MakeStridedView(MakeArrayView(Structs), &FMyStruct::Position))"
                      );
    (*pcVar2)(pFVar1,&local_cd8,0);
    if (local_cd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cd8.Data.AllocatorInstance.Data);
    }
  }
  TStridedView<UE::Math::TVector<double>,int>::
  TStridedView<UE::Math::TVector<double>,int><UE::Math::TVector<double>_>
            (&local_dd8,0x28,(TVector<double> *)(local_958 + 8),0x11);
  iStack_e40 = local_dd8.BytesBetweenElements;
  local_e48 = (TVector<double> *)0x0;
  iStack_e3c = local_dd8.NumElements;
  if (local_dd8.NumElements != 0) {
    local_e48 = TStridedView<UE::Math::TVector<double>,int>::GetElementPtr(&local_dd8,0);
  }
  local_a18.NumElements = iStack_e3c;
  local_a18.BytesBetweenElements = iStack_e40;
  local_a18.FirstElementPtr = local_e48;
  UE::StridedViewTest::ComputeMean((TVector<double> *)&local_ae8._s_0,&local_a18);
  if (((local_ae8._s_0.X != dVar38) || (local_ae8._s_0.Y != dVar37)) || (local_ae8._s_0.Z != dVar36)
     ) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_cc8,L"ComputeMean(MakeStridedView(Structs, &FMyStruct::Position))");
    (*pcVar2)(pFVar1,&local_cc8,0);
    if (local_cc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cc8.Data.AllocatorInstance.Data);
    }
  }
  local_ef8.Data = (FScriptContainerElement *)0x0;
  local_ef0 = 0x11;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,0x11,0,&local_ef8,0x11,&local_eec);
  lVar22 = 5;
  puVar12 = (undefined8 *)local_958;
  FVar10.Data = local_ef8.Data;
  do {
    pFVar23 = FVar10.Data;
    puVar16 = puVar12;
    uVar31 = puVar16[1];
    *(undefined8 *)pFVar23 = *puVar16;
    *(undefined8 *)(pFVar23 + 8) = uVar31;
    uVar31 = puVar16[3];
    *(undefined8 *)(pFVar23 + 0x10) = puVar16[2];
    *(undefined8 *)(pFVar23 + 0x18) = uVar31;
    uVar31 = puVar16[5];
    *(undefined8 *)(pFVar23 + 0x20) = puVar16[4];
    *(undefined8 *)(pFVar23 + 0x28) = uVar31;
    uVar31 = puVar16[7];
    *(undefined8 *)(pFVar23 + 0x30) = puVar16[6];
    *(undefined8 *)(pFVar23 + 0x38) = uVar31;
    uVar31 = puVar16[9];
    *(undefined8 *)(pFVar23 + 0x40) = puVar16[8];
    *(undefined8 *)(pFVar23 + 0x48) = uVar31;
    uVar31 = puVar16[0xb];
    *(undefined8 *)(pFVar23 + 0x50) = puVar16[10];
    *(undefined8 *)(pFVar23 + 0x58) = uVar31;
    uVar31 = puVar16[0xd];
    *(undefined8 *)(pFVar23 + 0x60) = puVar16[0xc];
    *(undefined8 *)(pFVar23 + 0x68) = uVar31;
    uVar31 = puVar16[0xf];
    *(undefined8 *)(pFVar23 + 0x70) = puVar16[0xe];
    *(undefined8 *)(pFVar23 + 0x78) = uVar31;
    lVar22 = lVar22 + -1;
    puVar12 = puVar16 + 0x10;
    FVar10.Data = pFVar23 + 0x80;
  } while (lVar22 != 0);
  uVar31 = puVar16[0x11];
  *(undefined8 *)(pFVar23 + 0x80) = puVar16[0x10];
  *(undefined8 *)(pFVar23 + 0x88) = uVar31;
  uVar31 = puVar16[0x13];
  *(undefined8 *)(pFVar23 + 0x90) = puVar16[0x12];
  *(undefined8 *)(pFVar23 + 0x98) = uVar31;
  *(undefined8 *)(pFVar23 + 0xa0) = puVar16[0x14];
  TStridedView<UE::Math::TVector<double>,int>::
  TStridedView<UE::Math::TVector<double>,int><UE::Math::TVector<double>_>
            (&local_dc8,0x28,(TVector<double> *)(local_ef8.Data + 8),local_ef0);
  iStack_e30 = local_dc8.BytesBetweenElements;
  local_e38 = (TVector<double> *)0x0;
  iStack_e2c = local_dc8.NumElements;
  if (local_dc8.NumElements != 0) {
    local_e38 = TStridedView<UE::Math::TVector<double>,int>::GetElementPtr(&local_dc8,0);
  }
  local_a08.NumElements = iStack_e2c;
  local_a08.BytesBetweenElements = iStack_e30;
  local_a08.FirstElementPtr = local_e38;
  UE::StridedViewTest::ComputeMean((TVector<double> *)&local_ad0._s_0,&local_a08);
  if (((local_ad0._s_0.X != dVar38) || (local_ad0._s_0.Y != dVar37)) || (local_ad0._s_0.Z != dVar36)
     ) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_cb8,
                       L"ComputeMean(MakeStridedView(StructsArray, &FMyStruct::Position))");
    (*pcVar2)(pFVar1,&local_cb8,0);
    if (local_cb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cb8.Data.AllocatorInstance.Data);
    }
  }
  if (local_ef8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ef8.Data);
  }
  local_6a8._s_0.X = (double)local_958._8_8_;
  local_6a8._s_0.Y = (double)local_958._16_8_;
  local_6a8._s_0.Z = adStack_940[0];
  dStack_690 = adStack_940[3];
  dStack_688 = dStack_920;
  dStack_680 = local_918;
  local_678 = dStack_900;
  dStack_670 = local_8f8;
  local_668 = adStack_8f0[0];
  dStack_660 = local_8d8;
  dStack_658 = dStack_8d0;
  dStack_650 = local_8c8;
  local_648 = local_8b0;
  dStack_640 = dStack_8a8;
  local_638 = local_8a0;
  dStack_630 = local_888;
  dStack_628 = dStack_880;
  dStack_620 = local_878;
  local_618 = local_860;
  dStack_610 = dStack_858;
  local_608 = local_850;
  local_600 = local_838;
  dStack_5f8 = dStack_830;
  local_5f0 = local_828;
  local_5e8 = local_810;
  dStack_5e0 = dStack_808;
  local_5d8 = local_800;
  local_5d0 = local_7e8;
  dStack_5c8 = dStack_7e0;
  local_5c0 = local_7d8;
  local_5b8 = local_7c0;
  dStack_5b0 = dStack_7b8;
  local_5a8 = local_7b0;
  local_5a0 = local_798;
  dStack_598 = dStack_790;
  local_590 = local_788;
  local_588 = local_770;
  dStack_580 = dStack_768;
  local_578 = local_760;
  local_570 = local_748;
  dStack_568 = dStack_740;
  local_560 = local_738;
  local_558 = local_720;
  dStack_550 = dStack_718;
  local_548 = local_710;
  local_540 = local_6f8;
  dStack_538 = dStack_6f0;
  local_530 = local_6e8;
  local_528 = local_6d0;
  dStack_520 = dStack_6c8;
  local_518 = local_6c0;
  TStridedView<UE::Math::TVector<double>,int>::
  TStridedView<UE::Math::TVector<double>,int><UE::Math::TVector<double>_>
            (&local_db8,0x18,(TVector<double> *)&local_6a8._s_0,0x11);
  iStack_e20 = local_db8.BytesBetweenElements;
  local_e28 = (TVector<double> *)0x0;
  iStack_e1c = local_db8.NumElements;
  if (local_db8.NumElements != 0) {
    local_e28 = TStridedView<UE::Math::TVector<double>,int>::GetElementPtr(&local_db8,0);
  }
  local_9f8.NumElements = iStack_e1c;
  local_9f8.BytesBetweenElements = iStack_e20;
  local_9f8.FirstElementPtr = local_e28;
  UE::StridedViewTest::ComputeMean((TVector<double> *)&local_ab8._s_0,&local_9f8);
  if (((local_ab8._s_0.X != dVar38) || (local_ab8._s_0.Y != dVar37)) || (local_ab8._s_0.Z != dVar36)
     ) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_ca8,L"ComputeMean(MakeStridedView(Vecs))");
    (*pcVar2)(pFVar1,&local_ca8,0);
    if (local_ca8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ca8.Data.AllocatorInstance.Data);
    }
  }
  MakeStridedView<UE::Math::TVector<double>_const_>
            (&local_9e8,0x18,(TVector<double> *)&local_6a8._s_0,0x11);
  local_9d8.FirstElementPtr = local_9e8.FirstElementPtr;
  local_9d8.BytesBetweenElements = local_9e8.BytesBetweenElements;
  local_9d8.NumElements = local_9e8.NumElements;
  UE::StridedViewTest::ComputeMean((TVector<double> *)&local_aa0._s_0,&local_9d8);
  if (((local_aa0._s_0.X != dVar38) || (local_aa0._s_0.Y != dVar37)) || (local_aa0._s_0.Z != dVar36)
     ) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c98,L"ComputeMean(MakeStridedView(VecsView))");
    (*pcVar2)(pFVar1,&local_c98,0);
    if (local_c98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c98.Data.AllocatorInstance.Data);
    }
  }
  local_ee8.Data = (FScriptContainerElement *)0x0;
  local_ee0 = 0x11;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,0x11,0,&local_ee8,0x11,&local_edc);
  iVar20 = local_ee0;
  FVar10.Data = local_ee8.Data;
  lVar22 = 3;
  pTVar9 = &local_6a8;
  FVar8.Data = local_ee8.Data;
  do {
    pFVar23 = FVar8.Data;
    pTVar17 = pTVar9;
    dVar34 = pTVar17->XYZ[1];
    *(double *)pFVar23 = (pTVar17->_s_0).X;
    *(double *)(pFVar23 + 8) = dVar34;
    dVar34 = pTVar17->XYZ[3];
    *(double *)(pFVar23 + 0x10) = pTVar17->XYZ[2];
    *(double *)(pFVar23 + 0x18) = dVar34;
    dVar34 = pTVar17->XYZ[5];
    *(double *)(pFVar23 + 0x20) = pTVar17->XYZ[4];
    *(double *)(pFVar23 + 0x28) = dVar34;
    dVar34 = pTVar17->XYZ[7];
    *(double *)(pFVar23 + 0x30) = pTVar17->XYZ[6];
    *(double *)(pFVar23 + 0x38) = dVar34;
    dVar34 = pTVar17->XYZ[9];
    *(double *)(pFVar23 + 0x40) = pTVar17->XYZ[8];
    *(double *)(pFVar23 + 0x48) = dVar34;
    dVar34 = pTVar17->XYZ[0xb];
    *(double *)(pFVar23 + 0x50) = pTVar17->XYZ[10];
    *(double *)(pFVar23 + 0x58) = dVar34;
    dVar34 = pTVar17->XYZ[0xd];
    *(double *)(pFVar23 + 0x60) = pTVar17->XYZ[0xc];
    *(double *)(pFVar23 + 0x68) = dVar34;
    dVar34 = pTVar17->XYZ[0xf];
    *(double *)(pFVar23 + 0x70) = pTVar17->XYZ[0xe];
    *(double *)(pFVar23 + 0x78) = dVar34;
    lVar22 = lVar22 + -1;
    pTVar9 = (TVector<double>_u_0 *)(pTVar17->XYZ + 0x10);
    FVar8.Data = pFVar23 + 0x80;
  } while (lVar22 != 0);
  dVar34 = pTVar17->XYZ[0x11];
  *(double *)(pFVar23 + 0x80) = (((TVector<double>_u_0 *)(pTVar17->XYZ + 0x10))->_s_0).X;
  *(double *)(pFVar23 + 0x88) = dVar34;
  *(double *)(pFVar23 + 0x90) = pTVar17->XYZ[0x12];
  if ((local_ee0 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  MakeStridedView<UE::Math::TVector<double>_const_>
            (&local_9a8,0x18,(TVector<double> *)FVar10.Data,iVar20);
  local_9c8.FirstElementPtr = local_9a8.FirstElementPtr;
  local_9c8.BytesBetweenElements = local_9a8.BytesBetweenElements;
  local_9c8.NumElements = local_9a8.NumElements;
  UE::StridedViewTest::ComputeMean((TVector<double> *)&local_a88._s_0,&local_9c8);
  if (((local_a88._s_0.X != dVar38) || (local_a88._s_0.Y != dVar37)) || (local_a88._s_0.Z != dVar36)
     ) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c88,L"ComputeMean(MakeStridedView(VecsArray))");
    (*pcVar2)(pFVar1,&local_c88,0);
    if (local_c88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c88.Data.AllocatorInstance.Data);
    }
  }
  if (local_ee8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ee8.Data);
  }
  local_da8.FirstElementPtr = (TVector<double> *)&local_eb8;
  local_ea8 = dVar35;
  local_eb8 = ___xmm_40000000000000003ff0000000000000;
  dStack_eb0 = _UNK_150744178;
  local_da8.BytesBetweenElements = 0;
  local_da8.NumElements = 0x11;
  pTVar13 = TStridedView<UE::Math::TVector<double>,int>::GetElementPtr(&local_da8,0);
  dVar6 = __real_3ff0000000000000;
  dVar28 = 0.0;
  dVar34 = 0.0;
  dVar33 = 0.0;
  dVar4 = 0.0;
  for (pFVar23 = pFVar25; (int)pFVar23 != 0x11;
      pFVar23 = (FScriptContainerElement *)(ulonglong)((int)pFVar23 + 1)) {
    dVar28 = dVar28 + (pTVar13->field0_0x0)._s_0.X;
    dVar34 = dVar34 + (pTVar13->field0_0x0)._s_0.Y;
    dVar33 = dVar33 + (pTVar13->field0_0x0)._s_0.Z;
  }
  dVar5 = __real_3ff0000000000000 / 17.0;
  if (((dVar28 * dVar5 != local_eb8) || (dVar5 * dVar34 != dStack_eb0)) ||
     (dVar5 * dVar33 != local_ea8)) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c78,L"ComputeMean(TStridedView<FVector>(0, &V, Num))");
    (*pcVar2)(pFVar1,&local_c78,0);
    if (local_c78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c78.Data.AllocatorInstance.Data);
    }
  }
  local_d98.FirstElementPtr = (TVector<double> *)&local_eb8;
  local_d98.BytesBetweenElements = 0;
  local_d98.NumElements = 0x11;
  dVar28 = 0.0;
  pTVar13 = TStridedView<UE::Math::TVector<double>,int>::GetElementPtr(&local_d98,0);
  dVar33 = 0.0;
  uVar32 = 0;
  uVar39 = 0;
  dVar34 = 0.0;
  for (pFVar23 = pFVar25; (int)pFVar23 != 0x11;
      pFVar23 = (FScriptContainerElement *)(ulonglong)((int)pFVar23 + 1)) {
    dVar33 = dVar33 + (pTVar13->field0_0x0)._s_0.X;
    dVar34 = dVar34 + (pTVar13->field0_0x0)._s_0.Y;
    dVar28 = (double)CONCAT44(uVar39,uVar32) + (pTVar13->field0_0x0)._s_0.Z;
    uVar39 = (undefined4)((ulonglong)dVar28 >> 0x20);
    uVar32 = SUB84(dVar28,0);
  }
  if (((dVar33 != local_eb8 * __real_4031000000000000) ||
      (dVar34 != dStack_eb0 * __real_4031000000000000)) ||
     (dVar28 != local_ea8 * __real_4031000000000000)) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c68,L"ComputeSum(TStridedView<FVector>(0, &V, Num))");
    (*pcVar2)(pFVar1,&local_c68,0);
    if (local_c68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c68.Data.AllocatorInstance.Data);
    }
  }
  lVar22 = 0x11;
  pdVar19 = local_4f8;
  do {
    *(undefined4 *)(pdVar19 + -2) = 0x7b;
    pdVar19[-1] = 5.0;
    *pdVar19 = 6.0;
    pdVar19[1] = 7.0;
    *(undefined4 *)(pdVar19 + 2) = 0x37a;
    pdVar19[3] = 0.0;
    pdVar19[4] = 0.0;
    pdVar19[5] = 0.0;
    pdVar19 = pdVar19 + 8;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  local_e18.FirstElementPtr = (TVector<double> *)auStack_500;
  local_e18.BytesBetweenElements = 0x40;
  local_d78.FirstElementPtr = aTStack_4e0;
  local_e18.NumElements = 0x11;
  local_d88.FirstElementPtr = (TVector<double> *)(local_958 + 8);
  local_d78.BytesBetweenElements = 0x40;
  local_d78.NumElements = 0x11;
  local_d88.BytesBetweenElements = 0x28;
  local_d88.NumElements = 0x11;
  pFVar23 = pFVar25;
  do {
    iVar21 = (int)pFVar23;
    pTVar13 = TStridedView<UE::Math::TVector<double>,int>::GetElementPtr(&local_d88,iVar21);
    dVar28 = (pTVar13->field0_0x0)._s_0.X;
    dVar33 = (pTVar13->field0_0x0)._s_0.Y;
    dVar34 = (pTVar13->field0_0x0)._s_0.Z;
    pTVar13 = TStridedView<UE::Math::TVector<double>,int>::GetElementPtr(&local_e18,iVar21);
    (pTVar13->field0_0x0)._s_0.X = dVar28;
    (pTVar13->field0_0x0)._s_0.Y = dVar33;
    (pTVar13->field0_0x0)._s_0.Z = dVar34;
    pTVar13 = TStridedView<UE::Math::TVector<double>,int>::GetElementPtr(&local_d78,iVar21);
    iVar20 = local_e18.NumElements;
    pFVar23 = (FScriptContainerElement *)(ulonglong)(iVar21 + 1U);
    dVar34 = (double)iVar21;
    (pTVar13->field0_0x0)._s_0.X = dVar34;
    (pTVar13->field0_0x0)._s_0.Y = dVar34 + dVar34;
    (pTVar13->field0_0x0)._s_0.Z = dVar34 * dVar35;
  } while ((int)(iVar21 + 1U) < local_e18.NumElements);
  if (0 < local_e18.NumElements) {
    pdVar19 = (double *)(local_958 + 0x10);
    pdVar26 = local_4f8;
    pFVar23 = pFVar25;
    do {
      if (((pdVar19[-1] != pdVar26[-1]) || (*pdVar19 != *pdVar26)) || (pdVar19[1] != pdVar26[1])) {
        pFVar14 = FAutomationTestFramework::Get();
        pFVar1 = pFVar14->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_c58,L"StructsDerived[i].Position");
        (*pcVar2)(pFVar1,&local_c58,0);
        if (local_c58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c58.Data.AllocatorInstance.Data);
        }
      }
      dVar34 = (double)(int)pFVar23;
      if (((dVar34 != pdVar26[3]) || (dVar34 + dVar34 != pdVar26[4])) ||
         (dVar34 * dVar35 != pdVar26[5])) {
        pFVar14 = FAutomationTestFramework::Get();
        pFVar1 = pFVar14->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_c48,L"StructsDerived[i].Normal");
        (*pcVar2)(pFVar1);
        if (local_c48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c48.Data.AllocatorInstance.Data);
        }
      }
      uVar27 = (int)pFVar23 + 1;
      pFVar23 = (FScriptContainerElement *)(ulonglong)uVar27;
      pdVar19 = pdVar19 + 5;
      pdVar26 = pdVar26 + 8;
    } while ((int)uVar27 < iVar20);
  }
  lVar22 = 8;
  local_d68.FirstElementPtr = (TVector<double> *)auStack_500;
  local_d68.BytesBetweenElements = 0x40;
  local_d68.NumElements = 0x11;
  pTVar13 = TStridedView<UE::Math::TVector<double>,int>::GetElementPtr(&local_d68,0);
  dVar34 = 0.0;
  dVar35 = 0.0;
  dVar28 = 0.0;
  pFVar23 = pFVar25;
  while (iVar20 = (int)pFVar23, iVar20 != 0x11) {
    lVar18 = (longlong)iVar20 * 0x40;
    dVar34 = dVar34 + *(double *)(lVar18 + (longlong)pTVar13);
    dVar35 = dVar35 + *(double *)(lVar18 + 8 + (longlong)pTVar13);
    dVar28 = dVar28 + *(double *)(lVar18 + 0x10 + (longlong)pTVar13);
    pFVar23 = (FScriptContainerElement *)(ulonglong)(iVar20 + 1);
  }
  if (((dVar5 * dVar34 != dVar38) || (dVar35 * dVar5 != dVar37)) || (dVar28 * dVar5 != dVar36)) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c38,
                       L"ComputeMean(TStridedView<FVector>(sizeof(FMyStructDerived), &StructsDerived[0].Position, Num))"
                      );
    (*pcVar2)(pFVar1,&local_c38,0);
    if (local_c38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c38.Data.AllocatorInstance.Data);
    }
  }
  local_c20 = 0x40;
  uStack_c1c = 0x11;
  dVar34 = 0.0;
  dVar35 = 0.0;
  dVar28 = 0.0;
  pFVar23 = pFVar25;
  while (iVar20 = (int)pFVar23, iVar20 != 0x11) {
    lVar18 = (longlong)iVar20;
    dVar34 = dVar34 + *(double *)(auStack_500 + lVar18 * 0x40);
    dVar35 = dVar35 + local_4f8[lVar18 * 8];
    dVar28 = dVar28 + local_4f8[lVar18 * 8 + 1];
    pFVar23 = (FScriptContainerElement *)(ulonglong)(iVar20 + 1);
  }
  if (((dVar5 * dVar34 != dVar38) || (dVar35 * dVar5 != dVar37)) || (dVar28 * dVar5 != dVar36)) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c18,
                       L"ComputeMean(TStridedView<const FVector>(sizeof(FMyStructDerived), &StructsDerived[0].Position, Num))"
                      );
    (*pcVar2)(pFVar1,&local_c18,0);
    if (local_c18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c18.Data.AllocatorInstance.Data);
    }
  }
  local_d58.FirstElementPtr = (TVector<double> *)auStack_500;
  local_d58.BytesBetweenElements = 0x40;
  local_d58.NumElements = 0x11;
  pTVar13 = TStridedView<UE::Math::TVector<double>,int>::GetElementPtr(&local_d58,0);
  dVar34 = 0.0;
  dVar35 = 0.0;
  dVar28 = 0.0;
  pFVar23 = pFVar25;
  while (iVar20 = (int)pFVar23, iVar20 != 0x11) {
    lVar18 = (longlong)iVar20 * 0x40;
    dVar34 = dVar34 + *(double *)(lVar18 + (longlong)pTVar13);
    dVar35 = dVar35 + *(double *)(lVar18 + 8 + (longlong)pTVar13);
    dVar28 = dVar28 + *(double *)(lVar18 + 0x10 + (longlong)pTVar13);
    pFVar23 = (FScriptContainerElement *)(ulonglong)(iVar20 + 1);
  }
  if (((dVar5 * dVar34 != dVar38) || (dVar5 * dVar35 != dVar37)) || (dVar5 * dVar28 != dVar36)) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c08,
                       L"ComputeMean(MakeStridedView(sizeof(FMyStructDerived), &StructsDerived[0].Position, Num))"
                      );
    (*pcVar2)(pFVar1,&local_c08,0);
    if (local_c08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c08.Data.AllocatorInstance.Data);
    }
  }
  local_ec0 = 0x40;
  uStack_ebc = 0x11;
  dVar34 = 0.0;
  dVar35 = 0.0;
  dVar28 = 0.0;
  pFVar23 = pFVar25;
  while (iVar20 = (int)pFVar23, iVar20 != 0x11) {
    lVar18 = (longlong)iVar20;
    dVar34 = dVar34 + *(double *)(auStack_500 + lVar18 * 0x40);
    dVar35 = dVar35 + local_4f8[lVar18 * 8];
    dVar28 = dVar28 + local_4f8[lVar18 * 8 + 1];
    pFVar23 = (FScriptContainerElement *)(ulonglong)(iVar20 + 1);
  }
  if (((dVar5 * dVar34 != dVar38) || (dVar35 * dVar5 != dVar37)) || (dVar28 * dVar5 != dVar36)) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_bf8,L"ComputeMeanPositionStrided(ViewDerivedAsBase)");
    (*pcVar2)(pFVar1,&local_bf8,0);
    if (local_bf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bf8.Data.AllocatorInstance.Data);
    }
  }
  uStack_ebc = 0x11;
  local_ec0 = 0x40;
  dVar34 = 0.0;
  dVar35 = 0.0;
  dVar28 = 0.0;
  pFVar23 = pFVar25;
  while (iVar20 = (int)pFVar23, iVar20 != 0x11) {
    lVar18 = (longlong)iVar20;
    dVar34 = dVar34 + *(double *)(auStack_500 + lVar18 * 0x40);
    dVar35 = dVar35 + local_4f8[lVar18 * 8];
    dVar28 = dVar28 + local_4f8[lVar18 * 8 + 1];
    pFVar23 = (FScriptContainerElement *)(ulonglong)(iVar20 + 1);
  }
  if (((dVar5 * dVar34 != dVar38) || (dVar35 * dVar5 != dVar37)) || (dVar28 * dVar5 != dVar36)) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_be8,L"ComputeMeanPositionStrided(ViewDerivedAsBase2)");
    (*pcVar2)(pFVar1,&local_be8,0);
    if (local_be8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_be8.Data.AllocatorInstance.Data);
    }
  }
  dVar34 = 0.0;
  dVar35 = 0.0;
  dVar28 = 0.0;
  pFVar23 = pFVar25;
  while (iVar20 = (int)pFVar23, iVar20 != 0x11) {
    lVar18 = (longlong)iVar20;
    dVar34 = dVar34 + *(double *)(auStack_500 + lVar18 * 0x40);
    dVar35 = dVar35 + local_4f8[lVar18 * 8];
    dVar28 = dVar28 + local_4f8[lVar18 * 8 + 1];
    pFVar23 = (FScriptContainerElement *)(ulonglong)(iVar20 + 1);
  }
  if (((dVar5 * dVar34 != dVar38) || (dVar35 * dVar5 != dVar37)) || (dVar28 * dVar5 != dVar36)) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_bd8,
                       L"ComputeMean(MakeStridedView(MakeArrayView(StructsDerived), &FMyStructDerived::Position))"
                      );
    (*pcVar2)(pFVar1,&local_bd8,0);
    if (local_bd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bd8.Data.AllocatorInstance.Data);
    }
  }
  dVar34 = 0.0;
  dVar35 = 0.0;
  dVar28 = 0.0;
  pFVar23 = pFVar25;
  while (iVar20 = (int)pFVar23, iVar20 != 0x11) {
    lVar18 = (longlong)iVar20;
    dVar34 = dVar34 + *(double *)(auStack_500 + lVar18 * 0x40);
    dVar35 = dVar35 + local_4f8[lVar18 * 8];
    dVar28 = dVar28 + local_4f8[lVar18 * 8 + 1];
    pFVar23 = (FScriptContainerElement *)(ulonglong)(iVar20 + 1);
  }
  if (((dVar34 * dVar5 != dVar38) || (dVar5 * dVar35 != dVar37)) || (dVar5 * dVar28 != dVar36)) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_bc8,
                       L"ComputeMean(MakeStridedView(MakeArrayView(StructsDerived), &FMyStruct::Position))"
                      );
    (*pcVar2)(pFVar1,&local_bc8,0);
    if (local_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bc8.Data.AllocatorInstance.Data);
    }
  }
  local_d48.FirstElementPtr = (TVector<double> *)auStack_500;
  local_d48.BytesBetweenElements = 0x40;
  local_d48.NumElements = 0x11;
  pTVar13 = TStridedView<UE::Math::TVector<double>,int>::GetElementPtr(&local_d48,0);
  dVar34 = 0.0;
  dVar35 = 0.0;
  dVar28 = 0.0;
  pFVar23 = pFVar25;
  while (iVar20 = (int)pFVar23, iVar20 != 0x11) {
    lVar18 = (longlong)iVar20 * 0x40;
    dVar34 = dVar34 + *(double *)(lVar18 + (longlong)pTVar13);
    dVar35 = dVar35 + *(double *)(lVar18 + 8 + (longlong)pTVar13);
    dVar28 = dVar28 + *(double *)(lVar18 + 0x10 + (longlong)pTVar13);
    pFVar23 = (FScriptContainerElement *)(ulonglong)(iVar20 + 1);
  }
  if (((dVar34 * dVar5 != dVar38) || (dVar35 * dVar5 != dVar37)) || (dVar28 * dVar5 != dVar36)) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_bb8,
                       L"ComputeMean(MakeStridedView(StructsDerived, &FMyStructDerived::Position))")
    ;
    (*pcVar2)(pFVar1,&local_bb8,0);
    if (local_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bb8.Data.AllocatorInstance.Data);
    }
  }
  local_ed8.Data = (FScriptContainerElement *)0x0;
  local_ed0 = 0x11;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,8,0x11,0,&local_ed8,0x11,local_ecc);
  iVar20 = local_ed0;
  FVar10.Data = local_ed8.Data;
  FVar8.Data = local_ed8.Data;
  puVar12 = &local_508;
  do {
    puVar16 = puVar12;
    pFVar23 = FVar8.Data;
    uVar31 = puVar16[1];
    *(undefined8 *)pFVar23 = *puVar16;
    *(undefined8 *)(pFVar23 + 8) = uVar31;
    uVar31 = puVar16[3];
    *(undefined8 *)(pFVar23 + 0x10) = puVar16[2];
    *(undefined8 *)(pFVar23 + 0x18) = uVar31;
    uVar31 = puVar16[5];
    *(undefined8 *)(pFVar23 + 0x20) = puVar16[4];
    *(undefined8 *)(pFVar23 + 0x28) = uVar31;
    uVar31 = puVar16[7];
    *(undefined8 *)(pFVar23 + 0x30) = puVar16[6];
    *(undefined8 *)(pFVar23 + 0x38) = uVar31;
    uVar31 = puVar16[9];
    *(undefined8 *)(pFVar23 + 0x40) = puVar16[8];
    *(undefined8 *)(pFVar23 + 0x48) = uVar31;
    uVar31 = puVar16[0xb];
    *(undefined8 *)(pFVar23 + 0x50) = puVar16[10];
    *(undefined8 *)(pFVar23 + 0x58) = uVar31;
    uVar31 = puVar16[0xd];
    *(undefined8 *)(pFVar23 + 0x60) = puVar16[0xc];
    *(undefined8 *)(pFVar23 + 0x68) = uVar31;
    uVar31 = puVar16[0xf];
    *(undefined8 *)(pFVar23 + 0x70) = puVar16[0xe];
    *(undefined8 *)(pFVar23 + 0x78) = uVar31;
    lVar22 = lVar22 + -1;
    FVar8.Data = pFVar23 + 0x80;
    puVar12 = puVar16 + 0x10;
  } while (lVar22 != 0);
  uVar31 = puVar16[0x11];
  *(undefined8 *)(pFVar23 + 0x80) = puVar16[0x10];
  *(undefined8 *)(pFVar23 + 0x88) = uVar31;
  uVar31 = puVar16[0x13];
  *(undefined8 *)(pFVar23 + 0x90) = puVar16[0x12];
  *(undefined8 *)(pFVar23 + 0x98) = uVar31;
  uVar31 = puVar16[0x15];
  *(undefined8 *)(pFVar23 + 0xa0) = puVar16[0x14];
  *(undefined8 *)(pFVar23 + 0xa8) = uVar31;
  uVar31 = puVar16[0x17];
  *(undefined8 *)(pFVar23 + 0xb0) = puVar16[0x16];
  *(undefined8 *)(pFVar23 + 0xb8) = uVar31;
  if ((local_ed0 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumElements >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x3f,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar23 = pFVar25;
  if (iVar20 != 0) {
    if ((iVar20 < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                            ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar23 = FVar10.Data + 8;
  }
  auVar29._0_12_ = ZEXT812(0);
  auVar29._12_4_ = 0;
  dVar35 = 0.0;
  dVar28 = 0.0;
  pFVar24 = pFVar25;
  dVar34 = 0.0;
  while (iVar21 = (int)pFVar24, iVar21 != iVar20) {
    lVar22 = (longlong)iVar21 * 0x40;
    auVar29._0_8_ = auVar29._0_8_ + *(double *)(pFVar23 + lVar22);
    dVar35 = dVar35 + *(double *)(pFVar23 + lVar22 + 8);
    dVar28 = dVar28 + *(double *)(pFVar23 + lVar22 + 0x10);
    dVar34 = auVar29._0_8_;
    pFVar24 = (FScriptContainerElement *)(ulonglong)(iVar21 + 1);
  }
  uVar31 = 0;
  dVar6 = dVar6 / (double)iVar20;
  if (((dVar34 * dVar6 != dVar38) || (dVar35 * dVar6 != dVar37)) || (dVar28 * dVar6 != dVar36)) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_ba8,
                       L"ComputeMean(MakeStridedView(StructsArrayDerived, &FMyStructDerived::Position))"
                      );
    (*pcVar2)(pFVar1,&local_ba8,0);
    uVar31 = extraout_XMM0_Qb;
    if (local_ba8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ba8.Data.AllocatorInstance.Data);
      uVar31 = extraout_XMM0._8_8_;
    }
  }
  if (local_ed8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ed8.Data);
    uVar31 = extraout_XMM0_00._8_8_;
  }
  dVar35 = 0.0;
  dVar36 = 0.0;
  pdVar19 = adStack_8f0;
  dVar37 = 0.0;
  dVar38 = 0.0;
  lVar22 = 4;
  do {
    dVar35 = dVar35 + pdVar19[-10];
    dVar36 = dVar36 + pdVar19[-5];
    dVar34 = *pdVar19;
    pdVar26 = pdVar19 + 5;
    pdVar19 = pdVar19 + 0x14;
    dVar37 = dVar37 + dVar34;
    dVar38 = dVar38 + *pdVar26;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  auVar7._4_8_ = uVar31;
  auVar7._0_4_ = (int)((ulonglong)(dVar35 + dVar37) >> 0x20);
  auVar30._0_8_ = auVar7._0_8_ << 0x20;
  auVar30._8_4_ = SUB84(dVar36 + dVar38,0);
  auVar30._12_4_ = (int)((ulonglong)(dVar36 + dVar38) >> 0x20);
  while (iVar20 = (int)pFVar25, iVar20 != 0x11) {
    dVar4 = dVar4 + adStack_940[(longlong)iVar20 * 5];
    pFVar25 = (FScriptContainerElement *)(ulonglong)(iVar20 + 1);
  }
  if (dVar4 != local_6c0 + dVar35 + dVar37 + auVar30._8_8_) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_b98,
                       L"Algo::Accumulate(MakeStridedView((int32)sizeof(Structs[0]), &Structs[0].Position.Z, Num), 0.0f)"
                      );
    (*pcVar2)(pFVar1,&local_b98,0);
    if (local_b98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b98.Data.AllocatorInstance.Data);
    }
  }
  return;
}

