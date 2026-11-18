// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// GetTestFlags @ 1487e1ba0

EAutomationTestFlags __thiscall
FAutoRTFMHttpRequestPreservesSettings::GetTestFlags(FAutoRTFMHttpRequestPreservesSettings *this)

{
  return EngineFilter|CommandletContext|ServerContext|ClientContext;
}

// IsStressTest @ 1487e1bb0

bool __thiscall
FAutoRTFMHttpRequestPreservesSettings::IsStressTest(FAutoRTFMHttpRequestPreservesSettings *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487e1bc0

uint __thiscall
FAutoRTFMHttpRequestPreservesSettings::GetRequiredDeviceNum
          (FAutoRTFMHttpRequestPreservesSettings *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487e1bd0

FString * __thiscall
FAutoRTFMHttpRequestPreservesSettings::GetTestSourceFileName
          (FAutoRTFMHttpRequestPreservesSettings *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutoRTFM\\AutoRTFMHttpModuleTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487e1c00

int __thiscall
FAutoRTFMHttpRequestPreservesSettings::GetTestSourceFileLine
          (FAutoRTFMHttpRequestPreservesSettings *this)

{
  return 0x9e;
}

// GetTests @ 1487e1c10

/* WARNING: Removing unreachable block (ram,0x0001487e1cfd) */
/* WARNING: Removing unreachable block (ram,0x0001487e1dc8) */

void __thiscall
FAutoRTFMHttpRequestPreservesSettings::GetTests
          (FAutoRTFMHttpRequestPreservesSettings *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"AutoRTFM + HttpRequestPreservesSettings");
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

// RunTest @ 1487e1df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FAutoRTFMHttpRequestPreservesSettings::RunTest
          (FAutoRTFMHttpRequestPreservesSettings *this,FString *param_1)

{
  code *pcVar1;
  FAutomationTestBase *pFVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  float *pfVar6;
  longlong lVar7;
  undefined1 auStackY_668 [32];
  undefined1 local_628 [8];
  undefined1 local_620 [8];
  undefined1 local_618 [8];
  undefined1 local_610 [8];
  undefined1 local_608 [8];
  undefined1 local_600 [8];
  undefined1 local_5f8 [8];
  undefined1 local_5f0 [8];
  undefined1 local_5e8 [8];
  undefined1 local_5e0 [8];
  undefined1 local_5d8 [8];
  undefined1 local_5d0 [8];
  undefined1 local_5c8 [8];
  undefined1 local_5c0 [8];
  undefined1 local_5b8 [8];
  undefined1 local_5b0 [8];
  undefined1 local_5a8 [8];
  FAutoRTFMHttpRequestPreservesSettings *local_5a0;
  FAutoRTFMHttpRequestPreservesSettings *local_598;
  FAutoRTFMHttpRequestPreservesSettings *local_590;
  FAutoRTFMHttpRequestPreservesSettings *local_588;
  FAutoRTFMHttpRequestPreservesSettings *local_580;
  FAutoRTFMHttpRequestPreservesSettings *local_578;
  FAutomationTestBase *local_570;
  FAutomationTestBase *local_568;
  FAutomationTestBase *local_560;
  FAutoRTFMHttpRequestPreservesSettings *local_558;
  longlong *local_550;
  TReferenceControllerBase<1> *pTStack_548;
  longlong *local_540;
  TReferenceControllerBase<1> *pTStack_538;
  longlong *local_530;
  TReferenceControllerBase<1> *pTStack_528;
  FAutomationEvent local_520;
  IHttpRequest *local_4e8;
  TReferenceControllerBase<1> *pTStack_4e0;
  IHttpRequest *local_4d8;
  TReferenceControllerBase<1> *pTStack_4d0;
  IHttpRequest *local_4c8;
  TReferenceControllerBase<1> *pTStack_4c0;
  IHttpRequest *local_4b8;
  TReferenceControllerBase<1> *pTStack_4b0;
  IHttpRequest *local_4a8;
  TReferenceControllerBase<1> *pTStack_4a0;
  IHttpRequest *local_498;
  TReferenceControllerBase<1> *pTStack_490;
  IHttpRequest *local_488;
  TReferenceControllerBase<1> *pTStack_480;
  IHttpRequest *local_478;
  TReferenceControllerBase<1> *pTStack_470;
  IHttpRequest *local_468;
  TReferenceControllerBase<1> *pTStack_460;
  IHttpRequest *local_458;
  TReferenceControllerBase<1> *pTStack_450;
  IHttpRequest *local_448;
  TReferenceControllerBase<1> *pTStack_440;
  IHttpRequest *local_438;
  TReferenceControllerBase<1> *pTStack_430;
  undefined1 *local_428;
  undefined1 *local_420;
  undefined1 *local_418;
  undefined1 *local_410;
  undefined1 *local_408;
  FAutoRTFMHttpRequestPreservesSettings *local_400;
  undefined1 *local_3f8;
  FString local_3f0;
  longlong local_3e0;
  TReferenceControllerBase<1> *pTStack_3d8;
  longlong local_3d0;
  TReferenceControllerBase<1> *pTStack_3c8;
  longlong local_3c0;
  TReferenceControllerBase<1> *pTStack_3b8;
  undefined1 *local_3a8;
  FAutoRTFMHttpRequestPreservesSettings *local_3a0;
  undefined1 *local_398;
  FAutoRTFMHttpRequestPreservesSettings *local_390;
  undefined1 *local_388;
  FAutoRTFMHttpRequestPreservesSettings *local_380;
  undefined1 *local_378;
  FAutoRTFMHttpRequestPreservesSettings *local_370;
  IHttpRequest **local_368;
  undefined1 *local_360;
  undefined1 *local_358;
  FAutoRTFMHttpRequestPreservesSettings **local_350;
  IHttpRequest **local_348;
  undefined1 *local_340;
  undefined1 *local_338;
  FAutoRTFMHttpRequestPreservesSettings **local_330;
  IHttpRequest **local_328;
  undefined1 *local_320;
  undefined1 *local_318;
  FAutoRTFMHttpRequestPreservesSettings **local_310;
  IHttpRequest **local_308;
  undefined1 *local_300;
  undefined1 *local_2f8;
  FAutoRTFMHttpRequestPreservesSettings **local_2f0;
  IHttpRequest **local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  FAutoRTFMHttpRequestPreservesSettings **local_2d0;
  IHttpRequest **local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  FAutoRTFMHttpRequestPreservesSettings **local_2b0;
  IHttpRequest **local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  FAutoRTFMHttpRequestPreservesSettings **local_290;
  longlong *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined1 *local_270;
  longlong *local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  undefined1 *local_250;
  longlong **local_248;
  undefined1 *local_240;
  undefined1 *local_238;
  FAutomationTestBase **local_230;
  longlong **local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  FAutomationTestBase **local_210;
  longlong *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  longlong **local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  FAutomationTestBase **local_1d0;
  IHttpRequest **local_1c8;
  undefined1 *local_1c0;
  undefined1 **local_1b8;
  undefined1 **local_1b0;
  IHttpRequest **local_1a8;
  undefined1 *local_1a0;
  undefined1 **local_198;
  undefined1 **local_190;
  IHttpRequest **local_188;
  undefined1 *local_180;
  undefined1 **local_178;
  undefined1 **local_170;
  IHttpRequest **local_168;
  undefined1 *local_160;
  undefined1 **local_158;
  undefined1 **local_150;
  IHttpRequest **local_148;
  undefined1 *local_140;
  undefined1 **local_138;
  undefined1 **local_130;
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [152];
  void *local_80;
  undefined4 local_78;
  ForAnyElementType local_70;
  ForAnyElementType local_60;
  ForAnyElementType local_48;
  int local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_668;
  bVar3 = AutoRTFM::ForTheRuntime::IsAutoRTFMRuntimeEnabledInternal();
  if (bVar3) {
    FHttpTestModule::FHttpTestModule((FHttpTestModule *)local_118);
    local_348 = &local_488;
    local_340 = local_118;
    local_620[0] = 0;
    local_338 = local_620;
    local_330 = &local_5a0;
    local_488 = (IHttpRequest *)0x0;
    pTStack_480 = (TReferenceControllerBase<1> *)0x0;
    local_5a0 = this;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_1>::operator()<_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_2>,_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_3>_>_::__l3::<lambda_1>_>
              (&local_348);
    if ((local_488 == (IHttpRequest *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    `FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_3>::operator()
              (&local_5a0,local_488);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_480)
    ;
    local_328 = &local_478;
    local_320 = local_118;
    local_618[0] = 0;
    local_318 = local_618;
    local_310 = &local_598;
    local_478 = (IHttpRequest *)0x0;
    pTStack_470 = (TReferenceControllerBase<1> *)0x0;
    local_598 = this;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_1>::operator()<_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_4>,_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_5>_>_::__l3::<lambda_1>_>
              (&local_328);
    if ((local_478 == (IHttpRequest *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    `FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_5>::operator()
              (&local_598,local_478);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_470)
    ;
    local_308 = &local_4b8;
    local_300 = local_118;
    local_610[0] = 0;
    local_2f8 = local_610;
    local_2f0 = &local_590;
    local_4b8 = (IHttpRequest *)0x0;
    pTStack_4b0 = (TReferenceControllerBase<1> *)0x0;
    local_590 = this;
    ``FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_1>::
    operator()<`FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_6>,`FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_7>_>'
    ::__l3::<lambda_1>::operator()(&local_308);
    if ((local_4b8 == (IHttpRequest *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    `FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_7>::operator()
              (&local_590,local_4b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4b0)
    ;
    local_2e8 = &local_458;
    local_2e0 = local_118;
    local_608[0] = 0;
    local_2d8 = local_608;
    local_2d0 = &local_588;
    local_458 = (IHttpRequest *)0x0;
    pTStack_450 = (TReferenceControllerBase<1> *)0x0;
    local_588 = this;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_1>::operator()<_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_8>,_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_9>_>_::__l3::<lambda_1>_>
              (&local_2e8);
    if ((local_458 == (IHttpRequest *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    `FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_9>::operator()
              (&local_588,local_458);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_450)
    ;
    local_2c8 = &local_448;
    local_2c0 = local_118;
    local_600[0] = 0;
    local_2b8 = local_600;
    local_2b0 = &local_580;
    local_448 = (IHttpRequest *)0x0;
    pTStack_440 = (TReferenceControllerBase<1> *)0x0;
    local_580 = this;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_1>::operator()<_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_10>,_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_11>_>_::__l3::<lambda_1>_>
              (&local_2c8);
    if ((local_448 == (IHttpRequest *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    `FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_11>::operator()
              (&local_580,local_448);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_440)
    ;
    local_2a8 = &local_438;
    local_2a0 = local_118;
    local_5f8[0] = 0;
    local_298 = local_5f8;
    local_290 = &local_578;
    local_438 = (IHttpRequest *)0x0;
    pTStack_430 = (TReferenceControllerBase<1> *)0x0;
    local_578 = this;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_1>::operator()<_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_12>,_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_13>_>_::__l3::<lambda_1>_>
              (&local_2a8);
    if ((local_438 == (IHttpRequest *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    `FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_13>::operator()
              (&local_578,local_438);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_430)
    ;
    local_288 = &local_3e0;
    local_5e8[0] = 0;
    local_280 = local_118;
    local_5f0[0] = 0;
    local_278 = local_5f0;
    local_270 = local_5e8;
    local_3e0 = 0;
    pTStack_3d8 = (TReferenceControllerBase<1> *)0x0;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_1>::operator()<_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_14>,_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_15>_>_::__l3::<lambda_1>_>
              (&local_288);
    if ((local_3e0 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3d8)
    ;
    local_268 = &local_3d0;
    local_5d8[0] = 0;
    local_260 = local_118;
    local_5e0[0] = 0;
    local_258 = local_5e0;
    local_250 = local_5d8;
    local_3d0 = 0;
    pTStack_3c8 = (TReferenceControllerBase<1> *)0x0;
    ``FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_1>::
    operator()<`FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_16>,`FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_17>_>'
    ::__l3::<lambda_1>::operator()(&local_268);
    if ((local_3d0 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3c8)
    ;
    local_248 = &local_530;
    local_240 = local_118;
    local_5d0[0] = 0;
    local_238 = local_5d0;
    local_230 = &local_570;
    local_530 = (longlong *)0x0;
    pTStack_528 = (TReferenceControllerBase<1> *)0x0;
    local_570 = (FAutomationTestBase *)this;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_1>::operator()<_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_18>,_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_19>_>_::__l3::<lambda_1>_>
              (&local_248);
    if ((local_530 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pFVar2 = local_570;
    pfVar6 = (float *)(**(code **)(*local_530 + 0xe0))(local_530,local_128);
    if ((*(char *)(pfVar6 + 1) == '\x01') && (__real_40200000 == *pfVar6)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    FAutomationTestBase::TestTrue(pFVar2,L"Request.GetTimeout() == 2.5f",bVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_528)
    ;
    local_228 = &local_550;
    local_220 = local_118;
    local_5c8[0] = 0;
    local_218 = local_5c8;
    local_550 = (longlong *)0x0;
    pTStack_548 = (TReferenceControllerBase<1> *)0x0;
    local_568 = (FAutomationTestBase *)this;
    local_210 = &local_568;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_1>::operator()<_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_20>,_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_21>_>_::__l3::<lambda_1>_>
              (&local_228);
    if ((local_550 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pFVar2 = local_568;
    lVar7 = (**(code **)(*local_550 + 0xe0))(local_550,local_120);
    FAutomationTestBase::TestTrue
              (pFVar2,L"!Request.GetTimeout().IsSet()",*(char *)(lVar7 + 4) == '\0');
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_548)
    ;
    local_208 = &local_3c0;
    local_5b8[0] = 0;
    local_200 = local_118;
    local_5c0[0] = 0;
    local_1f8 = local_5c0;
    local_1f0 = local_5b8;
    local_3c0 = 0;
    pTStack_3b8 = (TReferenceControllerBase<1> *)0x0;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_1>::operator()<_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_22>,_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_23>_>_::__l3::<lambda_1>_>
              (&local_208);
    if ((local_3c0 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3b8)
    ;
    local_1e8 = &local_540;
    local_1e0 = local_118;
    local_5b0[0] = 0;
    local_1d8 = local_5b0;
    local_1d0 = &local_560;
    local_540 = (longlong *)0x0;
    pTStack_538 = (TReferenceControllerBase<1> *)0x0;
    local_560 = (FAutomationTestBase *)this;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_1>::operator()<_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_24>,_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_25>_>_::__l3::<lambda_1>_>
              (&local_1e8);
    if ((local_540 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pFVar2 = local_560;
    cVar5 = (**(code **)(*local_540 + 0x140))();
    FAutomationTestBase::TestTrue
              (pFVar2,
               L"Request.GetDelegateThreadPolicy() == EHttpRequestDelegateThreadPolicy::CompleteOnHttpThread"
               ,cVar5 == '\x01');
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_538)
    ;
    local_3a8 = local_628;
    local_428 = local_628;
    local_1c8 = &local_4e8;
    local_1c0 = local_118;
    local_1b8 = &local_428;
    local_1b0 = &local_3a8;
    local_4e8 = (IHttpRequest *)0x0;
    pTStack_4e0 = (TReferenceControllerBase<1> *)0x0;
    local_3a0 = this;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_1>::operator()<_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_26>,_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_27>_>_::__l3::<lambda_1>_>
              (&local_1c8);
    if ((local_4e8 == (IHttpRequest *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    `FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_27>::operator()
              (&local_3a8,local_4e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4e0)
    ;
    local_398 = local_628;
    local_420 = local_628;
    local_1a8 = &local_4d8;
    local_1a0 = local_118;
    local_198 = &local_420;
    local_190 = &local_398;
    local_4d8 = (IHttpRequest *)0x0;
    pTStack_4d0 = (TReferenceControllerBase<1> *)0x0;
    local_390 = this;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_1>::operator()<_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_28>,_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_29>_>_::__l3::<lambda_1>_>
              (&local_1a8);
    if ((local_4d8 == (IHttpRequest *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    `FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_29>::operator()
              (&local_398,local_4d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4d0)
    ;
    local_388 = local_628;
    local_418 = local_628;
    local_188 = &local_4c8;
    local_180 = local_118;
    local_178 = &local_418;
    local_170 = &local_388;
    local_4c8 = (IHttpRequest *)0x0;
    pTStack_4c0 = (TReferenceControllerBase<1> *)0x0;
    local_380 = this;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_1>::operator()<_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_30>,_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_31>_>_::__l3::<lambda_1>_>
              (&local_188);
    if ((local_4c8 == (IHttpRequest *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    `FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_31>::operator()
              (&local_388,local_4c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4c0)
    ;
    local_378 = local_628;
    local_3f8 = local_628;
    local_168 = &local_4a8;
    local_160 = local_118;
    local_158 = &local_3f8;
    local_150 = &local_378;
    local_4a8 = (IHttpRequest *)0x0;
    pTStack_4a0 = (TReferenceControllerBase<1> *)0x0;
    local_370 = this;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_1>::operator()<_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_32>,_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_33>_>_::__l3::<lambda_1>_>
              (&local_168);
    if ((local_4a8 == (IHttpRequest *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    `FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_33>::operator()
              (&local_378,local_4a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4a0)
    ;
    local_408 = local_628;
    local_410 = local_628;
    local_148 = &local_498;
    local_140 = local_118;
    local_138 = &local_410;
    local_130 = &local_408;
    local_498 = (IHttpRequest *)0x0;
    pTStack_490 = (TReferenceControllerBase<1> *)0x0;
    local_400 = this;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_1>::operator()<_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_34>,_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_35>_>_::__l3::<lambda_1>_>
              (&local_148);
    if ((local_498 == (IHttpRequest *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    `FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_35>::operator()
              (&local_408,local_498);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_490)
    ;
    local_368 = &local_468;
    local_360 = local_118;
    local_5a8[0] = 0;
    local_358 = local_5a8;
    local_350 = &local_558;
    local_468 = (IHttpRequest *)0x0;
    pTStack_460 = (TReferenceControllerBase<1> *)0x0;
    local_558 = this;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_1>::operator()<_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_36>,_FAutoRTFMHttpRequestPreservesSettings::RunTest_::__l2::<lambda_37>_>_::__l3::<lambda_1>_>
              (&local_368);
    if ((local_468 == (IHttpRequest *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    `FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_37>::operator()
              (&local_558,local_468);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_460)
    ;
    local_118._0_8_ = &FHttpTestModule::_vftable__for__IModuleInterface__;
    local_118._8_8_ = &FHttpTestModule::_vftable__for__FSelfRegisteringExec__;
    FHttpModule::ShutdownModule((FHttpModule *)local_118);
    DestructItems<FString,int>((FString *)local_48.Data,local_40);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
    local_78 = 0;
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_118 + 0x58));
    FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)(local_118 + 8));
  }
  else {
    ::FString::FString(&local_3f0,L"SKIPPED \'FAutoRTFMHttpModuleTests\' test. AutoRTFM disabled.");
    _Src.Data = local_3f0.Data.AllocatorInstance.Data;
    local_520.Type = Info;
    local_520.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_3f0.Data.ArrayNum == 0) {
      local_520.Message.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_3f0.Data.ArrayNum,0,(ForAnyElementType *)&local_520.Message,
                 local_3f0.Data.ArrayNum,&local_520.Message.Data.ArrayMax);
      memcpy(local_520.Message.Data.AllocatorInstance.Data,_Src.Data,
             (longlong)local_3f0.Data.ArrayNum * 2);
    }
    local_520.Artifact.A = 0;
    local_520.Artifact.B = 0;
    local_520.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_520.Context.Data.ArrayNum = 0;
    local_520.Context.Data.ArrayMax = 0;
    local_520.Artifact.C = 0;
    local_520.Artifact.D = 0;
    FAutomationTestExecutionInfo::AddEvent
              ((FAutomationTestExecutionInfo *)&this->field_0x30,&local_520,0,true);
    if (local_520.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520.Context.Data.AllocatorInstance.Data);
    }
    if (local_520.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520.Message.Data.AllocatorInstance.Data);
    }
    if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// GetBeautifiedTestName @ 1487e2bc0

FString * __thiscall
FAutoRTFMHttpRequestPreservesSettings::GetBeautifiedTestName
          (FAutoRTFMHttpRequestPreservesSettings *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"AutoRTFM + HttpRequestPreservesSettings");
  return __return_storage_ptr__;
}

// operator() @ 14880e5c0

void __thiscall
`FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_11>::operator()
          (void *this,IHttpRequest *param_1)

{
  FAutomationTestBase *this_00;
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined2 local_res8;
  undefined1 local_resa;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  this_00 = *(FAutomationTestBase **)this;
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  local_res8 = 0x4241;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_resa = 0x43;
  local_10 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,3,0,&local_18,3,&local_c);
  memcpy(local_18.Data,&local_res8,3);
  iVar1 = *(int *)(puVar2 + 1);
  if (iVar1 == local_10) {
    if (iVar1 != 0) {
      iVar1 = memcmp((void *)*puVar2,local_18.Data,(longlong)iVar1);
      if (iVar1 != 0) goto LAB_14880e65d;
    }
    bVar3 = true;
  }
  else {
LAB_14880e65d:
    bVar3 = false;
  }
  FAutomationTestBase::TestTrue
            (this_00,L"Request.GetContent() == TArray<uint8>{\'A\', \'B\', \'C\'}",bVar3);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// operator() @ 14880e6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_13>::operator()
          (void *this,IHttpRequest *param_1)

{
  FAutomationTestBase *this_00;
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined1 auStackY_68 [32];
  ForAnyElementType local_28;
  int local_20;
  int local_1c [3];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  this_00 = *(FAutomationTestBase **)this;
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  local_1c[1] = 0x69727453;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_1c[2] = 0x2173676e;
  local_20 = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,8,0,&local_28,8,local_1c);
  memcpy(local_28.Data,local_1c + 1,8);
  iVar1 = *(int *)(puVar2 + 1);
  if (iVar1 == local_20) {
    if (iVar1 != 0) {
      iVar1 = memcmp((void *)*puVar2,local_28.Data,(longlong)iVar1);
      if (iVar1 != 0) goto LAB_14880e750;
    }
    bVar3 = true;
  }
  else {
LAB_14880e750:
    bVar3 = false;
  }
  FAutomationTestBase::TestTrue
            (this_00,
             L"Request.GetContent() == TArray<uint8>{\'S\', \'t\', \'r\', \'i\', \'n\', \'g\', \'s\', \'!\'}"
             ,bVar3);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// operator() @ 14880f910

void __thiscall
`FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_27>::operator()
          (void *this,IHttpRequest *param_1)

{
  code *pcVar1;
  bool bVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  **(undefined1 **)this = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)param_1 + 0xf0))(param_1);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection(lpCriticalSection);
  if (lpCriticalSection[1].LockCount == 0) {
    p_Var3 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  }
  else {
    p_Var3 = lpCriticalSection[1].DebugInfo;
  }
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  (**(code **)(*(longlong *)p_Var3 + 0x60))(0,&local_18,&local_28,1);
  LeaveCriticalSection(lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)((longlong)this + 8),L"bCalledDelegate",
             *(bool *)*(undefined8 *)this);
  return;
}

// operator() @ 14880f9e0

void __thiscall
`FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_29>::operator()
          (void *this,IHttpRequest *param_1)

{
  code *pcVar1;
  bool bVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  **(undefined1 **)this = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)param_1 + 0xf8))(param_1);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection(lpCriticalSection);
  if (lpCriticalSection[1].LockCount == 0) {
    p_Var3 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  }
  else {
    p_Var3 = lpCriticalSection[1].DebugInfo;
  }
  local_18 = 0;
  uStack_10 = 0;
  (**(code **)(*(longlong *)p_Var3 + 0x60))(0,&local_18,0,0);
  LeaveCriticalSection(lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)((longlong)this + 8),L"bCalledDelegate",
             *(bool *)*(undefined8 *)this);
  return;
}

// operator() @ 148810080

void __thiscall
`FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_31>::operator()
          (void *this,IHttpRequest *param_1)

{
  code *pcVar1;
  bool bVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  **(undefined1 **)this = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)param_1 + 0x100))(param_1);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection(lpCriticalSection);
  if (lpCriticalSection[1].LockCount == 0) {
    p_Var3 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  }
  else {
    p_Var3 = lpCriticalSection[1].DebugInfo;
  }
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  (**(code **)(*(longlong *)p_Var3 + 0x60))(0,&local_18,&local_28,0);
  LeaveCriticalSection(lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)((longlong)this + 8),L"bCalledDelegate",
             *(bool *)*(undefined8 *)this);
  return;
}

// operator() @ 148810150

void __thiscall
`FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_33>::operator()
          (void *this,IHttpRequest *param_1)

{
  code *pcVar1;
  bool bVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  **(undefined1 **)this = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)param_1 + 0x108))(param_1);
  p_Var3 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection(lpCriticalSection);
  if (lpCriticalSection[1].LockCount != 0) {
    p_Var3 = lpCriticalSection[1].DebugInfo;
  }
  local_18 = 0;
  uStack_10 = 0;
  (**(code **)(*(longlong *)p_Var3 + 0x60))(p_Var3,&local_18,&local_38,&local_28);
  LeaveCriticalSection(lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)((longlong)this + 8),L"bCalledDelegate",
             *(bool *)*(undefined8 *)this);
  return;
}

// operator() @ 148810250

void __thiscall
`FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_35>::operator()
          (void *this,IHttpRequest *param_1)

{
  code *pcVar1;
  bool bVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  **(undefined1 **)this = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)param_1 + 0x110))(param_1);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection(lpCriticalSection);
  if (lpCriticalSection[1].LockCount == 0) {
    p_Var3 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  }
  else {
    p_Var3 = lpCriticalSection[1].DebugInfo;
  }
  local_18 = 0;
  uStack_10 = 0;
  (**(code **)(*(longlong *)p_Var3 + 0x60))(0,&local_18,0);
  LeaveCriticalSection(lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)((longlong)this + 8),L"bCalledDelegate",
             *(bool *)*(undefined8 *)this);
  return;
}

// operator() @ 148810310

void __thiscall
`FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_37>::operator()
          (void *this,IHttpRequest *param_1)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  FString *pFVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  LPCRITICAL_SECTION p_Var10;
  bool bVar11;
  undefined1 local_res8 [8];
  FString local_78;
  void *local_68 [2];
  FString local_58;
  void *local_48 [2];
  void *local_38 [2];
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  pFVar2 = *(FAutomationTestBase **)this;
  lVar6 = (*(code *)**(undefined8 **)param_1)(param_1);
  FAutomationTestBase::TestTrue(pFVar2,L"Request.GetURL() == FString()",*(uint *)(lVar6 + 8) < 2);
  pFVar2 = *(FAutomationTestBase **)this;
  lVar6 = (**(code **)(*(longlong *)param_1 + 8))(param_1);
  FAutomationTestBase::TestTrue
            (pFVar2,L"Request.GetEffectiveURL() == FString()",*(uint *)(lVar6 + 8) < 2);
  pFVar2 = *(FAutomationTestBase **)this;
  pFVar7 = ::FString::FString(&local_58,L"GET");
  puVar8 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x58))(param_1,local_68);
  iVar5 = (pFVar7->Data).ArrayNum;
  iVar1 = *(int *)(puVar8 + 1);
  if (iVar1 == iVar5) {
    if (iVar1 < 2) {
      bVar11 = true;
    }
    else {
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)*puVar8,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
      bVar11 = iVar5 == 0;
    }
  }
  else {
    bVar11 = iVar5 + iVar1 == 1;
  }
  FAutomationTestBase::TestTrue(pFVar2,L"Request.GetVerb() == FString(TEXT(\"GET\"))",bVar11);
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar2 = *(FAutomationTestBase **)this;
  pcVar3 = *(code **)(*(longlong *)param_1 + 0x28);
  ::FString::FString(&local_78,L"Mystery");
  lVar6 = (*pcVar3)(param_1,local_48,&local_78);
  FAutomationTestBase::TestTrue
            (pFVar2,L"Request.GetHeader(TEXT(\"Mystery\")) == FString()",*(uint *)(lVar6 + 8) < 2);
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar2 = *(FAutomationTestBase **)this;
  lVar6 = (**(code **)(*(longlong *)param_1 + 0x70))
                    (param_1,local_38,HttpRequestOptions::UnixSocketPath);
  FAutomationTestBase::TestTrue
            (pFVar2,L"Request.GetOption(HttpRequestOptions::UnixSocketPath) == FString()",
             *(uint *)(lVar6 + 8) < 2);
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  pFVar2 = *(FAutomationTestBase **)this;
  lVar6 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  FAutomationTestBase::TestTrue
            (pFVar2,L"Request.GetContent() == TArray<uint8>{}",*(int *)(lVar6 + 8) == 0);
  pFVar2 = *(FAutomationTestBase **)this;
  iVar5 = (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  FAutomationTestBase::TestTrue
            (pFVar2,L"Request.GetStatus() == EHttpRequestStatus::NotStarted",iVar5 == 0);
  pFVar2 = *(FAutomationTestBase **)this;
  lVar6 = (**(code **)(*(longlong *)param_1 + 0xe0))(param_1,local_res8);
  FAutomationTestBase::TestTrue
            (pFVar2,L"!Request.GetTimeout().IsSet()",*(char *)(lVar6 + 4) == '\0');
  pFVar2 = *(FAutomationTestBase **)this;
  plVar9 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x120))(param_1,local_28);
  FAutomationTestBase::TestTrue(pFVar2,L"Request.GetResponse() == nullptr",*plVar9 == 0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  pFVar2 = *(FAutomationTestBase **)this;
  cVar4 = (**(code **)(*(longlong *)param_1 + 0x140))(param_1);
  FAutomationTestBase::TestTrue
            (pFVar2,
             L"Request.GetDelegateThreadPolicy() == EHttpRequestDelegateThreadPolicy::CompleteOnGameThread"
             ,cVar4 == '\0');
  pFVar2 = *(FAutomationTestBase **)this;
  p_Var10 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)param_1 + 0xf0))(param_1);
  if ((p_Var10 == (LPCRITICAL_SECTION)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection(p_Var10);
  if (((p_Var10[1].LockCount == 0) || (p_Var10[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)p_Var10[1].DebugInfo + 0x38))(), cVar4 == '\0')) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  LeaveCriticalSection(p_Var10);
  FAutomationTestBase::TestTrue(pFVar2,L"!Request.OnProcessRequestComplete().IsBound()",bVar11);
  pFVar2 = *(FAutomationTestBase **)this;
  p_Var10 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)param_1 + 0xf8))(param_1);
  if ((p_Var10 == (LPCRITICAL_SECTION)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection(p_Var10);
  if (((p_Var10[1].LockCount == 0) || (p_Var10[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)p_Var10[1].DebugInfo + 0x38))(), cVar4 == '\0')) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  LeaveCriticalSection(p_Var10);
  FAutomationTestBase::TestTrue(pFVar2,L"!Request.OnRequestProgress64().IsBound()",bVar11);
  pFVar2 = *(FAutomationTestBase **)this;
  p_Var10 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)param_1 + 0x100))(param_1);
  if ((p_Var10 == (LPCRITICAL_SECTION)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection(p_Var10);
  if (((p_Var10[1].LockCount == 0) || (p_Var10[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)p_Var10[1].DebugInfo + 0x38))(), cVar4 == '\0')) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  LeaveCriticalSection(p_Var10);
  FAutomationTestBase::TestTrue(pFVar2,L"!Request.OnRequestWillRetry().IsBound()",bVar11);
  pFVar2 = *(FAutomationTestBase **)this;
  p_Var10 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)param_1 + 0x108))(param_1);
  if ((p_Var10 == (LPCRITICAL_SECTION)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection(p_Var10);
  if (((p_Var10[1].LockCount == 0) || (p_Var10[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)p_Var10[1].DebugInfo + 0x38))(), cVar4 == '\0')) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  LeaveCriticalSection(p_Var10);
  FAutomationTestBase::TestTrue(pFVar2,L"!Request.OnHeaderReceived().IsBound()",bVar11);
  pFVar2 = *(FAutomationTestBase **)this;
  p_Var10 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)param_1 + 0x110))(param_1);
  if ((p_Var10 == (LPCRITICAL_SECTION)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection(p_Var10);
  if (((p_Var10[1].LockCount == 0) || (p_Var10[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)p_Var10[1].DebugInfo + 0x38))(), cVar4 == '\0')) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  LeaveCriticalSection(p_Var10);
  FAutomationTestBase::TestTrue(pFVar2,L"!Request.OnStatusCodeReceived().IsBound()",bVar11);
  return;
}

// operator() @ 148810840

void __thiscall
`FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_3>::operator()
          (void *this,IHttpRequest *param_1)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  int iVar4;
  FString *pFVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar2 = *(FAutomationTestBase **)this;
  pFVar5 = ::FString::FString(&local_38,"https://www.fortnite.com/?lang=en-US");
  puVar6 = (undefined8 *)(*(code *)**(undefined8 **)param_1)(param_1);
  iVar4 = (pFVar5->Data).ArrayNum;
  iVar1 = *(int *)(puVar6 + 1);
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      bVar8 = true;
    }
    else {
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)*puVar6,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data);
      bVar8 = iVar4 == 0;
    }
  }
  else {
    bVar8 = iVar4 + iVar1 == 1;
  }
  FAutomationTestBase::TestTrue
            (pFVar2,L"Request.GetURL() == FString(\"https://www.fortnite.com/?lang=en-US\")",bVar8);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = *(FAutomationTestBase **)this;
  lVar7 = (**(code **)(*(longlong *)param_1 + 8))(param_1);
  FAutomationTestBase::TestTrue
            (pFVar2,L"Request.GetEffectiveURL() == FString()",*(uint *)(lVar7 + 8) < 2);
  pFVar2 = *(FAutomationTestBase **)this;
  pFVar5 = ::FString::FString(&local_18,"en-US");
  pcVar3 = *(code **)(*(longlong *)param_1 + 0x20);
  ::FString::FString(&local_38,L"lang");
  puVar6 = (undefined8 *)(*pcVar3)(param_1,local_28,&local_38);
  iVar4 = (pFVar5->Data).ArrayNum;
  iVar1 = *(int *)(puVar6 + 1);
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      bVar8 = true;
    }
    else {
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)*puVar6,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data);
      bVar8 = iVar4 == 0;
    }
  }
  else {
    bVar8 = iVar4 + iVar1 == 1;
  }
  FAutomationTestBase::TestTrue
            (pFVar2,L"Request.GetURLParameter(TEXT(\"lang\")) == FString(\"en-US\")",bVar8);
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1488109c0

void __thiscall
`FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_5>::operator()
          (void *this,IHttpRequest *param_1)

{
  int iVar1;
  FAutomationTestBase *this_00;
  int iVar2;
  FString *pFVar3;
  undefined8 *puVar4;
  bool bVar5;
  void *local_28 [2];
  FString local_18;
  
  this_00 = *(FAutomationTestBase **)this;
  pFVar3 = ::FString::FString(&local_18,"POST");
  puVar4 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x58))(param_1,local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = *(int *)(puVar4 + 1);
  if (iVar1 == iVar2) {
    if (iVar1 < 2) {
      bVar5 = true;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)*puVar4,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
    }
  }
  else {
    bVar5 = iVar2 + iVar1 == 1;
  }
  FAutomationTestBase::TestTrue(this_00,L"Request.GetVerb() == FString(\"POST\")",bVar5);
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 148810a70

void __thiscall
`FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_7>::operator()
          (void *this,IHttpRequest *param_1)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  int iVar4;
  FString *pFVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pFVar2 = *(FAutomationTestBase **)this;
  pFVar5 = ::FString::FString(&local_28,"Woof");
  pcVar3 = *(code **)(*(longlong *)param_1 + 0x28);
  ::FString::FString(&local_48,L"Dog");
  puVar6 = (undefined8 *)(*pcVar3)(param_1,&local_38,&local_48);
  iVar4 = (pFVar5->Data).ArrayNum;
  iVar1 = *(int *)(puVar6 + 1);
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      bVar8 = true;
    }
    else {
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)*puVar6,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data);
      bVar8 = iVar4 == 0;
    }
  }
  else {
    bVar8 = iVar4 + iVar1 == 1;
  }
  FAutomationTestBase::TestTrue
            (pFVar2,L"Request.GetHeader(TEXT(\"Dog\")) == FString(\"Woof\")",bVar8);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar2 = *(FAutomationTestBase **)this;
  pFVar5 = ::FString::FString(&local_38,"Moo");
  pcVar3 = *(code **)(*(longlong *)param_1 + 0x28);
  ::FString::FString(&local_48,L"Cow");
  puVar6 = (undefined8 *)(*pcVar3)(param_1,&local_28,&local_48);
  iVar4 = (pFVar5->Data).ArrayNum;
  iVar1 = *(int *)(puVar6 + 1);
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      bVar8 = true;
    }
    else {
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)*puVar6,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data);
      bVar8 = iVar4 == 0;
    }
  }
  else {
    bVar8 = iVar4 + iVar1 == 1;
  }
  FAutomationTestBase::TestTrue
            (pFVar2,L"Request.GetHeader(TEXT(\"Cow\")) == FString(\"Moo\")",bVar8);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = *(FAutomationTestBase **)this;
  pFVar5 = ::FString::FString(&local_38,"Meow");
  pcVar3 = *(code **)(*(longlong *)param_1 + 0x28);
  ::FString::FString(&local_48,L"Cat");
  puVar6 = (undefined8 *)(*pcVar3)(param_1,&local_28,&local_48);
  iVar4 = (pFVar5->Data).ArrayNum;
  iVar1 = *(int *)(puVar6 + 1);
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      bVar8 = true;
    }
    else {
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)*puVar6,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data);
      bVar8 = iVar4 == 0;
    }
  }
  else {
    bVar8 = iVar4 + iVar1 == 1;
  }
  FAutomationTestBase::TestTrue
            (pFVar2,L"Request.GetHeader(TEXT(\"Cat\")) == FString(\"Meow\")",bVar8);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = *(FAutomationTestBase **)this;
  pcVar3 = *(code **)(*(longlong *)param_1 + 0x28);
  ::FString::FString(&local_48,L"Fox");
  lVar7 = (*pcVar3)(param_1,&local_28,&local_48);
  FAutomationTestBase::TestTrue
            (pFVar2,L"Request.GetHeader(TEXT(\"Fox\")) == FString()",*(uint *)(lVar7 + 8) < 2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 148810d10

void __thiscall
`FAutoRTFMHttpRequestPreservesSettings::RunTest'::__l2::<lambda_9>::operator()
          (void *this,IHttpRequest *param_1)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  int iVar3;
  FString *pFVar4;
  undefined8 *puVar5;
  longlong lVar6;
  bool bVar7;
  void *local_28 [2];
  FString local_18;
  
  pFVar2 = *(FAutomationTestBase **)this;
  pFVar4 = ::FString::FString(&local_18,"MyUnixSocketPath");
  puVar5 = (undefined8 *)
           (**(code **)(*(longlong *)param_1 + 0x70))
                     (param_1,local_28,HttpRequestOptions::UnixSocketPath);
  iVar3 = (pFVar4->Data).ArrayNum;
  iVar1 = *(int *)(puVar5 + 1);
  if (iVar1 == iVar3) {
    if (iVar1 < 2) {
      bVar7 = true;
    }
    else {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)*puVar5,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
    }
  }
  else {
    bVar7 = iVar3 + iVar1 == 1;
  }
  FAutomationTestBase::TestTrue
            (pFVar2,
             L"Request.GetOption(HttpRequestOptions::UnixSocketPath) == FString(\"MyUnixSocketPath\")"
             ,bVar7);
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = *(FAutomationTestBase **)this;
  lVar6 = (**(code **)(*(longlong *)param_1 + 0x70))(param_1,&local_18,0);
  FAutomationTestBase::TestTrue
            (pFVar2,L"Request.GetOption(FName()) == FString()",*(uint *)(lVar6 + 8) < 2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

