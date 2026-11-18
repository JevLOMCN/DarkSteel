// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141472580

EAutomationTestFlags __thiscall FColorSpaceTest::GetTestFlags(FColorSpaceTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141472590

bool __thiscall FColorSpaceTest::IsStressTest(FColorSpaceTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414725a0

uint __thiscall FColorSpaceTest::GetRequiredDeviceNum(FColorSpaceTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414725b0

FString * __thiscall
FColorSpaceTest::GetTestSourceFileName(FColorSpaceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ColorManagement\\Tests\\ColorManagementTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1414725e0

int __thiscall FColorSpaceTest::GetTestSourceFileLine(FColorSpaceTest *this)

{
  return 0x119;
}

// GetTests @ 1414725f0

/* WARNING: Removing unreachable block (ram,0x00014147276e) */

void __thiscall
FColorSpaceTest::GetTests
          (FColorSpaceTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141472790

bool __thiscall FColorSpaceTest::RunTest(FColorSpaceTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1414727c0

FString * __thiscall
FColorSpaceTest::GetBeautifiedTestName(FColorSpaceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FColorSpaceTest @ 14147ce80

FColorSpaceTest * __thiscall
FColorSpaceTest::FColorSpaceTest(FColorSpaceTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FColorSpaceTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[EditorContext][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::ColorManagement::ColorSpace");
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
  ::FString::FString(&local_18,"[EditorContext][EngineFilter]");
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

// TestBody @ 1414b2420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FColorSpaceTest::TestBody(FColorSpaceTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  double dVar3;
  longlong lVar4;
  FAutomationTestFramework *pFVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_2a8 [32];
  int local_288;
  FString local_278;
  double local_268 [4];
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  TMatrix<double> local_1e8;
  FColorSpace local_168;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  UE::Color::FColorSpace::FColorSpace(&local_168,sRGB);
  VectorMatrixMultiply(&local_1e8,&local_168.RgbToXYZ,&local_168.XYZToRgb);
  lVar8 = 0;
  local_268[2] = local_1e8.M[0][2];
  local_268[3] = local_1e8.M[0][3];
  local_268[0] = local_1e8.M[0][0];
  local_268[1] = local_1e8.M[0][1];
  local_238 = local_1e8.M[1][2];
  dStack_230 = local_1e8.M[1][3];
  local_248 = local_1e8.M[1][0];
  dStack_240 = local_1e8.M[1][1];
  local_218 = local_1e8.M[2][2];
  dStack_210 = local_1e8.M[2][3];
  local_228 = local_1e8.M[2][0];
  dStack_220 = local_1e8.M[2][1];
  local_1f8 = local_1e8.M[3][2];
  dStack_1f0 = local_1e8.M[3][3];
  local_208 = local_1e8.M[3][0];
  dStack_200 = local_1e8.M[3][1];
  local_1e8.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_1e8.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_1e8.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_1e8.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_1e8.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_1e8.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_1e8.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  local_1e8.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_1e8.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_1e8.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_1e8.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_1e8.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_1e8.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_1e8.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_1e8.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_1e8.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
  do {
    iVar7 = 0;
    lVar6 = 0;
    lVar4 = lVar8;
    do {
      dVar3 = *(double *)((longlong)local_268 + lVar4) -
              *(double *)((longlong)local_1e8.M[0] + lVar4);
      uVar9 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar10 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar10,uVar9) &&
          (double)CONCAT44(uVar10,uVar9) != __real_3e45798ee2308c3a) {
        if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
          local_288 = iVar7;
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                     (FLogCategoryBase *)&LogUnrealColorManagementTest);
        }
        pFVar5 = FAutomationTestFramework::Get();
        pFVar1 = pFVar5->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_278,
                           L"Identity color space conversion to itself should match identity");
        (*pcVar2)(pFVar1,&local_278,0);
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
        }
        goto LAB_1414b25ce;
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < 4);
    lVar8 = lVar8 + 0x20;
  } while (lVar8 < 0x80);
LAB_1414b25ce:
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_278,L"RgbToXyzConversionMatrices");
  (*pcVar2)(pFVar1,&local_278,0,0);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  TestRgbToXyzConversionMatrices();
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_278,L"ColorSpaceTransforms");
  (*pcVar2)(pFVar1,&local_278,0,0);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  TestColorSpaceTransforms(None);
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_278,L"ColorSpaceTransforms_Bradford");
  (*pcVar2)(pFVar1,&local_278,0,0);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  TestColorSpaceTransforms(Bradford);
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_278,L"AppliedColorTransforms");
  (*pcVar2)(pFVar1,&local_278,0,0);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  TestAppliedColorTransforms();
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_278,L"Luminance");
  (*pcVar2)(pFVar1,&local_278,0,0);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  TestLuminance();
  return;
}

