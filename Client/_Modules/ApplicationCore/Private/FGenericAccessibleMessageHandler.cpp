// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 12

// FGenericAccessibleMessageHandler @ 1423c1a30

FGenericAccessibleMessageHandler * __thiscall
FGenericAccessibleMessageHandler::FGenericAccessibleMessageHandler
          (FGenericAccessibleMessageHandler *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FGenericAccessibleMessageHandler *pFVar4;
  
  this->bApplicationIsAccessible = false;
  this->bIsActive = false;
  *(undefined8 *)&this->AccessibleEventDelegate = 0;
  this->_padding_ = (longlong)&___7FGenericAccessibleMessageHandler__6B_;
  *(undefined8 *)&(this->AccessibleEventDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->AccessibleEventDelegate).field_0x10 = 0;
  pTVar3 = ::operator_new(0x68);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->AccessibleUserRegistry).Object = (FGenericAccessibleUserRegistry *)0x10;
    (this->AccessibleUserRegistry).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFGenericAccessibleUserRegistry___00_SharedPointerInternals__6B_
    ;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[5]._padding_ = 0;
    pTVar3[6]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)&___7FGenericAccessibleUserRegistry__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[4]._padding_ + 4) = 0x80;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    (this->AccessibleUserRegistry).Object = (FGenericAccessibleUserRegistry *)(pTVar3 + 1);
    (this->AccessibleUserRegistry).SharedReferenceCount.ReferenceController = pTVar3;
    if ((FGenericAccessibleUserRegistry *)(pTVar3 + 1) == (FGenericAccessibleUserRegistry *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FGenericAccessibleMessageHandler *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  return this;
}

// ~FGenericAccessibleMessageHandler @ 1423c67b0

void __thiscall
FGenericAccessibleMessageHandler::~FGenericAccessibleMessageHandler
          (FGenericAccessibleMessageHandler *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FGenericAccessibleMessageHandler__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->AccessibleEventDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AccessibleUserRegistry).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->AccessibleEventDelegate);
  pvVar1 = *(void **)&(this->AccessibleEventDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->AccessibleEventDelegate);
  return;
}

// ApplicationIsAccessible @ 1423d07d0

bool __thiscall
FGenericAccessibleMessageHandler::ApplicationIsAccessible(FGenericAccessibleMessageHandler *this)

{
  if ((this->bApplicationIsAccessible != false) && (GAllowAccessibility)) {
    return true;
  }
  return false;
}

// GetAccessibleWidgetFromId @ 1423dcab0

TSharedPtr<IAccessibleWidget,1> * __thiscall
FGenericAccessibleMessageHandler::GetAccessibleWidgetFromId
          (FGenericAccessibleMessageHandler *this,
          TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__,int param_1)

{
  __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetAccessibleWindow @ 1423dcad0

TSharedPtr<IAccessibleWidget,1> * __thiscall
FGenericAccessibleMessageHandler::GetAccessibleWindow
          (FGenericAccessibleMessageHandler *this,
          TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__,
          TSharedRef<FGenericWindow,1> *param_1)

{
  __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetAccessibleWindowId @ 1423dcaf0

int __thiscall
FGenericAccessibleMessageHandler::GetAccessibleWindowId
          (FGenericAccessibleMessageHandler *this,TSharedRef<FGenericWindow,1> *param_1)

{
  return -1;
}

// MakeAccessibleAnnouncement @ 1423eeb40

void __thiscall
FGenericAccessibleMessageHandler::MakeAccessibleAnnouncement
          (FGenericAccessibleMessageHandler *this,FString *param_1)

{
  return;
}

// OnActivate @ 1423f0100

void __thiscall FGenericAccessibleMessageHandler::OnActivate(FGenericAccessibleMessageHandler *this)

{
  return;
}

// OnDeactivate @ 1423f01e0

void __thiscall
FGenericAccessibleMessageHandler::OnDeactivate(FGenericAccessibleMessageHandler *this)

{
  return;
}

// RunInThread @ 1424025a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGenericAccessibleMessageHandler::RunInThread
          (FGenericAccessibleMessageHandler *this,TFunction<void___cdecl(void)> *param_1,
          bool param_2,Type param_3)

{
  return;
}

// SetAccessibleEventDelegate @ 1424039c0

void __thiscall
FGenericAccessibleMessageHandler::SetAccessibleEventDelegate
          (FGenericAccessibleMessageHandler *this,
          TDelegate<void___cdecl(FAccessibleEventArgs_const_&),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ForAnyElementType FVar4;
  int iVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  if (param_1 != &this->AccessibleEventDelegate) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar5 = local_38;
    FVar4.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->AccessibleEventDelegate,(FWriteAccessScope *)&local_30);
    if ((*(int *)&(this->AccessibleEventDelegate).field_0x10 != 0) &&
       (puVar2 = *(undefined8 **)&(this->AccessibleEventDelegate).field_0x8,
       puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->AccessibleEventDelegate).field_0x8,0,0,0x10);
      *(undefined4 *)&(this->AccessibleEventDelegate).field_0x10 = 0;
    }
    pvVar3 = *(void **)&(this->AccessibleEventDelegate).field_0x8;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    *(FScriptContainerElement **)&(this->AccessibleEventDelegate).field_0x8 = FVar4.Data;
    *(int *)&(this->AccessibleEventDelegate).field_0x10 = iVar5;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return;
}

// SetActive @ 142403be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGenericAccessibleMessageHandler::SetActive(FGenericAccessibleMessageHandler *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = GAllowAccessibility;
  if ((param_1 && GAllowAccessibility) != this->bIsActive) {
    this->bIsActive = param_1 && GAllowAccessibility;
    if (param_1 && bVar1) {
      if (5 < (byte)LogAccessibility._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility);
      }
                    /* WARNING: Could not recover jumptable at 0x000142403c22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x30))(this);
      return;
    }
    (**(code **)(this->_padding_ + 0x38))();
    if (5 < (byte)LogAccessibility._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility);
      return;
    }
  }
  return;
}

