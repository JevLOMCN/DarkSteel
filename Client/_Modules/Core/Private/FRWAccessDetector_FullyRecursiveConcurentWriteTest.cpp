// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// GetTestFlags @ 1418a3820

EAutomationTestFlags __thiscall
FRWAccessDetector_FullyRecursiveConcurentWriteTest::GetTestFlags
          (FRWAccessDetector_FullyRecursiveConcurentWriteTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1418a3830

bool __thiscall
FRWAccessDetector_FullyRecursiveConcurentWriteTest::IsStressTest
          (FRWAccessDetector_FullyRecursiveConcurentWriteTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1418a3840

uint __thiscall
FRWAccessDetector_FullyRecursiveConcurentWriteTest::GetRequiredDeviceNum
          (FRWAccessDetector_FullyRecursiveConcurentWriteTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1418a3850

FString * __thiscall
FRWAccessDetector_FullyRecursiveConcurentWriteTest::GetTestSourceFileName
          (FRWAccessDetector_FullyRecursiveConcurentWriteTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1418a3880

int __thiscall
FRWAccessDetector_FullyRecursiveConcurentWriteTest::GetTestSourceFileLine
          (FRWAccessDetector_FullyRecursiveConcurentWriteTest *this)

{
  return 0x130;
}

// GetTests @ 1418a3890

/* WARNING: Removing unreachable block (ram,0x0001418a397d) */
/* WARNING: Removing unreachable block (ram,0x0001418a3a48) */

void __thiscall
FRWAccessDetector_FullyRecursiveConcurentWriteTest::GetTests
          (FRWAccessDetector_FullyRecursiveConcurentWriteTest *this,
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
  
  ::FString::FString(&local_18,
                     "System.Core.Misc.MTAccessDetector.FullyRecursiveConcurrentWriteAccess");
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

// RunTest @ 1418a3a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRWAccessDetector_FullyRecursiveConcurentWriteTest::RunTest
          (FRWAccessDetector_FullyRecursiveConcurentWriteTest *this,FString *param_1)

{
  code *pcVar1;
  int iVar2;
  float fVar3;
  code cVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  DWORD DVar10;
  DWORD DVar11;
  code **ppcVar12;
  undefined1 auStackY_f8 [32];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6 [2];
  int local_b4;
  DWORD local_b0;
  int local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  FThread local_90;
  FThreadAffinity local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  bVar6 = UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure = true;
  local_a0 = 0xffffffffffffffff;
  uStack_98 = 0;
  local_b7 = (code)0x0;
  local_b6[0] = (code)0x0;
  local_b4 = 0;
  local_b0 = 0xffffffff;
  local_ac = 0;
  local_b8 = (code)0x1;
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x30,8);
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FRWAccessDetector_FullyRecursiveConcurentWriteTest::RunTest'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_40[1] = (code *)&local_b8;
  local_40[2] = (code *)this;
  local_40[3] = (code *)&local_b4;
  local_40[4] = (code *)&local_b7;
  local_40[5] = (code *)local_b6;
  if (local_40 + 1 != (code **)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRWAccessDetector_FullyRecursiveConcurentWriteTest::RunTest'::__l2::<lambda_1>,void>
                  ::Call;
  }
  local_78.ThreadAffinityMask = 0xffffffffffffffff;
  local_78.ProcessorGroup = 0;
  local_78._10_6_ = 0;
  ::FThread::FThread(&local_90,L"AccessThread",(TUniqueFunction<void___cdecl(void)> *)local_68,0,
                     TPri_Normal,&local_78,NonForkable);
  fVar3 = __real_3c23d70a;
  cVar4 = local_b8;
  if (local_68[0] != (code *)0x0) {
    ppcVar12 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar12 = local_40;
    }
    (**(code **)(*ppcVar12 + 0x10))();
    fVar3 = __real_3c23d70a;
    cVar4 = local_b8;
  }
  while (fVar5 = __real_3c23d70a, __real_3c23d70a = fVar3, local_b8 = cVar4, local_b7 == (code)0x0)
  {
    FWindowsPlatformProcess::SleepNoStats(fVar5);
    fVar3 = __real_3c23d70a;
    cVar4 = local_b8;
    __real_3c23d70a = fVar5;
  }
  DVar10 = GetCurrentThreadId();
  DVar11 = local_b0;
  if (local_b0 == DVar10) {
LAB_1418a3c26:
    local_b0 = DVar11;
    local_ac = local_ac + 1;
    bVar7 = true;
  }
  else {
    LOCK();
    iVar2 = local_b4 + 0x100000;
    UNLOCK();
    if (local_b4 == 0) {
      local_b4 = iVar2;
      DVar11 = DVar10;
      if ((local_ac != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("RecursiveDepth == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                             ,0xb4,L""), bVar7)) {
        pcVar1 = (code *)swi(3);
        uVar8 = (*pcVar1)();
        return (bool)uVar8;
      }
      goto LAB_1418a3c26;
    }
    local_b4 = iVar2;
    if ((UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x72,
                           L"Acquiring a write access while there are ongoing read or write access")
       , bVar7)) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return (bool)uVar8;
    }
    bVar7 = false;
  }
  bVar7 = FAutomationTestBase::TestFalse
                    ((FAutomationTestBase *)this,L"Acquiring Write Access",bVar7);
  local_b8 = (code)(bVar7 & (byte)cVar4);
  local_b6[0] = (code)0x1;
  ::FThread::Join(&local_90);
  cVar4 = local_b8;
  DVar11 = GetCurrentThreadId();
  if (local_b0 == DVar11) {
    if ((local_ac < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("RecursiveDepth > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0xc5,L""), bVar7)) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return (bool)uVar8;
    }
    local_ac = local_ac + -1;
    if (local_ac != 0) {
      bVar7 = true;
      goto LAB_1418a3ceb;
    }
    local_b0 = 0xffffffff;
  }
  LOCK();
  iVar2 = local_b4 + -0x100000;
  UNLOCK();
  bVar7 = local_b4 == 0x100000;
  local_b4 = iVar2;
  if (((!bVar7) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x7d,
                         L"Another thread asked to have a read or write access during this write access"
                        ), bVar9)) {
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return (bool)uVar8;
  }
LAB_1418a3ceb:
  bVar7 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Releasing Write Access",bVar7)
  ;
  local_b8 = (code)(bVar7 & (byte)cVar4);
  ::FThread::~FThread(&local_90);
  if ((local_b4 != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AtomicValue.load(std::memory_order_relaxed) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x3a,L"Detector cannot be destroyed while other threads access it"), bVar9
     )) {
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return (bool)uVar8;
  }
  UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure = bVar6;
  return (bool)(bVar7 & (byte)cVar4);
}

// GetBeautifiedTestName @ 1418a3d80

FString * __thiscall
FRWAccessDetector_FullyRecursiveConcurentWriteTest::GetBeautifiedTestName
          (FRWAccessDetector_FullyRecursiveConcurentWriteTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Core.Misc.MTAccessDetector.FullyRecursiveConcurrentWriteAccess");
  return __return_storage_ptr__;
}

// operator() @ 1418c2190

bool __thiscall
`FRWAccessDetector_FullyRecursiveConcurentWriteTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this)

{
  byte bVar1;
  char cVar2;
  FAutomationTestBase *pFVar3;
  float fVar4;
  bool bVar5;
  
  pFVar3 = *(FAutomationTestBase **)((longlong)this + 8);
  bVar1 = **(byte **)this;
  bVar5 = FRWRecursiveAccessDetector::AcquireWriteAccess
                    (*(FRWRecursiveAccessDetector **)((longlong)this + 0x10));
  bVar5 = FAutomationTestBase::TestTrue(pFVar3,L"Acquiring Write Access",bVar5);
  **(byte **)this = bVar5 & bVar1;
  **(undefined1 **)((longlong)this + 0x18) = 1;
  fVar4 = __real_3c23d70a;
  cVar2 = **(char **)((longlong)this + 0x20);
  while (cVar2 == '\0') {
    FWindowsPlatformProcess::SleepNoStats(fVar4);
    cVar2 = **(char **)((longlong)this + 0x20);
  }
  pFVar3 = *(FAutomationTestBase **)((longlong)this + 8);
  bVar1 = **(byte **)this;
  bVar5 = FRWRecursiveAccessDetector::ReleaseWriteAccess
                    (*(FRWRecursiveAccessDetector **)((longlong)this + 0x10));
  bVar5 = FAutomationTestBase::TestFalse(pFVar3,L"Releasing Read Access",bVar5);
  **(byte **)this = bVar5 & bVar1;
  return true;
}

