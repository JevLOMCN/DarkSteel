// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 5

// ~TArrayAttributeHelper<UE::Math::TTransform<double>_> @ 14e48a140

void __thiscall
UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::
~TArrayAttributeHelper<UE::Math::TTransform<double>_>
          (TArrayAttributeHelper<UE::Math::TTransform<double>_> *this)

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
      `public:___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::~TArrayAttributeHelper<UE::Math::TTransform<double>_>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::~TArrayAttributeHelper<UE::Math::TTransform<double>_>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::~TArrayAttributeHelper<UE::Math::TTransform<double>_>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::~TArrayAttributeHelper<UE::Math::TTransform<double>_>(void)___ptr64'
                      ::__l2::LLMScope_Name26,L"Interchange");
      _Init_thread_footer(&`public:___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::~TArrayAttributeHelper<UE::Math::TTransform<double>_>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::~TArrayAttributeHelper<UE::Math::TTransform<double>_>(void)___ptr64'
             ::__l2::LLMScope_Name26,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::~TArrayAttributeHelper<UE::Math::TTransform<double>_>(void)___ptr64'
              ::__l2::LLMScope_Name26,true);
  if (this != (TArrayAttributeHelper<UE::Math::TTransform<double>_> *)(local_48 + 1)) {
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

// AddItem @ 14e48d940

bool __thiscall
UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::AddItem
          (TArrayAttributeHelper<UE::Math::TTransform<double>_> *this,TTransform<double> *param_1)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  EAttributeStorageResult EVar5;
  FAttributeKey *pFVar6;
  FString *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  int local_res8 [2];
  int local_res18 [4];
  FString local_d8;
  TAttributeHandle<int,void> local_c8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FAttributeKey local_70;
  FString local_60;
  FString local_50;
  
  pTVar8 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e48d982:
    bVar9 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4942768438637494414>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                       ,0x8e,"AttributePtr.IsValid()");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e48d982;
      }
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar9 = aVar2 == aVar4;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar9);
    this_00 = (this->Attributes).Object;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e48d982;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar9 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494551>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x117,"!KeyCount.Key.IsEmpty()"), bVar9)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::FString(&local_b0,&(this->KeyCount).Key);
    bVar9 = FAttributeStorage::ContainAttribute(this_00,(FAttributeKey *)&local_b0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
LAB_14e48dae2:
      if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
         (bVar9 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4942768438637494551>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x117,"!KeyCount.Key.IsEmpty()"), bVar9)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::FString(&local_90,&(this->KeyCount).Key);
      FAttributeStorage::GetAttributeHandle<int,void>(this_00,&local_c8,(FAttributeKey *)&local_90);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      bVar9 = FAttributeStorage::TAttributeHandle<int,void>::IsValid(&local_c8);
      if (bVar9) {
        local_res8[0] = 0;
        FAttributeStorage::TAttributeHandle<int,void>::Get(&local_c8,local_res8);
        GetIndexKey(this,(FAttributeKey *)&local_d8,local_res8[0]);
        EVar5 = FAttributeStorage::RegisterAttribute<UE::Math::TTransform<double>,void>
                          (this_00,(FAttributeKey *)&local_d8,param_1,None);
        bVar9 = (EVar5 & Operation_Success) != None;
        if (bVar9) {
          local_res8[0] = local_res8[0] + 1;
          FAttributeStorage::TAttributeHandle<int,void>::Set(&local_c8,local_res8);
        }
        else {
          ::FString::FString(&local_80,&local_d8);
          pFVar7 = ::FString::FString(&local_50,L"TArrayAttributeHelper.AddName");
          LogAttributeStorageErrors(EVar5,pFVar7,(FAttributeKey *)&local_80);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      else {
        bVar9 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494430>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x9e,"Handle.IsValid()");
        if (bVar9) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        bVar9 = false;
      }
      if (local_c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e48d9b1;
    }
    local_res18[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar9 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4942768438637494551>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x117,"!KeyCount.Key.IsEmpty()"), bVar9)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::FString(&local_a0,&(this->KeyCount).Key);
    EVar5 = FAttributeStorage::RegisterAttribute<int,void>
                      (this_00,(FAttributeKey *)&local_a0,local_res18,None);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if ((EVar5 & Operation_Success) != None) goto LAB_14e48dae2;
    pFVar6 = GetKeyCount(this,&local_70);
    pFVar7 = ::FString::FString(&local_60,L"TArrayAttributeHelper.AddName");
    LogAttributeStorageErrors(EVar5,pFVar7,pFVar6);
  }
  bVar9 = false;
LAB_14e48d9b1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return bVar9;
}

// GetIndexKey @ 14e495a30

FAttributeKey * __thiscall
UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::GetIndexKey
          (TArrayAttributeHelper<UE::Math::TTransform<double>_> *this,
          FAttributeKey *__return_storage_ptr__,int param_1)

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
      `public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::IndexKey(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::IndexKey(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::IndexKey(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::IndexKey(void)'
                          ::__l2::IndexKeyString,L"_NameIndex_");
      atexit(`UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::IndexKey'::__l2
             ::_dynamic_atexit_destructor_for__IndexKeyString__);
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::IndexKey(void)'
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
                      &`public:_static_class_FString_const&___ptr64___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::IndexKey(void)'
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

// GetItems @ 14e495dc0

void __thiscall
UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::GetItems
          (TArrayAttributeHelper<UE::Math::TTransform<double>_> *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FAttributeStorage *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  int iVar5;
  TTransform<double> *pTVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  uint local_res8 [2];
  FAttributeKey local_88;
  FString local_78;
  FString local_68;
  TAttributeHandle<UE::Math::TTransform<double>,void> local_58;
  TAttributeHandle<int,void> local_40;
  
  pTVar10 = (this->Attributes).WeakReferenceCount.ReferenceController;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = pTVar10;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e495e16:
    bVar11 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494376>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x68,"AttributePtr.IsValid()");
    pTVar10 = pTVar9;
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar8;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e495e16;
      LOCK();
      aVar4 = pTVar10->SharedReferenceCount;
      bVar11 = aVar3 == aVar4;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar11);
    this_00 = (this->Attributes).Object;
    pTVar9 = pTVar10;
    if (this_00 == (FAttributeStorage *)0x0) goto LAB_14e495e16;
    local_res8[0] = 0;
    if (((this->KeyCount).Key.Data.ArrayNum < 2) &&
       (bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494551>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x117,"!KeyCount.Key.IsEmpty()"), bVar11)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
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
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FString::FString(&local_68,&(this->KeyCount).Key);
      FAttributeStorage::GetAttributeHandle<int,void>(this_00,&local_40,(FAttributeKey *)&local_68);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      bVar11 = FAttributeStorage::TAttributeHandle<int,void>::IsValid(&local_40);
      if (bVar11) {
        FAttributeStorage::TAttributeHandle<int,void>::Get(&local_40,(int *)local_res8);
        if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
        }
        piVar1 = &param_1->ArrayMax;
        param_1->ArrayNum = 0;
        if (param_1->ArrayMax < (int)local_res8[0]) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,local_res8[0],&param_1->AllocatorInstance,0,piVar1);
        }
        if (0 < (int)local_res8[0]) {
          do {
            GetIndexKey(this,&local_88,(int)pTVar8);
            FAttributeStorage::GetAttributeHandle<UE::Math::TTransform<double>,void>
                      (this_00,&local_58,&local_88);
            bVar11 = FAttributeStorage::TAttributeHandle<UE::Math::TTransform<double>,void>::IsValid
                               (&local_58);
            if (bVar11) {
              iVar5 = param_1->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x1060,&param_1->AllocatorInstance,piVar1);
              }
              param_1->ArrayNum = iVar5 + 1;
              pTVar6 = (TTransform<double> *)
                       ((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x60);
              DefaultConstructItems<UE::Math::TTransform<double>,int>(pTVar6,1);
              FAttributeStorage::TAttributeHandle<UE::Math::TTransform<double>,void>::Get
                        (&local_58,pTVar6);
            }
            if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
            }
            uVar7 = (int)pTVar8 + 1;
            pTVar8 = (TReferenceControllerBase<1> *)(ulonglong)uVar7;
          } while ((int)uVar7 < (int)local_res8[0]);
        }
      }
      if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
      }
      goto LAB_14e495e6c;
    }
  }
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
LAB_14e495e6c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// GetKeyCount @ 14e496640

FAttributeKey * __thiscall
UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::GetKeyCount
          (TArrayAttributeHelper<UE::Math::TTransform<double>_> *this,
          FAttributeKey *__return_storage_ptr__)

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

