// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1418a4ee0

EAutomationTestFlags __thiscall
FMRSWRecursiveAccessDetectorSingleThreadTest::GetTestFlags
          (FMRSWRecursiveAccessDetectorSingleThreadTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1418a4ef0

bool __thiscall
FMRSWRecursiveAccessDetectorSingleThreadTest::IsStressTest
          (FMRSWRecursiveAccessDetectorSingleThreadTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1418a4f00

uint __thiscall
FMRSWRecursiveAccessDetectorSingleThreadTest::GetRequiredDeviceNum
          (FMRSWRecursiveAccessDetectorSingleThreadTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1418a4f10

FString * __thiscall
FMRSWRecursiveAccessDetectorSingleThreadTest::GetTestSourceFileName
          (FMRSWRecursiveAccessDetectorSingleThreadTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1418a4f40

int __thiscall
FMRSWRecursiveAccessDetectorSingleThreadTest::GetTestSourceFileLine
          (FMRSWRecursiveAccessDetectorSingleThreadTest *this)

{
  return 0x1a9;
}

// GetTests @ 1418a4f50

/* WARNING: Removing unreachable block (ram,0x0001418a503d) */
/* WARNING: Removing unreachable block (ram,0x0001418a5108) */

void __thiscall
FMRSWRecursiveAccessDetectorSingleThreadTest::GetTests
          (FMRSWRecursiveAccessDetectorSingleThreadTest *this,
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
  
  ::FString::FString(&local_18,"System.Core.MRSWRecursiveAccessDetector.SingleThread");
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

// RunTest @ 1418a5130

/* WARNING: Removing unreachable block (ram,0x0001418a53bc) */
/* WARNING: Removing unreachable block (ram,0x0001418a53c5) */
/* WARNING: Removing unreachable block (ram,0x0001418a52f2) */
/* WARNING: Removing unreachable block (ram,0x0001418a52fb) */
/* WARNING: Removing unreachable block (ram,0x0001418a51c5) */
/* WARNING: Removing unreachable block (ram,0x0001418a51ce) */
/* WARNING: Removing unreachable block (ram,0x0001418a522a) */
/* WARNING: Removing unreachable block (ram,0x0001418a5233) */
/* WARNING: Removing unreachable block (ram,0x0001418a5357) */
/* WARNING: Removing unreachable block (ram,0x0001418a5360) */
/* WARNING: Removing unreachable block (ram,0x0001418a5421) */
/* WARNING: Removing unreachable block (ram,0x0001418a542a) */

bool __thiscall
FMRSWRecursiveAccessDetectorSingleThreadTest::RunTest
          (FMRSWRecursiveAccessDetectorSingleThreadTest *this,FString *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  atomic<unsigned___int64> *paVar3;
  atomic<unsigned___int64> *paVar4;
  atomic<unsigned___int64> *paVar5;
  uint uVar6;
  uint uVar7;
  atomic<unsigned___int64> *this_00;
  FMRSWRecursiveAccessDetector local_res18;
  FMRSWRecursiveAccessDetector local_res20;
  FDestructionSentinel local_20;
  
  this_00 = (atomic<unsigned___int64> *)0x0;
  local_res18.State = (atomic<unsigned___int64>)0x0;
  FMRSWRecursiveAccessDetector::AcquireReadAccess(&local_res18);
  FMRSWRecursiveAccessDetector::AcquireReadAccess(&local_res18);
  FMRSWRecursiveAccessDetector::AcquireWriteAccess(&local_res18);
  FMRSWRecursiveAccessDetector::AcquireWriteAccess(&local_res18);
  FMRSWRecursiveAccessDetector::AcquireReadAccess(&local_res18);
  FMRSWRecursiveAccessDetector::RemoveReaderFromTls(&local_res18);
  LOCK();
  uVar1 = (longlong)local_res18.State - 1;
  UNLOCK();
  uVar6 = (uint)(uVar1 >> 0x14) & 0xfff;
  paVar5 = this_00;
  if (uVar6 != 1) {
    paVar5 = (atomic<unsigned___int64> *)(uVar1 >> 0x20);
  }
  uVar2 = (longlong)paVar5 << 0x20 | (ulonglong)((uVar6 - 1) * 0x100000);
  local_res20.State = (atomic<unsigned___int64>)(uVar2 | (uint)uVar1 & 0xfffff);
  LOCK();
  UNLOCK();
  uVar6 = (uint)(uVar2 >> 0x14) & 0xfff;
  paVar3 = this_00;
  if (uVar6 != 1) {
    paVar3 = paVar5;
  }
  local_res18.State =
       (atomic<unsigned___int64>)
       ((longlong)paVar3 << 0x20 | (ulonglong)((uVar6 - 1) * 0x100000) |
       (ulonglong)(local_res20.State._0_4_ & 0xfffff));
  LOCK();
  UNLOCK();
  FMRSWRecursiveAccessDetector::RemoveReaderFromTls(&local_res18);
  LOCK();
  local_res18.State = local_res18.State - 1;
  UNLOCK();
  FMRSWRecursiveAccessDetector::RemoveReaderFromTls(&local_res18);
  LOCK();
  local_res18.State = local_res18.State + -1;
  UNLOCK();
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_res18);
  local_res20.State = (atomic<unsigned___int64>)0x0;
  local_res18.State = (atomic<unsigned___int64>)0x0;
  FMRSWRecursiveAccessDetector::AcquireReadAccess(&local_res20);
  FMRSWRecursiveAccessDetector::AcquireReadAccess(&local_res18);
  FMRSWRecursiveAccessDetector::AcquireWriteAccess(&local_res20);
  FMRSWRecursiveAccessDetector::AcquireWriteAccess(&local_res18);
  FMRSWRecursiveAccessDetector::AcquireWriteAccess(&local_res20);
  FMRSWRecursiveAccessDetector::AcquireWriteAccess(&local_res18);
  uVar6 = (uint)((ulonglong)local_res18.State >> 0x14) & 0xfff;
  paVar5 = this_00;
  if (uVar6 != 1) {
    paVar5 = (atomic<unsigned___int64> *)((ulonglong)local_res18.State >> 0x20);
  }
  LOCK();
  UNLOCK();
  uVar7 = (uint)((ulonglong)local_res20.State >> 0x14) & 0xfff;
  paVar3 = this_00;
  if (uVar7 != 1) {
    paVar3 = (atomic<unsigned___int64> *)((ulonglong)local_res20.State >> 0x20);
  }
  LOCK();
  UNLOCK();
  uVar6 = uVar6 - 1 & 0xfff;
  paVar4 = this_00;
  if (uVar6 != 1) {
    paVar4 = paVar5;
  }
  local_res18.State =
       (atomic<unsigned___int64>)
       ((longlong)paVar4 << 0x20 | (ulonglong)((uVar6 - 1) * 0x100000) |
       (ulonglong)(local_res18.State._0_4_ & 0xfffff));
  LOCK();
  UNLOCK();
  uVar6 = uVar7 - 1 & 0xfff;
  paVar5 = this_00;
  if (uVar6 != 1) {
    paVar5 = paVar3;
  }
  local_res20.State =
       (atomic<unsigned___int64>)
       ((longlong)paVar5 << 0x20 | (ulonglong)((uVar6 - 1) * 0x100000) |
       (ulonglong)(local_res20.State._0_4_ & 0xfffff));
  LOCK();
  UNLOCK();
  FMRSWRecursiveAccessDetector::RemoveReaderFromTls(&local_res18);
  LOCK();
  local_res18.State = local_res18.State - 1;
  UNLOCK();
  FMRSWRecursiveAccessDetector::RemoveReaderFromTls(&local_res20);
  LOCK();
  local_res20.State = local_res20.State - 1;
  UNLOCK();
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_res18);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_res20);
  paVar5 = ::operator_new(8);
  if (paVar5 == (atomic<unsigned___int64> *)0x0) {
    local_20._0_8_ = (ulonglong)(uint)local_20._4_4_ << 0x20;
    local_20.bDestroyed = false;
    FMRSWRecursiveAccessDetector::AcquireReadAccess((FMRSWRecursiveAccessDetector *)0x0,&local_20);
  }
  else {
    *paVar5 = (atomic<unsigned___int64>)0x0;
    local_20._0_8_ = (ulonglong)(uint)local_20._4_4_ << 0x20;
    local_20.bDestroyed = false;
    FMRSWRecursiveAccessDetector::AcquireReadAccess
              ((FMRSWRecursiveAccessDetector *)paVar5,&local_20);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)paVar5);
    ::operator_delete(paVar5,8);
    this_00 = paVar5;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseReadAccess
              ((FMRSWRecursiveAccessDetector *)this_00,&local_20);
  }
  return true;
}

// GetBeautifiedTestName @ 1418a54f0

FString * __thiscall
FMRSWRecursiveAccessDetectorSingleThreadTest::GetBeautifiedTestName
          (FMRSWRecursiveAccessDetectorSingleThreadTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.MRSWRecursiveAccessDetector.SingleThread");
  return __return_storage_ptr__;
}

