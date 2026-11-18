// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// StartupModule @ 14e105de0

void __thiscall FOptimusCoreModule::StartupModule(FOptimusCoreModule *this)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  int iVar4;
  longlong lVar5;
  UObject *pUVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  atomic<unsigned_int> aVar10;
  atomic<unsigned_int> aVar11;
  IPluginManager *pIVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  FName *pFVar15;
  IModuleInterface *pIVar16;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this_00;
  pmf_82d146d2 pVar17;
  TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
  *this_01;
  pmf_6db62032 pVar18;
  TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
  *this_02;
  pmf_1fcf3c98 pVar19;
  pmf_301fe290 pVar20;
  UClass *pUVar21;
  UClass *pUVar22;
  FRigVMRegistry_RWLock *this_03;
  ForAnyElementType FVar23;
  UClass *pUVar24;
  undefined1 local_res10 [8];
  FName local_res18 [2];
  FRigVMRegistryHandle local_138;
  char local_130;
  FRigVMRegistry_RWLock *local_128;
  atomic<FRigVMRegistry_NoLock::ELockType> local_120;
  TArray<TSubclassOf<UOptimusComputeDataInterface>,TSizedDefaultAllocator<32>_> local_118;
  TTuple<UClass_*,FRigVMRegistry_NoLock::ERegisterObjectOperation> *local_108;
  int iStack_100;
  int iStack_fc;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  FString local_e8;
  FString local_d8;
  TStringView<wchar_t> local_c8;
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [32];
  void *local_78 [2];
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  TArrayView<TTuple<UClass_*,FRigVMRegistry_NoLock::ERegisterObjectOperation>_const_,int> local_58;
  int local_3c;
  
  pIVar12 = IPluginManager::Get();
  uStack_f0 = 0xd;
  local_f8 = L"DeformerGraph";
  local_98._16_4_ = 0x507b7000;
  local_98._20_4_ = 1;
  local_98._24_4_ = 0xd;
  local_98._28_4_ = uStack_ec;
  plVar13 = (longlong *)(**(code **)((longlong)*pIVar12 + 0x70))(pIVar12,local_68,local_98 + 0x10);
  if ((*plVar13 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar14 = (undefined8 *)(**(code **)(*(longlong *)*plVar13 + 0x20))((longlong *)*plVar13,local_78)
  ;
  pUVar24 = (UClass *)0x0;
  local_b0 = 7;
  local_c8.DataPtr = (wchar_t *)*puVar14;
  local_c8.Size = *(int *)(puVar14 + 1) + -1;
  if (*(int *)(puVar14 + 1) == 0) {
    local_c8.Size = 0;
  }
  local_b8 = L"Shaders";
  FPaths::CombineInternal(&local_d8,&local_c8,2);
  if (local_78[0] != (void *)0x0) {
    FMemory::Free(local_78[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  ::FString::FString(&local_e8,L"/Plugin/Optimus");
  AddShaderSourceDirectoryMapping(&local_e8,&local_d8);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  FOptimusDataTypeRegistry::RegisterBuiltinTypes();
  pFVar15 = ::FName::FName(local_res18,L"AssetRegistry");
  pIVar16 = FModuleManager::GetModulePtr_Internal(*pFVar15);
  if (pIVar16 != (IModuleInterface *)0x0) {
    plVar13 = (longlong *)(**(code **)((longlong)*pIVar16 + 0x40))(pIVar16);
    this_00 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
              (**(code **)(*plVar13 + 0x360))(plVar13);
    pVar17 = (pmf_82d146d2)FOptimusDataTypeRegistry::Get();
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
    AddRaw<FOptimusDataTypeRegistry>(this_00,(FOptimusDataTypeRegistry *)(local_res18 + 1),pVar17);
    plVar13 = (longlong *)(**(code **)((longlong)*pIVar16 + 0x40))(pIVar16);
    this_01 = (TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
               *)(**(code **)(*plVar13 + 0x308))(plVar13);
    pVar18 = (pmf_6db62032)FOptimusDataTypeRegistry::Get();
    TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>::
    AddRaw<FOptimusDataTypeRegistry>(this_01,(FOptimusDataTypeRegistry *)local_a8,pVar18);
    plVar13 = (longlong *)(**(code **)((longlong)*pIVar16 + 0x40))(pIVar16);
    this_02 = (TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
               *)(**(code **)(*plVar13 + 0x318))(plVar13);
    pVar19 = (pmf_1fcf3c98)FOptimusDataTypeRegistry::Get();
    TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
    ::AddRaw<FOptimusDataTypeRegistry>(this_02,(FOptimusDataTypeRegistry *)(local_a8 + 8),pVar19);
  }
  pVar20 = (pmf_301fe290)FOptimusDataTypeRegistry::Get();
  TMulticastDelegateRegistration<void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
  ::AddRaw<FOptimusDataTypeRegistry>
            ((TMulticastDelegateRegistration<void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
              *)&UE::Anim::AttributeTypes::OnAttributeTypesChangedDelegate,
             (FOptimusDataTypeRegistry *)local_98,pVar20);
  UOptimusComputeDataInterface::GetAllComputeDataInterfaceClasses(&local_118);
  iVar8 = local_118.ArrayNum;
  pFVar2 = local_118.AllocatorInstance.Data + (longlong)local_118.ArrayNum * 8;
  FVar23.Data = local_118.AllocatorInstance.Data;
  while( true ) {
    if (local_118.ArrayNum != iVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSubclassOf<UOptimusComputeDataInterface>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar23.Data == pFVar2) break;
    lVar5 = *(longlong *)FVar23.Data;
    pUVar22 = pUVar24;
    if ((lVar5 != 0) &&
       (pUVar21 = UOptimusComputeDataInterface::StaticClass(), pUVar21 != (UClass *)0x0)) {
      iVar4 = (int)pUVar21->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar4) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar21->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) {
        pUVar22 = *(UClass **)FVar23.Data;
      }
    }
    if ((pUVar22->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar22);
    }
    pUVar6 = (pUVar22->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar6 != (UObject *)0x0) {
      pUVar22 = UOptimusComputeDataInterface::StaticClass();
      iVar4 = (int)pUVar22->_padding_;
      if ((iVar4 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar22->_padding_)) {
        (**(code **)(*(longlong *)pUVar6 + 0x398))(pUVar6);
      }
    }
    FVar23.Data = FVar23.Data + 8;
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  this_03 = FRigVMRegistry_RWLock::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    AllowedObjectTypes[0]._0_8_ = UOptimusDeformer::StaticClass();
    AllowedObjectTypes[0]._8_4_ = 0;
    _Init_thread_footer(&::_TSS0);
  }
  local_108 = AllowedObjectTypes;
  iStack_fc = local_3c;
  iStack_100 = 1;
  FRigVMRegistryHandle::FRigVMRegistryHandle(&local_138,(FRigVMRegistry_NoLock *)this_03);
  local_130 = '\x01';
  local_120 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
  local_128 = this_03;
  AcquireSRWLockExclusive((PSRWLOCK)&this_03->Lock);
  aVar10 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  local_128->WriteLockOwnerThread = aVar10;
  UNLOCK();
  LOCK();
  paVar1 = &local_128->LockCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar3 == (atomic<int>)0x0) {
    LOCK();
    local_128->LockType = local_120;
    UNLOCK();
  }
  else if ((local_120 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
          (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538103>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x249,"DesiredLockType != LockType_Write"), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_58._12_4_ = iStack_fc;
  local_58.ArrayNum = iStack_100;
  local_58.DataPtr = local_108;
  FRigVMRegistry_NoLock::RegisterObjectTypes_NoLock((FRigVMRegistry_NoLock *)this_03,&local_58);
  if (local_130 != '\0') {
    LOCK();
    paVar1 = &local_128->LockCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      LOCK();
      local_128->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_120 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if (((int)aVar3 + -1 < 0) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x26a,"CurrentLockCount >= 0"), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      aVar10 = local_128->WriteLockOwnerThread;
      aVar11 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar10 != aVar11) {
        ReleaseSRWLockShared((PSRWLOCK)&local_128->Lock);
      }
    }
    else if (local_120 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if ((aVar3 != (atomic<int>)0x1) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538060>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x274,"CurrentLockCount == 0"), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      LOCK();
      local_128->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_128->Lock);
    }
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return;
}

// ShutdownModule @ 14e106320

void __thiscall FOptimusCoreModule::ShutdownModule(FOptimusCoreModule *this)

{
  FName *pFVar1;
  IModuleInterface *pIVar2;
  longlong *plVar3;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar4;
  FOptimusDataTypeRegistry *pFVar5;
  FName local_res10 [3];
  
  pFVar1 = ::FName::FName(local_res10,L"AssetRegistry");
  pIVar2 = FModuleManager::GetModulePtr_Internal(*pFVar1);
  if (pIVar2 != (IModuleInterface *)0x0) {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x40))(pIVar2);
    pTVar4 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)(*plVar3 + 0x360))(plVar3);
    pFVar5 = FOptimusDataTypeRegistry::Get();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar4,pFVar5);
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x40))(pIVar2);
    pTVar4 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)(*plVar3 + 0x308))(plVar3);
    pFVar5 = FOptimusDataTypeRegistry::Get();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar4,pFVar5);
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x40))(pIVar2);
    pTVar4 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)(*plVar3 + 0x318))(plVar3);
    pFVar5 = FOptimusDataTypeRegistry::Get();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar4,pFVar5);
  }
  pFVar5 = FOptimusDataTypeRegistry::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &UE::Anim::AttributeTypes::OnAttributeTypesChangedDelegate,pFVar5);
  pFVar5 = FOptimusDataTypeRegistry::Get();
  TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           *)&pFVar5->RegisteredTypes);
  return;
}

// RegisterDataInterfaceClass @ 14e106410

bool __thiscall
FOptimusCoreModule::RegisterDataInterfaceClass
          (FOptimusCoreModule *this,TSubclassOf<UOptimusComputeDataInterface> param_1)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 == 0) {
    return false;
  }
  pUVar7 = UOptimusComputeDataInterface::StaticClass();
  if (pUVar7 == (UClass *)0x0) {
    return false;
  }
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return false;
  }
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 == 0) {
    return false;
  }
  pUVar7 = UOptimusComputeDataInterface::StaticClass();
  if (pUVar7 != (UClass *)0x0) {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar7 = *(UClass **)param_1.Class.field0_0x0;
      goto LAB_14e1064a0;
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_14e1064a0:
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  pUVar3 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar3 != (UObject *)0x0) {
    pUVar7 = UOptimusComputeDataInterface::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) {
      (**(code **)(*(longlong *)pUVar3 + 0x398))(pUVar3);
      return true;
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_711852161721434056>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusCoreModule.cpp"
                     ,0x38,"DataInterface");
  if (!bVar5) {
    return false;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

