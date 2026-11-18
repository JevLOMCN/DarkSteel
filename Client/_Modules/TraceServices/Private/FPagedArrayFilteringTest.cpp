// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 8

// GetTestFlags @ 14d493ad0

EAutomationTestFlags __thiscall
FPagedArrayFilteringTest::GetTestFlags(FPagedArrayFilteringTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14d493ae0

bool __thiscall FPagedArrayFilteringTest::IsStressTest(FPagedArrayFilteringTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14d493af0

uint __thiscall FPagedArrayFilteringTest::GetRequiredDeviceNum(FPagedArrayFilteringTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14d493b00

FString * __thiscall
FPagedArrayFilteringTest::GetTestSourceFileName
          (FPagedArrayFilteringTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Tests\\UnitTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14d493b30

int __thiscall FPagedArrayFilteringTest::GetTestSourceFileLine(FPagedArrayFilteringTest *this)

{
  return 7;
}

// GetTests @ 14d493b40

/* WARNING: Removing unreachable block (ram,0x00014d493c2d) */
/* WARNING: Removing unreachable block (ram,0x00014d493cf8) */

void __thiscall
FPagedArrayFilteringTest::GetTests
          (FPagedArrayFilteringTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Insights.Analysis.PagedArrayFiltering");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14d493d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FPagedArrayFilteringTest::RunTest(FPagedArrayFilteringTest *this,FString *param_1)

{
  code *pcVar1;
  longlong lVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TPagedArrayPage<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion>
  *pTVar7;
  TPagedArrayPage<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion>
  *pTVar8;
  TPagedArrayPage<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion>
  *pTVar9;
  TPagedArrayPage<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion>
  *pTVar10;
  FTimeRegion *pFVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  void *pvVar17;
  FInt32Interval FVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FAutomationTestBase *pFVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  wchar_t *pwVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  double in_XMM1_Qa;
  undefined1 auStackY_378 [32];
  undefined1 local_338;
  TLess<void> local_337 [3];
  int local_334;
  uint local_330;
  FSlabAllocator *local_328;
  ForAnyElementType local_320;
  undefined8 local_318;
  FScriptContainerElement *local_310;
  FScriptContainerElement *pFStack_308;
  longlong local_300;
  longlong local_2f8;
  FScriptContainerElement *local_2f0;
  uint local_2e8;
  uint local_2e4;
  uint local_2e0;
  int local_2dc;
  int iStack_2d8;
  int local_2d4;
  int iStack_2d0;
  undefined8 local_2cc;
  FTimeRegion *local_2c0;
  FAutomationTestBase *local_2b8;
  ForAnyElementType local_2b0;
  uint local_2a8;
  int local_2a4;
  int local_2a0;
  int iStack_29c;
  longlong local_298;
  ulonglong local_290;
  ForAnyElementType local_288;
  uint local_280;
  int local_27c;
  FSlabAllocator *local_278;
  ForAnyElementType local_270;
  undefined8 local_268;
  FScriptContainerElement *local_260;
  FScriptContainerElement *pFStack_258;
  longlong local_250;
  longlong local_248;
  double local_240;
  FSlabAllocator *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 *local_220;
  longlong *plStack_218;
  undefined8 local_210;
  undefined8 local_208;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  code *local_1d0;
  undefined1 *local_1c8;
  FString local_1c0;
  code *local_1b0;
  undefined1 *local_1a8;
  code *local_1a0;
  TLess<void> *local_198;
  FString local_190;
  code *local_180;
  undefined1 *local_178;
  code *local_170;
  TLess<void> *local_168;
  FString local_160;
  code *local_150;
  undefined1 *local_148;
  code *local_140;
  TLess<void> *local_138;
  FString local_130;
  undefined1 local_120 [16];
  undefined1 local_110 [24];
  TPagedArrayPage<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion>
  *local_f8;
  TPagedArrayPage<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion>
  *pTStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  FSlabAllocator local_d8;
  ulonglong local_68;
  
  pTVar10 = _UNK_150631eb8;
  pTVar9 = ___xmm_00000007000000060000000500000004;
  pTVar8 = _UNK_150631e08;
  pTVar7 = __xmm_00000003000000020000000100000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_378;
  uVar20 = 0;
  uVar16 = 0;
  local_e8 = 8;
  uStack_e4 = 9;
  local_e0 = 10;
  local_2b0.Data = (FScriptContainerElement *)0x0;
  local_2a8 = 0xb;
  local_2b8 = (FAutomationTestBase *)this;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0xb,0,&local_2b0,0xb,&local_2a4);
  local_110._8_8_ = pTVar7;
  local_110._16_8_ = pTVar8;
  *(TPagedArrayPage<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion>
    **)local_2b0.Data = pTVar7;
  *(TPagedArrayPage<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion>
    **)(local_2b0.Data + 8) = pTVar8;
  *(TPagedArrayPage<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion>
    **)(local_2b0.Data + 0x10) = pTVar9;
  *(TPagedArrayPage<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion>
    **)(local_2b0.Data + 0x18) = pTVar10;
  *(ulonglong *)(local_2b0.Data + 0x20) = CONCAT44(uStack_e4,local_e8);
  *(undefined4 *)(local_2b0.Data + 0x28) = local_e0;
  local_f8 = pTVar9;
  pTStack_f0 = pTVar10;
  local_288.Data = (FScriptContainerElement *)0x0;
  local_280 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_288,1,&local_27c);
  uVar21 = 0;
  *(undefined4 *)local_288.Data = 1;
  uVar29 = uVar21;
  uVar15 = local_2a8;
  uVar28 = uVar20;
  if (0 < (int)local_2a8) {
    do {
      uVar26 = uVar15 >> 1;
      uVar29 = uVar28;
      if (*(int *)(local_2b0.Data + (longlong)(int)(uVar26 + uVar28) * 4) < 4) {
        uVar29 = (uVar15 & 1) + uVar26 + uVar28;
      }
      uVar15 = uVar26;
      uVar28 = uVar29;
    } while (uVar26 != 0);
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"First index of element found in range",uVar29,4);
  uVar29 = local_2a8;
  uVar15 = uVar21;
  if (0 < (int)local_2a8) {
    do {
      iVar14 = (uVar29 >> 1) + uVar15;
      if (*(int *)(local_2b0.Data + (longlong)iVar14 * 4) < 100) {
        uVar15 = (uVar29 & 1) + iVar14;
      }
      uVar28 = uVar29 >> 1;
      uVar29 = uVar29 >> 1;
    } while (uVar28 != 0);
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"First index of element not in range",uVar15,0xb);
  uVar29 = local_2a8;
  uVar15 = uVar21;
  if (0 < (int)local_2a8) {
    do {
      iVar14 = (uVar29 >> 1) + uVar15;
      if (*(int *)(local_2b0.Data + (longlong)iVar14 * 4) < 5) {
        uVar15 = (uVar29 & 1) + iVar14;
      }
      uVar28 = uVar29 >> 1;
      uVar29 = uVar29 >> 1;
    } while (uVar28 != 0);
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Upper bound value found in range",uVar15,5);
  uVar29 = local_2a8;
  uVar15 = uVar21;
  if (0 < (int)local_2a8) {
    do {
      iVar14 = (uVar29 >> 1) + uVar15;
      if (*(int *)(local_2b0.Data + (longlong)iVar14 * 4) < 0x65) {
        uVar15 = (uVar29 & 1) + iVar14;
      }
      uVar28 = uVar29 >> 1;
      uVar29 = uVar29 >> 1;
    } while (uVar28 != 0);
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Upper bound value not found in range",uVar15,0xb);
  uVar29 = local_280;
  uVar15 = uVar21;
  if (0 < (int)local_280) {
    do {
      iVar14 = (uVar29 >> 1) + uVar15;
      if (*(int *)(local_288.Data + (longlong)iVar14 * 4) < 0xb) {
        uVar15 = (uVar29 & 1) + iVar14;
      }
      uVar28 = uVar29 >> 1;
      uVar29 = uVar29 >> 1;
    } while (uVar28 != 0);
  }
  pwVar27 = (wchar_t *)&DAT_00000001;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Upper bound value found in single-item range",uVar15,1);
  local_d8._padding_ = (longlong)&___7FSlabAllocator_TraceServices__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_d8.Cs,4000);
  local_d8.Slabs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238 = &local_d8;
  local_d8.Slabs.ArrayNum = 0;
  local_d8.Slabs.ArrayMax = 0;
  local_278 = &local_d8;
  local_d8.CurrentSlab = (uchar *)0x0;
  local_d8.SlabSize = 0x2000000;
  local_d8.CurrentSlabAllocatedSize = 0;
  local_d8.TotalUsedSize = 0;
  local_d8.TotalAllocatedSize = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = (undefined8 *)0x0;
  plStack_218 = (longlong *)0x0;
  local_210 = 4;
  local_208 = 0;
  local_270.Data = (FScriptContainerElement *)0x0;
  local_268 = 0;
  local_260 = (FScriptContainerElement *)0x0;
  pFStack_258 = (FScriptContainerElement *)0x0;
  local_250 = 4;
  local_248 = 0;
  iVar14 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_270,(int *)((longlong)&local_268 + 4));
  pFVar25 = local_270.Data + (longlong)iVar14 * 0x10;
  local_268 = CONCAT44(local_268._4_4_,iVar14 + 1);
  DefaultConstructItems<TraceServices::TPagedArrayPage<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion>,int>
            (pFVar25,1);
  local_260 = local_270.Data;
  pcVar1 = *(code **)(local_278->_padding_ + 8);
  pFStack_258 = pFVar25;
  if (pcVar1 == TraceServices::FSlabAllocator::Allocate) {
    pvVar17 = TraceServices::FSlabAllocator::Allocate(local_278,local_250 << 4);
  }
  else {
    pvVar17 = (void *)(*pcVar1)();
  }
  *(void **)pFStack_258 = pvVar17;
  local_248 = local_248 + 1;
  lVar19 = *(longlong *)(pFStack_258 + 8);
  lVar2 = *(longlong *)pFStack_258;
  *(undefined8 *)(lVar2 + lVar19 * 0x10) = 0x3ff0000000000000;
  *(undefined8 *)(lVar2 + 8 + lVar19 * 0x10) = 0x4000000000000000;
  *(longlong *)(pFStack_258 + 8) = *(longlong *)(pFStack_258 + 8) + 1;
  local_328 = &local_d8;
  local_320.Data = (FScriptContainerElement *)0x0;
  local_318 = 0;
  local_310 = (FScriptContainerElement *)0x0;
  pFStack_308 = (FScriptContainerElement *)0x0;
  local_300 = 4;
  local_2f8 = 0;
  iVar14 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_320,(int *)((longlong)&local_318 + 4));
  pFVar25 = local_320.Data + (longlong)iVar14 * 0x10;
  local_318 = CONCAT44(local_318._4_4_,iVar14 + 1);
  DefaultConstructItems<TraceServices::TPagedArrayPage<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion>,int>
            (pFVar25,1);
  local_310 = local_320.Data;
  pcVar1 = *(code **)(local_328->_padding_ + 8);
  pFStack_308 = pFVar25;
  if (pcVar1 == TraceServices::FSlabAllocator::Allocate) {
    pvVar17 = TraceServices::FSlabAllocator::Allocate(local_328,local_300 << 4);
  }
  else {
    pvVar17 = (void *)(*pcVar1)();
  }
  *(void **)pFStack_308 = pvVar17;
  local_2f8 = local_2f8 + 1;
  lVar19 = *(longlong *)(pFStack_308 + 8);
  lVar2 = *(longlong *)pFStack_308;
  *(undefined8 *)(lVar2 + lVar19 * 0x10) = 0x3ff0000000000000;
  *(undefined8 *)(lVar2 + 8 + lVar19 * 0x10) = 0x4000000000000000;
  *(longlong *)(pFStack_308 + 8) = *(longlong *)(pFStack_308 + 8) + 1;
  if ((pFStack_308 == (FScriptContainerElement *)0x0) ||
     (*(longlong *)(pFStack_308 + 8) == local_300)) {
    iVar14 = (uint)local_318;
    if ((uint)local_318 == local_318._4_4_) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_320,(int *)((longlong)&local_318 + 4));
    }
    local_318 = CONCAT44(local_318._4_4_,iVar14 + 1);
    pFVar25 = local_320.Data + (longlong)iVar14 * 0x10;
    DefaultConstructItems<TraceServices::TPagedArrayPage<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion>,int>
              (pFVar25,1);
    local_310 = local_320.Data;
    pcVar1 = *(code **)(local_328->_padding_ + 8);
    pFStack_308 = pFVar25;
    if (pcVar1 == TraceServices::FSlabAllocator::Allocate) {
      pvVar17 = TraceServices::FSlabAllocator::Allocate(local_328,local_300 << 4);
    }
    else {
      pvVar17 = (void *)(*pcVar1)();
    }
    *(void **)pFStack_308 = pvVar17;
  }
  local_2f8 = local_2f8 + 1;
  lVar19 = *(longlong *)(pFStack_308 + 8);
  lVar2 = *(longlong *)pFStack_308;
  *(undefined8 *)(lVar2 + lVar19 * 0x10) = 0x4008000000000000;
  *(undefined8 *)(lVar2 + 8 + lVar19 * 0x10) = 0x4010000000000000;
  *(longlong *)(pFStack_308 + 8) = *(longlong *)(pFStack_308 + 8) + 1;
  if ((pFStack_308 == (FScriptContainerElement *)0x0) ||
     (*(longlong *)(pFStack_308 + 8) == local_300)) {
    iVar14 = (uint)local_318;
    if ((uint)local_318 == local_318._4_4_) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_320,(int *)((longlong)&local_318 + 4));
    }
    local_318 = CONCAT44(local_318._4_4_,iVar14 + 1);
    pFVar25 = local_320.Data + (longlong)iVar14 * 0x10;
    DefaultConstructItems<TraceServices::TPagedArrayPage<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion>,int>
              (pFVar25,1);
    local_310 = local_320.Data;
    pcVar1 = *(code **)(local_328->_padding_ + 8);
    pFStack_308 = pFVar25;
    if (pcVar1 == TraceServices::FSlabAllocator::Allocate) {
      pvVar17 = TraceServices::FSlabAllocator::Allocate(local_328,local_300 << 4);
    }
    else {
      pvVar17 = (void *)(*pcVar1)();
    }
    *(void **)pFStack_308 = pvVar17;
  }
  local_2f8 = local_2f8 + 1;
  lVar19 = *(longlong *)(pFStack_308 + 8);
  lVar2 = *(longlong *)pFStack_308;
  *(undefined8 *)(lVar2 + lVar19 * 0x10) = 0x4014000000000000;
  *(undefined8 *)(lVar2 + 8 + lVar19 * 0x10) = 0x4018000000000000;
  *(longlong *)(pFStack_308 + 8) = *(longlong *)(pFStack_308 + 8) + 1;
  if ((pFStack_308 == (FScriptContainerElement *)0x0) ||
     (*(longlong *)(pFStack_308 + 8) == local_300)) {
    iVar14 = (uint)local_318;
    if ((uint)local_318 == local_318._4_4_) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_320,(int *)((longlong)&local_318 + 4));
    }
    local_318 = CONCAT44(local_318._4_4_,iVar14 + 1);
    pFVar25 = local_320.Data + (longlong)iVar14 * 0x10;
    DefaultConstructItems<TraceServices::TPagedArrayPage<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion>,int>
              (pFVar25,1);
    local_310 = local_320.Data;
    pcVar1 = *(code **)(local_328->_padding_ + 8);
    pFStack_308 = pFVar25;
    if (pcVar1 == TraceServices::FSlabAllocator::Allocate) {
      pvVar17 = TraceServices::FSlabAllocator::Allocate(local_328,local_300 << 4);
    }
    else {
      pvVar17 = (void *)(*pcVar1)();
    }
    *(void **)pFStack_308 = pvVar17;
  }
  local_2f8 = local_2f8 + 1;
  lVar19 = *(longlong *)(pFStack_308 + 8);
  lVar2 = *(longlong *)pFStack_308;
  *(undefined8 *)(lVar2 + lVar19 * 0x10) = 0x401c000000000000;
  *(undefined8 *)(lVar2 + 8 + lVar19 * 0x10) = 0x4020000000000000;
  *(longlong *)(pFStack_308 + 8) = *(longlong *)(pFStack_308 + 8) + 1;
  if ((pFStack_308 == (FScriptContainerElement *)0x0) ||
     (*(longlong *)(pFStack_308 + 8) == local_300)) {
    iVar14 = (uint)local_318;
    if ((uint)local_318 == local_318._4_4_) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_320,(int *)((longlong)&local_318 + 4));
    }
    local_318 = CONCAT44(local_318._4_4_,iVar14 + 1);
    pFVar25 = local_320.Data + (longlong)iVar14 * 0x10;
    DefaultConstructItems<TraceServices::TPagedArrayPage<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion>,int>
              (pFVar25,1);
    local_310 = local_320.Data;
    pcVar1 = *(code **)(local_328->_padding_ + 8);
    pFStack_308 = pFVar25;
    if (pcVar1 == TraceServices::FSlabAllocator::Allocate) {
      pvVar17 = TraceServices::FSlabAllocator::Allocate(local_328,local_300 << 4);
    }
    else {
      pvVar17 = (void *)(*pcVar1)();
    }
    *(void **)pFStack_308 = pvVar17;
  }
  local_2f8 = local_2f8 + 1;
  lVar19 = *(longlong *)(pFStack_308 + 8);
  lVar2 = *(longlong *)pFStack_308;
  *(undefined8 *)(lVar2 + lVar19 * 0x10) = 0x4022000000000000;
  *(undefined8 *)(lVar2 + 8 + lVar19 * 0x10) = 0x4024000000000000;
  *(longlong *)(pFStack_308 + 8) = *(longlong *)(pFStack_308 + 8) + 1;
  if ((pFStack_308 == (FScriptContainerElement *)0x0) ||
     (*(longlong *)(pFStack_308 + 8) == local_300)) {
    iVar14 = (uint)local_318;
    if ((uint)local_318 == local_318._4_4_) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_320,(int *)((longlong)&local_318 + 4));
    }
    local_318 = CONCAT44(local_318._4_4_,iVar14 + 1);
    pFVar25 = local_320.Data + (longlong)iVar14 * 0x10;
    DefaultConstructItems<TraceServices::TPagedArrayPage<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion>,int>
              (pFVar25,1);
    local_310 = local_320.Data;
    pcVar1 = *(code **)(local_328->_padding_ + 8);
    pFStack_308 = pFVar25;
    if (pcVar1 == TraceServices::FSlabAllocator::Allocate) {
      pvVar17 = TraceServices::FSlabAllocator::Allocate(local_328,local_300 << 4);
    }
    else {
      pvVar17 = (void *)(*pcVar1)();
    }
    *(void **)pFStack_308 = pvVar17;
  }
  local_2f8 = local_2f8 + 1;
  lVar19 = *(longlong *)(pFStack_308 + 8);
  lVar2 = *(longlong *)pFStack_308;
  *(undefined8 *)(lVar2 + lVar19 * 0x10) = 0x4026000000000000;
  *(undefined8 *)(lVar2 + 8 + lVar19 * 0x10) = 0x4028000000000000;
  *(longlong *)(pFStack_308 + 8) = *(longlong *)(pFStack_308 + 8) + 1;
  if ((pFStack_308 == (FScriptContainerElement *)0x0) ||
     (*(longlong *)(pFStack_308 + 8) == local_300)) {
    iVar14 = (uint)local_318;
    if ((uint)local_318 == local_318._4_4_) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_320,(int *)((longlong)&local_318 + 4));
    }
    local_318 = CONCAT44(local_318._4_4_,iVar14 + 1);
    pFVar25 = local_320.Data + (longlong)iVar14 * 0x10;
    DefaultConstructItems<TraceServices::TPagedArrayPage<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion>,int>
              (pFVar25,1);
    local_310 = local_320.Data;
    pcVar1 = *(code **)(local_328->_padding_ + 8);
    pFStack_308 = pFVar25;
    if (pcVar1 == TraceServices::FSlabAllocator::Allocate) {
      pvVar17 = TraceServices::FSlabAllocator::Allocate(local_328,local_300 << 4);
    }
    else {
      pvVar17 = (void *)(*pcVar1)();
    }
    *(void **)pFStack_308 = pvVar17;
  }
  pFVar25 = (FScriptContainerElement *)local_220;
  local_2f8 = local_2f8 + 1;
  lVar19 = *(longlong *)(pFStack_308 + 8);
  lVar2 = *(longlong *)pFStack_308;
  local_290 = 0xffffffffffffffff;
  iStack_2d8 = -1;
  *(undefined8 *)(lVar2 + lVar19 * 0x10) = 0x402a000000000000;
  *(undefined8 *)(lVar2 + 8 + lVar19 * 0x10) = 0x402c000000000000;
  dVar6 = __real_c024000000000000;
  local_2f0 = (FScriptContainerElement *)local_220;
  *(longlong *)(pFStack_308 + 8) = *(longlong *)(pFStack_308 + 8) + 1;
  local_334 = -1;
  local_2dc = -1;
  uVar29 = 0;
  uVar15 = 0;
  if (local_220 == (undefined8 *)0x0) {
LAB_14d494a85:
    if (iStack_2d8 != -1) goto LAB_14d494a8e;
  }
  else {
    uVar28 = (uint)local_228;
    local_2e4 = (uint)local_208;
    local_330 = (uint)local_210;
    local_2e0 = (uint)local_228;
    if ((*(double *)*local_220 <= 0.0) &&
       (dVar6 < *(double *)(*plStack_218 + -8 + plStack_218[1] * 0x10))) {
      if ((int)(uint)local_228 < 0) {
        pwVar27 = L"";
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar12) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
      }
      uVar26 = uVar15;
      uVar31 = uVar28;
      uVar24 = uVar20;
      if (0 < (int)uVar28) {
        do {
          uVar30 = uVar31 >> 1;
          dVar5 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_2>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
                  ::Call(&local_338,
                         *(FTimeRegion **)
                          ((longlong)pFVar25 + (longlong)(int)(uVar30 + uVar24) * 2 * 8));
          uVar26 = uVar30 + uVar24 + (uVar31 & 1);
          if (dVar6 < dVar5) {
            uVar26 = uVar24;
          }
          uVar31 = uVar30;
          uVar24 = uVar26;
        } while (uVar30 != 0);
      }
      local_2e8 = uVar26 - 1;
      if ((int)local_2e8 < 0) {
        local_334 = 0;
        local_2dc = 0;
        local_2e8 = 0;
        uVar31 = uVar21;
      }
      else {
        local_2c0 = (FTimeRegion *)((longlong)(int)local_2e8 * 0x10);
        local_298 = *(longlong *)((longlong)&local_2c0->BeginTime + (longlong)pFVar25);
        uVar31 = *(uint *)((longlong)&local_2c0->EndTime + (longlong)pFVar25);
        if ((int)uVar31 < 0) {
          pwVar27 = L"";
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar12) {
            pcVar1 = (code *)swi(3);
            uVar13 = (*pcVar1)();
            return (bool)uVar13;
          }
        }
        lVar19 = local_298;
        uVar24 = uVar21;
        uVar30 = uVar21;
        if (0 < (int)uVar31) {
          do {
            iVar14 = (uVar31 >> 1) + uVar24;
            dVar5 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_2>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
                    ::Call(&local_338,(FTimeRegion *)((longlong)iVar14 * 0x10 + lVar19));
            uVar28 = local_2e0;
            uVar30 = iVar14 + (uVar31 & 1);
            if (dVar6 < dVar5) {
              uVar30 = uVar24;
            }
            uVar3 = uVar31 >> 1;
            uVar31 = uVar31 >> 1;
            uVar24 = uVar30;
          } while (uVar3 != 0);
          if ((int)uVar30 < 0) {
            pwVar27 = L"";
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                                ,0x32f,L"");
            if (bVar12) {
              pcVar1 = (code *)swi(3);
              uVar13 = (*pcVar1)();
              return (bool)uVar13;
            }
          }
        }
        uVar31 = uVar26 - 1;
        if ((*(ulonglong *)((longlong)&local_2c0->EndTime + (longlong)local_2f0) <=
             (ulonglong)(longlong)(int)uVar30) &&
           (this = (FPagedArrayFilteringTest *)local_2b8, uVar26 == uVar28)) goto LAB_14d494a7a;
        local_334 = uVar31 * local_330 + uVar30;
        pFVar25 = local_2f0;
        local_2dc = local_334;
        if ((int)local_2e4 < (int)uVar30) {
          pwVar27 = L"";
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index <= NumPoints",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                              ,0x338,L"");
          pFVar25 = local_2f0;
          if (bVar12) {
            pcVar1 = (code *)swi(3);
            uVar13 = (*pcVar1)();
            return (bool)uVar13;
          }
        }
      }
      uVar28 = uVar28 - uVar31;
      if ((int)uVar28 < 0) {
        pwVar27 = L"";
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar12) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
      }
      uVar26 = uVar31;
      uVar24 = uVar21;
      uVar30 = uVar21;
      if (0 < (int)uVar28) {
        do {
          iVar14 = (uVar28 >> 1) + uVar24;
          dVar5 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_1>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
                  ::Call(local_337,
                         *(FTimeRegion **)
                          ((longlong)pFVar25 +
                          ((longlong)(int)uVar31 * 2 + (longlong)iVar14 * 2) * 8));
          uVar30 = iVar14 + (uVar28 & 1);
          if (0.0 < dVar5) {
            uVar30 = uVar24;
          }
          uVar3 = uVar28 >> 1;
          uVar26 = local_2e8;
          uVar28 = uVar28 >> 1;
          uVar24 = uVar30;
        } while (uVar3 != 0);
      }
      iVar14 = uVar26 + uVar30;
      if (iVar14 < 1) {
        pwVar27 = L"";
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("EndPageIndex > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                            ,0x343,L"");
        if (bVar12) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
      }
      uVar28 = *(uint *)((longlong)pFVar25 + ((longlong)iVar14 * 2 + -1) * 8);
      lVar19 = *(longlong *)((longlong)pFVar25 + ((longlong)iVar14 * 2 + -2) * 8);
      if ((int)uVar28 < 0) {
        pwVar27 = L"";
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar12) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
      }
      uVar26 = uVar29;
      uVar31 = uVar28;
      uVar24 = uVar20;
      if (0 < (int)uVar28) {
        do {
          uVar30 = uVar31 >> 1;
          uVar26 = uVar30 + uVar24 + (uVar31 & 1);
          if (0.0 < *(double *)(lVar19 + (longlong)(int)(uVar30 + uVar24) * 0x10)) {
            uVar26 = uVar24;
          }
          uVar31 = uVar30;
          uVar24 = uVar26;
        } while (uVar30 != 0);
        if ((int)uVar26 < 0) {
          pwVar27 = L"";
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                              ,0x34b,L"");
          if (bVar12) {
            pcVar1 = (code *)swi(3);
            uVar13 = (*pcVar1)();
            return (bool)uVar13;
          }
        }
      }
      if ((int)uVar26 < (int)uVar28) {
        uVar28 = uVar26;
      }
      iStack_2d8 = (uVar28 - 1) + (iVar14 + -1) * local_330;
      this = (FPagedArrayFilteringTest *)local_2b8;
    }
LAB_14d494a7a:
    if (local_334 == -1) goto LAB_14d494a85;
LAB_14d494a8e:
    pcVar1 = *(code **)(((FAutomationTestBase *)this)->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_200,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_200,0);
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
  }
  pFVar25 = local_260;
  dVar5 = __real_4024000000000000;
  local_334 = -1;
  local_2a0 = -1;
  iStack_29c = -1;
  local_2f0 = local_260;
  if (local_260 == (FScriptContainerElement *)0x0) {
LAB_14d494e77:
    pFVar23 = local_2b8;
    pcVar1 = *(code **)(local_2b8->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1f0,L"%s: The two values are not equal.");
    (*pcVar1)(pFVar23,&local_1f0,0);
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar28 = (uint)local_268;
    local_2e0 = (uint)local_248;
    local_2e8 = (uint)local_250;
    local_2e4 = (uint)local_268;
    if ((**(double **)local_260 <= __real_4024000000000000) &&
       (dVar6 < *(double *)(*(longlong *)pFStack_258 + -8 + *(longlong *)(pFStack_258 + 8) * 0x10)))
    {
      if ((int)(uint)local_268 < 0) {
        pwVar27 = L"";
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar12) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
      }
      uVar26 = uVar29;
      uVar31 = uVar28;
      uVar24 = uVar20;
      if (0 < (int)uVar28) {
        do {
          uVar30 = uVar31 >> 1;
          dVar4 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_2>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
                  ::Call(&local_338,
                         *(FTimeRegion **)(pFVar25 + (longlong)(int)(uVar30 + uVar24) * 0x10));
          uVar26 = uVar30 + uVar24 + (uVar31 & 1);
          if (dVar6 < dVar4) {
            uVar26 = uVar24;
          }
          uVar31 = uVar30;
          uVar24 = uVar26;
        } while (uVar30 != 0);
      }
      local_330 = uVar26 - 1;
      if ((int)local_330 < 0) {
        local_334 = 0;
        local_2a0 = 0;
        local_330 = 0;
        uVar31 = uVar21;
      }
      else {
        local_298 = (longlong)(int)local_330 * 0x10;
        local_2c0 = *(FTimeRegion **)(pFVar25 + local_298);
        uVar31 = *(uint *)(pFVar25 + local_298 + 8);
        if ((int)uVar31 < 0) {
          pwVar27 = L"";
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar12) {
            pcVar1 = (code *)swi(3);
            uVar13 = (*pcVar1)();
            return (bool)uVar13;
          }
        }
        pFVar11 = local_2c0;
        uVar24 = uVar21;
        uVar30 = uVar21;
        if (0 < (int)uVar31) {
          do {
            iVar14 = (uVar31 >> 1) + uVar24;
            dVar4 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_2>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
                    ::Call(&local_338,pFVar11 + iVar14);
            uVar28 = local_2e4;
            uVar30 = (uVar31 & 1) + iVar14;
            if (dVar6 < dVar4) {
              uVar30 = uVar24;
            }
            uVar3 = uVar31 >> 1;
            uVar31 = uVar31 >> 1;
            uVar24 = uVar30;
          } while (uVar3 != 0);
          if ((int)uVar30 < 0) {
            pwVar27 = L"";
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                                ,0x32f,L"");
            if (bVar12) {
              pcVar1 = (code *)swi(3);
              uVar13 = (*pcVar1)();
              return (bool)uVar13;
            }
          }
        }
        uVar31 = uVar26 - 1;
        if ((*(ulonglong *)(local_2f0 + local_298 + 8) <= (ulonglong)(longlong)(int)uVar30) &&
           (uVar26 == uVar28)) goto LAB_14d494e65;
        local_334 = uVar31 * local_2e8 + uVar30;
        pFVar25 = local_2f0;
        local_2a0 = local_334;
        if ((int)local_2e0 < (int)uVar30) {
          pwVar27 = L"";
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index <= NumPoints",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                              ,0x338,L"");
          pFVar25 = local_2f0;
          if (bVar12) {
            pcVar1 = (code *)swi(3);
            uVar13 = (*pcVar1)();
            return (bool)uVar13;
          }
        }
      }
      uVar28 = uVar28 - uVar31;
      if ((int)uVar28 < 0) {
        pwVar27 = L"";
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar12) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
      }
      uVar26 = uVar31;
      uVar24 = uVar21;
      uVar30 = uVar21;
      if (0 < (int)uVar28) {
        do {
          iVar14 = (uVar28 >> 1) + uVar24;
          dVar4 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_1>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
                  ::Call(local_337,
                         *(FTimeRegion **)
                          (pFVar25 + (longlong)iVar14 * 0x10 + (longlong)(int)uVar31 * 0x10));
          uVar30 = (uVar28 & 1) + iVar14;
          if (dVar5 < dVar4) {
            uVar30 = uVar24;
          }
          uVar3 = uVar28 >> 1;
          uVar26 = local_330;
          uVar28 = uVar28 >> 1;
          uVar24 = uVar30;
        } while (uVar3 != 0);
      }
      iVar14 = uVar26 + uVar30;
      if (iVar14 < 1) {
        pwVar27 = L"";
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("EndPageIndex > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                            ,0x343,L"");
        if (bVar12) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
      }
      uVar28 = *(uint *)(pFVar25 + (longlong)iVar14 * 0x10 + -8);
      lVar19 = *(longlong *)(pFVar25 + (longlong)iVar14 * 0x10 + -0x10);
      if ((int)uVar28 < 0) {
        pwVar27 = L"";
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar12) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
      }
      uVar26 = uVar28;
      uVar31 = uVar20;
      if (0 < (int)uVar28) {
        do {
          uVar24 = uVar26 >> 1;
          uVar29 = uVar24 + uVar31 + (uVar26 & 1);
          if (dVar5 < *(double *)(lVar19 + (longlong)(int)(uVar24 + uVar31) * 0x10)) {
            uVar29 = uVar31;
          }
          uVar26 = uVar24;
          uVar31 = uVar29;
        } while (uVar24 != 0);
        if ((int)uVar29 < 0) {
          pwVar27 = L"";
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                              ,0x34b,L"");
          if (bVar12) {
            pcVar1 = (code *)swi(3);
            uVar13 = (*pcVar1)();
            return (bool)uVar13;
          }
        }
      }
      if ((int)uVar29 < (int)uVar28) {
        uVar28 = uVar29;
      }
      iStack_29c = (uVar28 - 1) + (iVar14 + -1) * local_2e8;
    }
LAB_14d494e65:
    if ((local_334 != 0) || (iStack_29c != 0)) goto LAB_14d494e77;
  }
  pFVar25 = local_310;
  local_334 = -1;
  local_2d4 = -1;
  iStack_2d0 = -1;
  local_2f0 = local_310;
  if (local_310 == (FScriptContainerElement *)0x0) {
LAB_14d495269:
    if (iStack_2d0 != -1) goto LAB_14d495272;
  }
  else {
    uVar29 = (uint)local_318;
    local_2e0 = (uint)local_2f8;
    local_2e8 = (uint)local_300;
    local_2e4 = (uint)local_318;
    if ((**(double **)local_310 <= 0.0) &&
       (dVar6 < *(double *)(*(longlong *)pFStack_308 + -8 + *(longlong *)(pFStack_308 + 8) * 0x10)))
    {
      if ((int)(uint)local_318 < 0) {
        pwVar27 = L"";
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar12) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
      }
      uVar28 = uVar15;
      uVar26 = uVar29;
      uVar31 = uVar20;
      if (0 < (int)uVar29) {
        do {
          uVar24 = uVar26 >> 1;
          dVar5 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_2>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
                  ::Call(&local_338,
                         *(FTimeRegion **)(pFVar25 + (longlong)(int)(uVar24 + uVar31) * 0x10));
          uVar28 = (uVar26 & 1) + uVar24 + uVar31;
          if (dVar6 < dVar5) {
            uVar28 = uVar31;
          }
          uVar26 = uVar24;
          uVar31 = uVar28;
        } while (uVar24 != 0);
      }
      local_330 = uVar28 - 1;
      if ((int)local_330 < 0) {
        local_334 = 0;
        local_2d4 = 0;
        local_330 = 0;
        uVar26 = uVar21;
      }
      else {
        local_298 = (longlong)(int)local_330 * 0x10;
        local_2c0 = *(FTimeRegion **)(pFVar25 + local_298);
        uVar26 = *(uint *)(pFVar25 + local_298 + 8);
        if ((int)uVar26 < 0) {
          pwVar27 = L"";
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar12) {
            pcVar1 = (code *)swi(3);
            uVar13 = (*pcVar1)();
            return (bool)uVar13;
          }
        }
        pFVar11 = local_2c0;
        uVar31 = uVar21;
        uVar24 = uVar21;
        if (0 < (int)uVar26) {
          do {
            iVar14 = (uVar26 >> 1) + uVar31;
            dVar5 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_2>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
                    ::Call(&local_338,pFVar11 + iVar14);
            uVar29 = local_2e4;
            uVar24 = (uVar26 & 1) + iVar14;
            if (dVar6 < dVar5) {
              uVar24 = uVar31;
            }
            uVar30 = uVar26 >> 1;
            uVar26 = uVar26 >> 1;
            uVar31 = uVar24;
          } while (uVar30 != 0);
          if ((int)uVar24 < 0) {
            pwVar27 = L"";
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                                ,0x32f,L"");
            if (bVar12) {
              pcVar1 = (code *)swi(3);
              uVar13 = (*pcVar1)();
              return (bool)uVar13;
            }
          }
        }
        uVar26 = uVar28 - 1;
        if ((*(ulonglong *)(local_2f0 + local_298 + 8) <= (ulonglong)(longlong)(int)uVar24) &&
           (uVar28 == uVar29)) goto LAB_14d49525e;
        local_334 = uVar26 * local_2e8 + uVar24;
        pFVar25 = local_2f0;
        local_2d4 = local_334;
        if ((int)local_2e0 < (int)uVar24) {
          pwVar27 = L"";
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index <= NumPoints",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                              ,0x338,L"");
          pFVar25 = local_2f0;
          if (bVar12) {
            pcVar1 = (code *)swi(3);
            uVar13 = (*pcVar1)();
            return (bool)uVar13;
          }
        }
      }
      uVar29 = uVar29 - uVar26;
      if ((int)uVar29 < 0) {
        pwVar27 = L"";
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar12) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
      }
      uVar28 = uVar26;
      uVar31 = uVar21;
      uVar24 = uVar21;
      if (0 < (int)uVar29) {
        do {
          iVar14 = (uVar29 >> 1) + uVar31;
          dVar6 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_1>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
                  ::Call(local_337,
                         *(FTimeRegion **)
                          (pFVar25 + (longlong)iVar14 * 0x10 + (longlong)(int)uVar26 * 0x10));
          uVar24 = (uVar29 & 1) + iVar14;
          if (0.0 < dVar6) {
            uVar24 = uVar31;
          }
          uVar30 = uVar29 >> 1;
          uVar28 = local_330;
          uVar29 = uVar29 >> 1;
          uVar31 = uVar24;
        } while (uVar30 != 0);
      }
      iVar14 = uVar28 + uVar24;
      if (iVar14 < 1) {
        pwVar27 = L"";
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("EndPageIndex > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                            ,0x343,L"");
        if (bVar12) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
      }
      uVar29 = *(uint *)(pFVar25 + (longlong)iVar14 * 0x10 + -8);
      lVar19 = *(longlong *)(pFVar25 + (longlong)iVar14 * 0x10 + -0x10);
      if ((int)uVar29 < 0) {
        pwVar27 = L"";
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar12) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
      }
      uVar28 = uVar15;
      uVar26 = uVar29;
      uVar31 = uVar20;
      if (0 < (int)uVar29) {
        do {
          uVar24 = uVar26 >> 1;
          uVar28 = uVar24 + uVar31 + (uVar26 & 1);
          if (0.0 < *(double *)(lVar19 + (longlong)(int)(uVar24 + uVar31) * 0x10)) {
            uVar28 = uVar31;
          }
          uVar26 = uVar24;
          uVar31 = uVar28;
        } while (uVar24 != 0);
        if ((int)uVar28 < 0) {
          pwVar27 = L"";
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                              ,0x34b,L"");
          if (bVar12) {
            pcVar1 = (code *)swi(3);
            uVar13 = (*pcVar1)();
            return (bool)uVar13;
          }
        }
      }
      if ((int)uVar28 < (int)uVar29) {
        uVar29 = uVar28;
      }
      iStack_2d0 = (uVar29 - 1) + (iVar14 + -1) * local_2e8;
    }
LAB_14d49525e:
    if (local_334 == -1) goto LAB_14d495269;
LAB_14d495272:
    pFVar23 = local_2b8;
    pcVar1 = *(code **)(local_2b8->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1e0,L"%s: The two values are not equal.");
    (*pcVar1)(pFVar23,&local_1e0,0);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
  }
  pFVar25 = local_310;
  dVar5 = __real_4069000000000000;
  dVar6 = __real_4059000000000000;
  local_240 = __real_4059000000000000;
  local_2cc = 0xffffffffffffffff;
  local_2f0 = local_310;
  if (local_310 == (FScriptContainerElement *)0x0) {
LAB_14d49563f:
    pFVar23 = local_2b8;
    if ((int)(local_2cc >> 0x20) == -1) goto LAB_14d495693;
  }
  else {
    uVar29 = (uint)local_318;
    local_2e4 = (uint)local_2f8;
    local_330 = (uint)local_300;
    if ((**(double **)local_310 <= __real_4069000000000000) &&
       (__real_4059000000000000 <
        *(double *)(*(longlong *)pFStack_308 + -8 + *(longlong *)(pFStack_308 + 8) * 0x10))) {
      if ((int)(uint)local_318 < 0) {
        pwVar27 = L"";
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar12) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
      }
      uVar28 = uVar29;
      uVar26 = uVar20;
      if (0 < (int)uVar29) {
        do {
          uVar31 = uVar28 >> 1;
          dVar4 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_2>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
                  ::Call(&local_338,
                         *(FTimeRegion **)(pFVar25 + (longlong)(int)(uVar31 + uVar26) * 0x10));
          uVar15 = (uVar28 & 1) + uVar31 + uVar26;
          if (dVar6 < dVar4) {
            uVar15 = uVar26;
          }
          uVar28 = uVar31;
          uVar26 = uVar15;
        } while (uVar31 != 0);
      }
      uVar28 = uVar15 - 1;
      if ((int)uVar28 < 0) {
        local_290 = 0;
        local_2cc = local_2cc & 0xffffffff00000000;
        uVar28 = uVar21;
      }
      else {
        lVar19 = (longlong)(int)uVar28;
        local_2c0 = *(FTimeRegion **)(pFVar25 + lVar19 * 0x10);
        iVar14 = *(int *)(pFVar25 + lVar19 * 0x10 + 8);
        if ((iVar14 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar12)) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
        local_1d0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_2>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
                    ::Call;
        pwVar27 = (wchar_t *)&local_1d0;
        local_1c8 = &local_338;
        iVar14 = AlgoImpl::
                 UpperBoundInternal<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion,int,double,TFunctionRef<double___cdecl(_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion_const_&)>,TLess<void>_>
                           (local_2c0,iVar14,&local_240,
                            (TFunctionRef<double___cdecl(_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion_const_&)>
                             *)pwVar27,local_337[0]);
        if (iVar14 < 0) {
          pwVar27 = L"";
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                              ,0x32f,L"");
          if (bVar12) {
            pcVar1 = (code *)swi(3);
            uVar13 = (*pcVar1)();
            return (bool)uVar13;
          }
        }
        if ((*(ulonglong *)(pFVar25 + lVar19 * 0x10 + 8) <= (ulonglong)(longlong)iVar14) &&
           (uVar15 == uVar29)) goto LAB_14d495632;
        uVar15 = uVar28 * local_330 + iVar14;
        local_290 = (ulonglong)uVar15;
        local_2cc = CONCAT44(local_2cc._4_4_,uVar15);
        if ((int)local_2e4 < iVar14) {
          pwVar27 = L"";
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index <= NumPoints",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                              ,0x338,L"");
          if (bVar12) {
            pcVar1 = (code *)swi(3);
            uVar13 = (*pcVar1)();
            return (bool)uVar13;
          }
        }
      }
      uVar29 = uVar29 - uVar28;
      if ((int)uVar29 < 0) {
        pwVar27 = L"";
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar12) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
      }
      pFVar22 = pFVar25;
      if (0 < (int)uVar29) {
        do {
          iVar14 = (uVar29 >> 1) + uVar21;
          dVar6 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_1>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
                  ::Call(local_337,
                         *(FTimeRegion **)
                          (pFVar25 + (longlong)iVar14 * 0x10 + (longlong)(int)uVar28 * 0x10));
          uVar15 = iVar14 + (uVar29 & 1);
          if (dVar5 < dVar6) {
            uVar15 = uVar21;
          }
          uVar21 = uVar15;
          uVar15 = uVar29 >> 1;
          pFVar22 = local_2f0;
          uVar29 = uVar29 >> 1;
        } while (uVar15 != 0);
      }
      iVar14 = uVar21 + uVar28;
      if (iVar14 < 1) {
        pwVar27 = L"";
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("EndPageIndex > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                            ,0x343,L"");
        if (bVar12) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
      }
      lVar19 = *(longlong *)(pFVar22 + (longlong)iVar14 * 0x10 + -0x10);
      uVar29 = *(uint *)(pFVar22 + (longlong)iVar14 * 0x10 + -8);
      if ((int)uVar29 < 0) {
        pwVar27 = L"";
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar12) {
          pcVar1 = (code *)swi(3);
          uVar13 = (*pcVar1)();
          return (bool)uVar13;
        }
      }
      uVar15 = uVar29;
      if (0 < (int)uVar29) {
        do {
          uVar28 = uVar15 >> 1;
          uVar16 = uVar28 + uVar20 + (uVar15 & 1);
          if (dVar5 < *(double *)(lVar19 + (longlong)(int)(uVar28 + uVar20) * 0x10)) {
            uVar16 = uVar20;
          }
          uVar15 = uVar28;
          uVar20 = uVar16;
        } while (uVar28 != 0);
        if ((int)uVar16 < 0) {
          pwVar27 = L"";
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                              ,0x34b,L"");
          if (bVar12) {
            pcVar1 = (code *)swi(3);
            uVar13 = (*pcVar1)();
            return (bool)uVar13;
          }
        }
      }
      if ((int)uVar16 < (int)uVar29) {
        uVar29 = uVar16;
      }
      local_2cc = CONCAT44((uVar29 - 1) + (iVar14 + -1) * local_330,(undefined4)local_2cc);
    }
LAB_14d495632:
    if ((int)local_290 == -1) goto LAB_14d49563f;
  }
  pFVar23 = local_2b8;
  pcVar1 = *(code **)(local_2b8->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_1c0,L"%s: The two values are not equal.");
  (*pcVar1)(pFVar23,&local_1c0,0);
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
LAB_14d495693:
  local_1a8 = &local_338;
  local_198 = local_337;
  local_1b0 = UE::Core::Private::Function::
              TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_2>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
              ::Call;
  local_1a0 = UE::Core::Private::Function::
              TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_1>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
              ::Call;
  FVar18 = TraceServices::
           GetElementRangeOverlappingGivenRange<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion,TraceServices::TPagedArrayPage<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion>_>
                     ((TPagedArray<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion,TraceServices::TPagedArrayPage<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion>_>
                       *)local_120,in_XMM1_Qa,0.0,
                      (TFunctionRef<double___cdecl(_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion_const_&)>
                       *)pwVar27,
                      (TFunctionRef<double___cdecl(_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion_const_&)>
                       *)&local_1a0);
  if (((int)*(undefined8 *)FVar18 != 0) || ((int)((ulonglong)*(undefined8 *)FVar18 >> 0x20) != 2)) {
    pcVar1 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_190,L"%s: The two values are not equal.");
    (*pcVar1)(pFVar23,&local_190,0);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
  }
  local_178 = &local_338;
  local_168 = local_337;
  local_180 = UE::Core::Private::Function::
              TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_2>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
              ::Call;
  local_170 = UE::Core::Private::Function::
              TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_1>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
              ::Call;
  FVar18 = TraceServices::
           GetElementRangeOverlappingGivenRange<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion,TraceServices::TPagedArrayPage<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion>_>
                     ((TPagedArray<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion,TraceServices::TPagedArrayPage<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion>_>
                       *)(local_120 + 8),in_XMM1_Qa,__real_4010000000000000,
                      (TFunctionRef<double___cdecl(_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion_const_&)>
                       *)pwVar27,
                      (TFunctionRef<double___cdecl(_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion_const_&)>
                       *)&local_170);
  if (((int)*(undefined8 *)FVar18 != 2) || ((int)((ulonglong)*(undefined8 *)FVar18 >> 0x20) != 3)) {
    pcVar1 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_160,L"%s: The two values are not equal.");
    (*pcVar1)(pFVar23,&local_160,0);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
  }
  local_148 = &local_338;
  local_138 = local_337;
  local_150 = UE::Core::Private::Function::
              TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_2>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
              ::Call;
  local_140 = UE::Core::Private::Function::
              TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_1>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
              ::Call;
  FVar18 = TraceServices::
           GetElementRangeOverlappingGivenRange<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion,TraceServices::TPagedArrayPage<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion>_>
                     ((TPagedArray<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion,TraceServices::TPagedArrayPage<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion>_>
                       *)local_110,in_XMM1_Qa,__real_402699999999999a,
                      (TFunctionRef<double___cdecl(_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion_const_&)>
                       *)pwVar27,
                      (TFunctionRef<double___cdecl(_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion_const_&)>
                       *)&local_140);
  if (((int)*(undefined8 *)FVar18 != 5) || ((int)((ulonglong)*(undefined8 *)FVar18 >> 0x20) != 6)) {
    pcVar1 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_130,L"%s: The two values are not equal.");
    (*pcVar1)(pFVar23,&local_130,0);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
  }
  bVar12 = FAutomationTestBase::HasAnyErrors(pFVar23);
  TraceServices::
  TPagedArray<`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion,TraceServices::TPagedArrayPage<`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion>_>
  ::
  ~TPagedArray<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion,TraceServices::TPagedArrayPage<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion>_>
            (&local_328);
  TraceServices::
  TPagedArray<`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion,TraceServices::TPagedArrayPage<`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion>_>
  ::
  ~TPagedArray<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion,TraceServices::TPagedArrayPage<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion>_>
            (&local_278);
  TraceServices::
  TPagedArray<`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion,TraceServices::TPagedArrayPage<`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion>_>
  ::
  ~TPagedArray<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion,TraceServices::TPagedArrayPage<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion>_>
            (&local_238);
  TraceServices::FSlabAllocator::~FSlabAllocator(&local_d8);
  if (local_288.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data);
  }
  if (local_2b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data);
  }
  return !bVar12;
}

// GetBeautifiedTestName @ 14d495960

FString * __thiscall
FPagedArrayFilteringTest::GetBeautifiedTestName
          (FPagedArrayFilteringTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Insights.Analysis.PagedArrayFiltering");
  return __return_storage_ptr__;
}

