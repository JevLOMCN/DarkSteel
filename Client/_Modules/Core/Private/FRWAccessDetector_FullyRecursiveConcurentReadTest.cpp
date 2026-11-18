// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// GetTestFlags @ 1418a32e0

EAutomationTestFlags __thiscall
FRWAccessDetector_FullyRecursiveConcurentReadTest::GetTestFlags
          (FRWAccessDetector_FullyRecursiveConcurentReadTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1418a32f0

bool __thiscall
FRWAccessDetector_FullyRecursiveConcurentReadTest::IsStressTest
          (FRWAccessDetector_FullyRecursiveConcurentReadTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1418a3300

uint __thiscall
FRWAccessDetector_FullyRecursiveConcurentReadTest::GetRequiredDeviceNum
          (FRWAccessDetector_FullyRecursiveConcurentReadTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1418a3310

FString * __thiscall
FRWAccessDetector_FullyRecursiveConcurentReadTest::GetTestSourceFileName
          (FRWAccessDetector_FullyRecursiveConcurentReadTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1418a3340

int __thiscall
FRWAccessDetector_FullyRecursiveConcurentReadTest::GetTestSourceFileLine
          (FRWAccessDetector_FullyRecursiveConcurentReadTest *this)

{
  return 0x117;
}

// GetTests @ 1418a3350

/* WARNING: Removing unreachable block (ram,0x0001418a343d) */
/* WARNING: Removing unreachable block (ram,0x0001418a3508) */

void __thiscall
FRWAccessDetector_FullyRecursiveConcurentReadTest::GetTests
          (FRWAccessDetector_FullyRecursiveConcurentReadTest *this,
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
                     "System.Core.Misc.MTAccessDetector.FullyRecursiveConcurrentReadAccess");
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

// RunTest @ 1418a3530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRWAccessDetector_FullyRecursiveConcurentReadTest::RunTest
          (FRWAccessDetector_FullyRecursiveConcurentReadTest *this,FString *param_1)

{
  code *pcVar1;
  uint uVar2;
  float fVar3;
  code cVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  DWORD DVar9;
  code **ppcVar10;
  uint uVar11;
  undefined1 auStackY_e8 [32];
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6 [2];
  uint local_a4;
  DWORD local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  FThread local_88;
  FThreadAffinity local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a7 = (code)0x0;
  local_a6[0] = (code)0x0;
  uStack_90 = 0;
  local_a4 = 0;
  local_98 = 0xffffffffffffffff;
  local_a0 = 0xffffffff;
  local_9c = 0;
  local_a8 = (code)0x1;
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x30,8);
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FRWAccessDetector_FullyRecursiveConcurentReadTest::RunTest'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_40[1] = (code *)&local_a8;
  local_40[2] = (code *)this;
  local_40[3] = (code *)&local_a4;
  local_40[4] = (code *)&local_a7;
  local_40[5] = (code *)local_a6;
  if (local_40 + 1 != (code **)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRWAccessDetector_FullyRecursiveConcurentReadTest::RunTest'::__l2::<lambda_1>,void>
                  ::Call;
  }
  local_78.ThreadAffinityMask = 0xffffffffffffffff;
  local_78.ProcessorGroup = 0;
  local_78._10_6_ = 0;
  ::FThread::FThread(&local_88,L"AccessThread",(TUniqueFunction<void___cdecl(void)> *)local_68,0,
                     TPri_Normal,&local_78,NonForkable);
  fVar3 = __real_3c23d70a;
  cVar4 = local_a8;
  if (local_68[0] != (code *)0x0) {
    ppcVar10 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar10 = local_40;
    }
    (**(code **)(*ppcVar10 + 0x10))();
    fVar3 = __real_3c23d70a;
    cVar4 = local_a8;
  }
  while (fVar5 = __real_3c23d70a, __real_3c23d70a = fVar3, local_a8 = cVar4, local_a7 == (code)0x0)
  {
    FWindowsPlatformProcess::SleepNoStats(fVar5);
    fVar3 = __real_3c23d70a;
    cVar4 = local_a8;
    __real_3c23d70a = fVar5;
  }
  DVar9 = GetCurrentThreadId();
  if (local_a0 == DVar9) {
    bVar6 = true;
  }
  else {
    LOCK();
    uVar2 = local_a4 + 1;
    UNLOCK();
    uVar11 = local_a4 & 0xfff00000;
    local_a4 = uVar2;
    if (((uVar11 != 0) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                              ,0x5c,L"Acquiring a read access while there is already a write access"
                             ), bVar6)) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return (bool)uVar8;
    }
    bVar6 = uVar11 == 0;
  }
  bVar6 = FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,L"Acquiring Read Access 2",bVar6);
  local_a8 = (code)(bVar6 & (byte)cVar4);
  local_a6[0] = (code)0x1;
  ::FThread::Join(&local_88);
  cVar4 = local_a8;
  DVar9 = GetCurrentThreadId();
  if (local_a0 == DVar9) {
    bVar6 = true;
  }
  else {
    LOCK();
    uVar2 = local_a4 - 1;
    UNLOCK();
    uVar11 = local_a4 & 0xfff00000;
    local_a4 = uVar2;
    if (((uVar11 != 0) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                              ,0x67,
                              L"Another thread asked to have a write access during this read access"
                             ), bVar6)) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return (bool)uVar8;
    }
    bVar6 = uVar11 == 0;
  }
  bVar6 = FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,L"Releasing Read Access 2",bVar6);
  local_a8 = (code)(bVar6 & (byte)cVar4);
  ::FThread::~FThread(&local_88);
  if ((local_a4 != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AtomicValue.load(std::memory_order_relaxed) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x3a,L"Detector cannot be destroyed while other threads access it"), bVar7
     )) {
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return (bool)uVar8;
  }
  return (bool)(bVar6 & (byte)cVar4);
}

// GetBeautifiedTestName @ 1418a37b0

FString * __thiscall
FRWAccessDetector_FullyRecursiveConcurentReadTest::GetBeautifiedTestName
          (FRWAccessDetector_FullyRecursiveConcurentReadTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Core.Misc.MTAccessDetector.FullyRecursiveConcurrentReadAccess");
  return __return_storage_ptr__;
}

// operator() @ 1418c2010

bool __thiscall
`FRWAccessDetector_FullyRecursiveConcurentReadTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this)

{
  byte bVar1;
  char cVar2;
  FAutomationTestBase *pFVar3;
  float fVar4;
  bool bVar5;
  
  pFVar3 = *(FAutomationTestBase **)((longlong)this + 8);
  bVar1 = **(byte **)this;
  bVar5 = FRWFullyRecursiveAccessDetector::AcquireReadAccess
                    (*(FRWFullyRecursiveAccessDetector **)((longlong)this + 0x10));
  bVar5 = FAutomationTestBase::TestTrue(pFVar3,L"Acquiring Read Access 1",bVar5);
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
  bVar5 = FRWFullyRecursiveAccessDetector::ReleaseReadAccess
                    (*(FRWFullyRecursiveAccessDetector **)((longlong)this + 0x10));
  bVar5 = FAutomationTestBase::TestTrue(pFVar3,L"Releasing Read Access 1",bVar5);
  **(byte **)this = bVar5 & bVar1;
  return true;
}

