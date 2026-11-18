// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141c59d40

EAutomationTestFlags __thiscall FMathWrapTest::GetTestFlags(FMathWrapTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c59d50

bool __thiscall FMathWrapTest::IsStressTest(FMathWrapTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c59d60

uint __thiscall FMathWrapTest::GetRequiredDeviceNum(FMathWrapTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c59d70

FString * __thiscall
FMathWrapTest::GetTestSourceFileName(FMathWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Math\\UnrealMathTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c59da0

int __thiscall FMathWrapTest::GetTestSourceFileLine(FMathWrapTest *this)

{
  return 0x126f;
}

// GetTests @ 141c59db0

/* WARNING: Removing unreachable block (ram,0x000141c59f2e) */

void __thiscall
FMathWrapTest::GetTests
          (FMathWrapTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c59f50

bool __thiscall FMathWrapTest::RunTest(FMathWrapTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c59f80

FString * __thiscall
FMathWrapTest::GetBeautifiedTestName(FMathWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FMathWrapTest @ 141c8cbc0

FMathWrapTest * __thiscall FMathWrapTest::FMathWrapTest(FMathWrapTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FMathWrapTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Math::Wrap");
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

// TestBody @ 141ca5a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FMathWrapTest::TestBody(FMathWrapTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  FString local_98 [9];
  
  fVar9 = __real_41200000;
  fVar4 = FGenericPlatformMath::Fmod(__real_41d80000,__real_41200000);
  if ((fVar4 == 0.0) || (fVar4 != __real_40e00000)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FGenericPlatformMath::Fmod(__real_41300000,fVar9);
  fVar4 = __real_3f800000;
  if ((fVar5 == 0.0) || (fVar5 != __real_3f800000)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FGenericPlatformMath::Fmod(fVar9,fVar9);
  if ((fVar5 != 0.0) && (fVar5 != fVar9)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = __real_40a00000;
  fVar6 = FGenericPlatformMath::Fmod(__real_40a00000,fVar9);
  if ((fVar6 == 0.0) || (fVar6 != fVar5)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  fVar6 = FGenericPlatformMath::Fmod(fVar4,fVar9);
  if ((fVar6 == 0.0) || (fVar6 != fVar4)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  fVar6 = FGenericPlatformMath::Fmod(fVar4,fVar9);
  if ((fVar6 == 0.0) || (fVar6 != fVar4)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  fVar6 = FGenericPlatformMath::Fmod(fVar5,fVar9);
  if ((fVar6 == 0.0) || (fVar6 != fVar5)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = __real_41100000;
  fVar6 = FGenericPlatformMath::Fmod(__real_41100000,fVar9);
  if ((fVar6 == 0.0) || (fVar6 != fVar5)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FGenericPlatformMath::Fmod(fVar9,fVar9);
  if ((fVar5 != 0.0) && (fVar5 != fVar9)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FGenericPlatformMath::Fmod(__real_42080000,fVar9);
  if ((fVar5 == 0.0) || (fVar5 != __real_40800000)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  fVar5 = FGenericPlatformMath::Fmod(__real_42200000,fVar9);
  if ((fVar5 != 0.0) && (fVar5 != fVar9)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  dVar16 = __real_4024000000000000;
  dVar10 = FGenericPlatformMath::Fmod(__real_403b000000000000,__real_4024000000000000);
  if ((dVar10 == 0.0) || (dVar10 != __real_401c000000000000)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  dVar11 = FGenericPlatformMath::Fmod(__real_4026000000000000,dVar16);
  dVar10 = __real_3ff0000000000000;
  if ((dVar11 == 0.0) || (dVar11 != __real_3ff0000000000000)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  dVar11 = FGenericPlatformMath::Fmod(dVar16,dVar16);
  if ((dVar11 != 0.0) && (dVar11 != dVar16)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  dVar11 = __real_4014000000000000;
  dVar12 = FGenericPlatformMath::Fmod(__real_4014000000000000,dVar16);
  if ((dVar12 == 0.0) || (dVar12 != dVar11)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  dVar12 = FGenericPlatformMath::Fmod(dVar10,dVar16);
  if ((dVar12 == 0.0) || (dVar12 != dVar10)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  dVar12 = FGenericPlatformMath::Fmod(dVar10,dVar16);
  if ((dVar12 == 0.0) || (dVar12 != dVar10)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  dVar12 = FGenericPlatformMath::Fmod(dVar11,dVar16);
  if ((dVar12 == 0.0) || (dVar12 != dVar11)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  dVar11 = __real_4022000000000000;
  dVar12 = FGenericPlatformMath::Fmod(__real_4022000000000000,dVar16);
  if ((dVar12 == 0.0) || (dVar12 != dVar11)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  dVar11 = FGenericPlatformMath::Fmod(dVar16,dVar16);
  if ((dVar11 != 0.0) && (dVar11 != dVar16)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  dVar11 = FGenericPlatformMath::Fmod(__real_4041000000000000,dVar16);
  if ((dVar11 == 0.0) || (dVar11 != __real_4010000000000000)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  dVar11 = FGenericPlatformMath::Fmod(__real_4044000000000000,dVar16);
  if ((dVar11 != 0.0) && (dVar11 != dVar16)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  fVar6 = __real_40c23d70;
  fVar7 = FGenericPlatformMath::Fmod(__real_419feb86,__real_40c23d70);
  fVar8 = __real_41070a3d;
  fVar5 = __real_4017ae14;
  fVar9 = __real_38d1b717;
  fVar17 = __real_4017ae14;
  if (fVar7 != 0.0) {
    fVar17 = __real_41070a3d - fVar7;
  }
  if (__real_38d1b717 <
      (float)((uint)(fVar17 - ___real_40d51eb8) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  fVar7 = FGenericPlatformMath::Fmod(__real_408851eb,fVar6);
  fVar17 = fVar5;
  if (fVar7 != 0.0) {
    fVar17 = fVar8 - fVar7;
  }
  if (fVar9 < (float)((uint)(fVar17 - ___real_4085c28f) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  fVar7 = FGenericPlatformMath::Fmod(__real_4037ae18,fVar6);
  fVar17 = fVar8;
  if (fVar7 != 0.0) {
    fVar17 = fVar7 + fVar5;
  }
  if (fVar9 < (float)((uint)(fVar17 - ___real_40a7ae14) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  fVar6 = FGenericPlatformMath::Fmod(__real_41735c29,fVar6);
  if (fVar6 != 0.0) {
    fVar8 = fVar6 + fVar5;
  }
  if (fVar9 < (float)((uint)(fVar8 - ___real_40ae147b) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  dVar12 = __real_401847ae147ae147;
  dVar13 = FGenericPlatformMath::Fmod(__real_4033fd70a3d70a3e,__real_401847ae147ae147);
  dVar15 = __real_4020e147ae147ae1;
  dVar11 = __real_4002f5c28f5c28f6;
  dVar16 = __real_3f1a36e2eb1c432d;
  dVar14 = __real_4002f5c28f5c28f6;
  if (dVar13 != 0.0) {
    dVar14 = __real_4020e147ae147ae1 - dVar13;
  }
  if (__real_3f1a36e2eb1c432d <
      (double)CONCAT44((uint)((ulonglong)(dVar14 - ___real_401aa3d70a3d70a4) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar14 - ___real_401aa3d70a3d70a4,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  dVar13 = FGenericPlatformMath::Fmod(__real_40110a3d70a3d70a,dVar12);
  dVar14 = dVar11;
  if (dVar13 != 0.0) {
    dVar14 = dVar15 - dVar13;
  }
  if (dVar16 < (double)CONCAT44((uint)((ulonglong)(dVar14 - ___real_4010b851eb851eb8) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar14 - ___real_4010b851eb851eb8,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  dVar13 = FGenericPlatformMath::Fmod(__real_4006f5c28f5c28f8,dVar12);
  dVar14 = dVar15;
  if (dVar13 != 0.0) {
    dVar14 = dVar13 + dVar11;
  }
  if (dVar16 < (double)CONCAT44((uint)((ulonglong)(dVar14 - ___real_4014f5c28f5c28f6) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar14 - ___real_4014f5c28f5c28f6,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  dVar12 = FGenericPlatformMath::Fmod(__real_402e6b851eb851eb,dVar12);
  if (dVar12 != 0.0) {
    dVar15 = dVar12 + dVar11;
  }
  if (dVar16 < (double)CONCAT44((uint)((ulonglong)(dVar15 - ___real_4015c28f5c28f5c3) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar15 - ___real_4015c28f5c28f5c3,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  fVar9 = FGenericPlatformMath::Fmod(__real_4c000000,fVar4);
  if ((fVar9 != 0.0) && (fVar9 != fVar4)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  fVar9 = FGenericPlatformMath::Fmod(__real_4bffffff,fVar4);
  if ((fVar9 != 0.0) && (fVar9 != fVar4)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  dVar16 = FGenericPlatformMath::Fmod(__real_4180000008000000,dVar10);
  if ((dVar16 != 0.0) && (dVar16 != dVar10)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  dVar16 = FGenericPlatformMath::Fmod(__real_417fffffe0000000,dVar10);
  if ((dVar16 != 0.0) && (dVar16 != dVar10)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

