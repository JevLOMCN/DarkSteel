// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141cca7f0

EAutomationTestFlags __thiscall FTimecodeTest::GetTestFlags(FTimecodeTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cca9a0

bool __thiscall FTimecodeTest::IsStressTest(FTimecodeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cca9b0

uint __thiscall FTimecodeTest::GetRequiredDeviceNum(FTimecodeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cca9c0

FString * __thiscall
FTimecodeTest::GetTestSourceFileName(FTimecodeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TimecodeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cca9f0

int __thiscall FTimecodeTest::GetTestSourceFileLine(FTimecodeTest *this)

{
  return 0x1a;
}

// GetTests @ 141ccaa60

/* WARNING: Removing unreachable block (ram,0x000141ccabde) */

void __thiscall
FTimecodeTest::GetTests
          (FTimecodeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ccac00

bool __thiscall FTimecodeTest::RunTest(FTimecodeTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ccac30

FString * __thiscall
FTimecodeTest::GetBeautifiedTestName(FTimecodeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTimecodeTest @ 141cf00c0

FTimecodeTest * __thiscall FTimecodeTest::FTimecodeTest(FTimecodeTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTimecodeTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::Timecode");
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

// operator() @ 141cf4b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`FTimecodeTest::TestBody'::__l2::<lambda_1>::operator()(void *this,FFrameRate param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  FTimespan FVar10;
  FAutomationTestFramework *pFVar11;
  FText *pFVar12;
  FTimecode *pFVar13;
  FString *pFVar14;
  int iVar15;
  longlong lVar16;
  TRefCountPtr<ITextData> TVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  FAutomationTestBase *pFVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined1 uVar28;
  code *pcVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  FFrameRate local_res10;
  double local_res18;
  double local_res20;
  FTimecode local_2a8;
  FString local_290;
  double local_280;
  longlong local_278;
  FTimespan local_270;
  FText local_268;
  FFrameRate local_258;
  FTimecode local_250;
  FTimecode local_238;
  FFrameRate local_220;
  FText local_218;
  FString local_208;
  FTimecode local_1f8;
  FTimecode local_1e0;
  FTimecode local_1c8;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FText local_150;
  FString local_140;
  FText local_130;
  FString local_120;
  FString local_110;
  FText local_100 [2];
  undefined8 local_e0;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  
  dVar9 = __real_3fb999999999999a;
  fVar8 = __real_bf000000;
  dVar45 = __real_416312d000000000;
  dVar7 = __real_3fe0000000000000;
  dVar39 = __real_3e7ad7f29abcaf48;
  dVar43 = (double)param_1.Numerator / (double)param_1.Denominator;
  dVar38 = dVar43 - ___real_403df853e2556b29;
  if (((double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar38,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3e45798ee2308c3a) ||
     (dVar43 = dVar43 - ___real_404df853e2556b29,
     (double)CONCAT44((uint)((ulonglong)dVar43 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar43,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3e45798ee2308c3a)) {
    uVar28 = true;
  }
  else {
    uVar28 = false;
  }
  iVar20 = 0;
  local_278 = 0;
  local_res18 = (double)CONCAT71(local_res18._1_7_,uVar28);
  local_1f8.Hours = 0;
  local_1f8.Minutes = 0;
  local_1f8.Seconds = 0;
  local_1f8.Frames = 0;
  local_res10 = param_1;
  local_1f8._16_8_ = local_1f8._16_8_ & 0xffffff0000000000;
LAB_141cf4c4c:
  iVar27 = (int)local_278;
  local_res20 = (double)CONCAT44(local_res20._4_4_,iVar27);
  FTimecode::FromFrameNumber(&local_2a8,(FFrameNumber *)&local_res20,&local_res10,(bool)uVar28);
  dVar38 = (double)local_res10.Denominator;
  fVar37 = (float)((double)param_1.Numerator / dVar38);
  iVar23 = (int)ROUND(fVar8 - (fVar37 + fVar37)) >> 1;
  iVar24 = -iVar23;
  if (iVar24 < 1) {
    iVar23 = 0;
  }
  else {
    iVar15 = local_2a8.Seconds + local_2a8.Frames / iVar24;
    iVar22 = local_2a8.Minutes + iVar15 / 0x3c;
    iVar25 = local_2a8.Hours + iVar22 / 0x3c;
    iVar22 = iVar22 % 0x3c;
    if (local_2a8.bDropFrameFormat == false) {
      iVar25 = iVar25 * iVar23 * -0xe10;
    }
    else {
      iVar26 = 4;
      if (iVar23 == -0x1e || iVar24 < 0x1e) {
        iVar26 = 2;
      }
      iVar18 = iVar25 * 0x3c + iVar22;
      dVar43 = (double)iVar18 * dVar9;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = dVar43;
      if (0.0 <= dVar43) {
        auVar34 = roundpd(auVar34,auVar34,1);
        dVar43 = auVar34._0_8_;
      }
      else {
        auVar34 = roundpd(auVar34,auVar34,2);
        dVar43 = auVar34._0_8_;
      }
      iVar25 = iVar25 * iVar23 * -0xe10 - (iVar18 - (int)dVar43) * iVar26;
    }
    iVar23 = (iVar15 % 0x3c) * iVar24 + iVar22 * iVar23 * -0x3c + local_2a8.Frames % iVar24 + iVar25
    ;
    uVar28 = local_res18._0_1_;
  }
  if (iVar27 != iVar23) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar21 = pFVar11->CurrentTest;
    pcVar29 = *(code **)(pFVar21->_padding_ + 0x28);
    pFVar12 = FFrameRate::ToPrettyText(&local_res10,&local_150);
    FText::ToString(pFVar12);
    FTimecode::ToString(&local_2a8,&local_160,false,false);
    ::FString::PrintfImpl
              (&local_1b0,
               L"Timecode \'%s\' didn\'t convert properly from FrameNumber \'%d\' for FrameRate \'%s\'."
              );
    (*pcVar29)(pFVar21,&local_1b0,0);
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    TVar17.Reference = local_150.TextData.Reference;
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
      TVar17.Reference = local_150.TextData.Reference;
    }
    goto LAB_141cf55ce;
  }
  FTimecode::ToFrameNumber(&local_2a8,&local_258);
  auVar31._0_8_ = (double)local_258.Numerator;
  auVar31._8_8_ = 0;
  local_280 = 0.0;
  auVar44._0_8_ = (dVar38 / (double)param_1.Numerator) * auVar31._0_8_ * dVar45 + dVar7;
  auVar44._8_8_ = 0;
  auVar34 = roundpd(auVar31,auVar44,1);
  local_270.Ticks = (long64)auVar34._0_8_;
  auVar32._0_8_ = modf((double)local_270.Ticks * dVar39,&local_280);
  FVar10.Ticks = local_270.Ticks;
  param_1 = local_res10;
  auVar32._8_8_ = extraout_XMM0_Qb;
  dVar38 = (double)local_res10.Denominator;
  iVar23 = local_res10.Numerator;
  dVar43 = (double)iVar23;
  dVar48 = dVar43 / dVar38;
  auVar40._0_8_ = (double)local_270.Ticks * dVar48 * dVar39 + dVar7;
  auVar40._8_8_ = 0;
  auVar34 = roundpd(auVar32,auVar40,1);
  local_280 = (double)CONCAT44(local_280._4_4_,(int)auVar34._0_8_);
  pFVar13 = FTimecode::FromFrameNumber
                      (&local_1c8,(FFrameNumber *)&local_280,&local_res10,(bool)uVar28);
  local_e0._0_4_ = pFVar13->Subframe;
  local_e0._4_1_ = pFVar13->bDropFrameFormat;
  local_e0._5_3_ = *(undefined3 *)&pFVar13->field_0x15;
  if ((((pFVar13->Hours == local_2a8.Hours) &&
       (iVar24 = local_2a8.Minutes, pFVar13->Minutes == local_2a8.Minutes)) &&
      (iVar27 = local_2a8.Seconds, pFVar13->Seconds == local_2a8.Seconds)) &&
     (iVar15 = local_2a8.Frames, pFVar13->Frames == local_2a8.Frames)) {
    fVar37 = local_2a8.Subframe;
    if ((float)(undefined4)local_e0 != local_2a8.Subframe) goto LAB_141cf5515;
    if ((pFVar13->Minutes != local_2a8.Minutes) || (pFVar13->Frames != local_2a8.Frames)) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar21 = pFVar11->CurrentTest;
      pcVar29 = *(code **)(pFVar21->_padding_ + 0x28);
      pFVar12 = FFrameRate::ToPrettyText(&local_res10,&local_218);
      FText::ToString(pFVar12);
      FTimecode::ToString(&local_2a8,(FString *)&local_250,false,false);
      ::FString::PrintfImpl
                (&local_170,
                 L"Timecode \'%s\' didn\'t convert properly from Timespan \'%f\' without rollover for frame rate \'%s\'."
                );
      (*pcVar29)(pFVar21,&local_170,0);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      TVar17.Reference = local_218.TextData.Reference;
      if ((void *)local_250._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_250._0_8_);
        TVar17.Reference = local_218.TextData.Reference;
      }
      goto LAB_141cf55ce;
    }
    if ((bool)local_res18._0_1_ == false) {
      iVar26 = (int)ROUND((dVar38 / dVar43) * ((double)local_278 + (double)local_278) - dVar7) >> 1;
      iVar22 = iVar26 / 0xe10;
      iVar26 = iVar26 % 0xe10;
      iVar25 = iVar26 / 0x3c;
      local_280 = (double)CONCAT44(local_280._4_4_,iVar25);
      if (((iVar22 % 0x18 !=
            (int)(FVar10.Ticks / 36000000000) + (int)((FVar10.Ticks / 36000000000) / 0x18) * -0x18)
          || (iVar22 / 0x18 != (int)(FVar10.Ticks / 864000000000))) ||
         ((lVar16 = FVar10.Ticks / 600000000,
          lVar19 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar16),8) + lVar16,
          iVar25 != (int)lVar16 + ((int)(lVar19 >> 5) - (int)(lVar19 >> 0x3f)) * -0x3c ||
          (lVar16 = FVar10.Ticks + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(FVar10.Ticks),8),
          lVar16 = (lVar16 >> 0x17) - (lVar16 >> 0x3f),
          lVar19 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar16),8) + lVar16,
          iVar26 % 0x3c != (int)lVar16 + ((int)(lVar19 >> 5) - (int)(lVar19 >> 0x3f)) * -0x3c)))) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar21 = pFVar11->CurrentTest;
        pcVar29 = *(code **)(pFVar21->_padding_ + 0x28);
        pFVar12 = FFrameRate::ToPrettyText(&local_res10,&local_130);
        FText::ToString(pFVar12);
        FTimespan::ToString(&local_270,&local_140);
        ::FString::PrintfImpl
                  (&local_1a0,
                   L"Timecode hours/minutes/seconds doesn\'t matches with Timespan \'%s\' from frame rate \'%s\'."
                  );
        (*pcVar29)(pFVar21,&local_1a0,0);
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        TVar17.Reference = local_130.TextData.Reference;
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
          TVar17.Reference = local_130.TextData.Reference;
        }
        goto LAB_141cf55ce;
      }
    }
    if (local_278 != 0) {
      if ((local_1f8.Frames + 1 == local_2a8.Frames) || (local_2a8.Frames == 0)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((local_1f8.Seconds == local_2a8.Seconds) || (local_1f8.Seconds + 1 == local_2a8.Seconds))
         || (local_2a8.Seconds == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (((local_1f8.Minutes == local_2a8.Minutes) || (local_1f8.Minutes + 1 == local_2a8.Minutes))
         || (local_2a8.Minutes == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar4) {
        if ((bool)local_res18._0_1_ != false) {
          fVar30 = (float)dVar48;
          iVar22 = 4;
          if (-((int)ROUND(fVar8 - (fVar30 + fVar30)) >> 1) < 0x1f) {
            iVar22 = 2;
          }
          if (((local_2a8.Frames == iVar22) && (local_1f8.Minutes + 1 == local_2a8.Minutes)) &&
             (local_2a8.Minutes != (local_2a8.Minutes / 10) * 10)) goto LAB_141cf529d;
        }
      }
      else {
LAB_141cf529d:
        if ((!bVar5) && (!bVar6)) goto LAB_141cf5391;
      }
      pFVar11 = FAutomationTestFramework::Get();
      pFVar21 = pFVar11->CurrentTest;
      pcVar29 = *(code **)(pFVar21->_padding_ + 0x28);
      pFVar12 = FFrameRate::ToPrettyText(&local_res10,local_100);
      FText::ToString(pFVar12);
      FTimecode::ToString(&local_1f8,&local_110,false,false);
      FTimecode::ToString(&local_2a8,&local_120,false,false);
      ::FString::PrintfImpl
                (&local_190,
                 L"Timecode \'%s\' is not a continuity of the previous timecode \'%s\' from frame rate \'%s\'."
                );
      (*pcVar29)(pFVar21,&local_190,0);
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      TVar17.Reference = local_100[0].TextData.Reference;
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
        TVar17.Reference = local_100[0].TextData.Reference;
      }
      goto LAB_141cf55ce;
    }
LAB_141cf5391:
    local_220.Numerator = iVar23 * 3;
    local_220.Denominator = local_res10.Denominator * 3;
    FTimecode::FromFrameNumber
              (&local_238,(FFrameNumber *)&local_res20,&local_220,(bool)local_res18._0_1_);
    if ((((local_2a8.Hours != local_238.Hours) || (iVar24 != local_238.Minutes)) ||
        (iVar27 != local_238.Seconds)) ||
       ((iVar15 != local_238.Frames || (iVar23 = local_2a8.Hours, fVar37 != local_238.Subframe)))) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar21 = pFVar11->CurrentTest;
      pcVar29 = *(code **)(pFVar21->_padding_ + 0x28);
      FTimecode::ToString(&local_2a8,(FString *)&local_1e0,false,false);
      ::FString::PrintfImpl
                (&local_180,
                 L"Timecode \'%s\' didn\'t convert properly from FrameNumber \'%d\' when the frame rate is tripled."
                );
      (*pcVar29)(pFVar21,&local_180,0);
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      if ((void *)CONCAT44(local_1e0.Minutes,local_1e0.Hours) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_1e0.Minutes,local_1e0.Hours));
      }
      goto LAB_141cf55d9;
    }
LAB_141cf55f2:
    uVar1._0_4_ = local_2a8.Subframe;
    uVar1._4_1_ = local_2a8.bDropFrameFormat;
    uVar1._5_3_ = local_2a8._21_3_;
    local_1f8.Subframe = local_2a8.Subframe;
    local_1f8.bDropFrameFormat = local_2a8.bDropFrameFormat;
    local_1f8._21_3_ = local_2a8._21_3_;
    uVar2._0_4_ = local_2a8.Hours;
    uVar2._4_4_ = local_2a8.Minutes;
    uVar3._0_4_ = local_2a8.Seconds;
    uVar3._4_4_ = local_2a8.Frames;
    local_1f8.Hours = local_2a8.Hours;
    local_1f8.Minutes = local_2a8.Minutes;
    local_1f8.Seconds = local_2a8.Seconds;
    local_1f8.Frames = local_2a8.Frames;
    if ((0x27 < iVar23) || (local_278 = local_278 + 1, 0x7fffffff < local_278)) goto LAB_141cf56aa;
    uVar28 = local_res18._0_1_;
    local_1f8._0_8_ = uVar2;
    local_1f8._8_8_ = uVar3;
    local_1f8._16_8_ = uVar1;
    goto LAB_141cf4c4c;
  }
LAB_141cf5515:
  pFVar11 = FAutomationTestFramework::Get();
  pFVar21 = pFVar11->CurrentTest;
  pcVar29 = *(code **)(pFVar21->_padding_ + 0x28);
  pFVar12 = FFrameRate::ToPrettyText(&local_res10,&local_268);
  FText::ToString(pFVar12);
  FTimecode::ToString(&local_2a8,&local_208,false,false);
  ::FString::PrintfImpl
            (&local_290,
             L"Timecode \'%s\' didn\'t convert properly from Timespan \'%f\' with rollover for frame rate \'%s\'."
            );
  (*pcVar29)(pFVar21,&local_290,0);
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  TVar17.Reference = local_268.TextData.Reference;
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
    TVar17.Reference = local_268.TextData.Reference;
  }
LAB_141cf55ce:
  if (TVar17.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar17.Reference + 0x10))();
  }
LAB_141cf55d9:
  iVar20 = iVar20 + 1;
  if (iVar20 < 0xb) {
    param_1 = local_res10;
    iVar23 = local_2a8.Hours;
    goto LAB_141cf55f2;
  }
  pFVar11 = FAutomationTestFramework::Get();
  pFVar21 = pFVar11->CurrentTest;
  pcVar29 = *(code **)(pFVar21->_padding_ + 0x48);
  pFVar12 = FFrameRate::ToPrettyText(&local_res10,&local_268);
  FText::ToString(pFVar12);
  ::FString::PrintfImpl(&local_290,L"Skip test for frame rate \'%s\'. Other errors may exists.");
  (*pcVar29)(pFVar21,&local_290,0);
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  if (local_268.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
  }
LAB_141cf56aa:
  if (iVar20 != 0) goto LAB_141cf5aec;
  local_res20 = 0.0;
  local_250._16_8_ = local_250._16_8_ & 0xffffffff00000000;
  auVar33._0_8_ = modf(__real_4131d7fafd4591da,&local_res20);
  auVar33._8_8_ = extraout_XMM0_Qb_00;
  bVar4 = (bool)local_res18._0_1_;
  dVar39 = (double)local_res10.Denominator;
  dVar45 = (double)local_res10.Numerator;
  auVar41._0_8_ = ((double)((int)local_res20 % 0x15180) + auVar33._0_8_) * (dVar45 / dVar39) + dVar7
  ;
  auVar41._8_8_ = 0;
  auVar34 = roundpd(auVar33,auVar41,1);
  local_res20 = (double)CONCAT44(local_res20._4_4_,(int)auVar34._0_8_);
  pFVar13 = FTimecode::FromFrameNumber
                      (&local_1c8,(FFrameNumber *)&local_res20,&local_res10,(bool)local_res18._0_1_)
  ;
  local_250.Hours = pFVar13->Hours;
  local_250.Minutes = pFVar13->Minutes;
  local_250.Seconds = pFVar13->Seconds;
  local_250.Frames = pFVar13->Frames;
  auVar46._0_8_ = (dVar45 / dVar39) * __real_4131d7fafd4591da + dVar7;
  auVar46._8_8_ = 0;
  local_250.Subframe = pFVar13->Subframe;
  local_250.bDropFrameFormat = pFVar13->bDropFrameFormat;
  local_250._21_3_ = *(undefined3 *)&pFVar13->field_0x15;
  auVar34 = roundpd((undefined1  [16])local_250._0_16_,auVar46,1);
  local_2a8._16_8_ = (ulonglong)(uint)local_2a8._20_4_ << 0x20;
  local_res18 = (double)CONCAT44(local_res18._4_4_,(int)auVar34._0_8_);
  pFVar13 = FTimecode::FromFrameNumber(&local_1c8,(FFrameNumber *)&local_res18,&local_res10,bVar4);
  local_res18 = 0.0;
  local_2a8.Hours = pFVar13->Hours;
  local_2a8.Minutes = pFVar13->Minutes;
  local_2a8.Seconds = pFVar13->Seconds;
  local_2a8.Frames = pFVar13->Frames;
  local_2a8.Subframe = pFVar13->Subframe;
  local_2a8.bDropFrameFormat = pFVar13->bDropFrameFormat;
  local_2a8._21_3_ = *(undefined3 *)&pFVar13->field_0x15;
  local_1e0._16_8_ = (ulonglong)(uint)local_1e0._20_4_ << 0x20;
  auVar35._0_8_ = modf(__real_4131d7fafd4591db,&local_res18);
  auVar35._8_8_ = extraout_XMM0_Qb_01;
  dVar39 = (double)local_res10.Denominator;
  dVar45 = (double)local_res10.Numerator;
  auVar42._0_8_ = ((double)((int)local_res18 % 0x15180) + auVar35._0_8_) * (dVar45 / dVar39) + dVar7
  ;
  auVar42._8_8_ = 0;
  auVar34 = roundpd(auVar35,auVar42,1);
  local_res18._0_4_ = (int)auVar34._0_8_;
  pFVar13 = FTimecode::FromFrameNumber(&local_1c8,(FFrameNumber *)&local_res18,&local_res10,bVar4);
  iVar23 = pFVar13->Hours;
  iVar24 = pFVar13->Minutes;
  iVar27 = pFVar13->Seconds;
  iVar15 = pFVar13->Frames;
  auVar47._0_8_ = (dVar45 / dVar39) * __real_4131d7fafd4591db + dVar7;
  auVar47._8_8_ = 0;
  local_1e0.Subframe = pFVar13->Subframe;
  local_1e0.bDropFrameFormat = pFVar13->bDropFrameFormat;
  local_1e0._21_3_ = *(undefined3 *)&pFVar13->field_0x15;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = local_1e0._16_8_;
  auVar34 = roundpd(auVar36,auVar47,1);
  local_238._16_8_ = (ulonglong)(uint)local_238._20_4_ << 0x20;
  local_res18 = (double)CONCAT44(local_res18._4_4_,(int)auVar34._0_8_);
  local_1e0.Hours = iVar23;
  local_1e0.Minutes = iVar24;
  local_1e0.Seconds = iVar27;
  local_1e0.Frames = iVar15;
  pFVar13 = FTimecode::FromFrameNumber(&local_1c8,(FFrameNumber *)&local_res18,&local_res10,bVar4);
  local_238.Hours = pFVar13->Hours;
  local_238.Minutes = pFVar13->Minutes;
  local_238.Seconds = pFVar13->Seconds;
  local_238.Frames = pFVar13->Frames;
  local_238.Subframe = pFVar13->Subframe;
  local_238.bDropFrameFormat = pFVar13->bDropFrameFormat;
  local_238._21_3_ = *(undefined3 *)&pFVar13->field_0x15;
  if ((((local_250.Hours == iVar23) && (local_250.Minutes == iVar24)) &&
      (local_250.Seconds == iVar27)) && (local_250.Frames == iVar15)) {
    if (local_250.Subframe != local_1e0.Subframe) goto LAB_141cf5a09;
    if (((local_2a8.Hours == local_238.Hours) && (local_2a8.Minutes == local_238.Minutes)) &&
       ((local_2a8.Seconds == local_238.Seconds && (local_2a8.Frames == local_238.Frames)))) {
      if (local_2a8.Subframe == local_238.Subframe) goto LAB_141cf5aec;
    }
    pFVar11 = FAutomationTestFramework::Get();
    pFVar21 = pFVar11->CurrentTest;
    pcVar29 = *(code **)(pFVar21->_padding_ + 0x28);
    pFVar12 = FFrameRate::ToPrettyText(&local_res10,&local_218);
    FText::ToString(pFVar12);
    pFVar14 = FTimecode::ToString(&local_238,&local_208,false,false);
    if ((pFVar14->Data).ArrayNum == 0) {
      pFVar13 = &local_2a8;
    }
    else {
      pFVar13 = &local_2a8;
    }
  }
  else {
LAB_141cf5a09:
    pFVar11 = FAutomationTestFramework::Get();
    pFVar21 = pFVar11->CurrentTest;
    pcVar29 = *(code **)(pFVar21->_padding_ + 0x28);
    pFVar12 = FFrameRate::ToPrettyText(&local_res10,&local_218);
    FText::ToString(pFVar12);
    FTimecode::ToString(&local_1e0,&local_208,false,false);
    pFVar13 = &local_250;
  }
  FTimecode::ToString(pFVar13,(FString *)&local_268,false,false);
  ::FString::PrintfImpl
            (&local_290,
             L"The timecode \'%s\' do not match timecode \'%s\' when converted from the computer clock\'s time and the frame rate is \'%s\'"
            );
  (*pcVar29)(pFVar21,&local_290,0);
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  if (local_268.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_268.TextData.Reference);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if (local_218.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
  }
  iVar20 = 1;
LAB_141cf5aec:
  pFVar11 = FAutomationTestFramework::Get();
  pFVar21 = pFVar11->CurrentTest;
  pcVar29 = *(code **)(pFVar21->_padding_ + 0x50);
  pFVar12 = FFrameRate::ToPrettyText(&local_res10,&local_268);
  FText::ToString(pFVar12);
  ::FString::PrintfImpl(&local_290,L"Timecode test was completed with frame rate \'%s\'");
  (*pcVar29)(pFVar21,&local_290,0,0);
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  if (local_268.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
  }
  return iVar20 == 0;
}

// TestBody @ 141d4ed60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FTimecodeTest::TestBody(FTimecodeTest *this,FString *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  TFuture<bool> *pTVar8;
  FAutomationTestFramework *pFVar9;
  ForAnyElementType FVar10;
  FFrameRate *pFVar11;
  undefined1 auStack_168 [32];
  TFuture<bool> *local_148;
  TFuture<bool> *local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  ForAnyElementType local_110;
  undefined8 local_108;
  <lambda_1> local_100 [8];
  <lambda_2> local_f8;
  FString local_e8;
  undefined1 local_d8 [16];
  TUniqueFunction<void___cdecl(void)> local_c8;
  FFrameRate local_98 [16];
  FFrameRate local_18 [2];
  
  local_18[0] = (FFrameRate)(__security_cookie.value ^ (ulonglong)auStack_168);
  pFVar11 = local_98;
  local_98[0] = ___xmm_000000010000000f000000010000000c;
  local_98[1] = (FFrameRate)_UNK_150796278;
  local_98[2] = (FFrameRate)___xmm_00000001000000190000000100000018;
  local_98[3] = (FFrameRate)_UNK_150796288;
  local_98[4] = (FFrameRate)___xmm_0000000100000030000000010000001e;
  local_98[5] = (FFrameRate)_UNK_150796298;
  local_98[6] = (FFrameRate)___xmm_00000001000000320000000200000030;
  local_98[7] = (FFrameRate)_UNK_1507962a8;
  local_98[8] = (FFrameRate)___xmm_0000000100000064000000010000003c;
  local_98[9] = (FFrameRate)_UNK_1507962b8;
  local_98[10] = (FFrameRate)___xmm_00000001000000f00000000100000078;
  local_98[0xb] = (FFrameRate)_UNK_1507962c8;
  local_98[0xc] = (FFrameRate)___xmm_000003e900007530000003e900005dc0;
  local_98[0xd] = (FFrameRate)_UNK_150796338;
  local_98[0xe] = (FFrameRate)___xmm_000003e90000ea60000003e90000bb80;
  local_98[0xf] = (FFrameRate)_UNK_150796348;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  do {
    local_f8.FrameRate = *pFVar11;
    local_f8.ConversionWithFrameRateTest = local_100;
    local_c8._0_8_ = 0;
    local_c8._40_8_ = 0;
    pTVar8 = Async<_FTimecodeTest::TestBody_::__l6::<lambda_2>_>
                       ((TFuture<bool> *)local_d8,Thread,&local_f8,&local_c8);
    if (local_110.Data <= pTVar8) {
      if (pTVar8 < (TFuture<bool> *)(local_110.Data + (longlong)local_108._4_4_ * 0x10)) {
        local_130 = (longlong)(int)local_108;
        local_128 = 0x10;
        local_140 = (TFuture<bool> *)local_110.Data;
        local_148 = pTVar8;
        local_138 = (longlong)local_108._4_4_;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    iVar7 = (int)local_108;
    if ((int)local_108 == local_108._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_110,(int *)((longlong)&local_108 + 4));
    }
    local_108 = CONCAT44(local_108._4_4_,iVar7 + 1);
    *(undefined8 *)(local_110.Data + (longlong)iVar7 * 0x10) = *(undefined8 *)pTVar8;
    *(undefined8 *)(local_110.Data + (longlong)iVar7 * 0x10 + 8) = *(undefined8 *)&pTVar8->field_0x8
    ;
    *(undefined8 *)&pTVar8->field_0x8 = 0;
    *(undefined8 *)pTVar8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_d8._8_8_);
    pFVar11 = pFVar11 + 1;
  } while (pFVar11 != local_18);
  iVar7 = (int)local_108;
  bVar5 = true;
  pTVar8 = (TFuture<bool> *)(local_110.Data + (longlong)(int)local_108 * 0x10);
  FVar10.Data = local_110.Data;
  do {
    while( true ) {
      if ((int)local_108 != iVar7) {
        local_118[0] = 0;
        `TCheckedPointerIterator<TFuture<bool>,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_118);
      }
      if ((TFuture<bool> *)FVar10.Data == pTVar8) {
        if (!bVar5) {
          pFVar9 = FAutomationTestFramework::Get();
          pFVar3 = pFVar9->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::FString(&local_e8,L"Required condition failed, interrupting test");
          (*pcVar4)(pFVar3,&local_e8,0);
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
        }
        DestructItems<TFuture<bool>,int>((TFuture<bool> *)local_110.Data,(int)local_108);
        if ((TFuture<bool> *)local_110.Data != (TFuture<bool> *)0x0) {
          FMemory::Free(local_110.Data);
        }
        return;
      }
      if (*(longlong *)FVar10.Data != 0) {
        do {
          do {
          } while (*(longlong *)FVar10.Data == 0);
          plVar1 = *(longlong **)(*(longlong *)FVar10.Data + 0x60);
          cVar6 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff);
        } while (cVar6 == '\0');
      }
      if (bVar5) break;
LAB_141d4f001:
      bVar5 = false;
      FVar10.Data = FVar10.Data + 0x10;
    }
    if (*(longlong *)FVar10.Data == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x155,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(longlong *)FVar10.Data == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = *(longlong *)FVar10.Data;
    while (*(char *)(lVar2 + 0x68) == '\0') {
      (**(code **)(**(longlong **)(lVar2 + 0x60) + 0x20))(*(longlong **)(lVar2 + 0x60),0xffffffff);
    }
    if (*(char *)(lVar2 + 0x70) == '\0') goto LAB_141d4f001;
    bVar5 = true;
    FVar10.Data = FVar10.Data + 0x10;
  } while( true );
}

