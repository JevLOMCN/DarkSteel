// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 55

// CreateCopy @ 14b36dbf0

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGeneratorInstanceInfo_Metasound___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMetasoundGeneratorHandle_Metasound___00__A6AXAEBUFGeneratorInstanceInfo_2__ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_8a6c2547 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b36dc90

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGeneratorInstanceInfo_Metasound___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMetasoundGeneratorHandle_Metasound___00__A6AXAEBUFGeneratorInstanceInfo_2__ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_8a6c2547 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14b36dd00

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGeneratorInstanceInfo_Metasound___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMetasoundGeneratorHandle_Metasound___00__A6AXAEBUFGeneratorInstanceInfo_2__ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_8a6c2547 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b36ddc0

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_UFVertexInterfaceChange_Metasound__V__TSizedDefaultAllocator__0CA______ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMetasoundGeneratorHandle_Metasound___00__A6AXAEBV__TArray_UFVertexInterfaceChange_Metasound__V__TSizedDefaultAllocator__0CA______ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_330099e8 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b36de60

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_UFVertexInterfaceChange_Metasound__V__TSizedDefaultAllocator__0CA______ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMetasoundGeneratorHandle_Metasound___00__A6AXAEBV__TArray_UFVertexInterfaceChange_Metasound__V__TSizedDefaultAllocator__0CA______ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_330099e8 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14b36ded0

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_UFVertexInterfaceChange_Metasound__V__TSizedDefaultAllocator__0CA______ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMetasoundGeneratorHandle_Metasound___00__A6AXAEBV__TArray_UFVertexInterfaceChange_Metasound__V__TSizedDefaultAllocator__0CA______ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_330099e8 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b36df90

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName__00V__TSharedPtr_VIOutputStorage_Metasound___00___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMetasoundGeneratorHandle_Metasound___00__A6AXVFName__00V__TSharedPtr_VIOutputStorage_Metasound___00___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_93cef49d *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b36e030

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__00V__TSharedPtr_VIOutputStorage_Metasound___00___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMetasoundGeneratorHandle_Metasound___00__A6AXVFName__00V__TSharedPtr_VIOutputStorage_Metasound___00___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_93cef49d *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14b36e0a0

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName__00V__TSharedPtr_VIOutputStorage_Metasound___00___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMetasoundGeneratorHandle_Metasound___00__A6AXVFName__00V__TSharedPtr_VIOutputStorage_Metasound___00___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_93cef49d *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b36e160

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMetasoundGeneratorHandle_Metasound___00__A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_3d06daf5 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b36e200

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMetasoundGeneratorHandle_Metasound___00__A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_3d06daf5 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14b36e270

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
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
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMetasoundGeneratorHandle_Metasound___00__A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_3d06daf5 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b36e330

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDocumentModifyDelegates_Frontend_Metasound___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VIDocumentBuilderTransactionListener_Frontend_Metasound___00__A6AXAEAUFDocumentModifyDelegates_23__ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14b36e3d0

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDocumentModifyDelegates_Frontend_Metasound___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VIDocumentBuilderTransactionListener_Frontend_Metasound___00__A6AXAEAUFDocumentModifyDelegates_23__ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14b36e440

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFDocumentModifyDelegates_Frontend_Metasound___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VIDocumentBuilderTransactionListener_Frontend_Metasound___00__A6AXAEAUFDocumentModifyDelegates_23__ZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 14b39d400

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
          *this,FGeneratorInstanceInfo *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FMetasoundGeneratorHandle *pFVar3;
  FMetasoundGeneratorHandle *pFVar4;
  bool bVar5;
  FMetasoundGeneratorHandle *local_res8;
  
  pFVar3 = (FMetasoundGeneratorHandle *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FMetasoundGeneratorHandle *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FMetasoundGeneratorHandle *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14b39d441;
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
LAB_14b39d441:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<Metasound::FMetasoundGeneratorHandle,Metasound::FMetasoundGeneratorHandle_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar3,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 14b39d490

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
          *this,TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_> *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FMetasoundGeneratorHandle *pFVar3;
  FMetasoundGeneratorHandle *pFVar4;
  bool bVar5;
  FMetasoundGeneratorHandle *local_res8;
  
  pFVar3 = (FMetasoundGeneratorHandle *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FMetasoundGeneratorHandle *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FMetasoundGeneratorHandle *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14b39d4d1;
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
LAB_14b39d4d1:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<Metasound::FMetasoundGeneratorHandle,Metasound::FMetasoundGeneratorHandle_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar3,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 14b39d520

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
          *this,FName param_1,FName param_2,FName param_3,
         TSharedPtr<Metasound::IOutputStorage,1> *param_4)

{
  pmf_93cef49d pVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FMetasoundGeneratorHandle *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FMetasoundGeneratorHandle *local_res8;
  IOutputStorage *local_28;
  TReferenceControllerBase<1> *local_20;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FMetasoundGeneratorHandle *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b39d564;
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
    local_res8 = (this->UserObject).Object;
  }
LAB_14b39d564:
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<Metasound::FMetasoundGeneratorHandle,Metasound::FMetasoundGeneratorHandle_*_&>
                     (&local_res8);
  pVar1 = this->MethodPtr;
  local_28 = param_4->Object;
  local_20 = (param_4->SharedReferenceCount).ReferenceController;
  (param_4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_4->Object = (IOutputStorage *)0x0;
  (*(code *)pVar1)(pFVar4,param_1,param_2,param_3,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14b39d5f0

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FMetasoundGeneratorHandle *pFVar3;
  FMetasoundGeneratorHandle *pFVar4;
  bool bVar5;
  FMetasoundGeneratorHandle *local_res8;
  
  pFVar3 = (FMetasoundGeneratorHandle *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FMetasoundGeneratorHandle *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FMetasoundGeneratorHandle *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14b39d621;
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
LAB_14b39d621:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<Metasound::FMetasoundGeneratorHandle,Metasound::FMetasoundGeneratorHandle_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 14b39d660

void __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
          *this,FDocumentModifyDelegates *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  IDocumentBuilderTransactionListener *pIVar3;
  IDocumentBuilderTransactionListener *pIVar4;
  bool bVar5;
  IDocumentBuilderTransactionListener *local_res8;
  
  pIVar3 = (IDocumentBuilderTransactionListener *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (IDocumentBuilderTransactionListener *)0x0;
  pIVar4 = pIVar3;
  if (pIVar3 != (IDocumentBuilderTransactionListener *)0x0) {
    aVar1 = *(atomic<int> *)&pIVar3->field_0x8;
    do {
      pIVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14b39d6a1;
      LOCK();
      aVar2 = *(atomic<int> *)&pIVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pIVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pIVar4 = pIVar3;
  }
LAB_14b39d6a1:
  pIVar3 = UE::Core::Private::
           DereferenceIfNecessary<Metasound::Frontend::IDocumentBuilderTransactionListener,Metasound::Frontend::IDocumentBuilderTransactionListener_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)(&pIVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar4);
  return;
}

// ExecuteIfSafe @ 14b3a3760

bool __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
                *this,FGeneratorInstanceInfo *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FMetasoundGeneratorHandle *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FMetasoundGeneratorHandle *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b3a3795;
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
    if (local_res8 != (FMetasoundGeneratorHandle *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<Metasound::FMetasoundGeneratorHandle,Metasound::FMetasoundGeneratorHandle_*_&>
                         (&local_res8);
      (*(code *)this->MethodPtr)(pFVar3,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14b3a3795:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14b3a3800

bool __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
                *this,TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_> *param_1
               )

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FMetasoundGeneratorHandle *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FMetasoundGeneratorHandle *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b3a3835;
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
    if (local_res8 != (FMetasoundGeneratorHandle *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<Metasound::FMetasoundGeneratorHandle,Metasound::FMetasoundGeneratorHandle_*_&>
                         (&local_res8);
      (*(code *)this->MethodPtr)(pFVar3,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14b3a3835:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14b3a38a0

bool __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
                *this,FName param_1,FName param_2,FName param_3,
               TSharedPtr<Metasound::IOutputStorage,1> *param_4)

{
  pmf_93cef49d pVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FMetasoundGeneratorHandle *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FMetasoundGeneratorHandle *local_res8;
  IOutputStorage *local_28;
  TReferenceControllerBase<1> *local_20;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FMetasoundGeneratorHandle *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b3a38f0;
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
    local_res8 = (this->UserObject).Object;
  }
  if (local_res8 == (FMetasoundGeneratorHandle *)0x0) {
LAB_14b3a38f0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
    bVar6 = false;
  }
  else {
    pFVar4 = UE::Core::Private::
             DereferenceIfNecessary<Metasound::FMetasoundGeneratorHandle,Metasound::FMetasoundGeneratorHandle_*_&>
                       (&local_res8);
    local_28 = param_4->Object;
    pVar1 = this->MethodPtr;
    local_20 = (param_4->SharedReferenceCount).ReferenceController;
    (param_4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_4->Object = (IOutputStorage *)0x0;
    (*(code *)pVar1)(pFVar4,param_1,param_2,param_3,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
    bVar6 = true;
  }
  return bVar6;
}

// ExecuteIfSafe @ 14b3a39a0

bool __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FMetasoundGeneratorHandle *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FMetasoundGeneratorHandle *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b3a39d0;
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
    if (local_res8 != (FMetasoundGeneratorHandle *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<Metasound::FMetasoundGeneratorHandle,Metasound::FMetasoundGeneratorHandle_*_&>
                         (&local_res8);
      (*(code *)this->MethodPtr)(pFVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14b3a39d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14b3a3a30

bool __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
                *this,FDocumentModifyDelegates *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  IDocumentBuilderTransactionListener *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  IDocumentBuilderTransactionListener *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b3a3a65;
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
    if (local_res8 != (IDocumentBuilderTransactionListener *)0x0) {
      pIVar3 = UE::Core::Private::
               DereferenceIfNecessary<Metasound::Frontend::IDocumentBuilderTransactionListener,Metasound::Frontend::IDocumentBuilderTransactionListener_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                (&pIVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14b3a3a65:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 14b3ae2c0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b3ae2d0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b3ae2e0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b3ae2f0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b3ae300

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14b3be1e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FMetasoundGeneratorHandle *pFVar2;
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

// GetObjectForTimerManager @ 14b3be240

void * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FMetasoundGeneratorHandle *pFVar2;
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

// GetObjectForTimerManager @ 14b3be2a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FMetasoundGeneratorHandle *pFVar2;
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

// GetObjectForTimerManager @ 14b3be300

void * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FMetasoundGeneratorHandle *pFVar2;
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

// GetObjectForTimerManager @ 14b3be360

void * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IDocumentBuilderTransactionListener *pIVar2;
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
        pIVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pIVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetUObject @ 14b3c20c0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b3c20d0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b3c20e0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b3c20f0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b3c2100

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14b3c3e60

bool __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  FMetasoundGeneratorHandle *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FMetasoundGeneratorHandle *pFVar4;
  FMetasoundGeneratorHandle *pFVar5;
  bool bVar6;
  
  pFVar1 = (FMetasoundGeneratorHandle *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FMetasoundGeneratorHandle *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FMetasoundGeneratorHandle *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14b3c3e95;
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
LAB_14b3c3e95:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14b3c3ec0

bool __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  FMetasoundGeneratorHandle *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FMetasoundGeneratorHandle *pFVar4;
  FMetasoundGeneratorHandle *pFVar5;
  bool bVar6;
  
  pFVar1 = (FMetasoundGeneratorHandle *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FMetasoundGeneratorHandle *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FMetasoundGeneratorHandle *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14b3c3ef5;
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
LAB_14b3c3ef5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14b3c3f20

bool __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  FMetasoundGeneratorHandle *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FMetasoundGeneratorHandle *pFVar4;
  FMetasoundGeneratorHandle *pFVar5;
  bool bVar6;
  
  pFVar1 = (FMetasoundGeneratorHandle *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FMetasoundGeneratorHandle *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FMetasoundGeneratorHandle *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14b3c3f55;
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
LAB_14b3c3f55:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14b3c3f80

bool __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  FMetasoundGeneratorHandle *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FMetasoundGeneratorHandle *pFVar4;
  FMetasoundGeneratorHandle *pFVar5;
  bool bVar6;
  
  pFVar1 = (FMetasoundGeneratorHandle *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FMetasoundGeneratorHandle *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FMetasoundGeneratorHandle *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14b3c3fb5;
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
LAB_14b3c3fb5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14b3c3fe0

bool __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  IDocumentBuilderTransactionListener *pIVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  IDocumentBuilderTransactionListener *pIVar4;
  IDocumentBuilderTransactionListener *pIVar5;
  bool bVar6;
  
  pIVar1 = (IDocumentBuilderTransactionListener *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pIVar4 = (IDocumentBuilderTransactionListener *)0x0;
  pIVar5 = pIVar1;
  if (pIVar1 != (IDocumentBuilderTransactionListener *)0x0) {
    aVar2 = *(atomic<int> *)&pIVar1->field_0x8;
    do {
      pIVar5 = pIVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14b3c4015;
      LOCK();
      aVar3 = *(atomic<int> *)&pIVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pIVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pIVar4 = (this->UserObject).Object;
    pIVar5 = pIVar1;
  }
LAB_14b3c4015:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar5);
  return pIVar4 == param_1;
}

// IsSafeToExecute @ 14b3c8ce0

bool __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FMetasoundGeneratorHandle *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14b3c8d10

bool __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FMetasoundGeneratorHandle *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14b3c8d40

bool __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FMetasoundGeneratorHandle *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14b3c8d70

bool __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FMetasoundGeneratorHandle *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14b3c8da0

bool __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (IDocumentBuilderTransactionListener *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 14b3e3530

FName __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b3e3540

FName __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b3e3550

FName __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b3e3560

FName __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,Metasound::FMetasoundGeneratorHandle,1,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b3e3570

FName __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,Metasound::Frontend::IDocumentBuilderTransactionListener,1,void___cdecl(Metasound::Frontend::FDocumentModifyDelegates_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

