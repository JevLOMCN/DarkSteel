// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 154

// CreateCopy @ 14a7c9640

void __thiscall
TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBUFCarouselDisplayItem___00__A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_fa83f212 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7c96e0

void __thiscall
TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBUFCarouselDisplayItem___00__A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_fa83f212 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a7c9750

void __thiscall
TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
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
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBUFCarouselDisplayItem___00__A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_fa83f212 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7c9810

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7c98b0

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7c9920

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7c99e0

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7c9a80

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7c9af0

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7c9bb0

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7c9c50

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7c9cc0

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7c9d80

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7c9e20

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7c9e90

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7c9f50

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7c9ff0

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ca060

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ca120

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ca1c0

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ca230

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ca2f0

void __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetCarousel<UPanelSlot_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SWidgetCarousel_PEAVUPanelSlot_____00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ca390

void __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetCarousel<UPanelSlot_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SWidgetCarousel_PEAVUPanelSlot_____00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ca400

void __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetCarousel<UPanelSlot_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SWidgetCarousel_PEAVUPanelSlot_____00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ca4c0

void __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VFActivatableTreeNode___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ca560

void __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VFActivatableTreeNode___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ca5d0

void __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VFActivatableTreeNode___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ca690

void __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVUCommonActivatableWidget____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFActivatableTreeNode___00__A6AXXZUFDefaultDelegateUserPolicy__PEAVUCommonActivatableWidget____6B_
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

// CreateCopy @ 14a7ca740

void __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVUCommonActivatableWidget____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFActivatableTreeNode___00__A6AXXZUFDefaultDelegateUserPolicy__PEAVUCommonActivatableWidget____6B_
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

// CreateCopy @ 14a7ca7b0

void __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVUCommonActivatableWidget____6B_
    ;
    puVar7[1] = this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFActivatableTreeNode___00__A6AXXZUFDefaultDelegateUserPolicy__PEAVUCommonActivatableWidget____6B_
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

// CreateCopy @ 14a7ca870

void __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFActivatableTreeRoot___00__A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ca910

void __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFActivatableTreeRoot___00__A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ca980

void __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFActivatableTreeRoot___00__A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7caa40

void __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VFActivatableTreeRoot___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7caae0

void __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VFActivatableTreeRoot___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cab50

void __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VFActivatableTreeRoot___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cac10

void __thiscall
TBaseSPMethodDelegateInstance<0,FCommonAnalogCursor,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFCommonAnalogCursor___00__A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cacb0

void __thiscall
TBaseSPMethodDelegateInstance<0,FCommonAnalogCursor,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFCommonAnalogCursor___00__A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cad20

void __thiscall
TBaseSPMethodDelegateInstance<0,FCommonAnalogCursor,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFCommonAnalogCursor___00__A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cade0

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonAnimatedSwitcher,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSCommonAnimatedSwitcher___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cae80

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonAnimatedSwitcher,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSCommonAnimatedSwitcher___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7caef0

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonAnimatedSwitcher,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSCommonAnimatedSwitcher___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 14a7d51a0

TVector2<double> * __thiscall
TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
          *this,TVector2<double> *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FCarouselDisplayItem *pFVar3;
  FCarouselDisplayItem *pFVar4;
  bool bVar5;
  FCarouselDisplayItem *local_res8;
  
  pFVar3 = (FCarouselDisplayItem *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FCarouselDisplayItem *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FCarouselDisplayItem *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14a7d51e1;
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
LAB_14a7d51e1:
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FCarouselDisplayItem,FCarouselDisplayItem_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar3,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return __return_storage_ptr__;
}

// Execute @ 14a7d5230

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
          *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SCommonButtonTableRow<UObject_*> *pSVar3;
  SCommonButtonTableRow<UObject_*> *pSVar4;
  bool bVar5;
  SCommonButtonTableRow<UObject_*> *local_res8;
  
  pSVar3 = (SCommonButtonTableRow<UObject_*> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SCommonButtonTableRow<UObject_*> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SCommonButtonTableRow<UObject_*> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->field_0x8;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14a7d5272;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14a7d5272:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SCommonButtonTableRow<UObject_*>,SCommonButtonTableRow<UObject_*>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            (&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,__return_storage_ptr__,
             param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 14a7d52d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
          *this,FReply *__return_storage_ptr__,FGeometry *param_1,FDragDropEvent *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SCommonButtonTableRow<UObject_*> *pSVar3;
  SCommonButtonTableRow<UObject_*> *pSVar4;
  bool bVar5;
  SCommonButtonTableRow<UObject_*> *local_res8;
  
  pSVar3 = (SCommonButtonTableRow<UObject_*> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SCommonButtonTableRow<UObject_*> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SCommonButtonTableRow<UObject_*> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->field_0x8;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14a7d5312;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14a7d5312:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SCommonButtonTableRow<UObject_*>,SCommonButtonTableRow<UObject_*>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            (&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,__return_storage_ptr__,
             param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 14a7d5370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
          *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SCommonButtonTableRow<UObject_*> *pSVar3;
  SCommonButtonTableRow<UObject_*> *pSVar4;
  bool bVar5;
  SCommonButtonTableRow<UObject_*> *local_res8;
  
  pSVar3 = (SCommonButtonTableRow<UObject_*> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SCommonButtonTableRow<UObject_*> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SCommonButtonTableRow<UObject_*> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->field_0x8;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14a7d53b1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14a7d53b1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SCommonButtonTableRow<UObject_*>,SCommonButtonTableRow<UObject_*>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            (&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 14a7d5410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
          *this,FDragDropEvent *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SCommonButtonTableRow<UObject_*> *pSVar3;
  SCommonButtonTableRow<UObject_*> *pSVar4;
  bool bVar5;
  SCommonButtonTableRow<UObject_*> *local_res8;
  
  pSVar3 = (SCommonButtonTableRow<UObject_*> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SCommonButtonTableRow<UObject_*> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SCommonButtonTableRow<UObject_*> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->field_0x8;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14a7d5451;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14a7d5451:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SCommonButtonTableRow<UObject_*>,SCommonButtonTableRow<UObject_*>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)(&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 14a7d54a0

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SCommonButtonTableRow<UObject_*> *pSVar3;
  SCommonButtonTableRow<UObject_*> *pSVar4;
  bool bVar5;
  SCommonButtonTableRow<UObject_*> *local_res8;
  
  pSVar3 = (SCommonButtonTableRow<UObject_*> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SCommonButtonTableRow<UObject_*> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SCommonButtonTableRow<UObject_*> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->field_0x8;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14a7d54d1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14a7d54d1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SCommonButtonTableRow<UObject_*>,SCommonButtonTableRow<UObject_*>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)(&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 14a7d5520

void __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
          *this,bool param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SCommonButtonTableRow<UObject_*> *pSVar3;
  SCommonButtonTableRow<UObject_*> *pSVar4;
  bool bVar5;
  SCommonButtonTableRow<UObject_*> *local_res8;
  
  pSVar3 = (SCommonButtonTableRow<UObject_*> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SCommonButtonTableRow<UObject_*> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SCommonButtonTableRow<UObject_*> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->field_0x8;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14a7d5561;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14a7d5561:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SCommonButtonTableRow<UObject_*>,SCommonButtonTableRow<UObject_*>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)(&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 14a7d55b0

EActiveTimerReturnType __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetCarousel<UPanelSlot_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::Execute(void *this,double param_1,float param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  EActiveTimerReturnType EVar4;
  atomic<int> aVar5;
  SWidgetCarousel<UPanelSlot_*> *pSVar6;
  SWidgetCarousel<UPanelSlot_*> *pSVar7;
  bool bVar8;
  SWidgetCarousel<UPanelSlot_*> *local_res8;
  
  pSVar6 = *(SWidgetCarousel<UPanelSlot_*> **)((longlong)this + 0x20);
  local_res8 = (SWidgetCarousel<UPanelSlot_*> *)0x0;
  pSVar7 = pSVar6;
  if (pSVar6 != (SWidgetCarousel<UPanelSlot_*> *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar7 = local_res8;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14a7d55f7;
      LOCK();
      aVar5 = *(atomic<int> *)&pSVar6->_padding_;
      bVar8 = aVar3 == aVar5;
      if (bVar8) {
        *(atomic<int> *)&pSVar6->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar8);
    local_res8 = *(SWidgetCarousel<UPanelSlot_*> **)((longlong)this + 0x18);
    pSVar7 = pSVar6;
  }
LAB_14a7d55f7:
  pcVar1 = *(code **)((longlong)this + 0x28);
  uVar2 = *(undefined8 *)((longlong)this + 0x30);
  pSVar6 = UE::Core::Private::
           DereferenceIfNecessary<SWidgetCarousel<UPanelSlot_*>,SWidgetCarousel<UPanelSlot_*>_*_&>
                     (&local_res8);
  EVar4 = (*pcVar1)((longlong)&pSVar6->_padding_ + (longlong)(int)uVar2,SUB84(param_1,0),param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar7);
  return EVar4;
}

// Execute @ 14a7d5670

void __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FActivatableTreeNode *pFVar3;
  FActivatableTreeNode *pFVar4;
  bool bVar5;
  FActivatableTreeNode *local_res8;
  
  pFVar3 = (FActivatableTreeNode *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FActivatableTreeNode *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FActivatableTreeNode *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14a7d56a1;
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
LAB_14a7d56a1:
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FActivatableTreeNode,FActivatableTreeNode_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 14a7d56f0

void __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::Execute(TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FActivatableTreeNode *pFVar3;
  FActivatableTreeNode *pFVar4;
  bool bVar5;
  FActivatableTreeNode *local_res8;
  
  pFVar3 = (FActivatableTreeNode *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FActivatableTreeNode *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FActivatableTreeNode *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14a7d5721;
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
LAB_14a7d5721:
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FActivatableTreeNode,FActivatableTreeNode_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 14a7d5770

void __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::Execute(void *this,ECommonInputType param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FActivatableTreeRoot *pFVar3;
  FActivatableTreeRoot *pFVar4;
  bool bVar5;
  FActivatableTreeRoot *local_res8;
  
  pFVar3 = *(FActivatableTreeRoot **)((longlong)this + 0x20);
  local_res8 = (FActivatableTreeRoot *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FActivatableTreeRoot *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14a7d57b1;
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
    local_res8 = *(FActivatableTreeRoot **)((longlong)this + 0x18);
    pFVar4 = pFVar3;
  }
LAB_14a7d57b1:
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FActivatableTreeRoot,FActivatableTreeRoot_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x28))
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 14a7d5800

void __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FActivatableTreeRoot *pFVar3;
  FActivatableTreeRoot *pFVar4;
  bool bVar5;
  FActivatableTreeRoot *local_res8;
  
  pFVar3 = (FActivatableTreeRoot *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FActivatableTreeRoot *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FActivatableTreeRoot *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14a7d5831;
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
LAB_14a7d5831:
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FActivatableTreeRoot,FActivatableTreeRoot_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 14a7d5880

void __thiscall
TBaseSPMethodDelegateInstance<0,FCommonAnalogCursor,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::Execute(void *this,ECommonInputType param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FCommonAnalogCursor *pFVar3;
  FCommonAnalogCursor *pFVar4;
  bool bVar5;
  FCommonAnalogCursor *local_res8;
  
  pFVar3 = *(FCommonAnalogCursor **)((longlong)this + 0x20);
  local_res8 = (FCommonAnalogCursor *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FCommonAnalogCursor *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14a7d58c1;
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
    local_res8 = *(FCommonAnalogCursor **)((longlong)this + 0x18);
    pFVar4 = pFVar3;
  }
LAB_14a7d58c1:
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FCommonAnalogCursor,FCommonAnalogCursor_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x28))
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 14a7d5910

EActiveTimerReturnType __thiscall
TBaseSPMethodDelegateInstance<0,SCommonAnimatedSwitcher,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::Execute(void *this,double param_1,float param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  EActiveTimerReturnType EVar4;
  atomic<int> aVar5;
  SCommonAnimatedSwitcher *pSVar6;
  SCommonAnimatedSwitcher *pSVar7;
  bool bVar8;
  SCommonAnimatedSwitcher *local_res8;
  
  pSVar6 = *(SCommonAnimatedSwitcher **)((longlong)this + 0x20);
  local_res8 = (SCommonAnimatedSwitcher *)0x0;
  pSVar7 = pSVar6;
  if (pSVar6 != (SCommonAnimatedSwitcher *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar7 = local_res8;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14a7d5957;
      LOCK();
      aVar5 = *(atomic<int> *)&pSVar6->_padding_;
      bVar8 = aVar3 == aVar5;
      if (bVar8) {
        *(atomic<int> *)&pSVar6->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar8);
    local_res8 = *(SCommonAnimatedSwitcher **)((longlong)this + 0x18);
    pSVar7 = pSVar6;
  }
LAB_14a7d5957:
  pcVar1 = *(code **)((longlong)this + 0x28);
  uVar2 = *(undefined8 *)((longlong)this + 0x30);
  pSVar6 = UE::Core::Private::
           DereferenceIfNecessary<SCommonAnimatedSwitcher,SCommonAnimatedSwitcher_*_&>(&local_res8);
  EVar4 = (*pcVar1)((longlong)&pSVar6->_padding_ + (longlong)(int)uVar2,SUB84(param_1,0),param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar7);
  return EVar4;
}

// ExecuteIfSafe @ 14a7d7070

bool __thiscall
TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FCarouselDisplayItem *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FCarouselDisplayItem *local_res8;
  undefined1 local_18 [16];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7d70a0;
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
    if (local_res8 != (FCarouselDisplayItem *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FCarouselDisplayItem,FCarouselDisplayItem_*_&>(&local_res8);
      (*(code *)this->MethodPtr)(pFVar3,local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14a7d70a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14a7d7100

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *this,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SCommonButtonTableRow<UObject_*> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SCommonButtonTableRow<UObject_*> *local_res8;
  FReply local_c8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7d7140;
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
    if (local_res8 != (SCommonButtonTableRow<UObject_*> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SCommonButtonTableRow<UObject_*>,SCommonButtonTableRow<UObject_*>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                (&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,&local_c8,param_1,param_2
                );
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14a7d7140:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14a7d71c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SCommonButtonTableRow<UObject_*> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SCommonButtonTableRow<UObject_*> *local_res8;
  FReply local_c8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7d7200;
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
    if (local_res8 != (SCommonButtonTableRow<UObject_*> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SCommonButtonTableRow<UObject_*>,SCommonButtonTableRow<UObject_*>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                (&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,&local_c8,param_1,param_2
                );
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14a7d7200:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14a7d7280

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SCommonButtonTableRow<UObject_*> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SCommonButtonTableRow<UObject_*> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7d72c0;
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
    if (local_res8 != (SCommonButtonTableRow<UObject_*> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SCommonButtonTableRow<UObject_*>,SCommonButtonTableRow<UObject_*>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                (&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14a7d72c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14a7d7330

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,FDragDropEvent *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SCommonButtonTableRow<UObject_*> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SCommonButtonTableRow<UObject_*> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7d7365;
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
    if (local_res8 != (SCommonButtonTableRow<UObject_*> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SCommonButtonTableRow<UObject_*>,SCommonButtonTableRow<UObject_*>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                (&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14a7d7365:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14a7d73d0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SCommonButtonTableRow<UObject_*> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SCommonButtonTableRow<UObject_*> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7d7400;
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
    if (local_res8 != (SCommonButtonTableRow<UObject_*> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SCommonButtonTableRow<UObject_*>,SCommonButtonTableRow<UObject_*>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)(&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14a7d7400:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14a7d7460

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,bool param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SCommonButtonTableRow<UObject_*> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SCommonButtonTableRow<UObject_*> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7d7495;
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
    if (local_res8 != (SCommonButtonTableRow<UObject_*> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SCommonButtonTableRow<UObject_*>,SCommonButtonTableRow<UObject_*>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                (&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14a7d7495:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14a7d7500

bool __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetCarousel<UPanelSlot_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,double param_1,float param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SWidgetCarousel<UPanelSlot_*> *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  SWidgetCarousel<UPanelSlot_*> *local_res8 [4];
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7d7540;
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
    local_res8[0] = *(SWidgetCarousel<UPanelSlot_*> **)((longlong)this + 0x18);
    if (local_res8[0] != (SWidgetCarousel<UPanelSlot_*> *)0x0) {
      pcVar1 = *(code **)((longlong)this + 0x28);
      uVar2 = *(undefined8 *)((longlong)this + 0x30);
      pSVar5 = UE::Core::Private::
               DereferenceIfNecessary<SWidgetCarousel<UPanelSlot_*>,SWidgetCarousel<UPanelSlot_*>_*_&>
                         (local_res8);
      (*pcVar1)((longlong)&pSVar5->_padding_ + (longlong)(int)uVar2,SUB84(param_1,0),param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return true;
    }
  }
LAB_14a7d7540:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return false;
}

// ExecuteIfSafe @ 14a7d75d0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FActivatableTreeNode *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FActivatableTreeNode *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7d7600;
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
    if (local_res8 != (FActivatableTreeNode *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FActivatableTreeNode,FActivatableTreeNode_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14a7d7600:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14a7d7660

bool __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FActivatableTreeNode *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FActivatableTreeNode *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7d7690;
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
    if (local_res8 != (FActivatableTreeNode *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FActivatableTreeNode,FActivatableTreeNode_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14a7d7690:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14a7d76f0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,ECommonInputType param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FActivatableTreeRoot *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FActivatableTreeRoot *local_res8;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7d7725;
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
    local_res8 = *(FActivatableTreeRoot **)((longlong)this + 0x18);
    if (local_res8 != (FActivatableTreeRoot *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FActivatableTreeRoot,FActivatableTreeRoot_*_&>(&local_res8);
      (**(code **)((longlong)this + 0x28))
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14a7d7725:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14a7d7790

bool __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FActivatableTreeRoot *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FActivatableTreeRoot *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7d77c0;
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
    if (local_res8 != (FActivatableTreeRoot *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FActivatableTreeRoot,FActivatableTreeRoot_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14a7d77c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14a7d7820

bool __thiscall
TBaseSPMethodDelegateInstance<0,FCommonAnalogCursor,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,ECommonInputType param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FCommonAnalogCursor *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FCommonAnalogCursor *local_res8;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7d7855;
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
    local_res8 = *(FCommonAnalogCursor **)((longlong)this + 0x18);
    if (local_res8 != (FCommonAnalogCursor *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FCommonAnalogCursor,FCommonAnalogCursor_*_&>(&local_res8);
      (**(code **)((longlong)this + 0x28))
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14a7d7855:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14a7d78c0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonAnimatedSwitcher,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,double param_1,float param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SCommonAnimatedSwitcher *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  SCommonAnimatedSwitcher *local_res8 [4];
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7d7900;
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
    local_res8[0] = *(SCommonAnimatedSwitcher **)((longlong)this + 0x18);
    if (local_res8[0] != (SCommonAnimatedSwitcher *)0x0) {
      pcVar1 = *(code **)((longlong)this + 0x28);
      uVar2 = *(undefined8 *)((longlong)this + 0x30);
      pSVar5 = UE::Core::Private::
               DereferenceIfNecessary<SCommonAnimatedSwitcher,SCommonAnimatedSwitcher_*_&>
                         (local_res8);
      (*pcVar1)((longlong)&pSVar5->_padding_ + (longlong)(int)uVar2,SUB84(param_1,0),param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return true;
    }
  }
LAB_14a7d7900:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 14a7e07f0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0800

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0810

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0820

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0830

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0840

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0850

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0860

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetCarousel<UPanelSlot_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 14a7e0870

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0880

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0890

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 14a7e08a0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e08b0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FCommonAnalogCursor,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 14a7e08c0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SCommonAnimatedSwitcher,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetObjectForTimerManager @ 14a7e37d0

void * __thiscall
TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FCarouselDisplayItem *pFVar2;
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

// GetObjectForTimerManager @ 14a7e3830

void * __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SCommonButtonTableRow<UObject_*> *pSVar2;
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

// GetObjectForTimerManager @ 14a7e3890

void * __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SCommonButtonTableRow<UObject_*> *pSVar2;
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

// GetObjectForTimerManager @ 14a7e38f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SCommonButtonTableRow<UObject_*> *pSVar2;
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

// GetObjectForTimerManager @ 14a7e3950

void * __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SCommonButtonTableRow<UObject_*> *pSVar2;
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

// GetObjectForTimerManager @ 14a7e39b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SCommonButtonTableRow<UObject_*> *pSVar2;
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

// GetObjectForTimerManager @ 14a7e3a10

void * __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SCommonButtonTableRow<UObject_*> *pSVar2;
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

// GetObjectForTimerManager @ 14a7e3a70

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetCarousel<UPanelSlot_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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

// GetObjectForTimerManager @ 14a7e3ad0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FActivatableTreeNode *pFVar2;
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

// GetObjectForTimerManager @ 14a7e3b30

void * __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FActivatableTreeNode *pFVar2;
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

// GetObjectForTimerManager @ 14a7e3b90

void * __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
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

// GetObjectForTimerManager @ 14a7e3bf0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FActivatableTreeRoot *pFVar2;
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

// GetObjectForTimerManager @ 14a7e3c50

void * __thiscall
TBaseSPMethodDelegateInstance<0,FCommonAnalogCursor,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
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

// GetObjectForTimerManager @ 14a7e3cb0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SCommonAnimatedSwitcher,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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

// GetUObject @ 14a7e92f0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a7e9300

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a7e9310

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a7e9320

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a7e9330

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a7e9340

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a7e9350

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a7e9360

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetCarousel<UPanelSlot_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a7e9370

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a7e9380

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::GetUObject(TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a7e9390

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a7e93a0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a7e93b0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FCommonAnalogCursor,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a7e93c0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SCommonAnimatedSwitcher,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14a7f0fd0

bool __thiscall
TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FCarouselDisplayItem *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FCarouselDisplayItem *pFVar4;
  FCarouselDisplayItem *pFVar5;
  bool bVar6;
  
  pFVar1 = (FCarouselDisplayItem *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FCarouselDisplayItem *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FCarouselDisplayItem *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7f1005;
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
LAB_14a7f1005:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14a7f1030

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SCommonButtonTableRow<UObject_*> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SCommonButtonTableRow<UObject_*> *pSVar4;
  SCommonButtonTableRow<UObject_*> *pSVar5;
  bool bVar6;
  
  pSVar1 = (SCommonButtonTableRow<UObject_*> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SCommonButtonTableRow<UObject_*> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SCommonButtonTableRow<UObject_*> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->field_0x8;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7f1065;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14a7f1065:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14a7f1090

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SCommonButtonTableRow<UObject_*> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SCommonButtonTableRow<UObject_*> *pSVar4;
  SCommonButtonTableRow<UObject_*> *pSVar5;
  bool bVar6;
  
  pSVar1 = (SCommonButtonTableRow<UObject_*> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SCommonButtonTableRow<UObject_*> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SCommonButtonTableRow<UObject_*> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->field_0x8;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7f10c5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14a7f10c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14a7f10f0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SCommonButtonTableRow<UObject_*> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SCommonButtonTableRow<UObject_*> *pSVar4;
  SCommonButtonTableRow<UObject_*> *pSVar5;
  bool bVar6;
  
  pSVar1 = (SCommonButtonTableRow<UObject_*> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SCommonButtonTableRow<UObject_*> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SCommonButtonTableRow<UObject_*> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->field_0x8;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7f1125;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14a7f1125:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14a7f1150

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SCommonButtonTableRow<UObject_*> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SCommonButtonTableRow<UObject_*> *pSVar4;
  SCommonButtonTableRow<UObject_*> *pSVar5;
  bool bVar6;
  
  pSVar1 = (SCommonButtonTableRow<UObject_*> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SCommonButtonTableRow<UObject_*> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SCommonButtonTableRow<UObject_*> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->field_0x8;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7f1185;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14a7f1185:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14a7f11b0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SCommonButtonTableRow<UObject_*> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SCommonButtonTableRow<UObject_*> *pSVar4;
  SCommonButtonTableRow<UObject_*> *pSVar5;
  bool bVar6;
  
  pSVar1 = (SCommonButtonTableRow<UObject_*> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SCommonButtonTableRow<UObject_*> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SCommonButtonTableRow<UObject_*> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->field_0x8;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7f11e5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14a7f11e5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14a7f1210

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SCommonButtonTableRow<UObject_*> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SCommonButtonTableRow<UObject_*> *pSVar4;
  SCommonButtonTableRow<UObject_*> *pSVar5;
  bool bVar6;
  
  pSVar1 = (SCommonButtonTableRow<UObject_*> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SCommonButtonTableRow<UObject_*> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SCommonButtonTableRow<UObject_*> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->field_0x8;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7f1245;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14a7f1245:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14a7f1270

bool __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetCarousel<UPanelSlot_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7f12a5;
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
LAB_14a7f12a5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 14a7f12d0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FActivatableTreeNode *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FActivatableTreeNode *pFVar4;
  FActivatableTreeNode *pFVar5;
  bool bVar6;
  
  pFVar1 = (FActivatableTreeNode *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FActivatableTreeNode *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FActivatableTreeNode *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7f1305;
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
LAB_14a7f1305:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14a7f1330

bool __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
                *this,void *param_1)

{
  FActivatableTreeNode *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FActivatableTreeNode *pFVar4;
  FActivatableTreeNode *pFVar5;
  bool bVar6;
  
  pFVar1 = (FActivatableTreeNode *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FActivatableTreeNode *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FActivatableTreeNode *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7f1365;
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
LAB_14a7f1365:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14a7f1390

bool __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7f13c5;
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
LAB_14a7f13c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 14a7f13f0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FActivatableTreeRoot *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FActivatableTreeRoot *pFVar4;
  FActivatableTreeRoot *pFVar5;
  bool bVar6;
  
  pFVar1 = (FActivatableTreeRoot *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FActivatableTreeRoot *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FActivatableTreeRoot *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7f1425;
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
LAB_14a7f1425:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14a7f1450

bool __thiscall
TBaseSPMethodDelegateInstance<0,FCommonAnalogCursor,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7f1485;
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
LAB_14a7f1485:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 14a7f14b0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonAnimatedSwitcher,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7f14e5;
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
LAB_14a7f14e5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// IsSafeToExecute @ 14a7f6870

bool __thiscall
TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FCarouselDisplayItem *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14a7f68a0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SCommonButtonTableRow<UObject_*> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14a7f68d0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SCommonButtonTableRow<UObject_*> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14a7f6900

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SCommonButtonTableRow<UObject_*> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14a7f6930

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SCommonButtonTableRow<UObject_*> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14a7f6960

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SCommonButtonTableRow<UObject_*> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14a7f6990

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SCommonButtonTableRow<UObject_*> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14a7f69c0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetCarousel<UPanelSlot_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14a7f69f0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FActivatableTreeNode *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14a7f6a20

bool __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FActivatableTreeNode *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14a7f6a50

bool __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14a7f6a80

bool __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FActivatableTreeRoot *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14a7f6ab0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FCommonAnalogCursor,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14a7f6ae0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SCommonAnimatedSwitcher,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 14a8243a0

FName __thiscall
TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,FCarouselDisplayItem_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8243b0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8243c0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8243d0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8243e0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8243f0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824400

FName __thiscall
TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SCommonButtonTableRow<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824410

FName __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetCarousel<UPanelSlot_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824420

FName __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824430

FName __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FActivatableTreeNode,1,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824440

FName __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824450

FName __thiscall
TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FActivatableTreeRoot,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824460

FName __thiscall
TBaseSPMethodDelegateInstance<0,FCommonAnalogCursor,1,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824470

FName __thiscall
TBaseSPMethodDelegateInstance<0,SCommonAnimatedSwitcher,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

