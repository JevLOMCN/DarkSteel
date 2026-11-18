// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FTSTickerObjectBase @ 141585760

FTSTickerObjectBase * __thiscall
FTSTickerObjectBase::FTSTickerObjectBase(FTSTickerObjectBase *this,float param_1,FTSTicker *param_2)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  undefined1 *puVar2;
  int iVar3;
  atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> aVar4;
  atomic<double> aVar5;
  TAtomic<unsigned___int64> TVar6;
  longlong lVar7;
  FElement *pFVar8;
  undefined8 *puVar9;
  atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> aVar10;
  double dVar11;
  FElement *pFVar12;
  FElement *pFVar13;
  undefined8 local_78 [2];
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  int local_58;
  FDestructionSentinel local_50;
  ForAnyElementType *local_38;
  
  pFVar12 = (FElement *)0x0;
  pTVar1 = &this->TickHandle;
  pTVar1->Object = (FElement *)0x0;
  this->_padding_ = (longlong)&___7FTSTickerObjectBase__6B_;
  (this->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_68 = (undefined1  [8])0x0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  if (local_58 != 3) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,3,0x10);
    local_58 = 3;
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    *(undefined ***)local_60.Data =
         &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    LOCK();
    UNLOCK();
    lVar7 = (longlong)UE::Delegates::Private::GNextID + 1;
    TVar6 = (TAtomic<unsigned___int64>)((longlong)UE::Delegates::Private::GNextID + 1);
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = (longlong)UE::Delegates::Private::GNextID + 2;
      TVar6 = (TAtomic<unsigned___int64>)((longlong)UE::Delegates::Private::GNextID + 2);
    }
    UE::Delegates::Private::GNextID = TVar6;
    *(longlong *)(local_60.Data + 0x10) = lVar7;
    *(undefined ***)local_60.Data =
         &
         ___7__TBaseRawMethodDelegateInstance__0A_VFTSTickerObjectBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(code **)(local_60.Data + 0x20) = _vcall__8__flat______;
    *(FTSTickerObjectBase **)(local_60.Data + 0x18) = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pFVar8 = ::operator_new(0x50);
  pFVar13 = pFVar12;
  if (pFVar8 != (FElement *)0x0) {
    aVar5 = param_2->CurrentTime;
    pFVar8->DelayTime = param_1;
    pFVar8->FireTime = (double)param_1 + (double)aVar5;
    TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>::
    TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)&local_50,
               (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68);
    *(undefined8 *)&(pFVar8->Function).field_0x0 = 0;
    *(undefined8 *)&(pFVar8->Function).field_0x28 = 0;
    puVar9 = FMemory::Malloc(0x20,8);
    *(undefined8 **)&(pFVar8->Function).field_0x28 = puVar9;
    *puVar9 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FTSTicker::FElement::FElement'::`1'::<lambda_28_>,1,1>::
               _vftable_;
    TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>::
    TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)(puVar9 + 1),
               (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)&local_50);
    if ((TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)(puVar9 + 1) !=
        (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)0x0) {
      *(code **)&(pFVar8->Function).field_0x0 =
           UE::Core::Private::Function::
           TFunctionRefCaller<`FTSTicker::FElement::FElement'::__l1::<lambda_28_>,bool,float>::Call;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_50);
    *(undefined8 *)&(pFVar8->State).field_0x0 = 0;
    pFVar13 = pFVar8;
  }
  pFVar8 = ::operator_new(0x18);
  if (pFVar8 == (FElement *)0x0) {
    aVar10 = (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
             FMemory::Malloc(0x18,8);
    *(undefined8 *)aVar10 = 0;
    *(FElement **)((longlong)aVar10 + 8) = pFVar13;
    *(undefined8 *)((longlong)aVar10 + 0x10) = 0;
  }
  else {
    pFVar8->DelayTime = 1.4013e-45;
    *(undefined4 *)&pFVar8->field_0xc = 1;
    pFVar8->FireTime =
         (double)&
                 ___7__TReferenceControllerWithDeleter_UFElement_FTSTicker__U__DefaultDeleter_UFElement_FTSTicker___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(FElement **)&(pFVar8->Function).field_0x0 = pFVar13;
    LOCK();
    pFVar8->DelayTime = (float)((int)pFVar8->DelayTime + 1);
    UNLOCK();
    aVar10 = (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
             FMemory::Malloc(0x18,8);
    *(undefined8 *)aVar10 = 0;
    *(FElement **)((longlong)aVar10 + 8) = pFVar13;
    *(FElement **)((longlong)aVar10 + 0x10) = pFVar8;
    LOCK();
    pFVar8->DelayTime = (float)((int)pFVar8->DelayTime + 1);
    UNLOCK();
    pFVar12 = pFVar8;
  }
  LOCK();
  aVar4 = (param_2->AddedElements).Head;
  (param_2->AddedElements).Head = aVar10;
  UNLOCK();
  *(atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> *)aVar4 = aVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  if (pFVar12 != (FElement *)0x0) {
    LOCK();
    *(int *)&pFVar12->field_0xc = *(int *)&pFVar12->field_0xc + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  if (pTVar1 == (TWeakPtr<FTSTicker::FElement,1> *)local_78) {
    if (pFVar12 == (FElement *)0x0) goto LAB_1415859c0;
    LOCK();
    puVar2 = &pFVar12->field_0xc;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) goto LAB_1415859c0;
    dVar11 = pFVar12->FireTime;
  }
  else {
    pFVar8 = (FElement *)(this->TickHandle).WeakReferenceCount.ReferenceController;
    pTVar1->Object = pFVar13;
    (this->TickHandle).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pFVar12;
    if (pFVar8 == (FElement *)0x0) goto LAB_1415859c0;
    LOCK();
    puVar2 = &pFVar8->field_0xc;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) goto LAB_1415859c0;
    dVar11 = pFVar8->FireTime;
    pFVar12 = pFVar8;
  }
  (**(code **)((longlong)dVar11 + 8))(pFVar12,1);
LAB_1415859c0:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return this;
}

// ~FTSTickerObjectBase @ 14158a380

void __thiscall FTSTickerObjectBase::~FTSTickerObjectBase(FTSTickerObjectBase *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  this->_padding_ = (longlong)&___7FTSTickerObjectBase__6B_;
  local_18.Object = (this->TickHandle).Object;
  local_18.WeakReferenceCount.ReferenceController =
       (this->TickHandle).WeakReferenceCount.ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  pTVar3 = (this->TickHandle).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014158a3dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

