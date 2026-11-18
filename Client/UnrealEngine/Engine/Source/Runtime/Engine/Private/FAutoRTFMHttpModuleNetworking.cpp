// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetTestFlags @ 1487dbd00

EAutomationTestFlags __thiscall
FAutoRTFMHttpModuleNetworking::GetTestFlags(FAutoRTFMHttpModuleNetworking *this)

{
  return EngineFilter|RequiresUser|CommandletContext|ServerContext|ClientContext;
}

// IsStressTest @ 1487dbd10

bool __thiscall FAutoRTFMHttpModuleNetworking::IsStressTest(FAutoRTFMHttpModuleNetworking *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487dbd20

uint __thiscall
FAutoRTFMHttpModuleNetworking::GetRequiredDeviceNum(FAutoRTFMHttpModuleNetworking *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487dbd30

FString * __thiscall
FAutoRTFMHttpModuleNetworking::GetTestSourceFileName
          (FAutoRTFMHttpModuleNetworking *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutoRTFM\\AutoRTFMHttpModuleTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487dbd60

int __thiscall
FAutoRTFMHttpModuleNetworking::GetTestSourceFileLine(FAutoRTFMHttpModuleNetworking *this)

{
  return 0x4c;
}

// GetTests @ 1487dbd70

/* WARNING: Removing unreachable block (ram,0x0001487dbe5d) */
/* WARNING: Removing unreachable block (ram,0x0001487dbf28) */

void __thiscall
FAutoRTFMHttpModuleNetworking::GetTests
          (FAutoRTFMHttpModuleNetworking *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"AutoRTFM + HttpModuleNetworking");
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

// RunTest @ 1487dbf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FAutoRTFMHttpModuleNetworking::RunTest(FAutoRTFMHttpModuleNetworking *this,FString *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined1 uVar6;
  ForAnyElementType FVar7;
  float fVar8;
  undefined1 auStackY_278 [32];
  FAutoRTFMHttpModuleNetworking *local_238;
  FAutomationEvent local_230;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FAutoRTFMHttpModuleNetworking **local_188;
  undefined1 *local_180;
  FAutoRTFMHttpModuleNetworking *local_178;
  FAutoRTFMHttpModuleNetworking **local_170;
  undefined1 *local_168;
  FAutoRTFMHttpModuleNetworking *local_160;
  undefined1 local_158 [152];
  void *local_c0;
  undefined4 local_b8;
  ForAnyElementType local_b0;
  ForAnyElementType local_a0;
  ForAnyElementType local_88;
  int local_80;
  int local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_278;
  bVar5 = AutoRTFM::ForTheRuntime::IsAutoRTFMRuntimeEnabledInternal();
  if (bVar5) {
    local_238 = this;
    FHttpTestModule::FHttpTestModule((FHttpTestModule *)local_158);
    `FAutoRTFMHttpModuleNetworking::RunTest'::__l2::<lambda_1>::operator()
              (&local_238,(FHttpModule *)local_158);
    bVar5 = local_78 == 1;
    ::FString::FString(&local_1d8,"HTTP requests are issued immediately outside of a transaction");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_1d8.Data.ArrayNum != 0) {
      FVar7.Data = local_1d8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,bVar5);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    local_1f8 = (undefined8 *)local_158;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMHttpModuleNetworking::RunTest_::__l2::<lambda_2>_>
              (&local_1f8);
    local_1f0 = (undefined8 *)local_158;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMHttpModuleNetworking::RunTest_::__l2::<lambda_3>_>
              (&local_1f0);
    local_188 = &local_238;
    local_180 = local_158;
    local_178 = this;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMHttpModuleNetworking::RunTest_::__l2::<lambda_4>_>
              (&local_188);
    bVar5 = local_78 == 1;
    ::FString::FString(&local_1c8,"HTTP requests are abandoned on abort");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_1c8.Data.ArrayNum != 0) {
      FVar7.Data = local_1c8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,bVar5);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    local_170 = &local_238;
    local_168 = local_158;
    local_160 = this;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMHttpModuleNetworking::RunTest_::__l2::<lambda_5>_>
              (&local_170);
    bVar5 = local_78 == 2;
    ::FString::FString(&local_1b8,"HTTP requests are issued when transaction commits");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_1b8.Data.ArrayNum != 0) {
      FVar7.Data = local_1b8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,bVar5);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    fVar4 = __real_44160000;
    fVar3 = __real_3c888889;
    fVar2 = __real_3f800000;
    fVar8 = 0.0;
    do {
      FWindowsPlatformProcess::Sleep(fVar3);
      if (((FHttpManager *)local_158._32_8_ == (FHttpManager *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("HttpManager != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                             ,0x50,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      (**(code **)(*(longlong *)local_158._32_8_ + 8))(local_158._32_8_,fVar3);
      if (local_78 == 0) {
        bVar5 = true;
        goto LAB_1487dc24a;
      }
      fVar8 = fVar8 + fVar2;
    } while (fVar8 < fVar4);
    bVar5 = false;
LAB_1487dc24a:
    ::FString::FString(&local_1a8,"HTTP requests complete normally without timing out");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_1a8.Data.ArrayNum != 0) {
      FVar7.Data = local_1a8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,bVar5);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_198,"HTTP requests fully complete");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_198.Data.ArrayNum != 0) {
      FVar7.Data = local_198.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,local_78 == 0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    local_158._0_8_ = &FHttpTestModule::_vftable__for__IModuleInterface__;
    local_158._8_8_ = &FHttpTestModule::_vftable__for__FSelfRegisteringExec__;
    FHttpModule::ShutdownModule((FHttpModule *)local_158);
    DestructItems<FString,int>((FString *)local_88.Data,local_80);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
    if (local_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data);
    }
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    local_b8 = 0;
    if (local_c0 != (void *)0x0) {
      FMemory::Free(local_c0);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_158 + 0x58));
    FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)(local_158 + 8));
  }
  else {
    ::FString::FString(&local_1e8,L"SKIPPED \'FAutoRTFMHttpModuleTests\' test. AutoRTFM disabled.");
    FVar7.Data = local_1e8.Data.AllocatorInstance.Data;
    local_230.Type = Info;
    local_230.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_1e8.Data.ArrayNum == 0) {
      local_230.Message.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1e8.Data.ArrayNum,0,(ForAnyElementType *)&local_230.Message,
                 local_1e8.Data.ArrayNum,&local_230.Message.Data.ArrayMax);
      memcpy(local_230.Message.Data.AllocatorInstance.Data,FVar7.Data,
             (longlong)local_1e8.Data.ArrayNum * 2);
    }
    local_230.Artifact.A = 0;
    local_230.Artifact.B = 0;
    local_230.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_230.Context.Data.ArrayNum = 0;
    local_230.Context.Data.ArrayMax = 0;
    local_230.Artifact.C = 0;
    local_230.Artifact.D = 0;
    FAutomationTestExecutionInfo::AddEvent
              ((FAutomationTestExecutionInfo *)&this->field_0x30,&local_230,0,true);
    if (local_230.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Context.Data.AllocatorInstance.Data);
    }
    if (local_230.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Message.Data.AllocatorInstance.Data);
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// GetBeautifiedTestName @ 1487dc3a0

FString * __thiscall
FAutoRTFMHttpModuleNetworking::GetBeautifiedTestName
          (FAutoRTFMHttpModuleNetworking *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"AutoRTFM + HttpModuleNetworking");
  return __return_storage_ptr__;
}

// operator() @ 14880f1c0

void __thiscall
`FAutoRTFMHttpModuleNetworking::RunTest'::__l2::<lambda_1>::operator()
          (void *this,FHttpModule *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  bool bVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar5;
  ulong64 uVar6;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  FString local_28;
  FString local_18;
  
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
  plVar3 = local_38;
  pcVar1 = *(code **)(*local_38 + 0x60);
  ::FString::FString(&local_28,L"GET");
  (*pcVar1)(plVar3,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  plVar3 = local_38;
  pcVar1 = *(code **)(*local_38 + 0x68);
  ::FString::FString(&local_18,L"https://www.epicgames.com/favicon.ico");
  (*pcVar1)(plVar3,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*local_38 + 0xf0))();
  uVar2 = *(undefined8 *)this;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection(lpCriticalSection);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)(lpCriticalSection + 1));
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,``FAutoRTFMHttpModuleNetworking::RunTest'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = uVar2;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  (**(code **)(*local_38 + 0xe8))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return;
}

