// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 396

// CreateCopy @ 148d6b050

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_UFVisualizerEvent___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6b0f0

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_UFVisualizerEvent___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6b160

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_UFVisualizerEvent___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6b220

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_UFVisualizerEvent___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6b2c0

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_UFVisualizerEvent___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6b330

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_UFVisualizerEvent___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6b3f0

void __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBarVisualizer___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6b490

void __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBarVisualizer___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6b500

void __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBarVisualizer___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6b5c0

void __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBarVisualizer___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6b660

void __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBarVisualizer___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6b6d0

void __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBarVisualizer___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6b790

void __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBarVisualizer___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6b830

void __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBarVisualizer___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6b8a0

void __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBarVisualizer___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6b960

void __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__E__6B_;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBarVisualizer___00__A6A_NXZUFDefaultDelegateUserPolicy__E__6B_
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

// CreateCopy @ 148d6ba00

void __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__E__6B_;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBarVisualizer___00__A6A_NXZUFDefaultDelegateUserPolicy__E__6B_
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

// CreateCopy @ 148d6ba70

void __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__E__6B_;
    *(char *)(puVar7 + 1) = (char)this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBarVisualizer___00__A6A_NXZUFDefaultDelegateUserPolicy__E__6B_
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

// CreateCopy @ 148d6bb30

void __thiscall
TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEventItem___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6bbd0

void __thiscall
TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEventItem___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6bc40

void __thiscall
TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEventItem___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6bd00

void __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEventsTree___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6bda0

void __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEventsTree___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6be10

void __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEventsTree___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6bed0

void __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6ANXZUFDefaultDelegateUserPolicy__N__6B_;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEventsTree___00__A6ANXZUFDefaultDelegateUserPolicy__N__6B_
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

// CreateCopy @ 148d6bf80

void __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6ANXZUFDefaultDelegateUserPolicy__N__6B_;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEventsTree___00__A6ANXZUFDefaultDelegateUserPolicy__N__6B_
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

// CreateCopy @ 148d6bff0

void __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6ANXZUFDefaultDelegateUserPolicy__N__6B_;
    puVar7[1] = this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEventsTree___00__A6ANXZUFDefaultDelegateUserPolicy__N__6B_
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

// CreateCopy @ 148d6c0b0

void __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__E__6B_;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEventsTree___00__A6A_NXZUFDefaultDelegateUserPolicy__E__6B_
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

// CreateCopy @ 148d6c150

void __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__E__6B_;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEventsTree___00__A6A_NXZUFDefaultDelegateUserPolicy__E__6B_
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

// CreateCopy @ 148d6c1c0

void __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__E__6B_;
    *(char *)(puVar7 + 1) = (char)this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEventsTree___00__A6A_NXZUFDefaultDelegateUserPolicy__E__6B_
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

// CreateCopy @ 148d6c280

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFVisualizerEvent___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
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

// CreateCopy @ 148d6c320

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFVisualizerEvent___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
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

// CreateCopy @ 148d6c390

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar7 + 1) = (int)this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFVisualizerEvent___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
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

// CreateCopy @ 148d6c450

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFVisualizerEvent___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
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

// CreateCopy @ 148d6c500

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFVisualizerEvent___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
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

// CreateCopy @ 148d6c570

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    puVar7[1] = this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFVisualizerEvent___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
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

// CreateCopy @ 148d6c630

void __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_V__SMultiColumnTableRow_V__TSharedPtr_UFVisualizerEvent___00_____00__A6AXAEBV__TSharedRef_VSHeaderRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6c6d0

void __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_V__SMultiColumnTableRow_V__TSharedPtr_UFVisualizerEvent___00_____00__A6AXAEBV__TSharedRef_VSHeaderRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6c740

void __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_V__SMultiColumnTableRow_V__TSharedPtr_UFVisualizerEvent___00_____00__A6AXAEBV__TSharedRef_VSHeaderRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6c800

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFVisualizerEvent___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFVisualizerEvent___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6c8a0

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFVisualizerEvent___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFVisualizerEvent___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6c910

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFVisualizerEvent___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFVisualizerEvent___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6c9d0

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFVisualizerEvent___00____6B_
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFVisualizerEvent___00____6B_
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

// CreateCopy @ 148d6ca90

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFVisualizerEvent___00____6B_
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFVisualizerEvent___00____6B_
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

// CreateCopy @ 148d6cb10

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFVisualizerEvent___00____6B_
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFVisualizerEvent___00____6B_
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

// CreateCopy @ 148d6cbe0

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6cc80

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6ccf0

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6cdb0

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFVisualizerEvent___00____6B_
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFVisualizerEvent___00____6B_
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

// CreateCopy @ 148d6ce70

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFVisualizerEvent___00____6B_
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFVisualizerEvent___00____6B_
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

// CreateCopy @ 148d6cef0

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFVisualizerEvent___00____6B_
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFVisualizerEvent___00____6B_
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

// CreateCopy @ 148d6cfc0

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6d060

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6d0d0

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6d190

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXUFGeometry___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXUFGeometry___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6d230

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXUFGeometry___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXUFGeometry___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6d2a0

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXUFGeometry___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXUFGeometry___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6d360

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6d400

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6d470

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6d530

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,int>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy__H__6B_
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

// CreateCopy @ 148d6d5d0

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,int>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy__H__6B_
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

// CreateCopy @ 148d6d640

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,int>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy__H__6B_
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

// CreateCopy @ 148d6d700

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__E__6B_;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXXZUFDefaultDelegateUserPolicy__E__6B_
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

// CreateCopy @ 148d6d7a0

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__E__6B_;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXXZUFDefaultDelegateUserPolicy__E__6B_
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

// CreateCopy @ 148d6d810

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__E__6B_;
    *(char *)(puVar7 + 1) = (char)this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXXZUFDefaultDelegateUserPolicy__E__6B_
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

// CreateCopy @ 148d6d8d0

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFVisualizerEvent___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFVisualizerEvent___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6d970

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFVisualizerEvent___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFVisualizerEvent___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6d9e0

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFVisualizerEvent___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFVisualizerEvent___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6daa0

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy,FName>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4Type_EColumnSortMode__XZUFDefaultDelegateUserPolicy__VFName____6B_
    ;
    puVar3[1] = *(undefined8 *)((longlong)this + 8);
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6A_AW4Type_EColumnSortMode__XZUFDefaultDelegateUserPolicy__VFName____6B_
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

// CreateCopy @ 148d6db50

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy,FName>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4Type_EColumnSortMode__XZUFDefaultDelegateUserPolicy__VFName____6B_
    ;
    puVar3[1] = *(undefined8 *)((longlong)this + 8);
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6A_AW4Type_EColumnSortMode__XZUFDefaultDelegateUserPolicy__VFName____6B_
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

// CreateCopy @ 148d6dbc0

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy,FName>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4Type_EColumnSortMode__XZUFDefaultDelegateUserPolicy__VFName____6B_
    ;
    puVar7[1] = *(undefined8 *)((longlong)this + 8);
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6A_AW4Type_EColumnSortMode__XZUFDefaultDelegateUserPolicy__VFName____6B_
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

// CreateCopy @ 148d6dc80

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6dd20

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6dd90

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6de50

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6def0

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6df60

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6e020

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__AEAV__TArray_V__TSharedPtr_UFVisualizerEvent___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__AEAV__TArray_V__TSharedPtr_UFVisualizerEvent___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6e0c0

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__AEAV__TArray_V__TSharedPtr_UFVisualizerEvent___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__AEAV__TArray_V__TSharedPtr_UFVisualizerEvent___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6e130

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__AEAV__TArray_V__TSharedPtr_UFVisualizerEvent___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__AEAV__TArray_V__TSharedPtr_UFVisualizerEvent___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6e1f0

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6e290

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6e300

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6e3c0

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4Type_EColumnSortPriority__AEBVFName__W41EColumnSortMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXW4Type_EColumnSortPriority__AEBVFName__W42EColumnSortMode___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6e460

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4Type_EColumnSortPriority__AEBVFName__W41EColumnSortMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXW4Type_EColumnSortPriority__AEBVFName__W42EColumnSortMode___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6e4d0

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4Type_EColumnSortPriority__AEBVFName__W41EColumnSortMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXW4Type_EColumnSortPriority__AEBVFName__W42EColumnSortMode___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6e590

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__E__6B_;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXXZUFDefaultDelegateUserPolicy__E__6B_
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

// CreateCopy @ 148d6e630

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__E__6B_;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXXZUFDefaultDelegateUserPolicy__E__6B_
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

// CreateCopy @ 148d6e6a0

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__E__6B_;
    *(char *)(puVar7 + 1) = (char)this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXXZUFDefaultDelegateUserPolicy__E__6B_
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

// CreateCopy @ 148d6e760

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6e800

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6e870

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6e930

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6e9d0

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6ea40

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6eb00

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXHV__TSharedPtr_UFVisualizerEvent___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXHV__TSharedPtr_UFVisualizerEvent___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6eba0

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXHV__TSharedPtr_UFVisualizerEvent___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXHV__TSharedPtr_UFVisualizerEvent___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6ec10

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXHV__TSharedPtr_UFVisualizerEvent___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXHV__TSharedPtr_UFVisualizerEvent___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6ecd0

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXV__TSharedPtr_UFVisualizerEvent___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6ed70

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXV__TSharedPtr_UFVisualizerEvent___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6ede0

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXV__TSharedPtr_UFVisualizerEvent___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6eea0

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6ef40

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6efb0

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d6f070

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXXZUFDefaultDelegateUserPolicy__H__6B_
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

// CreateCopy @ 148d6f110

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXXZUFDefaultDelegateUserPolicy__H__6B_
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

// CreateCopy @ 148d6f180

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXXZUFDefaultDelegateUserPolicy__H__6B_
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

// Execute @ 148d73870

FSlateColor * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FSlateColor *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar3;
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar4;
  bool bVar5;
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *local_res8;
  
  pSVar3 = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d738b1;
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
LAB_148d738b1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<STableRow<TSharedPtr<FVisualizerEvent,1>_>,STableRow<TSharedPtr<FVisualizerEvent,1>_>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 148d73900

FSlateBrush * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar3;
  FSlateBrush *pFVar4;
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar5;
  bool bVar6;
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *local_res8;
  
  pSVar3 = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
  pSVar5 = pSVar3;
  if (pSVar3 != (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d73931;
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
LAB_148d73931:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<STableRow<TSharedPtr<FVisualizerEvent,1>_>,STableRow<TSharedPtr<FVisualizerEvent,1>_>_*_&>
                     (&local_res8);
  pFVar4 = (FSlateBrush *)
           (**(code **)&this->MethodPtr)
                     ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pFVar4;
}

// Execute @ 148d73980

EVisibility __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SBarVisualizer *pSVar3;
  TEnumAsByte<EVisibility::Private> in_DL;
  SBarVisualizer *pSVar4;
  bool bVar5;
  SBarVisualizer *local_res8;
  
  pSVar3 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SBarVisualizer *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SBarVisualizer *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d739c1;
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
LAB_148d739c1:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>(&local_res8)
  ;
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)in_DL.Value;
}

// Execute @ 148d73a10

FText * __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FText *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SBarVisualizer *pSVar3;
  SBarVisualizer *pSVar4;
  bool bVar5;
  SBarVisualizer *local_res8;
  
  pSVar3 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SBarVisualizer *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SBarVisualizer *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d73a51;
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
LAB_148d73a51:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>(&local_res8)
  ;
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 148d73aa0

float __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SBarVisualizer *pSVar5;
  SBarVisualizer *pSVar6;
  bool bVar7;
  float fVar8;
  SBarVisualizer *local_res8 [4];
  
  pSVar5 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8[0] = (SBarVisualizer *)0x0;
  pSVar6 = pSVar5;
  if (pSVar5 != (SBarVisualizer *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar6 = local_res8[0];
      if (aVar3 == (atomic<int>)0x0) goto LAB_148d73ad1;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar5->_padding_;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    local_res8[0] = (this->UserObject).Object;
    pSVar6 = pSVar5;
  }
LAB_148d73ad1:
  pcVar1 = *(code **)&this->MethodPtr;
  uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  pSVar5 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>(local_res8);
  fVar8 = (float)(*pcVar1)((longlong)&pSVar5->_padding_ + (longlong)(int)uVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return fVar8;
}

// Execute @ 148d73b30

bool __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::Execute(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
          *this)

{
  atomic<int> aVar1;
  undefined1 uVar2;
  atomic<int> aVar3;
  SBarVisualizer *pSVar4;
  SBarVisualizer *pSVar5;
  bool bVar6;
  SBarVisualizer *local_res8;
  
  pSVar4 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SBarVisualizer *)0x0;
  pSVar5 = pSVar4;
  if (pSVar4 != (SBarVisualizer *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar4->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d73b61;
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
LAB_148d73b61:
  pSVar4 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>(&local_res8)
  ;
  uVar2 = (**(code **)&this->MethodPtr)
                    ((longlong)&pSVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                     (char)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return (bool)uVar2;
}

// Execute @ 148d73bb0

FText * __thiscall
TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FText *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventItem *pSVar3;
  SEventItem *pSVar4;
  bool bVar5;
  SEventItem *local_res8;
  
  pSVar3 = (SEventItem *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SEventItem *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SEventItem *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d73bf1;
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
LAB_148d73bf1:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventItem,SEventItem_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 148d73c40

FText * __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FText *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventsTree *pSVar3;
  SEventsTree *pSVar4;
  bool bVar5;
  SEventsTree *local_res8;
  
  pSVar3 = (SEventsTree *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SEventsTree *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SEventsTree *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d73c81;
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
LAB_148d73c81:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 148d73cd0

double __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
::Execute(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
          *this)

{
  double dVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SEventsTree *pSVar4;
  SEventsTree *pSVar5;
  bool bVar6;
  SEventsTree *local_res8;
  
  pSVar4 = (SEventsTree *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SEventsTree *)0x0;
  pSVar5 = pSVar4;
  if (pSVar4 != (SEventsTree *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar4->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d73d05;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar4->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar4->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
    pSVar5 = pSVar4;
  }
LAB_148d73d05:
  pSVar4 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
  dVar1 = (double)(**(code **)&this->MethodPtr)
                            ((longlong)&pSVar4->_padding_ +
                             (longlong)*(int *)&(this->MethodPtr).field_0x8,this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return dVar1;
}

// Execute @ 148d73d60

bool __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::Execute(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
          *this)

{
  atomic<int> aVar1;
  undefined1 uVar2;
  atomic<int> aVar3;
  SEventsTree *pSVar4;
  SEventsTree *pSVar5;
  bool bVar6;
  SEventsTree *local_res8;
  
  pSVar4 = (SEventsTree *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SEventsTree *)0x0;
  pSVar5 = pSVar4;
  if (pSVar4 != (SEventsTree *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar4->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d73d91;
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
LAB_148d73d91:
  pSVar4 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
  uVar2 = (**(code **)&this->MethodPtr)
                    ((longlong)&pSVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                     (char)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return (bool)uVar2;
}

// Execute @ 148d73de0

EVisibility __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::Execute(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SListViewPinnedRowWidget *pSVar3;
  TEnumAsByte<EVisibility::Private> in_DL;
  SListViewPinnedRowWidget *pSVar4;
  bool bVar5;
  SListViewPinnedRowWidget *local_res8;
  
  pSVar3 = (SListViewPinnedRowWidget *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SListViewPinnedRowWidget *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SListViewPinnedRowWidget *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d73e21;
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
LAB_148d73e21:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)in_DL.Value;
}

// Execute @ 148d73e70

EVisibility __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::Execute(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SListViewPinnedRowWidget *pSVar3;
  TEnumAsByte<EVisibility::Private> in_DL;
  SListViewPinnedRowWidget *pSVar4;
  bool bVar5;
  SListViewPinnedRowWidget *local_res8;
  
  pSVar3 = (SListViewPinnedRowWidget *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SListViewPinnedRowWidget *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SListViewPinnedRowWidget *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d73eb1;
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
LAB_148d73eb1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)in_DL.Value;
}

// Execute @ 148d73f10

void __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedRef<SHeaderRow,1> *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar3;
  SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar4;
  bool bVar5;
  SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *local_res8;
  
  pSVar3 = (SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d73f51;
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
LAB_148d73f51:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 148d73fa0

TSharedRef<ITableRow,1> * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
         TSharedPtr<FVisualizerEvent,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SBarVisualizer *pSVar3;
  SBarVisualizer *pSVar4;
  bool bVar5;
  SBarVisualizer *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar3 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = pSVar3;
  local_res8 = (SBarVisualizer *)0x0;
  if (pSVar3 != (SBarVisualizer *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = (SBarVisualizer *)0x0;
      local_res8 = (SBarVisualizer *)0x0;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d73ff5;
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
LAB_148d73ff5:
  local_28 = param_1->Object;
  local_18 = *(code **)&this->MethodPtr;
  uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FVisualizerEvent *)0x0;
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>(&local_res8)
  ;
  (*local_18)((longlong)&pSVar3->_padding_ + (longlong)(int)uStack_10,__return_storage_ptr__,
              &local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 148d74090

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::Execute(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
          *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> aVar1;
  code *pcVar2;
  atomic<int> aVar3;
  int iVar4;
  SBarVisualizer *pSVar5;
  SBarVisualizer *pSVar6;
  bool bVar7;
  SBarVisualizer *local_res8;
  code *local_28;
  longlong lStack_20;
  
  pSVar5 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SBarVisualizer *)0x0;
  pSVar6 = pSVar5;
  if (pSVar5 != (SBarVisualizer *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar6 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d740d6;
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
LAB_148d740d6:
  local_28 = *(code **)&this->MethodPtr;
  lStack_20 = *(longlong *)&(this->MethodPtr).field_0x8;
  pSVar5 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>(&local_res8)
  ;
  pcVar2 = local_28;
  iVar4 = (int)lStack_20;
  local_28 = (code *)this->_padding_;
  lStack_20 = this->_padding_;
  if (lStack_20 != 0) {
    LOCK();
    *(int *)(lStack_20 + 8) = *(int *)(lStack_20 + 8) + 1;
    UNLOCK();
  }
  (*pcVar2)((longlong)&pSVar5->_padding_ + (longlong)iVar4,__return_storage_ptr__,param_1,param_2,
            &local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return __return_storage_ptr__;
}

// Execute @ 148d74180

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
        *this,FReply *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SBarVisualizer *pSVar3;
  SBarVisualizer *pSVar4;
  bool bVar5;
  SBarVisualizer *local_res8;
  
  pSVar3 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SBarVisualizer *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SBarVisualizer *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d741c1;
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
LAB_148d741c1:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>(&local_res8)
  ;
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 148d74210

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::Execute(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
          *this,FReply *__return_storage_ptr__)

{
  atomic<int> aVar1;
  code *pcVar2;
  atomic<int> aVar3;
  int iVar4;
  SBarVisualizer *pSVar5;
  SBarVisualizer *pSVar6;
  bool bVar7;
  SBarVisualizer *local_res8;
  code *local_18;
  longlong lStack_10;
  
  pSVar5 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SBarVisualizer *)0x0;
  pSVar6 = pSVar5;
  if (pSVar5 != (SBarVisualizer *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar6 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d74255;
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
LAB_148d74255:
  local_18 = *(code **)&this->MethodPtr;
  lStack_10 = *(longlong *)&(this->MethodPtr).field_0x8;
  pSVar5 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>(&local_res8)
  ;
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

// Execute @ 148d742f0

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
Execute(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>
        *this,float param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SBarVisualizer *pSVar5;
  SBarVisualizer *pSVar6;
  bool bVar7;
  SBarVisualizer *local_res8 [4];
  
  pSVar5 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8[0] = (SBarVisualizer *)0x0;
  pSVar6 = pSVar5;
  if (pSVar5 != (SBarVisualizer *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar6 = local_res8[0];
      if (aVar3 == (atomic<int>)0x0) goto LAB_148d74331;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar5->_padding_;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    local_res8[0] = (this->UserObject).Object;
    pSVar6 = pSVar5;
  }
LAB_148d74331:
  pcVar1 = *(code **)&this->MethodPtr;
  uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  pSVar5 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>(local_res8);
  (*pcVar1)((longlong)&pSVar5->_padding_ + (longlong)(int)uVar2,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// Execute @ 148d74390

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
          *this,FGeometry *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SBarVisualizer *pSVar3;
  SBarVisualizer *pSVar4;
  bool bVar5;
  SBarVisualizer *local_res8;
  FDeprecateSlateVector2D local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  pSVar3 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SBarVisualizer *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SBarVisualizer *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d743c1;
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
LAB_148d743c1:
  local_48 = param_1->Size;
  uStack_40 = *(undefined8 *)&param_1->Scale;
  local_38 = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  uStack_30 = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_28 = *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  uStack_20 = *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_18 = *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>(&local_res8)
  ;
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,&local_48
            );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 148d74430

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,TSharedPtr<FVisualizerEvent,1> *param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SBarVisualizer *pSVar3;
  SBarVisualizer *pSVar4;
  bool bVar5;
  SBarVisualizer *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar3 = *(SBarVisualizer **)((longlong)this + 0x20);
  pSVar4 = pSVar3;
  local_res8 = (SBarVisualizer *)0x0;
  if (pSVar3 != (SBarVisualizer *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = (SBarVisualizer *)0x0;
      local_res8 = (SBarVisualizer *)0x0;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d74475;
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
    local_res8 = *(SBarVisualizer **)((longlong)this + 0x18);
  }
LAB_148d74475:
  local_18 = *(code **)((longlong)this + 0x28);
  uStack_10 = *(undefined8 *)((longlong)this + 0x30);
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FVisualizerEvent *)0x0;
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>(&local_res8)
  ;
  (*local_18)((longlong)&pSVar3->_padding_ + (longlong)(int)uStack_10,&local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 148d74510

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,int>
::Execute(void *this,TSharedPtr<FVisualizerEvent,1> *param_1,Type param_2)

{
  undefined4 uVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SBarVisualizer *pSVar4;
  SBarVisualizer *pSVar5;
  bool bVar6;
  SBarVisualizer *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar4 = *(SBarVisualizer **)((longlong)this + 0x20);
  pSVar5 = pSVar4;
  local_res8 = (SBarVisualizer *)0x0;
  if (pSVar4 != (SBarVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar4->_padding_;
    do {
      pSVar5 = (SBarVisualizer *)0x0;
      local_res8 = (SBarVisualizer *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d74557;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar4->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar4->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar5 = pSVar4;
    local_res8 = *(SBarVisualizer **)((longlong)this + 0x18);
  }
LAB_148d74557:
  local_18 = *(code **)((longlong)this + 0x28);
  uStack_10 = *(undefined8 *)((longlong)this + 0x30);
  local_28 = param_1->Object;
  uVar1 = *(undefined4 *)((longlong)this + 8);
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FVisualizerEvent *)0x0;
  pSVar4 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>(&local_res8)
  ;
  (*local_18)((longlong)&pSVar4->_padding_ + (longlong)(int)uStack_10,&local_28,param_2,uVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 148d745f0

void __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::Execute(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SBarVisualizer *pSVar3;
  SBarVisualizer *pSVar4;
  bool bVar5;
  SBarVisualizer *local_res8;
  
  pSVar3 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SBarVisualizer *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SBarVisualizer *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d74621;
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
LAB_148d74621:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>(&local_res8)
  ;
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             (char)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 148d74670

TSharedRef<ITableRow,1> * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
         TSharedPtr<FVisualizerEvent,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventsTree *pSVar3;
  SEventsTree *pSVar4;
  bool bVar5;
  SEventsTree *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar3 = (SEventsTree *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = pSVar3;
  local_res8 = (SEventsTree *)0x0;
  if (pSVar3 != (SEventsTree *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = (SEventsTree *)0x0;
      local_res8 = (SEventsTree *)0x0;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d746c5;
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
LAB_148d746c5:
  local_28 = param_1->Object;
  local_18 = *(code **)&this->MethodPtr;
  uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FVisualizerEvent *)0x0;
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
  (*local_18)((longlong)&pSVar3->_padding_ + (longlong)(int)uStack_10,__return_storage_ptr__,
              &local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 148d74760

Type __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy,FName>
::Execute(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  Type TVar3;
  SEventsTree *pSVar4;
  SEventsTree *pSVar5;
  bool bVar6;
  SEventsTree *local_res8;
  
  pSVar4 = *(SEventsTree **)((longlong)this + 0x20);
  local_res8 = (SEventsTree *)0x0;
  pSVar5 = pSVar4;
  if (pSVar4 != (SEventsTree *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar4->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d74791;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar4->_padding_;
      bVar6 = aVar1 == aVar2;
      if (bVar6) {
        *(atomic<int> *)&pSVar4->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar6);
    local_res8 = *(SEventsTree **)((longlong)this + 0x18);
    pSVar5 = pSVar4;
  }
LAB_148d74791:
  pSVar4 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
  TVar3 = (**(code **)((longlong)this + 0x28))
                    ((longlong)&pSVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x30),
                     *(undefined8 *)((longlong)this + 8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return TVar3;
}

// Execute @ 148d747e0

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
          *this,FText *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventsTree *pSVar3;
  SEventsTree *pSVar4;
  bool bVar5;
  SEventsTree *local_res8;
  
  pSVar3 = (SEventsTree *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SEventsTree *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SEventsTree *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d74821;
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
LAB_148d74821:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 148d74870

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,FText *param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventsTree *pSVar3;
  SEventsTree *pSVar4;
  bool bVar5;
  SEventsTree *local_res8;
  
  pSVar3 = *(SEventsTree **)((longlong)this + 0x20);
  local_res8 = (SEventsTree *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SEventsTree *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d748b1;
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
    local_res8 = *(SEventsTree **)((longlong)this + 0x18);
    pSVar4 = pSVar3;
  }
LAB_148d748b1:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
  (**(code **)((longlong)this + 0x28))
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
             param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 148d74910

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<FVisualizerEvent,1> *param_1,
         TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventsTree *pSVar3;
  SEventsTree *pSVar4;
  bool bVar5;
  SEventsTree *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar3 = (SEventsTree *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = pSVar3;
  local_res8 = (SEventsTree *)0x0;
  if (pSVar3 != (SEventsTree *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = (SEventsTree *)0x0;
      local_res8 = (SEventsTree *)0x0;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d74955;
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
LAB_148d74955:
  local_18 = *(code **)&this->MethodPtr;
  uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FVisualizerEvent *)0x0;
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
  (*local_18)((longlong)&pSVar3->_padding_ + (longlong)(int)uStack_10,&local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 148d749f0

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,TSharedPtr<FVisualizerEvent,1> *param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventsTree *pSVar3;
  SEventsTree *pSVar4;
  bool bVar5;
  SEventsTree *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar3 = *(SEventsTree **)((longlong)this + 0x20);
  pSVar4 = pSVar3;
  local_res8 = (SEventsTree *)0x0;
  if (pSVar3 != (SEventsTree *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = (SEventsTree *)0x0;
      local_res8 = (SEventsTree *)0x0;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d74a35;
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
    local_res8 = *(SEventsTree **)((longlong)this + 0x18);
  }
LAB_148d74a35:
  local_18 = *(code **)((longlong)this + 0x28);
  uStack_10 = *(undefined8 *)((longlong)this + 0x30);
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FVisualizerEvent *)0x0;
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
  (*local_18)((longlong)&pSVar3->_padding_ + (longlong)(int)uStack_10,&local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 148d74ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,Type param_1,FName *param_2,Type param_3)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventsTree *pSVar3;
  SEventsTree *pSVar4;
  bool bVar5;
  SEventsTree *local_res8;
  
  pSVar3 = *(SEventsTree **)((longlong)this + 0x20);
  local_res8 = (SEventsTree *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SEventsTree *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d74b12;
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
    local_res8 = *(SEventsTree **)((longlong)this + 0x18);
    pSVar4 = pSVar3;
  }
LAB_148d74b12:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
  (**(code **)((longlong)this + 0x28))
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
             param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 148d74b70

void __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::Execute(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventsTree *pSVar3;
  SEventsTree *pSVar4;
  bool bVar5;
  SEventsTree *local_res8;
  
  pSVar3 = (SEventsTree *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SEventsTree *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SEventsTree *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d74ba1;
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
LAB_148d74ba1:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             (char)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 148d74bf0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FReply *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SProfileVisualizer *pSVar3;
  SProfileVisualizer *pSVar4;
  bool bVar5;
  SProfileVisualizer *local_res8;
  
  pSVar3 = (SProfileVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SProfileVisualizer *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SProfileVisualizer *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d74c31;
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
LAB_148d74c31:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SProfileVisualizer,SProfileVisualizer_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 148d74c80

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
          *this,FMenuBuilder *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SProfileVisualizer *pSVar3;
  SProfileVisualizer *pSVar4;
  bool bVar5;
  SProfileVisualizer *local_res8;
  
  pSVar3 = (SProfileVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SProfileVisualizer *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SProfileVisualizer *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d74cc1;
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
LAB_148d74cc1:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SProfileVisualizer,SProfileVisualizer_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 148d74d10

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
          *this,int param_1,TSharedPtr<FVisualizerEvent,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SProfileVisualizer *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  SProfileVisualizer *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SProfileVisualizer *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d74d55;
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
    local_res8 = (this->UserObject).Object;
    pTVar5 = pTVar1;
  }
LAB_148d74d55:
  local_28 = param_2->Object;
  local_18 = *(code **)&this->MethodPtr;
  uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_20 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (FVisualizerEvent *)0x0;
  pSVar4 = UE::Core::Private::DereferenceIfNecessary<SProfileVisualizer,SProfileVisualizer_*_&>
                     (&local_res8);
  (*local_18)((longlong)&pSVar4->_padding_ + (longlong)(int)uStack_10,param_1,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 148d74df0

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<FVisualizerEvent,1> *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SProfileVisualizer *pSVar3;
  SProfileVisualizer *pSVar4;
  bool bVar5;
  SProfileVisualizer *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar3 = (SProfileVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = pSVar3;
  local_res8 = (SProfileVisualizer *)0x0;
  if (pSVar3 != (SProfileVisualizer *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = (SProfileVisualizer *)0x0;
      local_res8 = (SProfileVisualizer *)0x0;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d74e26;
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
LAB_148d74e26:
  local_18 = *(code **)&this->MethodPtr;
  uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FVisualizerEvent *)0x0;
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SProfileVisualizer,SProfileVisualizer_*_&>
                     (&local_res8);
  (*local_18)((longlong)&pSVar3->_padding_ + (longlong)(int)uStack_10,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 148d74eb0

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<FVisualizerEvent,1> *param_1,FPointerEvent *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SProfileVisualizer *pSVar3;
  SProfileVisualizer *pSVar4;
  bool bVar5;
  SProfileVisualizer *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar3 = (SProfileVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = pSVar3;
  local_res8 = (SProfileVisualizer *)0x0;
  if (pSVar3 != (SProfileVisualizer *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = (SProfileVisualizer *)0x0;
      local_res8 = (SProfileVisualizer *)0x0;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d74ef5;
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
LAB_148d74ef5:
  local_18 = *(code **)&this->MethodPtr;
  uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FVisualizerEvent *)0x0;
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SProfileVisualizer,SProfileVisualizer_*_&>
                     (&local_res8);
  (*local_18)((longlong)&pSVar3->_padding_ + (longlong)(int)uStack_10,&local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 148d74f90

void __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::Execute(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SProfileVisualizer *pSVar3;
  SProfileVisualizer *pSVar4;
  bool bVar5;
  SProfileVisualizer *local_res8;
  
  pSVar3 = (SProfileVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SProfileVisualizer *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SProfileVisualizer *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148d74fc1;
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
LAB_148d74fc1:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SProfileVisualizer,SProfileVisualizer_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             (int)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// ExecuteIfSafe @ 148d753f0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *local_res8;
  undefined1 local_28 [32];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d75420;
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
    if (local_res8 != (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<STableRow<TSharedPtr<FVisualizerEvent,1>_>,STableRow<TSharedPtr<FVisualizerEvent,1>_>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d75420:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d75480

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d754b0;
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
    if (local_res8 != (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<STableRow<TSharedPtr<FVisualizerEvent,1>_>,STableRow<TSharedPtr<FVisualizerEvent,1>_>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d754b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d75510

bool __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SBarVisualizer *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  SBarVisualizer *local_res10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d75540;
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
    if (local_res10 != (SBarVisualizer *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>
                         (&local_res10);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_res8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d75540:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d755a0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SBarVisualizer *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SBarVisualizer *local_res8;
  longlong *local_18 [2];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d755d0;
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
    if (local_res8 != (SBarVisualizer *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>
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
LAB_148d755d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d75640

bool __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SBarVisualizer *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SBarVisualizer *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d75670;
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
    if (local_res8 != (SBarVisualizer *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d75670:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d756d0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SBarVisualizer *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SBarVisualizer *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d75700;
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
    if (local_res8 != (SBarVisualizer *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 (char)this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d75700:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d75760

bool __thiscall
TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventItem *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SEventItem *local_res8;
  longlong *local_18 [2];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d75790;
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
    if (local_res8 != (SEventItem *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventItem,SEventItem_*_&>(&local_res8);
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
LAB_148d75790:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d75800

bool __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventsTree *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SEventsTree *local_res8;
  longlong *local_18 [2];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d75830;
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
    if (local_res8 != (SEventsTree *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
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
LAB_148d75830:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d758a0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventsTree *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SEventsTree *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d758d0;
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
    if (local_res8 != (SEventsTree *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d758d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d75940

bool __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventsTree *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SEventsTree *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d75970;
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
    if (local_res8 != (SEventsTree *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 (char)this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d75970:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d759d0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SListViewPinnedRowWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  SListViewPinnedRowWidget *local_res10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d75a00;
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
    if (local_res10 != (SListViewPinnedRowWidget *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_*_&>
                         (&local_res10);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_res8,(int)this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d75a00:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d75a70

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SListViewPinnedRowWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  SListViewPinnedRowWidget *local_res10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d75aa0;
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
    if (local_res10 != (SListViewPinnedRowWidget *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_*_&>
                         (&local_res10);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_res8,(int)this->_padding_,*(undefined4 *)((longlong)&this->_padding_ + 4));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d75aa0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d75b10

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
                *this,TSharedRef<SHeaderRow,1> *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d75b45;
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
    if (local_res8 != (SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d75b45:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d75bb0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<FVisualizerEvent,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  SBarVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SBarVisualizer *pSVar4;
  bool bVar5;
  SBarVisualizer *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<ITableRow,1> local_18;
  
  pSVar1 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SBarVisualizer *)0x0;
  if (pSVar1 != (SBarVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d75bf1;
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
  if (local_res8 != (SBarVisualizer *)0x0) {
    local_18.Object = *(ITableRow **)&this->MethodPtr;
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(this->MethodPtr).field_0x8;
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FVisualizerEvent *)0x0;
    pSVar4 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>
                       (&local_res8);
    (*(code *)local_18.Object)
              ((longlong)&pSVar4->_padding_ +
               (longlong)(int)local_18.SharedReferenceCount.ReferenceController,&local_18,&local_28,
               param_2);
    TSharedRef<ITableRow,1>::~TSharedRef<ITableRow,1>(&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_148d75bf1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 148d75cc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
                *this,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> aVar1;
  code *pcVar2;
  atomic<int> aVar3;
  int iVar4;
  SBarVisualizer *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  SBarVisualizer *local_res8;
  code *local_d8;
  longlong lStack_d0;
  FReply local_c8;
  
  pTVar6 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar6->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d75d00;
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
    if (local_res8 != (SBarVisualizer *)0x0) {
      local_d8 = *(code **)&this->MethodPtr;
      lStack_d0 = *(longlong *)&(this->MethodPtr).field_0x8;
      pSVar5 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>
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
      (*pcVar2)((longlong)&pSVar5->_padding_ + (longlong)iVar4,&local_c8,param_1,param_2,&local_d8);
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return true;
    }
  }
LAB_148d75d00:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return false;
}

// ExecuteIfSafe @ 148d75dd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SBarVisualizer *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SBarVisualizer *local_res8;
  FReply local_c8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d75e00;
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
    if (local_res8 != (SBarVisualizer *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 &local_c8);
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d75e00:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d75e80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
                *this)

{
  atomic<int> aVar1;
  code *pcVar2;
  atomic<int> aVar3;
  int iVar4;
  SBarVisualizer *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  SBarVisualizer *local_res8;
  code *local_d8;
  longlong lStack_d0;
  FReply local_c8;
  
  pTVar6 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar6->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d75eb0;
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
    if (local_res8 != (SBarVisualizer *)0x0) {
      local_d8 = *(code **)&this->MethodPtr;
      lStack_d0 = *(longlong *)&(this->MethodPtr).field_0x8;
      pSVar5 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>
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
LAB_148d75eb0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return false;
}

// ExecuteIfSafe @ 148d75f70

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>
              *this,float param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SBarVisualizer *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  SBarVisualizer *local_res8 [4];
  
  pTVar6 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d75fa1;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    local_res8[0] = (this->UserObject).Object;
    if (local_res8[0] != (SBarVisualizer *)0x0) {
      pcVar1 = *(code **)&this->MethodPtr;
      uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
      pSVar5 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>
                         (local_res8);
      (*pcVar1)((longlong)&pSVar5->_padding_ + (longlong)(int)uVar2,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return true;
    }
  }
LAB_148d75fa1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return false;
}

// ExecuteIfSafe @ 148d76020

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
                *this,FGeometry *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SBarVisualizer *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SBarVisualizer *local_res8;
  FDeprecateSlateVector2D local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d76050;
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
    if (local_res8 != (SBarVisualizer *)0x0) {
      local_48 = param_1->Size;
      uStack_40 = *(undefined8 *)&param_1->Scale;
      local_38 = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
      uStack_30 = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
      local_28 = *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
      uStack_20 = *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
      local_18 = *(undefined8 *)
                  ((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 &local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d76050:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d760e0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,TSharedPtr<FVisualizerEvent,1> *param_1,Type param_2)

{
  SBarVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SBarVisualizer *pSVar4;
  bool bVar5;
  SBarVisualizer *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar1 = *(SBarVisualizer **)((longlong)this + 0x20);
  local_res8 = (SBarVisualizer *)0x0;
  if (pSVar1 != (SBarVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d76121;
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
    local_res8 = *(SBarVisualizer **)((longlong)this + 0x18);
  }
  pSVar4 = pSVar1;
  if (local_res8 != (SBarVisualizer *)0x0) {
    local_18 = *(code **)((longlong)this + 0x28);
    uStack_10 = *(undefined8 *)((longlong)this + 0x30);
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FVisualizerEvent *)0x0;
    pSVar4 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>
                       (&local_res8);
    (*local_18)((longlong)&pSVar4->_padding_ + (longlong)(int)uStack_10,&local_28,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_148d76121:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 148d761e0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,int>
::ExecuteIfSafe(void *this,TSharedPtr<FVisualizerEvent,1> *param_1,Type param_2)

{
  undefined4 uVar1;
  SBarVisualizer *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SBarVisualizer *pSVar5;
  bool bVar6;
  SBarVisualizer *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar2 = *(SBarVisualizer **)((longlong)this + 0x20);
  local_res8 = (SBarVisualizer *)0x0;
  if (pSVar2 != (SBarVisualizer *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar2->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar3 == (atomic<int>)0x0) goto LAB_148d76222;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar2->_padding_;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        *(atomic<int> *)&pSVar2->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    local_res8 = *(SBarVisualizer **)((longlong)this + 0x18);
  }
  pSVar5 = pSVar2;
  if (local_res8 == (SBarVisualizer *)0x0) {
LAB_148d76222:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar6 = false;
  }
  else {
    local_18 = *(code **)((longlong)this + 0x28);
    uStack_10 = *(undefined8 *)((longlong)this + 0x30);
    uVar1 = *(undefined4 *)((longlong)this + 8);
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FVisualizerEvent *)0x0;
    pSVar5 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>
                       (&local_res8);
    (*local_18)((longlong)&pSVar5->_padding_ + (longlong)(int)uStack_10,&local_28,param_2,uVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar6 = true;
  }
  return bVar6;
}

// ExecuteIfSafe @ 148d762e0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SBarVisualizer *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SBarVisualizer *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d76310;
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
    if (local_res8 != (SBarVisualizer *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SBarVisualizer,SBarVisualizer_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 (char)this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d76310:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d76370

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<FVisualizerEvent,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  SEventsTree *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SEventsTree *pSVar4;
  bool bVar5;
  SEventsTree *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<ITableRow,1> local_18;
  
  pSVar1 = (SEventsTree *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SEventsTree *)0x0;
  if (pSVar1 != (SEventsTree *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d763b1;
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
  if (local_res8 != (SEventsTree *)0x0) {
    local_18.Object = *(ITableRow **)&this->MethodPtr;
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(this->MethodPtr).field_0x8;
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FVisualizerEvent *)0x0;
    pSVar4 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
    (*(code *)local_18.Object)
              ((longlong)&pSVar4->_padding_ +
               (longlong)(int)local_18.SharedReferenceCount.ReferenceController,&local_18,&local_28,
               param_2);
    TSharedRef<ITableRow,1>::~TSharedRef<ITableRow,1>(&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_148d763b1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 148d76480

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy,FName>
::ExecuteIfSafe(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventsTree *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SEventsTree *local_res8;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d764b0;
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
    local_res8 = *(SEventsTree **)((longlong)this + 0x18);
    if (local_res8 != (SEventsTree *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
      (**(code **)((longlong)this + 0x28))
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),
                 *(undefined8 *)((longlong)this + 8));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d764b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d76510

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
                *this,FText *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventsTree *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SEventsTree *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d76545;
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
    if (local_res8 != (SEventsTree *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d76545:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d765b0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,FText *param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventsTree *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SEventsTree *local_res8;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d765f0;
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
    local_res8 = *(SEventsTree **)((longlong)this + 0x18);
    if (local_res8 != (SEventsTree *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
      (**(code **)((longlong)this + 0x28))
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
                 param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d765f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d76660

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<FVisualizerEvent,1> *param_1,
               TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  SEventsTree *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SEventsTree *pSVar4;
  bool bVar5;
  SEventsTree *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar1 = (SEventsTree *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SEventsTree *)0x0;
  if (pSVar1 != (SEventsTree *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d766a1;
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
  if (local_res8 != (SEventsTree *)0x0) {
    local_18 = *(code **)&this->MethodPtr;
    uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FVisualizerEvent *)0x0;
    pSVar4 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
    (*local_18)((longlong)&pSVar4->_padding_ + (longlong)(int)uStack_10,&local_28,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_148d766a1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 148d76760

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,TSharedPtr<FVisualizerEvent,1> *param_1,Type param_2)

{
  SEventsTree *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SEventsTree *pSVar4;
  bool bVar5;
  SEventsTree *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar1 = *(SEventsTree **)((longlong)this + 0x20);
  local_res8 = (SEventsTree *)0x0;
  if (pSVar1 != (SEventsTree *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d767a1;
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
    local_res8 = *(SEventsTree **)((longlong)this + 0x18);
  }
  pSVar4 = pSVar1;
  if (local_res8 != (SEventsTree *)0x0) {
    local_18 = *(code **)((longlong)this + 0x28);
    uStack_10 = *(undefined8 *)((longlong)this + 0x30);
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FVisualizerEvent *)0x0;
    pSVar4 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
    (*local_18)((longlong)&pSVar4->_padding_ + (longlong)(int)uStack_10,&local_28,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_148d767a1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 148d76860

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,Type param_1,FName *param_2,Type param_3)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventsTree *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SEventsTree *local_res8;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d768a0;
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
    local_res8 = *(SEventsTree **)((longlong)this + 0x18);
    if (local_res8 != (SEventsTree *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
      (**(code **)((longlong)this + 0x28))
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
                 param_2,param_3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d768a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d76910

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEventsTree *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SEventsTree *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d76940;
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
    if (local_res8 != (SEventsTree *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SEventsTree,SEventsTree_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 (char)this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d76940:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d769a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SProfileVisualizer *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SProfileVisualizer *local_res8;
  FReply local_c8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d769d0;
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
    if (local_res8 != (SProfileVisualizer *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SProfileVisualizer,SProfileVisualizer_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 &local_c8);
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d769d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d76a50

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
                *this,FMenuBuilder *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SProfileVisualizer *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SProfileVisualizer *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d76a85;
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
    if (local_res8 != (SProfileVisualizer *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SProfileVisualizer,SProfileVisualizer_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d76a85:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148d76af0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
                *this,int param_1,TSharedPtr<FVisualizerEvent,1> *param_2)

{
  SProfileVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SProfileVisualizer *pSVar4;
  bool bVar5;
  SProfileVisualizer *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar1 = (SProfileVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SProfileVisualizer *)0x0;
  if (pSVar1 != (SProfileVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d76b31;
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
  if (local_res8 != (SProfileVisualizer *)0x0) {
    local_18 = *(code **)&this->MethodPtr;
    uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    local_28 = param_2->Object;
    local_20 = (param_2->SharedReferenceCount).ReferenceController;
    (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_2->Object = (FVisualizerEvent *)0x0;
    pSVar4 = UE::Core::Private::DereferenceIfNecessary<SProfileVisualizer,SProfileVisualizer_*_&>
                       (&local_res8);
    (*local_18)((longlong)&pSVar4->_padding_ + (longlong)(int)uStack_10,param_1,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_148d76b31:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 148d76bf0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<FVisualizerEvent,1> *param_1)

{
  SProfileVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SProfileVisualizer *pSVar4;
  bool bVar5;
  SProfileVisualizer *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar1 = (SProfileVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SProfileVisualizer *)0x0;
  if (pSVar1 != (SProfileVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d76c25;
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
  if (local_res8 != (SProfileVisualizer *)0x0) {
    local_18 = *(code **)&this->MethodPtr;
    uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FVisualizerEvent *)0x0;
    pSVar4 = UE::Core::Private::DereferenceIfNecessary<SProfileVisualizer,SProfileVisualizer_*_&>
                       (&local_res8);
    (*local_18)((longlong)&pSVar4->_padding_ + (longlong)(int)uStack_10,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_148d76c25:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 148d76cd0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<FVisualizerEvent,1> *param_1,FPointerEvent *param_2)

{
  SProfileVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SProfileVisualizer *pSVar4;
  bool bVar5;
  SProfileVisualizer *local_res8;
  FVisualizerEvent *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pSVar1 = (SProfileVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SProfileVisualizer *)0x0;
  if (pSVar1 != (SProfileVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d76d11;
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
  if (local_res8 != (SProfileVisualizer *)0x0) {
    local_18 = *(code **)&this->MethodPtr;
    uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FVisualizerEvent *)0x0;
    pSVar4 = UE::Core::Private::DereferenceIfNecessary<SProfileVisualizer,SProfileVisualizer_*_&>
                       (&local_res8);
    (*local_18)((longlong)&pSVar4->_padding_ + (longlong)(int)uStack_10,&local_28,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_148d76d11:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 148d76dd0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SProfileVisualizer *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SProfileVisualizer *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d76e00;
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
    if (local_res8 != (SProfileVisualizer *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SProfileVisualizer,SProfileVisualizer_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 (int)this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148d76e00:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 148d7aa40

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7aa50

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7aa60

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7aa70

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7aa80

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7aa90

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7aaa0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7aab0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7aac0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7aad0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7aae0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7aaf0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7ab00

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7ab10

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7ab20

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7ab30

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7ab40

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7ab50

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7ab60

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7ab70

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 148d7ab80

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,int>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 148d7ab90

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7aba0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7abb0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy,FName>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 148d7abc0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7abd0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 148d7abe0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7abf0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 148d7ac00

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 148d7ac10

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7ac20

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7ac30

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7ac40

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7ac50

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7ac60

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d7ac70

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 148d7b750

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar2;
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

// GetObjectForTimerManager @ 148d7b7b0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar2;
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

// GetObjectForTimerManager @ 148d7b810

void * __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SBarVisualizer *pSVar2;
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

// GetObjectForTimerManager @ 148d7b870

void * __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SBarVisualizer *pSVar2;
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

// GetObjectForTimerManager @ 148d7b8d0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SBarVisualizer *pSVar2;
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

// GetObjectForTimerManager @ 148d7b930

void * __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SBarVisualizer *pSVar2;
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

// GetObjectForTimerManager @ 148d7b990

void * __thiscall
TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SEventItem *pSVar2;
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

// GetObjectForTimerManager @ 148d7b9f0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SEventsTree *pSVar2;
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

// GetObjectForTimerManager @ 148d7ba50

void * __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SEventsTree *pSVar2;
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

// GetObjectForTimerManager @ 148d7bab0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SEventsTree *pSVar2;
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

// GetObjectForTimerManager @ 148d7bb10

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SListViewPinnedRowWidget *pSVar2;
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

// GetObjectForTimerManager @ 148d7bb70

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SListViewPinnedRowWidget *pSVar2;
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

// GetObjectForTimerManager @ 148d7bbd0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar2;
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

// GetObjectForTimerManager @ 148d7bc30

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SBarVisualizer *pSVar2;
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

// GetObjectForTimerManager @ 148d7bc90

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SBarVisualizer *pSVar2;
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

// GetObjectForTimerManager @ 148d7bcf0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SBarVisualizer *pSVar2;
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

// GetObjectForTimerManager @ 148d7bd50

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SBarVisualizer *pSVar2;
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

// GetObjectForTimerManager @ 148d7bdb0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SBarVisualizer *pSVar2;
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

// GetObjectForTimerManager @ 148d7be10

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SBarVisualizer *pSVar2;
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

// GetObjectForTimerManager @ 148d7be70

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
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

// GetObjectForTimerManager @ 148d7bed0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,int>
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

// GetObjectForTimerManager @ 148d7bf30

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SBarVisualizer *pSVar2;
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

// GetObjectForTimerManager @ 148d7bf90

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SEventsTree *pSVar2;
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

// GetObjectForTimerManager @ 148d7bff0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy,FName>
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

// GetObjectForTimerManager @ 148d7c050

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SEventsTree *pSVar2;
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

// GetObjectForTimerManager @ 148d7c0b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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

// GetObjectForTimerManager @ 148d7c110

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SEventsTree *pSVar2;
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

// GetObjectForTimerManager @ 148d7c170

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
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

// GetObjectForTimerManager @ 148d7c1d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
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

// GetObjectForTimerManager @ 148d7c230

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SEventsTree *pSVar2;
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

// GetObjectForTimerManager @ 148d7c290

void * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SProfileVisualizer *pSVar2;
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

// GetObjectForTimerManager @ 148d7c2f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SProfileVisualizer *pSVar2;
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

// GetObjectForTimerManager @ 148d7c350

void * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SProfileVisualizer *pSVar2;
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

// GetObjectForTimerManager @ 148d7c3b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SProfileVisualizer *pSVar2;
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

// GetObjectForTimerManager @ 148d7c410

void * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SProfileVisualizer *pSVar2;
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

// GetObjectForTimerManager @ 148d7c470

void * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SProfileVisualizer *pSVar2;
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

// GetUObject @ 148d7d410

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d420

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d430

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d440

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d450

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d460

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::GetUObject(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d470

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d480

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d490

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
::GetUObject(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d4a0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::GetUObject(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d4b0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetUObject(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d4c0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::GetUObject(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d4d0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d4e0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d4f0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::GetUObject(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d500

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d510

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::GetUObject(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d520

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
GetUObject(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d530

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d540

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d550

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,int>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d560

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::GetUObject(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d570

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d580

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy,FName>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d590

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d5a0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d5b0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d5c0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d5d0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d5e0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::GetUObject(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d5f0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d600

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d610

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d620

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d630

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d7d640

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetUObject(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 148d7e430

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar4;
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar5;
  bool bVar6;
  
  pSVar1 = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7e465;
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
LAB_148d7e465:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7e490

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar4;
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar5;
  bool bVar6;
  
  pSVar1 = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7e4c5;
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
LAB_148d7e4c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7e4f0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SBarVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SBarVisualizer *pSVar4;
  SBarVisualizer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SBarVisualizer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SBarVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7e525;
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
LAB_148d7e525:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7e550

bool __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SBarVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SBarVisualizer *pSVar4;
  SBarVisualizer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SBarVisualizer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SBarVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7e585;
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
LAB_148d7e585:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7e5b0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SBarVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SBarVisualizer *pSVar4;
  SBarVisualizer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SBarVisualizer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SBarVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7e5e5;
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
LAB_148d7e5e5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7e610

bool __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
                *this,void *param_1)

{
  SBarVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SBarVisualizer *pSVar4;
  SBarVisualizer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SBarVisualizer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SBarVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7e645;
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
LAB_148d7e645:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7e670

bool __thiscall
TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SEventItem *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SEventItem *pSVar4;
  SEventItem *pSVar5;
  bool bVar6;
  
  pSVar1 = (SEventItem *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SEventItem *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SEventItem *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7e6a5;
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
LAB_148d7e6a5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7e6d0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SEventsTree *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SEventsTree *pSVar4;
  SEventsTree *pSVar5;
  bool bVar6;
  
  pSVar1 = (SEventsTree *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SEventsTree *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SEventsTree *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7e705;
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
LAB_148d7e705:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7e730

bool __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
                *this,void *param_1)

{
  SEventsTree *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SEventsTree *pSVar4;
  SEventsTree *pSVar5;
  bool bVar6;
  
  pSVar1 = (SEventsTree *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SEventsTree *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SEventsTree *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7e765;
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
LAB_148d7e765:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7e790

bool __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
                *this,void *param_1)

{
  SEventsTree *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SEventsTree *pSVar4;
  SEventsTree *pSVar5;
  bool bVar6;
  
  pSVar1 = (SEventsTree *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SEventsTree *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SEventsTree *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7e7c5;
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
LAB_148d7e7c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7e7f0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
                *this,void *param_1)

{
  SListViewPinnedRowWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SListViewPinnedRowWidget *pSVar4;
  SListViewPinnedRowWidget *pSVar5;
  bool bVar6;
  
  pSVar1 = (SListViewPinnedRowWidget *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SListViewPinnedRowWidget *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SListViewPinnedRowWidget *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7e825;
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
LAB_148d7e825:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7e850

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
                *this,void *param_1)

{
  SListViewPinnedRowWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SListViewPinnedRowWidget *pSVar4;
  SListViewPinnedRowWidget *pSVar5;
  bool bVar6;
  
  pSVar1 = (SListViewPinnedRowWidget *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SListViewPinnedRowWidget *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SListViewPinnedRowWidget *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7e885;
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
LAB_148d7e885:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7e8b0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar4;
  SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7e8e5;
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
LAB_148d7e8e5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7e910

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SBarVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SBarVisualizer *pSVar4;
  SBarVisualizer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SBarVisualizer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SBarVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7e945;
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
LAB_148d7e945:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7e970

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
                *this,void *param_1)

{
  SBarVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SBarVisualizer *pSVar4;
  SBarVisualizer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SBarVisualizer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SBarVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7e9a5;
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
LAB_148d7e9a5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7e9d0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  SBarVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SBarVisualizer *pSVar4;
  SBarVisualizer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SBarVisualizer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SBarVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7ea05;
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
LAB_148d7ea05:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7ea30

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
                *this,void *param_1)

{
  SBarVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SBarVisualizer *pSVar4;
  SBarVisualizer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SBarVisualizer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SBarVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7ea65;
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
LAB_148d7ea65:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7ea90

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  SBarVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SBarVisualizer *pSVar4;
  SBarVisualizer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SBarVisualizer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SBarVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7eac5;
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
LAB_148d7eac5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7eaf0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SBarVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SBarVisualizer *pSVar4;
  SBarVisualizer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SBarVisualizer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SBarVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7eb25;
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
LAB_148d7eb25:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7eb50

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7eb85;
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
LAB_148d7eb85:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 148d7ebb0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,int>
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7ebe5;
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
LAB_148d7ebe5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 148d7ec10

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
                *this,void *param_1)

{
  SBarVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SBarVisualizer *pSVar4;
  SBarVisualizer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SBarVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SBarVisualizer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SBarVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7ec45;
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
LAB_148d7ec45:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7ec70

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SEventsTree *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SEventsTree *pSVar4;
  SEventsTree *pSVar5;
  bool bVar6;
  
  pSVar1 = (SEventsTree *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SEventsTree *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SEventsTree *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7eca5;
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
LAB_148d7eca5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7ecd0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy,FName>
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7ed05;
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
LAB_148d7ed05:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 148d7ed30

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SEventsTree *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SEventsTree *pSVar4;
  SEventsTree *pSVar5;
  bool bVar6;
  
  pSVar1 = (SEventsTree *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SEventsTree *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SEventsTree *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7ed65;
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
LAB_148d7ed65:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7ed90

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7edc5;
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
LAB_148d7edc5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 148d7edf0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SEventsTree *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SEventsTree *pSVar4;
  SEventsTree *pSVar5;
  bool bVar6;
  
  pSVar1 = (SEventsTree *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SEventsTree *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SEventsTree *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7ee25;
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
LAB_148d7ee25:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7ee50

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7ee85;
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
LAB_148d7ee85:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 148d7eeb0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7eee5;
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
LAB_148d7eee5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 148d7ef10

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
                *this,void *param_1)

{
  SEventsTree *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SEventsTree *pSVar4;
  SEventsTree *pSVar5;
  bool bVar6;
  
  pSVar1 = (SEventsTree *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SEventsTree *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SEventsTree *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7ef45;
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
LAB_148d7ef45:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7ef70

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SProfileVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SProfileVisualizer *pSVar4;
  SProfileVisualizer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SProfileVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SProfileVisualizer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SProfileVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7efa5;
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
LAB_148d7efa5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7efd0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SProfileVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SProfileVisualizer *pSVar4;
  SProfileVisualizer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SProfileVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SProfileVisualizer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SProfileVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7f005;
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
LAB_148d7f005:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7f030

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SProfileVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SProfileVisualizer *pSVar4;
  SProfileVisualizer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SProfileVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SProfileVisualizer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SProfileVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7f065;
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
LAB_148d7f065:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7f090

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SProfileVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SProfileVisualizer *pSVar4;
  SProfileVisualizer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SProfileVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SProfileVisualizer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SProfileVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7f0c5;
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
LAB_148d7f0c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7f0f0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SProfileVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SProfileVisualizer *pSVar4;
  SProfileVisualizer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SProfileVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SProfileVisualizer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SProfileVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7f125;
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
LAB_148d7f125:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 148d7f150

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
                *this,void *param_1)

{
  SProfileVisualizer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SProfileVisualizer *pSVar4;
  SProfileVisualizer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SProfileVisualizer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SProfileVisualizer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SProfileVisualizer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7f185;
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
LAB_148d7f185:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// IsSafeToExecute @ 148d7f9a0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7f9d0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fa00

bool __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SBarVisualizer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fa30

bool __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SBarVisualizer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fa60

bool __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SBarVisualizer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fa90

bool __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SBarVisualizer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fac0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SEventItem *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7faf0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SEventsTree *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fb20

bool __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SEventsTree *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fb50

bool __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SEventsTree *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fb80

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SListViewPinnedRowWidget *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fbb0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SListViewPinnedRowWidget *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fbe0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0)
      && (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
         pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount))
  {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fc10

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SBarVisualizer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fc40

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SBarVisualizer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fc70

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SBarVisualizer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fca0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SBarVisualizer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fcd0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>
                *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SBarVisualizer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fd00

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SBarVisualizer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fd30

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fd60

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,int>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fd90

bool __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SBarVisualizer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fdc0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SEventsTree *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fdf0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy,FName>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fe20

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SEventsTree *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fe50

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fe80

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SEventsTree *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7feb0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7fee0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7ff10

bool __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SEventsTree *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7ff40

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SProfileVisualizer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7ff70

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SProfileVisualizer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7ffa0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SProfileVisualizer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d7ffd0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SProfileVisualizer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d80000

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SProfileVisualizer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148d80030

bool __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SProfileVisualizer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 148d92cd0

FName __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92ce0

FName __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92cf0

FName __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92d00

FName __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92d10

FName __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92d20

FName __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92d30

FName __thiscall
TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92d40

FName __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92d50

FName __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92d60

FName __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92d70

FName __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92d80

FName __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92d90

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92da0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92db0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92dc0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92dd0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92de0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92df0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92e00

FName __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92e10

FName __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,int>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92e20

FName __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92e30

FName __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92e40

FName __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy,FName>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92e50

FName __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92e60

FName __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92e70

FName __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92e80

FName __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92e90

FName __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92ea0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92eb0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92ec0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92ed0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92ee0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92ef0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d92f00

FName __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

