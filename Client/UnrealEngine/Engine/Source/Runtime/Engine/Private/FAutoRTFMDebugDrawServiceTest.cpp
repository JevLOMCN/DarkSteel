// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487d8d60

EAutomationTestFlags __thiscall
FAutoRTFMDebugDrawServiceTest::GetTestFlags(FAutoRTFMDebugDrawServiceTest *this)

{
  return EngineFilter|CommandletContext|ServerContext|ClientContext;
}

// IsStressTest @ 1487d8d70

bool __thiscall FAutoRTFMDebugDrawServiceTest::IsStressTest(FAutoRTFMDebugDrawServiceTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487d8d80

uint __thiscall
FAutoRTFMDebugDrawServiceTest::GetRequiredDeviceNum(FAutoRTFMDebugDrawServiceTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487d8d90

FString * __thiscall
FAutoRTFMDebugDrawServiceTest::GetTestSourceFileName
          (FAutoRTFMDebugDrawServiceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutoRTFM\\AutoRTFMDebugDrawServiceTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487d8dc0

int __thiscall
FAutoRTFMDebugDrawServiceTest::GetTestSourceFileLine(FAutoRTFMDebugDrawServiceTest *this)

{
  return 0xf;
}

// GetTests @ 1487d8dd0

/* WARNING: Removing unreachable block (ram,0x0001487d8ebd) */
/* WARNING: Removing unreachable block (ram,0x0001487d8f88) */

void __thiscall
FAutoRTFMDebugDrawServiceTest::GetTests
          (FAutoRTFMDebugDrawServiceTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"AutoRTFM + UDebugDrawService");
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

// RunTest @ 1487d8fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FAutoRTFMDebugDrawServiceTest::RunTest(FAutoRTFMDebugDrawServiceTest *this,FString *param_1)

{
  code *pcVar1;
  undefined8 _Src;
  UCanvas *pUVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FEngineShowFlags *pFVar6;
  ForElementType<unsigned_int> FVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStackY_2a8 [32];
  FScriptContainerElement local_268;
  FScriptContainerElement local_267 [7];
  undefined1 local_260 [16];
  UCanvas **local_250;
  UCanvas *local_248;
  FHitProxyConsumer local_240;
  FRenderTarget local_238;
  FGameTime local_228;
  undefined1 local_208 [128];
  undefined1 local_188 [8];
  ForAnyElementType FStack_180;
  undefined8 local_178;
  ForAnyElementType FStack_170;
  uchar auStack_168 [8];
  undefined1 local_160 [8];
  ForElementType<unsigned_int> local_158;
  int local_150;
  int local_14c;
  FCanvas local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  bVar3 = AutoRTFM::ForTheRuntime::IsAutoRTFMRuntimeEnabledInternal();
  if (bVar3) {
    FRenderTarget::FRenderTarget(&local_238);
    local_238._padding_ =
         (longlong)&`FAutoRTFMDebugDrawServiceTest::RunTest'::`2'::FMyRenderTarget::_vftable_;
    local_240 = (FHitProxyConsumer)
                &`FAutoRTFMDebugDrawServiceTest::RunTest'::`2'::FMyHitProxyConsumer::_vftable_;
    local_228.DeltaRealTimeSeconds = 0.0;
    local_228.DeltaWorldTimeSeconds = 0.0;
    local_228.RealTimeSeconds = 0.0;
    local_228.WorldTimeSeconds = 0.0;
    FCanvas::FCanvas(&local_148,&local_238,&local_240,&local_228,SM5,__real_3f800000);
    pUVar4 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UCanvas_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_208,pUVar5);
    local_208._8_8_ = pUVar4;
    local_248 = (UCanvas *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_208);
    if (local_208._64_8_ != 0) {
      plVar9 = (longlong *)(local_208 + 0x50);
      if ((longlong *)local_208._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_208._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    local_248->Canvas = &local_148;
    local_260._0_8_ = local_267;
    local_267[0] = (FScriptContainerElement)0x0;
    local_260._8_8_ = &local_268;
    local_250 = &local_248;
    local_268 = (FScriptContainerElement)0x0;
    ``FAutoRTFMDebugDrawServiceTest::RunTest'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::
    operator()(local_260);
    if ((local_267[0] != (FScriptContainerElement)0x1) ||
       (local_268 != (FScriptContainerElement)0x1)) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)local_260,L"%s: The two values are not equal.");
      (*pcVar1)(this,local_260,0);
      if ((FScriptContainerElement *)local_260._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_260._0_8_);
      }
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)local_260,L"In section \'%s\'.");
      (*pcVar1)(this);
      if ((FScriptContainerElement *)local_260._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_260._0_8_);
      }
    }
    local_260._0_8_ = &local_268;
    local_268 = (FScriptContainerElement)0x0;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMDebugDrawServiceTest::RunTest_::__l2::<lambda_3>::operator()_::__l2::<lambda_1>_>
              (local_260);
    local_14c = 0x80;
    local_158 = (ForElementType<unsigned_int>)0x0;
    local_188 = (undefined1  [8])___xmm_ffffffffffffffffffffffffffffffff;
    FStack_180.Data = _UNK_15060db28;
    local_150 = 0;
    local_178 = ___xmm_ffffffffffffffffffffffffffffffff;
    FStack_170.Data = _UNK_15060db28;
    FEngineShowFlags::InitCustomShowFlags((FEngineShowFlags *)local_188,ESFIM_Game);
    pUVar2 = local_248;
    FStack_180.Data = FStack_180.Data & 0x202f200ffc7d6fd;
    local_178 = local_178 & 0x90027823833c45c | 0x100;
    FStack_170.Data =
         (FScriptContainerElement *)((ulonglong)FStack_170.Data & 0xffffffe074606800 | 0x81f8000);
    local_188 = (undefined1  [8])((ulonglong)local_188 & 0xb07e06bf001ff0f7 | 0x40060003000008);
    pFVar6 = FEngineShowFlags::FEngineShowFlags
                       ((FEngineShowFlags *)local_208,(FEngineShowFlags *)local_188);
    UDebugDrawService::Draw(pFVar6,pUVar2,(APlayerController *)0x0);
    FVar7 = local_158;
    if (local_268 != (FScriptContainerElement)0x0) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)local_260,L"%s: The two values are not equal.");
      (*pcVar1)(this,local_260,0);
      if ((FScriptContainerElement *)local_260._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_260._0_8_);
      }
      if (local_158 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_158);
      }
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)local_260,L"In section \'%s\'.");
      (*pcVar1)(this);
      FVar7 = (ForElementType<unsigned_int>)local_260._0_8_;
    }
    if (FVar7 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar7);
    }
    local_260._0_8_ = &local_268;
    local_268 = (FScriptContainerElement)0x0;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMDebugDrawServiceTest::RunTest_::__l2::<lambda_4>::operator()_::__l2::<lambda_1>_>
              (local_260);
    local_158 = (ForElementType<unsigned_int>)0x0;
    local_150 = 0;
    local_14c = 0x80;
    FEngineShowFlags::Init((FEngineShowFlags *)local_188,ESFIM_Game);
    pUVar2 = local_248;
    local_188 = (undefined1  [8])((ulonglong)local_188 | 8);
    pFVar6 = FEngineShowFlags::FEngineShowFlags
                       ((FEngineShowFlags *)local_208,(FEngineShowFlags *)local_188);
    UDebugDrawService::Draw(pFVar6,pUVar2,(APlayerController *)0x0);
    FVar7 = local_158;
    if (local_268 != (FScriptContainerElement)0x0) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)local_260,L"%s: The two values are not equal.");
      (*pcVar1)(this,local_260,0);
      if ((FScriptContainerElement *)local_260._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_260._0_8_);
      }
      if (local_158 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_158);
      }
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)local_260,L"In section \'%s\'.");
      (*pcVar1)(this,local_260,1);
      FVar7 = (ForElementType<unsigned_int>)local_260._0_8_;
    }
    if (FVar7 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar7);
    }
    FCanvas::~FCanvas(&local_148);
    FRenderTarget::~FRenderTarget(&local_238);
  }
  else {
    ::FString::FString((FString *)local_260,
                       L"SKIPPED \'FAutoRTFMDebugDrawServiceTest\' test. AutoRTFM disabled.");
    _Src = local_260._0_8_;
    local_188 = (undefined1  [8])((ulonglong)local_188 & 0xffffffffffffff00);
    FStack_180.Data = (FScriptContainerElement *)0x0;
    iVar8 = (int)local_260._8_8_;
    local_178 = CONCAT44(local_178._4_4_,iVar8);
    if (iVar8 == 0) {
      local_178 = local_260._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar8,0,&FStack_180,iVar8,(int *)((longlong)&local_178 + 4));
      memcpy(FStack_180.Data,(void *)_Src,(longlong)iVar8 * 2);
    }
    local_160._0_4_ = 0;
    local_160._4_4_ = 0;
    FStack_170.Data = (FScriptContainerElement *)0x0;
    auStack_168[0] = '\0';
    auStack_168[1] = '\0';
    auStack_168[2] = '\0';
    auStack_168[3] = '\0';
    auStack_168[4] = '\0';
    auStack_168[5] = '\0';
    auStack_168[6] = '\0';
    auStack_168[7] = '\0';
    local_158 = (ForElementType<unsigned_int>)0x0;
    FAutomationTestExecutionInfo::AddEvent
              ((FAutomationTestExecutionInfo *)&this->field_0x30,(FAutomationEvent *)local_188,0,
               true);
    if (FStack_170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_170.Data);
    }
    if (FStack_180.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_180.Data);
    }
    if ((FScriptContainerElement *)local_260._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_260._0_8_);
    }
  }
  return true;
}

// GetBeautifiedTestName @ 1487d94d0

FString * __thiscall
FAutoRTFMDebugDrawServiceTest::GetBeautifiedTestName
          (FAutoRTFMDebugDrawServiceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"AutoRTFM + UDebugDrawService");
  return __return_storage_ptr__;
}

