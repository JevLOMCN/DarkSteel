// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bc8300

EAutomationTestFlags __thiscall FRangeSetTest::GetTestFlags(FRangeSetTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc8310

bool __thiscall FRangeSetTest::IsStressTest(FRangeSetTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc8320

uint __thiscall FRangeSetTest::GetRequiredDeviceNum(FRangeSetTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc8330

FString * __thiscall
FRangeSetTest::GetTestSourceFileName(FRangeSetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Math\\RangeSetTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc8360

int __thiscall FRangeSetTest::GetTestSourceFileLine(FRangeSetTest *this)

{
  return 0xc;
}

// GetTests @ 141bc8370

/* WARNING: Removing unreachable block (ram,0x000141bc84ee) */

void __thiscall
FRangeSetTest::GetTests
          (FRangeSetTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc8510

bool __thiscall FRangeSetTest::RunTest(FRangeSetTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc8540

FString * __thiscall
FRangeSetTest::GetBeautifiedTestName(FRangeSetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FRangeSetTest @ 141be6760

FRangeSetTest * __thiscall FRangeSetTest::FRangeSetTest(FRangeSetTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FRangeSetTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[EditorContext][ClientContext][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Math::RangeSet");
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
  ::FString::FString(&local_18,"[EditorContext][ClientContext][SmokeFilter]");
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

// TestBody @ 141c2cc00

void __thiscall FRangeSetTest::TestBody(FRangeSetTest *this,FString *param_1)

{
  undefined8 uVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FAutomationTestFramework *pFVar7;
  undefined8 *puVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 local_res18;
  undefined8 local_res20;
  TRangeSet<int> local_1e8;
  TRangeSet<FTimespan> local_1d8;
  undefined8 local_1c8;
  longlong lStack_1c0;
  undefined8 local_1b8;
  longlong lStack_1b0;
  TRange<int> local_1a8;
  TRange<int> local_198;
  TRange<int> local_188;
  TRangeBound<int> local_178;
  TRangeBound<int> local_170;
  TRangeBound<int> local_168;
  TRangeBound<int> local_160;
  TRangeBound<int> local_158;
  TRangeBound<int> local_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  longlong lStack_130;
  FString local_128;
  FString local_118;
  undefined1 local_108;
  undefined7 uStack_107;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined7 uStack_f7;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  FString local_a8;
  FString local_98;
  TRange<FTimespan> local_88;
  TRange<FTimespan> local_68;
  TRange<FTimespan> local_48;
  
  local_178.Type.Value = '\x01';
  local_1a8.LowerBound.Type.Value = '\x01';
  local_1a8.LowerBound._1_3_ = local_178._1_3_;
  local_170.Type.Value = '\x01';
  uVar16 = 1;
  local_1a8.UpperBound.Type.Value = '\x01';
  local_1a8.UpperBound._1_3_ = local_170._1_3_;
  local_1e8.Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Ranges.ArrayNum = 0;
  local_1e8.Ranges.ArrayMax = 0;
  uVar11 = 0;
  local_1a8.LowerBound.Value = 0;
  local_1a8.UpperBound.Value = 1;
  TRangeSet<int>::Add(&local_1e8,&local_1a8);
  local_168.Type.Value = '\x01';
  local_198.LowerBound.Type.Value = '\x01';
  local_198.LowerBound._1_3_ = local_168._1_3_;
  local_160.Type.Value = '\x01';
  local_198.UpperBound.Type.Value = '\x01';
  local_198.UpperBound._1_3_ = local_160._1_3_;
  local_198.LowerBound.Value = 1;
  local_198.UpperBound.Value = 2;
  TRangeSet<int>::Add(&local_1e8,&local_198);
  local_158.Type.Value = '\x01';
  local_188.LowerBound.Type.Value = '\x01';
  local_188.LowerBound._1_3_ = local_158._1_3_;
  local_150.Type.Value = '\x01';
  local_188.UpperBound.Type.Value = '\x01';
  local_188.UpperBound._1_3_ = local_150._1_3_;
  local_188.LowerBound.Value = 3;
  local_188.UpperBound.Value = 4;
  TRangeSet<int>::Add(&local_1e8,&local_188);
  uVar10 = (ulonglong)local_1e8.Ranges.ArrayNum;
  local_res18._0_1_ = '\x02';
  lVar17 = 0x10;
  if (local_1e8.Ranges.ArrayNum != 0) {
    if (local_1e8.Ranges.ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = local_1e8.Ranges._8_8_ & 0xffffffff;
    }
    uVar15 = 1;
    local_res18 = *(undefined8 *)local_1e8.Ranges.AllocatorInstance.Data;
    uVar5 = (uint)((ulonglong)local_res18 >> 0x20);
    if (1 < (int)uVar10) {
      lVar14 = 0x10;
      uVar12 = local_res18;
      do {
        uVar5 = uVar11;
        if ((int)uVar15 < (int)uVar10) {
          uVar5 = ~uVar15 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar10 = local_1e8.Ranges._8_8_ & 0xffffffff;
        }
        local_res18._0_1_ = (char)uVar12;
        uVar1 = *(undefined8 *)(local_1e8.Ranges.AllocatorInstance.Data + lVar14);
        uVar13 = uVar12;
        if (((char)local_res18 != '\x02') && (uVar13 = uVar1, (char)uVar1 != '\x02')) {
          local_res18._4_4_ = (int)((ulonglong)uVar12 >> 0x20);
          iVar6 = (int)((ulonglong)uVar1 >> 0x20);
          uVar13 = uVar12;
          if ((iVar6 <= local_res18._4_4_) &&
             ((uVar13 = uVar1, local_res18._4_4_ <= iVar6 && ((char)local_res18 == '\x01')))) {
            uVar13 = uVar12;
          }
        }
        uVar15 = uVar15 + 1;
        lVar14 = lVar14 + 0x10;
        uVar12 = uVar13;
      } while ((int)uVar15 < (int)uVar10);
      uVar5 = (uint)((ulonglong)uVar13 >> 0x20);
      local_res18 = uVar13;
    }
    uVar11 = uVar5;
  }
  if ((char)local_res18 == '\x02') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar10 = local_1e8.Ranges._8_8_ & 0xffffffff;
  }
  if (uVar11 == 0) {
    local_res20._0_1_ = '\x02';
    uVar5 = 0;
    uVar11 = uVar5;
    if ((int)uVar10 != 0) {
      if ((int)uVar10 < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = local_1e8.Ranges._8_8_ & 0xffffffff;
      }
      uVar15 = 1;
      uVar12 = *(undefined8 *)(local_1e8.Ranges.AllocatorInstance.Data + 8);
      uVar11 = (uint)((ulonglong)uVar12 >> 0x20);
      local_res20 = uVar12;
      if (1 < (int)uVar10) {
        do {
          uVar11 = uVar5;
          if ((int)uVar15 < (int)uVar10) {
            uVar11 = ~uVar15 >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar10 = local_1e8.Ranges._8_8_ & 0xffffffff;
          }
          local_res20._0_1_ = (char)uVar12;
          uVar1 = *(undefined8 *)(local_1e8.Ranges.AllocatorInstance.Data + lVar17 + 8);
          uVar13 = uVar12;
          if (((char)local_res20 != '\x02') && (uVar13 = uVar1, (char)uVar1 != '\x02')) {
            local_res20._4_4_ = (int)((ulonglong)uVar12 >> 0x20);
            iVar6 = (int)((ulonglong)uVar1 >> 0x20);
            uVar13 = uVar12;
            if ((local_res20._4_4_ <= iVar6) &&
               ((uVar13 = uVar1, iVar6 <= local_res20._4_4_ && ((char)local_res20 == '\x01')))) {
              uVar13 = uVar12;
            }
          }
          uVar15 = uVar15 + 1;
          lVar17 = lVar17 + 0x10;
          uVar12 = uVar13;
        } while ((int)uVar15 < (int)uVar10);
        uVar11 = (uint)((ulonglong)uVar13 >> 0x20);
        local_res20 = uVar13;
      }
    }
    if (((char)local_res20 == '\x02') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar11 == 4) {
      if (local_1e8.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Ranges.AllocatorInstance.Data);
      }
      local_f8 = 1;
      uStack_f0 = 1;
      local_88.UpperBound._1_7_ = uStack_f7;
      local_88.UpperBound.Type.Value = '\x01';
      local_108 = 1;
      uStack_100 = 0;
      local_88.LowerBound._1_7_ = uStack_107;
      local_88.LowerBound.Type.Value = '\x01';
      local_1d8.Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.UpperBound.Value.Ticks = 1;
      local_88.LowerBound.Value.Ticks = 0;
      local_1d8.Ranges.ArrayNum = 0;
      local_1d8.Ranges.ArrayMax = 0;
      TRangeSet<FTimespan>::Add(&local_1d8,&local_88);
      local_d8 = 1;
      uStack_d0 = 2;
      local_68.UpperBound._1_7_ = uStack_d7;
      local_68.UpperBound.Type.Value = '\x01';
      local_e8 = 1;
      uStack_e0 = 1;
      local_68.LowerBound._1_7_ = uStack_e7;
      local_68.LowerBound.Type.Value = '\x01';
      local_68.UpperBound.Value.Ticks = 2;
      local_68.LowerBound.Value.Ticks = 1;
      TRangeSet<FTimespan>::Add(&local_1d8,&local_68);
      local_b8 = 1;
      uStack_b0 = 4;
      local_48.UpperBound._1_7_ = uStack_b7;
      local_48.UpperBound.Type.Value = '\x01';
      local_c8 = 1;
      uStack_c0 = 3;
      local_48.LowerBound._1_7_ = uStack_c7;
      local_48.LowerBound.Type.Value = '\x01';
      local_48.UpperBound.Value.Ticks = 4;
      local_48.LowerBound.Value.Ticks = 3;
      TRangeSet<FTimespan>::Add(&local_1d8,&local_48);
      uVar10 = (ulonglong)local_1d8.Ranges.ArrayNum;
      lVar17 = 0x20;
      local_1c8 = CONCAT71(local_1c8._1_7_,2);
      lStack_1c0 = 0;
      if (local_1d8.Ranges.ArrayNum != 0) {
        if (local_1d8.Ranges.ArrayNum < 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar10 = local_1d8.Ranges._8_8_ & 0xffffffff;
        }
        uVar11 = 1;
        local_1c8 = *(undefined8 *)local_1d8.Ranges.AllocatorInstance.Data;
        lStack_1c0 = *(longlong *)(local_1d8.Ranges.AllocatorInstance.Data + 8);
        if (1 < (int)uVar10) {
          lVar14 = 0x20;
          do {
            uVar15 = uVar5;
            if ((int)uVar11 < (int)uVar10) {
              uVar15 = ~uVar11 >> 0x1f;
            }
            if (uVar15 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar10 = local_1d8.Ranges._8_8_ & 0xffffffff;
            }
            local_148 = *(undefined8 *)(local_1d8.Ranges.AllocatorInstance.Data + lVar14);
            lStack_140 = *(longlong *)(local_1d8.Ranges.AllocatorInstance.Data + lVar14 + 8);
            if ((char)local_1c8 == '\x02') {
              puVar8 = &local_1c8;
            }
            else if ((char)local_148 == '\x02') {
              puVar8 = &local_148;
            }
            else if (lStack_1c0 < lStack_140) {
              puVar8 = &local_1c8;
            }
            else if (lStack_140 < lStack_1c0) {
              puVar8 = &local_148;
            }
            else {
              puVar8 = &local_1c8;
              if ((char)local_1c8 != '\x01') {
                puVar8 = &local_148;
              }
            }
            uVar11 = uVar11 + 1;
            lVar14 = lVar14 + 0x20;
            local_1c8 = *puVar8;
            lStack_1c0 = puVar8[1];
          } while ((int)uVar11 < (int)uVar10);
        }
      }
      if ((char)local_1c8 == '\x02') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = local_1d8.Ranges._8_8_ & 0xffffffff;
      }
      if (lStack_1c0 == 0) {
        local_1b8 = CONCAT71(local_1b8._1_7_,2);
        lStack_1b0 = 0;
        if ((int)uVar10 != 0) {
          if ((int)uVar10 < 1) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar10 = local_1d8.Ranges._8_8_ & 0xffffffff;
          }
          local_1b8 = *(undefined8 *)(local_1d8.Ranges.AllocatorInstance.Data + 0x10);
          lStack_1b0 = *(longlong *)(local_1d8.Ranges.AllocatorInstance.Data + 0x18);
          if (1 < (int)uVar10) {
            do {
              uVar11 = uVar5;
              if ((int)uVar16 < (int)uVar10) {
                uVar11 = ~uVar16 >> 0x1f;
              }
              if (uVar11 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar10 = local_1d8.Ranges._8_8_ & 0xffffffff;
              }
              local_138 = *(undefined8 *)(local_1d8.Ranges.AllocatorInstance.Data + lVar17 + 0x10);
              lStack_130 = *(longlong *)
                            (local_1d8.Ranges.AllocatorInstance.Data + lVar17 + 0x10 + 8);
              if ((char)local_1b8 == '\x02') {
                puVar8 = &local_1b8;
              }
              else if ((char)local_138 == '\x02') {
                puVar8 = &local_138;
              }
              else if (lStack_130 < lStack_1b0) {
                puVar8 = &local_1b8;
              }
              else if (lStack_1b0 < lStack_130) {
                puVar8 = &local_138;
              }
              else {
                puVar8 = &local_1b8;
                if ((char)local_1b8 != '\x01') {
                  puVar8 = &local_138;
                }
              }
              uVar16 = uVar16 + 1;
              lVar17 = lVar17 + 0x20;
              local_1b8 = *puVar8;
              lStack_1b0 = puVar8[1];
            } while ((int)uVar16 < (int)uVar10);
          }
        }
        if (((char)local_1b8 == '\x02') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar9.Data = local_1d8.Ranges.AllocatorInstance.Data;
        if (lStack_1b0 == 4) goto LAB_141c2d3f9;
        pFVar7 = FAutomationTestFramework::Get();
        pFVar2 = pFVar7->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_98,L"Required condition failed, interrupting test");
        (*pcVar3)(pFVar2,&local_98,0);
        local_a8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      }
      else {
        pFVar7 = FAutomationTestFramework::Get();
        pFVar2 = pFVar7->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_a8,L"Required condition failed, interrupting test");
        (*pcVar3)(pFVar2,&local_a8,0);
      }
      FVar9.Data = local_1d8.Ranges.AllocatorInstance.Data;
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        FVar9.Data = local_1d8.Ranges.AllocatorInstance.Data;
      }
      goto LAB_141c2d3f9;
    }
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_118,L"Required condition failed, interrupting test");
    (*pcVar3)(pFVar2,&local_118,0);
    local_128.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
  }
  else {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_128,L"Required condition failed, interrupting test");
    (*pcVar3)(pFVar2,&local_128,0);
  }
  FVar9.Data = local_1e8.Ranges.AllocatorInstance.Data;
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
    FVar9.Data = local_1e8.Ranges.AllocatorInstance.Data;
  }
LAB_141c2d3f9:
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  return;
}

