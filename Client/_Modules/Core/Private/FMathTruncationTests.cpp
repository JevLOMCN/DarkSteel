// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 34

// GetTestFlags @ 141c60020

EAutomationTestFlags __thiscall FMathTruncationTests::GetTestFlags(FMathTruncationTests *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c60030

bool __thiscall FMathTruncationTests::IsStressTest(FMathTruncationTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c60040

uint __thiscall FMathTruncationTests::GetRequiredDeviceNum(FMathTruncationTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c60050

FString * __thiscall
FMathTruncationTests::GetTestSourceFileName
          (FMathTruncationTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Math\\UnrealMathTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c60080

int __thiscall FMathTruncationTests::GetTestSourceFileLine(FMathTruncationTests *this)

{
  return 0x1167;
}

// GetTests @ 141c60090

/* WARNING: Removing unreachable block (ram,0x000141c6020e) */

void __thiscall
FMathTruncationTests::GetTests
          (FMathTruncationTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c60230

bool __thiscall FMathTruncationTests::RunTest(FMathTruncationTests *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c60260

FString * __thiscall
FMathTruncationTests::GetBeautifiedTestName
          (FMathTruncationTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 141c61350

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_10>::<lambda_invoker_cdecl>(float param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + __real_3f000000);
  return (float)(int)(iVar1 - (uint)(param_1 + __real_3f000000 < (float)iVar1));
}

// <lambda_invoker_cdecl> @ 141c61400

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_11>::<lambda_invoker_cdecl>(float param_1)

{
  undefined1 in_register_00001204 [12];
  undefined1 auVar1 [16];
  
  auVar1._4_12_ = in_register_00001204;
  auVar1._0_4_ = param_1;
  auVar1 = roundps(auVar1,ZEXT416((uint)param_1),3);
  return auVar1._0_4_;
}

// <lambda_invoker_cdecl> @ 141c61420

void `FMathTruncationTests::TestBody'::__l2::<lambda_12>::<lambda_invoker_cdecl>(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141c61420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  truncf();
  return;
}

// <lambda_invoker_cdecl> @ 141c61430

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_13>::<lambda_invoker_cdecl>(float param_1)

{
  undefined1 in_register_00001204 [12];
  undefined1 auVar1 [16];
  
  auVar1._4_12_ = in_register_00001204;
  auVar1._0_4_ = param_1;
  auVar1 = roundps(auVar1,ZEXT416((uint)param_1),2);
  return auVar1._0_4_;
}

// <lambda_invoker_cdecl> @ 141c61450

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_14>::<lambda_invoker_cdecl>(float param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  int iVar2;
  undefined1 in_register_00001204 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar3._4_12_ = in_register_00001204;
  auVar3._0_4_ = param_1;
  iVar2 = (int)param_1;
  if ((iVar2 != -0x80000000) && ((float)iVar2 != param_1)) {
    auVar5._0_8_ = auVar3._0_8_;
    auVar5._8_4_ = in_register_00001204._0_4_;
    auVar5._12_4_ = in_register_00001204._0_4_;
    auVar4._8_8_ = auVar5._8_8_;
    auVar4._4_4_ = param_1;
    auVar4._0_4_ = param_1;
    uVar1 = movmskps(in_EAX,auVar4);
    auVar3 = ZEXT416((uint)(float)(int)(iVar2 + (uVar1 & 1 ^ 1)));
  }
  return auVar3._0_4_;
}

// <lambda_invoker_cdecl> @ 141c61490

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_15>::<lambda_invoker_cdecl>(float param_1)

{
  undefined1 in_register_00001204 [12];
  undefined1 auVar1 [16];
  
  auVar1._4_12_ = in_register_00001204;
  auVar1._0_4_ = param_1;
  auVar1 = roundps(auVar1,ZEXT416((uint)param_1),1);
  return auVar1._0_4_;
}

// <lambda_invoker_cdecl> @ 141c614b0

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_16>::<lambda_invoker_cdecl>(float param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  int iVar2;
  undefined1 in_register_00001204 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar3._4_12_ = in_register_00001204;
  auVar3._0_4_ = param_1;
  iVar2 = (int)param_1;
  if ((iVar2 != -0x80000000) && ((float)iVar2 != param_1)) {
    auVar5._0_8_ = auVar3._0_8_;
    auVar5._8_4_ = in_register_00001204._0_4_;
    auVar5._12_4_ = in_register_00001204._0_4_;
    auVar4._8_8_ = auVar5._8_8_;
    auVar4._4_4_ = param_1;
    auVar4._0_4_ = param_1;
    uVar1 = movmskps(in_EAX,auVar4);
    auVar3 = ZEXT416((uint)(float)(int)(iVar2 - (uVar1 & 1)));
  }
  return auVar3._0_4_;
}

// <lambda_invoker_cdecl> @ 141c614f0

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_17>::<lambda_invoker_cdecl>(float param_1)

{
  undefined1 in_register_00001204 [12];
  undefined1 auVar1 [16];
  
  auVar1._0_4_ = param_1 + __real_3f000000;
  auVar1._4_12_ = in_register_00001204;
  auVar1 = roundps(auVar1,ZEXT416((uint)auVar1._0_4_),1);
  return auVar1._0_4_;
}

// <lambda_invoker_cdecl> @ 141c61510

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_18>::<lambda_invoker_cdecl>(float param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  int iVar2;
  undefined1 in_register_00001204 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar3._0_4_ = param_1 + __real_3f000000;
  auVar3._4_12_ = in_register_00001204;
  iVar2 = (int)auVar3._0_4_;
  if ((iVar2 != -0x80000000) && ((float)iVar2 != auVar3._0_4_)) {
    auVar5._0_8_ = auVar3._0_8_;
    auVar5._8_4_ = in_register_00001204._0_4_;
    auVar5._12_4_ = in_register_00001204._0_4_;
    auVar4._8_8_ = auVar5._8_8_;
    auVar4._4_4_ = auVar3._0_4_;
    auVar4._0_4_ = auVar3._0_4_;
    uVar1 = movmskps(in_EAX,auVar4);
    auVar3 = ZEXT416((uint)(float)(int)(iVar2 - (uVar1 & 1)));
  }
  return auVar3._0_4_;
}

// <lambda_invoker_cdecl> @ 141c61550

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_19>::<lambda_invoker_cdecl>(float param_1)

{
  undefined1 in_register_00001204 [12];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._4_12_ = in_register_00001204;
  auVar1._0_4_ = param_1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (double)param_1;
  auVar2 = roundpd(auVar1,auVar2,3);
  return (float)auVar2._0_8_;
}

// <lambda_invoker_cdecl> @ 141c61570

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_20>::<lambda_invoker_cdecl>(float param_1)

{
  double dVar1;
  
  dVar1 = (double)trunc((double)param_1);
  return (float)dVar1;
}

// <lambda_invoker_cdecl> @ 141c61590

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_21>::<lambda_invoker_cdecl>(float param_1)

{
  undefined1 in_register_00001204 [12];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._4_12_ = in_register_00001204;
  auVar1._0_4_ = param_1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (double)param_1;
  auVar2 = roundpd(auVar1,auVar2,2);
  return (float)auVar2._0_8_;
}

// <lambda_invoker_cdecl> @ 141c615b0

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_22>::<lambda_invoker_cdecl>(float param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint uVar3;
  longlong lVar4;
  
  dVar2 = (double)param_1;
  lVar4 = (longlong)param_1;
  if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar2)) {
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = dVar2;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    uVar3 = movmskpd(0,auVar1);
    dVar2 = (double)(longlong)(lVar4 + (ulonglong)(uVar3 & 1 ^ 1));
  }
  return (float)dVar2;
}

// <lambda_invoker_cdecl> @ 141c61600

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_23>::<lambda_invoker_cdecl>(float param_1)

{
  undefined1 in_register_00001204 [12];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._4_12_ = in_register_00001204;
  auVar1._0_4_ = param_1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (double)param_1;
  auVar2 = roundpd(auVar1,auVar2,1);
  return (float)auVar2._0_8_;
}

// <lambda_invoker_cdecl> @ 141c61620

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_24>::<lambda_invoker_cdecl>(float param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint uVar3;
  longlong lVar4;
  
  dVar2 = (double)param_1;
  lVar4 = (longlong)param_1;
  if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar2)) {
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = dVar2;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    uVar3 = movmskpd(0,auVar1);
    dVar2 = (double)(longlong)(lVar4 - (ulonglong)(uVar3 & 1));
  }
  return (float)dVar2;
}

// <lambda_invoker_cdecl> @ 141c61670

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_25>::<lambda_invoker_cdecl>(float param_1)

{
  undefined1 in_register_00001204 [12];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._8_8_ = in_register_00001204._4_8_;
  auVar1._0_8_ = (double)(param_1 + __real_3f000000);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = auVar1._0_8_;
  auVar2 = roundpd(auVar1,auVar2,1);
  return (float)auVar2._0_8_;
}

// <lambda_invoker_cdecl> @ 141c616a0

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_26>::<lambda_invoker_cdecl>(float param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint uVar3;
  longlong lVar4;
  
  dVar2 = (double)(param_1 + __real_3f000000);
  lVar4 = (longlong)(param_1 + __real_3f000000);
  if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar2)) {
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = dVar2;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    uVar3 = movmskpd(0,auVar1);
    dVar2 = (double)(longlong)(lVar4 - (ulonglong)(uVar3 & 1));
  }
  return (float)dVar2;
}

// <lambda_invoker_cdecl> @ 141c617a0

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_3>::<lambda_invoker_cdecl>(float param_1)

{
  return (float)(int)param_1;
}

// <lambda_invoker_cdecl> @ 141c61860

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_4>::<lambda_invoker_cdecl>(float param_1)

{
  return (float)(int)param_1;
}

// <lambda_invoker_cdecl> @ 141c61920

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_5>::<lambda_invoker_cdecl>(float param_1)

{
  return (float)-((int)ROUND(__real_bf000000 - (param_1 + param_1)) >> 1);
}

// <lambda_invoker_cdecl> @ 141c619c0

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_6>::<lambda_invoker_cdecl>(float param_1)

{
  return (float)(int)((uint)((float)(int)param_1 < param_1) + (int)param_1);
}

// <lambda_invoker_cdecl> @ 141c61a60

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_7>::<lambda_invoker_cdecl>(float param_1)

{
  return (float)((int)ROUND((param_1 + param_1) - __real_3f000000) >> 1);
}

// <lambda_invoker_cdecl> @ 141c61af0

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_8>::<lambda_invoker_cdecl>(float param_1)

{
  return (float)(int)((int)param_1 - (uint)(param_1 < (float)(int)param_1));
}

// <lambda_invoker_cdecl> @ 141c61ba0

float __cdecl
`FMathTruncationTests::TestBody'::__l2::<lambda_9>::<lambda_invoker_cdecl>(float param_1)

{
  return (float)((int)ROUND(param_1 + param_1 + __real_3f000000) >> 1);
}

// FMathTruncationTests @ 141c8c650

FMathTruncationTests * __thiscall
FMathTruncationTests::FMathTruncationTests(FMathTruncationTests *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FMathTruncationTests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Math::TruncationFunctions");
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

// TestBody @ 141ca3fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMathTruncationTests::TestBody(FMathTruncationTests *this,FString *param_1)

{
  float fVar1;
  double dVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  FAutomationTestFramework *pFVar12;
  float *pfVar13;
  double *pdVar14;
  int *piVar15;
  longlong lVar16;
  float fVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 extraout_XMM0_01 [16];
  undefined1 auVar23 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 extraout_XMM0_02 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auStack_778 [32];
  double local_758;
  LARGE_INTEGER local_748 [2];
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  double local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  wchar_t local_1a8 [128];
  ulonglong local_a8;
  
  fVar35 = __real_cf000000;
  fVar8 = __real_4f000000;
  fVar9 = __real_3f000000;
  auVar28._0_4_ = __real_bf000000;
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_778;
  local_6c8 = ___xmm_c0000000bf800000bf800000bfc00000;
  uStack_6c0 = _UNK_15076c7b8;
  local_6a8 = ___xmm_80000000bf400000bf800000bf800000;
  uStack_6a0 = _UNK_15076c598;
  local_6b8 = ___xmm_bf800000bf800000bf800000bf800000;
  uStack_6b0 = _UNK_15076c668;
  local_688 = ___xmm_80000000bf8000008000000080000000;
  uStack_680 = _UNK_15076c5a8;
  local_698 = ___xmm_bf000000bf800000bf80000080000000;
  uStack_690 = _UNK_15076c608;
  local_668 = ___xmm_00000000000000000000000080000000;
  uStack_660 = _UNK_15076ac18;
  local_678 = ___xmm_bf8000008000000080000000be800000;
  uStack_670 = _UNK_15076c658;
  local_648 = ___xmm_3f00000000000000000000003f800000;
  uStack_640 = _UNK_15076b0f8;
  local_658 = ___xmm_000000003e8000000000000000000000;
  uStack_650 = _UNK_15076ae08;
  local_628 = ___xmm_000000003f800000000000003f400000;
  uStack_620 = _UNK_15076ae18;
  local_638 = ___xmm_3f800000000000003f80000000000000;
  uStack_630 = _UNK_15076b198;
  local_608 = ___xmm_3f8000003fc000003f8000003f800000;
  uStack_600 = _UNK_15076b2b8;
  local_618 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_610 = _UNK_15076b1f8;
  local_5e8 = ___xmm_50800000508000005080000050800000;
  uStack_5e0 = _UNK_15076c528;
  local_5f8 = ___xmm_50800000400000003f80000040000000;
  uStack_5f0 = _UNK_15076c518;
  pfVar13 = (float *)&uStack_6c0;
  local_5c8 = ___xmm_498000084980000049800005d0800000;
  uStack_5c0 = _UNK_15076c4d8;
  local_5d8 = ___xmm_d0800000d0800000d0800000d0800000;
  uStack_5d0 = _UNK_15076cab8;
  piVar15 = (int *)&uStack_590;
  local_598 = ___xmm_fffffffffffffffeffffffffffffffff;
  uStack_590 = _UNK_15076cb58;
  local_5b8 = ___xmm_c9800000c98000054980000849800000;
  uStack_5b0 = _UNK_15076ca88;
  lVar16 = 0xf;
  local_578 = ___xmm_ffffffffffffffff0000000000000000;
  uStack_570 = _UNK_15076cb68;
  local_588 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_580 = _UNK_15060db28;
  local_548 = 0;
  uStack_540 = 0;
  local_568 = ___xmm_00000000ffffffff0000000000000000;
  uStack_560 = _UNK_15076aff8;
  local_558 = ___xmm_00000000ffffffff0000000000000000;
  uStack_550 = _UNK_15076aff8;
  local_528 = ___xmm_00000001000000000000000100000000;
  uStack_520 = _UNK_15076b018;
  local_518 = ___xmm_00000001000000000000000100000000;
  uStack_510 = _UNK_15076b018;
  local_538 = __xmm_00000000000000000000000100000000;
  uStack_530 = _UNK_15076ac28;
  local_508 = ___xmm_00000001000000010000000100000001;
  uStack_500 = _UNK_150631da8;
  local_4f8 = ___xmm_00000002000000010000000200000001;
  uStack_4f0 = _UNK_15076b038;
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_4d8 = 0;
  uStack_4d0 = 0;
  local_4c8 = ___xmm_00100001001000000010000100100000;
  uStack_4c0 = _UNK_15076b078;
  local_5a8 = 0xc9800000;
  local_5a4 = 0xc9800008;
  local_5a0 = 0xc9800008;
  local_4b8 = ___xmm_ffefffffffeffffffff00000fff00000;
  uStack_4b0 = _UNK_15076cad8;
  do {
    fVar1 = pfVar13[-2];
    auVar19 = roundps(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1),3);
    if (auVar19._0_4_ != pfVar13[-1]) {
      pFVar12 = FAutomationTestFramework::Get();
      local_758 = (double)fVar1;
      pFVar3 = pFVar12->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      TCString<wchar_t>::SnprintfImpl(local_1a8,0x80,L"%s(%lf)");
      ::FString::FString((FString *)&local_748[0].s,local_1a8);
      auVar19._0_8_ = (*pcVar4)(pFVar3,local_748,0);
      auVar19._8_8_ = extraout_XMM0_Qb;
      if ((void *)local_748[0].QuadPart != (void *)0x0) {
        FMemory::Free((void *)local_748[0]);
        auVar19 = extraout_XMM0;
      }
    }
    auVar20 = roundps(auVar19,ZEXT416((uint)fVar1),2);
    if (auVar20._0_4_ != *pfVar13) {
      pFVar12 = FAutomationTestFramework::Get();
      local_758 = (double)fVar1;
      pFVar3 = pFVar12->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      TCString<wchar_t>::SnprintfImpl(local_1a8,0x80,L"%s(%lf)");
      ::FString::FString(&local_6f8,local_1a8);
      auVar20._0_8_ = (*pcVar4)(pFVar3,&local_6f8,0);
      auVar20._8_8_ = extraout_XMM0_Qb_00;
      if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
        auVar20 = extraout_XMM0_00;
      }
    }
    auVar19 = roundps(auVar20,ZEXT416((uint)fVar1),1);
    if (auVar19._0_4_ != pfVar13[1]) {
      pFVar12 = FAutomationTestFramework::Get();
      local_758 = (double)fVar1;
      pFVar3 = pFVar12->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      TCString<wchar_t>::SnprintfImpl(local_1a8,0x80,L"%s(%lf)");
      ::FString::FString(&local_6e8,local_1a8);
      (*pcVar4)(pFVar3,&local_6e8,0);
      if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
      }
    }
    auVar19 = roundps(ZEXT416((uint)(fVar1 + fVar9)),ZEXT416((uint)(fVar1 + fVar9)),1);
    if (auVar19._0_4_ != pfVar13[2]) {
      pFVar12 = FAutomationTestFramework::Get();
      local_758 = (double)fVar1;
      pFVar3 = pFVar12->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      TCString<wchar_t>::SnprintfImpl(local_1a8,0x80,L"%s(%lf)");
      ::FString::FString(&local_6d8,local_1a8);
      (*pcVar4)(pFVar3,&local_6d8,0);
      if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
      }
    }
    if ((fVar35 <= fVar1) && (fVar1 <= fVar8)) {
      if ((int)fVar1 != piVar15[-2]) {
        pFVar12 = FAutomationTestFramework::Get();
        local_758 = (double)fVar1;
        pFVar3 = pFVar12->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        TCString<wchar_t>::SnprintfImpl(local_1a8,0x80,L"%s(%lf)");
        ::FString::FString(&local_738,local_1a8);
        (*pcVar4)(pFVar3,&local_738,0);
        if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_738.Data.AllocatorInstance.Data);
        }
      }
      auVar31._0_4_ = fVar1 + fVar1;
      if (-((int)ROUND(auVar28._0_4_ - auVar31._0_4_) >> 1) != piVar15[-1]) {
        pFVar12 = FAutomationTestFramework::Get();
        local_758 = (double)fVar1;
        pFVar3 = pFVar12->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        TCString<wchar_t>::SnprintfImpl(local_1a8,0x80,L"%s(%lf)");
        ::FString::FString(&local_728,local_1a8);
        (*pcVar4)(pFVar3,&local_728,0);
        if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_728.Data.AllocatorInstance.Data);
        }
      }
      if ((int)ROUND(auVar31._0_4_ - fVar9) >> 1 != *piVar15) {
        pFVar12 = FAutomationTestFramework::Get();
        local_758 = (double)fVar1;
        pFVar3 = pFVar12->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        TCString<wchar_t>::SnprintfImpl(local_1a8,0x80,L"%s(%lf)");
        ::FString::FString(&local_718,local_1a8);
        (*pcVar4)(pFVar3,&local_718,0);
        if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_718.Data.AllocatorInstance.Data);
        }
      }
      if ((int)ROUND(auVar31._0_4_ + fVar9) >> 1 != piVar15[1]) {
        pFVar12 = FAutomationTestFramework::Get();
        local_758 = (double)fVar1;
        pFVar3 = pFVar12->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        TCString<wchar_t>::SnprintfImpl(local_1a8,0x80,L"%s(%lf)");
        ::FString::FString(&local_708,local_1a8);
        (*pcVar4)(pFVar3,&local_708,0);
        if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_708.Data.AllocatorInstance.Data);
        }
      }
    }
    dVar7 = __real_3fe0000000000000;
    pfVar13 = pfVar13 + 5;
    piVar15 = piVar15 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  local_4a8 = ___xmm_bff0000000000000bff8000000000000;
  uStack_4a0 = _UNK_15076c728;
  local_488 = ___xmm_bff0000000000000bff0000000000000;
  uStack_480 = _UNK_15076c718;
  local_478 = ___xmm_bff0000000000000bff0000000000000;
  uStack_470 = _UNK_15076c718;
  local_468 = ___xmm_bff0000000000000bff0000000000000;
  uStack_460 = _UNK_15076c718;
  local_458 = ___xmm_8000000000000000bfe8000000000000;
  uStack_450 = _UNK_15076c568;
  local_438 = ___xmm_bfe0000000000000bff0000000000000;
  uStack_430 = _UNK_15076c6e8;
  local_418 = ___xmm_8000000000000000bff0000000000000;
  uStack_410 = _UNK_15076c578;
  local_3e8 = ___xmm_00000000000000008000000000000000;
  uStack_3e0 = _UNK_150689528;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3b8 = ___xmm_00000000000000003fd0000000000000;
  uStack_3b0 = _UNK_15076ac88;
  local_398 = ___xmm_3fe00000000000000000000000000000;
  uStack_390 = _UNK_15076b778;
  local_498 = ___xmm_c000000000000000bff0000000000000;
  uStack_490 = _UNK_15076c798;
  local_368 = ___xmm_00000000000000003fe8000000000000;
  uStack_360 = _UNK_15076aca8;
  local_428 = __xmm_80000000000000008000000000000000;
  uStack_420 = _UNK_15066df78;
  local_348 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_340 = _UNK_150689688;
  local_338 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_330 = _UNK_150689688;
  local_328 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_320 = _UNK_150689688;
  local_408 = ___xmm_8000000000000000bfd0000000000000;
  uStack_400 = _UNK_15076c558;
  local_318 = ___xmm_3ff00000000000003ff8000000000000;
  uStack_310 = _UNK_15076b818;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_2f8 = ___xmm_42100000000000004000000000000000;
  uStack_2f0 = _UNK_15076c2d8;
  local_388 = ___xmm_3ff00000000000000000000000000000;
  uStack_380 = _UNK_15061cbc8;
  local_378 = ___xmm_3ff00000000000000000000000000000;
  uStack_370 = _UNK_15061cbc8;
  local_2c8 = ___xmm_c210000000000000c210000000000000;
  uStack_2c0 = _UNK_15076c958;
  local_2b8 = ___xmm_c210000000000000c210000000000000;
  uStack_2b0 = _UNK_15076c958;
  local_308 = ___xmm_3ff00000000000004000000000000000;
  uStack_300 = _UNK_15076b828;
  local_2a8 = ___xmm_413000009999999ac210000000000000;
  uStack_2a0 = _UNK_15076c1f8;
  local_2e8 = ___xmm_42100000000000004210000000000000;
  uStack_2e0 = _UNK_15076c2e8;
  local_2d8 = ___xmm_42100000000000004210000000000000;
  uStack_2d0 = _UNK_15076c2e8;
  local_278 = ___xmm_c130000000000000c13000009999999a;
  uStack_270 = _UNK_15076c938;
  local_298 = ___xmm_41300001000000004130000000000000;
  uStack_290 = _UNK_15076c208;
  local_288 = ___xmm_41300001000000004130000000000000;
  uStack_280 = _UNK_15076c208;
  local_258 = ___xmm_4410000000000000c130000100000000;
  uStack_250 = _UNK_15076c488;
  local_268 = ___xmm_c130000100000000c130000000000000;
  uStack_260 = _UNK_15076c948;
  local_228 = ___xmm_c410000000000000c410000000000000;
  uStack_220 = _UNK_15076ca38;
  local_218 = ___xmm_c410000000000000c410000000000000;
  uStack_210 = _UNK_15076ca38;
  local_248 = ___xmm_44100000000000004410000000000000;
  uStack_240 = _UNK_15076c478;
  local_238 = ___xmm_44100000000000004410000000000000;
  uStack_230 = _UNK_15076c478;
  local_208 = ___xmm_42f000000000000ac410000000000000;
  uStack_200 = _UNK_15076c3b8;
  local_448 = ___xmm_bff00000000000008000000000000000;
  uStack_440 = _UNK_15076c708;
  local_3f8 = ___xmm_bff00000000000008000000000000000;
  uStack_3f0 = _UNK_15076c708;
  local_1f8 = ___xmm_42f000000000001042f0000000000000;
  uStack_1f0 = _UNK_15076c3c8;
  local_1e8 = ___xmm_42f000000000001042f0000000000000;
  uStack_1e0 = _UNK_15076c3c8;
  local_1d8 = ___xmm_c2f0000000000000c2f000000000000a;
  uStack_1d0 = _UNK_15076c9d8;
  local_3a8 = ___xmm_00000000000000003ff0000000000000;
  uStack_3a0 = _UNK_150689518;
  local_358 = ___xmm_00000000000000003ff0000000000000;
  uStack_350 = _UNK_150689518;
  pdVar14 = &local_498;
  lVar16 = 0x13;
  local_1b8 = __real_c2f0000000000010;
  local_1c8 = ___xmm_c2f0000000000010c2f0000000000000;
  uStack_1c0 = _UNK_15076c9e8;
  do {
    dVar2 = pdVar14[-2];
    auVar21._8_8_ = 0;
    auVar21._0_8_ = dVar2;
    auVar22 = roundpd(auVar21,auVar21,3);
    if (auVar22._0_8_ != pdVar14[-1]) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar3 = pFVar12->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      local_758 = dVar2;
      TCString<wchar_t>::SnprintfImpl(local_1a8,0x80,L"%s(%lf)");
      ::FString::FString(&local_708,local_1a8);
      auVar22._0_8_ = (*pcVar4)(pFVar3,&local_708,0);
      auVar22._8_8_ = extraout_XMM0_Qb_01;
      if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_708.Data.AllocatorInstance.Data);
        auVar22 = extraout_XMM0_01;
      }
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar2;
    auVar23 = roundpd(auVar22,auVar5,2);
    if (auVar23._0_8_ != *pdVar14) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar3 = pFVar12->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      local_758 = dVar2;
      TCString<wchar_t>::SnprintfImpl(local_1a8,0x80,L"%s(%lf)");
      ::FString::FString(&local_718,local_1a8);
      auVar23._0_8_ = (*pcVar4)(pFVar3,&local_718,0);
      auVar23._8_8_ = extraout_XMM0_Qb_02;
      if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_718.Data.AllocatorInstance.Data);
        auVar23 = extraout_XMM0_02;
      }
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar2;
    auVar19 = roundpd(auVar23,auVar6,1);
    if (auVar19._0_8_ != pdVar14[1]) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar3 = pFVar12->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      local_758 = dVar2;
      TCString<wchar_t>::SnprintfImpl(local_1a8,0x80,L"%s(%lf)");
      ::FString::FString(&local_728,local_1a8);
      (*pcVar4)(pFVar3,&local_728,0);
      if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_728.Data.AllocatorInstance.Data);
      }
    }
    auVar24._0_8_ = dVar2 + dVar7;
    auVar24._8_8_ = 0;
    auVar19 = roundpd(auVar24,auVar24,1);
    if (auVar19._0_8_ != pdVar14[2]) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar3 = pFVar12->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      local_758 = dVar2;
      TCString<wchar_t>::SnprintfImpl(local_1a8,0x80,L"%s(%lf)");
      ::FString::FString(&local_738,local_1a8);
      (*pcVar4)(pFVar3,&local_738,0);
      if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_738.Data.AllocatorInstance.Data);
      }
    }
    pdVar14 = pdVar14 + 5;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  QueryPerformanceCounter(local_748);
  fVar1 = __real_4b189680;
  fVar35 = __real_3f19999a;
  fVar8 = __real_3f800000;
  auVar31._0_4_ = __real_3f19999a;
  do {
    iVar10 = (int)auVar31._0_4_;
    auVar31._0_4_ = auVar31._0_4_ + __real_3f800000;
    ForceCompileFloat = (float)iVar10 + ForceCompileFloat;
  } while (auVar31._0_4_ < __real_4b189680);
  QueryPerformanceCounter(local_748);
  QueryPerformanceCounter(local_748);
  dVar7 = (double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  auVar31._0_4_ = fVar35;
  do {
    iVar10 = (int)auVar31._0_4_;
    auVar31._0_4_ = auVar31._0_4_ + fVar8;
    ForceCompileFloat = (float)iVar10 + ForceCompileFloat;
  } while (auVar31._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  dVar2 = __real_3fb9999999999999;
  if (4 < (byte)LogInit._0_1_) {
    local_758 = ((double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7) *
                __real_3fb9999999999999;
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u__s__FMath_time__15074c708,
               (FLogCategoryBase *)&LogInit);
  }
  QueryPerformanceCounter(local_748);
  auVar31._0_4_ = fVar35;
  do {
    fVar17 = auVar31._0_4_ + auVar31._0_4_;
    auVar31._0_4_ = auVar31._0_4_ + fVar8;
    ForceCompileFloat = ForceCompileFloat - (float)((int)ROUND(auVar28._0_4_ - fVar17) >> 1);
  } while (auVar31._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  QueryPerformanceCounter(local_748);
  dVar7 = (double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  auVar28._0_4_ = fVar35;
  do {
    auVar31._0_4_ = auVar28._0_4_ + fVar8;
    ForceCompileFloat =
         (float)(int)((uint)((float)(int)auVar28._0_4_ < auVar28._0_4_) + (int)auVar28._0_4_) +
         ForceCompileFloat;
    auVar28._0_4_ = auVar31._0_4_;
  } while (auVar31._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  if (4 < (byte)LogInit._0_1_) {
    local_758 = ((double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7) *
                dVar2;
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u__s__FMath_time__15074c708,
               (FLogCategoryBase *)&LogInit);
  }
  QueryPerformanceCounter(local_748);
  auVar28._0_4_ = fVar35;
  do {
    auVar31._0_4_ = auVar28._0_4_ + auVar28._0_4_;
    auVar28._0_4_ = auVar28._0_4_ + fVar8;
    ForceCompileFloat = (float)((int)ROUND(auVar31._0_4_ - fVar9) >> 1) + ForceCompileFloat;
  } while (auVar28._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  QueryPerformanceCounter(local_748);
  dVar7 = (double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  auVar28._0_4_ = fVar35;
  do {
    auVar31._0_4_ = auVar28._0_4_ + fVar8;
    ForceCompileFloat =
         (float)(int)((int)auVar28._0_4_ - (uint)(auVar28._0_4_ < (float)(int)auVar28._0_4_)) +
         ForceCompileFloat;
    auVar28._0_4_ = auVar31._0_4_;
  } while (auVar31._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  if (4 < (byte)LogInit._0_1_) {
    local_758 = ((double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7) *
                dVar2;
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u__s__FMath_time__15074c708,
               (FLogCategoryBase *)&LogInit);
  }
  QueryPerformanceCounter(local_748);
  auVar28._0_4_ = fVar35;
  do {
    auVar31._0_4_ = auVar28._0_4_ + auVar28._0_4_;
    auVar28._0_4_ = auVar28._0_4_ + fVar8;
    ForceCompileFloat = (float)((int)ROUND(auVar31._0_4_ + fVar9) >> 1) + ForceCompileFloat;
  } while (auVar28._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  QueryPerformanceCounter(local_748);
  dVar7 = (double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  auVar28._0_4_ = fVar35;
  do {
    auVar31._0_4_ = auVar28._0_4_ + fVar8;
    iVar10 = (int)(auVar28._0_4_ + fVar9);
    ForceCompileFloat =
         (float)(int)(iVar10 - (uint)(auVar28._0_4_ + fVar9 < (float)iVar10)) + ForceCompileFloat;
    auVar28._0_4_ = auVar31._0_4_;
  } while (auVar31._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  if (4 < (byte)LogInit._0_1_) {
    local_758 = ((double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7) *
                dVar2;
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u__s__FMath_time__15074c708,
               (FLogCategoryBase *)&LogInit);
  }
  QueryPerformanceCounter(local_748);
  auVar28._0_4_ = fVar35;
  do {
    auVar19 = ZEXT416((uint)auVar28._0_4_);
    auVar28._0_4_ = auVar28._0_4_ + fVar8;
    auVar19 = roundps(auVar19,auVar19,3);
    ForceCompileFloat = auVar19._0_4_ + ForceCompileFloat;
  } while (auVar28._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  QueryPerformanceCounter(local_748);
  dVar7 = (double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  auVar28._0_4_ = fVar35;
  do {
    auVar31._0_4_ = (float)truncf();
    auVar28._0_4_ = auVar28._0_4_ + fVar8;
    ForceCompileFloat = auVar31._0_4_ + ForceCompileFloat;
  } while (auVar28._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  if (4 < (byte)LogInit._0_1_) {
    local_758 = ((double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7) *
                dVar2;
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u__s__FMath_time__15074c708,
               (FLogCategoryBase *)&LogInit);
  }
  QueryPerformanceCounter(local_748);
  auVar28._0_4_ = fVar35;
  do {
    auVar19 = ZEXT416((uint)auVar28._0_4_);
    auVar28._0_4_ = auVar28._0_4_ + fVar8;
    auVar19 = roundps(auVar19,auVar19,2);
    ForceCompileFloat = auVar19._0_4_ + ForceCompileFloat;
  } while (auVar28._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  uVar11 = QueryPerformanceCounter(local_748);
  dVar7 = (double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  auVar28._0_4_ = fVar35;
  do {
    iVar10 = (int)auVar28._0_4_;
    auVar31._0_4_ = auVar28._0_4_;
    if ((iVar10 != -0x80000000) && ((float)iVar10 != auVar28._0_4_)) {
      auVar29._4_4_ = auVar28._0_4_;
      auVar29._0_4_ = auVar28._0_4_;
      auVar29._8_8_ = 0;
      uVar11 = movmskps(uVar11,auVar29);
      uVar11 = uVar11 & 1 ^ 1;
      auVar31._0_4_ = (float)(int)(iVar10 + uVar11);
    }
    auVar28._0_4_ = auVar28._0_4_ + fVar8;
    ForceCompileFloat = auVar31._0_4_ + ForceCompileFloat;
  } while (auVar28._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  if (4 < (byte)LogInit._0_1_) {
    local_758 = ((double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7) *
                dVar2;
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u__s__FMath_time__15074c708,
               (FLogCategoryBase *)&LogInit);
  }
  QueryPerformanceCounter(local_748);
  auVar28._0_4_ = fVar35;
  do {
    auVar19 = ZEXT416((uint)auVar28._0_4_);
    auVar28._0_4_ = auVar28._0_4_ + fVar8;
    auVar19 = roundps(auVar19,auVar19,1);
    ForceCompileFloat = auVar19._0_4_ + ForceCompileFloat;
  } while (auVar28._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  uVar11 = QueryPerformanceCounter(local_748);
  dVar7 = (double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  auVar28._0_4_ = fVar35;
  do {
    iVar10 = (int)auVar28._0_4_;
    auVar31._0_4_ = auVar28._0_4_;
    if ((iVar10 != -0x80000000) && ((float)iVar10 != auVar28._0_4_)) {
      auVar30._4_4_ = auVar28._0_4_;
      auVar30._0_4_ = auVar28._0_4_;
      auVar30._8_8_ = 0;
      uVar11 = movmskps(uVar11,auVar30);
      uVar11 = uVar11 & 1;
      auVar31._0_4_ = (float)(int)(iVar10 - uVar11);
    }
    auVar28._0_4_ = auVar28._0_4_ + fVar8;
    ForceCompileFloat = auVar31._0_4_ + ForceCompileFloat;
  } while (auVar28._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  if (4 < (byte)LogInit._0_1_) {
    local_758 = ((double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7) *
                dVar2;
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u__s__FMath_time__15074c708,
               (FLogCategoryBase *)&LogInit);
  }
  QueryPerformanceCounter(local_748);
  auVar28._0_4_ = fVar35;
  do {
    auVar31._0_4_ = auVar28._0_4_ + fVar9;
    auVar28._0_4_ = auVar28._0_4_ + fVar8;
    auVar19 = roundps(ZEXT416((uint)auVar31._0_4_),ZEXT416((uint)auVar31._0_4_),1);
    ForceCompileFloat = auVar19._0_4_ + ForceCompileFloat;
  } while (auVar28._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  uVar11 = QueryPerformanceCounter(local_748);
  dVar7 = (double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  auVar28._0_4_ = fVar35;
  do {
    auVar31._0_4_ = auVar28._0_4_ + fVar9;
    iVar10 = (int)auVar31._0_4_;
    if ((iVar10 != -0x80000000) && ((float)iVar10 != auVar31._0_4_)) {
      auVar31._4_4_ = auVar31._0_4_;
      auVar31._8_8_ = 0;
      uVar11 = movmskps(uVar11,auVar31);
      uVar11 = uVar11 & 1;
      auVar31._0_4_ = (float)(int)(iVar10 - uVar11);
    }
    auVar28._0_4_ = auVar28._0_4_ + fVar8;
    ForceCompileFloat = auVar31._0_4_ + ForceCompileFloat;
  } while (auVar28._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  if (4 < (byte)LogInit._0_1_) {
    local_758 = ((double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7) *
                dVar2;
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u__s__FMath_time__15074c708,
               (FLogCategoryBase *)&LogInit);
  }
  QueryPerformanceCounter(local_748);
  auVar28._0_4_ = fVar35;
  do {
    auVar25._0_8_ = (double)auVar28._0_4_;
    auVar25._8_8_ = 0;
    auVar28._0_4_ = auVar28._0_4_ + fVar8;
    auVar19 = roundpd(auVar25,auVar25,3);
    ForceCompileFloat = (float)auVar19._0_8_ + ForceCompileFloat;
  } while (auVar28._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  QueryPerformanceCounter(local_748);
  dVar7 = (double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  auVar28._0_4_ = fVar35;
  do {
    dVar18 = (double)trunc((double)auVar28._0_4_);
    auVar28._0_4_ = auVar28._0_4_ + fVar8;
    ForceCompileFloat = (float)dVar18 + ForceCompileFloat;
  } while (auVar28._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  if (4 < (byte)LogInit._0_1_) {
    local_758 = ((double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7) *
                dVar2;
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u__s__FMath_time__15074c708,
               (FLogCategoryBase *)&LogInit);
  }
  QueryPerformanceCounter(local_748);
  auVar28._0_4_ = fVar35;
  do {
    auVar26._0_8_ = (double)auVar28._0_4_;
    auVar26._8_8_ = 0;
    auVar28._0_4_ = auVar28._0_4_ + fVar8;
    auVar19 = roundpd(auVar26,auVar26,2);
    ForceCompileFloat = (float)auVar19._0_8_ + ForceCompileFloat;
  } while (auVar28._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  uVar11 = QueryPerformanceCounter(local_748);
  dVar7 = (double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  auVar28._0_4_ = fVar35;
  do {
    iVar10 = (int)auVar28._0_4_;
    auVar31._0_4_ = auVar28._0_4_;
    if ((iVar10 != -0x80000000) && ((float)iVar10 != auVar28._0_4_)) {
      auVar32._4_4_ = auVar28._0_4_;
      auVar32._0_4_ = auVar28._0_4_;
      auVar32._8_8_ = 0;
      uVar11 = movmskps(uVar11,auVar32);
      uVar11 = uVar11 & 1 ^ 1;
      auVar31._0_4_ = (float)(int)(iVar10 + uVar11);
    }
    auVar28._0_4_ = auVar28._0_4_ + fVar8;
    ForceCompileFloat = auVar31._0_4_ + ForceCompileFloat;
  } while (auVar28._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  if (4 < (byte)LogInit._0_1_) {
    local_758 = ((double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7) *
                dVar2;
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u__s__FMath_time__15074c708,
               (FLogCategoryBase *)&LogInit);
  }
  QueryPerformanceCounter(local_748);
  auVar28._0_4_ = fVar35;
  do {
    auVar27._0_8_ = (double)auVar28._0_4_;
    auVar27._8_8_ = 0;
    auVar28._0_4_ = auVar28._0_4_ + fVar8;
    auVar19 = roundpd(auVar27,auVar27,1);
    ForceCompileFloat = (float)auVar19._0_8_ + ForceCompileFloat;
  } while (auVar28._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  uVar11 = QueryPerformanceCounter(local_748);
  dVar7 = (double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  auVar28._0_4_ = fVar35;
  do {
    iVar10 = (int)auVar28._0_4_;
    auVar31._0_4_ = auVar28._0_4_;
    if ((iVar10 != -0x80000000) && ((float)iVar10 != auVar28._0_4_)) {
      auVar33._4_4_ = auVar28._0_4_;
      auVar33._0_4_ = auVar28._0_4_;
      auVar33._8_8_ = 0;
      uVar11 = movmskps(uVar11,auVar33);
      uVar11 = uVar11 & 1;
      auVar31._0_4_ = (float)(int)(iVar10 - uVar11);
    }
    auVar28._0_4_ = auVar28._0_4_ + fVar8;
    ForceCompileFloat = auVar31._0_4_ + ForceCompileFloat;
  } while (auVar28._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  if (4 < (byte)LogInit._0_1_) {
    local_758 = ((double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7) *
                dVar2;
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u__s__FMath_time__15074c708,
               (FLogCategoryBase *)&LogInit);
  }
  QueryPerformanceCounter(local_748);
  auVar28._0_4_ = fVar35;
  do {
    auVar31._0_4_ = auVar28._0_4_ + fVar8;
    auVar34._0_8_ = (double)(auVar28._0_4_ + fVar9);
    auVar34._8_8_ = 0;
    auVar28 = roundpd(ZEXT416((uint)(auVar28._0_4_ + fVar9)),auVar34,1);
    ForceCompileFloat = (float)auVar28._0_8_ + ForceCompileFloat;
    auVar28._0_4_ = auVar31._0_4_;
  } while (auVar31._0_4_ < fVar1);
  QueryPerformanceCounter(local_748);
  uVar11 = QueryPerformanceCounter(local_748);
  dVar7 = (double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  do {
    auVar28._0_4_ = fVar35 + fVar9;
    iVar10 = (int)auVar28._0_4_;
    if ((iVar10 != -0x80000000) && ((float)iVar10 != auVar28._0_4_)) {
      auVar28._4_4_ = auVar28._0_4_;
      auVar28._8_8_ = 0;
      uVar11 = movmskps(uVar11,auVar28);
      uVar11 = uVar11 & 1;
      auVar28._0_4_ = (float)(int)(iVar10 - uVar11);
    }
    fVar35 = fVar35 + fVar8;
    ForceCompileFloat = auVar28._0_4_ + ForceCompileFloat;
  } while (fVar35 < fVar1);
  QueryPerformanceCounter(local_748);
  if (4 < (byte)LogInit._0_1_) {
    local_758 = ((double)local_748[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7) *
                dVar2;
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u__s__FMath_time__15074c708,
               (FLogCategoryBase *)&LogInit);
  }
  return;
}

