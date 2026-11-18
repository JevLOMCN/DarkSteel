// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 49

// FNodeClassRegistry @ 14ae5a140

FNodeClassRegistry * __thiscall
Metasound::Frontend::FNodeClassRegistry::FNodeClassRegistry(FNodeClassRegistry *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FNodeClassRegistry *pFVar4;
  
  *(undefined ***)this = &___7FNodeClassRegistry_Frontend_Metasound__6B_;
  (this->LazyInitCommands).AllocatorInstance.SecondaryData =
       (ForElementType<TUniqueFunction<void___cdecl(void)>_>)0x0;
  (this->LazyInitCommands).ArrayNum = 0;
  (this->LazyInitCommands).ArrayMax = 0x800;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->LazyInitCommandCritSection,4000);
  *(undefined8 *)&this->RegisteredNodes = 0;
  *(undefined8 *)&(this->RegisteredNodes).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredNodes).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredNodes).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredNodes).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredNodes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredNodes).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredNodes).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredNodes).field_0x48 = 0;
  *(undefined8 *)&this->RegisteredNodeTemplates = 0;
  *(undefined8 *)&(this->RegisteredNodeTemplates).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredNodeTemplates).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredNodeTemplates).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredNodeTemplates).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredNodeTemplates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredNodeTemplates).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredNodeTemplates).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredNodeTemplates).field_0x48 = 0;
  *(undefined8 *)&this->RegisteredGraphs = 0;
  *(undefined8 *)&(this->RegisteredGraphs).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredGraphs).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredGraphs).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredGraphs).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredGraphs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredGraphs).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredGraphs).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredGraphs).field_0x48 = 0;
  *(undefined8 *)&this->ConverterNodeClassRegistry = 0;
  *(undefined8 *)&(this->ConverterNodeClassRegistry).field_0x8 = 0;
  *(undefined8 *)&(this->ConverterNodeClassRegistry).field_0x20 = 0;
  *(undefined4 *)&(this->ConverterNodeClassRegistry).field_0x28 = 0;
  *(undefined4 *)&(this->ConverterNodeClassRegistry).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConverterNodeClassRegistry).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConverterNodeClassRegistry).field_0x34 = 0;
  *(undefined8 *)&(this->ConverterNodeClassRegistry).field_0x40 = 0;
  *(undefined4 *)&(this->ConverterNodeClassRegistry).field_0x48 = 0;
  pTVar3 = ::operator_new(0x60);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->TransactionBuffer).Object =
         (TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *)0x10;
    (this->TransactionBuffer).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TTransactionBuffer_VFNodeClassRegistryTransaction_Frontend_Metasound___Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 1),4000);
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    (this->TransactionBuffer).Object =
         (TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *)(pTVar3 + 1);
    (this->TransactionBuffer).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *)(pTVar3 + 1) ==
        (TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FNodeClassRegistry *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RegistryMapsCriticalSection,4000)
  ;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->ActiveRegistrationTasksCriticalSection,4000);
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->ObjectReferencerCriticalSection,4000);
  (this->AsyncRegistrationPipe).LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)0x0;
  (this->AsyncRegistrationPipe).TaskCount = (atomic<unsigned___int64>)0x0;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->AsyncRegistrationPipe).EmptyEventRef.Object = (TEventCount<unsigned_int> *)0x10;
    (this->AsyncRegistrationPipe).EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TEventCount_I_UE___00_SharedPointerInternals__6B_;
    *(undefined8 *)&pTVar3->WeakReferenceCount = 1;
    (this->AsyncRegistrationPipe).EmptyEventRef.Object = (TEventCount<unsigned_int> *)(pTVar3 + 1);
    (this->AsyncRegistrationPipe).EmptyEventRef.SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FNodeClassRegistry *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->AsyncRegistrationPipe).DebugName =
       L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp(432)"
  ;
  this->RegistrationTaskCntr = 0;
  *(undefined8 *)&this->ActiveRegistrationTasks = 0;
  *(undefined8 *)&(this->ActiveRegistrationTasks).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveRegistrationTasks).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveRegistrationTasks).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveRegistrationTasks).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveRegistrationTasks).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveRegistrationTasks).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveRegistrationTasks).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveRegistrationTasks).field_0x48 = 0;
  (this->ObjectReferencer).Ptr = (IObjectReferencer *)0x0;
  return this;
}

// ~FNodeClassRegistry @ 14ae5c360

void __thiscall
Metasound::Frontend::FNodeClassRegistry::~FNodeClassRegistry(FNodeClassRegistry *this)

{
  IObjectReferencer *pIVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<TUniqueFunction<void___cdecl(void)>_> FVar5;
  
  pIVar1 = (this->ObjectReferencer).Ptr;
  if (pIVar1 != (IObjectReferencer *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  *(undefined4 *)&(this->ActiveRegistrationTasks).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ActiveRegistrationTasks).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveRegistrationTasks);
  if ((this->AsyncRegistrationPipe).TaskCount != (atomic<unsigned___int64>)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasWork()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                       ,0x2a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncRegistrationPipe).EmptyEventRef.SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectReferencerCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ActiveRegistrationTasksCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->RegistryMapsCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TransactionBuffer).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->ConverterNodeClassRegistry).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ConverterNodeClassRegistry).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConverterNodeClassRegistry);
  *(undefined4 *)&(this->RegisteredGraphs).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RegisteredGraphs).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredGraphs);
  *(undefined4 *)&(this->RegisteredNodeTemplates).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RegisteredNodeTemplates).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredNodeTemplates);
  *(undefined4 *)&(this->RegisteredNodes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RegisteredNodes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredNodes);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LazyInitCommandCritSection);
  FVar5 = (this->LazyInitCommands).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TUniqueFunction<void___cdecl(void)>_>)0x0) {
    FVar5 = (ForElementType<TUniqueFunction<void___cdecl(void)>_>)&this->LazyInitCommands;
  }
  DestructItems<TUniqueFunction<void___cdecl(void)>,int>
            ((TUniqueFunction<void___cdecl(void)> *)FVar5,(this->LazyInitCommands).ArrayNum);
  FVar5 = (this->LazyInitCommands).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<TUniqueFunction<void___cdecl(void)>_>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  return;
}

// operator() @ 14ae5d660

bool __thiscall
`Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe'::__l2::<lambda_1>::operator()
          (void *this)

{
  FNodeClassRegistryKey *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x181a8);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EnterCriticalSection(lpCriticalSection);
  pFVar1 = *(FNodeClassRegistryKey **)((longlong)this + 8);
  lVar7 = *(longlong *)this;
  uVar5 = Metasound::Frontend::GetTypeHash(pFVar1);
  iVar6 = TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
          ::FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey>
                    ((TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
                      *)(lVar7 + 0x18058),uVar5,pFVar1);
  if (iVar6 != -1) {
    lVar7 = (longlong)iVar6 * 0x40 + *(longlong *)(lVar7 + 0x18058);
    puVar8 = (undefined8 *)(lVar7 + 0x28);
    if (lVar7 == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    if (puVar8 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)((longlong)this + 0x10))
                ((*(undefined8 **)((longlong)this + 0x10))[1],*puVar8);
      bVar3 = true;
      goto LAB_14ae5d70c;
    }
  }
  bVar3 = false;
LAB_14ae5d70c:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return bVar3;
}

// operator() @ 14ae5dc20

void __thiscall
`Metasound::Frontend::FNodeClassRegistry::CreateNode'::__l2::<lambda_1>::operator()
          (void *this,INodeClassRegistryEntry *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  FVertexInterface *pFVar4;
  FNodeData *pFVar5;
  longlong *plVar6;
  undefined8 *local_res8;
  FNodeData local_108;
  FNodeData local_88;
  
  (**(code **)((longlong)*param_1 + 0x38))(param_1);
  pFVar4 = (FVertexInterface *)(**(code **)((longlong)*param_1 + 0x50))(param_1,&local_88);
  Metasound::FNodeData::FNodeData
            (&local_108,*(FName **)((longlong)this + 8),
             (FGuid *)(*(FName **)((longlong)this + 8) + 1),pFVar4);
  pcVar1 = *(code **)((longlong)*param_1 + 0x10);
  pFVar5 = Metasound::FNodeData::FNodeData(&local_88,&local_108);
  plVar6 = (longlong *)(*pcVar1)(param_1,&local_res8,pFVar5);
  plVar2 = *(longlong **)this;
  if (plVar2 != plVar6) {
    puVar3 = (undefined8 *)*plVar2;
    *plVar2 = *plVar6;
    *plVar6 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  Metasound::FNodeData::~FNodeData(&local_108);
  return;
}

// operator() @ 14ae5dd00

void __thiscall
`Metasound::Frontend::FNodeClassRegistry::CreateNode'::__l2::<lambda_1>::operator()
          (void *this,INodeClassRegistryEntry *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  FNodeData *pFVar4;
  longlong *plVar5;
  undefined8 *local_res8;
  FNodeData local_88;
  
  pcVar1 = *(code **)((longlong)*param_1 + 0x10);
  pFVar4 = Metasound::FNodeData::FNodeData(&local_88,*(FNodeData **)((longlong)this + 8));
  plVar5 = (longlong *)(*pcVar1)(param_1,&local_res8,pFVar4);
  plVar2 = *(longlong **)this;
  if (plVar2 != plVar5) {
    puVar3 = (undefined8 *)*plVar2;
    *plVar2 = *plVar5;
    *plVar5 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

// operator() @ 14ae5dda0

bool __thiscall
`Metasound::Frontend::FNodeClassRegistry::IsNodeRegistered'::__l2::<lambda_1>::operator()
          (void *this)

{
  FNodeClassRegistryKey *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x181a8);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  EnterCriticalSection(lpCriticalSection);
  pFVar1 = *(FNodeClassRegistryKey **)((longlong)this + 8);
  lVar2 = *(longlong *)this;
  uVar6 = Metasound::Frontend::GetTypeHash(pFVar1);
  iVar7 = TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
          ::FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey>
                    ((TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
                      *)(lVar2 + 0x18058),uVar6,pFVar1);
  if (iVar7 == -1) {
    pFVar1 = *(FNodeClassRegistryKey **)((longlong)this + 8);
    lVar2 = *(longlong *)this;
    uVar6 = Metasound::Frontend::GetTypeHash(pFVar1);
    iVar7 = TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey>
                      ((TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
                        *)(lVar2 + 0x180a8),uVar6,pFVar1);
    if (iVar7 == -1) {
      bVar4 = false;
      goto LAB_14ae5de45;
    }
  }
  bVar4 = true;
LAB_14ae5de45:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return bVar4;
}

// operator() @ 14ae5e3f0

void __thiscall
`Metasound::Frontend::FNodeClassRegistry::RegisterGraph'::__l92::<lambda_2>::operator()(void *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FGuid *pFVar2;
  UObject *pUVar3;
  IObjectReferencer *pIVar4;
  code *pcVar5;
  bool bVar6;
  FNodeClassRegistry *this_00;
  FNodeClassRegistry *pFVar7;
  FMetasoundFrontendDocument *pFVar8;
  FNodeClassRegistry *pFVar9;
  undefined4 uStack_1c;
  TArrayView<FGuid_const_,int> local_18;
  
  pFVar9 = (FNodeClassRegistry *)0x0;
  pFVar7 = Metasound::Frontend::FNodeClassRegistry::LazySingleton;
  if ((Metasound::Frontend::FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) &&
     (this_00 = ::operator_new(0x182b0), pFVar7 = pFVar9, this_00 != (FNodeClassRegistry *)0x0)) {
    pFVar7 = Metasound::Frontend::FNodeClassRegistry::FNodeClassRegistry(this_00);
  }
  Metasound::Frontend::FNodeClassRegistry::LazySingleton = pFVar7;
  pFVar7 = Metasound::Frontend::FNodeClassRegistry::LazySingleton;
  Metasound::Frontend::FNodeClassRegistry::UnregisterGraphInternal
            (Metasound::Frontend::FNodeClassRegistry::LazySingleton,this);
  pFVar2 = *(FGuid **)((longlong)this + 0xe0);
  iVar1 = *(int *)((longlong)this + 0xe8);
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(longlong *)((longlong)this + 0x80) != 0) {
    pFVar9 = *(FNodeClassRegistry **)((longlong)this + 0x88);
  }
  pFVar8 = (FMetasoundFrontendDocument *)(**(code **)(*(longlong *)pFVar9 + 0x18))(pFVar9);
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pFVar2;
  Metasound::Frontend::FNodeClassRegistry::BuildAndRegisterGraphFromDocument
            (pFVar7,pFVar8,(FProxyDataCache *)((longlong)this + 0x90),
             (FNodeClassInfo *)((longlong)this + 0x38),this,&local_18);
  Metasound::Frontend::FNodeClassRegistry::RemoveRegistrationTask
            (pFVar7,this,*(int *)((longlong)this + 0xf0),NodeRegistration);
  pUVar3 = *(UObject **)((longlong)this + 0x80);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  lpCriticalSection = &pFVar7->ObjectReferencerCriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((pUVar3 != (UObject *)0x0) &&
     (pIVar4 = (pFVar7->ObjectReferencer).Ptr, pIVar4 != (IObjectReferencer *)0x0)) {
    (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,pUVar3);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// AccessNodeEntryThreadSafe @ 14ae606b0

bool __thiscall
Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe
          (FNodeClassRegistry *this,FNodeClassRegistryKey *param_1,
          TFunctionRef<void___cdecl(Metasound::Frontend::INodeClassRegistryEntry_const_&)> *param_2)

{
  bool bVar1;
  FNodeClassRegistry *local_28;
  FNodeClassRegistryKey *local_20;
  TFunctionRef<void___cdecl(Metasound::Frontend::INodeClassRegistryEntry_const_&)> *local_18;
  
  local_28 = this;
  local_20 = param_1;
  local_18 = param_2;
  bVar1 = `Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe'::__l2::<lambda_1>::
          operator()(&local_28);
  if (bVar1) {
    return true;
  }
  WaitForAsyncRegistrationInternal(this,param_1,(FTopLevelAssetPath *)0x0);
  bVar1 = `Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe'::__l2::<lambda_1>::
          operator()(&local_28);
  return bVar1;
}

// AddDocumentReference @ 14ae60e30

void __thiscall
Metasound::Frontend::FNodeClassRegistry::AddDocumentReference
          (FNodeClassRegistry *this,TScriptInterface<IMetaSoundDocumentInterface> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IObjectReferencer *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  lpCriticalSection = &this->ObjectReferencerCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
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
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((*(longlong *)param_1 != 0) &&
     (pIVar1 = (this->ObjectReferencer).Ptr, pIVar1 != (IObjectReferencer *)0x0)) {
    (**(code **)((longlong)*pIVar1 + 8))();
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// AddRegistrationTask @ 14ae61250

void __thiscall
Metasound::Frontend::FNodeClassRegistry::AddRegistrationTask
          (FNodeClassRegistry *this,FGraphClassRegistryKey *param_1,
          FActiveRegistrationTaskInfo *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  FActiveRegistrationTaskInfo *pFVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>
  *pTVar9;
  
  lpCriticalSection = &this->ActiveRegistrationTasksCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar7 = Frontend::GetTypeHash(&param_1->NodeKey);
  pTVar9 = TMapBase<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<Metasound::Frontend::FNodeClassRegistryKey_const_&>
                     ((TMapBase<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ActiveRegistrationTasks,uVar7,&param_1->NodeKey);
  pFVar2 = (FActiveRegistrationTaskInfo *)(pTVar9->AllocatorInstance).Data;
  if ((pFVar2 <= param_2) && (param_2 < pFVar2 + pTVar9->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar8 = pTVar9->ArrayNum;
  if (iVar8 == pTVar9->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
  }
  pTVar9->ArrayNum = iVar8 + 1;
  pFVar1 = (pTVar9->AllocatorInstance).Data + (longlong)iVar8 * 0x28;
  *pFVar1 = (FScriptContainerElement)param_2->TransactionType;
  *(undefined8 *)(pFVar1 + 8) = 0;
  *(FTaskBase **)&pFVar1[8].field_0x0 = (param_2->Task).Pimpl.Reference;
  (param_2->Task).Pimpl.Reference = (FTaskBase *)0x0;
  uVar7 = (param_2->AssetPath).PackageName.Number;
  uVar4 = (param_2->AssetPath).AssetName.ComparisonIndex.Value;
  uVar5 = (param_2->AssetPath).AssetName.Number;
  *(uint *)(pFVar1 + 0x10) = (param_2->AssetPath).PackageName.ComparisonIndex.Value;
  *(uint *)(pFVar1 + 0x14) = uVar7;
  *(uint *)(pFVar1 + 0x18) = uVar4;
  *(uint *)(pFVar1 + 0x1c) = uVar5;
  *(int *)(pFVar1 + 0x20) = param_2->RegistrationTaskID;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// BuildAndRegisterGraphFromDocument @ 14ae643a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::Frontend::FNodeClassRegistry::BuildAndRegisterGraphFromDocument
          (FNodeClassRegistry *this,FMetasoundFrontendDocument *param_1,FProxyDataCache *param_2,
          FNodeClassInfo *param_3,FGraphClassRegistryKey *param_4,
          TArrayView<FGuid_const_,int> *param_5)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  IGraph *pIVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  IMetaSoundAssetManager *pIVar9;
  FGuid *pFVar10;
  FDocumentNodeClassRegistryEntry *pFVar11;
  FDocumentNodeClassRegistryEntry *pFVar12;
  ForAnyElementType FVar13;
  FWindowsRecursiveMutex *lpCriticalSection;
  FDocumentNodeClassRegistryEntry *pFVar14;
  bool bVar15;
  bool bVar16;
  IGraph *local_1b0;
  FSharedReferencer<1> local_1a8;
  FName FStack_1a0;
  undefined1 local_198 [16];
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_188;
  undefined1 local_180 [12];
  FName local_174;
  FString local_168;
  FString local_158;
  IGraph *local_148;
  FDocumentNodeClassRegistryEntry *local_140;
  FNodeClassRegistryKey local_138;
  TSharedPtr<Metasound::IGraph_const_,1> local_110;
  FGraphClassRegistryKey *local_100;
  IGraph **local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FGuid *local_b8;
  ForAnyElementType FStack_b0;
  undefined1 local_a8 [16];
  FString local_98;
  FTopLevelAssetPath local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FGuid local_48;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FNodeClassRegistry::BuildAndRegisterGraphFromDocument");
  }
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId370,
               "Metasound::FNodeClassRegistry::BuildAndRegisterGraphFromDocument",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
               ,0x172);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId370);
  }
  iVar8 = GCycleStatsShouldEmitNamedEvents;
  local_180._4_8_ = (param_4->AssetPath).AssetName;
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  ::FName::ToString((FName *)(local_180 + 4),&local_f0);
  ::FString::PrintfImpl
            (&local_168,L"Metasound::FNodeClassRegistry::BuildAndRegisterGraphFromDocument asset %s"
            );
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_168.Data.ArrayNum != 0) {
    FVar13.Data = local_168.Data.AllocatorInstance.Data;
  }
  if (0 < iVar8) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,(wchar_t *)FVar13.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  local_174 = (param_4->AssetPath).AssetName;
  ::FName::ToString(&local_174,&local_e0);
  ::FString::PrintfImpl
            (&local_158,L"Metasound::FNodeClassRegistry::BuildAndRegisterGraphFromDocument asset %s"
            );
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_158.Data.ArrayNum != 0) {
    FVar13.Data = local_158.Data.AllocatorInstance.Data;
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar13.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
               ,0x173);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  pFVar12 = (FDocumentNodeClassRegistryEntry *)0x0;
  local_1a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FStack_1a0.ComparisonIndex.Value = 0;
  FStack_1a0.Number = 0;
  pIVar9 = IMetaSoundAssetManager::Get();
  if (pIVar9 == (IMetaSoundAssetManager *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      FTopLevelAssetPath::ToString(&param_4->AssetPath,&local_d0);
      local_198._0_4_ = 0;
      local_198._4_4_ = 0;
      local_198._8_8_ = 0;
      FGuid::AppendString((FGuid *)&local_1a8,(FString *)local_198,Digits);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if ((FMetasoundFrontendVersionNumber)local_198._0_8_ != (FMetasoundFrontendVersionNumber)0x0)
      {
        FMemory::Free((void *)local_198._0_8_);
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    pFVar10 = FGuid::NewGuid(&local_48);
    local_1a8.ReferenceController = *(TReferenceControllerBase<1> **)pFVar10;
    FStack_1a0.ComparisonIndex.Value = pFVar10->C;
    FStack_1a0.Number = pFVar10->D;
  }
  else {
    cVar5 = (**(code **)((longlong)*pIVar9 + 0x90))(pIVar9,param_3,&local_1a8);
    if ((cVar5 == '\0') &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<773741605369676152>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
                           ,0x178,
                           "AssetManager->TryGetAssetIDFromClassName(InNodeClassInfo.ClassName, AssetClassID)"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_a8._0_8_ = local_1a8.ReferenceController;
  local_a8._8_4_ = FStack_1a0.ComparisonIndex.Value;
  local_a8._12_4_ = FStack_1a0.Number;
  local_b8 = param_5->DataPtr;
  FStack_b0.Data = *(FScriptContainerElement **)&param_5->ArrayNum;
  FGraphBuilder::CreateGraph
            ((FMetasoundFrontendDocument *)&local_1b0,(FProxyDataCache *)param_1,
             (FTopLevelAssetPath *)param_2,(FGuid *)&param_4->AssetPath,
             (TArrayView<FGuid_const_,int> *)local_a8);
  if ((local_1b0 == (IGraph *)0x0) && (1 < (byte)LogMetaSound._0_1_)) {
    FTopLevelAssetPath::ToString(&param_4->AssetPath,&local_98);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  pIVar4 = local_1b0;
  local_1b0 = (IGraph *)0x0;
  pFVar11 = ::operator_new(0x18);
  pFVar14 = pFVar12;
  if (pFVar11 != (FDocumentNodeClassRegistryEntry *)0x0) {
    *(undefined4 *)&(pFVar11->FrontendClass)._padding_ = 1;
    *(undefined4 *)((longlong)&(pFVar11->FrontendClass)._padding_ + 4) = 1;
    pFVar11->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFFrontendGraph_Metasound__U__DefaultDeleter_VFFrontendGraph_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(IGraph **)&(pFVar11->FrontendClass).ID = pIVar4;
    pFVar14 = pFVar11;
  }
  pFVar11 = ::operator_new(0x150);
  if (pFVar11 != (FDocumentNodeClassRegistryEntry *)0x0) {
    local_110.Object = pIVar4;
    local_88.PackageName = (param_4->AssetPath).PackageName;
    local_88.AssetName = (param_4->AssetPath).AssetName;
    if (pFVar14 != (FDocumentNodeClassRegistryEntry *)0x0) {
      LOCK();
      *(int *)&(pFVar14->FrontendClass)._padding_ = (int)(pFVar14->FrontendClass)._padding_ + 1;
      UNLOCK();
    }
    local_110.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar14;
    pFVar12 = RegistryPrivate::FDocumentNodeClassRegistryEntry::FDocumentNodeClassRegistryEntry
                        (pFVar11,&param_1->RootGraph,&param_1->Interfaces,param_3,&local_110,
                         &local_88);
  }
  local_188.Ptr = (INodeClassRegistryEntry *)pFVar12;
  RegisterNodeInternal(this,&local_138,&local_188);
  if (((((local_138.Type != (param_4->NodeKey).Type) ||
        (local_138.ClassName.Namespace != (param_4->NodeKey).ClassName.Namespace)) ||
       (local_138.ClassName.Name != (param_4->NodeKey).ClassName.Name)) ||
      ((local_138.ClassName.Variant != (param_4->NodeKey).ClassName.Variant ||
       (local_138.Version.Major != (param_4->NodeKey).Version.Major)))) ||
     (local_138.Version.Minor != (param_4->NodeKey).Version.Minor)) {
    FNodeClassRegistryKey::ToString(&local_138,&local_68);
    FNodeClassRegistryKey::ToString(&param_4->NodeKey,&local_78);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeRegistryKey == InGraphRegistryKey.NodeKey",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
                       ,400,
                       L"Mismatched between expected node registry key for registered MetaSound graph. Expected %s but found %s"
                      );
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_148 = pIVar4;
  if (pFVar14 != (FDocumentNodeClassRegistryEntry *)0x0) {
    LOCK();
    *(int *)&(pFVar14->FrontendClass)._padding_ = (int)(pFVar14->FrontendClass)._padding_ + 1;
    UNLOCK();
  }
  lpCriticalSection = &this->RegistryMapsCriticalSection;
  local_140 = pFVar14;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar7 = Frontend::GetTypeHash(param_4);
  iVar8 = TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<Metasound::Frontend::FGraphClassRegistryKey>
                    ((TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
                      *)&this->RegisteredGraphs,uVar7,param_4);
  if ((iVar8 != -1) && (2 < (byte)LogMetaSound._0_1_)) {
    FGraphClassRegistryKey::ToString(param_4,&local_58);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if ((ForElementType<FSetElementId>)local_58.Data.AllocatorInstance.Data !=
        (ForElementType<FSetElementId>)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  local_f8 = &local_148;
  local_100 = param_4;
  TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<Metasound::Frontend::FGraphClassRegistryKey_const_&,TSharedPtr<Metasound::FGraph_const_,1>_const_&>_>
            ((TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
              *)&this->RegisteredGraphs,
             (TPairInitializer<Metasound::Frontend::FGraphClassRegistryKey_const_&,TSharedPtr<Metasound::FGraph_const_,1>_const_&>
              *)local_180,(bool *)&local_100);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_140);
  if ((FDocumentNodeClassRegistryEntry *)local_188.Ptr != (FDocumentNodeClassRegistryEntry *)0x0) {
    (**(code **)*local_188.Ptr)(local_188.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  if (local_1b0 != (IGraph *)0x0) {
    (*(code *)**(undefined8 **)local_1b0)(local_1b0,1);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// CreateFrontendNodeConfiguration @ 14ae67bf0

TInstancedStruct<FMetaSoundFrontendNodeConfiguration> * __thiscall
Metasound::Frontend::FNodeClassRegistry::CreateFrontendNodeConfiguration
          (FNodeClassRegistry *this,
          TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *__return_storage_ptr__,
          FNodeClassRegistryKey *param_1)

{
  bool bVar1;
  TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *local_res8;
  code *local_38;
  TInstancedStruct<FMetaSoundFrontendNodeConfiguration> **local_30;
  FNodeClassRegistry *local_28;
  FNodeClassRegistryKey *local_20;
  code **local_18;
  
  FInstancedStruct::FInstancedStruct(&__return_storage_ptr__->InstancedStruct);
  local_30 = &local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FNodeClassRegistry::CreateFrontendNodeConfiguration'::__l2::<lambda_1>,void,Metasound::Frontend::INodeClassRegistryEntry_const_&>
             ::Call;
  local_18 = &local_38;
  local_res8 = __return_storage_ptr__;
  local_28 = this;
  local_20 = param_1;
  bVar1 = `Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe'::__l2::<lambda_1>::
          operator()(&local_28);
  if (!bVar1) {
    WaitForAsyncRegistrationInternal(this,param_1,(FTopLevelAssetPath *)0x0);
    `Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe'::__l2::<lambda_1>::
    operator()(&local_28);
  }
  return __return_storage_ptr__;
}

// CreateNode @ 14ae69730

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::FNodeClassRegistry::CreateNode
          (FNodeClassRegistry *this,FNodeClassRegistryKey *param_1,FNodeInitData *param_2)

{
  bool bVar1;
  undefined8 local_res8;
  undefined8 *local_48 [2];
  undefined1 local_38 [16];
  FNodeClassRegistry *local_28;
  FNodeInitData *local_20;
  undefined1 *local_18;
  
  local_48[0] = &local_res8;
  local_38._8_8_ = local_48;
  local_res8 = 0;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Metasound::Frontend::FNodeClassRegistry::CreateNode'::__l2::<lambda_1>,void,Metasound::Frontend::INodeClassRegistryEntry_const_&>
       ::Call;
  local_18 = local_38;
  local_28 = this;
  local_20 = param_2;
  bVar1 = `Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe'::__l2::<lambda_1>::
          operator()(&local_28);
  if (!bVar1) {
    WaitForAsyncRegistrationInternal
              (this,(FNodeClassRegistryKey *)param_2,(FTopLevelAssetPath *)0x0);
    bVar1 = `Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe'::__l2::<lambda_1>::
            operator()(&local_28);
    if ((!bVar1) && (1 < (byte)LogMetaSound._0_1_)) {
      FNodeClassRegistryKey::ToString((FNodeClassRegistryKey *)param_2,(FString *)local_38);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_38._0_8_);
      }
    }
  }
  param_1->Type = (undefined1)local_res8;
  *(undefined3 *)&param_1->field_0x1 = local_res8._1_3_;
  (param_1->ClassName).Namespace.ComparisonIndex = (FNameEntryId)local_res8._4_4_;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae69820

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::FNodeClassRegistry::CreateNode
          (FNodeClassRegistry *this,FNodeClassRegistryKey *param_1,FNodeData *param_2)

{
  bool bVar1;
  FNodeData *in_R9;
  undefined8 local_res8;
  undefined8 *local_48 [2];
  undefined1 local_38 [16];
  FNodeClassRegistry *local_28;
  FNodeData *local_20;
  undefined1 *local_18;
  
  local_48[0] = &local_res8;
  local_38._8_8_ = local_48;
  local_res8 = 0;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Metasound::Frontend::FNodeClassRegistry::CreateNode'::__l2::<lambda_1>,void,Metasound::Frontend::INodeClassRegistryEntry_const_&>
       ::Call;
  local_18 = local_38;
  local_28 = this;
  local_20 = param_2;
  bVar1 = `Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe'::__l2::<lambda_1>::
          operator()(&local_28);
  if (!bVar1) {
    WaitForAsyncRegistrationInternal
              (this,(FNodeClassRegistryKey *)param_2,(FTopLevelAssetPath *)0x0);
    bVar1 = `Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe'::__l2::<lambda_1>::
            operator()(&local_28);
    if ((!bVar1) && (1 < (byte)LogMetaSound._0_1_)) {
      FNodeClassRegistryKey::ToString((FNodeClassRegistryKey *)param_2,(FString *)local_38);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_38._0_8_);
      }
    }
  }
  param_1->Type = (undefined1)local_res8;
  *(undefined3 *)&param_1->field_0x1 = local_res8._1_3_;
  (param_1->ClassName).Namespace.ComparisonIndex = (FNameEntryId)local_res8._4_4_;
  local_res8 = 0;
  FNodeData::~FNodeData(in_R9);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateTransactionStream @ 14ae6c1b0

TUniquePtr<Metasound::Frontend::TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction>,TDefaultDelete<Metasound::Frontend::TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction>_>_>
 __thiscall
Metasound::Frontend::FNodeClassRegistry::CreateTransactionStream(FNodeClassRegistry *this)

{
  TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction> *this_00;
  TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *pTVar1;
  TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction> *in_RDX;
  TSharedRef<Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>,1>
  local_18;
  
  this_00 = ::operator_new(0x18);
  if (this_00 != (TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction> *)0x0) {
    local_18.SharedReferenceCount.ReferenceController =
         (this->TransactionBuffer).SharedReferenceCount.ReferenceController;
    local_18.Object = (this->TransactionBuffer).Object;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = (TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *)
             TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction>::
             TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction>
                       (this_00,&local_18);
    (in_RDX->Buffer).Object = pTVar1;
    return (TUniquePtr<Metasound::Frontend::TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction>,TDefaultDelete<Metasound::Frontend::TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction>_>_>
            )in_RDX;
  }
  (in_RDX->Buffer).Object =
       (TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *)0x0;
  return (TUniquePtr<Metasound::Frontend::TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction>,TDefaultDelete<Metasound::Frontend::TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction>_>_>
          )in_RDX;
}

// EnqueueInitCommand @ 14ae6d960

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::Frontend::FNodeClassRegistry::EnqueueInitCommand
          (FNodeClassRegistry *this,TUniqueFunction<void___cdecl(void)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  uchar *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  bool bVar18;
  undefined1 uVar19;
  int iVar20;
  longlong lVar21;
  ForElementType<TUniqueFunction<void___cdecl(void)>_> FVar22;
  TArray<TUniqueFunction<void___cdecl(void)>,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_>
  *pTVar23;
  
  lpCriticalSection = &this->LazyInitCommandCritSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Mutex",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                        ,0x1b,L"");
    if (bVar18) {
      pcVar3 = (code *)swi(3);
      uVar19 = (*pcVar3)();
      return (bool)uVar19;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar23 = &this->LazyInitCommands;
  if ((0x7ff < (this->LazyInitCommands).ArrayNum) && (2 < (byte)LogMetaSound._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  FVar22 = (this->LazyInitCommands).AllocatorInstance.SecondaryData;
  if (FVar22 == (ForElementType<TUniqueFunction<void___cdecl(void)>_>)0x0) {
    FVar22 = (ForElementType<TUniqueFunction<void___cdecl(void)>_>)pTVar23;
  }
  if (((ulonglong)FVar22 <= param_1) &&
     (param_1 < (TUniqueFunction<void___cdecl(void)> *)
                ((longlong)(this->LazyInitCommands).ArrayMax * 0x30 + (longlong)FVar22))) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar3 = (code *)swi(3);
      uVar19 = (*pcVar3)();
      return (bool)uVar19;
    }
  }
  iVar20 = (this->LazyInitCommands).ArrayNum;
  piVar1 = &(this->LazyInitCommands).ArrayMax;
  if (iVar20 == *piVar1) {
    iVar20 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniqueFunction<void___cdecl(void)>_>_>
                       (0x1030,&pTVar23->AllocatorInstance,piVar1);
  }
  lVar21 = (longlong)iVar20;
  (this->LazyInitCommands).ArrayNum = iVar20 + 1;
  FVar22 = (this->LazyInitCommands).AllocatorInstance.SecondaryData;
  if (FVar22 == (ForElementType<TUniqueFunction<void___cdecl(void)>_>)0x0) {
    FVar22 = (ForElementType<TUniqueFunction<void___cdecl(void)>_>)pTVar23;
  }
  *(undefined8 *)((longlong)FVar22 + lVar21 * 0x30) = *(undefined8 *)param_1;
  uVar19 = param_1->field_0x29;
  uVar4 = param_1->field_0x2a;
  uVar5 = param_1->field_0x2b;
  uVar6 = param_1->field_0x2c;
  uVar7 = param_1->field_0x2d;
  uVar8 = param_1->field_0x2e;
  uVar9 = param_1->field_0x2f;
  puVar2 = (uchar *)((longlong)FVar22 + 0x28) + lVar21 * 0x30;
  puVar2[0] = param_1->field_0x28;
  puVar2[1] = uVar19;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar2[4] = uVar6;
  puVar2[5] = uVar7;
  puVar2[6] = uVar8;
  puVar2[7] = uVar9;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar19 = param_1->field_0x11;
  uVar4 = param_1->field_0x12;
  uVar5 = param_1->field_0x13;
  uVar6 = param_1->field_0x14;
  uVar7 = param_1->field_0x15;
  uVar8 = param_1->field_0x16;
  uVar9 = param_1->field_0x17;
  uVar10 = param_1->field_0x18;
  uVar11 = param_1->field_0x19;
  uVar12 = param_1->field_0x1a;
  uVar13 = param_1->field_0x1b;
  uVar14 = param_1->field_0x1c;
  uVar15 = param_1->field_0x1d;
  uVar16 = param_1->field_0x1e;
  uVar17 = param_1->field_0x1f;
  puVar2 = (uchar *)((longlong)FVar22 + 0x10) + lVar21 * 0x30;
  puVar2[0] = param_1->field_0x10;
  puVar2[1] = uVar19;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar2[4] = uVar6;
  puVar2[5] = uVar7;
  puVar2[6] = uVar8;
  puVar2[7] = uVar9;
  puVar2[8] = uVar10;
  puVar2[9] = uVar11;
  puVar2[10] = uVar12;
  puVar2[0xb] = uVar13;
  puVar2[0xc] = uVar14;
  puVar2[0xd] = uVar15;
  puVar2[0xe] = uVar16;
  puVar2[0xf] = uVar17;
  uVar19 = param_1->field_0x21;
  uVar4 = param_1->field_0x22;
  uVar5 = param_1->field_0x23;
  uVar6 = param_1->field_0x24;
  uVar7 = param_1->field_0x25;
  uVar8 = param_1->field_0x26;
  uVar9 = param_1->field_0x27;
  puVar2 = (uchar *)((longlong)FVar22 + 0x20) + lVar21 * 0x30;
  puVar2[0] = param_1->field_0x20;
  puVar2[1] = uVar19;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar2[4] = uVar6;
  puVar2[5] = uVar7;
  puVar2[6] = uVar8;
  puVar2[7] = uVar9;
  if (*(longlong *)((longlong)FVar22 + lVar21 * 0x30) != 0) {
    *(undefined8 *)param_1 = 0;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return true;
}

// FindDefaultVertexInterface @ 14ae71b30

bool __thiscall
Metasound::Frontend::FNodeClassRegistry::FindDefaultVertexInterface
          (FNodeClassRegistry *this,FNodeClassRegistryKey *param_1,FVertexInterface *param_2)

{
  bool bVar1;
  FVertexInterface *local_res8;
  code *local_38;
  FVertexInterface **local_30;
  FNodeClassRegistry *local_28;
  FNodeClassRegistryKey *local_20;
  code **local_18;
  
  local_30 = &local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FNodeClassRegistry::FindDefaultVertexInterface'::__l2::<lambda_1>,void,Metasound::Frontend::INodeClassRegistryEntry_const_&>
             ::Call;
  local_18 = &local_38;
  local_res8 = param_2;
  local_28 = this;
  local_20 = param_1;
  bVar1 = `Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe'::__l2::<lambda_1>::
          operator()(&local_28);
  if (!bVar1) {
    WaitForAsyncRegistrationInternal(this,param_1,(FTopLevelAssetPath *)0x0);
    bVar1 = `Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe'::__l2::<lambda_1>::
            operator()(&local_28);
    return bVar1;
  }
  return true;
}

// FindFrontendClassFromRegistered @ 14ae71db0

bool __thiscall
Metasound::Frontend::FNodeClassRegistry::FindFrontendClassFromRegistered
          (FNodeClassRegistry *this,FNodeClassRegistryKey *param_1,FMetasoundFrontendClass *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FName FVar3;
  FMetasoundFrontendVersionNumber FVar4;
  bool bVar5;
  INodeTemplateRegistryEntry *pIVar6;
  longlong lVar7;
  FMetasoundFrontendClass *local_res8;
  code *local_38;
  FMetasoundFrontendClass **local_30;
  FNodeClassRegistry *local_28;
  FNodeClassRegistryKey *local_20;
  code **local_18;
  
  local_30 = &local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FNodeClassRegistry::FindFrontendClassFromRegistered'::__l2::<lambda_1>,void,Metasound::Frontend::INodeClassRegistryEntry_const_&>
             ::Call;
  local_18 = &local_38;
  local_res8 = param_2;
  local_28 = this;
  local_20 = param_1;
  bVar5 = `Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe'::__l2::<lambda_1>::
          operator()(&local_28);
  if (!bVar5) {
    WaitForAsyncRegistrationInternal(this,param_1,(FTopLevelAssetPath *)0x0);
    bVar5 = `Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe'::__l2::<lambda_1>::
            operator()(&local_28);
    if (!bVar5) {
      pIVar6 = FindNodeTemplateEntry(this,param_1);
      if (pIVar6 == (INodeTemplateRegistryEntry *)0x0) {
        return false;
      }
      lVar7 = (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
      uVar1 = *(undefined8 *)(lVar7 + 8);
      uVar2 = *(undefined8 *)(lVar7 + 0x10);
      (param_2->ID).A = (int)uVar1;
      (param_2->ID).B = (int)((ulonglong)uVar1 >> 0x20);
      (param_2->ID).C = (int)uVar2;
      (param_2->ID).D = (int)((ulonglong)uVar2 >> 0x20);
      FVar3 = *(FName *)(lVar7 + 0x20);
      (param_2->Metadata).ClassName.Namespace = *(FName *)(lVar7 + 0x18);
      (param_2->Metadata).ClassName.Name = FVar3;
      FVar4 = *(FMetasoundFrontendVersionNumber *)(lVar7 + 0x30);
      (param_2->Metadata).ClassName.Variant = *(FName *)(lVar7 + 0x28);
      (param_2->Metadata).Version = FVar4;
      uVar1 = *(undefined8 *)(lVar7 + 0x38);
      uVar2 = *(undefined8 *)(lVar7 + 0x40);
      (param_2->Metadata).Type = (char)uVar1;
      (param_2->Metadata).field_0x21 = (char)((ulonglong)uVar1 >> 8);
      (param_2->Metadata).AccessFlags = (short)((ulonglong)uVar1 >> 0x10);
      (param_2->Metadata).ChangeID.A = (int)((ulonglong)uVar1 >> 0x20);
      (param_2->Metadata).ChangeID.B = (int)uVar2;
      (param_2->Metadata).ChangeID.C = (int)((ulonglong)uVar2 >> 0x20);
      (param_2->Metadata).ChangeID.D = *(uint *)(lVar7 + 0x48);
      FMetasoundFrontendClassInterface::operator=
                (&param_2->Interface,(FMetasoundFrontendClassInterface *)(lVar7 + 0x50));
    }
  }
  return true;
}

// FindImplementedInterfacesFromRegistered @ 14ae71e90

bool __thiscall
Metasound::Frontend::FNodeClassRegistry::FindImplementedInterfacesFromRegistered
          (FNodeClassRegistry *this,FNodeClassRegistryKey *param_1,
          TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
          *param_2)

{
  bool bVar1;
  undefined1 local_res8 [8];
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *local_48;
  undefined1 *local_40;
  code *local_38;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  **local_30;
  FNodeClassRegistry *local_28;
  FNodeClassRegistryKey *local_20;
  code **local_18;
  
  local_40 = local_res8;
  local_30 = &local_48;
  local_res8[0] = 0;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FNodeClassRegistry::FindImplementedInterfacesFromRegistered'::__l2::<lambda_1>,void,Metasound::Frontend::INodeClassRegistryEntry_const_&>
             ::Call;
  local_18 = &local_38;
  local_48 = param_2;
  local_28 = this;
  local_20 = param_1;
  bVar1 = `Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe'::__l2::<lambda_1>::
          operator()(&local_28);
  if (!bVar1) {
    WaitForAsyncRegistrationInternal(this,param_1,(FTopLevelAssetPath *)0x0);
    `Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe'::__l2::<lambda_1>::
    operator()(&local_28);
  }
  return (bool)local_res8[0];
}

// FindInputNodeRegistryKeyForDataType @ 14ae723f0

bool __thiscall
Metasound::Frontend::FNodeClassRegistry::FindInputNodeRegistryKeyForDataType
          (FNodeClassRegistry *this,FName *param_1,EMetasoundFrontendVertexAccessType param_2,
          FNodeClassRegistryKey *param_3)

{
  code *pcVar1;
  char cVar2;
  EMetasoundFrontendClassType EVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  IDataTypeRegistry *pIVar7;
  FMetasoundFrontendVersionNumber *pFVar8;
  undefined4 uVar9;
  FNameEntryId FVar10;
  uint uVar11;
  FNameEntryId FVar12;
  uint uVar13;
  FNameEntryId FVar14;
  uint uVar15;
  int iVar16;
  undefined **local_e8;
  FGuid local_e0;
  FMetasoundFrontendClassMetadata local_d0;
  FMetasoundFrontendClassInput *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  FName FStack_54;
  FName FStack_4c;
  FName FStack_44;
  FMetasoundFrontendVersionNumber FStack_3c;
  undefined4 local_34;
  FName FStack_30;
  FName FStack_28;
  FName FStack_20;
  FMetasoundFrontendVersionNumber FStack_18;
  
  local_e8 = &___7FMetasoundFrontendClass__6B_;
  local_e0 = FrontendInvalidID;
  FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_d0);
  local_98 = (FMetasoundFrontendClassInput *)0x0;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  if (param_2 == Reference) {
    pIVar7 = IDataTypeRegistry::Get();
    cVar2 = (**(code **)((longlong)*pIVar7 + 0xb8))(pIVar7,param_1,&local_e8);
    if (cVar2 != '\0') {
      EVar3 = FMetasoundFrontendClassMetadata::GetType(&local_d0);
      local_34 = CONCAT31(local_34._1_3_,EVar3);
      FStack_30 = local_d0.ClassName.Namespace;
      FStack_28 = local_d0.ClassName.Name;
      FStack_20 = local_d0.ClassName.Variant;
      pFVar8 = FMetasoundFrontendClassMetadata::GetVersion(&local_d0);
      FStack_18 = *pFVar8;
      EVar3 = FMetasoundFrontendClassMetadata::GetType(&local_d0);
      if ((EVar3 == Graph) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InNodeMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                             ,0xa9,
                             L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      uVar9 = local_34;
      FVar10.Value = FStack_30.ComparisonIndex.Value;
      uVar11 = FStack_30.Number;
      FVar12.Value = FStack_28.ComparisonIndex.Value;
      uVar13 = FStack_28.Number;
      FVar14.Value = FStack_20.ComparisonIndex.Value;
      uVar15 = FStack_20.Number;
      iVar16 = FStack_18.Major;
      iVar6 = FStack_18.Minor;
LAB_14ae7258d:
      *(undefined4 *)param_3 = uVar9;
      (param_3->ClassName).Namespace.ComparisonIndex.Value = FVar10.Value;
      (param_3->ClassName).Namespace.Number = uVar11;
      (param_3->ClassName).Name.ComparisonIndex.Value = FVar12.Value;
      (param_3->ClassName).Name.Number = uVar13;
      (param_3->ClassName).Variant.ComparisonIndex.Value = FVar14.Value;
      (param_3->ClassName).Variant.Number = uVar15;
      (param_3->Version).Major = iVar16;
      (param_3->Version).Minor = iVar6;
      bVar4 = true;
      goto LAB_14ae725a5;
    }
  }
  else if (param_2 == Value) {
    pIVar7 = IDataTypeRegistry::Get();
    cVar2 = (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,param_1,&local_e8);
    if (cVar2 != '\0') {
      EVar3 = FMetasoundFrontendClassMetadata::GetType(&local_d0);
      local_58 = CONCAT31(local_58._1_3_,EVar3);
      FStack_54 = local_d0.ClassName.Namespace;
      FStack_4c = local_d0.ClassName.Name;
      FStack_44 = local_d0.ClassName.Variant;
      pFVar8 = FMetasoundFrontendClassMetadata::GetVersion(&local_d0);
      FStack_3c = *pFVar8;
      EVar3 = FMetasoundFrontendClassMetadata::GetType(&local_d0);
      if ((EVar3 == Graph) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InNodeMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                             ,0xa9,
                             L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      uVar9 = local_58;
      FVar10.Value = FStack_54.ComparisonIndex.Value;
      uVar11 = FStack_54.Number;
      FVar12.Value = FStack_4c.ComparisonIndex.Value;
      uVar13 = FStack_4c.Number;
      FVar14.Value = FStack_44.ComparisonIndex.Value;
      uVar15 = FStack_44.Number;
      iVar16 = FStack_3c.Major;
      iVar6 = FStack_3c.Minor;
      goto LAB_14ae7258d;
    }
  }
  bVar4 = false;
LAB_14ae725a5:
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  DestructItems<FMetasoundFrontendClassInput,int>(local_98,(int)local_90);
  if (local_98 != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_98);
  }
  return bVar4;
}

// FindNodeTemplateEntry @ 14ae72c80

INodeTemplateRegistryEntry * __thiscall
Metasound::Frontend::FNodeClassRegistry::FindNodeTemplateEntry
          (FNodeClassRegistry *this,FNodeClassRegistryKey *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  INodeTemplateRegistryEntry *pIVar5;
  longlong lVar6;
  INodeTemplateRegistryEntry IVar7;
  INodeTemplateRegistryEntry IVar8;
  
  lpCriticalSection = &this->RegistryMapsCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar5 = (INodeTemplateRegistryEntry *)(*pcVar1)();
      return pIVar5;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar3 = Frontend::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey>
                    ((TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
                      *)&this->RegisteredNodeTemplates,uVar3,param_1);
  IVar8 = (INodeTemplateRegistryEntry)0x0;
  if (iVar4 != -1) {
    lVar6 = (longlong)iVar4 * 0x40 + *(longlong *)&(this->RegisteredNodeTemplates).field_0x0;
    IVar7 = (INodeTemplateRegistryEntry)(lVar6 + 0x28);
    if (lVar6 == 0) {
      IVar7 = IVar8;
    }
    if (IVar7 != (INodeTemplateRegistryEntry)0x0) {
      IVar8 = *(INodeTemplateRegistryEntry *)IVar7;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return (INodeTemplateRegistryEntry *)IVar8;
}

// FindOutputNodeRegistryKeyForDataType @ 14ae73210

bool __thiscall
Metasound::Frontend::FNodeClassRegistry::FindOutputNodeRegistryKeyForDataType
          (FNodeClassRegistry *this,FName *param_1,EMetasoundFrontendVertexAccessType param_2,
          FNodeClassRegistryKey *param_3)

{
  code *pcVar1;
  char cVar2;
  EMetasoundFrontendClassType EVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  IDataTypeRegistry *pIVar7;
  FMetasoundFrontendVersionNumber *pFVar8;
  undefined4 uVar9;
  FNameEntryId FVar10;
  uint uVar11;
  FNameEntryId FVar12;
  uint uVar13;
  FNameEntryId FVar14;
  uint uVar15;
  int iVar16;
  undefined **local_e8;
  FGuid local_e0;
  FMetasoundFrontendClassMetadata local_d0;
  FMetasoundFrontendClassInput *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  FName FStack_54;
  FName FStack_4c;
  FName FStack_44;
  FMetasoundFrontendVersionNumber FStack_3c;
  undefined4 local_34;
  FName FStack_30;
  FName FStack_28;
  FName FStack_20;
  FMetasoundFrontendVersionNumber FStack_18;
  
  local_e8 = &___7FMetasoundFrontendClass__6B_;
  local_e0 = FrontendInvalidID;
  FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_d0);
  local_98 = (FMetasoundFrontendClassInput *)0x0;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  if (param_2 == Reference) {
    pIVar7 = IDataTypeRegistry::Get();
    cVar2 = (**(code **)((longlong)*pIVar7 + 0xd0))(pIVar7,param_1,&local_e8);
    if (cVar2 != '\0') {
      EVar3 = FMetasoundFrontendClassMetadata::GetType(&local_d0);
      local_34 = CONCAT31(local_34._1_3_,EVar3);
      FStack_30 = local_d0.ClassName.Namespace;
      FStack_28 = local_d0.ClassName.Name;
      FStack_20 = local_d0.ClassName.Variant;
      pFVar8 = FMetasoundFrontendClassMetadata::GetVersion(&local_d0);
      FStack_18 = *pFVar8;
      EVar3 = FMetasoundFrontendClassMetadata::GetType(&local_d0);
      if ((EVar3 == Graph) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InNodeMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                             ,0xa9,
                             L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      uVar9 = local_34;
      FVar10.Value = FStack_30.ComparisonIndex.Value;
      uVar11 = FStack_30.Number;
      FVar12.Value = FStack_28.ComparisonIndex.Value;
      uVar13 = FStack_28.Number;
      FVar14.Value = FStack_20.ComparisonIndex.Value;
      uVar15 = FStack_20.Number;
      iVar16 = FStack_18.Major;
      iVar6 = FStack_18.Minor;
LAB_14ae733ad:
      *(undefined4 *)param_3 = uVar9;
      (param_3->ClassName).Namespace.ComparisonIndex.Value = FVar10.Value;
      (param_3->ClassName).Namespace.Number = uVar11;
      (param_3->ClassName).Name.ComparisonIndex.Value = FVar12.Value;
      (param_3->ClassName).Name.Number = uVar13;
      (param_3->ClassName).Variant.ComparisonIndex.Value = FVar14.Value;
      (param_3->ClassName).Variant.Number = uVar15;
      (param_3->Version).Major = iVar16;
      (param_3->Version).Minor = iVar6;
      bVar4 = true;
      goto LAB_14ae733c5;
    }
  }
  else if (param_2 == Value) {
    pIVar7 = IDataTypeRegistry::Get();
    cVar2 = (**(code **)((longlong)*pIVar7 + 0xd8))(pIVar7,param_1,&local_e8);
    if (cVar2 != '\0') {
      EVar3 = FMetasoundFrontendClassMetadata::GetType(&local_d0);
      local_58 = CONCAT31(local_58._1_3_,EVar3);
      FStack_54 = local_d0.ClassName.Namespace;
      FStack_4c = local_d0.ClassName.Name;
      FStack_44 = local_d0.ClassName.Variant;
      pFVar8 = FMetasoundFrontendClassMetadata::GetVersion(&local_d0);
      FStack_3c = *pFVar8;
      EVar3 = FMetasoundFrontendClassMetadata::GetType(&local_d0);
      if ((EVar3 == Graph) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InNodeMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                             ,0xa9,
                             L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      uVar9 = local_58;
      FVar10.Value = FStack_54.ComparisonIndex.Value;
      uVar11 = FStack_54.Number;
      FVar12.Value = FStack_4c.ComparisonIndex.Value;
      uVar13 = FStack_4c.Number;
      FVar14.Value = FStack_44.ComparisonIndex.Value;
      uVar15 = FStack_44.Number;
      iVar16 = FStack_3c.Major;
      iVar6 = FStack_3c.Minor;
      goto LAB_14ae733ad;
    }
  }
  bVar4 = false;
LAB_14ae733c5:
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  DestructItems<FMetasoundFrontendClassInput,int>(local_98,(int)local_90);
  if (local_98 != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_98);
  }
  return bVar4;
}

// FindVariableNodeRegistryKeyForDataType @ 14ae73a20

bool __thiscall
Metasound::Frontend::FNodeClassRegistry::FindVariableNodeRegistryKeyForDataType
          (FNodeClassRegistry *this,FName *param_1,FNodeClassRegistryKey *param_2)

{
  code *pcVar1;
  char cVar2;
  EMetasoundFrontendClassType EVar3;
  EMetasoundFrontendClassType EVar4;
  bool bVar5;
  undefined1 uVar6;
  IDataTypeRegistry *pIVar7;
  FMetasoundFrontendVersionNumber *pFVar8;
  undefined4 local_c8;
  FNameEntryId FStack_c4;
  uint uStack_c0;
  FNameEntryId FStack_bc;
  uint uStack_b8;
  FNameEntryId FStack_b4;
  uint uStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined **local_98;
  FGuid local_90;
  FMetasoundFrontendClassMetadata local_80;
  FMetasoundFrontendClassInput *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_98 = &___7FMetasoundFrontendClass__6B_;
  local_90 = FrontendInvalidID;
  FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_80);
  local_48 = (FMetasoundFrontendClassInput *)0x0;
  local_40 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  pIVar7 = IDataTypeRegistry::Get();
  cVar2 = (**(code **)((longlong)*pIVar7 + 200))(pIVar7,param_1,&local_98);
  if (cVar2 == '\0') {
    bVar5 = false;
  }
  else {
    EVar3 = FMetasoundFrontendClassMetadata::GetType(&local_80);
    FStack_c4 = local_80.ClassName.Namespace.ComparisonIndex.Value;
    uStack_c0 = local_80.ClassName.Namespace.Number;
    FStack_bc = local_80.ClassName.Name.ComparisonIndex.Value;
    uStack_b8 = local_80.ClassName.Name.Number;
    FStack_b4 = local_80.ClassName.Variant.ComparisonIndex.Value;
    uStack_b0 = local_80.ClassName.Variant.Number;
    pFVar8 = FMetasoundFrontendClassMetadata::GetVersion(&local_80);
    iStack_ac = (*pFVar8).Major;
    iStack_a8 = (*pFVar8).Minor;
    EVar4 = FMetasoundFrontendClassMetadata::GetType(&local_80);
    if (EVar4 == Graph) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNodeMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                         ,0xa9,
                         L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                        );
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
    }
    bVar5 = true;
    param_2->Type = EVar3;
    *(undefined3 *)&param_2->field_0x1 = local_c8._1_3_;
    (param_2->ClassName).Namespace.ComparisonIndex = (FNameEntryId)FStack_c4.Value;
    *(ulonglong *)&(param_2->ClassName).Namespace.Number = CONCAT44(FStack_bc.Value,uStack_c0);
    *(ulonglong *)&(param_2->ClassName).Name.Number = CONCAT44(FStack_b4.Value,uStack_b8);
    *(ulonglong *)&(param_2->ClassName).Variant.Number = CONCAT44(iStack_ac,uStack_b0);
    (param_2->Version).Minor = iStack_a8;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  DestructItems<FMetasoundFrontendClassInput,int>(local_48,(int)local_40);
  if (local_48 != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_48);
  }
  return bVar5;
}

// Get @ 14ae744b0

FNodeClassRegistry * __cdecl Metasound::Frontend::FNodeClassRegistry::Get(void)

{
  FNodeClassRegistry *this;
  
  if (LazySingleton == (FNodeClassRegistry *)0x0) {
    this = ::operator_new(0x182b0);
    if (this != (FNodeClassRegistry *)0x0) {
      LazySingleton = FNodeClassRegistry(this);
      return LazySingleton;
    }
    LazySingleton = (FNodeClassRegistry *)0x0;
  }
  return LazySingleton;
}

// GetGraph @ 14ae75a10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Metasound::FGraph_const_,1> * __thiscall
Metasound::Frontend::FNodeClassRegistry::GetGraph
          (FNodeClassRegistry *this,TSharedPtr<Metasound::FGraph_const_,1> *__return_storage_ptr__,
          FGraphClassRegistryKey *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FGraph *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TSharedPtr<Metasound::FGraph_const_,1> *pTVar8;
  longlong lVar9;
  undefined8 *puVar10;
  FString local_28;
  
  (**(code **)(*(longlong *)this + 0x20))(this,param_1);
  lpCriticalSection = &this->RegistryMapsCriticalSection;
  __return_storage_ptr__->Object = (FGraph *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedPtr<Metasound::FGraph_const_,1> *)(*pcVar3)();
    return pTVar8;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar6 = Frontend::GetTypeHash(param_1);
  iVar7 = TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<Metasound::Frontend::FGraphClassRegistryKey>
                    ((TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
                      *)&this->RegisteredGraphs,uVar6,param_1);
  if (iVar7 != -1) {
    lVar9 = (longlong)iVar7 * 0x50 + *(longlong *)&this->RegisteredGraphs;
    puVar10 = (undefined8 *)(lVar9 + 0x38);
    if (lVar9 == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    if (puVar10 != (undefined8 *)0x0) {
      pFVar1 = (FGraph *)*puVar10;
      pTVar2 = (TReferenceControllerBase<1> *)puVar10[1];
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
      __return_storage_ptr__->Object = pFVar1;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if ((__return_storage_ptr__->Object == (FGraph *)0x0) && (1 < (byte)LogMetaSound._0_1_)) {
    FGraphClassRegistryKey::ToString(param_1,&local_28);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetPossibleConverterNodes @ 14ae78680

TArray<Metasound::Frontend::FConverterNodeClassInfo,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FNodeClassRegistry::GetPossibleConverterNodes
          (FNodeClassRegistry *this,
          TArray<Metasound::Frontend::FConverterNodeClassInfo,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FName *param_1,FName *param_2)

{
  FName FVar1;
  FName FVar2;
  longlong lVar3;
  FScriptContainerElement *_Src;
  uint uVar4;
  longlong lVar5;
  FConverterNodeClassRegistryValue *pFVar6;
  undefined1 *puVar7;
  int iVar8;
  FConverterNodeClassRegistryKey local_18;
  
  FVar1 = *param_1;
  FVar2 = *param_2;
  local_18.FromDataType = FVar1;
  local_18.ToDataType = FVar2;
  uVar4 = Frontend::GetTypeHash(&local_18);
  if (*(int *)&(this->ConverterNodeClassRegistry).field_0x8 !=
      *(int *)&(this->ConverterNodeClassRegistry).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ConverterNodeClassRegistry).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ConverterNodeClassRegistry).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ConverterNodeClassRegistry).field_0x48 - 1U & uVar4)
                              * 4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&this->ConverterNodeClassRegistry;
      do {
        lVar5 = (longlong)iVar8;
        if ((*(FName *)(lVar3 + lVar5 * 0x28) == FVar1) &&
           (*(FName *)(lVar3 + 8 + lVar5 * 0x28) == FVar2)) {
          if (iVar8 != -1) {
            pFVar6 = TMapBase<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,0>_>
                     ::FindChecked((TMapBase<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,0>_>
                                    *)&this->ConverterNodeClassRegistry,&local_18);
            (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            iVar8 = (pFVar6->PotentialConverterNodes).ArrayNum;
            _Src = (pFVar6->PotentialConverterNodes).AllocatorInstance.Data;
            __return_storage_ptr__->ArrayNum = iVar8;
            if (iVar8 == 0) {
              __return_storage_ptr__->ArrayMax = 0;
              return __return_storage_ptr__;
            }
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x34,4,iVar8,0,&__return_storage_ptr__->AllocatorInstance,iVar8,
                       &__return_storage_ptr__->ArrayMax);
            memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar8 * 0x34);
            return __return_storage_ptr__;
          }
          break;
        }
        iVar8 = *(int *)(lVar3 + 0x20 + lVar5 * 0x28);
      } while (iVar8 != -1);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// IsCompatibleNodeConfiguration @ 14ae7a1b0

bool __thiscall
Metasound::Frontend::FNodeClassRegistry::IsCompatibleNodeConfiguration
          (FNodeClassRegistry *this,FNodeClassRegistryKey *param_1,
          TConstStructView<FMetaSoundFrontendNodeConfiguration> *param_2)

{
  bool bVar1;
  undefined1 local_res8 [8];
  undefined1 *local_48;
  TConstStructView<FMetaSoundFrontendNodeConfiguration> *local_40;
  code *local_38;
  undefined1 **local_30;
  FNodeClassRegistry *local_28;
  FNodeClassRegistryKey *local_20;
  code **local_18;
  
  local_48 = local_res8;
  local_30 = &local_48;
  local_res8[0] = 0;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FNodeClassRegistry::IsCompatibleNodeConfiguration'::__l2::<lambda_1>,void,Metasound::Frontend::INodeClassRegistryEntry_const_&>
             ::Call;
  local_18 = &local_38;
  local_40 = param_2;
  local_28 = this;
  local_20 = param_1;
  bVar1 = `Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe'::__l2::<lambda_1>::
          operator()(&local_28);
  if (!bVar1) {
    WaitForAsyncRegistrationInternal(this,param_1,(FTopLevelAssetPath *)0x0);
    `Metasound::Frontend::FNodeClassRegistry::AccessNodeEntryThreadSafe'::__l2::<lambda_1>::
    operator()(&local_28);
  }
  return (bool)local_res8[0];
}

// IsGraphRegistered @ 14ae7a620

bool __thiscall
Metasound::Frontend::FNodeClassRegistry::IsGraphRegistered
          (FNodeClassRegistry *this,FGraphClassRegistryKey *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  
  (**(code **)(*(longlong *)this + 0x20))();
  lpCriticalSection = &this->RegistryMapsCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar4 = Frontend::GetTypeHash(param_1);
  iVar5 = TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<Metasound::Frontend::FGraphClassRegistryKey>
                    ((TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
                      *)&this->RegisteredGraphs,uVar4,param_1);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar5 != -1;
}

// IsNodeRegistered @ 14ae7a730

bool __thiscall
Metasound::Frontend::FNodeClassRegistry::IsNodeRegistered
          (FNodeClassRegistry *this,FNodeClassRegistryKey *param_1)

{
  bool bVar1;
  FNodeClassRegistry *local_18;
  FNodeClassRegistryKey *local_10;
  
  local_18 = this;
  local_10 = param_1;
  bVar1 = `Metasound::Frontend::FNodeClassRegistry::IsNodeRegistered'::__l2::<lambda_1>::operator()
                    (&local_18);
  if (bVar1) {
    return true;
  }
  WaitForAsyncRegistrationInternal(this,param_1,(FTopLevelAssetPath *)0x0);
  bVar1 = `Metasound::Frontend::FNodeClassRegistry::IsNodeRegistered'::__l2::<lambda_1>::operator()
                    (&local_18);
  return bVar1;
}

// IterateRegistry @ 14ae7ba10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Frontend::FNodeClassRegistry::IterateRegistry
          (FNodeClassRegistry *this,
          TFunctionRef<void___cdecl(FMetasoundFrontendClass_const_&)> *param_1,
          EMetasoundFrontendClassType param_2)

{
  EMetasoundFrontendClassType local_res18 [16];
  
  local_res18[0] = param_2;
  if (2 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (local_res18[0] == Invalid) {
    Algo::
    ForEach<TMultiMap<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>_>_const_&,_Metasound::Frontend::FNodeClassRegistry::IterateRegistry_::__l2::<lambda_1>_>
              (&this->RegisteredNodes,(<lambda_1>)param_1);
    return;
  }
  Algo::
  ForEachIf<TMultiMap<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>_>_const_&,_Metasound::Frontend::FNodeClassRegistry::IterateRegistry_::__l25::<lambda_2>,_Metasound::Frontend::FNodeClassRegistry::IterateRegistry_::__l2::<lambda_1>_>
            (&this->RegisteredNodes,(<lambda_2>)local_res18,(<lambda_1>)param_1);
  return;
}

// RegisterConversionNode @ 14ae7fec0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
Metasound::Frontend::FNodeClassRegistry::RegisterConversionNode
          (FNodeClassRegistry *this,FConverterNodeClassRegistryKey *param_1,
          FConverterNodeClassInfo *param_2)

{
  int *piVar1;
  TMap<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,0>_>
  *this_00;
  longlong lVar2;
  FConverterNodeClassInfo *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FConverterNodeClassRegistryValue *pFVar11;
  FConverterNodeClassInfo *pFVar12;
  FName *pFVar13;
  undefined1 *puVar14;
  TKeyInitializer<Metasound::Frontend::FConverterNodeClassRegistryKey_const_&> local_res8;
  FConverterNodeClassRegistryKey *local_res20;
  
  this_00 = &this->ConverterNodeClassRegistry;
  uVar8 = Frontend::GetTypeHash(param_1);
  if (*(int *)&(this->ConverterNodeClassRegistry).field_0x8 !=
      *(int *)&(this->ConverterNodeClassRegistry).field_0x34) {
    puVar14 = *(undefined1 **)&(this->ConverterNodeClassRegistry).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->ConverterNodeClassRegistry).field_0x38;
    }
    iVar9 = *(int *)(puVar14 +
                    (ulonglong)(*(int *)&(this->ConverterNodeClassRegistry).field_0x48 - 1U & uVar8)
                    * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this_00->field_0x0;
      do {
        lVar10 = (longlong)iVar9;
        if ((*(FName *)(lVar2 + lVar10 * 0x28) == param_1->FromDataType) &&
           (*(FName *)(lVar2 + 8 + lVar10 * 0x28) == param_1->ToDataType)) {
          if (iVar9 != -1) goto LAB_14ae7ff65;
          break;
        }
        iVar9 = *(int *)(lVar2 + 0x20 + lVar10 * 0x28);
      } while (iVar9 != -1);
    }
  }
  local_res20 = param_1;
  TSet<TTuple<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<Metasound::Frontend::FConverterNodeClassRegistryKey_const_&>_>
            ((TSet<TTuple<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_res20);
LAB_14ae7ff65:
  pFVar11 = TMapBase<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,0>_>
            ::FindChecked((TMapBase<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,0>_>
                           *)this_00,param_1);
  pFVar3 = (FConverterNodeClassInfo *)(pFVar11->PotentialConverterNodes).AllocatorInstance.Data;
  if (pFVar3 != pFVar3 + (pFVar11->PotentialConverterNodes).ArrayNum) {
    pFVar13 = &(pFVar3->NodeKey).ClassName.Variant;
    pFVar12 = pFVar3;
    do {
      if ((((((EMetasoundFrontendClassType)pFVar13[-3].Number == (param_2->NodeKey).Type) &&
            (pFVar13[-2] == (param_2->NodeKey).ClassName.Namespace)) &&
           (pFVar13[-1] == (param_2->NodeKey).ClassName.Name)) &&
          ((*pFVar13 == (param_2->NodeKey).ClassName.Variant &&
           (pFVar13[1].ComparisonIndex.Value == (param_2->NodeKey).Version.Major)))) &&
         (pFVar13[1].Number == (param_2->NodeKey).Version.Minor)) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<773741605369676969>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
                           ,0x4a9,"!ConverterNodeList.PotentialConverterNodes.Contains(InNodeInfo)")
        ;
        if (!bVar6) {
          return false;
        }
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar12 = pFVar12 + 1;
      pFVar13 = (FName *)&pFVar13[6].Number;
    } while (pFVar12 != pFVar3 + (pFVar11->PotentialConverterNodes).ArrayNum);
  }
  if (((pFVar3 <= param_2) && (param_2 < pFVar3 + (pFVar11->PotentialConverterNodes).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  iVar9 = (pFVar11->PotentialConverterNodes).ArrayNum;
  piVar1 = &(pFVar11->PotentialConverterNodes).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x434,(ForAnyElementType *)pFVar11,piVar1);
  }
  (pFVar11->PotentialConverterNodes).ArrayNum = iVar9 + 1;
  FVar5 = param_2->PreferredConverterOutputPin;
  pFVar13 = (FName *)((pFVar11->PotentialConverterNodes).AllocatorInstance.Data +
                     (longlong)iVar9 * 0x34);
  *pFVar13 = param_2->PreferredConverterInputPin;
  pFVar13[1] = FVar5;
  FVar5 = *(FName *)&(param_2->NodeKey).ClassName.Namespace.Number;
  pFVar13[2] = *(FName *)&param_2->NodeKey;
  pFVar13[3] = FVar5;
  FVar5 = *(FName *)&(param_2->NodeKey).ClassName.Variant.Number;
  pFVar13[4] = *(FName *)&(param_2->NodeKey).ClassName.Name.Number;
  pFVar13[5] = FVar5;
  pFVar13[6].ComparisonIndex.Value = (param_2->NodeKey).Version.Minor;
  return true;
}

// RegisterGraph @ 14ae800d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FGraphClassRegistryKey * __thiscall
Metasound::Frontend::FNodeClassRegistry::RegisterGraph
          (FNodeClassRegistry *this,FGraphClassRegistryKey *__return_storage_ptr__,
          TScriptInterface<IMetaSoundDocumentInterface> *param_1,
          TArrayView<FGuid_const_,int> *param_2)

{
  undefined1 *puVar1;
  atomic<unsigned___int64> *paVar2;
  atomic<unsigned_int> *paVar3;
  atomic<unsigned_int> aVar4;
  IObjectReferencer *pIVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  FNodeClassRegistry *this_00;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  FGraphClassRegistryKey *pFVar15;
  FMetasoundFrontendDocument *pFVar16;
  FMetasoundFrontendVersionNumber *pFVar17;
  FGuid *pFVar18;
  FString *pFVar19;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this_01;
  longlong *plVar20;
  int iVar21;
  ForAnyElementType FVar22;
  FScriptContainerElement *pFVar23;
  FWindowsRecursiveMutex *lpCriticalSection;
  FGuid *pFVar24;
  uint uVar25;
  int iVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  undefined1 auStackY_4a8 [32];
  undefined1 local_466 [6];
  FGraphClassRegistryKey *local_460;
  undefined1 local_458 [4];
  uint local_454;
  FScriptContainerElement *local_450;
  ForAnyElementType local_448;
  undefined8 local_440;
  int local_438;
  int local_430;
  undefined4 uStack_42c;
  FNodeClassRegistry *local_428;
  TArrayView<FGuid_const_,int> *local_420;
  FMetasoundFrontendDocument *local_418;
  FTopLevelAssetPath local_410;
  FString local_400;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  int iStack_3e0;
  undefined4 uStack_3dc;
  FNodeClassInfo local_3d8;
  FGuid local_388;
  UObject *local_378;
  longlong *local_370;
  void *local_368;
  undefined8 local_360;
  FName local_358;
  FMetasoundFrontendGraphClass *local_350;
  FString local_348;
  FString local_338;
  LARGE_INTEGER local_328;
  UObject *local_320 [2];
  code *local_310;
  undefined8 **local_308;
  code *local_300;
  undefined1 *local_2f8;
  undefined8 *local_2f0;
  IDataTypeRegistry *local_2e8;
  void **local_2e0;
  FActiveRegistrationTaskInfo local_2d8;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  TArrayView<FGuid_const_,int> local_268;
  FString local_258;
  TArrayView<FGuid_const_,int> local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FNodeClassRegistryTransaction local_208;
  undefined1 local_1b8 [32];
  void *local_198;
  undefined4 local_190;
  uint local_18c;
  undefined4 local_188;
  undefined4 local_184;
  ForElementType<FSetElementId> local_178;
  int local_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  longlong lStack_140;
  undefined8 local_138;
  FName local_130;
  FName FStack_128;
  FName local_120;
  EMetasoundFrontendClassType local_118;
  FGuid local_114;
  FName local_104;
  FName FStack_fc;
  FMetasoundFrontendVersionNumber local_f4;
  UObject *local_e8;
  longlong *local_e0;
  TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
  local_d8;
  FScriptContainerElement *local_88;
  undefined8 local_80;
  int local_78;
  ulonglong local_68;
  
  iVar11 = GCycleStatsShouldEmitNamedEvents;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_460 = __return_storage_ptr__;
  local_428 = this;
  local_420 = param_2;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FNodeClassRegistry::RegisterGraph");
  }
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId552,"Metasound::FNodeClassRegistry::RegisterGraph",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
               ,0x228);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId552);
  }
  puVar1 = &param_1->field_0x8;
  if (((*(longlong *)param_1 == 0) || (*(longlong *)puVar1 == 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InDocumentInterface",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
                          ,0x22a,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    pFVar15 = (FGraphClassRegistryKey *)(*pcVar6)();
    return pFVar15;
  }
  bVar12 = IsInGameThread();
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
                          ,0x22b,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    pFVar15 = (FGraphClassRegistryKey *)(*pcVar6)();
    return pFVar15;
  }
  uVar25 = 0xffffffff;
  if (*(longlong *)param_1 == 0) {
    plVar20 = (longlong *)0x0;
  }
  else {
    uVar25 = *(uint *)(*(longlong *)param_1 + 0xc);
    plVar20 = *(longlong **)puVar1;
  }
  pFVar16 = (FMetasoundFrontendDocument *)(**(code **)(*plVar20 + 0x18))();
  if (*(longlong *)param_1 == 0) {
    plVar20 = (longlong *)0x0;
  }
  else {
    plVar20 = *(longlong **)puVar1;
  }
  local_418 = pFVar16;
  (**(code **)(*plVar20 + 0x10))(plVar20,&local_410);
  local_350 = &pFVar16->RootGraph;
  (__return_storage_ptr__->NodeKey).Type = External;
  uVar8 = *(undefined4 *)((longlong)&(pFVar16->RootGraph)._padding_ + 4);
  uVar9 = *(undefined4 *)&(pFVar16->RootGraph)._padding_;
  uVar10 = *(undefined4 *)((longlong)&(pFVar16->RootGraph)._padding_ + 4);
  (__return_storage_ptr__->NodeKey).ClassName.Namespace.ComparisonIndex =
       (FNameEntryId)*(undefined4 *)&(pFVar16->RootGraph)._padding_;
  (__return_storage_ptr__->NodeKey).ClassName.Namespace.Number = uVar8;
  (__return_storage_ptr__->NodeKey).ClassName.Name.ComparisonIndex = (FNameEntryId)uVar9;
  (__return_storage_ptr__->NodeKey).ClassName.Name.Number = uVar10;
  uVar8 = *(undefined4 *)((longlong)&(pFVar16->RootGraph)._padding_ + 4);
  (__return_storage_ptr__->NodeKey).ClassName.Variant.ComparisonIndex =
       (FNameEntryId)*(undefined4 *)&(pFVar16->RootGraph)._padding_;
  (__return_storage_ptr__->NodeKey).ClassName.Variant.Number = uVar8;
  pFVar17 = FMetasoundFrontendClassMetadata::GetVersion
                      ((FMetasoundFrontendClassMetadata *)&(pFVar16->RootGraph)._padding_);
  (__return_storage_ptr__->NodeKey).Version = *pFVar17;
  (__return_storage_ptr__->AssetPath).PackageName = local_410.PackageName;
  (__return_storage_ptr__->AssetPath).AssetName = local_410.AssetName;
  __return_storage_ptr__->ObjectID = uVar25;
  if ((((__return_storage_ptr__->NodeKey).Type == Invalid) ||
      (bVar12 = FMetasoundFrontendClassName::IsValid(&(__return_storage_ptr__->NodeKey).ClassName),
      !bVar12)) ||
     ((bVar12 = FMetasoundFrontendVersionNumber::IsValid(&(__return_storage_ptr__->NodeKey).Version)
      , !bVar12 ||
      (((__return_storage_ptr__->AssetPath).PackageName == (FName)0x0 ||
       (__return_storage_ptr__->ObjectID == 0xffffffff)))))) {
    if (2 < (byte)LogMetaSound._0_1_) {
      FGraphClassRegistryKey::ToString(__return_storage_ptr__,&local_228);
      FTopLevelAssetPath::ToString(&local_410,&local_238);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
    }
    if (bVar29) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (iVar11 < 1) {
      return __return_storage_ptr__;
    }
    FGenericPlatformMisc::EndNamedEvent();
    return __return_storage_ptr__;
  }
  bVar12 = 0 < GCycleStatsShouldEmitNamedEvents;
  FTopLevelAssetPath::ToString(&local_410,&local_2a0);
  FGraphClassRegistryKey::ToString(__return_storage_ptr__,&local_2b0);
  ::FString::PrintfImpl(&local_348,L"FNodeClassRegistry::RegisterGraph key:%s, asset %s");
  FVar22.Data = (FScriptContainerElement *)L"";
  if (local_348.Data.ArrayNum != 0) {
    FVar22.Data = local_348.Data.AllocatorInstance.Data;
  }
  if (bVar12) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,(wchar_t *)FVar22.Data);
  }
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  FTopLevelAssetPath::ToString(&local_410,&local_280);
  FGraphClassRegistryKey::ToString(__return_storage_ptr__,&local_290);
  ::FString::PrintfImpl(&local_338,L"FNodeClassRegistry::RegisterGraph key:%s, asset %s");
  FVar22.Data = (FScriptContainerElement *)L"";
  if (local_338.Data.ArrayNum != 0) {
    FVar22.Data = local_338.Data.AllocatorInstance.Data;
  }
  bVar30 = -1 < CpuChannel->Enabled;
  if (bVar30) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar22.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
               ,0x23d);
  }
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  (**(code **)(*(longlong *)local_428 + 0x20))(local_428,__return_storage_ptr__);
  uVar25 = (uint)ConsoleVariables::bDisableAsyncGraphRegistration;
  local_320[0] = *(UObject **)param_1;
  local_454 = uVar25;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_320[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_320[0]);
  }
  local_320[1] = *(UObject **)puVar1;
  RegistryPrivate::BuildRegistryDocument
            ((TScriptInterface<IMetaSoundDocumentInterface> *)&local_378,
             (TScriptInterface<IMetaSoundDocumentInterface> *)local_320,uVar25 == 0);
  local_18c = 0x80;
  local_1b8._0_8_ = (FScriptContainerElement *)0x0;
  local_1b8._8_8_ = 0;
  local_198 = (void *)0x0;
  local_190 = 0;
  local_188 = 0xffffffff;
  local_184 = 0;
  local_178 = (ForElementType<FSetElementId>)0x0;
  local_170 = 0;
  bVar14 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar14) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FProxyDataCache::CreateAndCacheProxies_Document");
  }
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId70,
               "Metasound::FProxyDataCache::CreateAndCacheProxies_Document",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendProxyDataCache.cpp"
               ,0x46);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId70);
  }
  pFVar18 = local_420->DataPtr;
  uVar7._0_4_ = local_420->ArrayNum;
  uVar7._4_4_ = *(undefined4 *)&local_420->field_0xc;
  bVar13 = IsInGameThread();
  if (((!bVar13) && (bVar13 = IsInAudioThread(), !bVar13)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread() || IsInAudioThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendProxyDataCache.cpp"
                          ,0x1c,L"Proxies should only be created in the game thread or audio thread"
                         ), bVar13)) {
    pcVar6 = (code *)swi(3);
    pFVar15 = (FGraphClassRegistryKey *)(*pcVar6)();
    return pFVar15;
  }
  local_2e8 = IDataTypeRegistry::Get();
  pFVar16 = local_418;
  local_2f0 = (undefined8 *)local_1b8;
  local_2e0 = &local_368;
  local_368 = (void *)0x0;
  local_308 = &local_2f0;
  local_360 = 0;
  local_310 = UE::Core::Private::Function::
              TFunctionRefCaller<`Metasound::Frontend::MetasoundFrontendProxyDataCachePrivate::CreateAndCacheProxies<FMetasoundFrontendDocument>'::__l2::<lambda_1>,void,FName_const_&,FMetasoundFrontendLiteral_const_&>
              ::Call;
  local_268.DataPtr = pFVar18;
  local_268._8_8_ = uVar7;
  ForEachLiteral(local_418,
                 (TFunctionRef<void___cdecl(FName_const_&,FMetasoundFrontendLiteral_const_&)> *)
                 &local_310,&local_268);
  if (local_368 != (void *)0x0) {
    FMemory::Free(local_368);
  }
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((byte)LogMetaSound._0_1_ < 6) goto LAB_14ae80899;
  pFVar27 = (FScriptContainerElement *)0x0;
  local_388 = DefaultPageID;
  local_3e8 = *(undefined4 *)&local_420->DataPtr;
  uStack_3e4 = *(undefined4 *)((longlong)&local_420->DataPtr + 4);
  pFVar18 = local_420->DataPtr;
  iVar21 = local_420->ArrayNum;
  uStack_3dc = *(undefined4 *)&local_420->field_0xc;
  iVar26 = (pFVar16->RootGraph).PagedGraphs.ArrayNum;
  iStack_3e0 = iVar21;
  if (iVar26 == 1) {
LAB_14ae8076c:
    pFVar27 = (pFVar16->RootGraph).PagedGraphs.AllocatorInstance.Data;
    if (pFVar27 != (FScriptContainerElement *)0x0) {
LAB_14ae80779:
      local_388 = *(FGuid *)(pFVar27 + 0x30);
    }
  }
  else if (0 < iVar26) {
    pFVar23 = (pFVar16->RootGraph).PagedGraphs.AllocatorInstance.Data;
    pFVar28 = pFVar23 + (longlong)iVar26 * 0x40;
    local_450 = pFVar28;
    local_438 = iVar21;
    local_430 = iVar21;
    uStack_42c = uStack_3dc;
    while( true ) {
      if ((pFVar16->RootGraph).PagedGraphs.ArrayNum != iVar26) {
        local_466[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendGraph_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_466);
        pFVar18 = (FGuid *)CONCAT44(uStack_3e4,local_3e8);
        iVar21 = local_430;
      }
      if (pFVar23 == pFVar28) break;
      pFVar24 = pFVar18 + iVar21;
      if (pFVar18 != pFVar24) {
        do {
          if (((*(uint *)(pFVar23 + 0x3c) == pFVar18->D && *(uint *)(pFVar23 + 0x38) == pFVar18->C)
              && *(uint *)(pFVar23 + 0x34) == pFVar18->B) && *(uint *)(pFVar23 + 0x30) == pFVar18->A
             ) {
            iVar21 = (int)((longlong)pFVar18 - CONCAT44(uStack_3e4,local_3e8) >> 4);
            if (((iVar21 != -1) && (iVar21 < local_438)) &&
               (pFVar27 = pFVar23, local_438 = iVar21, iVar21 == 0)) goto LAB_14ae80722;
            break;
          }
          pFVar18 = pFVar18 + 1;
        } while (pFVar18 != pFVar24);
        pFVar18 = (FGuid *)CONCAT44(uStack_3e4,local_3e8);
        pFVar28 = local_450;
        iVar21 = local_430;
      }
      pFVar23 = pFVar23 + 0x40;
    }
LAB_14ae80722:
    if (pFVar27 == (FScriptContainerElement *)0x0) {
      if (((pFVar16->RootGraph).PagedGraphs.ArrayNum < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        pFVar15 = (FGraphClassRegistryKey *)(*pcVar6)();
        return pFVar15;
      }
      goto LAB_14ae8076c;
    }
    goto LAB_14ae80779;
  }
  iVar26 = (pFVar16->RootGraph).PagedGraphs.ArrayNum;
  if ((1 < iVar26) ||
     (uVar25 = local_454,
     ((local_388.B != 0 || local_388.D != 0) || local_388.C != 0) || local_388.A != 0)) {
    if (5 < (byte)LogMetaSound._0_1_) {
      local_400.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_400.Data.ArrayNum = 0;
      local_400.Data.ArrayMax = 0;
      FGuid::AppendString(&local_388,&local_400,Digits);
      local_358 = local_410.AssetName;
      ::FName::ToString(&local_358,&local_218);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.Data.AllocatorInstance.Data);
      }
    }
    uVar25 = local_454;
    if (1 < iVar26) {
      if (5 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      local_2f8 = local_458;
      local_300 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Metasound::Frontend::FNodeClassRegistry::RegisterGraph'::__l70::<lambda_1>,void,FMetasoundFrontendGraph_const_&>
                  ::Call;
      FMetasoundFrontendGraphClass::IterateGraphPages
                (local_350,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_const_&)> *)&local_300
                );
      uVar25 = local_454;
    }
  }
LAB_14ae80899:
  local_3d8.ClassName.Namespace = (FName)(pFVar16->RootGraph)._padding_;
  local_3d8.ClassName.Name = (FName)(pFVar16->RootGraph)._padding_;
  local_3d8.ClassName.Variant = (FName)(pFVar16->RootGraph)._padding_;
  local_3d8.Type = External;
  pFVar19 = ::FName::ToString(&local_3d8.ClassName.Name,&local_258);
  bVar14 = FGuid::Parse(pFVar19,&local_3d8.AssetClassID);
  if (!bVar14) {
    local_3d8.AssetClassID.C = 0;
    local_3d8.AssetClassID.D = 0;
    local_3d8.AssetClassID.A = 0;
    local_3d8.AssetClassID.B = 0;
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  local_3d8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_3d8.AssetPath.PackageName.Number = 0;
  local_3d8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_3d8.AssetPath.AssetName.Number = 0;
  pFVar17 = FMetasoundFrontendClassMetadata::GetVersion
                      ((FMetasoundFrontendClassMetadata *)&(pFVar16->RootGraph)._padding_);
  local_3d8.Version = *pFVar17;
  QueryPerformanceCounter(&local_328);
  this_00 = local_428;
  local_208.NodeClassInfo.Type = local_3d8.Type;
  local_208.NodeClassInfo.ClassName.Namespace = local_3d8.ClassName.Namespace;
  local_208.NodeClassInfo.ClassName.Name = local_3d8.ClassName.Name;
  local_208.NodeClassInfo.Version = local_3d8.Version;
  local_208.NodeClassInfo.ClassName.Variant = local_3d8.ClassName.Variant;
  local_208.Timestamp = (ulong64)local_328;
  local_208.Type = NodeRegistration;
  local_208.NodeClassInfo.AssetClassID.A = local_3d8.AssetClassID.A;
  local_208.NodeClassInfo.AssetClassID.B = local_3d8.AssetClassID.B;
  local_208.NodeClassInfo.AssetClassID.C = local_3d8.AssetClassID.C;
  local_208.NodeClassInfo.AssetClassID.D = local_3d8.AssetClassID.D;
  local_208.NodeClassInfo.AssetPath.PackageName = local_3d8.AssetPath.PackageName;
  local_208.NodeClassInfo.AssetPath.AssetName = local_3d8.AssetPath.AssetName;
  TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>::AddTransaction
            ((local_428->TransactionBuffer).Object,&local_208);
  pFVar15 = local_460;
  if (uVar25 == 0) {
    iVar26 = this_00->RegistrationTaskCntr + 1;
    local_448.Data = (FScriptContainerElement *)0x0;
    this_00->RegistrationTaskCntr = iVar26;
    uVar25 = local_420->ArrayNum;
    pFVar18 = local_420->DataPtr;
    if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
    }
    if (((pFVar18 == (FGuid *)0x0) && (uVar25 != 0)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ptr != nullptr || Count == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x2d3,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FGraphClassRegistryKey *)(*pcVar6)();
      return pFVar15;
    }
    local_440 = CONCAT44(local_440._4_4_,uVar25);
    if (uVar25 == 0) {
      local_440 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar25,0,&local_448,uVar25,(int *)((longlong)&local_440 + 4));
      memcpy(local_448.Data,pFVar18,(longlong)(int)uVar25 << 4);
    }
    local_e8 = local_378;
    local_168._0_1_ = (local_460->NodeKey).Type;
    local_168._1_3_ = *(undefined3 *)&(local_460->NodeKey).field_0x1;
    local_168._4_4_ = (local_460->NodeKey).ClassName.Namespace.ComparisonIndex;
    lStack_160 = *(longlong *)&(local_460->NodeKey).ClassName.Namespace.Number;
    local_158 = *(longlong *)&(local_460->NodeKey).ClassName.Name.Number;
    lStack_150 = *(longlong *)&(local_460->NodeKey).ClassName.Variant.Number;
    local_148 = *(longlong *)&(local_460->NodeKey).Version.Minor;
    lStack_140 = *(longlong *)&(local_460->AssetPath).PackageName.Number;
    local_138 = *(undefined8 *)&(local_460->AssetPath).AssetName.Number;
    local_130 = local_3d8.ClassName.Namespace;
    FStack_128 = local_3d8.ClassName.Name;
    local_118 = local_3d8.Type;
    local_120 = local_3d8.ClassName.Variant;
    local_f4 = local_3d8.Version;
    local_114.A = local_3d8.AssetClassID.A;
    local_114.B = local_3d8.AssetClassID.B;
    local_114.C = local_3d8.AssetClassID.C;
    local_114.D = local_3d8.AssetClassID.D;
    local_104 = local_3d8.AssetPath.PackageName;
    FStack_fc = local_3d8.AssetPath.AssetName;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_378 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_378);
    }
    local_e0 = local_370;
    TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
              (&local_d8,
               (TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
                *)local_1b8);
    local_88 = local_448.Data;
    local_80 = local_440;
    local_440 = 0;
    local_448.Data = (FScriptContainerElement *)0x0;
    local_78 = iVar26;
    this_01.Reference = FMemory::Malloc(0x200,0x40);
    if (this_01.Reference == (FTaskBase *)0x0) {
      this_01.Reference = (FTaskBase *)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_01.Reference,2,true);
      (this_01.Reference)->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`Metasound::Frontend::FNodeClassRegistry::RegisterGraph'::`92'::<lambda_2>,void,void>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::Init
                (this_01.Reference,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp(632)"
                 ,Default,None,None);
      this_01.Reference[1]._padding_ = local_168;
      this_01.Reference[1]._padding_ = lStack_160;
      this_01.Reference[1]._padding_ = local_158;
      this_01.Reference[1]._padding_ = lStack_150;
      this_01.Reference[1]._padding_ = local_148;
      this_01.Reference[1]._padding_ = lStack_140;
      this_01.Reference[1].RefCount = (atomic<unsigned_int>)(undefined4)local_138;
      this_01.Reference[1].NumLocks = (atomic<unsigned_int>)local_138._4_4_;
      this_01.Reference[1].Pipe = (FPipe *)local_130;
      *(FName *)&this_01.Reference[1].StateChangeEvent = FStack_128;
      this_01.Reference[1].ExecutingThreadId = (atomic<unsigned_int>)local_120.ComparisonIndex.Value
      ;
      this_01.Reference[1]._padding_ = local_120.Number;
      *(EMetasoundFrontendClassType *)&this_01.Reference[1].TraceId = local_118;
      *(undefined8 *)&this_01.Reference[1].TraceId.field_0x4 = local_114._0_8_;
      *(undefined8 *)
       (this_01.Reference[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData + 4) =
           local_114._8_8_;
      *(FName *)&this_01.Reference[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData.
                 field_0x4 = local_104;
      *(FName *)&this_01.Reference[1].Prerequisites.Prerequisites.ArrayMax = FStack_fc;
      *(FMetasoundFrontendVersionNumber *)&this_01.Reference[1].Prerequisites.field_0x1c = local_f4;
      *(UObject **)&this_01.Reference[1].LowLevelTask.field_0x8 = local_e8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_e8);
      }
      *(longlong **)&this_01.Reference[1].LowLevelTask.field_0x10 = local_e0;
      TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
                ((TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
                  *)&this_01.Reference[1].LowLevelTask.field_0x18,&local_d8);
      this_01.Reference[2]._padding_ = 0;
      this_01.Reference[2]._padding_ = (longlong)local_88;
      local_88 = (FScriptContainerElement *)0x0;
      *(undefined4 *)&this_01.Reference[2]._padding_ = (undefined4)local_80;
      *(undefined4 *)((longlong)&this_01.Reference[2]._padding_ + 4) = local_80._4_4_;
      local_80 = 0;
      *(int *)&this_01.Reference[2]._padding_ = local_78;
      (this_01.Reference)->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<`Metasound::Frontend::FNodeClassRegistry::RegisterGraph'::`92'::<lambda_2>_>
            ::_vftable_;
    }
    LOCK();
    paVar2 = &(this_00->AsyncRegistrationPipe).TaskCount;
    *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + 1);
    UNLOCK();
    LOCK();
    (this_01.Reference)->NumLocks = (atomic<unsigned_int>)((int)(this_01.Reference)->NumLocks + 1);
    UNLOCK();
    (this_01.Reference)->Pipe = &this_00->AsyncRegistrationPipe;
    UE::Tasks::Private::FTaskBase::TryLaunch(this_01.Reference,0x200);
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
    local_d8.HashSize = 0;
    if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_d8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_d8.Elements);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_378 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_378);
    }
    lpCriticalSection = &local_428->ObjectReferencerCriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FGraphClassRegistryKey *)(*pcVar6)();
      return pFVar15;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((local_378 != (UObject *)0x0) &&
       (pIVar5 = (local_428->ObjectReferencer).Ptr, pIVar5 != (IObjectReferencer *)0x0)) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_378);
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    pFVar15 = local_460;
    local_2d8.TransactionType = NodeRegistration;
    LOCK();
    (this_01.Reference)->RefCount = (atomic<unsigned_int>)((int)(this_01.Reference)->RefCount + 1);
    UNLOCK();
    local_2d8.AssetPath.PackageName = local_410.PackageName;
    local_2d8.AssetPath.AssetName = local_410.AssetName;
    local_2d8.Task.Pimpl.Reference =
         (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
         (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this_01.Reference;
    local_2d8.RegistrationTaskID = iVar26;
    AddRegistrationTask(local_428,local_460,&local_2d8);
    if (local_2d8.Task.Pimpl.Reference != (FTaskBase *)0x0) {
      LOCK();
      paVar3 = (atomic<unsigned_int> *)((longlong)local_2d8.Task.Pimpl.Reference + 0x30);
      aVar4 = *paVar3;
      *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (*(code *)**(undefined8 **)local_2d8.Task.Pimpl.Reference)();
      }
    }
    LOCK();
    paVar3 = &(this_01.Reference)->RefCount;
    aVar4 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)(this_01.Reference)->_padding_)(this_01.Reference);
    }
    if (local_448.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_448.Data);
    }
  }
  else {
    UnregisterGraphInternal(this_00,local_460);
    plVar20 = (longlong *)0x0;
    if (local_378 != (UObject *)0x0) {
      plVar20 = local_370;
    }
    pFVar16 = (FMetasoundFrontendDocument *)(**(code **)(*plVar20 + 0x18))();
    local_248.DataPtr = local_420->DataPtr;
    local_248.ArrayNum = local_420->ArrayNum;
    local_248._12_4_ = *(undefined4 *)&local_420->field_0xc;
    BuildAndRegisterGraphFromDocument
              (this_00,pFVar16,(FProxyDataCache *)local_1b8,&local_3d8,pFVar15,&local_248);
  }
  local_170 = 0;
  if (local_178 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_178);
  }
  TSparseArray<TSparseSetElement<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_1b8,0,local_1b8._8_4_);
  bVar14 = local_1b8._12_4_ != 0;
  local_1b8._8_8_ = (ulonglong)(uint)local_1b8._12_4_ << 0x20;
  if (bVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_1b8,0,(int *)(local_1b8 + 0xc));
  }
  local_188 = 0xffffffff;
  local_184 = 0;
  local_190 = 0;
  if (0x80 < local_18c) {
    local_18c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10),0);
  }
  if (local_198 != (void *)0x0) {
    FMemory::Free(local_198);
  }
  if ((FScriptContainerElement *)local_1b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._0_8_);
  }
  if (bVar30) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return pFVar15;
}

// RegisterGraphInternal @ 14ae81080

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Frontend::FNodeClassRegistry::RegisterGraphInternal
          (FNodeClassRegistry *this,FGraphClassRegistryKey *param_1,
          TSharedPtr<Metasound::FGraph_const_,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FGraphClassRegistryKey *local_38;
  TSharedPtr<Metasound::FGraph_const_,1> *local_30;
  FString local_28;
  
  lpCriticalSection = &this->RegistryMapsCriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar3 = Frontend::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<Metasound::Frontend::FGraphClassRegistryKey>
                    ((TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
                      *)&this->RegisteredGraphs,uVar3,param_1);
  if ((iVar4 != -1) && (2 < (byte)LogMetaSound._0_1_)) {
    FGraphClassRegistryKey::ToString(param_1,&local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  local_38 = param_1;
  local_30 = param_2;
  TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<Metasound::Frontend::FGraphClassRegistryKey_const_&,TSharedPtr<Metasound::FGraph_const_,1>_const_&>_>
            ((TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
              *)&this->RegisteredGraphs,
             (TPairInitializer<Metasound::Frontend::FGraphClassRegistryKey_const_&,TSharedPtr<Metasound::FGraph_const_,1>_const_&>
              *)&stack0x00000008,(bool *)&local_38);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// RegisterNode @ 14ae81190

FNodeClassRegistryKey * __thiscall
Metasound::Frontend::FNodeClassRegistry::RegisterNode
          (FNodeClassRegistry *this,FNodeClassRegistryKey *__return_storage_ptr__,
          TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
          *param_1)

{
  FName FVar1;
  FMetasoundFrontendVersionNumber FVar2;
  FName FVar3;
  FName FVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FName FVar7;
  FName FVar8;
  uint uVar9;
  bool bVar10;
  FName *pFVar11;
  LARGE_INTEGER local_res18;
  FNodeClassRegistryTransaction local_68;
  
  pFVar11 = (FName *)(**(code **)((longlong)*param_1->Ptr + 8))();
  FVar3 = *pFVar11;
  FVar4 = pFVar11[1];
  uVar9 = pFVar11[3].ComparisonIndex.Value;
  FVar2 = *(FMetasoundFrontendVersionNumber *)&pFVar11[7].Number;
  FVar1 = pFVar11[2];
  uVar5 = *(undefined8 *)&pFVar11[3].Number;
  uVar6 = *(undefined8 *)&pFVar11[4].Number;
  FVar7 = *(FName *)&pFVar11[5].Number;
  FVar8 = *(FName *)&pFVar11[6].Number;
  RegisterNodeInternal(this,__return_storage_ptr__,param_1);
  if (__return_storage_ptr__->Type != Invalid) {
    bVar10 = FMetasoundFrontendClassName::IsValid(&__return_storage_ptr__->ClassName);
    if (bVar10) {
      bVar10 = FMetasoundFrontendVersionNumber::IsValid(&__return_storage_ptr__->Version);
      if (bVar10) {
        QueryPerformanceCounter(&local_res18);
        local_68.Type = NodeRegistration;
        local_68.Timestamp = (ulong64)local_res18;
        local_68.NodeClassInfo.ClassName.Namespace = FVar3;
        local_68.NodeClassInfo.ClassName.Name = FVar4;
        local_68.NodeClassInfo.ClassName.Variant = FVar1;
        local_68.NodeClassInfo.Type = (EMetasoundFrontendClassType)uVar9;
        local_68.NodeClassInfo.AssetClassID._0_8_ = uVar5;
        local_68.NodeClassInfo.AssetClassID._8_8_ = uVar6;
        local_68.NodeClassInfo.AssetPath.PackageName = FVar7;
        local_68.NodeClassInfo.AssetPath.AssetName = FVar8;
        local_68.NodeClassInfo.Version = FVar2;
        TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>::AddTransaction
                  ((this->TransactionBuffer).Object,&local_68);
      }
    }
  }
  return __return_storage_ptr__;
}

// RegisterNodeInternal @ 14ae812b0

/* WARNING: Removing unreachable block (ram,0x00014ae8170f) */
/* WARNING: Enum "Type": Some values do not have unique names */

FNodeClassRegistryKey * __thiscall
Metasound::Frontend::FNodeClassRegistry::RegisterNodeInternal
          (FNodeClassRegistry *this,FNodeClassRegistryKey *__return_storage_ptr__,
          TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  INodeClassRegistryEntry *pIVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  FNodeClassRegistryKey *pFVar9;
  FString *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  IMetaSoundAssetManager *pIVar13;
  longlong lVar14;
  FMetaSoundAssetKey *pFVar15;
  wchar_t *pwVar16;
  FScriptContainerElement *pFVar17;
  FTopLevelAssetPath *this_00;
  ForAnyElementType FVar18;
  FTopLevelAssetPath *pFVar19;
  undefined1 local_res18 [8];
  char local_res20;
  ForAnyElementType local_178;
  undefined8 local_170;
  undefined1 local_168 [4];
  FLLMScope local_164;
  FString local_160;
  FString local_150;
  TArray<TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,TSizedDefaultAllocator<32>_>
  local_140;
  FNodeClassRegistryKey local_130;
  FMemScope local_108;
  FTopLevelAssetPath *local_100 [2];
  INodeClassRegistryEntry *local_f0;
  TReferenceControllerBase<1> *local_e8;
  TPairInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_const_&>
  local_e0;
  FString local_d0;
  FString local_c0;
  FNodeClassRegistryKey *local_b0;
  INodeClassRegistryEntry **local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FMetaSoundAssetKey local_60;
  
  FLLMScope::FLLMScope
            (&local_164,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_e0._4_8_ = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_108,(FName *)((longlong)&local_e0.Key + 4),true);
  if (param_1->Ptr == (INodeClassRegistryEntry *)0x0) {
    *(undefined2 *)&__return_storage_ptr__->field_0x1 = 0;
    __return_storage_ptr__->field_0x3 = 0;
    __return_storage_ptr__->Type = Invalid;
    (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex = 0;
    (__return_storage_ptr__->ClassName).Namespace.Number = 0;
    (__return_storage_ptr__->ClassName).Name.ComparisonIndex = 0;
    (__return_storage_ptr__->ClassName).Name.Number = 0;
    (__return_storage_ptr__->ClassName).Variant.ComparisonIndex = 0;
    (__return_storage_ptr__->ClassName).Variant.Number = 0;
    (__return_storage_ptr__->Version).Major = 1;
    (__return_storage_ptr__->Version).Minor = 0;
    goto LAB_14ae818d5;
  }
  puVar8 = (undefined8 *)(**(code **)((longlong)*param_1->Ptr + 8))();
  local_130.Type = *(EMetasoundFrontendClassType *)(puVar8 + 3);
  local_130.ClassName.Namespace.ComparisonIndex.Value = (uint)*puVar8;
  local_130.ClassName.Namespace.Number = (uint)((ulonglong)*puVar8 >> 0x20);
  local_130.ClassName.Name.ComparisonIndex.Value = (uint)puVar8[1];
  local_130.ClassName.Name.Number = (uint)((ulonglong)puVar8[1] >> 0x20);
  local_130.ClassName.Variant.ComparisonIndex.Value = (uint)puVar8[2];
  local_130.ClassName.Variant.Number = (uint)((ulonglong)puVar8[2] >> 0x20);
  local_130.Version.Major = (int)*(undefined8 *)((longlong)puVar8 + 0x3c);
  local_130.Version.Minor = (int)((ulonglong)*(undefined8 *)((longlong)puVar8 + 0x3c) >> 0x20);
  if ((*(char *)(puVar8 + 3) == '\x01') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InClassInfo.Type != EMetasoundFrontendClassType::Graph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                         ,0xb8,
                         L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FNodeClassRegistryKey *)(*pcVar2)();
    return pFVar9;
  }
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  local_res20 = bVar3;
  ::FString::FString(&local_d0,L"FNodeClassRegistry::RegisterNodeInternal");
  pFVar10 = FNodeClassRegistryKey::ToString(&local_130,&local_a0,&local_d0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,pwVar16);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_c0,L"FNodeClassRegistry::RegisterNodeInternal");
  pFVar10 = FNodeClassRegistryKey::ToString(&local_130,&local_90,&local_c0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (pwVar16,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
               ,0x379);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  pIVar1 = param_1->Ptr;
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  param_1->Ptr = (INodeClassRegistryEntry *)0x0;
  local_f0 = pIVar1;
  pTVar11 = ::operator_new(0x18);
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VINodeClassRegistryEntry_Frontend_Metasound__U__DefaultDeleter_VINodeClassRegistryEntry_Frontend_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11[1]._padding_ = (longlong)pIVar1;
    pTVar12 = pTVar11;
  }
  local_e8 = pTVar12;
  if ((pIVar1 == (INodeClassRegistryEntry *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FNodeClassRegistryKey *)(*pcVar2)();
    return pFVar9;
  }
  lpCriticalSection = &this->RegistryMapsCriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FNodeClassRegistryKey *)(*pcVar2)();
    return pFVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_b0 = &local_130;
  local_a8 = &local_f0;
  TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_const_&>_>
            ((TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
              *)&this->RegisteredNodes,&local_e0,(bool *)&local_b0);
  TMultiMap<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>(&this->RegisteredNodes,&local_130,&local_140,false);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if ((1 < local_140.ArrayNum) &&
     (pIVar13 = IMetaSoundAssetManager::Get(), pIVar13 != (IMetaSoundAssetManager *)0x0)) {
    pcVar2 = *(code **)((longlong)*pIVar13 + 0x78);
    lVar14 = (**(code **)((longlong)*local_f0 + 0x38))();
    cVar5 = (*pcVar2)(pIVar13,lVar14 + 0x18);
    if (cVar5 == '\0') {
      if ((byte)LogMetaSound._0_1_ < 2) goto LAB_14ae81867;
      FNodeClassRegistryKey::ToString(&local_130,&local_70);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    else {
      pcVar2 = *(code **)((longlong)*pIVar13 + 0x60);
      pFVar15 = FMetaSoundAssetKey::FMetaSoundAssetKey(&local_60,&local_130);
      (*pcVar2)(pIVar13,local_100,pFVar15);
      iVar6 = (int)local_100[1];
      local_178.Data = (FScriptContainerElement *)0x0;
      pFVar19 = local_100[0] + iVar6;
      local_170 = 0;
      this_00 = local_100[0];
      while( true ) {
        if ((int)local_100[1] != iVar6) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FTopLevelAssetPath_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (this_00 == pFVar19) break;
        FTopLevelAssetPath::ToString(this_00,&local_160);
        if (((local_178.Data <= (FScriptContainerElement *)&local_160) &&
            ((FScriptContainerElement *)&local_160 <
             local_178.Data + (longlong)local_170._4_4_ * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FNodeClassRegistryKey *)(*pcVar2)();
          return pFVar9;
        }
        iVar7 = (int)local_170;
        if ((int)local_170 == local_170._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_178,(int *)((longlong)&local_170 + 4));
        }
        local_170 = CONCAT44(local_170._4_4_,iVar7 + 1);
        pFVar17 = local_178.Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar17 = 0;
        *(FScriptContainerElement **)pFVar17 = local_160.Data.AllocatorInstance.Data;
        local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar17 + 8) = local_160.Data.ArrayNum;
        *(int *)(pFVar17 + 0xc) = local_160.Data.ArrayMax;
        local_160.Data.ArrayNum = 0;
        local_160.Data.ArrayMax = 0;
        this_00 = this_00 + 1;
      }
      iVar6 = (int)local_170;
      bVar4 = true;
      pFVar17 = local_178.Data + (longlong)(int)local_170 * 0x10;
      local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.Data.ArrayNum = 0;
      local_150.Data.ArrayMax = 0;
      FVar18.Data = local_178.Data;
      while( true ) {
        if ((int)local_170 != iVar6) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_168);
        }
        if (FVar18.Data == pFVar17) break;
        if (bVar4) {
          bVar4 = false;
        }
        else {
          ::FString::AppendChars(&local_150,L"\n",1);
        }
        iVar7 = *(int *)(FVar18.Data + 8) + -1;
        if (*(int *)(FVar18.Data + 8) == 0) {
          iVar7 = 0;
        }
        ::FString::AppendChars(&local_150,*(wchar_t **)FVar18.Data,iVar7);
        FVar18.Data = FVar18.Data + 0x10;
      }
      if (1 < (byte)LogMetaSound._0_1_) {
        FNodeClassRegistryKey::ToString(&local_130,&local_80);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_178.Data,(int)local_170);
      local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_100[0];
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data);
        local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_100[0];
      }
    }
    if ((FTopLevelAssetPath *)local_70.Data.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
LAB_14ae81867:
  __return_storage_ptr__->Type = local_130.Type;
  *(int3 *)&__return_storage_ptr__->field_0x1 = local_130._1_3_;
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex =
       (FNameEntryId)local_130.ClassName.Namespace.ComparisonIndex.Value;
  *(ulonglong *)&(__return_storage_ptr__->ClassName).Namespace.Number =
       CONCAT44(local_130.ClassName.Name.ComparisonIndex.Value,local_130.ClassName.Namespace.Number)
  ;
  *(ulonglong *)&(__return_storage_ptr__->ClassName).Name.Number =
       CONCAT44(local_130.ClassName.Variant.ComparisonIndex.Value,local_130.ClassName.Name.Number);
  *(ulonglong *)&(__return_storage_ptr__->ClassName).Variant.Number =
       CONCAT44(local_130.Version.Major,local_130.ClassName.Variant.Number);
  (__return_storage_ptr__->Version).Minor = local_130.Version.Minor;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
  DestructItems<TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,int>
            ((TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1> *)
             local_140.AllocatorInstance.Data,local_140.ArrayNum);
  if ((TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1> *)local_140.AllocatorInstance.Data
      != (TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1> *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_res20 != '\0') {
    FGenericPlatformMisc::EndNamedEvent();
  }
LAB_14ae818d5:
  FMemScope::~FMemScope(&local_108);
  FLLMScope::~FLLMScope(&local_164);
  return __return_storage_ptr__;
}

// RegisterNodeTemplate @ 14ae81910

FNodeClassRegistryKey * __thiscall
Metasound::Frontend::FNodeClassRegistry::RegisterNodeTemplate
          (FNodeClassRegistry *this,FNodeClassRegistryKey *__return_storage_ptr__,
          TUniquePtr<Metasound::Frontend::INodeTemplateRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeTemplateRegistryEntry>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  INodeTemplateRegistryEntry *pIVar1;
  TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined8 *puVar8;
  FNodeClassRegistryKey *pFVar9;
  FName *pFVar10;
  FLLMScope local_res10 [2];
  TPairInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_const_&>
  local_res18;
  INodeTemplateRegistryEntry *local_d8;
  TReferenceControllerBase<1> *local_d0;
  LARGE_INTEGER local_c8;
  FNodeClassRegistryKey *local_c0;
  FMemScope local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  FNodeClassRegistryKey *local_88;
  INodeTemplateRegistryEntry **local_80;
  FNodeClassRegistryTransaction local_78;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res18.Value =
       (TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1> *)
       LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_b8,(FName *)&local_res18.Value,true);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->Type = Invalid;
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex = 0;
  (__return_storage_ptr__->ClassName).Namespace.Number = 0;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex = 0;
  (__return_storage_ptr__->ClassName).Name.Number = 0;
  (__return_storage_ptr__->ClassName).Variant.ComparisonIndex = 0;
  (__return_storage_ptr__->ClassName).Variant.Number = 0;
  (__return_storage_ptr__->Version).Major = 1;
  (__return_storage_ptr__->Version).Minor = 0;
  pIVar1 = param_1->Ptr;
  if (pIVar1 != (INodeTemplateRegistryEntry *)0x0) {
    param_1->Ptr = (INodeTemplateRegistryEntry *)0x0;
    local_d8 = pIVar1;
    pTVar6 = ::operator_new(0x18);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VINodeTemplateRegistryEntry_Frontend_Metasound__U__DefaultDeleter_VINodeTemplateRegistryEntry_Frontend_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6[1]._padding_ = (longlong)pIVar1;
      pTVar7 = pTVar6;
    }
    local_d0 = pTVar7;
    QueryPerformanceCounter(&local_c8);
    puVar8 = (undefined8 *)(**(code **)((longlong)*local_d8 + 8))();
    local_b0 = CONCAT31(local_b0._1_3_,*(char *)(puVar8 + 3));
    uStack_9c = (undefined4)puVar8[2];
    uStack_98 = (undefined4)((ulonglong)puVar8[2] >> 0x20);
    uStack_94 = (undefined4)*(undefined8 *)((longlong)puVar8 + 0x3c);
    iStack_90 = (int)((ulonglong)*(undefined8 *)((longlong)puVar8 + 0x3c) >> 0x20);
    uStack_ac = (undefined4)*puVar8;
    uStack_a8 = (undefined4)((ulonglong)*puVar8 >> 0x20);
    uStack_a4 = (undefined4)puVar8[1];
    uStack_a0 = (undefined4)((ulonglong)puVar8[1] >> 0x20);
    if ((*(char *)(puVar8 + 3) == '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InClassInfo.Type != EMetasoundFrontendClassType::Graph",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                           ,0xb8,
                           L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FNodeClassRegistryKey *)(*pcVar2)();
      return pFVar9;
    }
    lpCriticalSection = &this->RegistryMapsCriticalSection;
    __return_storage_ptr__->Type = (char)local_b0;
    *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)((uint)local_b0 >> 8);
    (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex = (FNameEntryId)uStack_ac;
    *(ulonglong *)&(__return_storage_ptr__->ClassName).Namespace.Number =
         CONCAT44(uStack_a4,uStack_a8);
    *(ulonglong *)&(__return_storage_ptr__->ClassName).Name.Number = CONCAT44(uStack_9c,uStack_a0);
    *(ulonglong *)&(__return_storage_ptr__->ClassName).Variant.Number =
         CONCAT44(uStack_94,uStack_98);
    (__return_storage_ptr__->Version).Minor = iStack_90;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FNodeClassRegistryKey *)(*pcVar2)();
      return pFVar9;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar4 = Frontend::GetTypeHash(__return_storage_ptr__);
    iVar5 = TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey>
                      ((TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
                        *)&this->RegisteredNodeTemplates,uVar4,__return_storage_ptr__);
    if (iVar5 != -1) {
      local_c0 = __return_storage_ptr__;
      `Metasound::Frontend::FNodeClassRegistry::RegisterNodeTemplate'::__l6::<lambda_1>::operator()
                (&local_c0);
    }
    local_80 = &local_d8;
    local_88 = __return_storage_ptr__;
    TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_const_&>_>
              ((TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
                *)&this->RegisteredNodeTemplates,&local_res18,(bool *)&local_88);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    this_00 = (this->TransactionBuffer).Object;
    pFVar10 = (FName *)(**(code **)((longlong)*local_d8 + 8))();
    local_78.Type = NodeRegistration;
    local_78.NodeClassInfo.ClassName.Namespace = *pFVar10;
    local_78.NodeClassInfo.ClassName.Name = pFVar10[1];
    local_78.NodeClassInfo.ClassName.Variant = pFVar10[2];
    local_78.NodeClassInfo.Type = (EMetasoundFrontendClassType)pFVar10[3].ComparisonIndex.Value;
    local_78.NodeClassInfo.AssetClassID._0_8_ = *(undefined8 *)&pFVar10[3].Number;
    local_78.NodeClassInfo.AssetClassID._8_8_ = *(undefined8 *)&pFVar10[4].Number;
    local_78.NodeClassInfo.AssetPath.PackageName = *(FName *)&pFVar10[5].Number;
    local_78.NodeClassInfo.AssetPath.AssetName = *(FName *)&pFVar10[6].Number;
    local_78.NodeClassInfo.Version = *(FMetasoundFrontendVersionNumber *)&pFVar10[7].Number;
    local_78.Timestamp = (ulong64)local_c8;
    TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>::AddTransaction
              (this_00,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
  }
  FMemScope::~FMemScope(&local_b8);
  FLLMScope::~FLLMScope(local_res10);
  return __return_storage_ptr__;
}

// RegisterPendingNodes @ 14ae81e20

void __thiscall
Metasound::Frontend::FNodeClassRegistry::RegisterPendingNodes(FNodeClassRegistry *this)

{
  TArray<TUniqueFunction<void___cdecl(void)>,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar2;
  int iVar3;
  FRegistrationAction *pFVar4;
  bool bVar5;
  code *pcVar6;
  FRegistrationAction *pFVar7;
  FRegistrationAction *pFVar8;
  bool bVar9;
  undefined8 uVar10;
  ISearchEngine *pIVar11;
  uchar *puVar12;
  ForElementType<TUniqueFunction<void___cdecl(void)>_> FVar13;
  ForElementType<TUniqueFunction<void___cdecl(void)>_> FVar14;
  bool bVar15;
  FModuleInfo local_res8 [8];
  undefined1 local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  FName local_68;
  FName local_60;
  FMemScope local_58;
  FMemScope local_50 [2];
  
  FLLMScope::FLLMScope
            (local_res20,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_68 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(local_50,&local_68,true);
  bVar5 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar5) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"metasound::FNodeClassRegistry::RegisterPendingNodes");
  }
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId439,"metasound::FNodeClassRegistry::RegisterPendingNodes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
               ,0x1b7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId439);
  }
  lpCriticalSection = &this->LazyInitCommandCritSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->LazyInitCommands;
  FVar14 = (this->LazyInitCommands).AllocatorInstance.SecondaryData;
  iVar3 = (this->LazyInitCommands).ArrayNum;
  if (FVar14 == (ForElementType<TUniqueFunction<void___cdecl(void)>_>)0x0) {
    FVar14 = (ForElementType<TUniqueFunction<void___cdecl(void)>_>)pTVar1;
  }
  FVar13 = (ForElementType<TUniqueFunction<void___cdecl(void)>_>)
           ((longlong)iVar3 * 0x30 + (longlong)FVar14);
  while( true ) {
    if ((this->LazyInitCommands).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TUniqueFunction<void___cdecl(void)>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar14 == FVar13) break;
    UE::Core::Private::Function::CheckCallable(*(void **)FVar14);
    pcVar6 = *(code **)FVar14;
    puVar12 = (uchar *)((longlong)FVar14 + 0x10);
    if (*(uchar **)((longlong)FVar14 + 0x28) != (uchar *)0x0) {
      puVar12 = *(uchar **)((longlong)FVar14 + 0x28);
    }
    uVar10 = (**(code **)(*(longlong *)puVar12 + 8))();
    (*pcVar6)(uVar10);
    FVar14 = (ForElementType<TUniqueFunction<void___cdecl(void)>_>)((longlong)FVar14 + 0x30);
  }
  FVar14 = (this->LazyInitCommands).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<TUniqueFunction<void___cdecl(void)>_>)0x0) {
    FVar14 = (ForElementType<TUniqueFunction<void___cdecl(void)>_>)pTVar1;
  }
  DestructItems<TUniqueFunction<void___cdecl(void)>,int>
            ((TUniqueFunction<void___cdecl(void)> *)FVar14,(this->LazyInitCommands).ArrayNum);
  piVar2 = &(this->LazyInitCommands).ArrayMax;
  (this->LazyInitCommands).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniqueFunction<void___cdecl(void)>_>_>
              (0x30,0x10,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  pFVar7 = Head;
  local_res8[0] = (FModuleInfo)0x0;
  FLLMScope::FLLMScope
            (local_res18,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_60 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_58,&local_60,true);
  pFVar8 = Tail;
  for (pFVar4 = pFVar7; (pFVar4 != pFVar8 && (pFVar4 != (FRegistrationAction *)0x0));
      pFVar4 = pFVar4->Next) {
    if (pFVar4->Register != (_func___cdecl_bool_FModuleInfo_ptr *)0x0) {
      (*pFVar4->Register)(local_res8);
    }
  }
  Tail = pFVar7;
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(local_res18);
  if (PRIVATE_GIsRunningCommandlet == false) {
    pIVar11 = ISearchEngine::Get();
    (**(code **)((longlong)*pIVar11 + 8))(pIVar11);
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(local_50);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// RemoveDocumentReference @ 14ae87400

void __thiscall
Metasound::Frontend::FNodeClassRegistry::RemoveDocumentReference
          (FNodeClassRegistry *this,TScriptInterface<IMetaSoundDocumentInterface> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IObjectReferencer *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  lpCriticalSection = &this->ObjectReferencerCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
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
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((*(longlong *)param_1 != 0) &&
     (pIVar1 = (this->ObjectReferencer).Ptr, pIVar1 != (IObjectReferencer *)0x0)) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RemoveRegistrationTask @ 14ae87510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Frontend::FNodeClassRegistry::RemoveRegistrationTask
          (FNodeClassRegistry *this,FGraphClassRegistryKey *param_1,int param_2,
          ETransactionType param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>
  *this_01;
  uint uVar8;
  TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>
  *pTVar9;
  FString local_68;
  FString local_58;
  
  lpCriticalSection = &this->ActiveRegistrationTasksCriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->ActiveRegistrationTasks;
  uVar4 = Frontend::GetTypeHash(&param_1->NodeKey);
  iVar5 = TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey>
                    ((TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this_00,uVar4,&param_1->NodeKey);
  if (iVar5 != -1) {
    pTVar9 = (TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>
              *)0x0;
    lVar7 = (longlong)iVar5 * 0x40 + *(longlong *)&this_00->field_0x0;
    this_01 = (TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>
               *)(lVar7 + 0x28);
    if (lVar7 == 0) {
      this_01 = pTVar9;
    }
    if (this_01 !=
        (TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>
         *)0x0) {
      iVar5 = this_01->ArrayNum;
      iVar6 = iVar5;
      if (0 < iVar5) {
        lVar7 = 0;
        do {
          uVar8 = (uint)pTVar9;
          uVar4 = 0;
          if ((int)uVar8 < iVar6) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this_01->AllocatorInstance).Data;
          if ((pFVar1[lVar7] == (FScriptContainerElement)param_3) &&
             (*(int *)(pFVar1 + lVar7 + 0x20) == param_2)) {
            uVar4 = 0;
            if ((int)uVar8 < this_01->ArrayNum) {
              uVar4 = ~uVar8 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>
            ::RemoveAtSwapImpl(this_01,uVar8);
          }
          else {
            pTVar9 = (TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>
                      *)(ulonglong)(uVar8 + 1);
            lVar7 = lVar7 + 0x28;
          }
          iVar6 = this_01->ArrayNum;
        } while ((int)pTVar9 < iVar6);
      }
      if ((iVar6 == 0) &&
         (*(int *)&(this->ActiveRegistrationTasks).field_0x8 !=
          *(int *)&(this->ActiveRegistrationTasks).field_0x34)) {
        uVar4 = Frontend::GetTypeHash(&param_1->NodeKey);
        TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<Metasound::Frontend::FNodeClassRegistryKey>
                  ((TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)this_00,uVar4,&param_1->NodeKey);
      }
      if (iVar5 != iVar6) goto LAB_14ae87798;
    }
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    FGraphClassRegistryKey::ToString(param_1,&local_58);
    FNodeClassRegistryTransaction::LexToString(&local_68,param_3);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
LAB_14ae87798:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SetObjectReferencer @ 14ae899a0

void __thiscall
Metasound::Frontend::FNodeClassRegistry::SetObjectReferencer
          (FNodeClassRegistry *this,
          TUniquePtr<Metasound::Frontend::INodeClassRegistry::IObjectReferencer,TDefaultDelete<Metasound::Frontend::INodeClassRegistry::IObjectReferencer>_>
          param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IObjectReferencer *pIVar1;
  IObjectReferencer IVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::Frontend::INodeClassRegistry::IObjectReferencer,TDefaultDelete<Metasound::Frontend::INodeClassRegistry::IObjectReferencer>_>
  *pTVar5;
  
  lpCriticalSection = &this->ActiveRegistrationTasksCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->ActiveRegistrationTasks).field_0x8 !=
      *(int *)&(this->ActiveRegistrationTasks).field_0x34) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveRegistrationTasks.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
                       ,0x1e1,
                       L"Object Referencer cannot be set while registry is actively being manipulated"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar5 = &this->ObjectReferencer;
  if ((IObjectReferencer *)pTVar5 != param_1.Ptr) {
    pIVar1 = pTVar5->Ptr;
    pTVar5->Ptr = (IObjectReferencer *)*param_1.Ptr;
    *param_1.Ptr = (IObjectReferencer)0x0;
    if (pIVar1 != (IObjectReferencer *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  IVar2 = *param_1.Ptr;
  if (IVar2 != (IObjectReferencer)0x0) {
    (*(code *)**(undefined8 **)IVar2)(IVar2,1);
  }
  return;
}

// Shutdown @ 14ae8a920

void __cdecl Metasound::Frontend::FNodeClassRegistry::Shutdown(void)

{
  if (LazySingleton != (FNodeClassRegistry *)0x0) {
    (*(code *)**(undefined8 **)LazySingleton)(LazySingleton,1);
    LazySingleton = (FNodeClassRegistry *)0x0;
  }
  return;
}

// UnregisterGraph @ 14ae8dd40

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::Frontend::FNodeClassRegistry::UnregisterGraph
          (FNodeClassRegistry *this,FGraphClassRegistryKey *param_1,
          TScriptInterface<IMetaSoundDocumentInterface> *param_2)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned_int> *paVar2;
  FMetasoundFrontendClassMetadata *this_00;
  atomic<unsigned_int> aVar3;
  FName FVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  FName FVar8;
  FName FVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  FString *pFVar13;
  longlong lVar14;
  FMetasoundFrontendVersionNumber *pFVar15;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this_01;
  wchar_t *pwVar16;
  longlong *plVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  LARGE_INTEGER local_res20;
  FGuid local_14c;
  FName local_13c;
  FName FStack_134;
  FMetasoundFrontendVersionNumber local_12c;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FActiveRegistrationTaskInfo local_c8;
  FString local_a0;
  FNodeClassRegistryTransaction local_90;
  
  bVar5 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar5) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FNodeClassRegistry::UnregisterGraph");
  }
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId791,"Metasound::FNodeClassRegistry::UnregisterGraph",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
               ,0x317);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId791);
  }
  bVar6 = 0 < GCycleStatsShouldEmitNamedEvents;
  ::FString::FString(&local_e8,L"FNodeClassRegistry::UnregisterGraph");
  pFVar13 = FGraphClassRegistryKey::ToString(param_1,&local_118,&local_e8);
  if ((pFVar13->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  if (bVar6) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,pwVar16);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_d8,L"FNodeClassRegistry::UnregisterGraph");
  pFVar13 = FGraphClassRegistryKey::ToString(param_1,&local_108,&local_d8);
  if ((pFVar13->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (pwVar16,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
               ,0x318);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
                          ,0x31a,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  if (((*(longlong *)param_2 == 0) || (*(longlong *)&param_2->field_0x8 == 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InDocumentInterface",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
                          ,0x31b,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  if ((((param_1->NodeKey).Type == Invalid) ||
      (bVar10 = FMetasoundFrontendClassName::IsValid(&(param_1->NodeKey).ClassName), !bVar10)) ||
     ((bVar10 = FMetasoundFrontendVersionNumber::IsValid(&(param_1->NodeKey).Version), !bVar10 ||
      (((param_1->AssetPath).PackageName == (FName)0x0 || (param_1->ObjectID == 0xffffffff)))))) {
    if (2 < (byte)LogMetaSound._0_1_) {
      FGraphClassRegistryKey::ToString(param_1,&local_a0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    bVar10 = false;
  }
  else {
    if (*(longlong *)param_2 == 0) {
      plVar17 = (longlong *)0x0;
    }
    else {
      plVar17 = *(longlong **)&param_2->field_0x8;
    }
    lVar14 = (**(code **)(*plVar17 + 0x18))();
    this_00 = (FMetasoundFrontendClassMetadata *)(lVar14 + 0x88);
    FVar8 = (this_00->ClassName).Namespace;
    FVar9 = *(FName *)(lVar14 + 0x90);
    FVar4 = *(FName *)(lVar14 + 0x98);
    FMetasoundFrontendClassMetadata::GetType(this_00);
    pFVar13 = ::FName::ToString((FName *)(lVar14 + 0x90),&local_f8);
    bVar10 = FGuid::Parse(pFVar13,&local_14c);
    if (!bVar10) {
      local_14c.C = 0;
      local_14c.D = 0;
      local_14c.A = 0;
      local_14c.B = 0;
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    local_13c.ComparisonIndex.Value = 0;
    local_13c.Number = 0;
    FStack_134.ComparisonIndex.Value = 0;
    FStack_134.Number = 0;
    pFVar15 = FMetasoundFrontendClassMetadata::GetVersion(this_00);
    local_12c = *pFVar15;
    QueryPerformanceCounter(&local_res20);
    local_90.NodeClassInfo.Type = External;
    local_90.NodeClassInfo.Version = local_12c;
    local_90.Timestamp = (ulong64)local_res20;
    local_90.Type = NodeUnregistration;
    local_90.NodeClassInfo.AssetClassID.A = local_14c.A;
    local_90.NodeClassInfo.AssetClassID.B = local_14c.B;
    local_90.NodeClassInfo.AssetClassID.C = local_14c.C;
    local_90.NodeClassInfo.AssetClassID.D = local_14c.D;
    local_90.NodeClassInfo.AssetPath.PackageName = local_13c;
    local_90.NodeClassInfo.AssetPath.AssetName = FStack_134;
    local_90.NodeClassInfo.ClassName.Namespace = FVar8;
    local_90.NodeClassInfo.ClassName.Name = FVar9;
    local_90.NodeClassInfo.ClassName.Variant = FVar4;
    TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>::AddTransaction
              ((this->TransactionBuffer).Object,&local_90);
    if (*(longlong *)param_2 == 0) {
      plVar17 = (longlong *)0x0;
    }
    else {
      plVar17 = *(longlong **)&param_2->field_0x8;
    }
    cVar12 = (**(code **)(*plVar17 + 0x40))();
    if ((cVar12 == '\0') && (ConsoleVariables::bDisableAsyncGraphRegistration == false)) {
      iVar18 = this->RegistrationTaskCntr + 1;
      this->RegistrationTaskCntr = iVar18;
      (**(code **)(*(longlong *)this + 0x20))(this,param_1);
      local_f8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)&param_1->NodeKey;
      local_f8.Data._8_8_ = *(undefined8 *)&(param_1->NodeKey).ClassName.Namespace.Number;
      local_108.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)&(param_1->NodeKey).ClassName.Name.Number;
      local_108.Data._8_8_ = *(undefined8 *)&(param_1->NodeKey).ClassName.Variant.Number;
      local_118.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)&(param_1->NodeKey).Version.Minor;
      local_118.Data._8_8_ = *(undefined8 *)&(param_1->AssetPath).PackageName.Number;
      local_res20 = *(LARGE_INTEGER *)&(param_1->AssetPath).AssetName.Number;
      this_01.Reference = FMemory::Malloc(0x140,0x40);
      if (this_01.Reference == (FTaskBase *)0x0) {
        this_01.Reference = (FTaskBase *)0x0;
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase(this_01.Reference,2,true);
        (this_01.Reference)->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`Metasound::Frontend::FNodeClassRegistry::UnregisterGraph'::`41'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init
                  (this_01.Reference,
                   L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp(833)"
                   ,Default,None,None);
        this_01.Reference[1]._padding_ = (longlong)local_f8.Data.AllocatorInstance.Data;
        this_01.Reference[1]._padding_ = local_f8.Data._8_8_;
        this_01.Reference[1]._padding_ = (longlong)local_108.Data.AllocatorInstance.Data;
        this_01.Reference[1]._padding_ = local_108.Data._8_8_;
        this_01.Reference[1]._padding_ = (longlong)local_118.Data.AllocatorInstance.Data;
        this_01.Reference[1]._padding_ = local_118.Data._8_8_;
        *(LARGE_INTEGER *)&this_01.Reference[1].RefCount = local_res20;
        *(int *)&this_01.Reference[1].Pipe = iVar18;
        (this_01.Reference)->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`Metasound::Frontend::FNodeClassRegistry::UnregisterGraph'::`41'::<lambda_1>_>
              ::_vftable_;
      }
      LOCK();
      paVar1 = &(this->AsyncRegistrationPipe).TaskCount;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      LOCK();
      (this_01.Reference)->NumLocks = (atomic<unsigned_int>)((int)(this_01.Reference)->NumLocks + 1)
      ;
      UNLOCK();
      (this_01.Reference)->Pipe = &this->AsyncRegistrationPipe;
      UE::Tasks::Private::FTaskBase::TryLaunch(this_01.Reference,0x140);
      local_c8.TransactionType = NodeUnregistration;
      LOCK();
      (this_01.Reference)->RefCount = (atomic<unsigned_int>)((int)(this_01.Reference)->RefCount + 1)
      ;
      UNLOCK();
      local_c8.AssetPath.PackageName = (param_1->AssetPath).PackageName;
      local_c8.AssetPath.AssetName = (param_1->AssetPath).AssetName;
      local_c8.Task.Pimpl.Reference =
           (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
           (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this_01.Reference;
      local_c8.RegistrationTaskID = iVar18;
      AddRegistrationTask(this,param_1,&local_c8);
      if (local_c8.Task.Pimpl.Reference != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = (atomic<unsigned_int> *)((longlong)local_c8.Task.Pimpl.Reference + 0x30);
        aVar3 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (*(code *)**(undefined8 **)local_c8.Task.Pimpl.Reference)(local_c8.Task.Pimpl.Reference,1)
          ;
        }
      }
      LOCK();
      paVar2 = &(this_01.Reference)->RefCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)(this_01.Reference)->_padding_)(this_01.Reference,1);
      }
      bVar10 = true;
    }
    else {
      UnregisterGraphInternal(this,param_1);
      bVar10 = true;
    }
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return bVar10;
}

// UnregisterGraphInternal @ 14ae8e290

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::Frontend::FNodeClassRegistry::UnregisterGraphInternal
          (FNodeClassRegistry *this,FGraphClassRegistryKey *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  bool bVar9;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  ::FString::FString(&local_78,L"FNodeClassRegistry::UnregisterGraphInternal");
  pFVar7 = FGraphClassRegistryKey::ToString(param_1,&local_58,&local_78);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,pwVar8);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_68,L"FNodeClassRegistry::UnregisterGraphInternal");
  pFVar7 = FGraphClassRegistryKey::ToString(param_1,&local_48,&local_68);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (pwVar8,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
               ,0x2f0);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  lpCriticalSection = &this->RegistryMapsCriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar5 = Frontend::GetTypeHash(param_1);
  iVar6 = TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<Metasound::Frontend::FGraphClassRegistryKey>
                    ((TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
                      *)&this->RegisteredGraphs,uVar5,param_1);
  if (iVar6 == -1) {
    bVar3 = false;
    goto LAB_14ae8e4d8;
  }
  if (*(int *)&(this->RegisteredGraphs).field_0x8 == *(int *)&(this->RegisteredGraphs).field_0x34) {
    bVar3 = UnregisterNodeInternal(this,&param_1->NodeKey,(FNodeClassInfo *)0x0);
LAB_14ae8e48f:
    if ((bVar3 == false) || ((byte)LogMetaSound._0_1_ < 3)) goto LAB_14ae8e4d8;
    FGraphClassRegistryKey::ToString(param_1,&local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    uVar5 = Frontend::GetTypeHash(param_1);
    iVar6 = TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<Metasound::Frontend::FGraphClassRegistryKey>
                      ((TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
                        *)&this->RegisteredGraphs,uVar5,param_1);
    bVar3 = UnregisterNodeInternal(this,&param_1->NodeKey,(FNodeClassInfo *)0x0);
    if (iVar6 < 1) goto LAB_14ae8e48f;
    if ((byte)LogMetaSound._0_1_ < 7) goto LAB_14ae8e4d8;
    FGraphClassRegistryKey::ToString(param_1,&local_38);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14ae8e4d8:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return bVar3;
}

// UnregisterNode @ 14ae8e530

bool __thiscall
Metasound::Frontend::FNodeClassRegistry::UnregisterNode
          (FNodeClassRegistry *this,FNodeClassRegistryKey *param_1)

{
  bool bVar1;
  LARGE_INTEGER local_res18 [2];
  FNodeClassInfo local_a8;
  FNodeClassRegistryTransaction local_58;
  
  local_a8.Type = Invalid;
  local_a8.ClassName.Namespace.ComparisonIndex.Value = 0;
  local_a8.ClassName.Namespace.Number = 0;
  local_a8.ClassName.Name.ComparisonIndex.Value = 0;
  local_a8.ClassName.Name.Number = 0;
  local_a8.ClassName.Variant.ComparisonIndex.Value = 0;
  local_a8.ClassName.Variant.Number = 0;
  local_a8.AssetClassID.A = 0;
  local_a8.AssetClassID.B = 0;
  local_a8.AssetClassID.C = 0;
  local_a8.AssetClassID.D = 0;
  local_a8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_a8.AssetPath.PackageName.Number = 0;
  local_a8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_a8.AssetPath.AssetName.Number = 0;
  local_a8.Version.Major = 1;
  local_a8.Version.Minor = 0;
  bVar1 = UnregisterNodeInternal(this,param_1,&local_a8);
  if (bVar1) {
    QueryPerformanceCounter(local_res18);
    local_58.NodeClassInfo.Type = local_a8.Type;
    local_58.NodeClassInfo.ClassName.Namespace = local_a8.ClassName.Namespace;
    local_58.NodeClassInfo.ClassName.Name = local_a8.ClassName.Name;
    local_58.NodeClassInfo.Version = local_a8.Version;
    local_58.NodeClassInfo.ClassName.Variant = local_a8.ClassName.Variant;
    local_58.Timestamp = (ulong64)local_res18[0];
    local_58.Type = NodeUnregistration;
    local_58.NodeClassInfo.AssetClassID.A = local_a8.AssetClassID.A;
    local_58.NodeClassInfo.AssetClassID.B = local_a8.AssetClassID.B;
    local_58.NodeClassInfo.AssetClassID.C = local_a8.AssetClassID.C;
    local_58.NodeClassInfo.AssetClassID.D = local_a8.AssetClassID.D;
    local_58.NodeClassInfo.AssetPath.PackageName = local_a8.AssetPath.PackageName;
    local_58.NodeClassInfo.AssetPath.AssetName = local_a8.AssetPath.AssetName;
    TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>::AddTransaction
              ((this->TransactionBuffer).Object,&local_58);
    return true;
  }
  return false;
}

// UnregisterNodeInternal @ 14ae8e600

bool __thiscall
Metasound::Frontend::FNodeClassRegistry::UnregisterNodeInternal
          (FNodeClassRegistry *this,FNodeClassRegistryKey *param_1,FNodeClassInfo *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  FName FVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  FName *pFVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1> *pTVar13;
  bool bVar14;
  FLLMScope local_res10 [5];
  FName local_res20;
  FMemScope local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_80,&local_res20,true);
  if (((param_1->Type != Invalid) &&
      (bVar5 = FMetasoundFrontendClassName::IsValid(&param_1->ClassName), bVar5)) &&
     (bVar5 = FMetasoundFrontendVersionNumber::IsValid(&param_1->Version), bVar5)) {
    bVar5 = 0 < GCycleStatsShouldEmitNamedEvents;
    FNodeClassRegistryKey::ToString(param_1,&local_58);
    ::FString::PrintfImpl(&local_78,L"FNodeClassRegistry::UnregisterNodeInternal key %s");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar11.Data = local_78.Data.AllocatorInstance.Data;
    }
    if (bVar5) {
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,(wchar_t *)FVar11.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FNodeClassRegistryKey::ToString(param_1,&local_48);
    ::FString::PrintfImpl(&local_68,L"FNodeClassRegistry::UnregisterNodeInternal key %s");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar11.Data = local_68.Data.AllocatorInstance.Data;
    }
    bVar14 = -1 < CpuChannel->Enabled;
    if (bVar14) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                ((wchar_t *)FVar11.Data,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
                 ,0x462);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    lpCriticalSection = &this->RegistryMapsCriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar8 = Frontend::GetTypeHash(param_1);
    iVar9 = TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
            ::FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey>
                      ((TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
                        *)&this->RegisteredNodes,uVar8,param_1);
    if (iVar9 != -1) {
      lVar12 = (longlong)iVar9 * 0x40 + *(longlong *)&this->RegisteredNodes;
      pTVar13 = (TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1> *)(lVar12 + 0x28);
      if (lVar12 == 0) {
        pTVar13 = (TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1> *)0x0;
      }
      if (pTVar13 != (TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1> *)0x0) {
        if (param_2 != (FNodeClassInfo *)0x0) {
          pFVar10 = (FName *)(**(code **)((longlong)*pTVar13->Object + 8))();
          FVar2 = pFVar10[1];
          (param_2->ClassName).Namespace = *pFVar10;
          (param_2->ClassName).Name = FVar2;
          (param_2->ClassName).Variant = pFVar10[2];
          param_2->Type = (EMetasoundFrontendClassType)pFVar10[3].ComparisonIndex.Value;
          uVar3 = *(undefined8 *)&pFVar10[3].Number;
          uVar4 = *(undefined8 *)&pFVar10[4].Number;
          (param_2->AssetClassID).A = (int)uVar3;
          (param_2->AssetClassID).B = (int)((ulonglong)uVar3 >> 0x20);
          (param_2->AssetClassID).C = (int)uVar4;
          (param_2->AssetClassID).D = (int)((ulonglong)uVar4 >> 0x20);
          FVar2 = *(FName *)&pFVar10[6].Number;
          (param_2->AssetPath).PackageName = *(FName *)&pFVar10[5].Number;
          (param_2->AssetPath).AssetName = FVar2;
          param_2->Version = *(FMetasoundFrontendVersionNumber *)&pFVar10[7].Number;
        }
        iVar9 = TMultiMap<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>_>
                ::RemoveSingle(&this->RegisteredNodes,param_1,pTVar13);
        if (iVar9 == 1) {
          if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          }
          if (bVar14) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (bVar5) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          bVar5 = true;
          goto LAB_14ae8e926;
        }
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<773741605369676909>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
                           ,0x46d,"NumRemoved == 1");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          uVar7 = (*pcVar1)();
          return (bool)uVar7;
        }
      }
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  if (param_2 != (FNodeClassInfo *)0x0) {
    (param_2->ClassName).Namespace.ComparisonIndex = 0;
    (param_2->ClassName).Namespace.Number = 0;
    (param_2->ClassName).Name.ComparisonIndex = 0;
    (param_2->ClassName).Name.Number = 0;
    (param_2->ClassName).Variant.ComparisonIndex = 0;
    (param_2->ClassName).Variant.Number = 0;
    (param_2->AssetPath).PackageName.ComparisonIndex = 0;
    (param_2->AssetPath).PackageName.Number = 0;
    (param_2->AssetPath).AssetName.ComparisonIndex = 0;
    (param_2->AssetPath).AssetName.Number = 0;
    param_2->Type = Invalid;
    (param_2->AssetClassID).A = 0;
    (param_2->AssetClassID).B = 0;
    (param_2->AssetClassID).C = 0;
    (param_2->AssetClassID).D = 0;
    (param_2->Version).Major = 1;
    (param_2->Version).Minor = 0;
  }
  bVar5 = false;
LAB_14ae8e926:
  FMemScope::~FMemScope(&local_80);
  FLLMScope::~FLLMScope(local_res10);
  return bVar5;
}

// UnregisterNodeTemplate @ 14ae8e990

bool __thiscall
Metasound::Frontend::FNodeClassRegistry::UnregisterNodeTemplate
          (FNodeClassRegistry *this,FNodeClassRegistryKey *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  INodeTemplateRegistryEntry *pIVar5;
  FName *pFVar6;
  FLLMScope local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FMemScope local_78;
  FNodeClassRegistryTransaction local_70;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_78,&local_res18,true);
  if (param_1->Type != Invalid) {
    bVar2 = FMetasoundFrontendClassName::IsValid(&param_1->ClassName);
    if (bVar2) {
      bVar2 = FMetasoundFrontendVersionNumber::IsValid(&param_1->Version);
      if (bVar2) {
        pIVar5 = FindNodeTemplateEntry(this,param_1);
        if (pIVar5 != (INodeTemplateRegistryEntry *)0x0) {
          QueryPerformanceCounter(&local_res20);
          this_00 = (this->TransactionBuffer).Object;
          pFVar6 = (FName *)(**(code **)((longlong)*pIVar5 + 8))(pIVar5);
          local_70.Type = NodeUnregistration;
          local_70.NodeClassInfo.ClassName.Namespace = *pFVar6;
          local_70.NodeClassInfo.ClassName.Name = pFVar6[1];
          local_70.NodeClassInfo.ClassName.Variant = pFVar6[2];
          local_70.NodeClassInfo.Type = (EMetasoundFrontendClassType)pFVar6[3].ComparisonIndex.Value
          ;
          local_70.NodeClassInfo.AssetClassID._0_8_ = *(undefined8 *)&pFVar6[3].Number;
          local_70.NodeClassInfo.AssetClassID._8_8_ = *(undefined8 *)&pFVar6[4].Number;
          local_70.NodeClassInfo.AssetPath.PackageName = *(FName *)&pFVar6[5].Number;
          local_70.NodeClassInfo.AssetPath.AssetName = *(FName *)&pFVar6[6].Number;
          local_70.NodeClassInfo.Version = *(FMetasoundFrontendVersionNumber *)&pFVar6[7].Number;
          local_70.Timestamp = (ulong64)local_res20;
          TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>::AddTransaction
                    (this_00,&local_70);
          lpCriticalSection = &this->RegistryMapsCriticalSection;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                               ,0x1b,L"");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (*(int *)&(this->RegisteredNodeTemplates).field_0x8 !=
              *(int *)&(this->RegisteredNodeTemplates).field_0x34) {
            uVar4 = Frontend::GetTypeHash(param_1);
            TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<Metasound::Frontend::FNodeClassRegistryKey>
                      ((TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
                        *)&this->RegisteredNodeTemplates,uVar4,param_1);
          }
          if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          }
          bVar2 = true;
          goto LAB_14ae8eb1f;
        }
      }
    }
  }
  bVar2 = false;
LAB_14ae8eb1f:
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope(local_res10);
  return bVar2;
}

// WaitForAsyncGraphRegistration @ 14ae909a0

void __thiscall
Metasound::Frontend::FNodeClassRegistry::WaitForAsyncGraphRegistration
          (FNodeClassRegistry *this,FGraphClassRegistryKey *param_1)

{
  WaitForAsyncRegistrationInternal(this,&param_1->NodeKey,&param_1->AssetPath);
  return;
}

// WaitForAsyncRegistrationInternal @ 14ae909b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Frontend::FNodeClassRegistry::WaitForAsyncRegistrationInternal
          (FNodeClassRegistry *this,FNodeClassRegistryKey *param_1,FTopLevelAssetPath *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  longlong local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  FString local_50;
  
  bVar4 = UE::Tasks::FPipe::IsInContext(&this->AsyncRegistrationPipe);
  if (bVar4) {
    if ((byte)LogMetaSound._0_1_ < 6) {
      return;
    }
    FNodeClassRegistryKey::ToString(param_1,&local_50);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  else {
    lpCriticalSection = &this->ActiveRegistrationTasksCriticalSection;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = 0;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar5 = Frontend::GetTypeHash(param_1);
    iVar6 = TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey>
                      ((TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&this->ActiveRegistrationTasks,uVar5,param_1);
    if (iVar6 != -1) {
      lVar7 = (longlong)iVar6 * 0x40 + *(longlong *)&this->ActiveRegistrationTasks;
      plVar8 = (longlong *)(lVar7 + 0x28);
      if (lVar7 == 0) {
        plVar8 = (longlong *)0x0;
      }
      if (plVar8 != (longlong *)0x0) {
        lVar3 = plVar8[1];
        lVar9 = *plVar8;
        lVar7 = lVar9 + (longlong)(int)lVar3 * 0x28;
        while( true ) {
          if ((int)plVar8[1] != (int)lVar3) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (lVar9 == lVar7) break;
          if (((param_2 == (FTopLevelAssetPath *)0x0) || (param_2->PackageName == (FName)0x0)) ||
             ((*(FName *)(lVar9 + 0x10) == param_2->PackageName &&
              (*(FName *)(lVar9 + 0x18) == param_2->AssetName)))) {
            local_68 = *(longlong *)(lVar9 + 8);
            if (local_68 != 0) {
              LOCK();
              *(int *)(local_68 + 0x30) = *(int *)(local_68 + 0x30) + 1;
              UNLOCK();
            }
            if (((local_60.Data <= (FScriptContainerElement *)&local_68) &&
                ((FScriptContainerElement *)&local_68 < local_60.Data + (longlong)local_58._4_4_ * 8
                )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar6 = (int)local_58;
            if ((int)local_58 == local_58._4_4_) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_60,(int *)((longlong)&local_58 + 4));
            }
            local_58 = CONCAT44(local_58._4_4_,iVar6 + 1);
            *(longlong *)(local_60.Data + (longlong)iVar6 * 8) = 0;
            *(longlong *)(local_60.Data + (longlong)iVar6 * 8) = local_68;
          }
          lVar9 = lVar9 + 0x28;
        }
      }
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    iVar6 = (int)local_58;
    pFVar1 = local_60.Data + (longlong)(int)local_58 * 8;
    FVar10.Data = local_60.Data;
    while( true ) {
      if ((int)local_58 != iVar6) {
        `TCheckedPointerIterator<UE::Tasks::Private::FTaskHandle,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (FVar10.Data == pFVar1) break;
      bVar4 = 0 < GCycleStatsShouldEmitNamedEvents;
      if (bVar4) {
        FGenericPlatformMisc::BeginNamedEvent
                  (&FColor::Green,"Metasound::FNodeClassRegistry::WaitForRegistrationTaskToComplete"
                  );
      }
      bVar11 = -1 < CpuChannel->Enabled;
      if (bVar11) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1492,
                   "Metasound::FNodeClassRegistry::WaitForRegistrationTaskToComplete",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
                   ,0x5d4);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1492);
      }
      if ((FTaskBase *)*(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)FVar10.Data !=
          (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::Wait
                  ((FTaskBase *)*(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)FVar10.Data);
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar4) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      FVar10.Data = FVar10.Data + 8;
    }
    DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)local_60.Data,(int)local_58);
    local_50.Data.AllocatorInstance.Data = local_60.Data;
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 15055e990

bool __thiscall
`Metasound::Frontend::FNodeClassRegistry::RegisterNodeTemplate'::__l6::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<773741605369676877>);
  if (bVar2) {
    Metasound::Frontend::FNodeClassRegistryKey::ToString(*(FNodeClassRegistryKey **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<773741605369676877>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15055e9f7;
    }
  }
  bVar2 = false;
LAB_15055e9f7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

