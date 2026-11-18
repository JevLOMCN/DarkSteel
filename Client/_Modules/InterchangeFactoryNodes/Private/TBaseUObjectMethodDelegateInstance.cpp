// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 192

// CreateCopy @ 14e54a970

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_7f69798c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54aa00

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_7f69798c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e54aa50

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_7f69798c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54ab00

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeDecalActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_5f3c4f67 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54ab90

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeDecalActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_5f3c4f67 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e54abe0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeDecalActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_5f3c4f67 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54ac90

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_ac4c7e6c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54ad20

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_ac4c7e6c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e54ad70

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_ac4c7e6c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54ae20

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_107317fb *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54aeb0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_107317fb *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e54af00

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_107317fb *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54afb0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeSkeletalMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_21d7ab45 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54b040

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeSkeletalMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_21d7ab45 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e54b090

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeSkeletalMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_21d7ab45 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54b140

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStandardCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_4e560aa1 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54b1d0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStandardCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_4e560aa1 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e54b220

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStandardCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_4e560aa1 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54b2d0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a3ea3bba *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54b360

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a3ea3bba *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e54b3b0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a3ea3bba *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54b460

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeTextureFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_77168b66 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54b4f0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeTextureFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_77168b66 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e54b540

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeTextureFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_77168b66 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54b5f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_12c8aeb5 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54b680

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_12c8aeb5 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e54b6d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_12c8aeb5 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54b780

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeDecalActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_11055da0 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54b810

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeDecalActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_11055da0 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e54b860

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeDecalActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_11055da0 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54b910

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_741380bb *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54b9a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_741380bb *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e54b9f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_741380bb *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54baa0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_24216b0c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54bb30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_24216b0c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e54bb80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_24216b0c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54bc30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeSkeletalMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9d62b442 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54bcc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeSkeletalMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9d62b442 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e54bd10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeSkeletalMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9d62b442 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54bdc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStandardCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_8f1482a6 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54be50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStandardCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_8f1482a6 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e54bea0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStandardCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_8f1482a6 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54bf50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_95c8f66d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54bfe0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_95c8f66d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e54c030

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_95c8f66d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54c0e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeTextureFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_296a4e5b *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54c170

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeTextureFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_296a4e5b *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e54c1c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeTextureFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_296a4e5b *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14e54cd30

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  undefined1 uVar1;
  UInterchangeActorFactoryNode *pUVar2;
  UInterchangeActorFactoryNode *local_res8;
  
  local_res8 = (UInterchangeActorFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UInterchangeActorFactoryNode,UInterchangeActorFactoryNode_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pUVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 14e54cd80

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  undefined1 uVar1;
  UInterchangeDecalActorFactoryNode *pUVar2;
  UInterchangeDecalActorFactoryNode *local_res8;
  
  local_res8 = (UInterchangeDecalActorFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UInterchangeDecalActorFactoryNode,UInterchangeDecalActorFactoryNode_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pUVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 14e54cdd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  undefined1 uVar1;
  UInterchangeMeshFactoryNode *pUVar2;
  UInterchangeMeshFactoryNode *local_res8;
  
  local_res8 = (UInterchangeMeshFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UInterchangeMeshFactoryNode,UInterchangeMeshFactoryNode_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pUVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 14e54ce20

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  undefined1 uVar1;
  UInterchangePhysicalCameraFactoryNode *pUVar2;
  UInterchangePhysicalCameraFactoryNode *local_res8;
  
  local_res8 = (UInterchangePhysicalCameraFactoryNode *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UInterchangePhysicalCameraFactoryNode,UInterchangePhysicalCameraFactoryNode_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pUVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 14e54ce70

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  undefined1 uVar1;
  UInterchangeSkeletalMeshFactoryNode *pUVar2;
  UInterchangeSkeletalMeshFactoryNode *local_res8;
  
  local_res8 = (UInterchangeSkeletalMeshFactoryNode *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UInterchangeSkeletalMeshFactoryNode,UInterchangeSkeletalMeshFactoryNode_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pUVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 14e54cec0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  undefined1 uVar1;
  UInterchangeStandardCameraFactoryNode *pUVar2;
  UInterchangeStandardCameraFactoryNode *local_res8;
  
  local_res8 = (UInterchangeStandardCameraFactoryNode *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UInterchangeStandardCameraFactoryNode,UInterchangeStandardCameraFactoryNode_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pUVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 14e54cf10

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  undefined1 uVar1;
  UInterchangeStaticMeshFactoryNode *pUVar2;
  UInterchangeStaticMeshFactoryNode *local_res8;
  
  local_res8 = (UInterchangeStaticMeshFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UInterchangeStaticMeshFactoryNode,UInterchangeStaticMeshFactoryNode_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pUVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 14e54cf60

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  undefined1 uVar1;
  UInterchangeTextureFactoryNode *pUVar2;
  UInterchangeTextureFactoryNode *local_res8;
  
  local_res8 = (UInterchangeTextureFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UInterchangeTextureFactoryNode,UInterchangeTextureFactoryNode_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pUVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 14e54cfb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  undefined1 uVar1;
  UInterchangeActorFactoryNode *pUVar2;
  UInterchangeActorFactoryNode *local_res8;
  
  local_res8 = (UInterchangeActorFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UInterchangeActorFactoryNode,UInterchangeActorFactoryNode_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pUVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 14e54d000

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  undefined1 uVar1;
  UInterchangeDecalActorFactoryNode *pUVar2;
  UInterchangeDecalActorFactoryNode *local_res8;
  
  local_res8 = (UInterchangeDecalActorFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UInterchangeDecalActorFactoryNode,UInterchangeDecalActorFactoryNode_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pUVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 14e54d050

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  undefined1 uVar1;
  UInterchangeMeshFactoryNode *pUVar2;
  UInterchangeMeshFactoryNode *local_res8;
  
  local_res8 = (UInterchangeMeshFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UInterchangeMeshFactoryNode,UInterchangeMeshFactoryNode_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pUVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 14e54d0a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  undefined1 uVar1;
  UInterchangePhysicalCameraFactoryNode *pUVar2;
  UInterchangePhysicalCameraFactoryNode *local_res8;
  
  local_res8 = (UInterchangePhysicalCameraFactoryNode *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UInterchangePhysicalCameraFactoryNode,UInterchangePhysicalCameraFactoryNode_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pUVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 14e54d0f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  undefined1 uVar1;
  UInterchangeSkeletalMeshFactoryNode *pUVar2;
  UInterchangeSkeletalMeshFactoryNode *local_res8;
  
  local_res8 = (UInterchangeSkeletalMeshFactoryNode *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UInterchangeSkeletalMeshFactoryNode,UInterchangeSkeletalMeshFactoryNode_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pUVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 14e54d140

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  undefined1 uVar1;
  UInterchangeStandardCameraFactoryNode *pUVar2;
  UInterchangeStandardCameraFactoryNode *local_res8;
  
  local_res8 = (UInterchangeStandardCameraFactoryNode *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UInterchangeStandardCameraFactoryNode,UInterchangeStandardCameraFactoryNode_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pUVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 14e54d190

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  undefined1 uVar1;
  UInterchangeStaticMeshFactoryNode *pUVar2;
  UInterchangeStaticMeshFactoryNode *local_res8;
  
  local_res8 = (UInterchangeStaticMeshFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UInterchangeStaticMeshFactoryNode,UInterchangeStaticMeshFactoryNode_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pUVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 14e54d1e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  undefined1 uVar1;
  UInterchangeTextureFactoryNode *pUVar2;
  UInterchangeTextureFactoryNode *local_res8;
  
  local_res8 = (UInterchangeTextureFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UInterchangeTextureFactoryNode,UInterchangeTextureFactoryNode_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pUVar2,param_1);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 14e54d470

/* WARNING: Removing unreachable block (ram,0x00014e54d4de) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInterchangeActorFactoryNode *pUVar3;
  UInterchangeActorFactoryNode *pUVar4;
  UObject *pUVar5;
  UInterchangeActorFactoryNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInterchangeActorFactoryNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInterchangeActorFactoryNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInterchangeActorFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UInterchangeActorFactoryNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInterchangeActorFactoryNode,UInterchangeActorFactoryNode_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInterchangeActorFactoryNode *)0x0;
}

// ExecuteIfSafe @ 14e54d550

/* WARNING: Removing unreachable block (ram,0x00014e54d5be) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInterchangeDecalActorFactoryNode *pUVar3;
  UInterchangeDecalActorFactoryNode *pUVar4;
  UObject *pUVar5;
  UInterchangeDecalActorFactoryNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInterchangeDecalActorFactoryNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInterchangeDecalActorFactoryNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInterchangeDecalActorFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UInterchangeDecalActorFactoryNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInterchangeDecalActorFactoryNode,UInterchangeDecalActorFactoryNode_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInterchangeDecalActorFactoryNode *)0x0;
}

// ExecuteIfSafe @ 14e54d630

/* WARNING: Removing unreachable block (ram,0x00014e54d69e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInterchangeMeshFactoryNode *pUVar3;
  UInterchangeMeshFactoryNode *pUVar4;
  UObject *pUVar5;
  UInterchangeMeshFactoryNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInterchangeMeshFactoryNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInterchangeMeshFactoryNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInterchangeMeshFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UInterchangeMeshFactoryNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInterchangeMeshFactoryNode,UInterchangeMeshFactoryNode_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInterchangeMeshFactoryNode *)0x0;
}

// ExecuteIfSafe @ 14e54d710

/* WARNING: Removing unreachable block (ram,0x00014e54d77e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInterchangePhysicalCameraFactoryNode *pUVar3;
  UInterchangePhysicalCameraFactoryNode *pUVar4;
  UObject *pUVar5;
  UInterchangePhysicalCameraFactoryNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInterchangePhysicalCameraFactoryNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInterchangePhysicalCameraFactoryNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInterchangePhysicalCameraFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  if (pUVar3 != (UInterchangePhysicalCameraFactoryNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInterchangePhysicalCameraFactoryNode,UInterchangePhysicalCameraFactoryNode_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInterchangePhysicalCameraFactoryNode *)0x0;
}

// ExecuteIfSafe @ 14e54d7f0

/* WARNING: Removing unreachable block (ram,0x00014e54d85e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInterchangeSkeletalMeshFactoryNode *pUVar3;
  UInterchangeSkeletalMeshFactoryNode *pUVar4;
  UObject *pUVar5;
  UInterchangeSkeletalMeshFactoryNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInterchangeSkeletalMeshFactoryNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInterchangeSkeletalMeshFactoryNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInterchangeSkeletalMeshFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UInterchangeSkeletalMeshFactoryNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInterchangeSkeletalMeshFactoryNode,UInterchangeSkeletalMeshFactoryNode_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInterchangeSkeletalMeshFactoryNode *)0x0;
}

// ExecuteIfSafe @ 14e54d8d0

/* WARNING: Removing unreachable block (ram,0x00014e54d93e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInterchangeStandardCameraFactoryNode *pUVar3;
  UInterchangeStandardCameraFactoryNode *pUVar4;
  UObject *pUVar5;
  UInterchangeStandardCameraFactoryNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInterchangeStandardCameraFactoryNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInterchangeStandardCameraFactoryNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInterchangeStandardCameraFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  if (pUVar3 != (UInterchangeStandardCameraFactoryNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInterchangeStandardCameraFactoryNode,UInterchangeStandardCameraFactoryNode_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInterchangeStandardCameraFactoryNode *)0x0;
}

// ExecuteIfSafe @ 14e54d9b0

/* WARNING: Removing unreachable block (ram,0x00014e54da1e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInterchangeStaticMeshFactoryNode *pUVar3;
  UInterchangeStaticMeshFactoryNode *pUVar4;
  UObject *pUVar5;
  UInterchangeStaticMeshFactoryNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInterchangeStaticMeshFactoryNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInterchangeStaticMeshFactoryNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInterchangeStaticMeshFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UInterchangeStaticMeshFactoryNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInterchangeStaticMeshFactoryNode,UInterchangeStaticMeshFactoryNode_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInterchangeStaticMeshFactoryNode *)0x0;
}

// ExecuteIfSafe @ 14e54da90

/* WARNING: Removing unreachable block (ram,0x00014e54dafe) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInterchangeTextureFactoryNode *pUVar3;
  UInterchangeTextureFactoryNode *pUVar4;
  UObject *pUVar5;
  UInterchangeTextureFactoryNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInterchangeTextureFactoryNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInterchangeTextureFactoryNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInterchangeTextureFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UInterchangeTextureFactoryNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInterchangeTextureFactoryNode,UInterchangeTextureFactoryNode_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInterchangeTextureFactoryNode *)0x0;
}

// ExecuteIfSafe @ 14e54db70

/* WARNING: Removing unreachable block (ram,0x00014e54dbde) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInterchangeActorFactoryNode *pUVar3;
  UInterchangeActorFactoryNode *pUVar4;
  UObject *pUVar5;
  UInterchangeActorFactoryNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInterchangeActorFactoryNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInterchangeActorFactoryNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInterchangeActorFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UInterchangeActorFactoryNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInterchangeActorFactoryNode,UInterchangeActorFactoryNode_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInterchangeActorFactoryNode *)0x0;
}

// ExecuteIfSafe @ 14e54dc50

/* WARNING: Removing unreachable block (ram,0x00014e54dcbe) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInterchangeDecalActorFactoryNode *pUVar3;
  UInterchangeDecalActorFactoryNode *pUVar4;
  UObject *pUVar5;
  UInterchangeDecalActorFactoryNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInterchangeDecalActorFactoryNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInterchangeDecalActorFactoryNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInterchangeDecalActorFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UInterchangeDecalActorFactoryNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInterchangeDecalActorFactoryNode,UInterchangeDecalActorFactoryNode_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInterchangeDecalActorFactoryNode *)0x0;
}

// ExecuteIfSafe @ 14e54dd30

/* WARNING: Removing unreachable block (ram,0x00014e54dd9e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInterchangeMeshFactoryNode *pUVar3;
  UInterchangeMeshFactoryNode *pUVar4;
  UObject *pUVar5;
  UInterchangeMeshFactoryNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInterchangeMeshFactoryNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInterchangeMeshFactoryNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInterchangeMeshFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UInterchangeMeshFactoryNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInterchangeMeshFactoryNode,UInterchangeMeshFactoryNode_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInterchangeMeshFactoryNode *)0x0;
}

// ExecuteIfSafe @ 14e54de10

/* WARNING: Removing unreachable block (ram,0x00014e54de7e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInterchangePhysicalCameraFactoryNode *pUVar3;
  UInterchangePhysicalCameraFactoryNode *pUVar4;
  UObject *pUVar5;
  UInterchangePhysicalCameraFactoryNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInterchangePhysicalCameraFactoryNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInterchangePhysicalCameraFactoryNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInterchangePhysicalCameraFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  if (pUVar3 != (UInterchangePhysicalCameraFactoryNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInterchangePhysicalCameraFactoryNode,UInterchangePhysicalCameraFactoryNode_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInterchangePhysicalCameraFactoryNode *)0x0;
}

// ExecuteIfSafe @ 14e54def0

/* WARNING: Removing unreachable block (ram,0x00014e54df5e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInterchangeSkeletalMeshFactoryNode *pUVar3;
  UInterchangeSkeletalMeshFactoryNode *pUVar4;
  UObject *pUVar5;
  UInterchangeSkeletalMeshFactoryNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInterchangeSkeletalMeshFactoryNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInterchangeSkeletalMeshFactoryNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInterchangeSkeletalMeshFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UInterchangeSkeletalMeshFactoryNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInterchangeSkeletalMeshFactoryNode,UInterchangeSkeletalMeshFactoryNode_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInterchangeSkeletalMeshFactoryNode *)0x0;
}

// ExecuteIfSafe @ 14e54dfd0

/* WARNING: Removing unreachable block (ram,0x00014e54e03e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInterchangeStandardCameraFactoryNode *pUVar3;
  UInterchangeStandardCameraFactoryNode *pUVar4;
  UObject *pUVar5;
  UInterchangeStandardCameraFactoryNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInterchangeStandardCameraFactoryNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInterchangeStandardCameraFactoryNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInterchangeStandardCameraFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  if (pUVar3 != (UInterchangeStandardCameraFactoryNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInterchangeStandardCameraFactoryNode,UInterchangeStandardCameraFactoryNode_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInterchangeStandardCameraFactoryNode *)0x0;
}

// ExecuteIfSafe @ 14e54e0b0

/* WARNING: Removing unreachable block (ram,0x00014e54e11e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInterchangeStaticMeshFactoryNode *pUVar3;
  UInterchangeStaticMeshFactoryNode *pUVar4;
  UObject *pUVar5;
  UInterchangeStaticMeshFactoryNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInterchangeStaticMeshFactoryNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInterchangeStaticMeshFactoryNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInterchangeStaticMeshFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UInterchangeStaticMeshFactoryNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInterchangeStaticMeshFactoryNode,UInterchangeStaticMeshFactoryNode_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInterchangeStaticMeshFactoryNode *)0x0;
}

// ExecuteIfSafe @ 14e54e190

/* WARNING: Removing unreachable block (ram,0x00014e54e1fe) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInterchangeTextureFactoryNode *pUVar3;
  UInterchangeTextureFactoryNode *pUVar4;
  UObject *pUVar5;
  UInterchangeTextureFactoryNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInterchangeTextureFactoryNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInterchangeTextureFactoryNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInterchangeTextureFactoryNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UInterchangeTextureFactoryNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInterchangeTextureFactoryNode,UInterchangeTextureFactoryNode_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInterchangeTextureFactoryNode *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14e54fd80

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e54fd90

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e54fda0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e54fdb0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e54fdc0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e54fdd0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e54fde0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e54fdf0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e54fe00

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e54fe10

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e54fe20

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e54fe30

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e54fe40

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e54fe50

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e54fe60

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e54fe70

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14e5597e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e5597f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e559800

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e559810

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e559820

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e559830

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e559840

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e559850

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e559860

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e559870

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e559880

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e559890

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e5598a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e5598b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e5598c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e5598d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e55da70

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e55da80

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e55da90

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e55daa0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e55dab0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e55dac0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e55dad0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e55dae0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e55daf0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e55db00

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e55db10

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e55db20

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e55db30

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e55db40

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e55db50

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e55db60

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14e55dcf0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e55dd20

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e55dd50

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e55dd80

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e55ddb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e55dde0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e55de10

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e55de40

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e55de70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e55dea0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e55ded0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e55df00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e55df30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e55df60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e55df90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e55dfc0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14e55e5b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e55e5d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e55e5f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e55e610

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e55e630

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e55e650

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e55e670

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e55e690

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e55e6b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e55e6d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e55e6f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e55e710

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e55e730

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e55e750

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e55e770

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e55e790

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14e55e8e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e55e900

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e55e920

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e55e940

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e55e960

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e55e980

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e55e9a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e55e9c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e55e9e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e55ea00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e55ea20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e55ea40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e55ea60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e55ea80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e55eaa0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e55eac0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14e57fcc0

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fcd0

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeDecalActorFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fce0

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fcf0

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UInterchangePhysicalCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fd00

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeSkeletalMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fd10

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeStandardCameraFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fd20

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeStaticMeshFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fd30

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UInterchangeTextureFactoryNode_const_,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fd40

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fd50

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeDecalActorFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fd60

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fd70

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UInterchangePhysicalCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fd80

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeSkeletalMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fd90

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeStandardCameraFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fda0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeStaticMeshFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fdb0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UInterchangeTextureFactoryNode,bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

