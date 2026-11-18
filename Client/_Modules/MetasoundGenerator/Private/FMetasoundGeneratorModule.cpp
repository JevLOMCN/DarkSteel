// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 5

// StartupModule @ 14b2a1be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Metasound::FMetasoundGeneratorModule::StartupModule(FMetasoundGeneratorModule *this)

{
  int *piVar1;
  TSharedPtr<Metasound::FConcurrentInstanceCounterManager,1> *pTVar2;
  atomic<int> *paVar3;
  int iVar4;
  atomic<int> aVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  TReferenceControllerBase<1> *pTVar10;
  FString *pFVar11;
  FCsvProfiler *pFVar12;
  FDelegateHandle FVar13;
  TReferenceControllerBase<1> *pTVar14;
  FConcurrentInstanceCounterManager *pFVar15;
  FOperatorPool *pFVar16;
  FOperatorPool *local_68;
  FSharedReferencer<1> local_60;
  FConcurrentInstanceCounterManager *local_58;
  FSharedReferencer<1> FStack_50;
  FConcurrentInstanceCounterManager *local_48;
  TReferenceControllerBase<1> *local_40;
  FString local_38;
  
  pTVar10 = ::operator_new(0x210);
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  pFVar15 = (FConcurrentInstanceCounterManager *)&DAT_00000010;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pFVar16 = (FOperatorPool *)&DAT_00000010;
    pTVar10 = pTVar14;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFOperatorPool_Metasound___00_SharedPointerInternals__6B_
    ;
    FOperatorPool::FOperatorPool((FOperatorPool *)(pTVar10 + 1),(FOperatorPoolSettings)0x40);
    pFVar16 = (FOperatorPool *)(pTVar10 + 1);
    if (pFVar16 == (FOperatorPool *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      goto LAB_14b2a1cf8;
    }
  }
  if (((pFVar16->_padding_ == 0) || (pFVar16->_padding_ == 0)) ||
     (*(int *)(pFVar16->_padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar16->_padding_ = (longlong)pFVar16;
    if (pTVar10 != (TReferenceControllerBase<1> *)pFVar16->_padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = (longlong *)pFVar16->_padding_;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      pFVar16->_padding_ = (longlong)pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_14b2a1cf8:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = pFVar16;
  local_60.ReferenceController = pTVar10;
  if (&this->OperatorPool != (TSharedPtr<Metasound::FOperatorPool,1> *)&local_68) {
    (this->OperatorPool).Object = pFVar16;
    local_68 = (FOperatorPool *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OperatorPool).SharedReferenceCount,&local_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  pTVar10 = ::operator_new(0x98);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    local_58 = ___xmm_00000000000000000000000000000010;
    FStack_50.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFConcurrentInstanceCounterManager_Metasound___00_SharedPointerInternals__6B_
    ;
    pFVar11 = ::FString::FString(&local_38,L"MetaSound/Active_Generators");
    pTVar10[1]._padding_ = 0;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[3]._padding_ = 0;
    pTVar10[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[3].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar10[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar10[4]._padding_ + 4) = 0;
    pTVar10[5]._padding_ = 0;
    pTVar10[5].SharedReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar10 + 6),4000);
    ::FString::FString((FString *)&pTVar10[8].SharedReferenceCount,pFVar11);
    pFVar7 = (pFVar11->Data).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar15 = (FConcurrentInstanceCounterManager *)(pTVar10 + 1);
    if (pFVar15 == (FConcurrentInstanceCounterManager *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    FStack_50.ReferenceController = pTVar10;
    pTVar14 = pTVar10;
    local_58 = pFVar15;
  }
  pTVar2 = &this->OperatorInstanceCounterManager;
  if (pTVar2 != (TSharedPtr<Metasound::FConcurrentInstanceCounterManager,1> *)&local_58) {
    pTVar2->Object = pFVar15;
    local_58 = (FConcurrentInstanceCounterManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OperatorInstanceCounterManager).SharedReferenceCount,&FStack_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  pFVar12 = FCsvProfiler::Get();
  local_48 = pTVar2->Object;
  local_40 = (this->OperatorInstanceCounterManager).SharedReferenceCount.ReferenceController;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->WeakReferenceCount = (atomic<int>)((int)local_40->WeakReferenceCount + 1);
    UNLOCK();
  }
  FVar13 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
           AddLambda<_Metasound::FMetasoundGeneratorModule::StartupModule_::__l2::<lambda_1>_>
                     ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                       *)&pFVar12->OnCSVProfileEndFrameDelegate,(<lambda_1> *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->CsvEndFrameDelegateHandle).ID = *FVar13.ID;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &local_40->WeakReferenceCount;
    aVar5 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)(local_40->_padding_ + 8))(local_40,1);
    }
  }
  return;
}

// ShutdownModule @ 14b2a1f10

void __thiscall
Metasound::FMetasoundGeneratorModule::ShutdownModule(FMetasoundGeneratorModule *this)

{
  FSharedReferencer<1> *this_00;
  FOperatorPool *this_01;
  TReferenceControllerBase<1> *pTVar1;
  FCsvProfiler *pFVar2;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pFVar2 = FCsvProfiler::Get();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar2->OnCSVProfileEndFrameDelegate,
             (FDelegateHandle)(this->CsvEndFrameDelegateHandle).ID);
  this_01 = (this->OperatorPool).Object;
  (this->CsvEndFrameDelegateHandle).ID = 0;
  if (this_01 != (FOperatorPool *)0x0) {
    this_00 = &(this->OperatorPool).SharedReferenceCount;
    pTVar1 = this_00->ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->OperatorPool != (TSharedPtr<Metasound::FOperatorPool,1> *)&local_28) {
      (this->OperatorPool).Object = (FOperatorPool *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(this_00,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    FOperatorPool::StopAsyncTasks(this_01);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->OperatorInstanceCounterManager !=
      (TSharedPtr<Metasound::FConcurrentInstanceCounterManager,1> *)&local_18) {
    (this->OperatorInstanceCounterManager).Object = (FConcurrentInstanceCounterManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OperatorInstanceCounterManager).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// GetOperatorPool @ 14b2a1ff0

TSharedPtr<Metasound::FOperatorPool,1> * __thiscall
Metasound::FMetasoundGeneratorModule::GetOperatorPool
          (FMetasoundGeneratorModule *this,
          TSharedPtr<Metasound::FOperatorPool,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->OperatorPool).Object;
  pTVar1 = (this->OperatorPool).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetOperatorInstanceCounterManager @ 14b2a2020

TSharedPtr<Metasound::FConcurrentInstanceCounterManager,1> * __thiscall
Metasound::FMetasoundGeneratorModule::GetOperatorInstanceCounterManager
          (FMetasoundGeneratorModule *this,
          TSharedPtr<Metasound::FConcurrentInstanceCounterManager,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->OperatorInstanceCounterManager).Object;
  pTVar1 = (this->OperatorInstanceCounterManager).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b2a9ce0

void __thiscall
`Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> aVar1;
  char cVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  cVar2 = (**(code **)(*(longlong *)CVarRecordActiveOperatorsToCsv._padding_ + 0xc0))();
  if (cVar2 != '\0') {
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar1 = pTVar4->SharedReferenceCount;
      do {
        if (aVar1 == (atomic<int>)0x0) {
          pTVar4 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14b2a9d22;
        }
        LOCK();
        aVar3 = pTVar4->SharedReferenceCount;
        bVar5 = aVar1 == aVar3;
        if (bVar5) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
          aVar3 = aVar1;
        }
        UNLOCK();
        aVar1 = aVar3;
      } while (!bVar5);
      if (*(FConcurrentInstanceCounterManager **)this != (FConcurrentInstanceCounterManager *)0x0) {
        local_10 = local_res10;
        local_18 = UE::Core::Private::Function::
                   TFunctionRefCaller<``Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>,void,FTopLevelAssetPath_const_&,__int64>
                   ::Call;
        Metasound::FConcurrentInstanceCounterManager::VisitStats
                  (*(FConcurrentInstanceCounterManager **)this,
                   (TFunctionRef<void___cdecl(FTopLevelAssetPath_const_&,__int64)> *)&local_18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        return;
      }
    }
LAB_14b2a9d22:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

