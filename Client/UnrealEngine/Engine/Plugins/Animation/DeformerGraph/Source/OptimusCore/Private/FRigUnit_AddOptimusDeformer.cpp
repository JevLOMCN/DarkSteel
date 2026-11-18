// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 11

// StaticStruct @ 14e1157e0

UScriptStruct * __cdecl FRigUnit_AddOptimusDeformer::StaticStruct(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  UPackage *pUVar7;
  FRigVMRegistry_RWLock *this;
  UScriptStruct *pUVar8;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_38;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_AddOptimusDeformer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FRigUnit_AddOptimusDeformer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AddOptimusDeformer,(UObject *)pUVar7,
                         L"RigUnit_AddOptimusDeformer");
    this = FRigVMRegistry_RWLock::Get();
    pUVar8 = Z_Registration_Info_UScriptStruct_FRigUnit_AddOptimusDeformer.OuterSingleton;
    FRigVMRegistryHandle::FRigVMRegistryHandle(&local_28,(FRigVMRegistry_NoLock *)this);
    local_20 = '\x01';
    local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
    local_18 = this;
    AcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
    aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
    LOCK();
    local_18->WriteLockOwnerThread = aVar5;
    UNLOCK();
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x0) {
      LOCK();
      local_18->LockType = local_10;
      UNLOCK();
    }
    else if ((local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
            (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_4767296351463538103>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                                ,0x249,"DesiredLockType != LockType_Write"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar8 = (UScriptStruct *)(*pcVar3)();
      return pUVar8;
    }
    local_38.ArrayNum = 1;
    local_38.DataPtr = Z_Construct_UScriptStruct_FRigUnit_AddOptimusDeformer_Statics::RigVMFunctions
    ;
    FRigVMRegistry_NoLock::RegisterCompiledInStruct_NoLock
              ((FRigVMRegistry_NoLock *)this,pUVar8,&local_38);
    if (local_20 != '\0') {
      LOCK();
      paVar1 = &local_18->LockCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        LOCK();
        local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
        UNLOCK();
      }
      if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
        if (((int)aVar2 + -1 < 0) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4767296351463538070>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                               ,0x26a,"CurrentLockCount >= 0"), bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (UScriptStruct *)(*pcVar3)();
          return pUVar8;
        }
        aVar5 = local_18->WriteLockOwnerThread;
        aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
        if (aVar5 != aVar6) {
          ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
          return Z_Registration_Info_UScriptStruct_FRigUnit_AddOptimusDeformer.OuterSingleton;
        }
      }
      else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
        if ((aVar2 != (atomic<int>)0x1) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4767296351463538060>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                               ,0x274,"CurrentLockCount == 0"), bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (UScriptStruct *)(*pcVar3)();
          return pUVar8;
        }
        LOCK();
        local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
        UNLOCK();
        ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
      }
    }
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_AddOptimusDeformer.OuterSingleton;
}

// GetExecuteContextStruct @ 14e115a30

UScriptStruct * __thiscall
FRigUnit_AddOptimusDeformer::GetExecuteContextStruct(FRigUnit_AddOptimusDeformer *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// OnUnitNodeCreated @ 14e115ba0

void __thiscall
FRigUnit_AddOptimusDeformer::OnUnitNodeCreated
          (FRigUnit_AddOptimusDeformer *this,FRigVMUnitNodeCreatedContext *param_1)

{
  return;
}

// GetSupportedWorkflows @ 14e115c50

TArray<FRigVMUserWorkflow,TSizedDefaultAllocator<32>_> * __thiscall
FRigUnit_AddOptimusDeformer::GetSupportedWorkflows
          (FRigUnit_AddOptimusDeformer *this,
          TArray<FRigVMUserWorkflow,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UObject *param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// Execute @ 14e115c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_AddOptimusDeformer::Execute(FRigUnit_AddOptimusDeformer *this)

{
  undefined1 auStack_288 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  StaticExecute((FControlRigExecuteContext *)local_268,&this->DeformerInstanceGuid);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// operator() @ 14e168bb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FRigUnit_AddOptimusDeformer::StaticExecute'::__l39::<lambda_1>::operator()
          (void *this,UOptimusDeformer *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  USkeletalMeshComponent *pUVar7;
  UMeshDeformerInstance *pUVar8;
  UOptimusDeformerDynamicInstanceManager *this_00;
  UClass *pUVar9;
  UObject *pUVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  IMeshDeformerProducer *pIVar16;
  ForAnyElementType FVar17;
  int *piVar18;
  undefined1 local_res8 [8];
  UOptimusDeformer *local_res10;
  FScriptContainerElement *local_res18;
  undefined8 local_68;
  undefined8 uStack_60;
  TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_> local_58;
  FGuid local_48;
  
  local_res10 = param_1;
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\ControlRig\\RigUnit_Optimus.cpp"
                         ,0x147,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar5 = FWeakObjectPtr::IsValid(this);
  if ((bVar5) && (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 8)), bVar5)) {
    pUVar7 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(this);
    StaticExecute'::__l8::Local::GetComponentsToProcess
              (&local_58,pUVar7,*(bool *)((longlong)this + 0x20),*(FName *)((longlong)this + 0x24));
    iVar4 = local_58.ArrayNum;
    uVar12 = (ulonglong)local_58.ArrayNum;
    local_res18 = local_58.AllocatorInstance.Data + uVar12 * 8;
    FVar17.Data = local_58.AllocatorInstance.Data;
    while( true ) {
      pFVar3 = local_res18;
      if ((uint)uVar12 != iVar4) {
        `TCheckedPointerIterator<USkeletalMeshComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar17.Data == pFVar3) break;
      pUVar7 = *(USkeletalMeshComponent **)FVar17.Data;
      pUVar8 = USkinnedMeshComponent::GetMeshDeformerInstanceForLOD
                         ((USkinnedMeshComponent *)pUVar7,0);
      if (pUVar8 == (UMeshDeformerInstance *)0x0) {
        USkeletalMeshComponent::HandleExistingParallelEvaluationTask(pUVar7,true,false);
        USkinnedMeshComponent::SetAlwaysUseMeshDeformer((USkinnedMeshComponent *)pUVar7,true);
      }
      this_00 = (UOptimusDeformerDynamicInstanceManager *)
                USkinnedMeshComponent::GetMeshDeformerInstanceForLOD
                          ((USkinnedMeshComponent *)pUVar7,0);
      if (this_00 != (UOptimusDeformerDynamicInstanceManager *)0x0) {
        pUVar9 = UOptimusDeformerDynamicInstanceManager::StaticClass();
        iVar6 = (int)pUVar9->_padding_;
        if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar9->_padding_)) {
          pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 8));
          local_68 = *(undefined8 *)((longlong)this + 0x10);
          uStack_60 = *(undefined8 *)((longlong)this + 0x18);
          uVar11 = CityHash64((char *)&local_68,0x10);
          if (*(int *)&(this_00->GuidToInstanceMap).field_0x8 !=
              *(int *)&(this_00->GuidToInstanceMap).field_0x34) {
            puVar1 = *(undefined1 **)&(this_00->GuidToInstanceMap).field_0x40;
            puVar15 = &(this_00->GuidToInstanceMap).field_0x38;
            if (puVar1 != (undefined1 *)0x0) {
              puVar15 = puVar1;
            }
            iVar6 = *(int *)(puVar15 +
                            ((ulonglong)(*(int *)&(this_00->GuidToInstanceMap).field_0x48 - 1) &
                            uVar11 & 0xffffffff) * 4);
            if (iVar6 != -1) {
              do {
                piVar18 = (int *)((longlong)iVar6 * 0x20 + *(longlong *)&this_00->GuidToInstanceMap)
                ;
                param_1 = local_res10;
                if (((uStack_60._4_4_ == piVar18[3] && (int)uStack_60 == piVar18[2]) &&
                    local_68._4_4_ == piVar18[1]) && (int)local_68 == *piVar18) {
                  if ((((iVar6 != -1) &&
                       (lVar13 = (longlong)iVar6 * 0x20 + *(longlong *)&this_00->GuidToInstanceMap,
                       lVar13 != 0)) &&
                      (plVar14 = (longlong *)(lVar13 + 0x10), plVar14 != (longlong *)0x0)) &&
                     (*plVar14 != 0)) goto LAB_14e168e02;
                  break;
                }
                iVar6 = piVar18[6];
              } while (iVar6 != -1);
            }
          }
          if (pUVar10 == (UObject *)0x0) {
            pIVar16 = (IMeshDeformerProducer *)0x0;
          }
          else {
            pIVar16 = (IMeshDeformerProducer *)&pUVar10[0x10].field_0x20;
          }
          local_48._0_8_ = *(undefined8 *)((longlong)this + 0x10);
          local_48._8_8_ = *(undefined8 *)((longlong)this + 0x18);
          UOptimusDeformerDynamicInstanceManager::AddProducerDeformer
                    (this_00,pIVar16,&local_48,param_1);
        }
      }
LAB_14e168e02:
      uVar12 = (ulonglong)(uint)local_58.ArrayNum;
      FVar17.Data = FVar17.Data + 8;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  return;
}

// Execute @ 14e1ac1e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_AddOptimusDeformer::Execute
          (FRigUnit_AddOptimusDeformer *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->DeformerInstanceGuid);
  return;
}

// GetComponentsToProcess @ 14e1bff20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_> * __cdecl
`FRigUnit_AddOptimusDeformer::StaticExecute'::__l8::Local::GetComponentsToProcess
          (TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          USkeletalMeshComponent *param_1,bool param_2,FName param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UActorComponent *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_> *pTVar9;
  ForAnyElementType FVar10;
  undefined1 local_res18 [16];
  UActorComponent *local_58;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_50;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,piVar1);
  *(USkeletalMeshComponent **)(__return_storage_ptr__->AllocatorInstance).Data = param_1;
  if (!param_2) {
    return __return_storage_ptr__;
  }
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  USceneComponent::GetChildrenComponents((USceneComponent *)param_1,true,&local_50);
  iVar5 = local_50.ArrayNum;
  pFVar2 = local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 8;
  FVar10.Data = local_50.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_50.ArrayNum != iVar5) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar10.Data == pFVar2) {
        if (local_50.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_50.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      this = *(UActorComponent **)FVar10.Data;
      if (this != (UActorComponent *)0x0) break;
LAB_14e1c00d8:
      local_58 = (UActorComponent *)0x0;
LAB_14e1c00dd:
      FVar10.Data = FVar10.Data + 8;
    }
    pUVar8 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(this->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar8->_padding_)) goto LAB_14e1c00d8;
    local_58 = this;
    bVar6 = UActorComponent::ComponentHasTag(this,param_3);
    if (bVar6) goto LAB_14e1c00dd;
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < pFVar3 + (longlong)*piVar1 * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    FVar10.Data = FVar10.Data + 8;
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(UActorComponent **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         local_58;
  } while( true );
}

// IsVariableTraitName @ 14e1f0fb0

bool __cdecl FRigUnit_AddOptimusDeformer::IsVariableTraitName(FString *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar3 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,DeformerTraitName);
  if (iVar1 != 0) {
    if ((param_1->Data).ArrayNum != 0) {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,DeformerSettingsTraitName);
    if (iVar1 != 0) {
      return true;
    }
  }
  return false;
}

// RigVMExecute @ 14e21a920

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_AddOptimusDeformer::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FRigVMSlice *pFVar3;
  FGuid *pFVar4;
  FControlRigExecuteContext *pFVar5;
  
  if (param_2->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar4 = (FGuid *)FRigVMMemoryHandle::GetData_Internal
                              (param_2->DataPtr,false,pFVar3->Offset + pFVar3->Index);
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar5,pFVar4);
  return;
}

// StaticExecute @ 14e224df0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRigUnit_AddOptimusDeformer::StaticExecute(FControlRigExecuteContext *param_1,FGuid *param_2)

{
  atomic<unsigned_int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  int iVar5;
  USkeletalMeshComponent *pUVar6;
  UControlRig *pUVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FLoadPackageAsyncProgressDelegate *pFVar14;
  FSharedReferencer<1> FVar15;
  undefined4 uVar16;
  bool bVar17;
  int iVar18;
  FGuid *pFVar19;
  UClass *pUVar20;
  UPackage *pUVar21;
  UScriptStruct *pUVar22;
  UOptimusDeformerDynamicInstanceManager *this;
  FTaskBase *pFVar23;
  undefined8 *puVar24;
  ulong64 uVar25;
  UMeshDeformerInstance *pUVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong *plVar29;
  undefined1 *puVar30;
  ForAnyElementType FVar31;
  FTaskBase *this_00;
  int *piVar32;
  EExtendedTaskPriority local_res18 [8];
  ETaskPriority local_res20 [8];
  undefined1 local_200;
  undefined1 local_1ff [3];
  FWeakObjectPtr local_1fc;
  FWeakObjectPtr local_1f4;
  longlong local_1e8;
  FWeakObjectPtr local_1e0;
  longlong *local_1d8;
  TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_> local_1d0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  FLoadAssetAsyncOptionalParams local_1a8;
  undefined4 uStack_180;
  undefined1 local_178 [8];
  FDelegateAllocation local_170;
  code *local_158;
  longlong local_148;
  undefined8 uStack_140;
  FPipe *local_138;
  longlong *local_130;
  USkeletalMeshComponent *local_128;
  UControlRig *local_120;
  FTaskBase *local_118 [2];
  longlong *local_108 [2];
  FDestructionSentinel local_f8;
  FDelegateAllocation *local_e0;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  FWeakObjectPtr FStack_ac;
  TDelegateBase<FNotThreadSafeDelegateMode> local_a0;
  FGuid local_88 [4];
  
  if (((param_2->D == 0 && param_2->C == 0) && param_2->B == 0) && param_2->A == 0) {
    pFVar19 = FGuid::NewGuid(local_88);
    uVar11 = pFVar19->B;
    uVar12 = pFVar19->C;
    uVar13 = pFVar19->D;
    param_2->A = pFVar19->A;
    param_2->B = uVar11;
    param_2->C = uVar12;
    param_2->D = uVar13;
  }
  pUVar6 = *(USkeletalMeshComponent **)&param_1->field_0xd0;
  if (pUVar6 != (USkeletalMeshComponent *)0x0) {
    pUVar20 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar4 = (int)pUVar20->_padding_;
    if ((iVar4 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar20->_padding_)) {
      pUVar20 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar4 = (int)pUVar20->_padding_;
      if ((iVar4 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar20->_padding_)) {
        plVar29 = *(longlong **)&param_1->field_0xe8;
        iVar4 = *(int *)&param_1->field_0xf0;
        local_1d8 = plVar29;
        if ((iVar4 < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar27 = plVar29 + (longlong)iVar4 * 4;
        local_1e8 = 0;
        pUVar22 = Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusDeformerSettings.
                  OuterSingleton;
        for (; plVar29 != plVar27; plVar29 = plVar29 + 4) {
          lVar28 = plVar29[1];
          if (pUVar22 == (UScriptStruct *)0x0) {
            pUVar21 = Z_Construct_UPackage__Script_OptimusCore();
            pUVar22 = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTrait_OptimusDeformerSettings,
                                      (UObject *)pUVar21,L"RigVMTrait_OptimusDeformerSettings");
            Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusDeformerSettings.OuterSingleton =
                 pUVar22;
            if (pUVar22 != (UScriptStruct *)0x0) goto LAB_14e224f53;
          }
          else {
LAB_14e224f53:
            iVar18 = (int)pUVar22->_padding_;
            if ((*(int *)(lVar28 + 0x38) < iVar18) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar28 + 0x30) + (longlong)iVar18 * 8) !=
                &pUVar22->_padding_)) {
              bVar17 = false;
            }
            else {
              bVar17 = true;
            }
            if ((bVar17) && (lVar28 = *plVar29, *plVar29 != 0)) goto LAB_14e224fb2;
          }
        }
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("SettingsTraitPtr != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\ControlRig\\RigUnit_Optimus.cpp"
                            ,0x10e,L"");
        lVar28 = local_1e8;
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
LAB_14e224fb2:
        local_1e8 = lVar28;
        lVar28 = local_1e8;
        `FRigUnit_AddOptimusDeformer::StaticExecute'::__l8::Local::GetComponentsToProcess
                  (&local_1d0,pUVar6,*(bool *)(local_1e8 + 0x20),*(FName *)(local_1e8 + 0x24));
        iVar18 = local_1d0.ArrayNum;
        pFVar2 = local_1d0.AllocatorInstance.Data + (longlong)local_1d0.ArrayNum * 8;
        FVar31.Data = local_1d0.AllocatorInstance.Data;
        while( true ) {
          if (local_1d0.ArrayNum != iVar18) {
            `TCheckedPointerIterator<USkeletalMeshComponent_*,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_200);
          }
          if (FVar31.Data == pFVar2) break;
          this = (UOptimusDeformerDynamicInstanceManager *)
                 USkinnedMeshComponent::GetMeshDeformerInstanceForLOD
                           (*(USkinnedMeshComponent **)FVar31.Data,0);
          if (this != (UOptimusDeformerDynamicInstanceManager *)0x0) {
            pUVar20 = UOptimusDeformerDynamicInstanceManager::StaticClass();
            iVar5 = (int)pUVar20->_padding_;
            if ((iVar5 <= *(int *)(this->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
                &pUVar20->_padding_)) {
              local_108[0]._0_4_ = param_2->A;
              local_108[0]._4_4_ = param_2->B;
              local_108[1]._0_4_ = param_2->C;
              local_108[1]._4_4_ = param_2->D;
              UOptimusDeformerDynamicInstanceManager::EnqueueProducerDeformer
                        (this,(FGuid *)local_108,*(EOptimusDeformerExecutionPhase *)(lVar28 + 0x18),
                         *(int *)(lVar28 + 0x1c));
            }
          }
          FVar31.Data = FVar31.Data + 8;
        }
        local_108[0] = local_1d8 + (longlong)iVar4 * 4;
        if (local_1d8 != local_108[0]) {
          do {
            plVar29 = local_1d8;
            lVar28 = local_1d8[1];
            if (Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusDeformer.OuterSingleton ==
                (UScriptStruct *)0x0) {
              pUVar21 = Z_Construct_UPackage__Script_OptimusCore();
              Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusDeformer.OuterSingleton =
                   GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTrait_OptimusDeformer,
                                   (UObject *)pUVar21,L"RigVMTrait_OptimusDeformer");
            }
            if (Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusDeformer.OuterSingleton ==
                (UScriptStruct *)0x0) {
LAB_14e2254c2:
              lVar28 = plVar29[1];
              if (Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusVariableBase.OuterSingleton
                  == (UScriptStruct *)0x0) {
                pUVar21 = Z_Construct_UPackage__Script_OptimusCore();
                Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusVariableBase.OuterSingleton =
                     GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTrait_OptimusVariableBase,
                                     (UObject *)pUVar21,L"RigVMTrait_OptimusVariableBase");
              }
              iVar4 = local_1d0.ArrayNum;
              if (Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusVariableBase.OuterSingleton
                  != (UScriptStruct *)0x0) {
                iVar18 = (int)(Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusVariableBase.
                              OuterSingleton)->_padding_;
                if ((*(int *)(lVar28 + 0x38) < iVar18) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(lVar28 + 0x30) + (longlong)iVar18 * 8) !=
                    &(Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusVariableBase.
                     OuterSingleton)->_padding_)) {
                  bVar17 = false;
                }
                else {
                  bVar17 = true;
                }
                if ((bVar17) && (plVar27 = (longlong *)*plVar29, plVar27 != (longlong *)0x0)) {
                  pFVar2 = local_1d0.AllocatorInstance.Data + (longlong)local_1d0.ArrayNum * 8;
                  FVar31.Data = local_1d0.AllocatorInstance.Data;
                  while( true ) {
                    if (local_1d0.ArrayNum != iVar4) {
                      `TCheckedPointerIterator<USkeletalMeshComponent_*,int,0>::operator!='::__l2::
                      <lambda_1>::operator()(local_1ff);
                    }
                    plVar29 = local_1d8;
                    if (FVar31.Data == pFVar2) break;
                    pUVar26 = USkinnedMeshComponent::GetMeshDeformerInstanceForLOD
                                        (*(USkinnedMeshComponent **)FVar31.Data,0);
                    if (pUVar26 == (UMeshDeformerInstance *)0x0) {
LAB_14e2256a3:
                      FVar31.Data = FVar31.Data + 8;
                    }
                    else {
                      pUVar20 = UOptimusDeformerDynamicInstanceManager::StaticClass();
                      iVar18 = (int)pUVar20->_padding_;
                      if (((*(int *)(*(longlong *)&pUVar26->field_0x10 + 0x38) < iVar18) ||
                          ((longlong *)
                           *(undefined1 **)
                            (*(longlong *)(*(longlong *)&pUVar26->field_0x10 + 0x30) +
                            (longlong)iVar18 * 8) != &pUVar20->_padding_)) ||
                         (((param_2->B == 0 && param_2->C == 0) && param_2->A == 0) &&
                          param_2->D == 0)) goto LAB_14e2256a3;
                      local_1b8._0_4_ = param_2->A;
                      local_1b8._4_4_ = param_2->B;
                      uStack_1b0._0_4_ = param_2->C;
                      uStack_1b0._4_4_ = param_2->D;
                      uVar25 = CityHash64((char *)&local_1b8,0x10);
                      if (*(int *)&pUVar26[3].field_0x10 == *(int *)&pUVar26[4].field_0x14)
                      goto LAB_14e2256a3;
                      puVar30 = *(undefined1 **)&pUVar26[4].field_0x20;
                      if (puVar30 == (undefined1 *)0x0) {
                        puVar30 = &pUVar26[4].field_0x18;
                      }
                      iVar18 = *(int *)(puVar30 +
                                       ((ulonglong)(*(int *)(pUVar26 + 5) - 1) & uVar25 & 0xffffffff
                                       ) * 4);
                      if (iVar18 == -1) goto LAB_14e2256a3;
                      do {
                        piVar32 = (int *)((longlong)iVar18 * 0x20 +
                                         *(longlong *)&pUVar26[3].field_0x8);
                        if (((uStack_1b0._4_4_ == piVar32[3] && (int)uStack_1b0 == piVar32[2]) &&
                            local_1b8._4_4_ == piVar32[1]) && (int)local_1b8 == *piVar32) {
                          if (((iVar18 != -1) &&
                              (lVar28 = (longlong)iVar18 * 0x20 + *(longlong *)&pUVar26[3].field_0x8
                              , lVar28 != 0)) &&
                             ((plVar29 = (longlong *)(lVar28 + 0x10), plVar29 != (longlong *)0x0 &&
                              (*plVar29 != 0)))) {
                            (**(code **)(*plVar27 + 0x88))(plVar27);
                          }
                          goto LAB_14e2256a3;
                        }
                        iVar18 = piVar32[6];
                      } while (iVar18 != -1);
                      FVar31.Data = FVar31.Data + 8;
                    }
                  }
                }
              }
            }
            else {
              iVar4 = (int)(Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusDeformer.
                           OuterSingleton)->_padding_;
              if ((*(int *)(lVar28 + 0x38) < iVar4) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar28 + 0x30) + (longlong)iVar4 * 8)
                  != &(Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusDeformer.OuterSingleton)
                      ->_padding_)) {
                bVar17 = false;
              }
              else {
                bVar17 = true;
              }
              if ((!bVar17) || (lVar28 = *plVar29, lVar28 == 0)) goto LAB_14e2254c2;
              if (*(longlong *)(lVar28 + 0x20) != 0) {
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar6);
                }
                this_00 = (FTaskBase *)0x0;
                local_1fc.ObjectIndex = 0;
                local_1fc.ObjectSerialNumber = 0;
                local_128 = pUVar6;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar6);
                }
                FWeakObjectPtr::operator=(&local_1fc,(FObjectPtr)&local_128);
                pUVar7 = param_1->ControlRig;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar7 != (UControlRig *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar7);
                }
                local_1f4.ObjectIndex = 0;
                local_1f4.ObjectSerialNumber = 0;
                local_120 = pUVar7;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar7 != (UControlRig *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar7);
                }
                FWeakObjectPtr::operator=(&local_1f4,(FObjectPtr)&local_120);
                uVar9._0_4_ = param_2->A;
                uVar9._4_4_ = param_2->B;
                uVar10._0_4_ = param_2->C;
                uVar10._4_4_ = param_2->D;
                local_1a8.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)local_1fc;
                local_1a8.ProgressDelegate.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)local_1f4;
                local_1a8.LoadFlags =
                     CONCAT31(local_1a8.LoadFlags._1_3_,*(undefined1 *)(local_1e8 + 0x20));
                local_1a8._36_4_ = SUB84(*(undefined8 *)(local_1e8 + 0x24),0);
                uStack_180 = (undefined4)((ulonglong)*(undefined8 *)(local_1e8 + 0x24) >> 0x20);
                pFVar23 = (FTaskBase *)
                          TPersistentObjectPtr<FSoftObjectPath>::Get
                                    ((TPersistentObjectPtr<FSoftObjectPath> *)(lVar28 + 0x18));
                if (pFVar23 == (FTaskBase *)0x0) {
LAB_14e225212:
                  pFVar23 = this_00;
                }
                else {
                  pUVar20 = UOptimusDeformer::StaticClass();
                  iVar4 = (int)pUVar20->_padding_;
                  if ((*(int *)(pFVar23->_padding_ + 0x38) < iVar4) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(pFVar23->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
                      &pUVar20->_padding_)) goto LAB_14e225212;
                }
                if (pFVar23 == (FTaskBase *)0x0) {
                  local_178 = (undefined1  [8])0x0;
                  local_170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
                  local_170.DelegateSize = 0;
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_178,
                             (FWriteAccessScope *)&local_f8);
                  local_e0 = &local_170;
                  puVar24 = UE::Core::Private::DelegateAllocate(0x48,&local_170);
                  if (puVar24 != (undefined8 *)0x0) {
                    *puVar24 = &
                               ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
                    ;
                    uVar25 = FDelegateHandle::GenerateNewID();
                    puVar24[2] = uVar25;
                    *puVar24 = &TBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`FRigUnit_AddOptimusDeformer::StaticExecute'::`44'::<lambda_3>_>
                                ::_vftable_;
                    *(FLoadPackageAsyncProgressDelegate **)(puVar24 + 3) =
                         local_1a8.ProgressDelegate.Object;
                    *(TReferenceControllerBase<1> **)(puVar24 + 4) =
                         local_1a8.ProgressDelegate.SharedReferenceCount.ReferenceController;
                    puVar24[5] = uVar9;
                    puVar24[6] = uVar10;
                    puVar24[7] = CONCAT44(local_1a8._36_4_,local_1a8.LoadFlags);
                    *(undefined4 *)(puVar24 + 8) = uStack_180;
                  }
                  if (local_f8.bDestroyed == false) {
                    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
                  }
                  local_1a8.PackagePriority = 0;
                  local_1a8.InstancingContext = (FLinkerInstancingContext *)0x0;
                  local_1a8.LoadFlags = 0;
                  local_1a8.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
                  local_1a8.ProgressDelegate.SharedReferenceCount.ReferenceController =
                       (TReferenceControllerBase<1> *)0x0;
                  TDelegateBase<FNotThreadSafeDelegateMode>::
                  TDelegateBase<FNotThreadSafeDelegateMode>
                            (&local_a0,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_178);
                  FSoftObjectPath::LoadAsync
                            ((FSoftObjectPath *)(lVar28 + 0x20),
                             (TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                              *)&local_a0,&local_1a8);
                  TDelegateBase<FNotThreadSafeDelegateMode>::
                  ~TDelegateBase<FNotThreadSafeDelegateMode>
                            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_178);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)0x0);
                }
                else {
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)pFVar23);
                  }
                  local_1e0.ObjectIndex = 0;
                  local_1e0.ObjectSerialNumber = 0;
                  local_118[0] = pFVar23;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)pFVar23);
                  }
                  FWeakObjectPtr::operator=(&local_1e0,(FObjectPtr)local_118);
                  uVar16 = local_1a8._36_4_;
                  uVar11 = local_1a8.LoadFlags;
                  FVar15.ReferenceController =
                       local_1a8.ProgressDelegate.SharedReferenceCount.ReferenceController;
                  pFVar14 = local_1a8.ProgressDelegate.Object;
                  uStack_b0 = uStack_180;
                  FStack_ac = local_1e0;
                  local_158 = (code *)0x0;
                  local_130 = (longlong *)0x0;
                  local_130 = FMemory::Malloc(0x40,8);
                  *(FLoadPackageAsyncProgressDelegate **)(local_130 + 1) = pFVar14;
                  *(TReferenceControllerBase<1> **)(local_130 + 2) = FVar15.ReferenceController;
                  *local_130 = (longlong)
                               &UE::Core::Private::Function::
                                TFunction_OwnedObject<`FRigUnit_AddOptimusDeformer::StaticExecute'::`42'::<lambda_2>,1,1>
                                ::_vftable_;
                  local_130[3] = uVar9;
                  local_130[4] = uVar10;
                  *(uint *)(local_130 + 5) = uVar11;
                  *(undefined4 *)((longlong)local_130 + 0x2c) = uVar16;
                  *(undefined4 *)(local_130 + 6) = uStack_b0;
                  *(int *)((longlong)local_130 + 0x34) = FStack_ac.ObjectIndex;
                  *(int *)(local_130 + 7) = FStack_ac.ObjectSerialNumber;
                  local_b8 = uVar11;
                  uStack_b4 = uVar16;
                  if (local_130 != (longlong *)&DAT_fffffffffffffff8) {
                    local_158 = UE::Core::Private::Function::
                                TFunctionRefCaller<`FRigUnit_AddOptimusDeformer::StaticExecute'::__l42::<lambda_2>,void>
                                ::Call;
                  }
                  pFVar23 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10)
                  ;
                  if (pFVar23 != (FTaskBase *)0x0) {
                    FBaseGraphTask::FBaseGraphTask
                              ((FBaseGraphTask *)pFVar23,
                               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                *)0x0);
                    pFVar23->_padding_ =
                         (longlong)&___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_0A_____6B_;
                    this_00 = pFVar23;
                  }
                  this_00[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
                  this_00[1]._padding_ = (longlong)local_158;
                  *(longlong **)&this_00[1].StateChangeEvent = local_130;
                  local_130 = (longlong *)0x0;
                  this_00[1]._padding_ = local_148;
                  this_00[1].RefCount = (atomic<unsigned_int>)(undefined4)uStack_140;
                  this_00[1].NumLocks = (atomic<unsigned_int>)uStack_140._4_4_;
                  this_00[1].Pipe = local_138;
                  if (this_00[1]._padding_ != 0) {
                    local_158 = (code *)0x0;
                  }
                  this_00[1].ExecutingThreadId = (atomic<unsigned_int>)0x1;
                  UE::Tasks::Private::TranslatePriority(GameThread,local_res20,local_res18);
                  UE::Tasks::Private::FTaskBase::Init
                            (this_00,L"GraphTask",local_res20[0],local_res18[0],None);
                  if (this_00 != (FTaskBase *)0x0) {
                    LOCK();
                    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
                    UNLOCK();
                  }
                  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x130);
                  if (local_158 != (code *)0x0) {
                    plVar27 = &local_148;
                    if (local_130 != (longlong *)0x0) {
                      plVar27 = local_130;
                    }
                    (**(code **)(*plVar27 + 0x10))();
                  }
                  if (this_00 != (FTaskBase *)0x0) {
                    LOCK();
                    paVar1 = &this_00->RefCount;
                    aVar3 = *paVar1;
                    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
                    UNLOCK();
                    if (aVar3 == (atomic<unsigned_int>)0x1) {
                      (**(code **)this_00->_padding_)(this_00,1);
                    }
                  }
                }
              }
            }
            local_1d8 = plVar29 + 4;
          } while (local_1d8 != local_108[0]);
        }
        if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

