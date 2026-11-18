// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 37

// ~TArrayAttributeHelper<int> @ 14e402910

void __thiscall
UE::Interchange::TArrayAttributeHelper<int>::~TArrayAttributeHelper<int>
          (TArrayAttributeHelper<int> *this)

{
  atomic<int> *paVar1;
  FAttributeKey *pFVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FString *pFVar6;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  FString local_48 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_UE::Interchange::TArrayAttributeHelper<int>::~TArrayAttributeHelper<int>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_UE::Interchange::TArrayAttributeHelper<int>::~TArrayAttributeHelper<int>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_UE::Interchange::TArrayAttributeHelper<int>::~TArrayAttributeHelper<int>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:___cdecl_UE::Interchange::TArrayAttributeHelper<int>::~TArrayAttributeHelper<int>(void)___ptr64'
                      ::__l2::LLMScope_Name26,L"Interchange");
      _Init_thread_footer(&`public:___cdecl_UE::Interchange::TArrayAttributeHelper<int>::~TArrayAttributeHelper<int>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:___cdecl_UE::Interchange::TArrayAttributeHelper<int>::~TArrayAttributeHelper<int>(void)___ptr64'
             ::__l2::LLMScope_Name26,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:___cdecl_UE::Interchange::TArrayAttributeHelper<int>::~TArrayAttributeHelper<int>(void)___ptr64'
              ::__l2::LLMScope_Name26,true);
  if (this != (TArrayAttributeHelper<int> *)(local_48 + 1)) {
    pTVar4 = (this->Attributes).WeakReferenceCount.ReferenceController;
    (this->Attributes).Object = (FAttributeStorage *)0x0;
    (this->Attributes).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pFVar6 = ::FName::ToString(&local_res10,local_48);
  pFVar2 = &this->KeyCount;
  if (&pFVar2->Key != pFVar6) {
    pFVar5 = (pFVar2->Key).Data.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Key).Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->KeyCount).Key.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->KeyCount).Key.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pFVar5 = (pFVar2->Key).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar4 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// ~TArrayAttributeHelper<float> @ 14e402ab0

void __thiscall
UE::Interchange::TArrayAttributeHelper<float>::~TArrayAttributeHelper<float>
          (TArrayAttributeHelper<float> *this)

{
  atomic<int> *paVar1;
  FAttributeKey *pFVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FString *pFVar6;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  FString local_48 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_UE::Interchange::TArrayAttributeHelper<float>::~TArrayAttributeHelper<float>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_UE::Interchange::TArrayAttributeHelper<float>::~TArrayAttributeHelper<float>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_UE::Interchange::TArrayAttributeHelper<float>::~TArrayAttributeHelper<float>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:___cdecl_UE::Interchange::TArrayAttributeHelper<float>::~TArrayAttributeHelper<float>(void)___ptr64'
                      ::__l2::LLMScope_Name26,L"Interchange");
      _Init_thread_footer(&`public:___cdecl_UE::Interchange::TArrayAttributeHelper<float>::~TArrayAttributeHelper<float>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:___cdecl_UE::Interchange::TArrayAttributeHelper<float>::~TArrayAttributeHelper<float>(void)___ptr64'
             ::__l2::LLMScope_Name26,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:___cdecl_UE::Interchange::TArrayAttributeHelper<float>::~TArrayAttributeHelper<float>(void)___ptr64'
              ::__l2::LLMScope_Name26,true);
  if (this != (TArrayAttributeHelper<float> *)(local_48 + 1)) {
    pTVar4 = (this->Attributes).WeakReferenceCount.ReferenceController;
    (this->Attributes).Object = (FAttributeStorage *)0x0;
    (this->Attributes).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pFVar6 = ::FName::ToString(&local_res10,local_48);
  pFVar2 = &this->KeyCount;
  if (&pFVar2->Key != pFVar6) {
    pFVar5 = (pFVar2->Key).Data.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Key).Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->KeyCount).Key.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->KeyCount).Key.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pFVar5 = (pFVar2->Key).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar4 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// ~TArrayAttributeHelper<double> @ 14e402c50

void __thiscall
UE::Interchange::TArrayAttributeHelper<double>::~TArrayAttributeHelper<double>
          (TArrayAttributeHelper<double> *this)

{
  atomic<int> *paVar1;
  FAttributeKey *pFVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FString *pFVar6;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  FString local_48 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_UE::Interchange::TArrayAttributeHelper<double>::~TArrayAttributeHelper<double>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_UE::Interchange::TArrayAttributeHelper<double>::~TArrayAttributeHelper<double>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_UE::Interchange::TArrayAttributeHelper<double>::~TArrayAttributeHelper<double>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:___cdecl_UE::Interchange::TArrayAttributeHelper<double>::~TArrayAttributeHelper<double>(void)___ptr64'
                      ::__l2::LLMScope_Name26,L"Interchange");
      _Init_thread_footer(&`public:___cdecl_UE::Interchange::TArrayAttributeHelper<double>::~TArrayAttributeHelper<double>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:___cdecl_UE::Interchange::TArrayAttributeHelper<double>::~TArrayAttributeHelper<double>(void)___ptr64'
             ::__l2::LLMScope_Name26,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:___cdecl_UE::Interchange::TArrayAttributeHelper<double>::~TArrayAttributeHelper<double>(void)___ptr64'
              ::__l2::LLMScope_Name26,true);
  if (this != (TArrayAttributeHelper<double> *)(local_48 + 1)) {
    pTVar4 = (this->Attributes).WeakReferenceCount.ReferenceController;
    (this->Attributes).Object = (FAttributeStorage *)0x0;
    (this->Attributes).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pFVar6 = ::FName::ToString(&local_res10,local_48);
  pFVar2 = &this->KeyCount;
  if (&pFVar2->Key != pFVar6) {
    pFVar5 = (pFVar2->Key).Data.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Key).Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->KeyCount).Key.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->KeyCount).Key.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pFVar5 = (pFVar2->Key).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar4 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// ~TArrayAttributeHelper<FString> @ 14e402df0

void __thiscall
UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
          (TArrayAttributeHelper<FString> *this)

{
  atomic<int> *paVar1;
  FAttributeKey *pFVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FString *pFVar6;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  FString local_48 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>(void)___ptr64'
                      ::__l2::LLMScope_Name26,L"Interchange");
      _Init_thread_footer(&`public:___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>(void)___ptr64'
             ::__l2::LLMScope_Name26,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>(void)___ptr64'
              ::__l2::LLMScope_Name26,true);
  if (this != (TArrayAttributeHelper<FString> *)(local_48 + 1)) {
    pTVar4 = (this->Attributes).WeakReferenceCount.ReferenceController;
    (this->Attributes).Object = (FAttributeStorage *)0x0;
    (this->Attributes).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pFVar6 = ::FName::ToString(&local_res10,local_48);
  pFVar2 = &this->KeyCount;
  if (&pFVar2->Key != pFVar6) {
    pFVar5 = (pFVar2->Key).Data.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Key).Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->KeyCount).Key.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->KeyCount).Key.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pFVar5 = (pFVar2->Key).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar4 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// AddItem @ 14e40eb10

bool __thiscall
UE::Interchange::TArrayAttributeHelper<int>::AddItem(TArrayAttributeHelper<int> *this,int *param_1)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  int iVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  EAttributeTypes EVar6;
  EAttributeStorageResult EVar7;
  FAttributeKey *pFVar8;
  FString *pFVar9;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar10;
  FAttributeAllocationInfo *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  int local_res8 [2];
  int local_res18 [4];
  TAttributeHandle<int,void> local_d8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FAttributeKey local_70;
  FString local_60;
  FString local_50;
  
  pTVar12 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e40eb56:
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494414>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x8e,"AttributePtr.IsValid()");
    if (bVar13) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    aVar2 = pTVar12->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e40eb56;
      }
      LOCK();
      aVar5 = pTVar12->SharedReferenceCount;
      bVar13 = aVar2 == aVar5;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar13);
    this_00 = (this->Attributes).Object;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e40eb56;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    ::FString::FString(&local_b0,&(this->KeyCount).Key);
    bVar13 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_b0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
LAB_14e40ecbd:
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar13 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      ::FString::FString(&local_90,&(this->KeyCount).Key);
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_d8,(FAttributeKey *)&local_90,this_00);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (((local_d8.AttributeStorage == (FAttributeStorage *)0x0) ||
          (bVar13 = FAttributeStorage::ContainAttribute(local_d8.AttributeStorage,&local_d8.Key),
          !bVar13)) ||
         (EVar6 = FAttributeStorage::GetAttributeType(local_d8.AttributeStorage,&local_d8.Key),
         EVar6 != Int32)) {
        bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494430>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x9e,"Handle.IsValid()");
        if (bVar13) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        bVar13 = false;
      }
      else {
        local_res8[0] = 0;
        if (local_d8.AttributeStorage != (FAttributeStorage *)0x0) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_d8.AttributeStorage,&local_d8.Key,local_res8);
        }
        iVar3 = local_res8[0];
        GetIndexKey(this,(FAttributeKey *)&local_c0,local_res8[0]);
        EVar7 = FAttributeStorage::RegisterAttribute<int,void>
                          (this_00,(FAttributeKey *)&local_c0,param_1,None);
        if ((EVar7 & Operation_Success) == None) {
          ::FString::FString(&local_80,&local_c0);
          pFVar9 = ::FString::FString(&local_50,L"TArrayAttributeHelper.AddName");
          LogAttributeStorageErrors(EVar7,pFVar9,(FAttributeKey *)&local_80);
          bVar13 = false;
        }
        else {
          local_res8[0] = iVar3 + 1;
          if (local_d8.AttributeStorage != (FAttributeStorage *)0x0) {
            pTVar10 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                              *)local_d8.AttributeStorage,&local_d8.Key);
            pFVar11 = (FAttributeAllocationInfo *)&pTVar10->field_0x10;
            if (pTVar10 ==
                (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                 *)0x0) {
              pFVar11 = (FAttributeAllocationInfo *)0x0;
            }
            FAttributeStorage::SetAttribute<int>(local_d8.AttributeStorage,pFVar11,local_res8);
          }
          bVar13 = true;
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e40eb85;
    }
    local_res18[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    ::FString::FString(&local_a0,&(this->KeyCount).Key);
    EVar7 = FAttributeStorage::RegisterAttribute<int,void>
                      (this_00,(FAttributeKey *)&local_a0,local_res18,None);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if ((EVar7 & Operation_Success) != None) goto LAB_14e40ecbd;
    pFVar8 = GetKeyCount(this,&local_70);
    pFVar9 = ::FString::FString(&local_60,L"TArrayAttributeHelper.AddName");
    LogAttributeStorageErrors(EVar7,pFVar9,pFVar8);
  }
  bVar13 = false;
LAB_14e40eb85:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return bVar13;
}

// AddItem @ 14e40ee60

bool __thiscall
UE::Interchange::TArrayAttributeHelper<float>::AddItem
          (TArrayAttributeHelper<float> *this,float *param_1)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  int iVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  EAttributeTypes EVar6;
  EAttributeStorageResult EVar7;
  FAttributeKey *pFVar8;
  FString *pFVar9;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar10;
  FAttributeAllocationInfo *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  int local_res8 [2];
  int local_res18 [4];
  TAttributeHandle<int,void> local_d8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FAttributeKey local_70;
  FString local_60;
  FString local_50;
  
  pTVar12 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e40eea6:
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494414>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x8e,"AttributePtr.IsValid()");
    if (bVar13) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    aVar2 = pTVar12->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e40eea6;
      }
      LOCK();
      aVar5 = pTVar12->SharedReferenceCount;
      bVar13 = aVar2 == aVar5;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar13);
    this_00 = (this->Attributes).Object;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e40eea6;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    ::FString::FString(&local_b0,&(this->KeyCount).Key);
    bVar13 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_b0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
LAB_14e40f00d:
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar13 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      ::FString::FString(&local_90,&(this->KeyCount).Key);
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_d8,(FAttributeKey *)&local_90,this_00);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (((local_d8.AttributeStorage == (FAttributeStorage *)0x0) ||
          (bVar13 = FAttributeStorage::ContainAttribute(local_d8.AttributeStorage,&local_d8.Key),
          !bVar13)) ||
         (EVar6 = FAttributeStorage::GetAttributeType(local_d8.AttributeStorage,&local_d8.Key),
         EVar6 != Int32)) {
        bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494430>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x9e,"Handle.IsValid()");
        if (bVar13) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        bVar13 = false;
      }
      else {
        local_res8[0] = 0;
        if (local_d8.AttributeStorage != (FAttributeStorage *)0x0) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_d8.AttributeStorage,&local_d8.Key,local_res8);
        }
        iVar3 = local_res8[0];
        GetIndexKey(this,(FAttributeKey *)&local_c0,local_res8[0]);
        EVar7 = FAttributeStorage::RegisterAttribute<float,void>
                          (this_00,(FAttributeKey *)&local_c0,param_1,None);
        if ((EVar7 & Operation_Success) == None) {
          ::FString::FString(&local_80,&local_c0);
          pFVar9 = ::FString::FString(&local_50,L"TArrayAttributeHelper.AddName");
          LogAttributeStorageErrors(EVar7,pFVar9,(FAttributeKey *)&local_80);
          bVar13 = false;
        }
        else {
          local_res8[0] = iVar3 + 1;
          if (local_d8.AttributeStorage != (FAttributeStorage *)0x0) {
            pTVar10 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                              *)local_d8.AttributeStorage,&local_d8.Key);
            pFVar11 = (FAttributeAllocationInfo *)&pTVar10->field_0x10;
            if (pTVar10 ==
                (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                 *)0x0) {
              pFVar11 = (FAttributeAllocationInfo *)0x0;
            }
            FAttributeStorage::SetAttribute<int>(local_d8.AttributeStorage,pFVar11,local_res8);
          }
          bVar13 = true;
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e40eed5;
    }
    local_res18[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    ::FString::FString(&local_a0,&(this->KeyCount).Key);
    EVar7 = FAttributeStorage::RegisterAttribute<int,void>
                      (this_00,(FAttributeKey *)&local_a0,local_res18,None);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if ((EVar7 & Operation_Success) != None) goto LAB_14e40f00d;
    pFVar8 = GetKeyCount(this,&local_70);
    pFVar9 = ::FString::FString(&local_60,L"TArrayAttributeHelper.AddName");
    LogAttributeStorageErrors(EVar7,pFVar9,pFVar8);
  }
  bVar13 = false;
LAB_14e40eed5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return bVar13;
}

// AddItem @ 14e40f1b0

bool __thiscall
UE::Interchange::TArrayAttributeHelper<double>::AddItem
          (TArrayAttributeHelper<double> *this,double *param_1)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  int iVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  EAttributeTypes EVar6;
  EAttributeStorageResult EVar7;
  FAttributeKey *pFVar8;
  FString *pFVar9;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar10;
  FAttributeAllocationInfo *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  int local_res8 [2];
  int local_res18 [4];
  TAttributeHandle<int,void> local_d8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FAttributeKey local_70;
  FString local_60;
  FString local_50;
  
  pTVar12 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e40f1f6:
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494414>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x8e,"AttributePtr.IsValid()");
    if (bVar13) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    aVar2 = pTVar12->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e40f1f6;
      }
      LOCK();
      aVar5 = pTVar12->SharedReferenceCount;
      bVar13 = aVar2 == aVar5;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar13);
    this_00 = (this->Attributes).Object;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e40f1f6;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    ::FString::FString(&local_b0,&(this->KeyCount).Key);
    bVar13 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_b0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
LAB_14e40f35d:
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar13 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      ::FString::FString(&local_90,&(this->KeyCount).Key);
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_d8,(FAttributeKey *)&local_90,this_00);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (((local_d8.AttributeStorage == (FAttributeStorage *)0x0) ||
          (bVar13 = FAttributeStorage::ContainAttribute(local_d8.AttributeStorage,&local_d8.Key),
          !bVar13)) ||
         (EVar6 = FAttributeStorage::GetAttributeType(local_d8.AttributeStorage,&local_d8.Key),
         EVar6 != Int32)) {
        bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494430>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x9e,"Handle.IsValid()");
        if (bVar13) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        bVar13 = false;
      }
      else {
        local_res8[0] = 0;
        if (local_d8.AttributeStorage != (FAttributeStorage *)0x0) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_d8.AttributeStorage,&local_d8.Key,local_res8);
        }
        iVar3 = local_res8[0];
        GetIndexKey(this,(FAttributeKey *)&local_c0,local_res8[0]);
        EVar7 = FAttributeStorage::RegisterAttribute<double,void>
                          (this_00,(FAttributeKey *)&local_c0,param_1,None);
        if ((EVar7 & Operation_Success) == None) {
          ::FString::FString(&local_80,&local_c0);
          pFVar9 = ::FString::FString(&local_50,L"TArrayAttributeHelper.AddName");
          LogAttributeStorageErrors(EVar7,pFVar9,(FAttributeKey *)&local_80);
          bVar13 = false;
        }
        else {
          local_res8[0] = iVar3 + 1;
          if (local_d8.AttributeStorage != (FAttributeStorage *)0x0) {
            pTVar10 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                              *)local_d8.AttributeStorage,&local_d8.Key);
            pFVar11 = (FAttributeAllocationInfo *)&pTVar10->field_0x10;
            if (pTVar10 ==
                (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                 *)0x0) {
              pFVar11 = (FAttributeAllocationInfo *)0x0;
            }
            FAttributeStorage::SetAttribute<int>(local_d8.AttributeStorage,pFVar11,local_res8);
          }
          bVar13 = true;
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e40f225;
    }
    local_res18[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    ::FString::FString(&local_a0,&(this->KeyCount).Key);
    EVar7 = FAttributeStorage::RegisterAttribute<int,void>
                      (this_00,(FAttributeKey *)&local_a0,local_res18,None);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if ((EVar7 & Operation_Success) != None) goto LAB_14e40f35d;
    pFVar8 = GetKeyCount(this,&local_70);
    pFVar9 = ::FString::FString(&local_60,L"TArrayAttributeHelper.AddName");
    LogAttributeStorageErrors(EVar7,pFVar9,pFVar8);
  }
  bVar13 = false;
LAB_14e40f225:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return bVar13;
}

// AddItem @ 14e40f500

bool __thiscall
UE::Interchange::TArrayAttributeHelper<FString>::AddItem
          (TArrayAttributeHelper<FString> *this,FString *param_1)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  int iVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  EAttributeTypes EVar6;
  EAttributeStorageResult EVar7;
  FAttributeKey *pFVar8;
  FString *pFVar9;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar10;
  FAttributeAllocationInfo *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  int local_res8 [2];
  int local_res18 [4];
  TAttributeHandle<int,void> local_d8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FAttributeKey local_70;
  FString local_60;
  FString local_50;
  
  pTVar12 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e40f546:
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494414>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x8e,"AttributePtr.IsValid()");
    if (bVar13) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    aVar2 = pTVar12->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e40f546;
      }
      LOCK();
      aVar5 = pTVar12->SharedReferenceCount;
      bVar13 = aVar2 == aVar5;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar13);
    this_00 = (this->Attributes).Object;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e40f546;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    ::FString::FString(&local_b0,&(this->KeyCount).Key);
    bVar13 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_b0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
LAB_14e40f6ad:
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar13 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      ::FString::FString(&local_90,&(this->KeyCount).Key);
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_d8,(FAttributeKey *)&local_90,this_00);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (((local_d8.AttributeStorage == (FAttributeStorage *)0x0) ||
          (bVar13 = FAttributeStorage::ContainAttribute(local_d8.AttributeStorage,&local_d8.Key),
          !bVar13)) ||
         (EVar6 = FAttributeStorage::GetAttributeType(local_d8.AttributeStorage,&local_d8.Key),
         EVar6 != Int32)) {
        bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494430>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x9e,"Handle.IsValid()");
        if (bVar13) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        bVar13 = false;
      }
      else {
        local_res8[0] = 0;
        if (local_d8.AttributeStorage != (FAttributeStorage *)0x0) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_d8.AttributeStorage,&local_d8.Key,local_res8);
        }
        iVar3 = local_res8[0];
        GetIndexKey(this,(FAttributeKey *)&local_c0,local_res8[0]);
        EVar7 = FAttributeStorage::RegisterAttribute<FString,void>
                          (this_00,(FAttributeKey *)&local_c0,param_1,None);
        if ((EVar7 & Operation_Success) == None) {
          ::FString::FString(&local_80,&local_c0);
          pFVar9 = ::FString::FString(&local_50,L"TArrayAttributeHelper.AddName");
          LogAttributeStorageErrors(EVar7,pFVar9,(FAttributeKey *)&local_80);
          bVar13 = false;
        }
        else {
          local_res8[0] = iVar3 + 1;
          if (local_d8.AttributeStorage != (FAttributeStorage *)0x0) {
            pTVar10 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                              *)local_d8.AttributeStorage,&local_d8.Key);
            pFVar11 = (FAttributeAllocationInfo *)&pTVar10->field_0x10;
            if (pTVar10 ==
                (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                 *)0x0) {
              pFVar11 = (FAttributeAllocationInfo *)0x0;
            }
            FAttributeStorage::SetAttribute<int>(local_d8.AttributeStorage,pFVar11,local_res8);
          }
          bVar13 = true;
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e40f575;
    }
    local_res18[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    ::FString::FString(&local_a0,&(this->KeyCount).Key);
    EVar7 = FAttributeStorage::RegisterAttribute<int,void>
                      (this_00,(FAttributeKey *)&local_a0,local_res18,None);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if ((EVar7 & Operation_Success) != None) goto LAB_14e40f6ad;
    pFVar8 = GetKeyCount(this,&local_70);
    pFVar9 = ::FString::FString(&local_60,L"TArrayAttributeHelper.AddName");
    LogAttributeStorageErrors(EVar7,pFVar9,pFVar8);
  }
  bVar13 = false;
LAB_14e40f575:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return bVar13;
}

// GetCount @ 14e43a320

int __thiscall
UE::Interchange::TArrayAttributeHelper<int>::GetCount(TArrayAttributeHelper<int> *this)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  int iVar4;
  EAttributeTypes EVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int local_res8 [2];
  FString local_58;
  FString local_48;
  TAttributeHandle<int,void> local_38;
  
  pTVar7 = (this->Attributes).WeakReferenceCount.ReferenceController;
  pTVar6 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e43a352;
      LOCK();
      aVar3 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    this_00 = (this->Attributes).Object;
    pTVar6 = pTVar7;
    if (this_00 != (FAttributeStorage *)0x0) {
      local_res8[0] = 0;
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar8 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4942768438637494551>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x117,"!KeyCount.Key.IsEmpty()"), bVar8)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      ::FString::FString(&local_58,&(this->KeyCount).Key);
      bVar8 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      iVar4 = local_res8[0];
      if (bVar8) {
        if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
           (bVar8 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4942768438637494551>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                               ,0x117,"!KeyCount.Key.IsEmpty()"), bVar8)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        ::FString::FString(&local_48,&(this->KeyCount).Key);
        FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                  (&local_38,(FAttributeKey *)&local_48,this_00);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if ((((local_38.AttributeStorage != (FAttributeStorage *)0x0) &&
             (bVar8 = FAttributeStorage::ContainAttribute(local_38.AttributeStorage,&local_38.Key),
             bVar8)) &&
            (EVar5 = FAttributeStorage::GetAttributeType(local_38.AttributeStorage,&local_38.Key),
            EVar5 == Int32)) && (local_38.AttributeStorage != (FAttributeStorage *)0x0)) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_38.AttributeStorage,&local_38.Key,local_res8);
        }
        iVar4 = local_res8[0];
        if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
          iVar4 = local_res8[0];
        }
      }
      goto LAB_14e43a37f;
    }
  }
LAB_14e43a352:
  bVar8 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4942768438637494323>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                     ,0x33,"AttributePtr.IsValid()");
  pTVar7 = pTVar6;
  iVar4 = 0;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
LAB_14e43a37f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return iVar4;
}

// GetCount @ 14e43a500

int __thiscall
UE::Interchange::TArrayAttributeHelper<float>::GetCount(TArrayAttributeHelper<float> *this)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  int iVar4;
  EAttributeTypes EVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int local_res8 [2];
  FString local_58;
  FString local_48;
  TAttributeHandle<int,void> local_38;
  
  pTVar7 = (this->Attributes).WeakReferenceCount.ReferenceController;
  pTVar6 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e43a532;
      LOCK();
      aVar3 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    this_00 = (this->Attributes).Object;
    pTVar6 = pTVar7;
    if (this_00 != (FAttributeStorage *)0x0) {
      local_res8[0] = 0;
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar8 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4942768438637494551>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x117,"!KeyCount.Key.IsEmpty()"), bVar8)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      ::FString::FString(&local_58,&(this->KeyCount).Key);
      bVar8 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      iVar4 = local_res8[0];
      if (bVar8) {
        if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
           (bVar8 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4942768438637494551>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                               ,0x117,"!KeyCount.Key.IsEmpty()"), bVar8)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        ::FString::FString(&local_48,&(this->KeyCount).Key);
        FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                  (&local_38,(FAttributeKey *)&local_48,this_00);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if ((((local_38.AttributeStorage != (FAttributeStorage *)0x0) &&
             (bVar8 = FAttributeStorage::ContainAttribute(local_38.AttributeStorage,&local_38.Key),
             bVar8)) &&
            (EVar5 = FAttributeStorage::GetAttributeType(local_38.AttributeStorage,&local_38.Key),
            EVar5 == Int32)) && (local_38.AttributeStorage != (FAttributeStorage *)0x0)) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_38.AttributeStorage,&local_38.Key,local_res8);
        }
        iVar4 = local_res8[0];
        if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
          iVar4 = local_res8[0];
        }
      }
      goto LAB_14e43a55f;
    }
  }
LAB_14e43a532:
  bVar8 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4942768438637494323>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                     ,0x33,"AttributePtr.IsValid()");
  pTVar7 = pTVar6;
  iVar4 = 0;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
LAB_14e43a55f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return iVar4;
}

// GetCount @ 14e43a6e0

int __thiscall
UE::Interchange::TArrayAttributeHelper<double>::GetCount(TArrayAttributeHelper<double> *this)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  int iVar4;
  EAttributeTypes EVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int local_res8 [2];
  FString local_58;
  FString local_48;
  TAttributeHandle<int,void> local_38;
  
  pTVar7 = (this->Attributes).WeakReferenceCount.ReferenceController;
  pTVar6 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e43a712;
      LOCK();
      aVar3 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    this_00 = (this->Attributes).Object;
    pTVar6 = pTVar7;
    if (this_00 != (FAttributeStorage *)0x0) {
      local_res8[0] = 0;
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar8 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4942768438637494551>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x117,"!KeyCount.Key.IsEmpty()"), bVar8)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      ::FString::FString(&local_58,&(this->KeyCount).Key);
      bVar8 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      iVar4 = local_res8[0];
      if (bVar8) {
        if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
           (bVar8 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4942768438637494551>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                               ,0x117,"!KeyCount.Key.IsEmpty()"), bVar8)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        ::FString::FString(&local_48,&(this->KeyCount).Key);
        FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                  (&local_38,(FAttributeKey *)&local_48,this_00);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if ((((local_38.AttributeStorage != (FAttributeStorage *)0x0) &&
             (bVar8 = FAttributeStorage::ContainAttribute(local_38.AttributeStorage,&local_38.Key),
             bVar8)) &&
            (EVar5 = FAttributeStorage::GetAttributeType(local_38.AttributeStorage,&local_38.Key),
            EVar5 == Int32)) && (local_38.AttributeStorage != (FAttributeStorage *)0x0)) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_38.AttributeStorage,&local_38.Key,local_res8);
        }
        iVar4 = local_res8[0];
        if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
          iVar4 = local_res8[0];
        }
      }
      goto LAB_14e43a73f;
    }
  }
LAB_14e43a712:
  bVar8 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4942768438637494323>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                     ,0x33,"AttributePtr.IsValid()");
  pTVar7 = pTVar6;
  iVar4 = 0;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
LAB_14e43a73f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return iVar4;
}

// GetCount @ 14e43a8c0

int __thiscall
UE::Interchange::TArrayAttributeHelper<FString>::GetCount(TArrayAttributeHelper<FString> *this)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  int iVar4;
  EAttributeTypes EVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int local_res8 [2];
  FString local_58;
  FString local_48;
  TAttributeHandle<int,void> local_38;
  
  pTVar7 = (this->Attributes).WeakReferenceCount.ReferenceController;
  pTVar6 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e43a8f2;
      LOCK();
      aVar3 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    this_00 = (this->Attributes).Object;
    pTVar6 = pTVar7;
    if (this_00 != (FAttributeStorage *)0x0) {
      local_res8[0] = 0;
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar8 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4942768438637494551>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x117,"!KeyCount.Key.IsEmpty()"), bVar8)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      ::FString::FString(&local_58,&(this->KeyCount).Key);
      bVar8 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      iVar4 = local_res8[0];
      if (bVar8) {
        if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
           (bVar8 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4942768438637494551>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                               ,0x117,"!KeyCount.Key.IsEmpty()"), bVar8)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        ::FString::FString(&local_48,&(this->KeyCount).Key);
        FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                  (&local_38,(FAttributeKey *)&local_48,this_00);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if ((((local_38.AttributeStorage != (FAttributeStorage *)0x0) &&
             (bVar8 = FAttributeStorage::ContainAttribute(local_38.AttributeStorage,&local_38.Key),
             bVar8)) &&
            (EVar5 = FAttributeStorage::GetAttributeType(local_38.AttributeStorage,&local_38.Key),
            EVar5 == Int32)) && (local_38.AttributeStorage != (FAttributeStorage *)0x0)) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_38.AttributeStorage,&local_38.Key,local_res8);
        }
        iVar4 = local_res8[0];
        if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
          iVar4 = local_res8[0];
        }
      }
      goto LAB_14e43a91f;
    }
  }
LAB_14e43a8f2:
  bVar8 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4942768438637494323>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                     ,0x33,"AttributePtr.IsValid()");
  pTVar7 = pTVar6;
  iVar4 = 0;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
LAB_14e43a91f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return iVar4;
}

// GetIndexKey @ 14e43c550

FAttributeKey * __thiscall
UE::Interchange::TArrayAttributeHelper<int>::GetIndexKey
          (TArrayAttributeHelper<int> *this,FAttributeKey *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FAttributeKey *pFVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_48,param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<int>::IndexKey(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<int>::IndexKey(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<int>::IndexKey(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<int>::IndexKey(void)'
                          ::__l2::IndexKeyString,L"_NameIndex_");
      atexit(`UE::Interchange::TArrayAttributeHelper<int>::IndexKey'::__l2::
             _dynamic_atexit_destructor_for__IndexKeyString__);
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<int>::IndexKey(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if ((this->KeyCount).Key.Data.ArrayNum < 2) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494551>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x117,"!KeyCount.Key.IsEmpty()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAttributeKey *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_18,&(this->KeyCount).Key);
  ::FString::ConcatFF(&local_28,&local_18,
                      &`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<int>::IndexKey(void)'
                       ::__l2::IndexKeyString);
  ::FString::ConcatFF(&local_38,&local_28,&local_48);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Key).Data.ArrayMax;
  (__return_storage_ptr__->Key).Data.ArrayNum = 0;
  *piVar1 = 0;
  if (&__return_storage_ptr__->Key != &local_38) {
    (__return_storage_ptr__->Key).Data.ArrayNum = local_38.Data.ArrayNum;
    if (local_38.Data.ArrayNum != 0) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                 local_38.Data.ArrayNum,piVar1);
      memcpy((__return_storage_ptr__->Key).Data.AllocatorInstance.Data,_Src.Data,
             (longlong)local_38.Data.ArrayNum * 2);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetIndexKey @ 14e43c720

FAttributeKey * __thiscall
UE::Interchange::TArrayAttributeHelper<float>::GetIndexKey
          (TArrayAttributeHelper<float> *this,FAttributeKey *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FAttributeKey *pFVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_48,param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<float>::IndexKey(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<float>::IndexKey(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<float>::IndexKey(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<float>::IndexKey(void)'
                          ::__l2::IndexKeyString,L"_NameIndex_");
      atexit(`UE::Interchange::TArrayAttributeHelper<float>::IndexKey'::__l2::
             _dynamic_atexit_destructor_for__IndexKeyString__);
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<float>::IndexKey(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if ((this->KeyCount).Key.Data.ArrayNum < 2) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494551>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x117,"!KeyCount.Key.IsEmpty()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAttributeKey *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_18,&(this->KeyCount).Key);
  ::FString::ConcatFF(&local_28,&local_18,
                      &`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<float>::IndexKey(void)'
                       ::__l2::IndexKeyString);
  ::FString::ConcatFF(&local_38,&local_28,&local_48);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Key).Data.ArrayMax;
  (__return_storage_ptr__->Key).Data.ArrayNum = 0;
  *piVar1 = 0;
  if (&__return_storage_ptr__->Key != &local_38) {
    (__return_storage_ptr__->Key).Data.ArrayNum = local_38.Data.ArrayNum;
    if (local_38.Data.ArrayNum != 0) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                 local_38.Data.ArrayNum,piVar1);
      memcpy((__return_storage_ptr__->Key).Data.AllocatorInstance.Data,_Src.Data,
             (longlong)local_38.Data.ArrayNum * 2);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetIndexKey @ 14e43c8f0

FAttributeKey * __thiscall
UE::Interchange::TArrayAttributeHelper<double>::GetIndexKey
          (TArrayAttributeHelper<double> *this,FAttributeKey *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FAttributeKey *pFVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_48,param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<double>::IndexKey(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<double>::IndexKey(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<double>::IndexKey(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<double>::IndexKey(void)'
                          ::__l2::IndexKeyString,L"_NameIndex_");
      atexit(`UE::Interchange::TArrayAttributeHelper<double>::IndexKey'::__l2::
             _dynamic_atexit_destructor_for__IndexKeyString__);
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<double>::IndexKey(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if ((this->KeyCount).Key.Data.ArrayNum < 2) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494551>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x117,"!KeyCount.Key.IsEmpty()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAttributeKey *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_18,&(this->KeyCount).Key);
  ::FString::ConcatFF(&local_28,&local_18,
                      &`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<double>::IndexKey(void)'
                       ::__l2::IndexKeyString);
  ::FString::ConcatFF(&local_38,&local_28,&local_48);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Key).Data.ArrayMax;
  (__return_storage_ptr__->Key).Data.ArrayNum = 0;
  *piVar1 = 0;
  if (&__return_storage_ptr__->Key != &local_38) {
    (__return_storage_ptr__->Key).Data.ArrayNum = local_38.Data.ArrayNum;
    if (local_38.Data.ArrayNum != 0) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                 local_38.Data.ArrayNum,piVar1);
      memcpy((__return_storage_ptr__->Key).Data.AllocatorInstance.Data,_Src.Data,
             (longlong)local_38.Data.ArrayNum * 2);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetIndexKey @ 14e43cac0

FAttributeKey * __thiscall
UE::Interchange::TArrayAttributeHelper<FString>::GetIndexKey
          (TArrayAttributeHelper<FString> *this,FAttributeKey *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FAttributeKey *pFVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_48,param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::IndexKey(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::IndexKey(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::IndexKey(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::IndexKey(void)'
                          ::__l2::IndexKeyString,L"_NameIndex_");
      atexit(`UE::Interchange::TArrayAttributeHelper<FString>::IndexKey'::__l2::
             _dynamic_atexit_destructor_for__IndexKeyString__);
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::IndexKey(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if ((this->KeyCount).Key.Data.ArrayNum < 2) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494551>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x117,"!KeyCount.Key.IsEmpty()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAttributeKey *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_18,&(this->KeyCount).Key);
  ::FString::ConcatFF(&local_28,&local_18,
                      &`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::IndexKey(void)'
                       ::__l2::IndexKeyString);
  ::FString::ConcatFF(&local_38,&local_28,&local_48);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Key).Data.ArrayMax;
  (__return_storage_ptr__->Key).Data.ArrayNum = 0;
  *piVar1 = 0;
  if (&__return_storage_ptr__->Key != &local_38) {
    (__return_storage_ptr__->Key).Data.ArrayNum = local_38.Data.ArrayNum;
    if (local_38.Data.ArrayNum != 0) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                 local_38.Data.ArrayNum,piVar1);
      memcpy((__return_storage_ptr__->Key).Data.AllocatorInstance.Data,_Src.Data,
             (longlong)local_38.Data.ArrayNum * 2);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetItem @ 14e43cff0

void __thiscall
UE::Interchange::TArrayAttributeHelper<int>::GetItem
          (TArrayAttributeHelper<int> *this,int param_1,int *param_2)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  EAttributeTypes EVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  int local_res8 [2];
  FString local_88;
  FString local_78;
  FAttributeKey local_68;
  TAttributeHandle<int,void> local_58;
  TAttributeHandle<int,void> local_40;
  
  pTVar5 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e43d040;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this_00 = (this->Attributes).Object;
    if (this_00 != (FAttributeStorage *)0x0) {
      local_res8[0] = 0;
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4942768438637494551>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x117,"!KeyCount.Key.IsEmpty()"), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ::FString::FString(&local_88,&(this->KeyCount).Key);
      bVar6 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
           (bVar6 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4942768438637494551>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                               ,0x117,"!KeyCount.Key.IsEmpty()"), bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::FString::FString(&local_78,&(this->KeyCount).Key);
        FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                  (&local_40,(FAttributeKey *)&local_78,this_00);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (((local_40.AttributeStorage != (FAttributeStorage *)0x0) &&
            (bVar6 = FAttributeStorage::ContainAttribute(local_40.AttributeStorage,&local_40.Key),
            bVar6)) &&
           (EVar4 = FAttributeStorage::GetAttributeType(local_40.AttributeStorage,&local_40.Key),
           EVar4 == Int32)) {
          if (local_40.AttributeStorage != (FAttributeStorage *)0x0) {
            FAttributeStorage::GetAttribute<int,void>
                      (local_40.AttributeStorage,&local_40.Key,local_res8);
          }
          if (param_1 < local_res8[0]) {
            GetIndexKey(this,&local_68,param_1);
            FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                      (&local_58,&local_68,this_00);
            if (((local_58.AttributeStorage != (FAttributeStorage *)0x0) &&
                (bVar6 = FAttributeStorage::ContainAttribute
                                   (local_58.AttributeStorage,&local_58.Key), bVar6)) &&
               ((EVar4 = FAttributeStorage::GetAttributeType
                                   (local_58.AttributeStorage,&local_58.Key), EVar4 == Int32 &&
                (local_58.AttributeStorage != (FAttributeStorage *)0x0)))) {
              FAttributeStorage::GetAttribute<int,void>
                        (local_58.AttributeStorage,&local_58.Key,param_2);
            }
            if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
            }
          }
        }
        if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14e43d06d;
    }
  }
LAB_14e43d040:
  bVar6 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4942768438637494343>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                     ,0x47,"AttributePtr.IsValid()");
  if (bVar6) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14e43d06d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// GetItem @ 14e43d260

void __thiscall
UE::Interchange::TArrayAttributeHelper<float>::GetItem
          (TArrayAttributeHelper<float> *this,int param_1,float *param_2)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  EAttributeTypes EVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  int local_res8 [2];
  FString local_88;
  FString local_78;
  FAttributeKey local_68;
  TAttributeHandle<float,void> local_58;
  TAttributeHandle<int,void> local_40;
  
  pTVar5 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e43d2b0;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this_00 = (this->Attributes).Object;
    if (this_00 != (FAttributeStorage *)0x0) {
      local_res8[0] = 0;
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4942768438637494551>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x117,"!KeyCount.Key.IsEmpty()"), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ::FString::FString(&local_88,&(this->KeyCount).Key);
      bVar6 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
           (bVar6 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4942768438637494551>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                               ,0x117,"!KeyCount.Key.IsEmpty()"), bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::FString::FString(&local_78,&(this->KeyCount).Key);
        FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                  (&local_40,(FAttributeKey *)&local_78,this_00);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (((local_40.AttributeStorage != (FAttributeStorage *)0x0) &&
            (bVar6 = FAttributeStorage::ContainAttribute(local_40.AttributeStorage,&local_40.Key),
            bVar6)) &&
           (EVar4 = FAttributeStorage::GetAttributeType(local_40.AttributeStorage,&local_40.Key),
           EVar4 == Int32)) {
          if (local_40.AttributeStorage != (FAttributeStorage *)0x0) {
            FAttributeStorage::GetAttribute<int,void>
                      (local_40.AttributeStorage,&local_40.Key,local_res8);
          }
          if (param_1 < local_res8[0]) {
            GetIndexKey(this,&local_68,param_1);
            FAttributeStorage::TAttributeHandle<float,void>::TAttributeHandle<float,void>
                      (&local_58,&local_68,this_00);
            if (((local_58.AttributeStorage != (FAttributeStorage *)0x0) &&
                (bVar6 = FAttributeStorage::ContainAttribute
                                   (local_58.AttributeStorage,&local_58.Key), bVar6)) &&
               ((EVar4 = FAttributeStorage::GetAttributeType
                                   (local_58.AttributeStorage,&local_58.Key), EVar4 == Float &&
                (local_58.AttributeStorage != (FAttributeStorage *)0x0)))) {
              FAttributeStorage::GetAttribute<float,void>
                        (local_58.AttributeStorage,&local_58.Key,param_2);
            }
            if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
            }
          }
        }
        if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14e43d2dd;
    }
  }
LAB_14e43d2b0:
  bVar6 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4942768438637494343>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                     ,0x47,"AttributePtr.IsValid()");
  if (bVar6) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14e43d2dd:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// GetItem @ 14e43d4d0

void __thiscall
UE::Interchange::TArrayAttributeHelper<double>::GetItem
          (TArrayAttributeHelper<double> *this,int param_1,double *param_2)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  EAttributeTypes EVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  int local_res8 [2];
  FString local_88;
  FString local_78;
  FAttributeKey local_68;
  TAttributeHandle<double,void> local_58;
  TAttributeHandle<int,void> local_40;
  
  pTVar5 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e43d520;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this_00 = (this->Attributes).Object;
    if (this_00 != (FAttributeStorage *)0x0) {
      local_res8[0] = 0;
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4942768438637494551>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x117,"!KeyCount.Key.IsEmpty()"), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ::FString::FString(&local_88,&(this->KeyCount).Key);
      bVar6 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
           (bVar6 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4942768438637494551>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                               ,0x117,"!KeyCount.Key.IsEmpty()"), bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::FString::FString(&local_78,&(this->KeyCount).Key);
        FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                  (&local_40,(FAttributeKey *)&local_78,this_00);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (((local_40.AttributeStorage != (FAttributeStorage *)0x0) &&
            (bVar6 = FAttributeStorage::ContainAttribute(local_40.AttributeStorage,&local_40.Key),
            bVar6)) &&
           (EVar4 = FAttributeStorage::GetAttributeType(local_40.AttributeStorage,&local_40.Key),
           EVar4 == Int32)) {
          if (local_40.AttributeStorage != (FAttributeStorage *)0x0) {
            FAttributeStorage::GetAttribute<int,void>
                      (local_40.AttributeStorage,&local_40.Key,local_res8);
          }
          if (param_1 < local_res8[0]) {
            GetIndexKey(this,&local_68,param_1);
            FAttributeStorage::TAttributeHandle<double,void>::TAttributeHandle<double,void>
                      (&local_58,&local_68,this_00);
            if (((local_58.AttributeStorage != (FAttributeStorage *)0x0) &&
                (bVar6 = FAttributeStorage::ContainAttribute
                                   (local_58.AttributeStorage,&local_58.Key), bVar6)) &&
               ((EVar4 = FAttributeStorage::GetAttributeType
                                   (local_58.AttributeStorage,&local_58.Key), EVar4 == Double &&
                (local_58.AttributeStorage != (FAttributeStorage *)0x0)))) {
              FAttributeStorage::GetAttribute<double,void>
                        (local_58.AttributeStorage,&local_58.Key,param_2);
            }
            if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
            }
          }
        }
        if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14e43d54d;
    }
  }
LAB_14e43d520:
  bVar6 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4942768438637494343>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                     ,0x47,"AttributePtr.IsValid()");
  if (bVar6) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14e43d54d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// GetItem @ 14e43d740

void __thiscall
UE::Interchange::TArrayAttributeHelper<FString>::GetItem
          (TArrayAttributeHelper<FString> *this,int param_1,FString *param_2)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  EAttributeTypes EVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  int local_res8 [2];
  FString local_88;
  FString local_78;
  FAttributeKey local_68;
  TAttributeHandle<FString,void> local_58;
  TAttributeHandle<int,void> local_40;
  
  pTVar5 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e43d790;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this_00 = (this->Attributes).Object;
    if (this_00 != (FAttributeStorage *)0x0) {
      local_res8[0] = 0;
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4942768438637494551>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x117,"!KeyCount.Key.IsEmpty()"), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ::FString::FString(&local_88,&(this->KeyCount).Key);
      bVar6 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
           (bVar6 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4942768438637494551>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                               ,0x117,"!KeyCount.Key.IsEmpty()"), bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::FString::FString(&local_78,&(this->KeyCount).Key);
        FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                  (&local_40,(FAttributeKey *)&local_78,this_00);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (((local_40.AttributeStorage != (FAttributeStorage *)0x0) &&
            (bVar6 = FAttributeStorage::ContainAttribute(local_40.AttributeStorage,&local_40.Key),
            bVar6)) &&
           (EVar4 = FAttributeStorage::GetAttributeType(local_40.AttributeStorage,&local_40.Key),
           EVar4 == Int32)) {
          if (local_40.AttributeStorage != (FAttributeStorage *)0x0) {
            FAttributeStorage::GetAttribute<int,void>
                      (local_40.AttributeStorage,&local_40.Key,local_res8);
          }
          if (param_1 < local_res8[0]) {
            GetIndexKey(this,&local_68,param_1);
            FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
                      (&local_58,&local_68,this_00);
            if (((local_58.AttributeStorage != (FAttributeStorage *)0x0) &&
                (bVar6 = FAttributeStorage::ContainAttribute
                                   (local_58.AttributeStorage,&local_58.Key), bVar6)) &&
               ((EVar4 = FAttributeStorage::GetAttributeType
                                   (local_58.AttributeStorage,&local_58.Key), EVar4 == String &&
                (local_58.AttributeStorage != (FAttributeStorage *)0x0)))) {
              FAttributeStorage::GetAttribute<FString,void>
                        (local_58.AttributeStorage,&local_58.Key,param_2);
            }
            if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
            }
          }
        }
        if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14e43d7bd;
    }
  }
LAB_14e43d790:
  bVar6 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4942768438637494343>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                     ,0x47,"AttributePtr.IsValid()");
  if (bVar6) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14e43d7bd:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// GetItems @ 14e43d9b0

void __thiscall
UE::Interchange::TArrayAttributeHelper<int>::GetItems
          (TArrayAttributeHelper<int> *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FAttributeStorage *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  uint uVar5;
  atomic<int> aVar6;
  EAttributeTypes EVar7;
  int iVar8;
  uint uVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  uint local_res8 [2];
  FAttributeKey local_88;
  FString local_78;
  FString local_68;
  TAttributeHandle<int,void> local_58;
  TAttributeHandle<int,void> local_40;
  
  pTVar12 = (this->Attributes).WeakReferenceCount.ReferenceController;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  pTVar11 = pTVar12;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e43da06:
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494376>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x68,"AttributePtr.IsValid()");
    pTVar12 = pTVar11;
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    aVar4 = pTVar12->SharedReferenceCount;
    do {
      pTVar11 = pTVar10;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14e43da06;
      LOCK();
      aVar6 = pTVar12->SharedReferenceCount;
      bVar13 = aVar4 == aVar6;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar13);
    this_00 = (this->Attributes).Object;
    pTVar11 = pTVar12;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e43da06;
    local_res8[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::FString::FString(&local_78,&(this->KeyCount).Key);
    bVar13 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_78);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar13 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::FString(&local_68,&(this->KeyCount).Key);
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_40,(FAttributeKey *)&local_68,this_00);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (((local_40.AttributeStorage != (FAttributeStorage *)0x0) &&
          (bVar13 = FAttributeStorage::ContainAttribute(local_40.AttributeStorage,&local_40.Key),
          bVar13)) &&
         (EVar7 = FAttributeStorage::GetAttributeType(local_40.AttributeStorage,&local_40.Key),
         EVar7 == Int32)) {
        if (local_40.AttributeStorage != (FAttributeStorage *)0x0) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_40.AttributeStorage,&local_40.Key,(int *)local_res8);
        }
        uVar5 = local_res8[0];
        if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
        }
        piVar1 = &param_1->ArrayMax;
        param_1->ArrayNum = 0;
        if (param_1->ArrayMax < (int)local_res8[0]) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_res8[0],&param_1->AllocatorInstance,0,piVar1);
        }
        if (0 < (int)uVar5) {
          do {
            GetIndexKey(this,&local_88,(int)pTVar10);
            FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                      (&local_58,&local_88,this_00);
            if (((local_58.AttributeStorage != (FAttributeStorage *)0x0) &&
                (bVar13 = FAttributeStorage::ContainAttribute
                                    (local_58.AttributeStorage,&local_58.Key), bVar13)) &&
               (EVar7 = FAttributeStorage::GetAttributeType(local_58.AttributeStorage,&local_58.Key)
               , EVar7 == Int32)) {
              iVar8 = param_1->ArrayNum;
              if (iVar8 == *piVar1) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_1->AllocatorInstance,piVar1);
              }
              param_1->ArrayNum = iVar8 + 1;
              pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 4;
              *(int *)pFVar2 = 0;
              if (local_58.AttributeStorage != (FAttributeStorage *)0x0) {
                FAttributeStorage::GetAttribute<int,void>
                          (local_58.AttributeStorage,&local_58.Key,(int *)pFVar2);
              }
            }
            if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
            }
            uVar9 = (int)pTVar10 + 1;
            pTVar10 = (TReferenceControllerBase<1> *)(ulonglong)uVar9;
          } while ((int)uVar9 < (int)uVar5);
        }
      }
      if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e43da59;
    }
  }
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
LAB_14e43da59:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// GetItems @ 14e43dcd0

void __thiscall
UE::Interchange::TArrayAttributeHelper<float>::GetItems
          (TArrayAttributeHelper<float> *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FAttributeStorage *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  uint uVar5;
  atomic<int> aVar6;
  EAttributeTypes EVar7;
  int iVar8;
  uint uVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  uint local_res8 [2];
  FAttributeKey local_88;
  FString local_78;
  FString local_68;
  TAttributeHandle<float,void> local_58;
  TAttributeHandle<int,void> local_40;
  
  pTVar12 = (this->Attributes).WeakReferenceCount.ReferenceController;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  pTVar11 = pTVar12;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e43dd26:
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494376>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x68,"AttributePtr.IsValid()");
    pTVar12 = pTVar11;
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    aVar4 = pTVar12->SharedReferenceCount;
    do {
      pTVar11 = pTVar10;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14e43dd26;
      LOCK();
      aVar6 = pTVar12->SharedReferenceCount;
      bVar13 = aVar4 == aVar6;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar13);
    this_00 = (this->Attributes).Object;
    pTVar11 = pTVar12;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e43dd26;
    local_res8[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::FString::FString(&local_78,&(this->KeyCount).Key);
    bVar13 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_78);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar13 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::FString(&local_68,&(this->KeyCount).Key);
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_40,(FAttributeKey *)&local_68,this_00);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (((local_40.AttributeStorage != (FAttributeStorage *)0x0) &&
          (bVar13 = FAttributeStorage::ContainAttribute(local_40.AttributeStorage,&local_40.Key),
          bVar13)) &&
         (EVar7 = FAttributeStorage::GetAttributeType(local_40.AttributeStorage,&local_40.Key),
         EVar7 == Int32)) {
        if (local_40.AttributeStorage != (FAttributeStorage *)0x0) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_40.AttributeStorage,&local_40.Key,(int *)local_res8);
        }
        uVar5 = local_res8[0];
        if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
        }
        piVar1 = &param_1->ArrayMax;
        param_1->ArrayNum = 0;
        if (param_1->ArrayMax < (int)local_res8[0]) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_res8[0],&param_1->AllocatorInstance,0,piVar1);
        }
        if (0 < (int)uVar5) {
          do {
            GetIndexKey(this,&local_88,(int)pTVar10);
            FAttributeStorage::TAttributeHandle<float,void>::TAttributeHandle<float,void>
                      (&local_58,&local_88,this_00);
            if (((local_58.AttributeStorage != (FAttributeStorage *)0x0) &&
                (bVar13 = FAttributeStorage::ContainAttribute
                                    (local_58.AttributeStorage,&local_58.Key), bVar13)) &&
               (EVar7 = FAttributeStorage::GetAttributeType(local_58.AttributeStorage,&local_58.Key)
               , EVar7 == Float)) {
              iVar8 = param_1->ArrayNum;
              if (iVar8 == *piVar1) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_1->AllocatorInstance,piVar1);
              }
              param_1->ArrayNum = iVar8 + 1;
              pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 4;
              *(float *)pFVar2 = 0.0;
              if (local_58.AttributeStorage != (FAttributeStorage *)0x0) {
                FAttributeStorage::GetAttribute<float,void>
                          (local_58.AttributeStorage,&local_58.Key,(float *)pFVar2);
              }
            }
            if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
            }
            uVar9 = (int)pTVar10 + 1;
            pTVar10 = (TReferenceControllerBase<1> *)(ulonglong)uVar9;
          } while ((int)uVar9 < (int)uVar5);
        }
      }
      if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e43dd79;
    }
  }
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
LAB_14e43dd79:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// GetItems @ 14e43dff0

void __thiscall
UE::Interchange::TArrayAttributeHelper<double>::GetItems
          (TArrayAttributeHelper<double> *this,TArray<double,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FAttributeStorage *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  uint uVar5;
  atomic<int> aVar6;
  EAttributeTypes EVar7;
  int iVar8;
  uint uVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  uint local_res8 [2];
  FAttributeKey local_88;
  FString local_78;
  FString local_68;
  TAttributeHandle<double,void> local_58;
  TAttributeHandle<int,void> local_40;
  
  pTVar12 = (this->Attributes).WeakReferenceCount.ReferenceController;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  pTVar11 = pTVar12;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e43e046:
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494376>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x68,"AttributePtr.IsValid()");
    pTVar12 = pTVar11;
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    aVar4 = pTVar12->SharedReferenceCount;
    do {
      pTVar11 = pTVar10;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14e43e046;
      LOCK();
      aVar6 = pTVar12->SharedReferenceCount;
      bVar13 = aVar4 == aVar6;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar13);
    this_00 = (this->Attributes).Object;
    pTVar11 = pTVar12;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e43e046;
    local_res8[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::FString::FString(&local_78,&(this->KeyCount).Key);
    bVar13 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_78);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar13 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::FString(&local_68,&(this->KeyCount).Key);
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_40,(FAttributeKey *)&local_68,this_00);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (((local_40.AttributeStorage != (FAttributeStorage *)0x0) &&
          (bVar13 = FAttributeStorage::ContainAttribute(local_40.AttributeStorage,&local_40.Key),
          bVar13)) &&
         (EVar7 = FAttributeStorage::GetAttributeType(local_40.AttributeStorage,&local_40.Key),
         EVar7 == Int32)) {
        if (local_40.AttributeStorage != (FAttributeStorage *)0x0) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_40.AttributeStorage,&local_40.Key,(int *)local_res8);
        }
        uVar5 = local_res8[0];
        if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
        }
        piVar1 = &param_1->ArrayMax;
        param_1->ArrayNum = 0;
        if (param_1->ArrayMax < (int)local_res8[0]) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_res8[0],&param_1->AllocatorInstance,0,piVar1);
        }
        if (0 < (int)uVar5) {
          do {
            GetIndexKey(this,&local_88,(int)pTVar10);
            FAttributeStorage::TAttributeHandle<double,void>::TAttributeHandle<double,void>
                      (&local_58,&local_88,this_00);
            if (((local_58.AttributeStorage != (FAttributeStorage *)0x0) &&
                (bVar13 = FAttributeStorage::ContainAttribute
                                    (local_58.AttributeStorage,&local_58.Key), bVar13)) &&
               (EVar7 = FAttributeStorage::GetAttributeType(local_58.AttributeStorage,&local_58.Key)
               , EVar7 == Double)) {
              iVar8 = param_1->ArrayNum;
              if (iVar8 == *piVar1) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&param_1->AllocatorInstance,piVar1);
              }
              param_1->ArrayNum = iVar8 + 1;
              pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 8;
              *(double *)pFVar2 = 0.0;
              if (local_58.AttributeStorage != (FAttributeStorage *)0x0) {
                FAttributeStorage::GetAttribute<double,void>
                          (local_58.AttributeStorage,&local_58.Key,(double *)pFVar2);
              }
            }
            if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
            }
            uVar9 = (int)pTVar10 + 1;
            pTVar10 = (TReferenceControllerBase<1> *)(ulonglong)uVar9;
          } while ((int)uVar9 < (int)uVar5);
        }
      }
      if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e43e099;
    }
  }
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
LAB_14e43e099:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// GetItems @ 14e43e310

void __thiscall
UE::Interchange::TArrayAttributeHelper<FString>::GetItems
          (TArrayAttributeHelper<FString> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int *piVar1;
  FAttributeStorage *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  EAttributeTypes EVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  uint local_res8 [2];
  FAttributeKey local_98;
  FString local_88;
  FString local_78;
  TAttributeHandle<FString,void> local_68;
  TAttributeHandle<int,void> local_50;
  
  pTVar12 = (this->Attributes).WeakReferenceCount.ReferenceController;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar11 = pTVar12;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e43e366:
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494376>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x68,"AttributePtr.IsValid()");
    pTVar12 = pTVar11;
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    aVar3 = pTVar12->SharedReferenceCount;
    do {
      pTVar11 = pTVar9;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e43e366;
      LOCK();
      aVar4 = pTVar12->SharedReferenceCount;
      bVar13 = aVar3 == aVar4;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar13);
    this_00 = (this->Attributes).Object;
    pTVar11 = pTVar12;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e43e366;
    local_res8[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FString::FString(&local_88,&(this->KeyCount).Key);
    bVar13 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_88);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar13 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()"), bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FString::FString(&local_78,&(this->KeyCount).Key);
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_50,(FAttributeKey *)&local_78,this_00);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (((local_50.AttributeStorage != (FAttributeStorage *)0x0) &&
          (bVar13 = FAttributeStorage::ContainAttribute(local_50.AttributeStorage,&local_50.Key),
          bVar13)) &&
         (EVar5 = FAttributeStorage::GetAttributeType(local_50.AttributeStorage,&local_50.Key),
         EVar5 == Int32)) {
        uVar7 = 0;
        if (local_50.AttributeStorage != (FAttributeStorage *)0x0) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_50.AttributeStorage,&local_50.Key,(int *)local_res8);
          uVar7 = local_res8[0];
        }
        if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
        }
        piVar1 = &param_1->ArrayMax;
        pFVar10 = (param_1->AllocatorInstance).Data;
        if (*piVar1 < (int)uVar7) {
          DestructItems<FString,int>((FString *)pFVar10,param_1->ArrayNum);
          param_1->ArrayNum = 0;
          if (*piVar1 != uVar7) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar7,&param_1->AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<FString,int>((FString *)pFVar10,param_1->ArrayNum);
          param_1->ArrayNum = 0;
        }
        if (0 < (int)uVar7) {
          do {
            GetIndexKey(this,&local_98,(int)pTVar9);
            FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
                      (&local_68,&local_98,this_00);
            if (((local_68.AttributeStorage != (FAttributeStorage *)0x0) &&
                (bVar13 = FAttributeStorage::ContainAttribute
                                    (local_68.AttributeStorage,&local_68.Key), bVar13)) &&
               (EVar5 = FAttributeStorage::GetAttributeType(local_68.AttributeStorage,&local_68.Key)
               , EVar5 == String)) {
              iVar6 = param_1->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_1->AllocatorInstance,piVar1);
              }
              pFVar10 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
              param_1->ArrayNum = iVar6 + 1;
              *(undefined8 *)&pFVar10->field_0x0 = 0;
              *(undefined8 *)(pFVar10 + 8) = 0;
              if (local_68.AttributeStorage != (FAttributeStorage *)0x0) {
                FAttributeStorage::GetAttribute<FString,void>
                          (local_68.AttributeStorage,&local_68.Key,(FString *)pFVar10);
              }
            }
            if (local_68.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
            }
            uVar8 = (int)pTVar9 + 1;
            pTVar9 = (TReferenceControllerBase<1> *)(ulonglong)uVar8;
          } while ((int)uVar8 < (int)uVar7);
        }
      }
      if (local_50.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e43e3c7;
    }
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
LAB_14e43e3c7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// GetKeyCount @ 14e43f750

FAttributeKey * __thiscall
UE::Interchange::TArrayAttributeHelper<int>::GetKeyCount
          (TArrayAttributeHelper<int> *this,FAttributeKey *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FAttributeKey *pFVar3;
  
  if ((this->KeyCount).Key.Data.ArrayNum < 2) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494551>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x117,"!KeyCount.Key.IsEmpty()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAttributeKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(&__return_storage_ptr__->Key,&(this->KeyCount).Key);
  return __return_storage_ptr__;
}

// GetKeyCount @ 14e43f7c0

FAttributeKey * __thiscall
UE::Interchange::TArrayAttributeHelper<float>::GetKeyCount
          (TArrayAttributeHelper<float> *this,FAttributeKey *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FAttributeKey *pFVar3;
  
  if ((this->KeyCount).Key.Data.ArrayNum < 2) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494551>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x117,"!KeyCount.Key.IsEmpty()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAttributeKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(&__return_storage_ptr__->Key,&(this->KeyCount).Key);
  return __return_storage_ptr__;
}

// GetKeyCount @ 14e43f830

FAttributeKey * __thiscall
UE::Interchange::TArrayAttributeHelper<double>::GetKeyCount
          (TArrayAttributeHelper<double> *this,FAttributeKey *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FAttributeKey *pFVar3;
  
  if ((this->KeyCount).Key.Data.ArrayNum < 2) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494551>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x117,"!KeyCount.Key.IsEmpty()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAttributeKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(&__return_storage_ptr__->Key,&(this->KeyCount).Key);
  return __return_storage_ptr__;
}

// GetKeyCount @ 14e43f8a0

FAttributeKey * __thiscall
UE::Interchange::TArrayAttributeHelper<FString>::GetKeyCount
          (TArrayAttributeHelper<FString> *this,FAttributeKey *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FAttributeKey *pFVar3;
  
  if ((this->KeyCount).Key.Data.ArrayNum < 2) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494551>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x117,"!KeyCount.Key.IsEmpty()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAttributeKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(&__return_storage_ptr__->Key,&(this->KeyCount).Key);
  return __return_storage_ptr__;
}

// Initialize @ 14e446c90

void __thiscall
UE::Interchange::TArrayAttributeHelper<FString>::Initialize
          (TArrayAttributeHelper<FString> *this,
          TSharedPtr<UE::Interchange::FAttributeStorage,1> *param_1,FString *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name34,L"Interchange");
      _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name34,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<FString>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name34,true);
  if (param_1->Object == (FAttributeStorage *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAttributes.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x24,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (this->Attributes).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->Attributes).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->Attributes).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->Attributes).WeakReferenceCount.ReferenceController = pTVar3;
  }
  ::FString::operator=(&(this->KeyCount).Key,param_2);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RemoveAllItems @ 14e451da0

bool __thiscall
UE::Interchange::TArrayAttributeHelper<int>::RemoveAllItems(TArrayAttributeHelper<int> *this)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  EAttributeTypes EVar5;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar6;
  FAttributeAllocationInfo *pFVar7;
  uint uVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  FAttributeStorage *this_01;
  bool bVar11;
  int local_res8 [2];
  FString local_78;
  FString local_68;
  FAttributeKey local_58;
  TAttributeHandle<int,void> local_48;
  
  pTVar10 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e451de9:
    bVar11 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494518>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0xf6,"AttributePtr.IsValid()");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    aVar2 = pTVar10->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e451de9;
      }
      LOCK();
      aVar4 = pTVar10->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    this_00 = (this->Attributes).Object;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e451de9;
    local_res8[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar11)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::FString(&local_78,&(this->KeyCount).Key);
    bVar11 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_78);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar11 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()"), bVar11)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::FString(&local_68,&(this->KeyCount).Key);
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_48,(FAttributeKey *)&local_68,this_00);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (((local_48.AttributeStorage == (FAttributeStorage *)0x0) ||
          (bVar11 = FAttributeStorage::ContainAttribute(local_48.AttributeStorage,&local_48.Key),
          !bVar11)) ||
         (EVar5 = FAttributeStorage::GetAttributeType(local_48.AttributeStorage,&local_48.Key),
         EVar5 != Int32)) {
        bVar11 = false;
      }
      else {
        iVar9 = 0;
        if (local_48.AttributeStorage != (FAttributeStorage *)0x0) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_48.AttributeStorage,&local_48.Key,local_res8);
          iVar9 = local_res8[0];
        }
        pFVar7 = (FAttributeAllocationInfo *)0x0;
        this_01 = local_48.AttributeStorage;
        if (0 < iVar9) {
          do {
            GetIndexKey(this,&local_58,(int)pFVar7);
            FAttributeStorage::UnregisterAttribute(this_00,&local_58);
            if (local_58.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Key.Data.AllocatorInstance.Data);
            }
            uVar8 = (int)pFVar7 + 1;
            pFVar7 = (FAttributeAllocationInfo *)(ulonglong)uVar8;
            this_01 = local_48.AttributeStorage;
          } while ((int)uVar8 < iVar9);
        }
        local_res8[0] = 0;
        if (this_01 != (FAttributeStorage *)0x0) {
          pTVar6 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)this_01,&local_48.Key);
          pFVar7 = (FAttributeAllocationInfo *)&pTVar6->field_0x10;
          if (pTVar6 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                         *)0x0) {
            pFVar7 = (FAttributeAllocationInfo *)0x0;
          }
          FAttributeStorage::SetAttribute<int>(this_01,pFVar7,local_res8);
        }
        bVar11 = true;
      }
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e451e18;
    }
  }
  bVar11 = false;
LAB_14e451e18:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return bVar11;
}

// RemoveAllItems @ 14e452010

bool __thiscall
UE::Interchange::TArrayAttributeHelper<float>::RemoveAllItems(TArrayAttributeHelper<float> *this)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  EAttributeTypes EVar5;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar6;
  FAttributeAllocationInfo *pFVar7;
  uint uVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  FAttributeStorage *this_01;
  bool bVar11;
  int local_res8 [2];
  FString local_78;
  FString local_68;
  FAttributeKey local_58;
  TAttributeHandle<int,void> local_48;
  
  pTVar10 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e452059:
    bVar11 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494518>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0xf6,"AttributePtr.IsValid()");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    aVar2 = pTVar10->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e452059;
      }
      LOCK();
      aVar4 = pTVar10->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    this_00 = (this->Attributes).Object;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e452059;
    local_res8[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar11)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::FString(&local_78,&(this->KeyCount).Key);
    bVar11 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_78);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar11 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()"), bVar11)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::FString(&local_68,&(this->KeyCount).Key);
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_48,(FAttributeKey *)&local_68,this_00);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (((local_48.AttributeStorage == (FAttributeStorage *)0x0) ||
          (bVar11 = FAttributeStorage::ContainAttribute(local_48.AttributeStorage,&local_48.Key),
          !bVar11)) ||
         (EVar5 = FAttributeStorage::GetAttributeType(local_48.AttributeStorage,&local_48.Key),
         EVar5 != Int32)) {
        bVar11 = false;
      }
      else {
        iVar9 = 0;
        if (local_48.AttributeStorage != (FAttributeStorage *)0x0) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_48.AttributeStorage,&local_48.Key,local_res8);
          iVar9 = local_res8[0];
        }
        pFVar7 = (FAttributeAllocationInfo *)0x0;
        this_01 = local_48.AttributeStorage;
        if (0 < iVar9) {
          do {
            GetIndexKey(this,&local_58,(int)pFVar7);
            FAttributeStorage::UnregisterAttribute(this_00,&local_58);
            if (local_58.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Key.Data.AllocatorInstance.Data);
            }
            uVar8 = (int)pFVar7 + 1;
            pFVar7 = (FAttributeAllocationInfo *)(ulonglong)uVar8;
            this_01 = local_48.AttributeStorage;
          } while ((int)uVar8 < iVar9);
        }
        local_res8[0] = 0;
        if (this_01 != (FAttributeStorage *)0x0) {
          pTVar6 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)this_01,&local_48.Key);
          pFVar7 = (FAttributeAllocationInfo *)&pTVar6->field_0x10;
          if (pTVar6 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                         *)0x0) {
            pFVar7 = (FAttributeAllocationInfo *)0x0;
          }
          FAttributeStorage::SetAttribute<int>(this_01,pFVar7,local_res8);
        }
        bVar11 = true;
      }
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e452088;
    }
  }
  bVar11 = false;
LAB_14e452088:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return bVar11;
}

// RemoveAllItems @ 14e452280

bool __thiscall
UE::Interchange::TArrayAttributeHelper<double>::RemoveAllItems(TArrayAttributeHelper<double> *this)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  EAttributeTypes EVar5;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar6;
  FAttributeAllocationInfo *pFVar7;
  uint uVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  FAttributeStorage *this_01;
  bool bVar11;
  int local_res8 [2];
  FString local_78;
  FString local_68;
  FAttributeKey local_58;
  TAttributeHandle<int,void> local_48;
  
  pTVar10 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e4522c9:
    bVar11 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494518>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0xf6,"AttributePtr.IsValid()");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    aVar2 = pTVar10->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e4522c9;
      }
      LOCK();
      aVar4 = pTVar10->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    this_00 = (this->Attributes).Object;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e4522c9;
    local_res8[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar11)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::FString(&local_78,&(this->KeyCount).Key);
    bVar11 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_78);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar11 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()"), bVar11)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::FString(&local_68,&(this->KeyCount).Key);
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_48,(FAttributeKey *)&local_68,this_00);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (((local_48.AttributeStorage == (FAttributeStorage *)0x0) ||
          (bVar11 = FAttributeStorage::ContainAttribute(local_48.AttributeStorage,&local_48.Key),
          !bVar11)) ||
         (EVar5 = FAttributeStorage::GetAttributeType(local_48.AttributeStorage,&local_48.Key),
         EVar5 != Int32)) {
        bVar11 = false;
      }
      else {
        iVar9 = 0;
        if (local_48.AttributeStorage != (FAttributeStorage *)0x0) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_48.AttributeStorage,&local_48.Key,local_res8);
          iVar9 = local_res8[0];
        }
        pFVar7 = (FAttributeAllocationInfo *)0x0;
        this_01 = local_48.AttributeStorage;
        if (0 < iVar9) {
          do {
            GetIndexKey(this,&local_58,(int)pFVar7);
            FAttributeStorage::UnregisterAttribute(this_00,&local_58);
            if (local_58.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Key.Data.AllocatorInstance.Data);
            }
            uVar8 = (int)pFVar7 + 1;
            pFVar7 = (FAttributeAllocationInfo *)(ulonglong)uVar8;
            this_01 = local_48.AttributeStorage;
          } while ((int)uVar8 < iVar9);
        }
        local_res8[0] = 0;
        if (this_01 != (FAttributeStorage *)0x0) {
          pTVar6 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)this_01,&local_48.Key);
          pFVar7 = (FAttributeAllocationInfo *)&pTVar6->field_0x10;
          if (pTVar6 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                         *)0x0) {
            pFVar7 = (FAttributeAllocationInfo *)0x0;
          }
          FAttributeStorage::SetAttribute<int>(this_01,pFVar7,local_res8);
        }
        bVar11 = true;
      }
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e4522f8;
    }
  }
  bVar11 = false;
LAB_14e4522f8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return bVar11;
}

// RemoveAllItems @ 14e4524f0

bool __thiscall
UE::Interchange::TArrayAttributeHelper<FString>::RemoveAllItems
          (TArrayAttributeHelper<FString> *this)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  EAttributeTypes EVar5;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar6;
  FAttributeAllocationInfo *pFVar7;
  uint uVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  FAttributeStorage *this_01;
  bool bVar11;
  int local_res8 [2];
  FString local_78;
  FString local_68;
  FAttributeKey local_58;
  TAttributeHandle<int,void> local_48;
  
  pTVar10 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e452539:
    bVar11 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494518>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0xf6,"AttributePtr.IsValid()");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    aVar2 = pTVar10->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e452539;
      }
      LOCK();
      aVar4 = pTVar10->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    this_00 = (this->Attributes).Object;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e452539;
    local_res8[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar11)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::FString(&local_78,&(this->KeyCount).Key);
    bVar11 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_78);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar11 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()"), bVar11)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::FString(&local_68,&(this->KeyCount).Key);
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_48,(FAttributeKey *)&local_68,this_00);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (((local_48.AttributeStorage == (FAttributeStorage *)0x0) ||
          (bVar11 = FAttributeStorage::ContainAttribute(local_48.AttributeStorage,&local_48.Key),
          !bVar11)) ||
         (EVar5 = FAttributeStorage::GetAttributeType(local_48.AttributeStorage,&local_48.Key),
         EVar5 != Int32)) {
        bVar11 = false;
      }
      else {
        iVar9 = 0;
        if (local_48.AttributeStorage != (FAttributeStorage *)0x0) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_48.AttributeStorage,&local_48.Key,local_res8);
          iVar9 = local_res8[0];
        }
        pFVar7 = (FAttributeAllocationInfo *)0x0;
        this_01 = local_48.AttributeStorage;
        if (0 < iVar9) {
          do {
            GetIndexKey(this,&local_58,(int)pFVar7);
            FAttributeStorage::UnregisterAttribute(this_00,&local_58);
            if (local_58.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Key.Data.AllocatorInstance.Data);
            }
            uVar8 = (int)pFVar7 + 1;
            pFVar7 = (FAttributeAllocationInfo *)(ulonglong)uVar8;
            this_01 = local_48.AttributeStorage;
          } while ((int)uVar8 < iVar9);
        }
        local_res8[0] = 0;
        if (this_01 != (FAttributeStorage *)0x0) {
          pTVar6 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)this_01,&local_48.Key);
          pFVar7 = (FAttributeAllocationInfo *)&pTVar6->field_0x10;
          if (pTVar6 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                         *)0x0) {
            pFVar7 = (FAttributeAllocationInfo *)0x0;
          }
          FAttributeStorage::SetAttribute<int>(this_01,pFVar7,local_res8);
        }
        bVar11 = true;
      }
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e452568;
    }
  }
  bVar11 = false;
LAB_14e452568:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return bVar11;
}

// RemoveItem @ 14e4545e0

bool __thiscall
UE::Interchange::TArrayAttributeHelper<int>::RemoveItem
          (TArrayAttributeHelper<int> *this,int *param_1)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  FAttributeStorage *this_01;
  undefined1 uVar3;
  atomic<int> aVar4;
  EAttributeTypes EVar5;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar6;
  EAttributeStorageResult EVar7;
  FString *pFVar8;
  FAttributeAllocationInfo *pFVar9;
  int iVar10;
  int iVar11;
  FString *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  int iVar14;
  bool bVar15;
  int local_res8 [2];
  int *local_res10;
  int local_res18 [2];
  int local_res20 [2];
  FString local_108;
  TAttributeHandle<int,void> local_f8;
  TAttributeHandle<int,void> local_e0;
  TReferenceControllerBase<1> *local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  pTVar13 = (this->Attributes).WeakReferenceCount.ReferenceController;
  local_res10 = param_1;
  local_c8 = pTVar13;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e454627:
    bVar15 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494454>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0xb6,"AttributePtr.IsValid()");
    if (bVar15) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    aVar2 = pTVar13->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e454627;
      }
      LOCK();
      aVar4 = pTVar13->SharedReferenceCount;
      bVar15 = aVar2 == aVar4;
      if (bVar15) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar15);
    this_00 = (this->Attributes).Object;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e454627;
    iVar10 = 0;
    local_res8[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar15 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar15)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::FString(&local_b0,&(this->KeyCount).Key);
    bVar15 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_b0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (bVar15) {
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar15 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()"), bVar15)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::FString(&local_a0,&(this->KeyCount).Key);
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_e0,(FAttributeKey *)&local_a0,this_00);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (((local_e0.AttributeStorage == (FAttributeStorage *)0x0) ||
          (bVar15 = FAttributeStorage::ContainAttribute(local_e0.AttributeStorage,&local_e0.Key),
          !bVar15)) ||
         (EVar5 = FAttributeStorage::GetAttributeType(local_e0.AttributeStorage,&local_e0.Key),
         EVar5 != Int32)) {
        bVar15 = false;
      }
      else {
        iVar14 = 0;
        if (local_e0.AttributeStorage != (FAttributeStorage *)0x0) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_e0.AttributeStorage,&local_e0.Key,local_res8);
          iVar14 = local_res8[0];
        }
        iVar11 = 0;
        if (0 < iVar14) {
          do {
            GetIndexKey(this,(FAttributeKey *)&local_108,iVar11);
            FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                      (&local_f8,(FAttributeKey *)&local_108,this_00);
            if (((local_f8.AttributeStorage != (FAttributeStorage *)0x0) &&
                (bVar15 = FAttributeStorage::ContainAttribute
                                    (local_f8.AttributeStorage,&local_f8.Key), bVar15)) &&
               (EVar5 = FAttributeStorage::GetAttributeType(local_f8.AttributeStorage,&local_f8.Key)
               , EVar5 == Int32)) {
              if (local_f8.AttributeStorage != (FAttributeStorage *)0x0) {
                FAttributeStorage::GetAttribute<int,void>
                          (local_f8.AttributeStorage,&local_f8.Key,local_res18);
              }
              if (iVar10 == 0) {
                if (local_res18[0] == *local_res10) {
                  FAttributeStorage::UnregisterAttribute(this_00,(FAttributeKey *)&local_108);
                  this_01 = local_e0.AttributeStorage;
                  local_res20[0] = iVar14 + -1;
                  if (local_e0.AttributeStorage != (FAttributeStorage *)0x0) {
                    pTVar6 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                             ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                                     *)local_e0.AttributeStorage,&local_e0.Key);
                    pFVar9 = (FAttributeAllocationInfo *)&pTVar6->field_0x10;
                    if (pTVar6 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                                   *)0x0) {
                      pFVar9 = (FAttributeAllocationInfo *)0x0;
                    }
                    FAttributeStorage::SetAttribute<int>(this_01,pFVar9,local_res20);
                  }
                  iVar10 = 1;
                }
              }
              else if (iVar10 != 0) {
                GetIndexKey(this,(FAttributeKey *)&local_c0,iVar11 - iVar10);
                EVar7 = FAttributeStorage::UnregisterAttribute(this_00,(FAttributeKey *)&local_108);
                if ((EVar7 & Operation_Success) == None) {
                  ::FString::FString(&local_80,&local_108);
                  pFVar8 = ::FString::FString(local_60,L"TArrayAttributeHelper.RemoveItem");
                  pFVar12 = &local_80;
LAB_14e45491b:
                  LogAttributeStorageErrors(EVar7,pFVar8,(FAttributeKey *)pFVar12);
                }
                else {
                  EVar7 = FAttributeStorage::RegisterAttribute<int,void>
                                    (this_00,(FAttributeKey *)&local_c0,local_res18,None);
                  if ((EVar7 & Operation_Success) == None) {
                    ::FString::FString(&local_90,&local_c0);
                    pFVar8 = ::FString::FString(&local_70,L"TArrayAttributeHelper.RemoveItem");
                    pFVar12 = &local_90;
                    goto LAB_14e45491b;
                  }
                }
                if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                }
              }
            }
            if (local_f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            iVar11 = iVar11 + 1;
            pTVar13 = local_c8;
          } while (iVar11 < iVar14);
        }
        bVar15 = true;
      }
      if (local_e0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e454656;
    }
  }
  bVar15 = false;
LAB_14e454656:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return bVar15;
}

// RemoveItem @ 14e454990

bool __thiscall
UE::Interchange::TArrayAttributeHelper<float>::RemoveItem
          (TArrayAttributeHelper<float> *this,float *param_1)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  FAttributeStorage *this_01;
  undefined1 uVar3;
  atomic<int> aVar4;
  EAttributeTypes EVar5;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar6;
  EAttributeStorageResult EVar7;
  FString *pFVar8;
  FAttributeAllocationInfo *pFVar9;
  int iVar10;
  int iVar11;
  FString *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  int iVar14;
  bool bVar15;
  int local_res8 [2];
  float *local_res10;
  float local_res18 [2];
  int local_res20 [2];
  FString local_108;
  TAttributeHandle<float,void> local_f8;
  TAttributeHandle<int,void> local_e0;
  TReferenceControllerBase<1> *local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  pTVar13 = (this->Attributes).WeakReferenceCount.ReferenceController;
  local_res10 = param_1;
  local_c8 = pTVar13;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e4549d7:
    bVar15 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494454>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0xb6,"AttributePtr.IsValid()");
    if (bVar15) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    aVar2 = pTVar13->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e4549d7;
      }
      LOCK();
      aVar4 = pTVar13->SharedReferenceCount;
      bVar15 = aVar2 == aVar4;
      if (bVar15) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar15);
    this_00 = (this->Attributes).Object;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e4549d7;
    iVar10 = 0;
    local_res8[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar15 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar15)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::FString(&local_b0,&(this->KeyCount).Key);
    bVar15 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_b0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (bVar15) {
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar15 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()"), bVar15)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::FString(&local_a0,&(this->KeyCount).Key);
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_e0,(FAttributeKey *)&local_a0,this_00);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (((local_e0.AttributeStorage == (FAttributeStorage *)0x0) ||
          (bVar15 = FAttributeStorage::ContainAttribute(local_e0.AttributeStorage,&local_e0.Key),
          !bVar15)) ||
         (EVar5 = FAttributeStorage::GetAttributeType(local_e0.AttributeStorage,&local_e0.Key),
         EVar5 != Int32)) {
        bVar15 = false;
      }
      else {
        iVar14 = 0;
        if (local_e0.AttributeStorage != (FAttributeStorage *)0x0) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_e0.AttributeStorage,&local_e0.Key,local_res8);
          iVar14 = local_res8[0];
        }
        iVar11 = 0;
        if (0 < iVar14) {
          do {
            GetIndexKey(this,(FAttributeKey *)&local_108,iVar11);
            FAttributeStorage::TAttributeHandle<float,void>::TAttributeHandle<float,void>
                      (&local_f8,(FAttributeKey *)&local_108,this_00);
            if (((local_f8.AttributeStorage != (FAttributeStorage *)0x0) &&
                (bVar15 = FAttributeStorage::ContainAttribute
                                    (local_f8.AttributeStorage,&local_f8.Key), bVar15)) &&
               (EVar5 = FAttributeStorage::GetAttributeType(local_f8.AttributeStorage,&local_f8.Key)
               , EVar5 == Float)) {
              if (local_f8.AttributeStorage != (FAttributeStorage *)0x0) {
                FAttributeStorage::GetAttribute<float,void>
                          (local_f8.AttributeStorage,&local_f8.Key,local_res18);
              }
              if (iVar10 == 0) {
                if (local_res18[0] == *local_res10) {
                  FAttributeStorage::UnregisterAttribute(this_00,(FAttributeKey *)&local_108);
                  this_01 = local_e0.AttributeStorage;
                  local_res20[0] = iVar14 + -1;
                  if (local_e0.AttributeStorage != (FAttributeStorage *)0x0) {
                    pTVar6 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                             ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                                     *)local_e0.AttributeStorage,&local_e0.Key);
                    pFVar9 = (FAttributeAllocationInfo *)&pTVar6->field_0x10;
                    if (pTVar6 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                                   *)0x0) {
                      pFVar9 = (FAttributeAllocationInfo *)0x0;
                    }
                    FAttributeStorage::SetAttribute<int>(this_01,pFVar9,local_res20);
                  }
                  iVar10 = 1;
                }
              }
              else if (iVar10 != 0) {
                GetIndexKey(this,(FAttributeKey *)&local_c0,iVar11 - iVar10);
                EVar7 = FAttributeStorage::UnregisterAttribute(this_00,(FAttributeKey *)&local_108);
                if ((EVar7 & Operation_Success) == None) {
                  ::FString::FString(&local_80,&local_108);
                  pFVar8 = ::FString::FString(local_60,L"TArrayAttributeHelper.RemoveItem");
                  pFVar12 = &local_80;
LAB_14e454cce:
                  LogAttributeStorageErrors(EVar7,pFVar8,(FAttributeKey *)pFVar12);
                }
                else {
                  EVar7 = FAttributeStorage::RegisterAttribute<float,void>
                                    (this_00,(FAttributeKey *)&local_c0,local_res18,None);
                  if ((EVar7 & Operation_Success) == None) {
                    ::FString::FString(&local_90,&local_c0);
                    pFVar8 = ::FString::FString(&local_70,L"TArrayAttributeHelper.RemoveItem");
                    pFVar12 = &local_90;
                    goto LAB_14e454cce;
                  }
                }
                if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                }
              }
            }
            if (local_f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            iVar11 = iVar11 + 1;
            pTVar13 = local_c8;
          } while (iVar11 < iVar14);
        }
        bVar15 = true;
      }
      if (local_e0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e454a06;
    }
  }
  bVar15 = false;
LAB_14e454a06:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return bVar15;
}

// RemoveItem @ 14e454d40

bool __thiscall
UE::Interchange::TArrayAttributeHelper<double>::RemoveItem
          (TArrayAttributeHelper<double> *this,double *param_1)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  FAttributeStorage *this_01;
  undefined1 uVar3;
  atomic<int> aVar4;
  EAttributeTypes EVar5;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar6;
  EAttributeStorageResult EVar7;
  FString *pFVar8;
  FAttributeAllocationInfo *pFVar9;
  int iVar10;
  int iVar11;
  FString *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  int iVar14;
  bool bVar15;
  int local_res8 [2];
  double *local_res10;
  int local_res18 [2];
  double local_res20;
  FString local_108;
  TAttributeHandle<double,void> local_f8;
  TAttributeHandle<int,void> local_e0;
  TReferenceControllerBase<1> *local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  pTVar13 = (this->Attributes).WeakReferenceCount.ReferenceController;
  local_res10 = param_1;
  local_c8 = pTVar13;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e454d87:
    bVar15 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494454>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0xb6,"AttributePtr.IsValid()");
    if (bVar15) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    aVar2 = pTVar13->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e454d87;
      }
      LOCK();
      aVar4 = pTVar13->SharedReferenceCount;
      bVar15 = aVar2 == aVar4;
      if (bVar15) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar15);
    this_00 = (this->Attributes).Object;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e454d87;
    iVar10 = 0;
    local_res8[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar15 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar15)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::FString(&local_b0,&(this->KeyCount).Key);
    bVar15 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_b0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (bVar15) {
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar15 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()"), bVar15)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::FString(&local_a0,&(this->KeyCount).Key);
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_e0,(FAttributeKey *)&local_a0,this_00);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (((local_e0.AttributeStorage == (FAttributeStorage *)0x0) ||
          (bVar15 = FAttributeStorage::ContainAttribute(local_e0.AttributeStorage,&local_e0.Key),
          !bVar15)) ||
         (EVar5 = FAttributeStorage::GetAttributeType(local_e0.AttributeStorage,&local_e0.Key),
         EVar5 != Int32)) {
        bVar15 = false;
      }
      else {
        iVar14 = 0;
        if (local_e0.AttributeStorage != (FAttributeStorage *)0x0) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_e0.AttributeStorage,&local_e0.Key,local_res8);
          iVar14 = local_res8[0];
        }
        iVar11 = 0;
        if (0 < iVar14) {
          do {
            GetIndexKey(this,(FAttributeKey *)&local_108,iVar11);
            FAttributeStorage::TAttributeHandle<double,void>::TAttributeHandle<double,void>
                      (&local_f8,(FAttributeKey *)&local_108,this_00);
            if (((local_f8.AttributeStorage != (FAttributeStorage *)0x0) &&
                (bVar15 = FAttributeStorage::ContainAttribute
                                    (local_f8.AttributeStorage,&local_f8.Key), bVar15)) &&
               (EVar5 = FAttributeStorage::GetAttributeType(local_f8.AttributeStorage,&local_f8.Key)
               , EVar5 == Double)) {
              if (local_f8.AttributeStorage != (FAttributeStorage *)0x0) {
                FAttributeStorage::GetAttribute<double,void>
                          (local_f8.AttributeStorage,&local_f8.Key,&local_res20);
              }
              if (iVar10 == 0) {
                if (local_res20 == *local_res10) {
                  FAttributeStorage::UnregisterAttribute(this_00,(FAttributeKey *)&local_108);
                  this_01 = local_e0.AttributeStorage;
                  local_res18[0] = iVar14 + -1;
                  if (local_e0.AttributeStorage != (FAttributeStorage *)0x0) {
                    pTVar6 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                             ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                                     *)local_e0.AttributeStorage,&local_e0.Key);
                    pFVar9 = (FAttributeAllocationInfo *)&pTVar6->field_0x10;
                    if (pTVar6 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                                   *)0x0) {
                      pFVar9 = (FAttributeAllocationInfo *)0x0;
                    }
                    FAttributeStorage::SetAttribute<int>(this_01,pFVar9,local_res18);
                  }
                  iVar10 = 1;
                }
              }
              else if (iVar10 != 0) {
                GetIndexKey(this,(FAttributeKey *)&local_c0,iVar11 - iVar10);
                EVar7 = FAttributeStorage::UnregisterAttribute(this_00,(FAttributeKey *)&local_108);
                if ((EVar7 & Operation_Success) == None) {
                  ::FString::FString(&local_80,&local_108);
                  pFVar8 = ::FString::FString(local_60,L"TArrayAttributeHelper.RemoveItem");
                  pFVar12 = &local_80;
LAB_14e45507f:
                  LogAttributeStorageErrors(EVar7,pFVar8,(FAttributeKey *)pFVar12);
                }
                else {
                  EVar7 = FAttributeStorage::RegisterAttribute<double,void>
                                    (this_00,(FAttributeKey *)&local_c0,&local_res20,None);
                  if ((EVar7 & Operation_Success) == None) {
                    ::FString::FString(&local_90,&local_c0);
                    pFVar8 = ::FString::FString(&local_70,L"TArrayAttributeHelper.RemoveItem");
                    pFVar12 = &local_90;
                    goto LAB_14e45507f;
                  }
                }
                if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                }
              }
            }
            if (local_f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            iVar11 = iVar11 + 1;
            pTVar13 = local_c8;
          } while (iVar11 < iVar14);
        }
        bVar15 = true;
      }
      if (local_e0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e454db6;
    }
  }
  bVar15 = false;
LAB_14e454db6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return bVar15;
}

// RemoveItem @ 14e4550f0

bool __thiscall
UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
          (TArrayAttributeHelper<FString> *this,FString *param_1)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  FAttributeStorage *this_01;
  undefined1 uVar3;
  atomic<int> aVar4;
  EAttributeTypes EVar5;
  int iVar6;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar7;
  EAttributeStorageResult EVar8;
  FString *pFVar9;
  FAttributeAllocationInfo *pFVar10;
  ForAnyElementType FVar11;
  int iVar12;
  TReferenceControllerBase<1> *pTVar13;
  int iVar14;
  FAttributeAllocationInfo *pFVar15;
  FAttributeAllocationInfo *pFVar16;
  bool bVar17;
  int local_res18 [2];
  int local_res20 [2];
  FString local_118;
  FString local_108;
  TAttributeHandle<FString,void> local_f8;
  TAttributeHandle<int,void> local_e0;
  TReferenceControllerBase<1> *local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  pTVar13 = (this->Attributes).WeakReferenceCount.ReferenceController;
  local_c8 = pTVar13;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e455144:
    bVar17 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494454>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0xb6,"AttributePtr.IsValid()");
    if (bVar17) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    aVar2 = pTVar13->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e455144;
      }
      LOCK();
      aVar4 = pTVar13->SharedReferenceCount;
      bVar17 = aVar2 == aVar4;
      if (bVar17) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar17);
    this_00 = (this->Attributes).Object;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e455144;
    pFVar15 = (FAttributeAllocationInfo *)0x0;
    local_res18[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar17 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar17)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::FString(&local_b0,&(this->KeyCount).Key);
    bVar17 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_b0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (bVar17) {
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar17 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494551>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x117,"!KeyCount.Key.IsEmpty()"), bVar17)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::FString(&local_a0,&(this->KeyCount).Key);
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_e0,(FAttributeKey *)&local_a0,this_00);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (((local_e0.AttributeStorage == (FAttributeStorage *)0x0) ||
          (bVar17 = FAttributeStorage::ContainAttribute(local_e0.AttributeStorage,&local_e0.Key),
          !bVar17)) ||
         (EVar5 = FAttributeStorage::GetAttributeType(local_e0.AttributeStorage,&local_e0.Key),
         EVar5 != Int32)) {
        bVar17 = false;
      }
      else {
        iVar14 = 0;
        if (local_e0.AttributeStorage != (FAttributeStorage *)0x0) {
          FAttributeStorage::GetAttribute<int,void>
                    (local_e0.AttributeStorage,&local_e0.Key,local_res18);
          iVar14 = local_res18[0];
        }
        pFVar10 = pFVar15;
        pFVar16 = pFVar15;
        if (0 < iVar14) {
          do {
            iVar12 = (int)pFVar10;
            GetIndexKey(this,(FAttributeKey *)&local_108,iVar12);
            FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
                      (&local_f8,(FAttributeKey *)&local_108,this_00);
            if (((local_f8.AttributeStorage != (FAttributeStorage *)0x0) &&
                (bVar17 = FAttributeStorage::ContainAttribute
                                    (local_f8.AttributeStorage,&local_f8.Key), bVar17)) &&
               (EVar5 = FAttributeStorage::GetAttributeType(local_f8.AttributeStorage,&local_f8.Key)
               , EVar5 == String)) {
              local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_118.Data.ArrayNum = 0;
              local_118.Data.ArrayMax = 0;
              if (local_f8.AttributeStorage != (FAttributeStorage *)0x0) {
                FAttributeStorage::GetAttribute<FString,void>
                          (local_f8.AttributeStorage,&local_f8.Key,&local_118);
              }
              FVar11.Data = local_118.Data.AllocatorInstance.Data;
              iVar6 = (int)pFVar16;
              if (iVar6 == 0) {
                iVar6 = (param_1->Data).ArrayNum;
                if (local_118.Data.ArrayNum == iVar6) {
                  if (1 < local_118.Data.ArrayNum) {
                    iVar6 = FGenericPlatformStricmp::Stricmp
                                      ((wchar_t *)local_118.Data.AllocatorInstance.Data,
                                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
                    bVar17 = iVar6 == 0;
                    goto LAB_14e455399;
                  }
                }
                else {
                  bVar17 = local_118.Data.ArrayNum + iVar6 == 1;
LAB_14e455399:
                  if (!bVar17) goto LAB_14e4554a6;
                }
                FAttributeStorage::UnregisterAttribute(this_00,(FAttributeKey *)&local_108);
                this_01 = local_e0.AttributeStorage;
                local_res20[0] = iVar14 + -1;
                if (local_e0.AttributeStorage != (FAttributeStorage *)0x0) {
                  pTVar7 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                                   *)local_e0.AttributeStorage,&local_e0.Key);
                  pFVar10 = (FAttributeAllocationInfo *)&pTVar7->field_0x10;
                  if (pTVar7 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                                 *)0x0) {
                    pFVar10 = pFVar15;
                  }
                  FAttributeStorage::SetAttribute<int>(this_01,pFVar10,local_res20);
                }
                pFVar16 = (FAttributeAllocationInfo *)&DAT_00000001;
              }
              else if (iVar6 != 0) {
                GetIndexKey(this,(FAttributeKey *)&local_c0,iVar12 - iVar6);
                EVar8 = FAttributeStorage::UnregisterAttribute(this_00,(FAttributeKey *)&local_108);
                if ((EVar8 & Operation_Success) == None) {
                  ::FString::FString(&local_80,&local_108);
                  pFVar9 = ::FString::FString(local_60,L"TArrayAttributeHelper.RemoveItem");
                  LogAttributeStorageErrors(EVar8,pFVar9,(FAttributeKey *)&local_80);
                }
                else {
                  EVar8 = FAttributeStorage::RegisterAttribute<FString,void>
                                    (this_00,(FAttributeKey *)&local_c0,&local_118,None);
                  FVar11.Data = local_118.Data.AllocatorInstance.Data;
                  if ((EVar8 & Operation_Success) == None) {
                    ::FString::FString(&local_90,&local_c0);
                    pFVar9 = ::FString::FString(&local_70,L"TArrayAttributeHelper.RemoveItem");
                    LogAttributeStorageErrors(EVar8,pFVar9,(FAttributeKey *)&local_90);
                    FVar11.Data = local_118.Data.AllocatorInstance.Data;
                  }
                }
                if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                }
              }
LAB_14e4554a6:
              if (FVar11.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar11.Data);
              }
            }
            if (local_f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            pFVar10 = (FAttributeAllocationInfo *)(ulonglong)(iVar12 + 1U);
          } while ((int)(iVar12 + 1U) < iVar14);
        }
        bVar17 = true;
        pTVar13 = local_c8;
      }
      if (local_e0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e455173;
    }
  }
  bVar17 = false;
LAB_14e455173:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return bVar17;
}

