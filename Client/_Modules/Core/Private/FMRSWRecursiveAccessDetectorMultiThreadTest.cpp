// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1418a5560

EAutomationTestFlags __thiscall
FMRSWRecursiveAccessDetectorMultiThreadTest::GetTestFlags
          (FMRSWRecursiveAccessDetectorMultiThreadTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1418a5570

bool __thiscall
FMRSWRecursiveAccessDetectorMultiThreadTest::IsStressTest
          (FMRSWRecursiveAccessDetectorMultiThreadTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1418a5580

uint __thiscall
FMRSWRecursiveAccessDetectorMultiThreadTest::GetRequiredDeviceNum
          (FMRSWRecursiveAccessDetectorMultiThreadTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1418a5590

FString * __thiscall
FMRSWRecursiveAccessDetectorMultiThreadTest::GetTestSourceFileName
          (FMRSWRecursiveAccessDetectorMultiThreadTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1418a55c0

int __thiscall
FMRSWRecursiveAccessDetectorMultiThreadTest::GetTestSourceFileLine
          (FMRSWRecursiveAccessDetectorMultiThreadTest *this)

{
  return 0x1db;
}

// GetTests @ 1418a55d0

/* WARNING: Removing unreachable block (ram,0x0001418a56bd) */
/* WARNING: Removing unreachable block (ram,0x0001418a5788) */

void __thiscall
FMRSWRecursiveAccessDetectorMultiThreadTest::GetTests
          (FMRSWRecursiveAccessDetectorMultiThreadTest *this,
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
  
  ::FString::FString(&local_18,"System.Core.MRSWRecursiveAccessDetector.MultiThread");
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

// RunTest @ 1418a57b0

/* WARNING: Removing unreachable block (ram,0x0001418a5b55) */
/* WARNING: Removing unreachable block (ram,0x0001418a5b5d) */
/* WARNING: Removing unreachable block (ram,0x0001418a5b76) */
/* WARNING: Removing unreachable block (ram,0x0001418a5dac) */
/* WARNING: Removing unreachable block (ram,0x0001418a5db5) */
/* WARNING: Removing unreachable block (ram,0x0001418a5dce) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest
          (FMRSWRecursiveAccessDetectorMultiThreadTest *this,FString *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<bool> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  FTaskBase *pFVar13;
  FTaskBase *pFVar14;
  uint uVar15;
  FTaskBase *pFVar16;
  FMRSWRecursiveAccessDetector local_res18;
  FMRSWRecursiveAccessDetector local_res20;
  FMRSWRecursiveAccessDetector local_b8;
  FTaskBase *local_b0;
  FTaskBase *local_a8;
  FTaskBase *local_a0;
  FTaskBase *local_98;
  FTaskBase *local_90;
  FTaskBase *local_88;
  FTaskBase *local_80;
  FTaskBase *local_78;
  FTaskBase *local_70;
  atomic<unsigned___int64> local_68;
  atomic<unsigned___int64> local_60;
  atomic<unsigned___int64> local_58;
  atomic<unsigned___int64> local_50;
  
  pFVar16 = (FTaskBase *)0x0;
  local_res18.State = (atomic<unsigned___int64>)0x0;
  local_b0 = (FTaskBase *)0x0;
  local_a8 = (FTaskBase *)
             UE::Tasks::Private::FTaskEventBase::Create
                       (
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(397)"
                       );
  local_a0 = (FTaskBase *)
             UE::Tasks::Private::FTaskEventBase::Create
                       (
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(398)"
                       );
  if ((local_b0 != (FTaskBase *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                         ,0x77,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar13 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  pFVar14 = pFVar16;
  if (pFVar13 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar13,2,true);
    pFVar13->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`MTAccessDetector_Private::FParallel::FParallel<`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::`3'::<lambda_1>,`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::`3'::<lambda_2>_>'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(404)"
               ,Default,None,None);
    pFVar13[1]._padding_ = (longlong)&local_b0;
    pFVar13[1]._padding_ = (longlong)&local_res18;
    pFVar13[1]._padding_ = (longlong)&local_res18;
    pFVar13->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`MTAccessDetector_Private::FParallel::FParallel<`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::`3'::<lambda_1>,`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::`3'::<lambda_2>_>'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar14 = pFVar13;
  }
  pFVar13 = local_b0;
  if (local_b0 != (FTaskBase *)0x0) {
    local_b0 = (FTaskBase *)0x0;
    LOCK();
    paVar1 = &pFVar13->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar13->_padding_)(pFVar13,1);
    }
  }
  local_b0 = pFVar14;
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar14,0x100);
  if (local_a8 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(local_a8);
  }
  bVar6 = FMRSWRecursiveAccessDetector::AcquireReadAccess(&local_res18);
  bVar6 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"AD.AcquireReadAccess()",bVar6)
  ;
  FMRSWRecursiveAccessDetector::RemoveReaderFromTls(&local_res18);
  LOCK();
  local_res18.State = local_res18.State + -1;
  UNLOCK();
  bVar8 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"AD.ReleaseReadAccess()",true);
  if ((local_a0 != (FTaskBase *)0x0) && ((local_a0->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    LOCK();
    aVar2 = local_a0->TaskTriggered;
    local_a0->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      local_a0->RefCount = (atomic<unsigned_int>)((int)local_a0->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(local_a0,0xd8);
    }
  }
  if (local_b0 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(local_b0);
  }
  if (local_a0 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &local_a0->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_a0->_padding_)(local_a0,1);
    }
  }
  if (local_a8 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &local_a8->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_a8->_padding_)(local_a8,1);
    }
  }
  if (local_b0 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &local_b0->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_b0->_padding_)(local_b0,1);
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_res18);
  bVar5 = UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure;
  UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure = true;
  local_res20.State = (atomic<unsigned___int64>)0x0;
  local_98 = (FTaskBase *)0x0;
  local_90 = (FTaskBase *)
             UE::Tasks::Private::FTaskEventBase::Create
                       (
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(397)"
                       );
  local_88 = (FTaskBase *)
             UE::Tasks::Private::FTaskEventBase::Create
                       (
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(398)"
                       );
  if ((local_98 != (FTaskBase *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                         ,0x77,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar13 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  pFVar14 = pFVar16;
  if (pFVar13 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar13,2,true);
    pFVar13->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`MTAccessDetector_Private::FParallel::FParallel<`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::`4'::<lambda_3>,`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::`4'::<lambda_4>_>'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(404)"
               ,Default,None,None);
    pFVar13[1]._padding_ = (longlong)&local_98;
    pFVar13[1]._padding_ = (longlong)&local_res20;
    pFVar13[1]._padding_ = (longlong)&local_res20;
    pFVar13->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`MTAccessDetector_Private::FParallel::FParallel<`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::`4'::<lambda_3>,`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::`4'::<lambda_4>_>'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar14 = pFVar13;
  }
  pFVar13 = local_98;
  if (local_98 != (FTaskBase *)0x0) {
    local_98 = (FTaskBase *)0x0;
    LOCK();
    paVar1 = &pFVar13->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar13->_padding_)(pFVar13,1);
    }
  }
  local_98 = pFVar14;
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar14,0x100);
  if (local_90 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(local_90);
  }
  bVar9 = FMRSWRecursiveAccessDetector::AcquireWriteAccess(&local_res20);
  bVar9 = FAutomationTestBase::TestFalse
                    ((FAutomationTestBase *)this,L"AD.AcquireWriteAccess()",bVar9);
  uVar15 = (uint)((ulonglong)local_res20.State >> 0x14) & 0xfff;
  pFVar14 = pFVar16;
  if (uVar15 != 1) {
    pFVar14 = (FTaskBase *)((ulonglong)local_res20.State >> 0x20);
  }
  LOCK();
  UNLOCK();
  local_58 = local_res20.State;
  local_68 = local_res20.State;
  local_res20.State =
       (atomic<unsigned___int64>)
       ((longlong)pFVar14 << 0x20 | (ulonglong)((uVar15 - 1) * 0x100000) |
       (ulonglong)(local_res20.State._0_4_ & 0xfffff));
  bVar10 = FAutomationTestBase::TestTrue
                     ((FAutomationTestBase *)this,L"AD.ReleaseWriteAccess()",true);
  if ((local_88 != (FTaskBase *)0x0) && ((local_88->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    LOCK();
    aVar2 = local_88->TaskTriggered;
    local_88->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      local_88->RefCount = (atomic<unsigned_int>)((int)local_88->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(local_88,0xd8);
    }
  }
  if (local_98 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(local_98);
  }
  if (local_88 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &local_88->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_88->_padding_)(local_88,1);
    }
  }
  if (local_90 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &local_90->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_90->_padding_)(local_90,1);
    }
  }
  if (local_98 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &local_98->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_98->_padding_)(local_98,1);
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_res20);
  UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure = true;
  local_b8.State = (atomic<unsigned___int64>)0x0;
  local_80 = (FTaskBase *)0x0;
  local_78 = (FTaskBase *)
             UE::Tasks::Private::FTaskEventBase::Create
                       (
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(397)"
                       );
  local_70 = (FTaskBase *)
             UE::Tasks::Private::FTaskEventBase::Create
                       (
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(398)"
                       );
  if ((local_80 != (FTaskBase *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                          ,0x77,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar13 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  pFVar14 = pFVar16;
  if (pFVar13 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar13,2,true);
    pFVar13->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`MTAccessDetector_Private::FParallel::FParallel<`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::`5'::<lambda_5>,`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::`5'::<lambda_6>_>'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp(404)"
               ,Default,None,None);
    pFVar13[1]._padding_ = (longlong)&local_80;
    pFVar13[1]._padding_ = (longlong)&local_b8;
    pFVar13[1]._padding_ = (longlong)&local_b8;
    pFVar13->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`MTAccessDetector_Private::FParallel::FParallel<`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::`5'::<lambda_5>,`FMRSWRecursiveAccessDetectorMultiThreadTest::RunTest'::`5'::<lambda_6>_>'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar14 = pFVar13;
  }
  pFVar13 = local_80;
  if (local_80 != (FTaskBase *)0x0) {
    local_80 = (FTaskBase *)0x0;
    LOCK();
    paVar1 = &pFVar13->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar13->_padding_)(pFVar13,1);
    }
  }
  local_80 = pFVar14;
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar14,0x100);
  if (local_78 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(local_78);
  }
  bVar11 = FMRSWRecursiveAccessDetector::AcquireWriteAccess(&local_b8);
  bVar11 = FAutomationTestBase::TestFalse
                     ((FAutomationTestBase *)this,L"AD.AcquireWriteAccess()",bVar11);
  uVar15 = (uint)((ulonglong)local_b8.State >> 0x14) & 0xfff;
  if (uVar15 != 1) {
    pFVar16 = (FTaskBase *)((ulonglong)local_b8.State >> 0x20);
  }
  LOCK();
  UNLOCK();
  local_50 = local_b8.State;
  local_60 = local_b8.State;
  local_b8.State =
       (atomic<unsigned___int64>)
       ((longlong)pFVar16 << 0x20 | (ulonglong)((uVar15 - 1) * 0x100000) |
       (ulonglong)(local_b8.State._0_4_ & 0xfffff));
  bVar12 = FAutomationTestBase::TestTrue
                     ((FAutomationTestBase *)this,L"AD.ReleaseWriteAccess()",true);
  if ((local_70 != (FTaskBase *)0x0) && ((local_70->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    LOCK();
    aVar2 = local_70->TaskTriggered;
    local_70->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      local_70->RefCount = (atomic<unsigned_int>)((int)local_70->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(local_70,0xd8);
    }
  }
  if (local_80 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(local_80);
  }
  if (local_70 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &local_70->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_70->_padding_)(local_70,1);
    }
  }
  if (local_78 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &local_78->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_78->_padding_)(local_78,1);
    }
  }
  if (local_80 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &local_80->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_80->_padding_)(local_80,1);
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8);
  UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure = bVar5;
  return ((((bVar8 && bVar6) && bVar9) && bVar10) && bVar11) && bVar12;
}

// GetBeautifiedTestName @ 1418a5ed0

FString * __thiscall
FMRSWRecursiveAccessDetectorMultiThreadTest::GetBeautifiedTestName
          (FMRSWRecursiveAccessDetectorMultiThreadTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.MRSWRecursiveAccessDetector.MultiThread");
  return __return_storage_ptr__;
}

