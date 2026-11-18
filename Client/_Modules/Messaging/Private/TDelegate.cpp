// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 5

// CreateRaw<FMessageRouter,FMessageAddress_const_&> @ 142d39250

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateRaw<FMessageRouter,FMessageAddress_const_&>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          FMessageRouter *param_1,pmf_d1360c5d *param_2,FMessageAddress *param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar9;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar7 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFMessageAddress____6B_
    ;
    uVar5 = *(undefined8 *)&(param_3->UniqueId).C;
    puVar7[1] = *(undefined8 *)&param_3->UniqueId;
    puVar7[2] = uVar5;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[3] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__UFMessageAddress____6B_
    ;
    puVar7[4] = param_1;
    puVar7[5] = uVar3;
    puVar7[6] = uVar4;
    if ((param_1 == (FMessageRouter *)0x0) || (puVar7[5] == 0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar9;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateRaw<FMessageRouter,FMessageAddress_const_&,TWeakPtr<IMessageReceiver,1>_> @ 142d39350

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateRaw<FMessageRouter,FMessageAddress_const_&,TWeakPtr<IMessageReceiver,1>_>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          FMessageRouter *param_1,pmf_95bae73a *param_2,FMessageAddress *param_3,
          TWeakPtr<IMessageReceiver,1> *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar9;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar7 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)puVar1);
  if (puVar7 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFMessageAddress__V__TWeakPtr_VIMessageReceiver___00____6B_
    ;
    uVar5 = *(undefined8 *)&(param_3->UniqueId).C;
    puVar7[1] = *(undefined8 *)&param_3->UniqueId;
    puVar7[2] = uVar5;
    puVar7[3] = param_4->Object;
    puVar7[4] = (param_4->WeakReferenceCount).ReferenceController;
    (param_4->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_4->Object = (IMessageReceiver *)0x0;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[5] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__UFMessageAddress__V__TWeakPtr_VIMessageReceiver___00____6B_
    ;
    puVar7[6] = param_1;
    puVar7[7] = uVar3;
    puVar7[8] = uVar4;
    if ((param_1 == (FMessageRouter *)0x0) || (puVar7[7] == 0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar9;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateRaw<FMessageRouter,TSharedRef<IMessageInterceptor,1>_const_&,FTopLevelAssetPath_const_&> @ 142d39480

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateRaw<FMessageRouter,TSharedRef<IMessageInterceptor,1>_const_&,FTopLevelAssetPath_const_&>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          FMessageRouter *param_1,pmf_e393959b *param_2,TSharedRef<IMessageInterceptor,1> *param_3,
          FTopLevelAssetPath *param_4)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FName FVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar10;
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
  puVar8 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)puVar1);
  if (puVar8 != (undefined8 *)0x0) {
    uVar4 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)&param_2->field_0x8;
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageInterceptor___00__UFTopLevelAssetPath____6B_
    ;
    puVar8[1] = param_3->Object;
    pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
    puVar8[2] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar6 = param_4->AssetName;
    *(FName *)(puVar8 + 3) = param_4->PackageName;
    *(FName *)(puVar8 + 4) = FVar6;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[5] = uVar9;
    *puVar8 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageInterceptor___00__UFTopLevelAssetPath____6B_
    ;
    puVar8[6] = param_1;
    puVar8[7] = uVar4;
    puVar8[8] = uVar5;
    if ((param_1 == (FMessageRouter *)0x0) || (puVar8[7] == 0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar3)();
        return pTVar10;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateRaw<FMessageRouter,TWeakPtr<IBusListener,1>_> @ 142d395b0

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateRaw<FMessageRouter,TWeakPtr<IBusListener,1>_>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          FMessageRouter *param_1,pmf_33e1ab51 *param_2,TWeakPtr<IBusListener,1> *param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar6 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VIBusListener___00____6B_
    ;
    puVar6[1] = param_3->Object;
    puVar6[2] = (param_3->WeakReferenceCount).ReferenceController;
    (param_3->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_3->Object = (IBusListener *)0x0;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[3] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VIBusListener___00____6B_
    ;
    puVar6[4] = param_1;
    puVar6[5] = uVar3;
    puVar6[6] = uVar4;
    if ((param_1 == (FMessageRouter *)0x0) || (puVar6[5] == 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar8;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateRaw<FMessageRouter,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath_const_&> @ 142d396c0

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateRaw<FMessageRouter,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath_const_&>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          FMessageRouter *param_1,pmf_3feee259 *param_2,TWeakPtr<IMessageReceiver,1> *param_3,
          FTopLevelAssetPath *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FName FVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar9;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar7 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)puVar1);
  if (puVar7 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VIMessageReceiver___00__UFTopLevelAssetPath____6B_
    ;
    puVar7[1] = param_3->Object;
    puVar7[2] = (param_3->WeakReferenceCount).ReferenceController;
    (param_3->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_3->Object = (IMessageReceiver *)0x0;
    FVar5 = param_4->AssetName;
    *(FName *)(puVar7 + 3) = param_4->PackageName;
    *(FName *)(puVar7 + 4) = FVar5;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[5] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VIMessageReceiver___00__UFTopLevelAssetPath____6B_
    ;
    puVar7[6] = param_1;
    puVar7[7] = uVar3;
    puVar7[8] = uVar4;
    if ((param_1 == (FMessageRouter *)0x0) || (puVar7[7] == 0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar9;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

