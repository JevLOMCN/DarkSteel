// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 8

// FInterfaceRegistry @ 14ad99510

FInterfaceRegistry * __thiscall
Metasound::Frontend::FInterfaceRegistry::FInterfaceRegistry(FInterfaceRegistry *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FInterfaceRegistry *pFVar4;
  
  this->_padding_ = (longlong)&___7FInterfaceRegistry_Frontend_Metasound__6B_;
  *(undefined8 *)&this->Entries = 0;
  *(undefined8 *)&(this->Entries).field_0x8 = 0;
  *(undefined8 *)&(this->Entries).field_0x20 = 0;
  *(undefined4 *)&(this->Entries).field_0x28 = 0;
  *(undefined4 *)&(this->Entries).field_0x2c = 0x80;
  *(undefined4 *)&(this->Entries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Entries).field_0x34 = 0;
  *(undefined8 *)&(this->Entries).field_0x40 = 0;
  *(undefined4 *)&(this->Entries).field_0x48 = 0;
  pTVar3 = ::operator_new(0x60);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->TransactionBuffer).Object =
         (TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *)0x10;
    (this->TransactionBuffer).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TTransactionBuffer_VFInterfaceRegistryTransaction_Frontend_Metasound___Frontend_Metasound___00_SharedPointerInternals__6B_
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
         (TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *)(pTVar3 + 1);
    (this->TransactionBuffer).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *)(pTVar3 + 1) ==
        (TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FInterfaceRegistry *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  return this;
}

// ~FInterfaceRegistry @ 14ad9e220

void __thiscall
Metasound::Frontend::FInterfaceRegistry::~FInterfaceRegistry(FInterfaceRegistry *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TransactionBuffer).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->Entries).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Entries).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Entries);
  return;
}

// CreateTransactionStream @ 14adb20a0

TUniquePtr<Metasound::Frontend::TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction>,TDefaultDelete<Metasound::Frontend::TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction>_>_>
 __thiscall
Metasound::Frontend::FInterfaceRegistry::CreateTransactionStream(FInterfaceRegistry *this)

{
  TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction> *this_00;
  TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *pTVar1;
  TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction> *in_RDX;
  TSharedRef<Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction>,1>
  local_18;
  
  this_00 = ::operator_new(0x18);
  if (this_00 != (TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction> *)0x0) {
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
    pTVar1 = (TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *)
             TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction>::
             TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction>
                       (this_00,&local_18);
    (in_RDX->Buffer).Object = pTVar1;
    return (TUniquePtr<Metasound::Frontend::TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction>,TDefaultDelete<Metasound::Frontend::TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction>_>_>
            )in_RDX;
  }
  (in_RDX->Buffer).Object =
       (TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *)0x0;
  return (TUniquePtr<Metasound::Frontend::TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction>,TDefaultDelete<Metasound::Frontend::TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction>_>_>
          )in_RDX;
}

// FindInterface @ 14adb9120

bool __thiscall
Metasound::Frontend::FInterfaceRegistry::FindInterface
          (FInterfaceRegistry *this,FString *param_1,FMetasoundFrontendInterface *param_2)

{
  longlong *plVar1;
  FMetasoundFrontendClassInterface *pFVar2;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x10))();
  if (plVar1 != (longlong *)0x0) {
    pFVar2 = (FMetasoundFrontendClassInterface *)(**(code **)(*plVar1 + 8))(plVar1);
    FMetasoundFrontendClassInterface::operator=((FMetasoundFrontendClassInterface *)param_2,pFVar2);
    FMetasoundFrontendInterfaceMetadata::operator=
              (&param_2->Metadata,(FMetasoundFrontendInterfaceMetadata *)(pFVar2 + 1));
    return true;
  }
  return false;
}

// FindInterfaceRegistryEntry @ 14adb9180

IInterfaceRegistryEntry * __thiscall
Metasound::Frontend::FInterfaceRegistry::FindInterfaceRegistryEntry
          (FInterfaceRegistry *this,FString *param_1)

{
  TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>
  *pTVar1;
  
  pTVar1 = TMapBase<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>,0>_>
           ::Find((TMapBase<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>,0>_>
                   *)&this->Entries,param_1);
  if (pTVar1 != (TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>
                 *)0x0) {
    return pTVar1->Ptr;
  }
  return (IInterfaceRegistryEntry *)0x0;
}

// Get @ 14adbb9b0

FInterfaceRegistry * __cdecl Metasound::Frontend::FInterfaceRegistry::Get(void)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FInterfaceRegistry *pFVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pTVar3 = ::operator_new(0x60);
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        ::Registry.TransactionBuffer.Object =
             (TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *)&DAT_00000010
        ;
        ::Registry.TransactionBuffer.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar3->SharedReferenceCount = (atomic<int>)0x1;
        pTVar3->WeakReferenceCount = (atomic<int>)0x1;
        pTVar3->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_V__TTransactionBuffer_VFInterfaceRegistryTransaction_Frontend_Metasound___Frontend_Metasound___00_SharedPointerInternals__6B_
        ;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 1),4000);
        ::Registry.TransactionBuffer.Object =
             (TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *)(pTVar3 + 1);
        pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
        pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
        pTVar3[4]._padding_ = 0;
        pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
        pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
        pTVar3[5]._padding_ = 0;
        pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
        pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
        ::Registry.TransactionBuffer.SharedReferenceCount.ReferenceController = pTVar3;
        if (::Registry.TransactionBuffer.Object ==
            (TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FInterfaceRegistry *)(*pcVar1)();
            return pFVar4;
          }
        }
      }
      atexit(`Metasound::Frontend::FInterfaceRegistry::Get'::__l2::
             _dynamic_atexit_destructor_for__Registry__);
      _Init_thread_footer(&::_TSS0);
      return &::Registry;
    }
  }
  return &::Registry;
}

// IsInterfaceVertexNameValid @ 14adc7460

bool __thiscall
Metasound::Frontend::FInterfaceRegistry::IsInterfaceVertexNameValid
          (FInterfaceRegistry *this,FName param_1,FName param_2,FName *param_3)

{
  FName local_res10 [2];
  FName local_res20;
  
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  Audio::FParameterPath::SplitName(param_2,local_res10,&local_res20);
  if (param_3 != (FName *)0x0) {
    *param_3 = local_res10[0];
  }
  return param_1 == local_res10[0];
}

// RegisterInterface @ 14adccbf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::Frontend::FInterfaceRegistry::RegisterInterface
          (FInterfaceRegistry *this,
          TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>
          *param_1)

{
  LARGE_INTEGER LVar1;
  ForAnyElementType FVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  FLLMScope local_res10 [2];
  LARGE_INTEGER local_res18;
  FMemScope local_res20;
  FString local_b8;
  FString *local_a8;
  TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>
  *local_a0;
  FInterfaceRegistryTransaction local_98;
  FInterfaceRegistryTransaction local_68;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res18.s.LowPart = LLMTagDeclaration_Audio_MetaSound.UniqueName.ComparisonIndex.Value;
  local_res18.s.HighPart = LLMTagDeclaration_Audio_MetaSound.UniqueName.Number;
  FMemScope::FMemScope(&local_res20,(FName *)&local_res18.s,true);
  QueryPerformanceCounter(&local_res18);
  if (param_1->Ptr != (IInterfaceRegistryEntry *)0x0) {
    lVar4 = (**(code **)((longlong)*param_1->Ptr + 8))();
    GetInterfaceRegistryKey(&local_b8,(FMetasoundFrontendVersion *)(lVar4 + 0x40));
    if (1 < local_b8.Data.ArrayNum) {
      plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x10))(this,&local_b8);
      LVar1 = local_res18;
      if (plVar5 != (longlong *)0x0) {
        if (2 < (byte)LogMetaSound._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        lVar4 = (**(code **)(*plVar5 + 8))(plVar5);
        iVar3 = local_b8.Data.ArrayNum;
        FVar2.Data = local_b8.Data.AllocatorInstance.Data;
        local_98.Type = InterfaceUnregistration;
        local_98.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_b8.Data.ArrayNum == 0) {
          local_98.Key.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_b8.Data.ArrayNum,0,(ForAnyElementType *)&local_98.Key,
                     local_b8.Data.ArrayNum,&local_98.Key.Data.ArrayMax);
          memcpy(local_98.Key.Data.AllocatorInstance.Data,FVar2.Data,(longlong)iVar3 * 2);
        }
        local_98.InterfaceVersion.Name = *(FName *)(lVar4 + 0x40);
        local_98.InterfaceVersion.Number = *(FMetasoundFrontendVersionNumber *)(lVar4 + 0x48);
        local_98.Timestamp = (ulong64)LVar1;
        TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction>::AddTransaction
                  ((this->TransactionBuffer).Object,&local_98);
        if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
        }
      }
      lVar4 = (**(code **)((longlong)*param_1->Ptr + 8))();
      FVar2.Data = local_b8.Data.AllocatorInstance.Data;
      local_68.Type = InterfaceRegistration;
      local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_b8.Data.ArrayNum == 0) {
        local_68.Key.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_b8.Data.ArrayNum,0,(ForAnyElementType *)&local_68.Key,
                   local_b8.Data.ArrayNum,&local_68.Key.Data.ArrayMax);
        memcpy(local_68.Key.Data.AllocatorInstance.Data,FVar2.Data,
               (longlong)local_b8.Data.ArrayNum * 2);
      }
      local_68.InterfaceVersion.Name = *(FName *)(lVar4 + 0x40);
      local_68.InterfaceVersion.Number = *(FMetasoundFrontendVersionNumber *)(lVar4 + 0x48);
      local_68.Timestamp = (ulong64)LVar1;
      TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction>::AddTransaction
                ((this->TransactionBuffer).Object,&local_68);
      local_a8 = &local_b8;
      local_a0 = param_1;
      TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_const_&,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>_&&>_>
                ((TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>,0>,FDefaultSetAllocator>
                  *)&this->Entries,
                 (TPairInitializer<FString_const_&,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>_&&>
                  *)&local_res18.s,(bool *)&local_a8);
      if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      bVar6 = true;
      goto LAB_14adcce5a;
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = false;
LAB_14adcce5a:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return bVar6;
}

