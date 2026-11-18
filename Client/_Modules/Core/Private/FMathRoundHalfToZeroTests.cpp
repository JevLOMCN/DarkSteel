// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141c5ef20

EAutomationTestFlags __thiscall
FMathRoundHalfToZeroTests::GetTestFlags(FMathRoundHalfToZeroTests *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c5ef30

bool __thiscall FMathRoundHalfToZeroTests::IsStressTest(FMathRoundHalfToZeroTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c5ef40

uint __thiscall FMathRoundHalfToZeroTests::GetRequiredDeviceNum(FMathRoundHalfToZeroTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c5ef50

FString * __thiscall
FMathRoundHalfToZeroTests::GetTestSourceFileName
          (FMathRoundHalfToZeroTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Math\\UnrealMathTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c5ef80

int __thiscall FMathRoundHalfToZeroTests::GetTestSourceFileLine(FMathRoundHalfToZeroTests *this)

{
  return 0x1053;
}

// GetTests @ 141c5ef90

/* WARNING: Removing unreachable block (ram,0x000141c5f10e) */

void __thiscall
FMathRoundHalfToZeroTests::GetTests
          (FMathRoundHalfToZeroTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c5f130

bool __thiscall FMathRoundHalfToZeroTests::RunTest(FMathRoundHalfToZeroTests *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c5f160

FString * __thiscall
FMathRoundHalfToZeroTests::GetBeautifiedTestName
          (FMathRoundHalfToZeroTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FMathRoundHalfToZeroTests @ 141c8c480

FMathRoundHalfToZeroTests * __thiscall
FMathRoundHalfToZeroTests::FMathRoundHalfToZeroTests
          (FMathRoundHalfToZeroTests *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FMathRoundHalfToZeroTests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Math::Round HalfToZero");
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

// TestBody @ 141ca2c50

void __thiscall
FMathRoundHalfToZeroTests::TestBody(FMathRoundHalfToZeroTests *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FString local_38 [3];
  
  fVar4 = FMath::RoundHalfToZero(0.0);
  if (fVar4 != 0.0) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-Zero");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar4 = __real_3f800000;
  fVar5 = FMath::RoundHalfToZero(__real_3f800000);
  if (fVar5 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-One");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FMath::RoundHalfToZero(__real_3fb33333);
  if (fVar5 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-LessHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar6 = FMath::RoundHalfToZero(__real_bfb33333);
  fVar5 = __real_bf800000;
  if (fVar6 != __real_bf800000) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-NegGreaterHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar6 = FMath::RoundHalfToZero(__real_3fbfffff);
  if (fVar6 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-LessNearHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar6 = FMath::RoundHalfToZero(__real_bfbfffff);
  if (fVar6 != fVar5) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-NegGreaterNearHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar6 = FMath::RoundHalfToZero(__real_3fc00000);
  if (fVar6 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-Half");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar4 = FMath::RoundHalfToZero(__real_bfc00000);
  if (fVar4 != fVar5) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-NegHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FMath::RoundHalfToZero(__real_3fc00001);
  fVar4 = __real_40000000;
  if (fVar5 != __real_40000000) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-GreaterNearHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar6 = FMath::RoundHalfToZero(__real_bfc00001);
  fVar5 = __real_c0000000;
  if (fVar6 != __real_c0000000) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-NegLesserNearHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar6 = FMath::RoundHalfToZero(__real_3fcccccd);
  if (fVar6 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-GreaterThanHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar4 = FMath::RoundHalfToZero(__real_bfcccccd);
  if (fVar4 != fVar5) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-NegLesserThanHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FMath::RoundHalfToZero(__real_4a7ffffd);
  fVar4 = __real_4a7ffffc;
  if (fVar5 != __real_4a7ffffc) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-TwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FMath::RoundHalfToZero(__real_4a7ffffe);
  if (fVar5 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-TwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FMath::RoundHalfToZero(__real_4a7fffff);
  fVar4 = __real_4a800000;
  if (fVar5 != __real_4a800000) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-TwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FMath::RoundHalfToZero(fVar4);
  if (fVar5 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-TwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FMath::RoundHalfToZero(__real_4a800001);
  if (fVar5 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-TwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FMath::RoundHalfToZero(__real_ca7ffffd);
  fVar4 = __real_ca7ffffc;
  if (fVar5 != __real_ca7ffffc) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-NegTwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FMath::RoundHalfToZero(__real_ca7ffffe);
  if (fVar5 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-NegTwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FMath::RoundHalfToZero(__real_ca7fffff);
  fVar4 = __real_ca800000;
  if (fVar5 != __real_ca800000) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-NegTwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FMath::RoundHalfToZero(fVar4);
  if (fVar5 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-NegTwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FMath::RoundHalfToZero(__real_ca800001);
  if (fVar5 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-NegTwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar4 = __real_4afffffe;
  fVar5 = FMath::RoundHalfToZero(__real_4afffffe);
  if (fVar5 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-OneToZeroBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FMath::RoundHalfToZero(__real_4affffff);
  if (fVar5 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-OneToZeroBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar4 = __real_4b000000;
  fVar5 = FMath::RoundHalfToZero(__real_4b000000);
  if (fVar5 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-OneToZeroBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar4 = __real_cafffffe;
  fVar5 = FMath::RoundHalfToZero(__real_cafffffe);
  if (fVar5 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-NegOneToZeroBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FMath::RoundHalfToZero(__real_caffffff);
  if (fVar5 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-NegOneToZeroBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar4 = __real_cb000000;
  fVar5 = FMath::RoundHalfToZero(__real_cb000000);
  if (fVar5 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-NegOneToZeroBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar4 = __real_4b7fffff;
  fVar5 = FMath::RoundHalfToZero(__real_4b7fffff);
  if (fVar5 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-ZeroBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  fVar4 = __real_cb7fffff;
  fVar5 = FMath::RoundHalfToZero(__real_cb7fffff);
  if (fVar5 != fVar4) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero32-NegZeroBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar7 = FMath::RoundHalfToZero(0.0);
  if (dVar7 != 0.0) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-Zero");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar7 = __real_3ff0000000000000;
  dVar8 = FMath::RoundHalfToZero(__real_3ff0000000000000);
  if (dVar8 != dVar7) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-One");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar8 = FMath::RoundHalfToZero(__real_3ff6666666666666);
  if (dVar8 != dVar7) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-LessHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar9 = FMath::RoundHalfToZero(__real_bff6666666666666);
  dVar8 = __real_bff0000000000000;
  if (dVar9 != __real_bff0000000000000) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-NegGreaterHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar9 = FMath::RoundHalfToZero(__real_3ff7ffffffffffff);
  if (dVar9 != dVar7) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-LessNearHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar9 = FMath::RoundHalfToZero(__real_bff7ffffffffffff);
  if (dVar9 != dVar8) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-NegGreaterNearHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar9 = FMath::RoundHalfToZero(__real_3ff8000000000000);
  if (dVar9 != dVar7) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-Half");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar7 = FMath::RoundHalfToZero(__real_bff8000000000000);
  if (dVar7 != dVar8) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-NegHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar8 = FMath::RoundHalfToZero(__real_3ff8000000000001);
  dVar7 = __real_4000000000000000;
  if (dVar8 != __real_4000000000000000) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-GreaterNearHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar9 = FMath::RoundHalfToZero(__real_bff8000000000001);
  dVar8 = __real_c000000000000000;
  if (dVar9 != __real_c000000000000000) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-NegLesserNearHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar9 = FMath::RoundHalfToZero(__real_3ff999999999999a);
  if (dVar9 != dVar7) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-GreaterThanHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar7 = FMath::RoundHalfToZero(__real_bff999999999999a);
  if (dVar7 != dVar8) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-NegLesserThanHalf");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar8 = FMath::RoundHalfToZero(__real_431ffffffffffffd);
  dVar7 = __real_431ffffffffffffc;
  if (dVar8 != __real_431ffffffffffffc) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-TwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar8 = FMath::RoundHalfToZero(__real_431ffffffffffffe);
  if (dVar8 != dVar7) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-TwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar8 = FMath::RoundHalfToZero(__real_431fffffffffffff);
  dVar7 = __real_4320000000000000;
  if (dVar8 != __real_4320000000000000) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-TwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar8 = FMath::RoundHalfToZero(dVar7);
  if (dVar8 != dVar7) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-TwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar8 = FMath::RoundHalfToZero(__real_4320000000000001);
  if (dVar8 != dVar7) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-TwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar8 = FMath::RoundHalfToZero(__real_c31ffffffffffffd);
  dVar7 = __real_c31ffffffffffffc;
  if (dVar8 != __real_c31ffffffffffffc) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-NegTwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar8 = FMath::RoundHalfToZero(__real_c31ffffffffffffe);
  if (dVar8 != dVar7) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-NegTwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar8 = FMath::RoundHalfToZero(__real_c31fffffffffffff);
  dVar7 = __real_c320000000000000;
  if (dVar8 != __real_c320000000000000) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-NegTwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar8 = FMath::RoundHalfToZero(dVar7);
  if (dVar8 != dVar7) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-NegTwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar8 = FMath::RoundHalfToZero(__real_c320000000000001);
  if (dVar8 != dVar7) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-NegTwoToOneBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar7 = __real_432ffffffffffffe;
  dVar8 = FMath::RoundHalfToZero(__real_432ffffffffffffe);
  if (dVar8 != dVar7) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-OneToZeroBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar8 = FMath::RoundHalfToZero(__real_432fffffffffffff);
  if (dVar8 != dVar7) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-OneToZeroBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar7 = FMath::RoundHalfToZero(__real_4330000000000000);
  if (dVar7 != __real_4330000000000000) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-OneToZeroBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar7 = __real_c32ffffffffffffe;
  dVar8 = FMath::RoundHalfToZero(__real_c32ffffffffffffe);
  if (dVar8 != dVar7) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-NegOneToZeroBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar8 = FMath::RoundHalfToZero(__real_c32fffffffffffff);
  if (dVar8 != dVar7) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-NegOneToZeroBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar7 = FMath::RoundHalfToZero(__real_c330000000000000);
  if (dVar7 != __real_c330000000000000) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-NegOneToZeroBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar7 = FMath::RoundHalfToZero(__real_433fffffffffffff);
  if (dVar7 != __real_433fffffffffffff) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-ZeroBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar7 = FMath::RoundHalfToZero(__real_c33fffffffffffff);
  if (dVar7 != __real_c33fffffffffffff) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"RoundHalfToZero64-NegZeroBitPrecision");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

