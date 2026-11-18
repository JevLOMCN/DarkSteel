// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputCore
// Functions: 3

// CreateStatic<FKey_const_&> @ 14238bf30

TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<FKey_const_&>
          (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          _func___cdecl_FText_FKey *param_1,FKey *param_2)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar7;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy__UFKey____6B_
    ;
    *(FName *)(puVar5 + 1) = param_2->KeyName;
    puVar5[2] = (param_2->KeyDetails).Object;
    pTVar2 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
    puVar5[3] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[4] = uVar6;
    *puVar5 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__UFKey____6B_
    ;
    puVar5[5] = param_1;
    if (param_1 == (_func___cdecl_FText_FKey *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> @ 14238d6b0

TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  FDestructionSentinel local_28;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  *(undefined8 *)&this->field_0x8 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&param_1->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&param_1->field_0x10 = 0;
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// ~TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> @ 14238dc90

void __thiscall
TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
~TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  FDestructionSentinel FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&FStack_28);
  if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)&this->field_0x8)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
    *(undefined4 *)&this->field_0x10 = 0;
  }
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

