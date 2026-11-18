// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetTestFlags @ 14886f930

EAutomationTestFlags __thiscall
FLoadingTests_Flush_InvalidFromWorker::GetTestFlags(FLoadingTests_Flush_InvalidFromWorker *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14886f940

bool __thiscall
FLoadingTests_Flush_InvalidFromWorker::IsStressTest(FLoadingTests_Flush_InvalidFromWorker *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14886f950

uint __thiscall
FLoadingTests_Flush_InvalidFromWorker::GetRequiredDeviceNum
          (FLoadingTests_Flush_InvalidFromWorker *this)

{
  return 1;
}

// GetTestSourceFileName @ 14886f960

FString * __thiscall
FLoadingTests_Flush_InvalidFromWorker::GetTestSourceFileName
          (FLoadingTests_Flush_InvalidFromWorker *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_Flushes.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14886f990

int __thiscall
FLoadingTests_Flush_InvalidFromWorker::GetTestSourceFileLine
          (FLoadingTests_Flush_InvalidFromWorker *this)

{
  return 0x18;
}

// GetTests @ 14886f9a0

/* WARNING: Removing unreachable block (ram,0x00014886fa8d) */
/* WARNING: Removing unreachable block (ram,0x00014886fb58) */

void __thiscall
FLoadingTests_Flush_InvalidFromWorker::GetTests
          (FLoadingTests_Flush_InvalidFromWorker *this,
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
  
  ::FString::FString(&local_18,L"System.Engine.Loading.Flush.InvalidFromWorker");
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

// RunTest @ 14886fb80

bool __thiscall
FLoadingTests_Flush_InvalidFromWorker::RunTest
          (FLoadingTests_Flush_InvalidFromWorker *this,FString *param_1)

{
  FString *pFVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FString local_a8;
  TFunction<void___cdecl(FLoadingTestsScope_&)> local_98;
  FLoadingTestsScope local_68;
  
  pFVar1 = ::FString::FString(&local_a8,L"is unable to FlushAsyncLoading from the current thread");
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar1,Contains,1,true);
  pFVar1 = ::FString::FString(&local_a8,L"[Callstack]");
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar1,Contains,0,true);
  local_98._0_8_ = 0;
  local_98._40_8_ = 0;
  FLoadingTestsScope::FLoadingTestsScope(&local_68,(FAutomationTestBase *)this,&local_98);
  puVar2 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)&UAsyncLoadingTests_Shared::OnSerialize);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive__PEAVUAsyncLoadingTests_Shared___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FArchive_&,UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_Flush_InvalidFromWorker::RunTest'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = this;
  }
  FLoadingTestsScope::LoadObjects(&local_68);
  FLoadingTestsScope::~FLoadingTestsScope(&local_68);
  return true;
}

// GetBeautifiedTestName @ 14886fc70

FString * __thiscall
FLoadingTests_Flush_InvalidFromWorker::GetBeautifiedTestName
          (FLoadingTests_Flush_InvalidFromWorker *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"System.Engine.Loading.Flush.InvalidFromWorker");
  return __return_storage_ptr__;
}

// operator() @ 148880870

/* WARNING: Removing unreachable block (ram,0x000148880904) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`FLoadingTests_Flush_InvalidFromWorker::RunTest'::__l2::<lambda_1>::operator()
          (void *this,FArchive *param_1,UAsyncLoadingTests_Shared *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  double dVar3;
  FMonotonicTimePoint FVar4;
  TExecutableTask<_public:___cdecl__protected:_virtual_bool___cdecl_FLoadingTests_Flush_InvalidFromWorker::RunTest(FString_const_&)_::_2_::<lambda_1>::operator()(FArchive_&,UAsyncLoadingTests_Shared_*)const_::_5_::<lambda_1>_>
  *this_00;
  FManualResetEvent local_res10 [16];
  <lambda_1> local_res20;
  FWaitState local_28 [2];
  
  if ((param_1->field_0x28 & 1) != 0) {
    local_res20.Event = local_res10;
    local_res10[0].State = (atomic<unsigned_char>)0x0;
    this_00 = UE::Tasks::Private::
              TExecutableTask<``FLoadingTests_Flush_InvalidFromWorker::RunTest'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
              ::Create(L"FlushAsyncLoading",&local_res20,Default,None,None);
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x100);
    dVar3 = __real_7ff0000000000000.Time;
    if (this_00 !=
        (TExecutableTask<_public:___cdecl__protected:_virtual_bool___cdecl_FLoadingTests_Flush_InvalidFromWorker::RunTest(FString_const_&)_::_2_::<lambda_1>::operator()(FArchive_&,UAsyncLoadingTests_Shared_*)const_::_5_::<lambda_1>_>
         *)0x0) {
      LOCK();
      puVar1 = &this_00->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      dVar3 = __real_7ff0000000000000.Time;
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)this_00)(this_00,1);
        dVar3 = __real_7ff0000000000000.Time;
      }
    }
    while (FVar4.Time = __real_7ff0000000000000.Time, __real_7ff0000000000000.Time = dVar3,
          ((byte)local_res10[0].State & 1) == 0) {
      if (((byte)local_res10[0].State & 2) == 0) {
        LOCK();
        local_res10[0].State = (atomic<unsigned_char>)0x2;
        UNLOCK();
      }
      local_res20.Event = local_res10;
      UE::ParkingLot::Private::WaitUntil
                (local_28,local_res10,
                 UE::TFunctionWithContext<bool___cdecl(void)>::
                 Call<_UE::FManualResetEvent::WaitUntil_::__l13::<lambda_1>_>,&local_res20,
                 (_func___cdecl_void_void_ptr *)0x0,(void *)0x0,FVar4);
      dVar3 = __real_7ff0000000000000.Time;
      __real_7ff0000000000000.Time = FVar4.Time;
    }
  }
  return;
}

