// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bcb2c0

EAutomationTestFlags __thiscall FFLinearColorSmokeTest::GetTestFlags(FFLinearColorSmokeTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bcb2e0

bool __thiscall FFLinearColorSmokeTest::IsStressTest(FFLinearColorSmokeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bcb2f0

uint __thiscall FFLinearColorSmokeTest::GetRequiredDeviceNum(FFLinearColorSmokeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bcb300

FString * __thiscall
FFLinearColorSmokeTest::GetTestSourceFileName
          (FFLinearColorSmokeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Math\\ColorTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bcb330

int __thiscall FFLinearColorSmokeTest::GetTestSourceFileLine(FFLinearColorSmokeTest *this)

{
  return 9;
}

// GetTests @ 141bcb4e0

/* WARNING: Removing unreachable block (ram,0x000141bcb65e) */

void __thiscall
FFLinearColorSmokeTest::GetTests
          (FFLinearColorSmokeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bcb6e0

bool __thiscall FFLinearColorSmokeTest::RunTest(FFLinearColorSmokeTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bcb710

FString * __thiscall
FFLinearColorSmokeTest::GetBeautifiedTestName
          (FFLinearColorSmokeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FFLinearColorSmokeTest @ 141be28e0

FFLinearColorSmokeTest * __thiscall
FFLinearColorSmokeTest::FFLinearColorSmokeTest(FFLinearColorSmokeTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FFLinearColorSmokeTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Math][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Math::FLinearColor::Smoke Test");
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
  ::FString::FString(&local_18,"[Core][Math][SmokeFilter]");
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

// TestBody @ 141c13660

void __thiscall FFLinearColorSmokeTest::TestBody(FFLinearColorSmokeTest *this,FString *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  FAutomationTestBase *pFVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  FColor FVar20;
  FAutomationTestFramework *pFVar21;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_res18 [2];
  float local_res20;
  undefined1 local_c4 [188];
  byte *pbVar22;
  
  pFVar21 = FAutomationTestFramework::Get();
  pFVar8 = pFVar21->CurrentTest;
  pcVar9 = *(code **)(pFVar8->_padding_ + 0x50);
  ::FString::FString((FString *)(local_c4 + 4),L"FLinearColor");
  (*pcVar9)(pFVar8,local_c4 + 4,0,0);
  if ((void *)local_c4._4_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c4._4_8_);
  }
  uVar18 = FLinearColor::Red.field0_0x0._s_0.A;
  uVar17 = FLinearColor::Red.field0_0x0._s_0.B;
  uVar16 = FLinearColor::Red.field0_0x0._s_0.G;
  uVar15 = FLinearColor::Black.field0_0x0._s_0.B;
  uVar14 = FLinearColor::Black.field0_0x0._s_0.G;
  uVar13 = FLinearColor::Black.field0_0x0._s_0.R;
  uVar12 = FLinearColor::White.field0_0x0._s_0.B;
  uVar11 = FLinearColor::White.field0_0x0._s_0.G;
  uVar10 = FLinearColor::White.field0_0x0._s_0.R;
  local_res18[0] = FLinearColor::Red.field0_0x0._s_0.R;
  if (FLinearColor::Red.field0_0x0._s_0.R != __real_3f800000) {
    pFVar21 = FAutomationTestFramework::Get();
    pFVar8 = pFVar21->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)(local_c4 + 4),L"Condition failed");
    (*pcVar9)(pFVar8,local_c4 + 4,0);
    if ((void *)local_c4._4_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c4._4_8_);
    }
  }
  if ((float)uVar16 != 0.0) {
    pFVar21 = FAutomationTestFramework::Get();
    pFVar8 = pFVar21->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)(local_c4 + 4),L"Condition failed");
    (*pcVar9)(pFVar8,local_c4 + 4,0);
    if ((void *)local_c4._4_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c4._4_8_);
    }
  }
  if ((float)uVar17 != 0.0) {
    pFVar21 = FAutomationTestFramework::Get();
    pFVar8 = pFVar21->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)(local_c4 + 4),L"Condition failed");
    (*pcVar9)(pFVar8,local_c4 + 4,0);
    if ((void *)local_c4._4_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c4._4_8_);
    }
  }
  if ((float)uVar18 != __real_3f800000) {
    pFVar21 = FAutomationTestFramework::Get();
    pFVar8 = pFVar21->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)(local_c4 + 4),L"Condition failed");
    (*pcVar9)(pFVar8,local_c4 + 4,0);
    if ((void *)local_c4._4_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c4._4_8_);
    }
  }
  fVar1 = local_res18[0];
  if ((((local_res18[0] != FLinearColor::Red.field0_0x0._s_0.R) ||
       ((float)uVar16 != FLinearColor::Red.field0_0x0._s_0.G)) ||
      ((float)uVar17 != FLinearColor::Red.field0_0x0._s_0.B)) ||
     ((float)uVar18 != FLinearColor::Red.field0_0x0._s_0.A)) {
    pFVar21 = FAutomationTestFramework::Get();
    pFVar8 = pFVar21->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)(local_c4 + 4),L"Condition failed");
    (*pcVar9)(pFVar8,local_c4 + 4,0);
    if ((void *)local_c4._4_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c4._4_8_);
    }
  }
  if (((fVar1 == FLinearColor::Green.field0_0x0._s_0.R) &&
      ((float)uVar16 == FLinearColor::Green.field0_0x0._s_0.G)) &&
     (((float)uVar17 == FLinearColor::Green.field0_0x0._s_0.B &&
      ((float)uVar18 == FLinearColor::Green.field0_0x0._s_0.A)))) {
    pFVar21 = FAutomationTestFramework::Get();
    pFVar8 = pFVar21->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)(local_c4 + 4),L"Condition failed");
    (*pcVar9)(pFVar8,local_c4 + 4,0);
    if ((void *)local_c4._4_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c4._4_8_);
    }
  }
  fVar1 = __real_3727c5ac;
  if ((((float)uVar10 * (float)uVar10 < __real_3727c5ac) &&
      ((float)uVar11 * (float)uVar11 < __real_3727c5ac)) &&
     ((float)uVar12 * (float)uVar12 < __real_3727c5ac)) {
    pFVar21 = FAutomationTestFramework::Get();
    pFVar8 = pFVar21->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)(local_c4 + 4),L"Condition failed");
    (*pcVar9)(pFVar8,local_c4 + 4,0);
    if ((void *)local_c4._4_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c4._4_8_);
    }
  }
  if (((fVar1 <= (float)uVar13 * (float)uVar13) || (fVar1 <= (float)uVar14 * (float)uVar14)) ||
     (fVar1 <= (float)uVar15 * (float)uVar15)) {
    pFVar21 = FAutomationTestFramework::Get();
    pFVar8 = pFVar21->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)(local_c4 + 4),L"Condition failed");
    (*pcVar9)(pFVar8,local_c4 + 4,0);
    if ((void *)local_c4._4_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c4._4_8_);
    }
  }
  ::FString::FString((FString *)(local_c4 + 4),"FFFF00FF");
  FVar20 = FColor::FromHex((FString *)local_res18);
  fVar25 = __real_3b808081;
  pbVar22 = (byte *)CONCAT44(extraout_var,FVar20.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar22[2]];
  fVar2 = FLinearColor::sRGBToLinearTable[pbVar22[1]];
  fVar3 = FLinearColor::sRGBToLinearTable[*pbVar22];
  fVar23 = (float)pbVar22[3] * __real_3b808081;
  if ((void *)local_c4._4_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c4._4_8_);
  }
  ::FString::FString((FString *)(local_c4 + 4),"00FF00FF");
  FVar20 = FColor::FromHex((FString *)local_c4);
  pbVar22 = (byte *)CONCAT44(extraout_var_00,FVar20.field0_0x0);
  local_res20 = FLinearColor::sRGBToLinearTable[pbVar22[2]];
  fVar4 = FLinearColor::sRGBToLinearTable[pbVar22[1]];
  local_res18[0] = FLinearColor::sRGBToLinearTable[*pbVar22];
  fVar24 = (float)pbVar22[3] * fVar25;
  if ((void *)local_c4._4_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c4._4_8_);
  }
  ::FString::FString((FString *)(local_c4 + 4),"0000FFFF");
  FVar20 = FColor::FromHex((FString *)local_c4);
  pbVar22 = (byte *)CONCAT44(extraout_var_01,FVar20.field0_0x0);
  fVar5 = FLinearColor::sRGBToLinearTable[pbVar22[2]];
  fVar6 = FLinearColor::sRGBToLinearTable[pbVar22[1]];
  fVar7 = FLinearColor::sRGBToLinearTable[*pbVar22];
  fVar25 = (float)pbVar22[3] * fVar25;
  if ((void *)local_c4._4_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c4._4_8_);
  }
  if (((fVar1 != FLinearColor::Yellow.field0_0x0._s_0.R) ||
      (fVar2 != FLinearColor::Yellow.field0_0x0._s_0.G)) ||
     ((fVar3 != FLinearColor::Yellow.field0_0x0._s_0.B ||
      (fVar23 != FLinearColor::Yellow.field0_0x0._s_0.A)))) {
    pFVar21 = FAutomationTestFramework::Get();
    pFVar8 = pFVar21->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)(local_c4 + 4),L"Condition failed");
    (*pcVar9)(pFVar8,local_c4 + 4,0);
    if ((void *)local_c4._4_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c4._4_8_);
    }
  }
  fVar19 = local_res18[0];
  if (((local_res20 != FLinearColor::Green.field0_0x0._s_0.R) ||
      (fVar4 != FLinearColor::Green.field0_0x0._s_0.G)) ||
     ((local_res18[0] != FLinearColor::Green.field0_0x0._s_0.B ||
      (fVar24 != FLinearColor::Green.field0_0x0._s_0.A)))) {
    pFVar21 = FAutomationTestFramework::Get();
    pFVar8 = pFVar21->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)(local_c4 + 4),L"Condition failed");
    (*pcVar9)(pFVar8,local_c4 + 4,0);
    if ((void *)local_c4._4_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c4._4_8_);
    }
  }
  if ((((fVar5 != FLinearColor::Blue.field0_0x0._s_0.R) ||
       (fVar6 != FLinearColor::Blue.field0_0x0._s_0.G)) ||
      (fVar7 != FLinearColor::Blue.field0_0x0._s_0.B)) ||
     (fVar25 != FLinearColor::Blue.field0_0x0._s_0.A)) {
    pFVar21 = FAutomationTestFramework::Get();
    pFVar8 = pFVar21->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)(local_c4 + 4),L"Condition failed");
    (*pcVar9)(pFVar8,local_c4 + 4,0);
    if ((void *)local_c4._4_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c4._4_8_);
    }
  }
  if (((fVar5 == fVar1) && (fVar6 == fVar2)) && ((fVar7 == fVar3 && (fVar25 == fVar23)))) {
    pFVar21 = FAutomationTestFramework::Get();
    pFVar8 = pFVar21->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)(local_c4 + 4),L"Condition failed");
    (*pcVar9)(pFVar8,local_c4 + 4,0);
    if ((void *)local_c4._4_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c4._4_8_);
    }
  }
  if (((local_res20 == fVar1) && (fVar4 == fVar2)) && ((fVar19 == fVar3 && (fVar24 == fVar23)))) {
    pFVar21 = FAutomationTestFramework::Get();
    pFVar8 = pFVar21->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)(local_c4 + 4),L"Condition failed");
    (*pcVar9)(pFVar8,local_c4 + 4,0);
    if ((void *)local_c4._4_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c4._4_8_);
    }
  }
  return;
}

