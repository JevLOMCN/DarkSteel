// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetTestFlags @ 1487ef360

EAutomationTestFlags __thiscall FAutoRTFMTickerTest::GetTestFlags(FAutoRTFMTickerTest *this)

{
  return EngineFilter|CommandletContext|ServerContext|ClientContext;
}

// IsStressTest @ 1487ef370

bool __thiscall FAutoRTFMTickerTest::IsStressTest(FAutoRTFMTickerTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487ef380

uint __thiscall FAutoRTFMTickerTest::GetRequiredDeviceNum(FAutoRTFMTickerTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487ef390

FString * __thiscall
FAutoRTFMTickerTest::GetTestSourceFileName
          (FAutoRTFMTickerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutoRTFM\\AutoRTFMTickerTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487ef3c0

int __thiscall FAutoRTFMTickerTest::GetTestSourceFileLine(FAutoRTFMTickerTest *this)

{
  return 0xd;
}

// GetTests @ 1487ef720

/* WARNING: Removing unreachable block (ram,0x0001487ef80d) */
/* WARNING: Removing unreachable block (ram,0x0001487ef8d8) */

void __thiscall
FAutoRTFMTickerTest::GetTests
          (FAutoRTFMTickerTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"AutoRTFM + FTSTicker");
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

// RunTest @ 1487ef900

bool __thiscall FAutoRTFMTickerTest::RunTest(FAutoRTFMTickerTest *this,FString *param_1)

{
  code *pcVar1;
  float fVar2;
  FAutoRTFMTickerTest *pFVar3;
  bool bVar4;
  FTSTicker *pFVar5;
  undefined4 *puVar6;
  float *pfVar7;
  ulong64 uVar8;
  <lambda_1> local_res20;
  <lambda_9> local_c8;
  vector<float,std::allocator<float>_> *local_a8;
  FTSTicker *local_a0;
  FAutoRTFMTickerTest *local_98;
  vector<float,std::allocator<float>_> local_90;
  FAutomationEvent local_78;
  
  bVar4 = AutoRTFM::ForTheRuntime::IsAutoRTFMRuntimeEnabledInternal();
  if (bVar4) {
    pFVar5 = FTSTicker::GetCoreTicker();
    local_res20.CallbackEvents = &local_90;
    local_a8 = &local_90;
    local_c8.Delegate = &local_res20;
    local_c8.CallbackEvents = &local_90;
    local_90._Mypair._Myval2._Myfirst = (float *)0x0;
    local_90._Mypair._Myval2._Mylast = (float *)0x0;
    local_90._Mypair._Myval2._Myend = (float *)0x0;
    local_c8.Ticker = pFVar5;
    local_c8.__this = this;
    local_a0 = pFVar5;
    local_98 = this;
    `FAutoRTFMTickerTest::RunTest'::__l2::<lambda_2>::
    operator()<__FAutoRTFMTickerTest::RunTest_::__l2::<lambda_3>::operator()_::__l2::<lambda_1>_>
              (&local_a8,L"Explicit remove",(<lambda_1> *)&local_c8);
    local_c8.Delegate = &local_res20;
    local_c8.CallbackEvents = &local_90;
    local_c8.Ticker = pFVar5;
    local_c8.__this = this;
    bVar4 = ``FAutoRTFMTickerTest::RunTest'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::
            operator()(&local_c8);
    pfVar7 = (local_a8->_Mypair)._Myval2._Myfirst;
    if (pfVar7 != (local_a8->_Mypair)._Myval2._Mylast) {
      (local_a8->_Mypair)._Myval2._Mylast = pfVar7;
    }
    FTSTicker::Reset(local_a0);
    pFVar3 = local_98;
    if (!bVar4) {
      pcVar1 = *(code **)(*(longlong *)local_98 + 0x28);
      ::FString::PrintfImpl((FString *)&local_c8,L"In section \'%s\'.");
      (*pcVar1)(pFVar3,&local_c8,1);
      if (local_c8.Ticker != (FTSTicker *)0x0) {
        FMemory::Free(local_c8.Ticker);
      }
    }
    pfVar7 = (local_a8->_Mypair)._Myval2._Myfirst;
    if (pfVar7 != (local_a8->_Mypair)._Myval2._Mylast) {
      (local_a8->_Mypair)._Myval2._Mylast = pfVar7;
    }
    FTSTicker::Reset(local_a0);
    local_c8.Delegate = &local_res20;
    local_c8.Ticker = pFVar5;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMTickerTest::RunTest_::__l2::<lambda_4>::operator()_::__l2::<lambda_1>_>
              (&local_c8);
    fVar2 = __real_3f800000;
    FTSTicker::Tick(pFVar5,__real_3f800000);
    puVar6 = std::_Allocate<16,std::_Default_allocate_traits>(4);
    *puVar6 = 0x3f800000;
    if (((longlong)local_90._Mypair._Myval2._Mylast - (longlong)local_90._Mypair._Myval2._Myfirst &
        0xfffffffffffffffcU) == 4) {
      if (local_90._Mypair._Myval2._Myfirst != local_90._Mypair._Myval2._Mylast) {
        pfVar7 = local_90._Mypair._Myval2._Myfirst;
        do {
          if (*(float *)(((longlong)puVar6 - (longlong)local_90._Mypair._Myval2._Myfirst) +
                        (longlong)pfVar7) != *pfVar7) goto LAB_1487efb77;
          pfVar7 = pfVar7 + 1;
        } while (pfVar7 != local_90._Mypair._Myval2._Mylast);
      }
      bVar4 = false;
    }
    else {
LAB_1487efb77:
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_c8,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_c8,0);
      if (local_c8.Ticker != (FTSTicker *)0x0) {
        FMemory::Free(local_c8.Ticker);
      }
      bVar4 = true;
    }
    if (puVar6 != (undefined4 *)0x0) {
      ::operator_delete(puVar6,4);
    }
    pfVar7 = (local_a8->_Mypair)._Myval2._Myfirst;
    if (pfVar7 != (local_a8->_Mypair)._Myval2._Mylast) {
      (local_a8->_Mypair)._Myval2._Mylast = pfVar7;
    }
    FTSTicker::Reset(local_a0);
    pFVar3 = local_98;
    if (bVar4) {
      pcVar1 = *(code **)(*(longlong *)local_98 + 0x28);
      ::FString::PrintfImpl((FString *)&local_c8,L"In section \'%s\'.");
      (*pcVar1)(pFVar3,&local_c8,1);
      if (local_c8.Ticker != (FTSTicker *)0x0) {
        FMemory::Free(local_c8.Ticker);
      }
    }
    local_c8.Delegate = &local_res20;
    local_c8.Ticker = pFVar5;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMTickerTest::RunTest_::__l2::<lambda_5>::operator()_::__l2::<lambda_1>_>
              (&local_c8);
    FTSTicker::Tick(pFVar5,fVar2);
    pfVar7 = local_90._Mypair._Myval2._Myfirst;
    if ((ulonglong)
        ((longlong)local_90._Mypair._Myval2._Mylast - (longlong)local_90._Mypair._Myval2._Myfirst) <
        4) {
      for (; pfVar7 != local_90._Mypair._Myval2._Mylast; pfVar7 = pfVar7 + 1) {
        if (*(float *)((longlong)pfVar7 - (longlong)local_90._Mypair._Myval2._Myfirst) != *pfVar7)
        goto LAB_1487efc7c;
      }
      bVar4 = false;
    }
    else {
LAB_1487efc7c:
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_c8,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_c8,0);
      if (local_c8.Ticker != (FTSTicker *)0x0) {
        FMemory::Free(local_c8.Ticker);
      }
      bVar4 = true;
    }
    pfVar7 = (local_a8->_Mypair)._Myval2._Myfirst;
    if (pfVar7 != (local_a8->_Mypair)._Myval2._Mylast) {
      (local_a8->_Mypair)._Myval2._Mylast = pfVar7;
    }
    FTSTicker::Reset(local_a0);
    pFVar3 = local_98;
    if (bVar4) {
      pcVar1 = *(code **)(*(longlong *)local_98 + 0x28);
      ::FString::PrintfImpl((FString *)&local_c8,L"In section \'%s\'.");
      (*pcVar1)(pFVar3,&local_c8,1);
      if (local_c8.Ticker != (FTSTicker *)0x0) {
        FMemory::Free(local_c8.Ticker);
      }
    }
    local_c8.Delegate = &local_res20;
    local_c8.Ticker = pFVar5;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMTickerTest::RunTest_::__l2::<lambda_6>::operator()_::__l2::<lambda_1>_>
              (&local_c8);
    FTSTicker::Tick(pFVar5,fVar2);
    pfVar7 = local_90._Mypair._Myval2._Myfirst;
    if ((ulonglong)
        ((longlong)local_90._Mypair._Myval2._Mylast - (longlong)local_90._Mypair._Myval2._Myfirst) <
        4) {
      for (; pfVar7 != local_90._Mypair._Myval2._Mylast; pfVar7 = pfVar7 + 1) {
        if (*(float *)((longlong)pfVar7 - (longlong)local_90._Mypair._Myval2._Myfirst) != *pfVar7)
        goto LAB_1487efd6c;
      }
      bVar4 = false;
    }
    else {
LAB_1487efd6c:
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_c8,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_c8,0);
      if (local_c8.Ticker != (FTSTicker *)0x0) {
        FMemory::Free(local_c8.Ticker);
      }
      bVar4 = true;
    }
    pfVar7 = (local_a8->_Mypair)._Myval2._Myfirst;
    if (pfVar7 != (local_a8->_Mypair)._Myval2._Mylast) {
      (local_a8->_Mypair)._Myval2._Mylast = pfVar7;
    }
    FTSTicker::Reset(local_a0);
    pFVar3 = local_98;
    if (bVar4) {
      pcVar1 = *(code **)(*(longlong *)local_98 + 0x28);
      ::FString::PrintfImpl((FString *)&local_c8,L"In section \'%s\'.");
      (*pcVar1)(pFVar3,&local_c8,1);
      if (local_c8.Ticker != (FTSTicker *)0x0) {
        FMemory::Free(local_c8.Ticker);
      }
    }
    local_c8.Delegate = &local_res20;
    local_c8.Ticker = pFVar5;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMTickerTest::RunTest_::__l2::<lambda_7>::operator()_::__l2::<lambda_1>_>
              (&local_c8);
    FTSTicker::Tick(pFVar5,fVar2);
    pfVar7 = local_90._Mypair._Myval2._Myfirst;
    if ((ulonglong)
        ((longlong)local_90._Mypair._Myval2._Mylast - (longlong)local_90._Mypair._Myval2._Myfirst) <
        4) {
      for (; pfVar7 != local_90._Mypair._Myval2._Mylast; pfVar7 = pfVar7 + 1) {
        if (*(float *)((longlong)pfVar7 - (longlong)local_90._Mypair._Myval2._Myfirst) != *pfVar7)
        goto LAB_1487efe5c;
      }
      bVar4 = false;
    }
    else {
LAB_1487efe5c:
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_c8,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_c8,0);
      if (local_c8.Ticker != (FTSTicker *)0x0) {
        FMemory::Free(local_c8.Ticker);
      }
      bVar4 = true;
    }
    pfVar7 = (local_a8->_Mypair)._Myval2._Myfirst;
    if (pfVar7 != (local_a8->_Mypair)._Myval2._Mylast) {
      (local_a8->_Mypair)._Myval2._Mylast = pfVar7;
    }
    FTSTicker::Reset(local_a0);
    pFVar3 = local_98;
    if (bVar4) {
      pcVar1 = *(code **)(*(longlong *)local_98 + 0x28);
      ::FString::PrintfImpl((FString *)&local_c8,L"In section \'%s\'.");
      (*pcVar1)(pFVar3,&local_c8,1);
      if (local_c8.Ticker != (FTSTicker *)0x0) {
        FMemory::Free(local_c8.Ticker);
      }
    }
    local_c8.Delegate = &local_res20;
    local_c8.Ticker = pFVar5;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMTickerTest::RunTest_::__l2::<lambda_8>::operator()_::__l2::<lambda_1>_>
              (&local_c8);
    local_c8.Delegate = &local_res20;
    local_c8.Ticker = pFVar5;
    AutoRTFM::
    AutoRTFMFunctorInvoker<__FAutoRTFMTickerTest::RunTest_::__l2::<lambda_8>::operator()_::__l2::<lambda_2>_>
              (&local_c8);
    FTSTicker::Tick(pFVar5,fVar2);
    puVar6 = std::_Allocate<16,std::_Default_allocate_traits>(4);
    *puVar6 = 0x3f800000;
    if (((longlong)local_90._Mypair._Myval2._Mylast - (longlong)local_90._Mypair._Myval2._Myfirst &
        0xfffffffffffffffcU) == 4) {
      if (local_90._Mypair._Myval2._Myfirst != local_90._Mypair._Myval2._Mylast) {
        pfVar7 = local_90._Mypair._Myval2._Myfirst;
        do {
          if (*(float *)(((longlong)puVar6 - (longlong)local_90._Mypair._Myval2._Myfirst) +
                        (longlong)pfVar7) != *pfVar7) goto LAB_1487eff87;
          pfVar7 = pfVar7 + 1;
        } while (pfVar7 != local_90._Mypair._Myval2._Mylast);
      }
      bVar4 = false;
    }
    else {
LAB_1487eff87:
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_c8,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_c8,0);
      if (local_c8.Ticker != (FTSTicker *)0x0) {
        FMemory::Free(local_c8.Ticker);
      }
      bVar4 = true;
    }
    if (puVar6 != (undefined4 *)0x0) {
      ::operator_delete(puVar6,4);
    }
    pfVar7 = (local_a8->_Mypair)._Myval2._Myfirst;
    if (pfVar7 != (local_a8->_Mypair)._Myval2._Mylast) {
      (local_a8->_Mypair)._Myval2._Mylast = pfVar7;
    }
    FTSTicker::Reset(local_a0);
    pFVar3 = local_98;
    if (bVar4) {
      pcVar1 = *(code **)(*(longlong *)local_98 + 0x28);
      ::FString::PrintfImpl((FString *)&local_c8,L"In section \'%s\'.");
      (*pcVar1)(pFVar3,&local_c8,1);
      if (local_c8.Ticker != (FTSTicker *)0x0) {
        FMemory::Free(local_c8.Ticker);
      }
    }
    local_c8.Delegate = &local_res20;
    local_c8.CallbackEvents = &local_90;
    local_c8.Ticker = pFVar5;
    local_c8.__this = this;
    `FAutoRTFMTickerTest::RunTest'::__l2::<lambda_2>::
    operator()<_FAutoRTFMTickerTest::RunTest_::__l2::<lambda_9>_>
              (&local_a8,L"AddTicker, Transact(RemoveTicker), Tick",&local_c8);
    local_c8.Delegate = &local_res20;
    local_c8.CallbackEvents = &local_90;
    local_c8.Ticker = pFVar5;
    local_c8.__this = this;
    bVar4 = `FAutoRTFMTickerTest::RunTest'::__l2::<lambda_10>::operator()(&local_c8);
    pfVar7 = (local_a8->_Mypair)._Myval2._Myfirst;
    if (pfVar7 != (local_a8->_Mypair)._Myval2._Mylast) {
      (local_a8->_Mypair)._Myval2._Mylast = pfVar7;
    }
    FTSTicker::Reset(local_a0);
    pFVar3 = local_98;
    if (!bVar4) {
      pcVar1 = *(code **)(*(longlong *)local_98 + 0x28);
      ::FString::PrintfImpl((FString *)&local_c8,L"In section \'%s\'.");
      (*pcVar1)(pFVar3,&local_c8);
      if (local_c8.Ticker != (FTSTicker *)0x0) {
        FMemory::Free(local_c8.Ticker);
      }
    }
    if (local_90._Mypair._Myval2._Myfirst != (float *)0x0) {
      uVar8 = (longlong)local_90._Mypair._Myval2._Myend -
              (longlong)local_90._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
      pfVar7 = local_90._Mypair._Myval2._Myfirst;
      if (0xfff < uVar8) {
        pfVar7 = *(float **)(local_90._Mypair._Myval2._Myfirst + -2);
        uVar8 = uVar8 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_90._Mypair._Myval2._Myfirst + (-8 - (longlong)pfVar7))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pfVar7,uVar8);
    }
  }
  else {
    ::FString::FString((FString *)&local_c8,
                       L"SKIPPED \'FAutoRTFMTickerTest\' test. AutoRTFM disabled.");
    pFVar5 = local_c8.Ticker;
    local_78.Type = Info;
    local_78.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((int)local_c8.Delegate == 0) {
      local_78.Message.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_c8.Delegate,0,(ForAnyElementType *)&local_78.Message,
                 (int)local_c8.Delegate,&local_78.Message.Data.ArrayMax);
      memcpy(local_78.Message.Data.AllocatorInstance.Data,pFVar5,
             (longlong)(int)local_c8.Delegate * 2);
    }
    local_78.Artifact.A = 0;
    local_78.Artifact.B = 0;
    local_78.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Context.Data.ArrayNum = 0;
    local_78.Context.Data.ArrayMax = 0;
    local_78.Artifact.C = 0;
    local_78.Artifact.D = 0;
    FAutomationTestExecutionInfo::AddEvent
              ((FAutomationTestExecutionInfo *)&this->field_0x30,&local_78,0,true);
    if (local_78.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Context.Data.AllocatorInstance.Data);
    }
    if (local_78.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Message.Data.AllocatorInstance.Data);
    }
    if (local_c8.Ticker != (FTSTicker *)0x0) {
      FMemory::Free(local_c8.Ticker);
      return true;
    }
  }
  return true;
}

// GetBeautifiedTestName @ 1487f0150

FString * __thiscall
FAutoRTFMTickerTest::GetBeautifiedTestName
          (FAutoRTFMTickerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"AutoRTFM + FTSTicker");
  return __return_storage_ptr__;
}

// operator() @ 14880e3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall `FAutoRTFMTickerTest::RunTest'::__l2::<lambda_10>::operator()(void *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  float *pfVar4;
  code *pcVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined ***pppuVar8;
  float *pfVar9;
  bool bVar10;
  undefined1 auStackY_a8 [32];
  TWeakPtr<FTSTicker::FElement,1> local_68;
  TWeakPtr<FTSTicker::FElement,1> local_58;
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_38[0] = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FAutoRTFMTickerTest::RunTest'::`2'::<lambda_1>,1,0>::
                 _vftable_;
  local_20 = (undefined ***)0x0;
  local_38[1] = (undefined **)**(undefined8 **)((longlong)this + 8);
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FAutoRTFMTickerTest::RunTest'::__l2::<lambda_1>,bool,float>::
                Call;
  FTSTicker::AddTicker
            (*(FTSTicker **)this,&local_58,L"",__real_3dcccccd,
             (TUniqueFunction<bool___cdecl(float)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar8 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar8 = local_20;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  local_68.Object = local_58.Object;
  local_68.WeakReferenceCount.ReferenceController = local_58.WeakReferenceCount.ReferenceController;
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_68);
  FTSTicker::Tick(*(FTSTicker **)this,__real_3f800000);
  plVar3 = *(longlong **)((longlong)this + 0x10);
  puVar6 = std::_Allocate<16,std::_Default_allocate_traits>(4);
  *puVar6 = 0x3f800000;
  pfVar4 = (float *)(*(undefined8 **)((longlong)this + 0x18))[1];
  pfVar9 = (float *)**(undefined8 **)((longlong)this + 0x18);
  if (((longlong)pfVar4 - (longlong)pfVar9 & 0xfffffffffffffffcU) == 4) {
    if (pfVar9 != pfVar4) {
      lVar7 = (longlong)puVar6 - (longlong)pfVar9;
      do {
        if (*(float *)(lVar7 + (longlong)pfVar9) != *pfVar9) goto LAB_14880e51b;
        pfVar9 = pfVar9 + 1;
      } while (pfVar9 != pfVar4);
    }
    bVar10 = true;
  }
  else {
LAB_14880e51b:
    pcVar5 = *(code **)(*plVar3 + 0x28);
    ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
    (*pcVar5)(plVar3,&local_68,0);
    if (local_68.Object != (FElement *)0x0) {
      FMemory::Free(local_68.Object);
    }
    bVar10 = false;
  }
  if (puVar6 != (undefined4 *)0x0) {
    ::operator_delete(puVar6,4);
  }
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
  }
  return bVar10;
}

