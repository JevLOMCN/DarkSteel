// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 407

// CreateCopy @ 142be56e0

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_VFTokenizedMessage___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be5780

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_VFTokenizedMessage___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be57f0

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_VFTokenizedMessage___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be58b0

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_VFTokenizedMessage___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be5950

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_VFTokenizedMessage___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be59c0

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_VFTokenizedMessage___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be5a80

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_VIMessageLogListing___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be5b20

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_VIMessageLogListing___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be5b90

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_VIMessageLogListing___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be5c50

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_VIMessageLogListing___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be5cf0

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_VIMessageLogListing___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be5d60

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_VIMessageLogListing___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be5e20

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedRef_VFMessageFilter___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be5ec0

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedRef_VFMessageFilter___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be5f30

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedRef_VFMessageFilter___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be5ff0

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedRef_VFMessageFilter___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be6090

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedRef_VFMessageFilter___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be6100

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedRef_VFMessageFilter___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be61c0

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedRef_VFTokenizedMessage___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be6260

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedRef_VFTokenizedMessage___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be62d0

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedRef_VFTokenizedMessage___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be6390

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedRef_VFTokenizedMessage___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be6430

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedRef_VFTokenizedMessage___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be64a0

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedRef_VFTokenizedMessage___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be6560

void __thiscall
TBaseSPMethodDelegateInstance<1,FMessageFilter_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVFMessageFilter___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be6600

void __thiscall
TBaseSPMethodDelegateInstance<1,FMessageFilter_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVFMessageFilter___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be6670

void __thiscall
TBaseSPMethodDelegateInstance<1,FMessageFilter_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVFMessageFilter___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar7[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar3 = *(undefined4 *)((longlong)this + 0x2c);
    uVar4 = *(undefined4 *)((longlong)this + 0x30);
    uVar5 = *(undefined4 *)((longlong)this + 0x34);
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((longlong)this + 0x28);
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be6730

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogCategoryListRow___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be67d0

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogCategoryListRow___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be6840

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogCategoryListRow___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be6900

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogCategoryListRow___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be69a0

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogCategoryListRow___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be6a10

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogCategoryListRow___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be6ad0

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogListing___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be6b70

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogListing___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be6be0

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogListing___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be6ca0

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogListing___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be6d40

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogListing___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be6db0

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogListing___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be6e70

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogListing___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be6f10

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogListing___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be6f80

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogListing___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be7040

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogListing___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be70e0

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogListing___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be7150

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogListing___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be7210

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogListing___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be72b0

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogListing___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be7320

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogListing___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be73e0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSHeaderRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SMultiColumnTableRow_V__TSharedPtr_VIMessageLogListing___00_____00__A6AXAEBV__TSharedRef_VSHeaderRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be7480

void __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSHeaderRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SMultiColumnTableRow_V__TSharedPtr_VIMessageLogListing___00_____00__A6AXAEBV__TSharedRef_VSHeaderRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be74f0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSHeaderRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SMultiColumnTableRow_V__TSharedPtr_VIMessageLogListing___00_____00__A6AXAEBV__TSharedRef_VSHeaderRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be75b0

void __thiscall
TBaseSPMethodDelegateInstance<0,FMessageFilter,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMessageFilter___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be7650

void __thiscall
TBaseSPMethodDelegateInstance<0,FMessageFilter,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMessageFilter___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be76c0

void __thiscall
TBaseSPMethodDelegateInstance<0,FMessageFilter,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMessageFilter___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar7[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar3 = *(undefined4 *)((longlong)this + 0x2c);
    uVar4 = *(undefined4 *)((longlong)this + 0x30);
    uVar5 = *(undefined4 *)((longlong)this + 0x34);
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((longlong)this + 0x28);
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be7780

void __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMessageLogListingViewModel___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be7820

void __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMessageLogListingViewModel___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be7890

void __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMessageLogListingViewModel___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be7950

void __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMessageLogListingViewModel___00__A6AXXZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be79f0

void __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMessageLogListingViewModel___00__A6AXXZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be7a60

void __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar7 + 1) = (int)this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMessageLogListingViewModel___00__A6AXXZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be7b20

void __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMessageLogViewModel___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be7bc0

void __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMessageLogViewModel___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be7c30

void __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMessageLogViewModel___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be7cf0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VIMessageLogListing___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLog___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VIMessageLogListing___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be7d90

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VIMessageLogListing___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLog___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VIMessageLogListing___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be7e00

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VIMessageLogListing___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLog___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VIMessageLogListing___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be7ec0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(TSharedPtr<IMessageLogListing,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIMessageLogListing___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLog___00__A6AXV__TSharedPtr_VIMessageLogListing___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be7f60

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(TSharedPtr<IMessageLogListing,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIMessageLogListing___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLog___00__A6AXV__TSharedPtr_VIMessageLogListing___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be7fd0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(TSharedPtr<IMessageLogListing,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIMessageLogListing___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLog___00__A6AXV__TSharedPtr_VIMessageLogListing___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar7[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar3 = *(undefined4 *)((longlong)this + 0x2c);
    uVar4 = *(undefined4 *)((longlong)this + 0x30);
    uVar5 = *(undefined4 *)((longlong)this + 0x34);
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((longlong)this + 0x28);
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be8090

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLog___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be8130

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLog___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be81a0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLog___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be8260

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be8300

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be8370

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be8430

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_VFMessageFilter___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_VFMessageFilter___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be84d0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_VFMessageFilter___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_VFMessageFilter___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be8540

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_VFMessageFilter___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_VFMessageFilter___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be8600

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_VFTokenizedMessage___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_VFTokenizedMessage___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be86a0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_VFTokenizedMessage___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_VFTokenizedMessage___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be8710

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_VFTokenizedMessage___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_VFTokenizedMessage___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be87d0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be8870

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be88e0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be89a0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be8a40

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be8ab0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be8b70

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFTokenizedMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXV__TSharedPtr_VFTokenizedMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be8c10

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFTokenizedMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXV__TSharedPtr_VFTokenizedMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be8c80

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFTokenizedMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXV__TSharedPtr_VFTokenizedMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be8d40

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFTokenizedMessage___00__AEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXV__TSharedPtr_VFTokenizedMessage___00__AEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be8de0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFTokenizedMessage___00__AEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXV__TSharedPtr_VFTokenizedMessage___00__AEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be8e50

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFTokenizedMessage___00__AEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXV__TSharedPtr_VFTokenizedMessage___00__AEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be8f10

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFTokenizedMessage___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXV__TSharedPtr_VFTokenizedMessage___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be8fb0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFTokenizedMessage___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXV__TSharedPtr_VFTokenizedMessage___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be9020

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFTokenizedMessage___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXV__TSharedPtr_VFTokenizedMessage___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar7[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar3 = *(undefined4 *)((longlong)this + 0x2c);
    uVar4 = *(undefined4 *)((longlong)this + 0x30);
    uVar5 = *(undefined4 *)((longlong)this + 0x34);
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((longlong)this + 0x28);
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be90e0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be9180

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be91f0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be92b0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__I__6B_;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXXZUFDefaultDelegateUserPolicy__I__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be9350

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__I__6B_;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXXZUFDefaultDelegateUserPolicy__I__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142be93c0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__I__6B_;
    *(int *)(puVar7 + 1) = (int)this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXXZUFDefaultDelegateUserPolicy__I__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be9480

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageToken___00____6B_
    ;
    puVar4[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar4[3] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogMessageListRow___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageToken___00____6B_
    ;
    puVar4[4] = (this->UserObject).Object;
    pTVar2 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar4[6] = *(undefined8 *)&this->MethodPtr;
    puVar4[7] = uVar3;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be9540

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageToken___00____6B_
    ;
    puVar4[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar4[3] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogMessageListRow___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageToken___00____6B_
    ;
    puVar4[4] = (this->UserObject).Object;
    pTVar2 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar4[6] = *(undefined8 *)&this->MethodPtr;
    puVar4[7] = uVar3;
  }
  return;
}

// CreateCopy @ 142be95c0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar8 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageToken___00____6B_
    ;
    puVar8[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar8[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar8[3] = this->_padding_;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogMessageListRow___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageToken___00____6B_
    ;
    puVar8[4] = (this->UserObject).Object;
    pTVar2 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar8[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar6 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar8 + 6) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar8 + 0x34) = uVar4;
    *(undefined4 *)(puVar8 + 7) = uVar5;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar6;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be9690

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VFActionToken___00____6B_
    ;
    puVar4[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar4[3] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogMessageListRow___00__A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VFActionToken___00____6B_
    ;
    puVar4[4] = (this->UserObject).Object;
    pTVar2 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar4[6] = *(undefined8 *)&this->MethodPtr;
    puVar4[7] = uVar3;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be9750

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VFActionToken___00____6B_
    ;
    puVar4[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar4[3] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogMessageListRow___00__A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VFActionToken___00____6B_
    ;
    puVar4[4] = (this->UserObject).Object;
    pTVar2 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar4[6] = *(undefined8 *)&this->MethodPtr;
    puVar4[7] = uVar3;
  }
  return;
}

// CreateCopy @ 142be97d0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar8 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VFActionToken___00____6B_
    ;
    puVar8[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar8[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar8[3] = this->_padding_;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogMessageListRow___00__A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VFActionToken___00____6B_
    ;
    puVar8[4] = (this->UserObject).Object;
    pTVar2 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar8[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar6 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar8 + 6) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar8 + 0x34) = uVar4;
    *(undefined4 *)(puVar8 + 7) = uVar5;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar6;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be98a0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageToken___00____6B_
    ;
    puVar4[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar4[3] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogMessageListRow___00__A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageToken___00____6B_
    ;
    puVar4[4] = (this->UserObject).Object;
    pTVar2 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar4[6] = *(undefined8 *)&this->MethodPtr;
    puVar4[7] = uVar3;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be9960

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageToken___00____6B_
    ;
    puVar4[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar4[3] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogMessageListRow___00__A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageToken___00____6B_
    ;
    puVar4[4] = (this->UserObject).Object;
    pTVar2 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar4[6] = *(undefined8 *)&this->MethodPtr;
    puVar4[7] = uVar3;
  }
  return;
}

// CreateCopy @ 142be99e0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar8 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageToken___00____6B_
    ;
    puVar8[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar8[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar8[3] = this->_padding_;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogMessageListRow___00__A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageToken___00____6B_
    ;
    puVar8[4] = (this->UserObject).Object;
    pTVar2 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar8[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar6 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar8 + 6) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar8 + 0x34) = uVar4;
    *(undefined4 *)(puVar8 + 7) = uVar5;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar6;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142bf0080

FSlateColor * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FSlateColor *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *pSVar3;
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *pSVar4;
  bool bVar5;
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *local_res8;
  
  pSVar3 = (STableRow<TSharedPtr<FTokenizedMessage,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (STableRow<TSharedPtr<FTokenizedMessage,1>_> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (STableRow<TSharedPtr<FTokenizedMessage,1>_> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf00c1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_142bf00c1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<STableRow<TSharedPtr<FTokenizedMessage,1>_>,STableRow<TSharedPtr<FTokenizedMessage,1>_>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 142bf0110

FSlateBrush * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *pSVar3;
  FSlateBrush *pFVar4;
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *pSVar5;
  bool bVar6;
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *local_res8;
  
  pSVar3 = (STableRow<TSharedPtr<FTokenizedMessage,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (STableRow<TSharedPtr<FTokenizedMessage,1>_> *)0x0;
  pSVar5 = pSVar3;
  if (pSVar3 != (STableRow<TSharedPtr<FTokenizedMessage,1>_> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0141;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar6 = aVar1 == aVar2;
      if (bVar6) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
    pSVar5 = pSVar3;
  }
LAB_142bf0141:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<STableRow<TSharedPtr<FTokenizedMessage,1>_>,STableRow<TSharedPtr<FTokenizedMessage,1>_>_*_&>
                     (&local_res8);
  pFVar4 = (FSlateBrush *)
           (**(code **)&this->MethodPtr)
                     ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pFVar4;
}

// Execute @ 142bf0190

FSlateColor * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FSlateColor *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar3;
  STableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar4;
  bool bVar5;
  STableRow<TSharedPtr<IMessageLogListing,1>_> *local_res8;
  
  pSVar3 = (STableRow<TSharedPtr<IMessageLogListing,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (STableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (STableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf01d1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_142bf01d1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<STableRow<TSharedPtr<IMessageLogListing,1>_>,STableRow<TSharedPtr<IMessageLogListing,1>_>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 142bf0220

FSlateBrush * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar3;
  FSlateBrush *pFVar4;
  STableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar5;
  bool bVar6;
  STableRow<TSharedPtr<IMessageLogListing,1>_> *local_res8;
  
  pSVar3 = (STableRow<TSharedPtr<IMessageLogListing,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (STableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0;
  pSVar5 = pSVar3;
  if (pSVar3 != (STableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0251;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar6 = aVar1 == aVar2;
      if (bVar6) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
    pSVar5 = pSVar3;
  }
LAB_142bf0251:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<STableRow<TSharedPtr<IMessageLogListing,1>_>,STableRow<TSharedPtr<IMessageLogListing,1>_>_*_&>
                     (&local_res8);
  pFVar4 = (FSlateBrush *)
           (**(code **)&this->MethodPtr)
                     ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pFVar4;
}

// Execute @ 142bf02a0

FSlateColor * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FSlateColor *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedRef<FMessageFilter,1>_> *pSVar3;
  STableRow<TSharedRef<FMessageFilter,1>_> *pSVar4;
  bool bVar5;
  STableRow<TSharedRef<FMessageFilter,1>_> *local_res8;
  
  pSVar3 = (STableRow<TSharedRef<FMessageFilter,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf02e1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_142bf02e1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<STableRow<TSharedRef<FMessageFilter,1>_>,STableRow<TSharedRef<FMessageFilter,1>_>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 142bf0330

FSlateBrush * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedRef<FMessageFilter,1>_> *pSVar3;
  FSlateBrush *pFVar4;
  STableRow<TSharedRef<FMessageFilter,1>_> *pSVar5;
  bool bVar6;
  STableRow<TSharedRef<FMessageFilter,1>_> *local_res8;
  
  pSVar3 = (STableRow<TSharedRef<FMessageFilter,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0;
  pSVar5 = pSVar3;
  if (pSVar3 != (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0361;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar6 = aVar1 == aVar2;
      if (bVar6) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
    pSVar5 = pSVar3;
  }
LAB_142bf0361:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<STableRow<TSharedRef<FMessageFilter,1>_>,STableRow<TSharedRef<FMessageFilter,1>_>_*_&>
                     (&local_res8);
  pFVar4 = (FSlateBrush *)
           (**(code **)&this->MethodPtr)
                     ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pFVar4;
}

// Execute @ 142bf03b0

FSlateColor * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FSlateColor *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedRef<FTokenizedMessage,1>_> *pSVar3;
  STableRow<TSharedRef<FTokenizedMessage,1>_> *pSVar4;
  bool bVar5;
  STableRow<TSharedRef<FTokenizedMessage,1>_> *local_res8;
  
  pSVar3 = (STableRow<TSharedRef<FTokenizedMessage,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (STableRow<TSharedRef<FTokenizedMessage,1>_> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (STableRow<TSharedRef<FTokenizedMessage,1>_> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf03f1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_142bf03f1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<STableRow<TSharedRef<FTokenizedMessage,1>_>,STableRow<TSharedRef<FTokenizedMessage,1>_>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 142bf0440

FSlateBrush * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedRef<FTokenizedMessage,1>_> *pSVar3;
  FSlateBrush *pFVar4;
  STableRow<TSharedRef<FTokenizedMessage,1>_> *pSVar5;
  bool bVar6;
  STableRow<TSharedRef<FTokenizedMessage,1>_> *local_res8;
  
  pSVar3 = (STableRow<TSharedRef<FTokenizedMessage,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (STableRow<TSharedRef<FTokenizedMessage,1>_> *)0x0;
  pSVar5 = pSVar3;
  if (pSVar3 != (STableRow<TSharedRef<FTokenizedMessage,1>_> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0471;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar6 = aVar1 == aVar2;
      if (bVar6) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
    pSVar5 = pSVar3;
  }
LAB_142bf0471:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<STableRow<TSharedRef<FTokenizedMessage,1>_>,STableRow<TSharedRef<FTokenizedMessage,1>_>_*_&>
                     (&local_res8);
  pFVar4 = (FSlateBrush *)
           (**(code **)&this->MethodPtr)
                     ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pFVar4;
}

// Execute @ 142bf04c0

ECheckBoxState __thiscall
TBaseSPMethodDelegateInstance<1,FMessageFilter_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(void *this)

{
  atomic<int> aVar1;
  ECheckBoxState EVar2;
  atomic<int> aVar3;
  FMessageFilter *pFVar4;
  FMessageFilter *pFVar5;
  bool bVar6;
  FMessageFilter *local_res8;
  
  pFVar4 = *(FMessageFilter **)((longlong)this + 0x20);
  local_res8 = (FMessageFilter *)0x0;
  pFVar5 = pFVar4;
  if (pFVar4 != (FMessageFilter *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar4->_padding_;
    do {
      pFVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf04f1;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar4->_padding_;
      bVar6 = aVar1 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar4->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar6);
    local_res8 = *(FMessageFilter **)((longlong)this + 0x18);
    pFVar5 = pFVar4;
  }
LAB_142bf04f1:
  pFVar4 = UE::Core::Private::DereferenceIfNecessary<FMessageFilter,FMessageFilter_*_&>(&local_res8)
  ;
  EVar2 = (**(code **)((longlong)this + 0x28))
                    ((longlong)&pFVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return EVar2;
}

// Execute @ 142bf0540

FSlateColor * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FSlateColor *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogCategoryListRow *pSVar3;
  SMessageLogCategoryListRow *pSVar4;
  bool bVar5;
  SMessageLogCategoryListRow *local_res8;
  
  pSVar3 = (SMessageLogCategoryListRow *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogCategoryListRow *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SMessageLogCategoryListRow *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0581;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_142bf0581:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SMessageLogCategoryListRow,SMessageLogCategoryListRow_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 142bf05d0

FText * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FText *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogCategoryListRow *pSVar3;
  SMessageLogCategoryListRow *pSVar4;
  bool bVar5;
  SMessageLogCategoryListRow *local_res8;
  
  pSVar3 = (SMessageLogCategoryListRow *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogCategoryListRow *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SMessageLogCategoryListRow *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0611;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_142bf0611:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SMessageLogCategoryListRow,SMessageLogCategoryListRow_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 142bf0660

EVisibility __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  TEnumAsByte<EVisibility::Private> in_DL;
  SMessageLogListing *pSVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  
  pSVar3 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogListing *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SMessageLogListing *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf06a1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_142bf06a1:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)in_DL.Value;
}

// Execute @ 142bf06f0

TSharedRef<SWidget,1> * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
          *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  SMessageLogListing *pSVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  
  pSVar3 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogListing *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SMessageLogListing *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0731;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_142bf0731:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 142bf0780

FText * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FText *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  SMessageLogListing *pSVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  
  pSVar3 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogListing *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SMessageLogListing *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf07c1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_142bf07c1:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 142bf0810

void __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  SMessageLogListing *pSVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  
  pSVar3 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogListing *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SMessageLogListing *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0841;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_142bf0841:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 142bf0890

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  undefined1 uVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  SMessageLogListing *pSVar5;
  bool bVar6;
  SMessageLogListing *local_res8;
  
  pSVar4 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogListing *)0x0;
  pSVar5 = pSVar4;
  if (pSVar4 != (SMessageLogListing *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar4->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf08c1;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar4->_padding_;
      bVar6 = aVar1 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar4->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
    pSVar5 = pSVar4;
  }
LAB_142bf08c1:
  pSVar4 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                     (&local_res8);
  uVar2 = (**(code **)&this->MethodPtr)
                    ((longlong)&pSVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return (bool)uVar2;
}

// Execute @ 142bf0910

void __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedRef<SHeaderRow,1> *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar3;
  SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar4;
  bool bVar5;
  SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *local_res8;
  
  pSVar3 = (SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0951;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_142bf0951:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 142bf09a0

void __thiscall
TBaseSPMethodDelegateInstance<0,FMessageFilter,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::Execute(void *this,ECheckBoxState param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FMessageFilter *pFVar3;
  FMessageFilter *pFVar4;
  bool bVar5;
  FMessageFilter *local_res8;
  
  pFVar3 = *(FMessageFilter **)((longlong)this + 0x20);
  local_res8 = (FMessageFilter *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FMessageFilter *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf09e1;
      LOCK();
      aVar2 = *(atomic<int> *)&pFVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pFVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = *(FMessageFilter **)((longlong)this + 0x18);
    pFVar4 = pFVar3;
  }
LAB_142bf09e1:
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FMessageFilter,FMessageFilter_*_&>(&local_res8)
  ;
  (**(code **)((longlong)this + 0x28))
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 142bf0a30

void __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FMessageLogListingViewModel *pFVar3;
  FMessageLogListingViewModel *pFVar4;
  bool bVar5;
  FMessageLogListingViewModel *local_res8;
  
  pFVar3 = (FMessageLogListingViewModel *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FMessageLogListingViewModel *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FMessageLogListingViewModel *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0a61;
      LOCK();
      aVar2 = *(atomic<int> *)&pFVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pFVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pFVar4 = pFVar3;
  }
LAB_142bf0a61:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FMessageLogListingViewModel,FMessageLogListingViewModel_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 142bf0ab0

void __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::Execute(TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FMessageLogListingViewModel *pFVar3;
  FMessageLogListingViewModel *pFVar4;
  bool bVar5;
  FMessageLogListingViewModel *local_res8;
  
  pFVar3 = (FMessageLogListingViewModel *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FMessageLogListingViewModel *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FMessageLogListingViewModel *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0ae1;
      LOCK();
      aVar2 = *(atomic<int> *)&pFVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pFVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pFVar4 = pFVar3;
  }
LAB_142bf0ae1:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FMessageLogListingViewModel,FMessageLogListingViewModel_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             (int)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 142bf0b30

void __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FMessageLogViewModel *pFVar3;
  FMessageLogViewModel *pFVar4;
  bool bVar5;
  FMessageLogViewModel *local_res8;
  
  pFVar3 = (FMessageLogViewModel *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FMessageLogViewModel *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FMessageLogViewModel *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0b61;
      LOCK();
      aVar2 = *(atomic<int> *)&pFVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pFVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pFVar4 = pFVar3;
  }
LAB_142bf0b61:
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FMessageLogViewModel,FMessageLogViewModel_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 142bf0bb0

TSharedRef<ITableRow,1> * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
         TSharedPtr<IMessageLogListing,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLog *pSVar3;
  SMessageLog *pSVar4;
  bool bVar5;
  SMessageLog *local_res8;
  IMessageLogListing *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar3 = (SMessageLog *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = pSVar3;
  local_res8 = (SMessageLog *)0x0;
  if (pSVar3 != (SMessageLog *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = (SMessageLog *)0x0;
      local_res8 = (SMessageLog *)0x0;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0c05;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    pSVar4 = pSVar3;
    local_res8 = (this->UserObject).Object;
  }
LAB_142bf0c05:
  local_28 = param_1->Object;
  local_18 = *(code **)&this->MethodPtr;
  uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IMessageLogListing *)0x0;
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLog,SMessageLog_*_&>(&local_res8);
  (*local_18)((longlong)&pSVar3->_padding_ + (longlong)(int)uStack_10,__return_storage_ptr__,
              &local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 142bf0ca0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(TSharedPtr<IMessageLogListing,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,TSharedPtr<IMessageLogListing,1> *param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLog *pSVar3;
  SMessageLog *pSVar4;
  bool bVar5;
  SMessageLog *local_res8;
  IMessageLogListing *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar3 = *(SMessageLog **)((longlong)this + 0x20);
  pSVar4 = pSVar3;
  local_res8 = (SMessageLog *)0x0;
  if (pSVar3 != (SMessageLog *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = (SMessageLog *)0x0;
      local_res8 = (SMessageLog *)0x0;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0ce5;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    pSVar4 = pSVar3;
    local_res8 = *(SMessageLog **)((longlong)this + 0x18);
  }
LAB_142bf0ce5:
  local_18 = *(code **)((longlong)this + 0x28);
  uStack_10 = *(undefined8 *)((longlong)this + 0x30);
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IMessageLogListing *)0x0;
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLog,SMessageLog_*_&>(&local_res8);
  (*local_18)((longlong)&pSVar3->_padding_ + (longlong)(int)uStack_10,&local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 142bf0d80

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLog *pSVar3;
  SMessageLog *pSVar4;
  bool bVar5;
  SMessageLog *local_res8;
  
  pSVar3 = (SMessageLog *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLog *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SMessageLog *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0db1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_142bf0db1:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLog,SMessageLog_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 142bf0e00

TSharedPtr<SWidget,1> * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  SMessageLogListing *pSVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  
  pSVar3 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogListing *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SMessageLogListing *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0e41;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_142bf0e41:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 142bf0e90

TSharedRef<ITableRow,1> * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
         TSharedRef<FMessageFilter,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  atomic<int> aVar1;
  FMessageFilter *pFVar2;
  atomic<int> aVar3;
  int iVar4;
  SMessageLogListing *pSVar5;
  SMessageLogListing *pSVar6;
  bool bVar7;
  SMessageLogListing *local_res8;
  FMessageFilter *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pSVar5 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogListing *)0x0;
  pSVar6 = pSVar5;
  if (pSVar5 != (SMessageLogListing *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar6 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0ee5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar5->_padding_;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar7);
    local_res8 = (this->UserObject).Object;
    pSVar6 = pSVar5;
  }
LAB_142bf0ee5:
  local_18 = *(FMessageFilter **)&this->MethodPtr;
  pTStack_10 = *(TReferenceControllerBase<1> **)&(this->MethodPtr).field_0x8;
  pSVar5 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                     (&local_res8);
  pFVar2 = local_18;
  iVar4 = (int)pTStack_10;
  local_18 = param_1->Object;
  pTStack_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*(code *)pFVar2)((longlong)&pSVar5->_padding_ + (longlong)iVar4,__return_storage_ptr__,&local_18,
                    param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 142bf0f90

TSharedRef<ITableRow,1> * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
         TSharedRef<FTokenizedMessage,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  atomic<int> aVar1;
  FTokenizedMessage *pFVar2;
  atomic<int> aVar3;
  int iVar4;
  SMessageLogListing *pSVar5;
  SMessageLogListing *pSVar6;
  bool bVar7;
  SMessageLogListing *local_res8;
  FTokenizedMessage *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pSVar5 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogListing *)0x0;
  pSVar6 = pSVar5;
  if (pSVar5 != (SMessageLogListing *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar6 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf0fe5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar5->_padding_;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar7);
    local_res8 = (this->UserObject).Object;
    pSVar6 = pSVar5;
  }
LAB_142bf0fe5:
  local_18 = *(FTokenizedMessage **)&this->MethodPtr;
  pTStack_10 = *(TReferenceControllerBase<1> **)&(this->MethodPtr).field_0x8;
  pSVar5 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                     (&local_res8);
  pFVar2 = local_18;
  iVar4 = (int)pTStack_10;
  local_18 = param_1->Object;
  pTStack_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*(code *)pFVar2)((longlong)&pSVar5->_padding_ + (longlong)iVar4,__return_storage_ptr__,&local_18,
                    param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 142bf1090

TSharedRef<SWidget,1> * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
          *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  SMessageLogListing *pSVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  
  pSVar3 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogListing *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SMessageLogListing *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf10d1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_142bf10d1:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 142bf1120

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FReply *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  SMessageLogListing *pSVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  
  pSVar3 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogListing *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SMessageLogListing *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf1161;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_142bf1161:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 142bf11b0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<FTokenizedMessage,1> *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  SMessageLogListing *pSVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  FTokenizedMessage *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar3 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = pSVar3;
  local_res8 = (SMessageLogListing *)0x0;
  if (pSVar3 != (SMessageLogListing *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = (SMessageLogListing *)0x0;
      local_res8 = (SMessageLogListing *)0x0;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf11e6;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    pSVar4 = pSVar3;
    local_res8 = (this->UserObject).Object;
  }
LAB_142bf11e6:
  local_18 = *(code **)&this->MethodPtr;
  uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FTokenizedMessage *)0x0;
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                     (&local_res8);
  (*local_18)((longlong)&pSVar3->_padding_ + (longlong)(int)uStack_10,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 142bf1270

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<FTokenizedMessage,1> *param_1,TSharedRef<IMessageToken,1> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  SMessageLogListing *pSVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  FTokenizedMessage *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar3 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = pSVar3;
  local_res8 = (SMessageLogListing *)0x0;
  if (pSVar3 != (SMessageLogListing *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = (SMessageLogListing *)0x0;
      local_res8 = (SMessageLogListing *)0x0;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf12b5;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    pSVar4 = pSVar3;
    local_res8 = (this->UserObject).Object;
  }
LAB_142bf12b5:
  local_18 = *(code **)&this->MethodPtr;
  uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FTokenizedMessage *)0x0;
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                     (&local_res8);
  (*local_18)((longlong)&pSVar3->_padding_ + (longlong)(int)uStack_10,&local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 142bf1350

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,TSharedPtr<FTokenizedMessage,1> *param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  SMessageLogListing *pSVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  FTokenizedMessage *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar3 = *(SMessageLogListing **)((longlong)this + 0x20);
  pSVar4 = pSVar3;
  local_res8 = (SMessageLogListing *)0x0;
  if (pSVar3 != (SMessageLogListing *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = (SMessageLogListing *)0x0;
      local_res8 = (SMessageLogListing *)0x0;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf1395;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    pSVar4 = pSVar3;
    local_res8 = *(SMessageLogListing **)((longlong)this + 0x18);
  }
LAB_142bf1395:
  local_18 = *(code **)((longlong)this + 0x28);
  uStack_10 = *(undefined8 *)((longlong)this + 0x30);
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FTokenizedMessage *)0x0;
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                     (&local_res8);
  (*local_18)((longlong)&pSVar3->_padding_ + (longlong)(int)uStack_10,&local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 142bf1430

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  SMessageLogListing *pSVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  
  pSVar3 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogListing *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SMessageLogListing *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf1461;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_142bf1461:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 142bf14b0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
::Execute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  SMessageLogListing *pSVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  
  pSVar3 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogListing *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SMessageLogListing *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf14e1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_142bf14e1:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             (int)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 142bf1530

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::Execute(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
          *this,FReply *__return_storage_ptr__)

{
  atomic<int> aVar1;
  code *pcVar2;
  atomic<int> aVar3;
  int iVar4;
  SMessageLogMessageListRow *pSVar5;
  SMessageLogMessageListRow *pSVar6;
  bool bVar7;
  SMessageLogMessageListRow *local_res8;
  code *local_18;
  longlong lStack_10;
  
  pSVar5 = (SMessageLogMessageListRow *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogMessageListRow *)0x0;
  pSVar6 = pSVar5;
  if (pSVar5 != (SMessageLogMessageListRow *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar6 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf1575;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar5->_padding_;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar7);
    local_res8 = (this->UserObject).Object;
    pSVar6 = pSVar5;
  }
LAB_142bf1575:
  local_18 = *(code **)&this->MethodPtr;
  lStack_10 = *(longlong *)&(this->MethodPtr).field_0x8;
  pSVar5 = UE::Core::Private::
           DereferenceIfNecessary<SMessageLogMessageListRow,SMessageLogMessageListRow_*_&>
                     (&local_res8);
  pcVar2 = local_18;
  iVar4 = (int)lStack_10;
  local_18 = (code *)this->_padding_;
  lStack_10 = this->_padding_;
  if (lStack_10 != 0) {
    LOCK();
    *(int *)(lStack_10 + 8) = *(int *)(lStack_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar2)((longlong)&pSVar5->_padding_ + (longlong)iVar4,__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return __return_storage_ptr__;
}

// Execute @ 142bf1610

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
::Execute(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
          *this)

{
  atomic<int> aVar1;
  code *pcVar2;
  atomic<int> aVar3;
  int iVar4;
  SMessageLogMessageListRow *pSVar5;
  SMessageLogMessageListRow *pSVar6;
  bool bVar7;
  SMessageLogMessageListRow *local_res8;
  code *local_18;
  longlong lStack_10;
  
  pSVar5 = (SMessageLogMessageListRow *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogMessageListRow *)0x0;
  pSVar6 = pSVar5;
  if (pSVar5 != (SMessageLogMessageListRow *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar6 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf1641;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar5->_padding_;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar7);
    local_res8 = (this->UserObject).Object;
    pSVar6 = pSVar5;
  }
LAB_142bf1641:
  local_18 = *(code **)&this->MethodPtr;
  lStack_10 = *(longlong *)&(this->MethodPtr).field_0x8;
  pSVar5 = UE::Core::Private::
           DereferenceIfNecessary<SMessageLogMessageListRow,SMessageLogMessageListRow_*_&>
                     (&local_res8);
  pcVar2 = local_18;
  iVar4 = (int)lStack_10;
  local_18 = (code *)this->_padding_;
  lStack_10 = this->_padding_;
  if (lStack_10 != 0) {
    LOCK();
    *(int *)(lStack_10 + 8) = *(int *)(lStack_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar2)((longlong)&pSVar5->_padding_ + (longlong)iVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// Execute @ 142bf16d0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::Execute(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
          *this)

{
  atomic<int> aVar1;
  code *pcVar2;
  atomic<int> aVar3;
  int iVar4;
  SMessageLogMessageListRow *pSVar5;
  SMessageLogMessageListRow *pSVar6;
  bool bVar7;
  SMessageLogMessageListRow *local_res8;
  code *local_18;
  longlong lStack_10;
  
  pSVar5 = (SMessageLogMessageListRow *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogMessageListRow *)0x0;
  pSVar6 = pSVar5;
  if (pSVar5 != (SMessageLogMessageListRow *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar6 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142bf1701;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar5->_padding_;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar7);
    local_res8 = (this->UserObject).Object;
    pSVar6 = pSVar5;
  }
LAB_142bf1701:
  local_18 = *(code **)&this->MethodPtr;
  lStack_10 = *(longlong *)&(this->MethodPtr).field_0x8;
  pSVar5 = UE::Core::Private::
           DereferenceIfNecessary<SMessageLogMessageListRow,SMessageLogMessageListRow_*_&>
                     (&local_res8);
  pcVar2 = local_18;
  iVar4 = (int)lStack_10;
  local_18 = (code *)this->_padding_;
  lStack_10 = this->_padding_;
  if (lStack_10 != 0) {
    LOCK();
    *(int *)(lStack_10 + 8) = *(int *)(lStack_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar2)((longlong)&pSVar5->_padding_ + (longlong)iVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// ExecuteIfSafe @ 142bf27e0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *local_res8;
  undefined1 local_28 [32];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf2810;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (STableRow<TSharedPtr<FTokenizedMessage,1>_> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<STableRow<TSharedPtr<FTokenizedMessage,1>_>,STableRow<TSharedPtr<FTokenizedMessage,1>_>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf2810:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf2870

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf28a0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (STableRow<TSharedPtr<FTokenizedMessage,1>_> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<STableRow<TSharedPtr<FTokenizedMessage,1>_>,STableRow<TSharedPtr<FTokenizedMessage,1>_>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf28a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf2900

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  STableRow<TSharedPtr<IMessageLogListing,1>_> *local_res8;
  undefined1 local_28 [32];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf2930;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (STableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<STableRow<TSharedPtr<IMessageLogListing,1>_>,STableRow<TSharedPtr<IMessageLogListing,1>_>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf2930:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf2990

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  STableRow<TSharedPtr<IMessageLogListing,1>_> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf29c0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (STableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<STableRow<TSharedPtr<IMessageLogListing,1>_>,STableRow<TSharedPtr<IMessageLogListing,1>_>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf29c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf2a20

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedRef<FMessageFilter,1>_> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  STableRow<TSharedRef<FMessageFilter,1>_> *local_res8;
  undefined1 local_28 [32];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf2a50;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<STableRow<TSharedRef<FMessageFilter,1>_>,STableRow<TSharedRef<FMessageFilter,1>_>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf2a50:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf2ab0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedRef<FMessageFilter,1>_> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  STableRow<TSharedRef<FMessageFilter,1>_> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf2ae0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<STableRow<TSharedRef<FMessageFilter,1>_>,STableRow<TSharedRef<FMessageFilter,1>_>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf2ae0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf2b40

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedRef<FTokenizedMessage,1>_> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  STableRow<TSharedRef<FTokenizedMessage,1>_> *local_res8;
  undefined1 local_28 [32];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf2b70;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (STableRow<TSharedRef<FTokenizedMessage,1>_> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<STableRow<TSharedRef<FTokenizedMessage,1>_>,STableRow<TSharedRef<FTokenizedMessage,1>_>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf2b70:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf2bd0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedRef<FTokenizedMessage,1>_> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  STableRow<TSharedRef<FTokenizedMessage,1>_> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf2c00;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (STableRow<TSharedRef<FTokenizedMessage,1>_> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<STableRow<TSharedRef<FTokenizedMessage,1>_>,STableRow<TSharedRef<FTokenizedMessage,1>_>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf2c00:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf2c60

bool __thiscall
TBaseSPMethodDelegateInstance<1,FMessageFilter_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FMessageFilter *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FMessageFilter *local_res8;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf2c90;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = *(FMessageFilter **)((longlong)this + 0x18);
    if (local_res8 != (FMessageFilter *)0x0) {
      pFVar3 = UE::Core::Private::DereferenceIfNecessary<FMessageFilter,FMessageFilter_*_&>
                         (&local_res8);
      (**(code **)((longlong)this + 0x28))
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf2c90:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf2cf0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogCategoryListRow *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SMessageLogCategoryListRow *local_res8;
  undefined1 local_28 [32];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf2d20;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SMessageLogCategoryListRow *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SMessageLogCategoryListRow,SMessageLogCategoryListRow_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf2d20:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf2d80

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogCategoryListRow *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SMessageLogCategoryListRow *local_res8;
  longlong *local_18 [2];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf2db0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SMessageLogCategoryListRow *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SMessageLogCategoryListRow,SMessageLogCategoryListRow_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_18);
      if (local_18[0] != (longlong *)0x0) {
        (**(code **)(*local_18[0] + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf2db0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf2e20

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  SMessageLogListing *local_res10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf2e50;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res10 = (this->UserObject).Object;
    if (local_res10 != (SMessageLogListing *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                         (&local_res10);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_res8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf2e50:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf2eb0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf2ee0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SMessageLogListing *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf2ee0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf2f50

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  longlong *local_18 [2];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf2f80;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SMessageLogListing *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_18);
      if (local_18[0] != (longlong *)0x0) {
        (**(code **)(*local_18[0] + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf2f80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf2ff0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf3020;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SMessageLogListing *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf3020:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf3080

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf30b0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SMessageLogListing *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf30b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf3110

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
                *this,TSharedRef<SHeaderRow,1> *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf3145;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf3145:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf31b0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FMessageFilter,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,ECheckBoxState param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FMessageFilter *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FMessageFilter *local_res8;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf31e5;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = *(FMessageFilter **)((longlong)this + 0x18);
    if (local_res8 != (FMessageFilter *)0x0) {
      pFVar3 = UE::Core::Private::DereferenceIfNecessary<FMessageFilter,FMessageFilter_*_&>
                         (&local_res8);
      (**(code **)((longlong)this + 0x28))
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf31e5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf3250

bool __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FMessageLogListingViewModel *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FMessageLogListingViewModel *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf3280;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (FMessageLogListingViewModel *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FMessageLogListingViewModel,FMessageLogListingViewModel_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf3280:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf32e0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FMessageLogListingViewModel *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FMessageLogListingViewModel *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf3310;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (FMessageLogListingViewModel *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FMessageLogListingViewModel,FMessageLogListingViewModel_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 (int)this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf3310:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf3370

bool __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FMessageLogViewModel *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FMessageLogViewModel *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf33a0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (FMessageLogViewModel *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FMessageLogViewModel,FMessageLogViewModel_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf33a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf3400

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<IMessageLogListing,1> *param_1,
               TSharedRef<STableViewBase,1> *param_2)

{
  SMessageLog *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLog *pSVar4;
  bool bVar5;
  SMessageLog *local_res8;
  IMessageLogListing *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pSVar1 = (SMessageLog *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLog *)0x0;
  if (pSVar1 != (SMessageLog *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142bf3441;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
  }
  pSVar4 = pSVar1;
  if (local_res8 != (SMessageLog *)0x0) {
    local_18 = *(code **)&this->MethodPtr;
    pTStack_10 = *(TReferenceControllerBase<1> **)&(this->MethodPtr).field_0x8;
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (IMessageLogListing *)0x0;
    pSVar4 = UE::Core::Private::DereferenceIfNecessary<SMessageLog,SMessageLog_*_&>(&local_res8);
    (*local_18)((longlong)&pSVar4->_padding_ + (longlong)(int)pTStack_10,&local_18,&local_28,param_2
               );
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_142bf3441:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 142bf3510

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(TSharedPtr<IMessageLogListing,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,TSharedPtr<IMessageLogListing,1> *param_1,Type param_2)

{
  SMessageLog *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLog *pSVar4;
  bool bVar5;
  SMessageLog *local_res8;
  IMessageLogListing *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar1 = *(SMessageLog **)((longlong)this + 0x20);
  local_res8 = (SMessageLog *)0x0;
  if (pSVar1 != (SMessageLog *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142bf3551;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    local_res8 = *(SMessageLog **)((longlong)this + 0x18);
  }
  pSVar4 = pSVar1;
  if (local_res8 != (SMessageLog *)0x0) {
    local_18 = *(code **)((longlong)this + 0x28);
    uStack_10 = *(undefined8 *)((longlong)this + 0x30);
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (IMessageLogListing *)0x0;
    pSVar4 = UE::Core::Private::DereferenceIfNecessary<SMessageLog,SMessageLog_*_&>(&local_res8);
    (*local_18)((longlong)&pSVar4->_padding_ + (longlong)(int)uStack_10,&local_28,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_142bf3551:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 142bf3610

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLog *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SMessageLog *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf3640;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SMessageLog *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLog,SMessageLog_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf3640:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf36a0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf36d0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SMessageLogListing *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf36d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf3740

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *this,TSharedRef<FMessageFilter,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  FMessageFilter *pFVar3;
  atomic<int> aVar4;
  int iVar5;
  SMessageLogListing *pSVar6;
  bool bVar7;
  SMessageLogListing *local_res8;
  FMessageFilter *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar6 = (SMessageLogListing *)0x0;
  local_res8 = pSVar6;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      if (aVar2 == (atomic<int>)0x0) goto LAB_142bf3781;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar1->_padding_;
      bVar7 = aVar2 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar7);
    local_res8 = (this->UserObject).Object;
  }
  pSVar6 = pSVar1;
  if (local_res8 != (SMessageLogListing *)0x0) {
    local_28 = *(FMessageFilter **)&this->MethodPtr;
    pTStack_20 = *(TReferenceControllerBase<1> **)&(this->MethodPtr).field_0x8;
    pSVar6 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                       (&local_res8);
    pFVar3 = local_28;
    iVar5 = (int)pTStack_20;
    local_28 = param_1->Object;
    pTStack_20 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*(code *)pFVar3)((longlong)&pSVar6->_padding_ + (longlong)iVar5,local_18,&local_28,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_142bf3781:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 142bf3850

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *this,TSharedRef<FTokenizedMessage,1> *param_1,TSharedRef<STableViewBase,1> *param_2
               )

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  FTokenizedMessage *pFVar3;
  atomic<int> aVar4;
  int iVar5;
  SMessageLogListing *pSVar6;
  bool bVar7;
  SMessageLogListing *local_res8;
  FTokenizedMessage *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar6 = (SMessageLogListing *)0x0;
  local_res8 = pSVar6;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      if (aVar2 == (atomic<int>)0x0) goto LAB_142bf3891;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar1->_padding_;
      bVar7 = aVar2 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar7);
    local_res8 = (this->UserObject).Object;
  }
  pSVar6 = pSVar1;
  if (local_res8 != (SMessageLogListing *)0x0) {
    local_28 = *(FTokenizedMessage **)&this->MethodPtr;
    pTStack_20 = *(TReferenceControllerBase<1> **)&(this->MethodPtr).field_0x8;
    pSVar6 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                       (&local_res8);
    pFVar3 = local_28;
    iVar5 = (int)pTStack_20;
    local_28 = param_1->Object;
    pTStack_20 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*(code *)pFVar3)((longlong)&pSVar6->_padding_ + (longlong)iVar5,local_18,&local_28,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_142bf3891:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 142bf3960

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf3990;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SMessageLogListing *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf3990:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf3a00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  FReply local_c8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf3a30;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SMessageLogListing *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 &local_c8);
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf3a30:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf3ab0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<FTokenizedMessage,1> *param_1)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  FTokenizedMessage *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogListing *)0x0;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142bf3ae5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
  }
  pSVar4 = pSVar1;
  if (local_res8 != (SMessageLogListing *)0x0) {
    local_18 = *(code **)&this->MethodPtr;
    uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FTokenizedMessage *)0x0;
    pSVar4 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                       (&local_res8);
    (*local_18)((longlong)&pSVar4->_padding_ + (longlong)(int)uStack_10,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_142bf3ae5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 142bf3b90

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<FTokenizedMessage,1> *param_1,TSharedRef<IMessageToken,1> *param_2)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  FTokenizedMessage *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMessageLogListing *)0x0;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142bf3bd1;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
  }
  pSVar4 = pSVar1;
  if (local_res8 != (SMessageLogListing *)0x0) {
    local_18 = *(code **)&this->MethodPtr;
    uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FTokenizedMessage *)0x0;
    pSVar4 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                       (&local_res8);
    (*local_18)((longlong)&pSVar4->_padding_ + (longlong)(int)uStack_10,&local_28,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_142bf3bd1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 142bf3c90

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,TSharedPtr<FTokenizedMessage,1> *param_1,Type param_2)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  FTokenizedMessage *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar1 = *(SMessageLogListing **)((longlong)this + 0x20);
  local_res8 = (SMessageLogListing *)0x0;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142bf3cd1;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    local_res8 = *(SMessageLogListing **)((longlong)this + 0x18);
  }
  pSVar4 = pSVar1;
  if (local_res8 != (SMessageLogListing *)0x0) {
    local_18 = *(code **)((longlong)this + 0x28);
    uStack_10 = *(undefined8 *)((longlong)this + 0x30);
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FTokenizedMessage *)0x0;
    pSVar4 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                       (&local_res8);
    (*local_18)((longlong)&pSVar4->_padding_ + (longlong)(int)uStack_10,&local_28,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_142bf3cd1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 142bf3d90

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf3dc0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SMessageLogListing *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf3dc0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf3e20

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMessageLogListing *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SMessageLogListing *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf3e50;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SMessageLogListing *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SMessageLogListing,SMessageLogListing_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 (int)this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_142bf3e50:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 142bf3eb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
                *this)

{
  atomic<int> aVar1;
  code *pcVar2;
  atomic<int> aVar3;
  int iVar4;
  SMessageLogMessageListRow *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  SMessageLogMessageListRow *local_res8;
  code *local_d8;
  longlong lStack_d0;
  FReply local_c8;
  
  pTVar6 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar6->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf3ee0;
      }
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar7);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SMessageLogMessageListRow *)0x0) {
      local_d8 = *(code **)&this->MethodPtr;
      lStack_d0 = *(longlong *)&(this->MethodPtr).field_0x8;
      pSVar5 = UE::Core::Private::
               DereferenceIfNecessary<SMessageLogMessageListRow,SMessageLogMessageListRow_*_&>
                         (&local_res8);
      pcVar2 = local_d8;
      iVar4 = (int)lStack_d0;
      local_d8 = (code *)this->_padding_;
      lStack_d0 = this->_padding_;
      if (lStack_d0 != 0) {
        LOCK();
        *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
        UNLOCK();
      }
      (*pcVar2)((longlong)&pSVar5->_padding_ + (longlong)iVar4,&local_c8,&local_d8);
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return true;
    }
  }
LAB_142bf3ee0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return false;
}

// ExecuteIfSafe @ 142bf3fa0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
                *this)

{
  atomic<int> aVar1;
  code *pcVar2;
  atomic<int> aVar3;
  int iVar4;
  SMessageLogMessageListRow *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  SMessageLogMessageListRow *local_res8;
  code *local_18;
  longlong lStack_10;
  
  pTVar6 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar6->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf3fd0;
      }
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar7);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SMessageLogMessageListRow *)0x0) {
      local_18 = *(code **)&this->MethodPtr;
      lStack_10 = *(longlong *)&(this->MethodPtr).field_0x8;
      pSVar5 = UE::Core::Private::
               DereferenceIfNecessary<SMessageLogMessageListRow,SMessageLogMessageListRow_*_&>
                         (&local_res8);
      pcVar2 = local_18;
      iVar4 = (int)lStack_10;
      local_18 = (code *)this->_padding_;
      lStack_10 = this->_padding_;
      if (lStack_10 != 0) {
        LOCK();
        *(int *)(lStack_10 + 8) = *(int *)(lStack_10 + 8) + 1;
        UNLOCK();
      }
      (*pcVar2)((longlong)&pSVar5->_padding_ + (longlong)iVar4,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return true;
    }
  }
LAB_142bf3fd0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return false;
}

// ExecuteIfSafe @ 142bf4070

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
                *this)

{
  atomic<int> aVar1;
  code *pcVar2;
  atomic<int> aVar3;
  int iVar4;
  SMessageLogMessageListRow *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  SMessageLogMessageListRow *local_res8;
  code *local_18;
  longlong lStack_10;
  
  pTVar6 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar6->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142bf40a0;
      }
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar7);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SMessageLogMessageListRow *)0x0) {
      local_18 = *(code **)&this->MethodPtr;
      lStack_10 = *(longlong *)&(this->MethodPtr).field_0x8;
      pSVar5 = UE::Core::Private::
               DereferenceIfNecessary<SMessageLogMessageListRow,SMessageLogMessageListRow_*_&>
                         (&local_res8);
      pcVar2 = local_18;
      iVar4 = (int)lStack_10;
      local_18 = (code *)this->_padding_;
      lStack_10 = this->_padding_;
      if (lStack_10 != 0) {
        LOCK();
        *(int *)(lStack_10 + 8) = *(int *)(lStack_10 + 8) + 1;
        UNLOCK();
      }
      (*pcVar2)((longlong)&pSVar5->_padding_ + (longlong)iVar4,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return true;
    }
  }
LAB_142bf40a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 142bfbcd0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbce0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbcf0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbd00

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbd10

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbd20

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbd30

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbd40

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbd50

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,FMessageFilter_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 142bfbd60

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbd70

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbd80

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbd90

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbda0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbdb0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbdc0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbdd0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbde0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FMessageFilter,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 142bfbdf0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbe00

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbe10

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbe20

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbe30

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(TSharedPtr<IMessageLogListing,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 142bfbe40

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbe50

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbe60

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbe70

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbe80

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbe90

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbea0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbeb0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbec0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 142bfbed0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbee0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbef0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbf00

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbf10

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 142bfdf90

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfdff0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe050

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  STableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe0b0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  STableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe110

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  STableRow<TSharedRef<FMessageFilter,1>_> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe170

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  STableRow<TSharedRef<FMessageFilter,1>_> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe1d0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  STableRow<TSharedRef<FTokenizedMessage,1>_> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe230

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  STableRow<TSharedRef<FTokenizedMessage,1>_> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe290

void * __thiscall
TBaseSPMethodDelegateInstance<1,FMessageFilter_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pvVar2 = *(void **)((longlong)this + 0x18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pvVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe2f0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogCategoryListRow *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe350

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogCategoryListRow *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe3b0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogListing *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe410

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogListing *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe470

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogListing *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe4d0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogListing *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe530

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogListing *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe590

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe5f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FMessageFilter,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pvVar2 = *(void **)((longlong)this + 0x18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pvVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe650

void * __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FMessageLogListingViewModel *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pFVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pFVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe6b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FMessageLogListingViewModel *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pFVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pFVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe710

void * __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FMessageLogViewModel *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pFVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pFVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe770

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLog *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe7d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(TSharedPtr<IMessageLogListing,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pvVar2 = *(void **)((longlong)this + 0x18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pvVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe830

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLog *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe890

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogListing *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe8f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogListing *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe950

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogListing *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfe9b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogListing *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfea10

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogListing *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfea70

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogListing *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfead0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogListing *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfeb30

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pvVar2 = *(void **)((longlong)this + 0x18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pvVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfeb90

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogListing *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfebf0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogListing *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfec50

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogMessageListRow *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfecb0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogMessageListRow *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfed10

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMessageLogMessageListRow *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetUObject @ 142c018e0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c018f0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01900

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01910

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01920

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01930

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01940

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01950

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01960

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,FMessageFilter_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01970

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01980

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01990

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c019a0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c019b0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c019c0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c019d0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c019e0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c019f0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FMessageFilter,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01a00

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01a10

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetUObject(TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01a20

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01a30

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01a40

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(TSharedPtr<IMessageLogListing,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01a50

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01a60

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01a70

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01a80

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01a90

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01aa0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01ab0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01ac0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01ad0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01ae0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01af0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
::GetUObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01b00

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::GetUObject(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01b10

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
::GetUObject(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01b20

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::GetUObject(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142c031e0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *pSVar4;
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *pSVar5;
  bool bVar6;
  
  pSVar1 = (STableRow<TSharedPtr<FTokenizedMessage,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (STableRow<TSharedPtr<FTokenizedMessage,1>_> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (STableRow<TSharedPtr<FTokenizedMessage,1>_> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03215;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03215:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03240

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *pSVar4;
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *pSVar5;
  bool bVar6;
  
  pSVar1 = (STableRow<TSharedPtr<FTokenizedMessage,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (STableRow<TSharedPtr<FTokenizedMessage,1>_> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (STableRow<TSharedPtr<FTokenizedMessage,1>_> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03275;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03275:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c032a0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  STableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  STableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar4;
  STableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar5;
  bool bVar6;
  
  pSVar1 = (STableRow<TSharedPtr<IMessageLogListing,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (STableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (STableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c032d5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c032d5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03300

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  STableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  STableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar4;
  STableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar5;
  bool bVar6;
  
  pSVar1 = (STableRow<TSharedPtr<IMessageLogListing,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (STableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (STableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03335;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03335:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03360

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  STableRow<TSharedRef<FMessageFilter,1>_> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  STableRow<TSharedRef<FMessageFilter,1>_> *pSVar4;
  STableRow<TSharedRef<FMessageFilter,1>_> *pSVar5;
  bool bVar6;
  
  pSVar1 = (STableRow<TSharedRef<FMessageFilter,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03395;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03395:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c033c0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  STableRow<TSharedRef<FMessageFilter,1>_> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  STableRow<TSharedRef<FMessageFilter,1>_> *pSVar4;
  STableRow<TSharedRef<FMessageFilter,1>_> *pSVar5;
  bool bVar6;
  
  pSVar1 = (STableRow<TSharedRef<FMessageFilter,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c033f5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c033f5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03420

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  STableRow<TSharedRef<FTokenizedMessage,1>_> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  STableRow<TSharedRef<FTokenizedMessage,1>_> *pSVar4;
  STableRow<TSharedRef<FTokenizedMessage,1>_> *pSVar5;
  bool bVar6;
  
  pSVar1 = (STableRow<TSharedRef<FTokenizedMessage,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (STableRow<TSharedRef<FTokenizedMessage,1>_> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (STableRow<TSharedRef<FTokenizedMessage,1>_> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03455;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03455:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03480

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  STableRow<TSharedRef<FTokenizedMessage,1>_> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  STableRow<TSharedRef<FTokenizedMessage,1>_> *pSVar4;
  STableRow<TSharedRef<FTokenizedMessage,1>_> *pSVar5;
  bool bVar6;
  
  pSVar1 = (STableRow<TSharedRef<FTokenizedMessage,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (STableRow<TSharedRef<FTokenizedMessage,1>_> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (STableRow<TSharedRef<FTokenizedMessage,1>_> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c034b5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c034b5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c034e0

bool __thiscall
TBaseSPMethodDelegateInstance<1,FMessageFilter_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03515;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    pTVar5 = pTVar1;
  }
LAB_142c03515:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 142c03540

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMessageLogCategoryListRow *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogCategoryListRow *pSVar4;
  SMessageLogCategoryListRow *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogCategoryListRow *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogCategoryListRow *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogCategoryListRow *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03575;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03575:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c035a0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMessageLogCategoryListRow *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogCategoryListRow *pSVar4;
  SMessageLogCategoryListRow *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogCategoryListRow *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogCategoryListRow *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogCategoryListRow *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c035d5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c035d5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03600

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  SMessageLogListing *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogListing *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03635;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03635:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03660

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  SMessageLogListing *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogListing *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03695;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03695:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c036c0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  SMessageLogListing *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogListing *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c036f5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c036f5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03720

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  SMessageLogListing *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogListing *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03755;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03755:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03780

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  SMessageLogListing *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogListing *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c037b5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c037b5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c037e0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar4;
  SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03815;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03815:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03840

bool __thiscall
TBaseSPMethodDelegateInstance<0,FMessageFilter,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03875;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    pTVar5 = pTVar1;
  }
LAB_142c03875:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 142c038a0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FMessageLogListingViewModel *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FMessageLogListingViewModel *pFVar4;
  FMessageLogListingViewModel *pFVar5;
  bool bVar6;
  
  pFVar1 = (FMessageLogListingViewModel *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FMessageLogListingViewModel *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FMessageLogListingViewModel *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c038d5;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_142c038d5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 142c03900

bool __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
                *this,void *param_1)

{
  FMessageLogListingViewModel *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FMessageLogListingViewModel *pFVar4;
  FMessageLogListingViewModel *pFVar5;
  bool bVar6;
  
  pFVar1 = (FMessageLogListingViewModel *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FMessageLogListingViewModel *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FMessageLogListingViewModel *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03935;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_142c03935:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 142c03960

bool __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FMessageLogViewModel *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FMessageLogViewModel *pFVar4;
  FMessageLogViewModel *pFVar5;
  bool bVar6;
  
  pFVar1 = (FMessageLogViewModel *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FMessageLogViewModel *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FMessageLogViewModel *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03995;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_142c03995:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 142c039c0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMessageLog *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLog *pSVar4;
  SMessageLog *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLog *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLog *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLog *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c039f5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c039f5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03a20

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(TSharedPtr<IMessageLogListing,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03a55;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    pTVar5 = pTVar1;
  }
LAB_142c03a55:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 142c03a80

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  SMessageLog *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLog *pSVar4;
  SMessageLog *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLog *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLog *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLog *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03ab5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03ab5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03ae0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  SMessageLogListing *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogListing *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03b15;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03b15:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03b40

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  SMessageLogListing *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogListing *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03b75;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03b75:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03ba0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  SMessageLogListing *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogListing *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03bd5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03bd5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03c00

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  SMessageLogListing *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogListing *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03c35;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03c35:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03c60

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  SMessageLogListing *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogListing *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03c95;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03c95:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03cc0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  SMessageLogListing *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogListing *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03cf5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03cf5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03d20

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  SMessageLogListing *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogListing *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03d55;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03d55:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03d80

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03db5;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    pTVar5 = pTVar1;
  }
LAB_142c03db5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 142c03de0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  SMessageLogListing *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogListing *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03e15;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03e15:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03e40

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
                *this,void *param_1)

{
  SMessageLogListing *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogListing *pSVar4;
  SMessageLogListing *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogListing *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogListing *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogListing *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03e75;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03e75:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03ea0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
                *this,void *param_1)

{
  SMessageLogMessageListRow *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogMessageListRow *pSVar4;
  SMessageLogMessageListRow *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogMessageListRow *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogMessageListRow *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogMessageListRow *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03ed5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03ed5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03f00

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
                *this,void *param_1)

{
  SMessageLogMessageListRow *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogMessageListRow *pSVar4;
  SMessageLogMessageListRow *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogMessageListRow *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogMessageListRow *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogMessageListRow *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03f35;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03f35:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 142c03f60

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
                *this,void *param_1)

{
  SMessageLogMessageListRow *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMessageLogMessageListRow *pSVar4;
  SMessageLogMessageListRow *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMessageLogMessageListRow *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMessageLogMessageListRow *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMessageLogMessageListRow *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142c03f95;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_142c03f95:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// IsSafeToExecute @ 142c06570

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (STableRow<TSharedPtr<FTokenizedMessage,1>_> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c065a0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (STableRow<TSharedPtr<FTokenizedMessage,1>_> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c065d0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (STableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06600

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (STableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06630

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06660

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06690

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (STableRow<TSharedRef<FTokenizedMessage,1>_> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c066c0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (STableRow<TSharedRef<FTokenizedMessage,1>_> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c066f0

bool __thiscall
TBaseSPMethodDelegateInstance<1,FMessageFilter_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06720

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogCategoryListRow *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06750

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogCategoryListRow *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06780

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogListing *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c067b0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogListing *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c067e0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogListing *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06810

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogListing *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06840

bool __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogListing *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06870

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0)
      && (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
         pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount))
  {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c068a0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FMessageFilter,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c068d0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FMessageLogListingViewModel *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06900

bool __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FMessageLogListingViewModel *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06930

bool __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FMessageLogViewModel *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06960

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLog *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06990

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(TSharedPtr<IMessageLogListing,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c069c0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLog *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c069f0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogListing *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06a20

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogListing *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06a50

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogListing *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06a80

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogListing *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06ab0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogListing *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06ae0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogListing *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06b10

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogListing *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06b40

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06b70

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogListing *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06ba0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogListing *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06bd0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogMessageListRow *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06c00

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogMessageListRow *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 142c06c30

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMessageLogMessageListRow *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 142c29010

FName __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29020

FName __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29030

FName __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29040

FName __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29050

FName __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29060

FName __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29070

FName __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29080

FName __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29090

FName __thiscall
TBaseSPMethodDelegateInstance<1,FMessageFilter_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c290a0

FName __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c290b0

FName __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c290c0

FName __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c290d0

FName __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c290e0

FName __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c290f0

FName __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29100

FName __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29110

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29120

FName __thiscall
TBaseSPMethodDelegateInstance<0,FMessageFilter,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29130

FName __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29140

FName __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29150

FName __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29160

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29170

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(TSharedPtr<IMessageLogListing,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29180

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29190

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c291a0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c291b0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c291c0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c291d0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c291e0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c291f0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29200

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29210

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29220

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29230

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29240

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29250

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

