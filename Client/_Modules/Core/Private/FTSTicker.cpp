// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// ~FTSTicker @ 14158a300

void __thiscall FTSTicker::~FTSTicker(FTSTicker *this)

{
  FScriptContainerElement *pFVar1;
  atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> aVar2;
  
  DestructItems<TSharedPtr<FTSTicker::FElement,1>,int>
            ((TSharedPtr<FTSTicker::FElement,1> *)(this->Elements).AllocatorInstance.Data,
             (this->Elements).ArrayNum);
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  aVar2 = ((this->AddedElements).Tail)->Next;
  FMemory::Free((this->AddedElements).Tail);
  while (aVar2 != (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)0x0) {
    (this->AddedElements).Tail = (FNode *)aVar2;
    aVar2 = *(atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> *)aVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((((this->AddedElements).Tail)->Value).Pad + 8));
    FMemory::Free((this->AddedElements).Tail);
  }
  return;
}

// operator() @ 141592fd0

void __thiscall `FTSTicker::RemoveTicker'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  DWORD DVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_141593002;
      }
      LOCK();
      aVar3 = pTVar8->SharedReferenceCount;
      bVar9 = aVar2 == aVar3;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar9);
    lVar1 = *(longlong *)this;
    if (lVar1 != 0) {
      uVar6 = *(ulonglong *)(lVar1 + 0x40);
      do {
        LOCK();
        uVar7 = *(ulonglong *)(lVar1 + 0x40);
        bVar9 = uVar6 == uVar7;
        if (bVar9) {
          *(ulonglong *)(lVar1 + 0x40) = uVar6 | 1;
          uVar7 = uVar6;
        }
        UNLOCK();
        uVar6 = uVar7;
      } while (!bVar9);
      iVar5 = (int)(uVar7 >> 0x20);
      while ((iVar5 != 0 && (DVar4 = GetCurrentThreadId(), DVar4 != (DWORD)(uVar7 >> 0x20)))) {
        uVar7 = *(ulonglong *)(lVar1 + 0x40);
        iVar5 = (int)(uVar7 >> 0x20);
      }
    }
  }
LAB_141593002:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// operator() @ 141595010

/* WARNING: Removing unreachable block (ram,0x0001415950da) */
/* WARNING: Removing unreachable block (ram,0x0001415950ff) */

void __thiscall `FTSTicker::Tick'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  longlong local_28;
  TReferenceControllerBase<1> *local_20;
  
  while( true ) {
    while( true ) {
      lVar1 = *(longlong *)this;
      lVar2 = **(longlong **)(lVar1 + 8);
      if (lVar2 == 0) {
        local_28 = -1;
        local_20 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        lVar3 = *(longlong *)(lVar2 + 8);
        pTVar4 = *(TReferenceControllerBase<1> **)(lVar2 + 0x10);
        *(undefined8 *)(lVar2 + 0x10) = 0;
        *(undefined8 *)(lVar2 + 8) = 0;
        if ((lVar3 == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(lVar2 + 0x10));
        FMemory::Free(*(void **)(lVar1 + 8));
        *(longlong *)(lVar1 + 8) = lVar2;
        local_28 = -1;
        local_20 = (TReferenceControllerBase<1> *)0x0;
        if (lVar3 != -1) {
          local_28 = lVar3;
          local_20 = pTVar4;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
      }
      if (local_28 == -1) {
        return;
      }
      if ((local_28 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar1 = *(longlong *)(local_28 + 0x40);
      if (((int)((ulonglong)lVar1 >> 0x20) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetThreadId(State) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Ticker.cpp"
                             ,0x49,L"Invalid state %llu"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (lVar1 == 0) break;
      if (local_28 != -1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20);
      }
    }
    lVar1 = *(longlong *)this;
    if ((local_28 == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((*(longlong **)(lVar1 + 0x18) <= &local_28) &&
        (&local_28 < *(longlong **)(lVar1 + 0x18) + (longlong)*(int *)(lVar1 + 0x24) * 2)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar7 = *(int *)(lVar1 + 0x20);
    if (iVar7 == *(int *)(lVar1 + 0x24)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)(lVar1 + 0x18),(int *)(lVar1 + 0x24));
    }
    *(int *)(lVar1 + 0x20) = iVar7 + 1;
    plVar8 = (longlong *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar1 + 0x18));
    *plVar8 = local_28;
    plVar8[1] = (longlong)local_20;
    local_20 = (TReferenceControllerBase<1> *)0x0;
    local_28 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// AddTicker @ 1415a8850

TWeakPtr<FTSTicker::FElement,1> * __thiscall
FTSTicker::AddTicker
          (FTSTicker *this,TWeakPtr<FTSTicker::FElement,1> *__return_storage_ptr__,
          TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *param_1,float param_2)

{
  atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> aVar1;
  atomic<double> aVar2;
  FElement *pFVar3;
  undefined8 *puVar4;
  TReferenceControllerBase<1> *pTVar5;
  atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> local_38 [2];
  
  pFVar3 = ::operator_new(0x50);
  if (pFVar3 == (FElement *)0x0) {
    pFVar3 = (FElement *)0x0;
  }
  else {
    aVar2 = this->CurrentTime;
    pFVar3->DelayTime = param_2;
    pFVar3->FireTime = (double)param_2 + (double)aVar2;
    TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>::
    TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>(local_38,param_1);
    *(undefined8 *)&pFVar3->Function = 0;
    *(undefined8 *)&(pFVar3->Function).field_0x28 = 0;
    puVar4 = FMemory::Malloc(0x20,8);
    *(undefined8 **)&(pFVar3->Function).field_0x28 = puVar4;
    *puVar4 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FTSTicker::FElement::FElement'::`1'::<lambda_28_>,1,1>::
               _vftable_;
    TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>::
    TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)(puVar4 + 1),local_38);
    if ((TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)(puVar4 + 1) !=
        (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)0x0) {
      *(code **)&pFVar3->Function =
           UE::Core::Private::Function::
           TFunctionRefCaller<`FTSTicker::FElement::FElement'::__l1::<lambda_28_>,bool,float>::Call;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    pFVar3->State = (atomic<unsigned___int64>)0x0;
  }
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = ::operator_new(0x18);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    aVar6 = (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
            FMemory::Malloc(0x18,8);
    *(undefined8 *)aVar6 = 0;
    *(FElement **)((longlong)aVar6 + 8) = pFVar3;
    *(undefined8 *)((longlong)aVar6 + 0x10) = 0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFElement_FTSTicker__U__DefaultDeleter_UFElement_FTSTicker___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = (longlong)pFVar3;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    aVar6 = (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
            FMemory::Malloc(0x18,8);
    *(undefined8 *)aVar6 = 0;
    *(FElement **)((longlong)aVar6 + 8) = pFVar3;
    *(TReferenceControllerBase<1> **)((longlong)aVar6 + 0x10) = pTVar5;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = pTVar5;
  }
  LOCK();
  aVar1 = (this->AddedElements).Head;
  (this->AddedElements).Head = aVar6;
  UNLOCK();
  *(atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> *)aVar1 = aVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// AddTicker @ 1415a89d0

TWeakPtr<FTSTicker::FElement,1> * __thiscall
FTSTicker::AddTicker
          (FTSTicker *this,TWeakPtr<FTSTicker::FElement,1> *__return_storage_ptr__,wchar_t *param_1,
          float param_2,TUniqueFunction<bool___cdecl(float)> *param_3)

{
  atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> aVar1;
  atomic<double> aVar2;
  undefined8 uVar3;
  FElement *pFVar4;
  atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> aVar5;
  FElement *pFVar6;
  FElement *pFVar7;
  
  pFVar4 = ::operator_new(0x50);
  pFVar6 = (FElement *)0x0;
  pFVar7 = pFVar6;
  if (pFVar4 != (FElement *)0x0) {
    aVar2 = this->CurrentTime;
    pFVar4->DelayTime = param_2;
    uVar3 = *(undefined8 *)param_3;
    pFVar4->FireTime = (double)param_2 + (double)aVar2;
    *(undefined8 *)&(pFVar4->Function).field_0x0 = uVar3;
    *(undefined8 *)&(pFVar4->Function).field_0x28 = *(undefined8 *)&param_3->field_0x28;
    *(undefined8 *)&param_3->field_0x28 = 0;
    uVar3 = *(undefined8 *)&param_3->field_0x18;
    *(undefined8 *)&(pFVar4->Function).field_0x10 = *(undefined8 *)&param_3->field_0x10;
    *(undefined8 *)&(pFVar4->Function).field_0x18 = uVar3;
    *(undefined8 *)&(pFVar4->Function).field_0x20 = *(undefined8 *)&param_3->field_0x20;
    if (*(longlong *)&(pFVar4->Function).field_0x0 != 0) {
      *(undefined8 *)param_3 = 0;
    }
    *(undefined8 *)&(pFVar4->State).field_0x0 = 0;
    pFVar7 = pFVar4;
  }
  pFVar4 = ::operator_new(0x18);
  if (pFVar4 == (FElement *)0x0) {
    aVar5 = (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
            FMemory::Malloc(0x18,8);
    *(undefined8 *)aVar5 = 0;
    *(FElement **)((longlong)aVar5 + 8) = pFVar7;
    *(undefined8 *)((longlong)aVar5 + 0x10) = 0;
  }
  else {
    pFVar4->DelayTime = 1.4013e-45;
    *(undefined4 *)&pFVar4->field_0xc = 1;
    pFVar4->FireTime =
         (double)&
                 ___7__TReferenceControllerWithDeleter_UFElement_FTSTicker__U__DefaultDeleter_UFElement_FTSTicker___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(FElement **)&(pFVar4->Function).field_0x0 = pFVar7;
    LOCK();
    pFVar4->DelayTime = (float)((int)pFVar4->DelayTime + 1);
    UNLOCK();
    aVar5 = (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
            FMemory::Malloc(0x18,8);
    *(undefined8 *)aVar5 = 0;
    *(FElement **)((longlong)aVar5 + 8) = pFVar7;
    *(FElement **)((longlong)aVar5 + 0x10) = pFVar4;
    LOCK();
    pFVar4->DelayTime = (float)((int)pFVar4->DelayTime + 1);
    UNLOCK();
    pFVar6 = pFVar4;
  }
  LOCK();
  aVar1 = (this->AddedElements).Head;
  (this->AddedElements).Head = aVar5;
  UNLOCK();
  *(atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> *)aVar1 = aVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if (pFVar6 != (FElement *)0x0) {
    LOCK();
    *(int *)&pFVar6->field_0xc = *(int *)&pFVar6->field_0xc + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  return __return_storage_ptr__;
}

// GetCoreTicker @ 1415c56d0

FTSTicker * __cdecl FTSTicker::GetCoreTicker(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      CoreTicker.AddedElements.Head =
           (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
           FMemory::Malloc(0x18,8);
      *(undefined8 *)CoreTicker.AddedElements.Head = 0;
      CoreTicker.CurrentTime = (atomic<double>)0x0;
      CoreTicker.Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      CoreTicker.Elements.ArrayNum = 0;
      CoreTicker.Elements.ArrayMax = 0;
      CoreTicker.AddedElements.Tail = (FNode *)CoreTicker.AddedElements.Head;
      atexit(`FTSTicker::GetCoreTicker'::__l2::_dynamic_atexit_destructor_for__CoreTicker__);
      _Init_thread_footer(&::_TSS0);
      return &CoreTicker;
    }
  }
  return &CoreTicker;
}

// RemoveTicker @ 1415e5e80

void __cdecl FTSTicker::RemoveTicker(TWeakPtr<FTSTicker::FElement,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FElement *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_18 = param_1->Object;
  local_10 = (param_1->WeakReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->WeakReferenceCount = (atomic<int>)((int)local_10->WeakReferenceCount + 1);
    UNLOCK();
  }
  `FTSTicker::RemoveTicker'::__l2::<lambda_1>::operator()(&local_18);
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_10->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_10->_padding_ + 8))(local_10,1);
    }
  }
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return;
}

// Reset @ 1415ea5f0

/* WARNING: Removing unreachable block (ram,0x0001415ea67a) */

void __thiscall FTSTicker::Reset(FTSTicker *this)

{
  int *piVar1;
  int iVar2;
  atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> aVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<FTSTicker::FElement,1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  
  while (aVar3 = ((this->AddedElements).Tail)->Next,
        aVar3 != (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)0x0) {
    lVar4 = *(longlong *)((longlong)aVar3 + 8);
    pTVar5 = *(TReferenceControllerBase<1> **)((longlong)aVar3 + 0x10);
    *(undefined8 *)((longlong)aVar3 + 0x10) = 0;
    *(undefined8 *)((longlong)aVar3 + 8) = 0;
    if ((lVar4 == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)aVar3 + 0x10));
    FMemory::Free((this->AddedElements).Tail);
    (this->AddedElements).Tail = (FNode *)aVar3;
    if (lVar4 == -1) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  piVar1 = &(this->Elements).ArrayMax;
  LOCK();
  this->CurrentTime = (atomic<double>)0x0;
  UNLOCK();
  pTVar6 = (TSharedPtr<FTSTicker::FElement,1> *)(this->Elements).AllocatorInstance.Data;
  iVar2 = (this->Elements).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSharedPtr<FTSTicker::FElement,1>,int>(pTVar6,iVar2);
    (this->Elements).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Elements).AllocatorInstance,0,piVar1);
    }
    return;
  }
  DestructItems<TSharedPtr<FTSTicker::FElement,1>,int>(pTVar6,iVar2);
  (this->Elements).ArrayNum = 0;
  return;
}

// Tick @ 141600f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTSTicker::Tick(FTSTicker *this,float param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  float fVar3;
  ulonglong uVar4;
  atomic<double> aVar5;
  double *pdVar6;
  TSharedPtr<FTSTicker::FElement,1> *pTVar7;
  code *pcVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  DWORD DVar16;
  uint uVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<_public:_void___cdecl_FTSTicker::Tick(float)_::_2_::FStat_STAT_FTicker_Tick>
  FVar20;
  undefined8 uVar21;
  longlong *plVar22;
  FName FVar23;
  TArray<TSharedPtr<FTSTicker::FElement,1>,TSizedDefaultAllocator<32>_> *pTVar24;
  longlong lVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  FColor_u_0 local_res18 [2];
  longlong local_res20;
  ForAnyElementType local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  FName local_a0;
  longlong local_98;
  FTSTicker *local_90;
  FName local_88;
  FName local_80;
  FName local_70;
  FName local_68 [6];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FTicker_Tick ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FTSTicker::Tick(float)_::_2_::FStat_STAT_FTicker_Tick>
         )0x0) {
      pFVar19 = ::FName::FName(&local_70,"STAT_FTicker_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTicker_Tick,*pFVar19,
                 L"STAT_FTicker_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar20 = StatPtr_STAT_FTicker_Tick;
  if (StatPtr_STAT_FTicker_Tick ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FTSTicker::Tick(float)_::_2_::FStat_STAT_FTicker_Tick>
       )0x0) {
    pFVar19 = ::FName::FName(local_68,"STAT_FTicker_Tick");
    FVar20 = (FThreadSafeStaticStat<_public:_void___cdecl_FTSTicker::Tick(float)_::_2_::FStat_STAT_FTicker_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTicker_Tick,*pFVar19,
                          L"STAT_FTicker_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                          true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar20;
  bVar11 = false;
  bVar10 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar14 = false;
  bVar13 = false;
  if ((FVar23.ComparisonIndex.Value.Value != 0) || (FVar23.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar11 = false;
      bVar10 = true;
      bVar14 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_a0.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Ticker.cpp"
                   ,0x40);
        bVar11 = true;
        bVar10 = true;
        bVar14 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88 = FVar23;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar13 = true;
      goto LAB_141601097;
    }
  }
  bVar11 = bVar14;
  bVar10 = bVar13;
  bVar13 = false;
  local_88 = local_80;
  FVar23 = local_80;
LAB_141601097:
  DVar16 = GetCurrentThreadId();
  local_res20 = (ulonglong)DVar16 << 0x20;
  local_90 = this;
  `FTSTicker::Tick'::__l2::<lambda_1>::operator()(&local_90);
  lVar12 = local_res20;
  if ((this->Elements).ArrayNum != 0) {
    uVar28 = 0;
    local_b8.Data = (FScriptContainerElement *)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
    this->CurrentTime = (atomic<double>)((double)param_1 + (double)this->CurrentTime);
    do {
      if ((int)uVar28 < (this->Elements).ArrayNum) {
        lVar26 = -lVar12;
        lVar25 = local_a8 << 4;
        do {
          uVar17 = 0;
          if ((int)uVar28 < (this->Elements).ArrayNum) {
            uVar17 = ~uVar28 >> 0x1f;
          }
          local_98 = lVar25;
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar27 = (this->Elements).AllocatorInstance.Data + lVar25;
          if ((*(longlong *)pFVar27 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          LOCK();
          plVar22 = (longlong *)(*(longlong *)pFVar27 + 0x40);
          lVar25 = *plVar22;
          *plVar22 = *plVar22 + lVar12;
          UNLOCK();
          if (((int)((ulonglong)lVar25 >> 0x20) != 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GetThreadId(PrevState) == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Ticker.cpp"
                                  ,0x66,L"Invalid state %llu"), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (lVar25 == 1) {
            if ((*(longlong *)pFVar27 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            LOCK();
            *(longlong *)(*(longlong *)pFVar27 + 0x40) =
                 *(longlong *)(*(longlong *)pFVar27 + 0x40) + lVar26;
            UNLOCK();
          }
          else {
            aVar5 = this->CurrentTime;
            if ((*(longlong *)pFVar27 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pdVar6 = *(double **)pFVar27;
            if (*pdVar6 <= (double)aVar5) {
              if ((pdVar6 == (double *)0x0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar25 = *(longlong *)pFVar27;
              local_res20 = CONCAT44(local_res20._4_4_,param_1);
              UE::Core::Private::Function::CheckCallable(*(void **)(lVar25 + 0x10));
              pcVar8 = *(code **)(lVar25 + 0x10);
              plVar22 = (longlong *)(lVar25 + 0x20);
              if (*(longlong **)(lVar25 + 0x38) != (longlong *)0x0) {
                plVar22 = *(longlong **)(lVar25 + 0x38);
              }
              uVar21 = (**(code **)(*plVar22 + 8))();
              cVar15 = (*pcVar8)(uVar21,&local_res20);
              if (cVar15 == '\0') {
                if ((*(longlong *)pFVar27 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                LOCK();
                puVar1 = (ulonglong *)(*(longlong *)pFVar27 + 0x40);
                uVar4 = *puVar1;
                *puVar1 = *puVar1 + lVar26;
                UNLOCK();
                if ((((char)uVar4 != '\0') && ((uVar4 & 0xff) != 1)) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("PrevState == FElement::DefaultState || PrevState == FElement::RemovedState"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Ticker.cpp"
                                        ,0x86,L"Invalid state %llu"), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              else {
                if ((*(longlong *)pFVar27 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                LOCK();
                puVar1 = (ulonglong *)(*(longlong *)pFVar27 + 0x40);
                uVar4 = *puVar1;
                *puVar1 = *puVar1 + lVar26;
                UNLOCK();
                if ((uVar4 & 0xff) != 1) {
                  if (((char)uVar4 != '\0') &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("PrevState == FElement::DefaultState",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Ticker.cpp"
                                          ,0x7e,L"Invalid state %llu"), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  aVar5 = this->CurrentTime;
                  if ((*(longlong *)pFVar27 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  fVar3 = *(float *)(*(longlong *)pFVar27 + 8);
                  if ((*(longlong *)pFVar27 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  **(double **)pFVar27 = (double)fVar3 + (double)aVar5;
                  if (((local_b8.Data <= pFVar27) &&
                      (pFVar27 < local_b8.Data + (longlong)uStack_b0._4_4_ * 0x10)) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if ((int)uStack_b0 == uStack_b0._4_4_) {
                    iVar18 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&local_b8,(int *)((longlong)&uStack_b0 + 4));
                    uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar18);
                  }
                  lVar25 = (longlong)(int)uStack_b0;
                  uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + 1);
                  *(longlong *)(local_b8.Data + lVar25 * 0x10) = *(longlong *)pFVar27;
                  *(longlong *)(local_b8.Data + lVar25 * 0x10 + 8) = *(longlong *)(pFVar27 + 8);
                  *(longlong *)(pFVar27 + 8) = 0;
                  *(longlong *)pFVar27 = 0;
                }
              }
            }
            else {
              if ((pdVar6 == (double *)0x0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              LOCK();
              *(longlong *)(*(longlong *)pFVar27 + 0x40) =
                   *(longlong *)(*(longlong *)pFVar27 + 0x40) + lVar26;
              UNLOCK();
              if (((local_b8.Data <= pFVar27) &&
                  (pFVar27 < local_b8.Data + (longlong)uStack_b0._4_4_ * 0x10)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if ((int)uStack_b0 == uStack_b0._4_4_) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_b8,(int *)((longlong)&uStack_b0 + 4));
                uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar18);
              }
              lVar25 = (longlong)(int)uStack_b0;
              uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + 1);
              *(longlong *)(local_b8.Data + lVar25 * 0x10) = *(longlong *)pFVar27;
              *(longlong *)(local_b8.Data + lVar25 * 0x10 + 8) = *(longlong *)(pFVar27 + 8);
              *(longlong *)(pFVar27 + 8) = 0;
              *(longlong *)pFVar27 = 0;
            }
          }
          uVar28 = uVar28 + 1;
          local_a8 = local_a8 + 1;
          lVar25 = local_98 + 0x10;
          local_98 = lVar25;
        } while ((int)uVar28 < (this->Elements).ArrayNum);
      }
      pTVar24 = &this->Elements;
      `FTSTicker::Tick'::__l2::<lambda_1>::operator()(&local_90);
    } while ((int)uVar28 < (this->Elements).ArrayNum);
    piVar2 = &(this->Elements).ArrayMax;
    pTVar7 = (TSharedPtr<FTSTicker::FElement,1> *)(pTVar24->AllocatorInstance).Data;
    iVar18 = (this->Elements).ArrayNum;
    if ((this->Elements).ArrayMax < 0) {
      DestructItems<TSharedPtr<FTSTicker::FElement,1>,int>(pTVar7,iVar18);
      (this->Elements).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar24->AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<TSharedPtr<FTSTicker::FElement,1>,int>(pTVar7,iVar18);
      (this->Elements).ArrayNum = 0;
    }
    pTVar7 = (TSharedPtr<FTSTicker::FElement,1> *)(pTVar24->AllocatorInstance).Data;
    uVar9 = (this->Elements).ArrayNum;
    (pTVar24->AllocatorInstance).Data = local_b8.Data;
    (this->Elements).ArrayNum = (int)uStack_b0;
    (this->Elements).ArrayMax = uStack_b0._4_4_;
    DestructItems<TSharedPtr<FTSTicker::FElement,1>,int>(pTVar7,uVar9);
    FVar23 = local_88;
    if (pTVar7 != (TSharedPtr<FTSTicker::FElement,1> *)0x0) {
      FMemory::Free(pTVar7);
    }
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

