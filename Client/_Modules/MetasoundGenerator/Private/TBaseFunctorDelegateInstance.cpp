// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 22

// CreateCopy @ 14b2aea90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy,``Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>::operator()'::__l20::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x78,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__V__TSharedPtr_VIOutputStorage_Metasound___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy,``Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::`2'::<lambda_1>::operator()'::`20'::<lambda_2>_>
               ::_vftable_;
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    uVar1 = *(undefined8 *)((longlong)this + 0x38);
    puVar2[6] = *(undefined8 *)((longlong)this + 0x30);
    puVar2[7] = uVar1;
    puVar2[8] = *(undefined8 *)((longlong)this + 0x40);
    puVar2[9] = *(undefined8 *)((longlong)this + 0x48);
    puVar2[10] = *(undefined8 *)((longlong)this + 0x50);
    uVar1 = *(undefined8 *)((longlong)this + 0x60);
    puVar2[0xb] = *(undefined8 *)((longlong)this + 0x58);
    puVar2[0xc] = uVar1;
    puVar2[0xd] = *(undefined8 *)((longlong)this + 0x68);
    *(undefined1 *)(puVar2 + 0xe) = *(undefined1 *)((longlong)this + 0x70);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b2aeb60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy,``Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>::operator()'::__l20::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x78,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__V__TSharedPtr_VIOutputStorage_Metasound___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy,``Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::`2'::<lambda_1>::operator()'::`20'::<lambda_2>_>
               ::_vftable_;
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    uVar1 = *(undefined8 *)((longlong)this + 0x38);
    puVar2[6] = *(undefined8 *)((longlong)this + 0x30);
    puVar2[7] = uVar1;
    puVar2[8] = *(undefined8 *)((longlong)this + 0x40);
    puVar2[9] = *(undefined8 *)((longlong)this + 0x48);
    puVar2[10] = *(undefined8 *)((longlong)this + 0x50);
    uVar1 = *(undefined8 *)((longlong)this + 0x60);
    puVar2[0xb] = *(undefined8 *)((longlong)this + 0x58);
    puVar2[0xc] = uVar1;
    puVar2[0xd] = *(undefined8 *)((longlong)this + 0x68);
    *(undefined1 *)(puVar2 + 0xe) = *(undefined1 *)((longlong)this + 0x70);
  }
  return;
}

// CreateCopy @ 14b2aec00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy,``Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>::operator()'::__l20::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x78,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__V__TSharedPtr_VIOutputStorage_Metasound___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy,``Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::`2'::<lambda_1>::operator()'::`20'::<lambda_2>_>
               ::_vftable_;
    puVar7[2] = uVar1;
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar7[4] = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
    puVar7[5] = *(undefined8 *)((longlong)this + 0x28);
    uVar1 = *(undefined8 *)((longlong)this + 0x38);
    puVar7[6] = *(undefined8 *)((longlong)this + 0x30);
    puVar7[7] = uVar1;
    puVar7[8] = *(undefined8 *)((longlong)this + 0x40);
    puVar7[9] = *(undefined8 *)((longlong)this + 0x48);
    puVar7[10] = *(undefined8 *)((longlong)this + 0x50);
    uVar3 = *(undefined4 *)((longlong)this + 0x5c);
    uVar4 = *(undefined4 *)((longlong)this + 0x60);
    uVar5 = *(undefined4 *)((longlong)this + 100);
    *(undefined4 *)(puVar7 + 0xb) = *(undefined4 *)((longlong)this + 0x58);
    *(undefined4 *)((longlong)puVar7 + 0x5c) = uVar3;
    *(undefined4 *)(puVar7 + 0xc) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 100) = uVar5;
    puVar7[0xd] = *(undefined8 *)((longlong)this + 0x68);
    *(undefined1 *)(puVar7 + 0xe) = *(undefined1 *)((longlong)this + 0x70);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b2aecf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::FMetasoundGeneratorModule::StartupModule'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b2aed90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::FMetasoundGeneratorModule::StartupModule'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  return;
}

// CreateCopy @ 14b2aedf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::FMetasoundGeneratorModule::StartupModule'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14b2b00a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy,``Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>::operator()'::__l20::<lambda_2>_>
::Execute(void *this,FName param_1,TSharedPtr<Metasound::IOutputStorage,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  FName FVar3;
  FName FVar4;
  TSharedPtr<Metasound::IOutputStorage,1> local_18;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  local_18.Object = param_2->Object;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IOutputStorage *)0x0;
  lVar2 = *(longlong *)((longlong)this + 0x18);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    FVar4 = *(FName *)((longlong)this + 0x40);
    FVar3 = *(FName *)((longlong)this + 0x50);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    FVar4 = *(FName *)((longlong)this + 0x40);
    FVar3 = *(FName *)((longlong)this + 0x50);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::
  Broadcast<IBaseDelegateInstance<void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>,FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>_>
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(lVar2 + 0xa8),FVar3,FVar4,
             param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14b2b0130

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 14b2b0180

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy,``Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>::operator()'::__l20::<lambda_2>_>
::ExecuteIfSafe(void *this,FName param_1,TSharedPtr<Metasound::IOutputStorage,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  FName FVar3;
  FName FVar4;
  TSharedPtr<Metasound::IOutputStorage,1> local_18;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  local_18.Object = param_2->Object;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IOutputStorage *)0x0;
  lVar2 = *(longlong *)((longlong)this + 0x18);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    FVar4 = *(FName *)((longlong)this + 0x40);
    FVar3 = *(FName *)((longlong)this + 0x50);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    FVar4 = *(FName *)((longlong)this + 0x40);
    FVar3 = *(FName *)((longlong)this + 0x50);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::
  Broadcast<IBaseDelegateInstance<void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>,FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>_>
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(lVar2 + 0xa8),FVar3,FVar4,
             param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14b2b0210

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14b2b0f80

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy,``Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>::operator()'::__l20::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14b2b0f90

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14b2b1310

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy,``Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>::operator()'::__l20::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14b2b1320

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14b2b1650

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy,``Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>::operator()'::__l20::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b2b1660

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14b2b1790

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy,``Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>::operator()'::__l20::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14b2b17a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14b2b2470

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy,``Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>::operator()'::__l20::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14b2b2480

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14b2b9880

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy,``Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>::operator()'::__l20::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b2b9890

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

