// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayer
// Functions: 55

// CreateCopy @ 146c7a160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVFDefaultGameMoviePlayer___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146c7a200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVFDefaultGameMoviePlayer___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146c7a270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVFDefaultGameMoviePlayer___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146c7a330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVFDefaultGameMoviePlayer___00__A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146c7a3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVFDefaultGameMoviePlayer___00__A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146c7a440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVFDefaultGameMoviePlayer___00__A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146c7a500

void __thiscall
TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSLoadingScreenTestWidget___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146c7a5a0

void __thiscall
TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSLoadingScreenTestWidget___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146c7a610

void __thiscall
TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSLoadingScreenTestWidget___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146c7a6d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFDefaultGameMoviePlayer___00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146c7a770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFDefaultGameMoviePlayer___00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146c7a7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFDefaultGameMoviePlayer___00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146c7a8a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VFDefaultGameMoviePlayer___00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146c7a940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VFDefaultGameMoviePlayer___00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146c7a9b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VFDefaultGameMoviePlayer___00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 146c7b790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

EVisibility __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FDefaultGameMoviePlayer *pFVar3;
  TEnumAsByte<EVisibility::Private> in_DL;
  FDefaultGameMoviePlayer *pFVar4;
  bool bVar5;
  FDefaultGameMoviePlayer *local_res8;
  
  pFVar3 = (FDefaultGameMoviePlayer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FDefaultGameMoviePlayer *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FDefaultGameMoviePlayer *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146c7b7d1;
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
LAB_146c7b7d1:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FDefaultGameMoviePlayer,FDefaultGameMoviePlayer_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)in_DL.Value;
}

// Execute @ 146c7b820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FOptionalSize __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FDefaultGameMoviePlayer *pFVar3;
  float in_EDX;
  FDefaultGameMoviePlayer *pFVar4;
  bool bVar5;
  FDefaultGameMoviePlayer *local_res8;
  
  pFVar3 = (FDefaultGameMoviePlayer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FDefaultGameMoviePlayer *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FDefaultGameMoviePlayer *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146c7b861;
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
LAB_146c7b861:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FDefaultGameMoviePlayer,FDefaultGameMoviePlayer_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return (FOptionalSize)in_EDX;
}

// Execute @ 146c7b8b0

EVisibility __thiscall
TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SLoadingScreenTestWidget *pSVar3;
  TEnumAsByte<EVisibility::Private> in_DL;
  SLoadingScreenTestWidget *pSVar4;
  bool bVar5;
  SLoadingScreenTestWidget *local_res8;
  
  pSVar3 = (SLoadingScreenTestWidget *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SLoadingScreenTestWidget *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SLoadingScreenTestWidget *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->field_0x8;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146c7b8f1;
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
LAB_146c7b8f1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SLoadingScreenTestWidget,SLoadingScreenTestWidget_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)(&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)in_DL.Value;
}

// Execute @ 146c7b940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FReply * __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
          *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FDefaultGameMoviePlayer *pFVar3;
  FDefaultGameMoviePlayer *pFVar4;
  bool bVar5;
  FDefaultGameMoviePlayer *local_res8;
  
  pFVar3 = (FDefaultGameMoviePlayer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FDefaultGameMoviePlayer *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FDefaultGameMoviePlayer *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146c7b982;
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
LAB_146c7b982:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FDefaultGameMoviePlayer,FDefaultGameMoviePlayer_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return __return_storage_ptr__;
}

// Execute @ 146c7b9e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FReply * __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
          *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FDefaultGameMoviePlayer *pFVar3;
  FDefaultGameMoviePlayer *pFVar4;
  bool bVar5;
  FDefaultGameMoviePlayer *local_res8;
  
  pFVar3 = (FDefaultGameMoviePlayer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FDefaultGameMoviePlayer *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FDefaultGameMoviePlayer *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146c7ba22;
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
LAB_146c7ba22:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FDefaultGameMoviePlayer,FDefaultGameMoviePlayer_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 146c7bc70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FDefaultGameMoviePlayer *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FDefaultGameMoviePlayer *local_res10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146c7bca0;
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
    if (local_res10 != (FDefaultGameMoviePlayer *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FDefaultGameMoviePlayer,FDefaultGameMoviePlayer_*_&>
                         (&local_res10);
      (**(code **)&this->MethodPtr)
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_res8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146c7bca0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 146c7bd00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FDefaultGameMoviePlayer *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FDefaultGameMoviePlayer *local_res10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146c7bd30;
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
    if (local_res10 != (FDefaultGameMoviePlayer *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FDefaultGameMoviePlayer,FDefaultGameMoviePlayer_*_&>
                         (&local_res10);
      (**(code **)&this->MethodPtr)
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_res8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146c7bd30:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 146c7bd90

bool __thiscall
TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SLoadingScreenTestWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  SLoadingScreenTestWidget *local_res10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146c7bdc0;
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
    if (local_res10 != (SLoadingScreenTestWidget *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SLoadingScreenTestWidget,SLoadingScreenTestWidget_*_&>
                         (&local_res10);
      (**(code **)&this->MethodPtr)
                (&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,local_res8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146c7bdc0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 146c7be20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
                *this,FGeometry *param_1,FKeyEvent *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FDefaultGameMoviePlayer *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FDefaultGameMoviePlayer *local_res8;
  FReply local_c8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146c7be60;
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
    if (local_res8 != (FDefaultGameMoviePlayer *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FDefaultGameMoviePlayer,FDefaultGameMoviePlayer_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 &local_c8,param_1,param_2);
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146c7be60:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 146c7bee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *this,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FDefaultGameMoviePlayer *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FDefaultGameMoviePlayer *local_res8;
  FReply local_c8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146c7bf20;
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
    if (local_res8 != (FDefaultGameMoviePlayer *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FDefaultGameMoviePlayer,FDefaultGameMoviePlayer_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 &local_c8,param_1,param_2);
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146c7bf20:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 146c7c950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146c7c960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146c7c970

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146c7c980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146c7c990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 146c7ce10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDefaultGameMoviePlayer *pFVar2;
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

// GetObjectForTimerManager @ 146c7ce70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDefaultGameMoviePlayer *pFVar2;
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

// GetObjectForTimerManager @ 146c7ced0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SLoadingScreenTestWidget *pSVar2;
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

// GetObjectForTimerManager @ 146c7cf30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDefaultGameMoviePlayer *pFVar2;
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

// GetObjectForTimerManager @ 146c7cf90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDefaultGameMoviePlayer *pFVar2;
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

// GetUObject @ 146c7d2a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146c7d2b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146c7d2c0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146c7d2d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146c7d2e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146c7d3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FDefaultGameMoviePlayer *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FDefaultGameMoviePlayer *pFVar4;
  FDefaultGameMoviePlayer *pFVar5;
  bool bVar6;
  
  pFVar1 = (FDefaultGameMoviePlayer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FDefaultGameMoviePlayer *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FDefaultGameMoviePlayer *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146c7d405;
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
LAB_146c7d405:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 146c7d430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FDefaultGameMoviePlayer *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FDefaultGameMoviePlayer *pFVar4;
  FDefaultGameMoviePlayer *pFVar5;
  bool bVar6;
  
  pFVar1 = (FDefaultGameMoviePlayer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FDefaultGameMoviePlayer *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FDefaultGameMoviePlayer *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146c7d465;
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
LAB_146c7d465:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 146c7d490

bool __thiscall
TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SLoadingScreenTestWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SLoadingScreenTestWidget *pSVar4;
  SLoadingScreenTestWidget *pSVar5;
  bool bVar6;
  
  pSVar1 = (SLoadingScreenTestWidget *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SLoadingScreenTestWidget *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SLoadingScreenTestWidget *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->field_0x8;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146c7d4c5;
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
LAB_146c7d4c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 146c7d4f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FDefaultGameMoviePlayer *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FDefaultGameMoviePlayer *pFVar4;
  FDefaultGameMoviePlayer *pFVar5;
  bool bVar6;
  
  pFVar1 = (FDefaultGameMoviePlayer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FDefaultGameMoviePlayer *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FDefaultGameMoviePlayer *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146c7d525;
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
LAB_146c7d525:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 146c7d550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FDefaultGameMoviePlayer *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FDefaultGameMoviePlayer *pFVar4;
  FDefaultGameMoviePlayer *pFVar5;
  bool bVar6;
  
  pFVar1 = (FDefaultGameMoviePlayer *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FDefaultGameMoviePlayer *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FDefaultGameMoviePlayer *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146c7d585;
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
LAB_146c7d585:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// IsSafeToExecute @ 146c7f110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FDefaultGameMoviePlayer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 146c7f140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FDefaultGameMoviePlayer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 146c7f170

bool __thiscall
TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SLoadingScreenTestWidget *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 146c7f1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FDefaultGameMoviePlayer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 146c7f1d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FDefaultGameMoviePlayer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 146c815b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146c815c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146c815d0

FName __thiscall
TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146c815e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146c815f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

