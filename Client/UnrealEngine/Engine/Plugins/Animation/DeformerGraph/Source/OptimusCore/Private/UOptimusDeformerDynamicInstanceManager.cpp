// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 16

// StaticClass @ 14e1142d0

UClass * __cdecl UOptimusDeformerDynamicInstanceManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDeformerDynamicInstanceManager.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDeformerDynamicInstanceManager",
               &Z_Registration_Info_UClass_UOptimusDeformerDynamicInstanceManager.InnerSingleton,
               StaticRegisterNativesUOptimusDeformerDynamicInstanceManager,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusDeformerDynamicInstanceManager>,
               InternalVTableHelperCtorCaller<UOptimusDeformerDynamicInstanceManager>,local_res8,
               UMeshDeformerInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDeformerDynamicInstanceManager.InnerSingleton;
}

// UOptimusDeformerDynamicInstanceManager @ 14e1596d0

UOptimusDeformerDynamicInstanceManager * __thiscall
UOptimusDeformerDynamicInstanceManager::UOptimusDeformerDynamicInstanceManager
          (UOptimusDeformerDynamicInstanceManager *this,FVTableHelper *param_1)

{
  UMeshDeformerInstance::UMeshDeformerInstance((UMeshDeformerInstance *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusDeformerDynamicInstanceManager__6B_;
  (this->DefaultInstance).field0_0x0.DebugPtr = (UOptimusDeformerInstance *)0x0;
  *(undefined8 *)&this->GuidToRigDeformerInstanceMap = 0;
  *(undefined8 *)&(this->GuidToRigDeformerInstanceMap).field_0x8 = 0;
  *(undefined8 *)&(this->GuidToRigDeformerInstanceMap).field_0x20 = 0;
  *(undefined4 *)&(this->GuidToRigDeformerInstanceMap).field_0x28 = 0;
  *(undefined4 *)&(this->GuidToRigDeformerInstanceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GuidToRigDeformerInstanceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GuidToRigDeformerInstanceMap).field_0x34 = 0;
  *(undefined8 *)&(this->GuidToRigDeformerInstanceMap).field_0x40 = 0;
  *(undefined4 *)&(this->GuidToRigDeformerInstanceMap).field_0x48 = 0;
  *(undefined8 *)&this->GuidToInstanceMap = 0;
  *(undefined8 *)&(this->GuidToInstanceMap).field_0x8 = 0;
  *(undefined8 *)&(this->GuidToInstanceMap).field_0x20 = 0;
  *(undefined4 *)&(this->GuidToInstanceMap).field_0x28 = 0;
  *(undefined4 *)&(this->GuidToInstanceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GuidToInstanceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GuidToInstanceMap).field_0x34 = 0;
  *(undefined8 *)&(this->GuidToInstanceMap).field_0x40 = 0;
  *(undefined4 *)&(this->GuidToInstanceMap).field_0x48 = 0;
  *(undefined8 *)&this->ProducerToGuidsMap = 0;
  *(undefined8 *)&(this->ProducerToGuidsMap).field_0x8 = 0;
  *(undefined8 *)&(this->ProducerToGuidsMap).field_0x20 = 0;
  *(undefined4 *)&(this->ProducerToGuidsMap).field_0x28 = 0;
  *(undefined4 *)&(this->ProducerToGuidsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProducerToGuidsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProducerToGuidsMap).field_0x34 = 0;
  *(undefined8 *)&(this->ProducerToGuidsMap).field_0x40 = 0;
  *(undefined4 *)&(this->ProducerToGuidsMap).field_0x48 = 0;
  (this->GuidsPendingInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GuidsPendingInit).ArrayNum = 0;
  (this->GuidsPendingInit).ArrayMax = 0;
  *(undefined8 *)&this->ExecutionQueueMap = 0;
  *(undefined8 *)&(this->ExecutionQueueMap).field_0x8 = 0;
  *(undefined8 *)&(this->ExecutionQueueMap).field_0x20 = 0;
  *(undefined4 *)&(this->ExecutionQueueMap).field_0x28 = 0;
  *(undefined4 *)&(this->ExecutionQueueMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExecutionQueueMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExecutionQueueMap).field_0x34 = 0;
  *(undefined8 *)&(this->ExecutionQueueMap).field_0x40 = 0;
  *(undefined4 *)&(this->ExecutionQueueMap).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->EnqueueCriticalSection,4000);
  return this;
}

// UOptimusDeformerDynamicInstanceManager @ 14e159810

UOptimusDeformerDynamicInstanceManager * __thiscall
UOptimusDeformerDynamicInstanceManager::UOptimusDeformerDynamicInstanceManager
          (UOptimusDeformerDynamicInstanceManager *this,FObjectInitializer *param_1)

{
  UMeshDeformerInstance::UMeshDeformerInstance((UMeshDeformerInstance *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusDeformerDynamicInstanceManager__6B_;
  (this->DefaultInstance).field0_0x0.DebugPtr = (UOptimusDeformerInstance *)0x0;
  *(undefined8 *)&this->GuidToRigDeformerInstanceMap = 0;
  *(undefined8 *)&(this->GuidToRigDeformerInstanceMap).field_0x8 = 0;
  *(undefined8 *)&(this->GuidToRigDeformerInstanceMap).field_0x20 = 0;
  *(undefined4 *)&(this->GuidToRigDeformerInstanceMap).field_0x28 = 0;
  *(undefined4 *)&(this->GuidToRigDeformerInstanceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GuidToRigDeformerInstanceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GuidToRigDeformerInstanceMap).field_0x34 = 0;
  *(undefined8 *)&(this->GuidToRigDeformerInstanceMap).field_0x40 = 0;
  *(undefined4 *)&(this->GuidToRigDeformerInstanceMap).field_0x48 = 0;
  *(undefined8 *)&this->GuidToInstanceMap = 0;
  *(undefined8 *)&(this->GuidToInstanceMap).field_0x8 = 0;
  *(undefined8 *)&(this->GuidToInstanceMap).field_0x20 = 0;
  *(undefined4 *)&(this->GuidToInstanceMap).field_0x28 = 0;
  *(undefined4 *)&(this->GuidToInstanceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GuidToInstanceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GuidToInstanceMap).field_0x34 = 0;
  *(undefined8 *)&(this->GuidToInstanceMap).field_0x40 = 0;
  *(undefined4 *)&(this->GuidToInstanceMap).field_0x48 = 0;
  *(undefined8 *)&this->ProducerToGuidsMap = 0;
  *(undefined8 *)&(this->ProducerToGuidsMap).field_0x8 = 0;
  *(undefined8 *)&(this->ProducerToGuidsMap).field_0x20 = 0;
  *(undefined4 *)&(this->ProducerToGuidsMap).field_0x28 = 0;
  *(undefined4 *)&(this->ProducerToGuidsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProducerToGuidsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProducerToGuidsMap).field_0x34 = 0;
  *(undefined8 *)&(this->ProducerToGuidsMap).field_0x40 = 0;
  *(undefined4 *)&(this->ProducerToGuidsMap).field_0x48 = 0;
  (this->GuidsPendingInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GuidsPendingInit).ArrayNum = 0;
  (this->GuidsPendingInit).ArrayMax = 0;
  *(undefined8 *)&this->ExecutionQueueMap = 0;
  *(undefined8 *)&(this->ExecutionQueueMap).field_0x8 = 0;
  *(undefined8 *)&(this->ExecutionQueueMap).field_0x20 = 0;
  *(undefined4 *)&(this->ExecutionQueueMap).field_0x28 = 0;
  *(undefined4 *)&(this->ExecutionQueueMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExecutionQueueMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExecutionQueueMap).field_0x34 = 0;
  *(undefined8 *)&(this->ExecutionQueueMap).field_0x40 = 0;
  *(undefined4 *)&(this->ExecutionQueueMap).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->EnqueueCriticalSection,4000);
  return this;
}

// ~UOptimusDeformerDynamicInstanceManager @ 14e1628e0

void __thiscall
UOptimusDeformerDynamicInstanceManager::~UOptimusDeformerDynamicInstanceManager
          (UOptimusDeformerDynamicInstanceManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UOptimusDeformerDynamicInstanceManager__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->EnqueueCriticalSection);
  *(undefined4 *)&(this->ExecutionQueueMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExecutionQueueMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ExecutionQueueMap);
  pFVar2 = (this->GuidsPendingInit).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ProducerToGuidsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ProducerToGuidsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ProducerToGuidsMap);
  *(undefined4 *)&(this->GuidToInstanceMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GuidToInstanceMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GuidToInstanceMap);
  *(undefined4 *)&(this->GuidToRigDeformerInstanceMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GuidToRigDeformerInstanceMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GuidToRigDeformerInstanceMap);
  UMeshDeformerInstance::~UMeshDeformerInstance((UMeshDeformerInstance *)this);
  return;
}

// AddProducerDeformer @ 14e1782e0

void __thiscall
UOptimusDeformerDynamicInstanceManager::AddProducerDeformer
          (UOptimusDeformerDynamicInstanceManager *this,IMeshDeformerProducer *param_1,
          FGuid *param_2,UOptimusDeformer *param_3)

{
  int *piVar1;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  UMeshComponent *pUVar4;
  FGuid *pFVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  ulong64 uVar14;
  UClass *pUVar15;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  TMulticastDelegateRegistration<void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
  *this_01;
  FString *pFVar16;
  longlong lVar17;
  ForAnyElementType *pFVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  FWeakObjectPtr local_d8;
  FWeakObjectPtr local_d0;
  ForAnyElementType local_c8;
  undefined4 local_c0;
  int local_bc;
  TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&,TArray<FGuid,TSizedDefaultAllocator<32>_>_&&>
  local_b8;
  UObject *local_a8;
  FWeakObjectPtr local_a0;
  UObject *local_98;
  FGuid *local_90;
  TArray<FGuid,TSizedDefaultAllocator<32>_> **local_88;
  FWeakObjectPtr *local_80;
  ForAnyElementType *local_78;
  undefined1 local_70 [40];
  FString local_48;
  FString local_38;
  
  bVar12 = IsInGameThread();
  pwVar19 = L"";
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformerDynamicInstanceManager.cpp"
                          ,0xdd,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar14 = CityHash64((char *)param_2,0x10);
  iVar13 = TSet<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UOptimusDeformerInstance>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FGuid>
                     ((TSet<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UOptimusDeformerInstance>,0>,FDefaultSetAllocator>
                       *)&this->GuidToInstanceMap,(uint)uVar14,param_2);
  if (iVar13 == -1) {
    pUVar4 = (UMeshComponent *)this->_padding_;
    if (pUVar4 == (UMeshComponent *)0x0) {
      pFVar16 = GetTypeName<UMeshComponent>((FString *)(local_70 + 0x18));
      if ((pFVar16->Data).ArrayNum != 0) {
        pwVar19 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar19);
    }
    pUVar15 = Z_Construct_UClass_UMeshComponent_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar13) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar13 * 8)
        != &pUVar15->_padding_)) {
      pFVar16 = GetTypeName<UMeshComponent>(&local_48);
      if ((pFVar16->Data).ArrayNum == 0) {
        pwVar20 = L"";
      }
      else {
        pwVar20 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
      pFVar16 = GetFullNameForCastLogError<UObject>(&local_38,(UObject *)pUVar4);
      if ((pFVar16->Data).ArrayNum != 0) {
        pwVar19 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar19,pwVar20);
    }
    local_b8.Value =
         (TArray<FGuid,TSizedDefaultAllocator<32>_> *)
         UOptimusDeformer::CreateOptimusInstance
                   (param_3,pUVar4,(UMeshDeformerInstanceSettings *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UOptimusDeformerInstance *)local_b8.Value != (UOptimusDeformerInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_b8.Value);
    }
    local_88 = &local_b8.Value;
    local_90 = param_2;
    TSet<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UOptimusDeformerInstance>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGuid_const_&,TObjectPtr<UOptimusDeformerInstance>_&&>_>
              ((TSet<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UOptimusDeformerInstance>,0>,FDefaultSetAllocator>
                *)&this->GuidToInstanceMap,
               (TPairInitializer<FGuid_const_&,TObjectPtr<UOptimusDeformerInstance>_&&> *)
               &stack0x00000008,(bool *)&local_90);
    pTVar2 = &this->GuidsPendingInit;
    pFVar5 = (FGuid *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar5 <= param_2) && (param_2 < pFVar5 + (this->GuidsPendingInit).ArrayMax)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar13 = (this->GuidsPendingInit).ArrayNum;
    piVar1 = &(this->GuidsPendingInit).ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&pTVar2->AllocatorInstance,piVar1);
    }
    uVar7 = param_2->A;
    uVar8 = param_2->B;
    uVar9 = param_2->C;
    uVar10 = param_2->D;
    (this->GuidsPendingInit).ArrayNum = iVar13 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
    *(uint *)pFVar3 = uVar7;
    *(uint *)(pFVar3 + 4) = uVar8;
    *(uint *)(pFVar3 + 8) = uVar9;
    *(uint *)(pFVar3 + 0xc) = uVar10;
    if ((param_1 == (IMeshDeformerProducer *)0x0) ||
       (local_a8 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1),
       local_a8 == (UObject *)0x0)) {
      local_a8 = (UObject *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_a8);
    }
    local_d8.ObjectIndex = 0;
    local_d8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_a8);
    }
    FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_a8);
    local_a0 = local_d8;
    iVar13 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                       ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         *)&this->ProducerToGuidsMap,
                        local_d8.ObjectSerialNumber ^ local_d8.ObjectIndex,
                        (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_a0);
    if (((iVar13 == -1) ||
        (lVar17 = (longlong)iVar13 * 0x20 + *(longlong *)&this->ProducerToGuidsMap, lVar17 == 0)) ||
       (pFVar18 = (ForAnyElementType *)(lVar17 + 8), pFVar18 == (ForAnyElementType *)0x0)) {
      local_70._8_4_ = param_2->A;
      local_70._12_4_ = param_2->B;
      local_70._16_4_ = param_2->C;
      local_70._20_4_ = param_2->D;
      local_c8.Data = (FScriptContainerElement *)0x0;
      local_c0 = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,1,0,&local_c8,1,&local_bc);
      *(undefined4 *)local_c8.Data = local_70._8_4_;
      *(undefined4 *)(local_c8.Data + 4) = local_70._12_4_;
      *(undefined4 *)(local_c8.Data + 8) = local_70._16_4_;
      *(undefined4 *)(local_c8.Data + 0xc) = local_70._20_4_;
      if ((param_1 == (IMeshDeformerProducer *)0x0) ||
         (local_98 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1),
         local_98 == (UObject *)0x0)) {
        local_98 = (UObject *)0x0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_98);
      }
      local_d0.ObjectIndex = 0;
      local_d0.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_98);
      }
      FWeakObjectPtr::operator=(&local_d0,(FObjectPtr)&local_98);
      local_80 = &local_d0;
      local_78 = &local_c8;
      TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&,TArray<FGuid,TSizedDefaultAllocator<32>_>_&&>_>
                ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&this->ProducerToGuidsMap,&local_b8,(bool *)&local_80);
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                (**(code **)((longlong)*param_1 + 0x10))(param_1);
      bVar12 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject(this_00,this);
      if ((bVar12) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InProducer->OnBeginDestroy().IsBoundToObject(this)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformerDynamicInstanceManager.cpp"
                              ,0xee,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_01 = (TMulticastDelegateRegistration<void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
                 *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
      TMulticastDelegateRegistration<void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
      ::AddUObject<UOptimusDeformerDynamicInstanceManager>
                (this_01,(UOptimusDeformerDynamicInstanceManager *)local_70,(pmf_36822c87)this);
    }
    else {
      if ((((FGuid *)pFVar18->Data <= param_2) &&
          (param_2 < (FGuid *)pFVar18->Data + *(int *)(lVar17 + 0x14))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar13 = *(int *)(lVar17 + 0x10);
      if (iVar13 == *(int *)(lVar17 + 0x14)) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,pFVar18,(int *)(lVar17 + 0x14));
        *(int *)(lVar17 + 0x10) = iVar13;
      }
      *(int *)(lVar17 + 0x10) = iVar13 + 1;
      uVar11 = *(undefined8 *)&param_2->C;
      pFVar3 = pFVar18->Data;
      *(undefined8 *)(pFVar3 + (longlong)iVar13 * 0x10) = *(undefined8 *)param_2;
      *(undefined8 *)(pFVar3 + (longlong)iVar13 * 0x10 + 8) = uVar11;
    }
  }
  else {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_3374093507072360225>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformerDynamicInstanceManager.cpp"
                        ,0xdf,"!GuidToInstanceMap.Contains(InInstanceGuid)");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// AllocateResources @ 14e17e0f0

void __thiscall
UOptimusDeformerDynamicInstanceManager::AllocateResources
          (UOptimusDeformerDynamicInstanceManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  (**(code **)(((this->DefaultInstance).field0_0x0.DebugPtr)->_padding_ + 0x2b0))();
  iVar11 = 0;
  puVar1 = &(this->GuidToInstanceMap).field_0x10;
  iVar3 = *(int *)&(this->GuidToInstanceMap).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->GuidToInstanceMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e17e1ad;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14e17e1ad:
  uVar10 = *(uint *)&(this->GuidToInstanceMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->GuidToInstanceMap).field_0x8 -
                       *(int *)&(this->GuidToInstanceMap).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->GuidToInstanceMap).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->GuidToInstanceMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e17e2b0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14e17e2b0:
  while( true ) {
    if (*(int *)&(this->GuidToInstanceMap).field_0x8 - *(int *)&(this->GuidToInstanceMap).field_0x34
        != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(**(longlong **)
                   ((longlong)TStack_50.CurrentBitIndex * 0x20 + 0x10 +
                   *(longlong *)&this->GuidToInstanceMap) + 0x2b0))();
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// BeginDestroy @ 14e17eb50

void __thiscall
UOptimusDeformerDynamicInstanceManager::BeginDestroy(UOptimusDeformerDynamicInstanceManager *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  bool bVar3;
  UObject *this_00;
  UClass *pUVar4;
  longlong *plVar5;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_01;
  ulonglong uVar6;
  ForAnyElementType this_02;
  undefined1 local_res8 [8];
  TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
              *)&this->ProducerToGuidsMap,&local_28);
  iVar2 = local_28.ArrayNum;
  uVar6 = (ulonglong)local_28.ArrayNum;
  pFVar1 = (FWeakObjectPtr *)(local_28.AllocatorInstance.Data + uVar6 * 8);
  this_02.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UObject,FWeakObjectPtr>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)this_02.Data == pFVar1) break;
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_02.Data);
    if (bVar3) {
      this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
      if (this_00 != (UObject *)0x0) {
        pUVar4 = Z_Construct_UClass_UMeshDeformerProducer_NoRegister();
        plVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar4);
        if (plVar5 != (longlong *)0x0) {
          this_01 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                    (**(code **)(*plVar5 + 0x10))(plVar5);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_01,this);
        }
      }
    }
    uVar6 = local_28._8_8_ & 0xffffffff;
    this_02.Data = this_02.Data + 8;
  }
  UObject::BeginDestroy((UObject *)this);
  if ((FWeakObjectPtr *)local_28.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// EnqueueProducerDeformer @ 14e1a8760

void __thiscall
UOptimusDeformerDynamicInstanceManager::EnqueueProducerDeformer
          (UOptimusDeformerDynamicInstanceManager *this,FGuid *param_1,
          EOptimusDeformerExecutionPhase param_2,int param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FGuid *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  EOptimusDeformerExecutionPhase local_res18 [8];
  uint local_res20 [2];
  
  lpCriticalSection = &this->EnqueueCriticalSection;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = TMapBase<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>,0>_>
            ::FindOrAddImpl<enum_EOptimusDeformerExecutionPhase_const_&>
                      (&this->ExecutionQueueMap,(uint)local_res18[0],local_res18);
  pTVar8 = TMapBase<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
                       *)this_00,local_res20[0],(int *)local_res20);
  pFVar9 = (pTVar8->AllocatorInstance).Data;
  pFVar10 = pFVar9 + (longlong)pTVar8->ArrayNum * 0x10;
  if (pFVar9 != pFVar10) {
    do {
      if (((param_1->D == *(uint *)(pFVar9 + 0xc) && param_1->C == *(uint *)(pFVar9 + 8)) &&
          param_1->B == *(uint *)(pFVar9 + 4)) && param_1->A == *(uint *)pFVar9) {
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          *(undefined8 *)pFVar9 = 0;
          *(undefined8 *)(pFVar9 + 8) = 0;
        }
        break;
      }
      pFVar9 = pFVar9 + 0x10;
    } while (pFVar9 != pFVar10);
  }
  pFVar1 = (FGuid *)(pTVar8->AllocatorInstance).Data;
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + pTVar8->ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar7 = pTVar8->ArrayNum;
  if (iVar7 == pTVar8->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar7 + 1;
  uVar3 = param_1->B;
  uVar4 = param_1->C;
  uVar5 = param_1->D;
  pFVar9 = (pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(uint *)pFVar9 = param_1->A;
  *(uint *)(pFVar9 + 4) = uVar3;
  *(uint *)(pFVar9 + 8) = uVar4;
  *(uint *)(pFVar9 + 0xc) = uVar5;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// EnqueueWork @ 14e1a8a00

void __thiscall
UOptimusDeformerDynamicInstanceManager::EnqueueWork
          (UOptimusDeformerDynamicInstanceManager *this,FEnqueueWorkDesc *param_1)

{
  EOptimusDeformerExecutionPhase EVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  FEnqueueWorkDesc *pFVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong64 uVar14;
  EOptimusDeformerExecutionPhase *pEVar15;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar16;
  int *piVar17;
  ulonglong uVar18;
  TObjectPtr<UOptimusDeformerInstance>_u_0 *pTVar19;
  undefined1 *puVar20;
  int *piVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  FIdentityFunctor FVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  TMapBase<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar27;
  ForAnyElementType FVar28;
  uint uVar29;
  TMap<EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *this_00;
  FScriptContainerElement *pFVar30;
  byte bVar31;
  EOptimusDeformerExecutionPhase *pEVar32;
  FIdentityFunctor local_res8 [8];
  FEnqueueWorkDesc *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [8];
  int *local_e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  TObjectPtr<UOptimusDeformerInstance>_u_0 local_c8;
  TObjectPtr<UOptimusDeformerInstance>_u_0 local_c0;
  TObjectPtr<UOptimusDeformerInstance>_u_0 local_b8;
  uint local_b0;
  FScriptContainerElement *local_a8;
  TMapBase<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
  *local_a0;
  EOptimusDeformerExecutionPhase *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  FScriptContainerElement *local_60;
  TMap<EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *local_58;
  
  iVar11 = (this->GuidsPendingInit).ArrayNum;
  puVar2 = &(this->GuidToInstanceMap).field_0x8;
  pFVar25 = (this->GuidsPendingInit).AllocatorInstance.Data;
  pFVar30 = pFVar25 + (longlong)iVar11 * 0x10;
  local_res10 = param_1;
  local_e0 = (int *)puVar2;
  while( true ) {
    if ((this->GuidsPendingInit).ArrayNum != iVar11) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      local_e0 = (int *)puVar2;
    }
    if (pFVar25 == pFVar30) break;
    local_90 = *(undefined8 *)pFVar25;
    uStack_88 = *(undefined8 *)(pFVar25 + 8);
    uVar14 = CityHash64((char *)&local_90,0x10);
    local_e0 = (int *)&(this->GuidToInstanceMap).field_0x8;
    if (*local_e0 == *(int *)&(this->GuidToInstanceMap).field_0x34) {
LAB_14e1a8b41:
      pFVar25 = pFVar25 + 0x10;
    }
    else {
      puVar22 = *(undefined1 **)&(this->GuidToInstanceMap).field_0x40;
      puVar20 = &(this->GuidToInstanceMap).field_0x38;
      if (puVar22 != (undefined1 *)0x0) {
        puVar20 = puVar22;
      }
      iVar13 = *(int *)(puVar20 +
                       ((ulonglong)(*(int *)&(this->GuidToInstanceMap).field_0x48 - 1) &
                       uVar14 & 0xffffffff) * 4);
      if (iVar13 == -1) goto LAB_14e1a8b41;
      do {
        piVar21 = (int *)((longlong)iVar13 * 0x20 + *(longlong *)&this->GuidToInstanceMap);
        if (((uStack_88._4_4_ == piVar21[3] && (int)uStack_88 == piVar21[2]) &&
            local_90._4_4_ == piVar21[1]) && (int)local_90 == *piVar21) {
          piVar17 = piVar21 + 4;
          if (piVar21 == (int *)0x0) {
            piVar17 = (int *)0x0;
          }
          if (piVar17 != (int *)0x0) {
            (**(code **)(**(longlong **)piVar17 + 0x2b0))();
          }
          goto LAB_14e1a8b41;
        }
        iVar13 = piVar21[6];
      } while (iVar13 != -1);
      pFVar25 = pFVar25 + 0x10;
    }
  }
  (this->GuidsPendingInit).ArrayNum = 0;
  if ((this->GuidsPendingInit).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->GuidsPendingInit).AllocatorInstance,0,
               &(this->GuidsPendingInit).ArrayMax);
    local_e0 = (int *)puVar2;
  }
  uVar23 = 0;
  uVar9 = *local_e0 - *(int *)&(this->GuidToInstanceMap).field_0x34;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&local_f8,0,(int *)((longlong)&local_f0 + 4));
    uVar23 = local_f0 & 0xffffffff;
  }
  local_58 = &this->ExecutionQueueMap;
  local_98 = Phases;
  piVar21 = local_e0;
  FVar24 = local_res8[0];
LAB_14e1a8c03:
  pEVar32 = local_98;
  EVar1 = *local_98;
  if (*(int *)&(this->ExecutionQueueMap).field_0x8 != *(int *)&(this->ExecutionQueueMap).field_0x34)
  {
    puVar2 = *(undefined1 **)&(this->ExecutionQueueMap).field_0x40;
    puVar22 = &(this->ExecutionQueueMap).field_0x38;
    if (puVar2 != (undefined1 *)0x0) {
      puVar22 = puVar2;
    }
    uVar10 = *(undefined4 *)
              (puVar22 +
              ((ulonglong)(*(int *)&(this->ExecutionQueueMap).field_0x48 - 1) & (ulonglong)EVar1) *
              4);
    if (uVar10 != 0xffffffff) {
      do {
        pEVar15 = (EOptimusDeformerExecutionPhase *)
                  ((longlong)(int)uVar10 * 0x60 + *(longlong *)&this->ExecutionQueueMap);
        if (*pEVar15 == EVar1) {
          pTVar27 = (TMapBase<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
                     *)(pEVar15 + 8);
          if (pEVar15 == (EOptimusDeformerExecutionPhase *)0x0) {
            pTVar27 = (TMapBase<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
                       *)0x0;
          }
          local_a0 = pTVar27;
          if (pTVar27 !=
              (TMapBase<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
               *)0x0) {
            local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d8.ArrayNum = 0;
            local_d8.ArrayMax = 0;
            TMapBase<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
            ::GenerateKeyArray<TSizedDefaultAllocator<32>_>(pTVar27,&local_d8);
            AlgoImpl::
            IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                      ((int *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum,FVar24,
                       (TLess<void> *)local_e8);
            if (EVar1 != OverrideDefaultDeformer) {
              uVar18 = (ulonglong)local_d8.ArrayNum;
              local_b0 = local_d8.ArrayNum;
              local_60 = local_d8.AllocatorInstance.Data + uVar18 * 4;
              uVar23 = uVar18;
              FVar28.Data = local_d8.AllocatorInstance.Data;
              while( true ) {
                pFVar25 = local_60;
                pTVar27 = local_a0;
                local_a8 = FVar28.Data;
                if ((int)uVar18 != (int)uVar23) {
                  local_res18[0] = 0;
                  `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (local_res18);
                }
                piVar21 = local_e0;
                pEVar32 = local_98;
                FVar24 = local_res8[0];
                if (FVar28.Data == pFVar25) break;
                pTVar16 = TMapBase<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
                          ::FindChecked(pTVar27,*(int *)FVar28.Data);
                piVar21 = local_e0;
                iVar11 = pTVar16->ArrayNum;
                pFVar25 = (pTVar16->AllocatorInstance).Data;
                pFVar30 = pFVar25 + (longlong)iVar11 * 0x10;
                while( true ) {
                  if (pTVar16->ArrayNum != iVar11) {
                    local_res20[0] = 0;
                    `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                              (local_res20);
                  }
                  if (pFVar25 == pFVar30) break;
                  local_70 = *(undefined8 *)pFVar25;
                  uStack_68 = *(undefined8 *)(pFVar25 + 8);
                  uVar14 = CityHash64((char *)&local_70,0x10);
                  if (*piVar21 == *(int *)&(this->GuidToInstanceMap).field_0x34) {
LAB_14e1a927e:
                    pFVar25 = pFVar25 + 0x10;
                  }
                  else {
                    puVar2 = *(undefined1 **)&(this->GuidToInstanceMap).field_0x40;
                    puVar22 = &(this->GuidToInstanceMap).field_0x38;
                    if (puVar2 != (undefined1 *)0x0) {
                      puVar22 = puVar2;
                    }
                    iVar13 = *(int *)(puVar22 +
                                     ((ulonglong)(*(int *)&(this->GuidToInstanceMap).field_0x48 - 1)
                                     & uVar14 & 0xffffffff) * 4);
                    if (iVar13 == -1) goto LAB_14e1a927e;
                    do {
                      piVar17 = (int *)((longlong)iVar13 * 0x20 +
                                       *(longlong *)&this->GuidToInstanceMap);
                      if (((uStack_68._4_4_ == piVar17[3] && (int)uStack_68 == piVar17[2]) &&
                          local_70._4_4_ == piVar17[1]) && (int)local_70 == *piVar17) {
                        pTVar19 = (TObjectPtr<UOptimusDeformerInstance>_u_0 *)(piVar17 + 4);
                        if (piVar17 == (int *)0x0) {
                          pTVar19 = (TObjectPtr<UOptimusDeformerInstance>_u_0 *)0x0;
                        }
                        if (pTVar19 != (TObjectPtr<UOptimusDeformerInstance>_u_0 *)0x0) {
                          local_c0 = *pTVar19;
                          if (((local_f8.Data <= &local_c0) &&
                              (&local_c0 <
                               (TObjectPtr<UOptimusDeformerInstance>_u_0 *)
                               (local_f8.Data + (longlong)local_f0._4_4_ * 8))) &&
                             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar7)) {
                            pcVar4 = (code *)swi(3);
                            (*pcVar4)();
                            return;
                          }
                          iVar13 = (int)local_f0;
                          if ((int)local_f0 == local_f0._4_4_) {
                            iVar13 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x808,&local_f8,(int *)((longlong)&local_f0 + 4));
                          }
                          local_f0 = CONCAT44(local_f0._4_4_,iVar13 + 1);
                          *(TObjectPtr<UOptimusDeformerInstance>_u_0 *)
                           (local_f8.Data + (longlong)iVar13 * 8) = local_c0;
                        }
                        goto LAB_14e1a927e;
                      }
                      iVar13 = piVar17[6];
                    } while (iVar13 != -1);
                    pFVar25 = pFVar25 + 0x10;
                  }
                }
                uVar18 = local_d8._8_8_ & 0xffffffff;
                FVar28.Data = local_a8 + 4;
                uVar23 = (ulonglong)local_b0;
              }
              goto LAB_14e1a92b3;
            }
            uVar9 = 0;
            if ((int)(local_d8.ArrayNum - 1U) < local_d8.ArrayNum) {
              uVar9 = ~(local_d8.ArrayNum - 1U) >> 0x1f;
            }
            if (uVar9 == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            pTVar16 = TMapBase<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindChecked(pTVar27,*(int *)(local_d8.AllocatorInstance.Data +
                                                    (longlong)(int)(local_d8.ArrayNum - 1) * 4));
            uVar29 = pTVar16->ArrayNum - 1;
            uVar9 = 0;
            if ((int)uVar29 < pTVar16->ArrayNum) {
              uVar9 = ~uVar29 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar25 = (pTVar16->AllocatorInstance).Data + (longlong)pTVar16->ArrayNum * 0x10 + -0x10
            ;
            local_80 = *(undefined8 *)pFVar25;
            uStack_78 = *(undefined8 *)(pFVar25 + 8);
            uVar14 = CityHash64((char *)&local_80,0x10);
            if (*piVar21 == *(int *)&(this->GuidToInstanceMap).field_0x34) goto LAB_14e1a92b3;
            puVar2 = *(undefined1 **)&(this->GuidToInstanceMap).field_0x40;
            puVar22 = &(this->GuidToInstanceMap).field_0x38;
            if (puVar2 != (undefined1 *)0x0) {
              puVar22 = puVar2;
            }
            iVar11 = *(int *)(puVar22 +
                             ((ulonglong)(*(int *)&(this->GuidToInstanceMap).field_0x48 - 1) &
                             uVar14 & 0xffffffff) * 4);
            if (iVar11 == -1) goto LAB_14e1a92b3;
            goto LAB_14e1a8fa0;
          }
          break;
        }
        uVar10 = *(undefined4 *)(pEVar15 + 0x58);
      } while (uVar10 != 0xffffffff);
    }
  }
  if (EVar1 == OverrideDefaultDeformer) {
    local_b8 = (this->DefaultInstance).field0_0x0;
    iVar11 = (int)uVar23;
    if ((local_f8.Data <= &local_b8) &&
       (&local_b8 <
        (TObjectPtr<UOptimusDeformerInstance>_u_0 *)(local_f8.Data + (longlong)local_f0._4_4_ * 8)))
    {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (int)local_f0;
    }
    if (iVar11 == local_f0._4_4_) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    local_f0 = CONCAT44(local_f0._4_4_,iVar11 + 1);
    *(TObjectPtr<UOptimusDeformerInstance>_u_0 *)(local_f8.Data + (longlong)iVar11 * 8) = local_b8;
    goto LAB_14e1a8d15;
  }
  goto LAB_14e1a8d1a;
  while (iVar11 = piVar17[6], iVar11 != -1) {
LAB_14e1a8fa0:
    piVar17 = (int *)((longlong)iVar11 * 0x20 + *(longlong *)&this->GuidToInstanceMap);
    if (((uStack_78._4_4_ == piVar17[3] && (int)uStack_78 == piVar17[2]) &&
        local_80._4_4_ == piVar17[1]) && (int)local_80 == *piVar17) {
      pTVar19 = (TObjectPtr<UOptimusDeformerInstance>_u_0 *)(piVar17 + 4);
      if (piVar17 == (int *)0x0) {
        pTVar19 = (TObjectPtr<UOptimusDeformerInstance>_u_0 *)0x0;
      }
      if (pTVar19 != (TObjectPtr<UOptimusDeformerInstance>_u_0 *)0x0) {
        local_c8 = *pTVar19;
        if (((local_f8.Data <= &local_c8) &&
            (&local_c8 <
             (TObjectPtr<UOptimusDeformerInstance>_u_0 *)
             (local_f8.Data + (longlong)local_f0._4_4_ * 8))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = (int)local_f0;
        if ((int)local_f0 == local_f0._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_f8,(int *)((longlong)&local_f0 + 4));
        }
        local_f0 = CONCAT44(local_f0._4_4_,iVar11 + 1);
        *(TObjectPtr<UOptimusDeformerInstance>_u_0 *)(local_f8.Data + (longlong)iVar11 * 8) =
             local_c8;
      }
      break;
    }
  }
LAB_14e1a92b3:
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
LAB_14e1a8d15:
  uVar23 = local_f0 & 0xffffffff;
LAB_14e1a8d1a:
  pFVar6 = local_res10;
  local_98 = pEVar32 + 1;
  if (local_98 == &DAT_152e21c8f) {
    bVar31 = 0;
    uVar9 = 0;
    local_98 = &DAT_152e21c8f;
    this_00 = &this->ExecutionQueueMap;
    if (0 < (int)uVar23) {
      lVar26 = 0;
      uVar29 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar9 < (int)uVar23) {
          uVar12 = ~uVar9 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar3 = *(longlong **)(local_f8.Data + lVar26);
        *(byte *)((longlong)plVar3 + 0x2c) = bVar31;
        bVar8 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
        bVar31 = bVar31 | bVar8;
        lVar5 = plVar3[9];
        *(uint *)(plVar3 + 5) = uVar29;
        (**(code **)(*plVar3 + 0x2c0))(plVar3,pFVar6);
        uVar23 = local_f0 & 0xffffffff;
        uVar9 = uVar9 + 1;
        lVar26 = lVar26 + 8;
        this_00 = local_58;
        uVar29 = (uint)(byte)((char)uVar29 + (char)lVar5);
      } while ((int)uVar9 < (int)local_f0);
    }
    TSet<TTuple<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
    ::Reset(this_00);
    if ((TObjectPtr<UOptimusDeformerInstance>_u_0 *)local_f8.Data !=
        (TObjectPtr<UOptimusDeformerInstance>_u_0 *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    return;
  }
  goto LAB_14e1a8c03;
}

// GetDeformerInstance @ 14e1c37c0

UOptimusDeformerInstance * __thiscall
UOptimusDeformerDynamicInstanceManager::GetDeformerInstance
          (UOptimusDeformerDynamicInstanceManager *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UOptimusDeformerInstance>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UOptimusDeformerInstance>,0>,FDefaultSetAllocator>
                      *)&this->GuidToInstanceMap,(uint)uVar2,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->GuidToInstanceMap).field_0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      return (UOptimusDeformerInstance *)*puVar4;
    }
  }
  return (UOptimusDeformerInstance *)0x0;
}

// GetInstanceForSourceDeformer @ 14e1c8cd0

UMeshDeformerInstance * __thiscall
UOptimusDeformerDynamicInstanceManager::GetInstanceForSourceDeformer
          (UOptimusDeformerDynamicInstanceManager *this)

{
  return (UMeshDeformerInstance *)(this->DefaultInstance).field0_0x0.DebugPtr;
}

// GetOutputBuffers @ 14e1cbc10

EMeshDeformerOutputBuffer __thiscall
UOptimusDeformerDynamicInstanceManager::GetOutputBuffers
          (UOptimusDeformerDynamicInstanceManager *this)

{
  return SkinnedMeshVertexColor|SkinnedMeshTangents|SkinnedMeshPosition;
}

// GetPrivateStaticClass @ 14e1d5830

UClass * __cdecl UOptimusDeformerDynamicInstanceManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDeformerDynamicInstanceManager.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDeformerDynamicInstanceManager",
               &Z_Registration_Info_UClass_UOptimusDeformerDynamicInstanceManager.InnerSingleton,
               StaticRegisterNativesUOptimusDeformerDynamicInstanceManager,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusDeformerDynamicInstanceManager>,
               InternalVTableHelperCtorCaller<UOptimusDeformerDynamicInstanceManager>,local_res8,
               UMeshDeformerInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDeformerDynamicInstanceManager.InnerSingleton;
}

// OnObjectBeginDestroy @ 14e1f5810

void __thiscall
UOptimusDeformerDynamicInstanceManager::OnObjectBeginDestroy
          (UOptimusDeformerDynamicInstanceManager *this,IMeshDeformerProducer *param_1)

{
  void *_Src;
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  uint *puVar5;
  FWeakObjectPtr FVar6;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  longlong lVar7;
  FWeakObjectPtr FVar8;
  undefined1 *puVar9;
  uint *puVar10;
  int iVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FGuid local_48;
  
  FVar6.ObjectIndex = 0;
  FVar6.ObjectSerialNumber = 0;
  local_res10 = (FWeakObjectPtr)param_1;
  if ((param_1 == (IMeshDeformerProducer *)0x0) ||
     (local_res18 = (FWeakObjectPtr)(**(code **)((longlong)*param_1 + 8))(param_1),
     local_res18 == (FWeakObjectPtr)0x0)) {
    local_res18 = FVar6;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (FWeakObjectPtr)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (FWeakObjectPtr)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  local_res18 = local_res8;
  iVar2 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->ProducerToGuidsMap,
                     local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                     (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res18);
  if (iVar2 != -1) {
    lVar7 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->ProducerToGuidsMap).field_0x0;
    FVar8 = (FWeakObjectPtr)(lVar7 + 8);
    if (lVar7 == 0) {
      FVar8 = FVar6;
    }
    if (FVar8 != (FWeakObjectPtr)0x0) {
      local_50 = *(int *)((longlong)FVar8 + 8);
      lVar7 = (longlong)local_50;
      _Src = *(void **)FVar8;
      local_58.Data = (FScriptContainerElement *)0x0;
      if (local_50 == 0) {
        local_4c = 0;
        iVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,local_50,0,&local_58,local_50,&local_4c);
        memcpy(local_58.Data,_Src,lVar7 << 4);
        iVar2 = local_50;
      }
      pFVar13 = local_58.Data + (longlong)iVar2 * 0x10;
      FVar12.Data = local_58.Data;
      iVar11 = iVar2;
      while( true ) {
        if (iVar11 != iVar2) {
          `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res8);
        }
        param_1 = (IMeshDeformerProducer *)local_res10;
        if (FVar12.Data == pFVar13) break;
        local_48._0_8_ = *(undefined8 *)FVar12.Data;
        local_48._8_8_ = *(undefined8 *)(FVar12.Data + 8);
        uVar4 = CityHash64((char *)&local_48,0x10);
        if (*(int *)&(this->GuidToInstanceMap).field_0x8 !=
            *(int *)&(this->GuidToInstanceMap).field_0x34) {
          puVar1 = *(undefined1 **)&(this->GuidToInstanceMap).field_0x40;
          puVar9 = &(this->GuidToInstanceMap).field_0x38;
          if (puVar1 != (undefined1 *)0x0) {
            puVar9 = puVar1;
          }
          uVar3 = *(uint *)(puVar9 + ((ulonglong)(*(int *)&(this->GuidToInstanceMap).field_0x48 - 1)
                                     & uVar4 & 0xffffffff) * 4);
          if (uVar3 != 0xffffffff) {
            do {
              puVar10 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&this->GuidToInstanceMap
                                );
              if (((local_48.D == puVar10[3] && local_48.C == puVar10[2]) &&
                  local_48.B == puVar10[1]) && local_48.A == *puVar10) {
                puVar5 = puVar10 + 4;
                if (puVar10 == (uint *)0x0) {
                  puVar5 = (uint *)0x0;
                }
                if ((puVar5 != (uint *)0x0) && (*(longlong **)puVar5 != (longlong *)0x0)) {
                  (**(code **)(**(longlong **)puVar5 + 0x2b8))();
                }
                break;
              }
              uVar3 = puVar10[6];
            } while (uVar3 != 0xffffffff);
          }
        }
        if (*(int *)&(this->GuidToInstanceMap).field_0x8 !=
            *(int *)&(this->GuidToInstanceMap).field_0x34) {
          uVar4 = CityHash64((char *)&local_48,0x10);
          TSet<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UOptimusDeformerInstance>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UOptimusDeformerInstance>,0>,FDefaultSetAllocator>
                               *)&this->GuidToInstanceMap,(uint)uVar4,&local_48);
        }
        FVar12.Data = FVar12.Data + 0x10;
        iVar11 = local_50;
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
    }
  }
  FVar8.ObjectIndex = 0;
  FVar8.ObjectSerialNumber = 0;
  if (((FWeakObjectPtr)param_1 == (FWeakObjectPtr)0x0) ||
     (FVar6 = (FWeakObjectPtr)(**(code **)((longlong)*param_1 + 8))(param_1),
     FVar6 == (FWeakObjectPtr)0x0)) {
    FVar6 = FVar8;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar6);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res8 = FVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar6);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
  local_res8 = local_res10;
  if (*(int *)&(this->ProducerToGuidsMap).field_0x8 !=
      *(int *)&(this->ProducerToGuidsMap).field_0x34) {
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
              ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&this->ProducerToGuidsMap,local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex
               ,(TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res8);
  }
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*param_1 + 0x10))(param_1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  return;
}

// ReleaseResources @ 14e211470

void __thiscall
UOptimusDeformerDynamicInstanceManager::ReleaseResources
          (UOptimusDeformerDynamicInstanceManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  (**(code **)(((this->DefaultInstance).field0_0x0.DebugPtr)->_padding_ + 0x2b8))();
  iVar11 = 0;
  puVar1 = &(this->GuidToInstanceMap).field_0x10;
  iVar3 = *(int *)&(this->GuidToInstanceMap).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->GuidToInstanceMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e21152d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14e21152d:
  uVar10 = *(uint *)&(this->GuidToInstanceMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->GuidToInstanceMap).field_0x8 -
                       *(int *)&(this->GuidToInstanceMap).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->GuidToInstanceMap).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->GuidToInstanceMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e211630;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14e211630:
  while( true ) {
    if (*(int *)&(this->GuidToInstanceMap).field_0x8 - *(int *)&(this->GuidToInstanceMap).field_0x34
        != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(**(longlong **)
                   ((longlong)TStack_50.CurrentBitIndex * 0x20 + 0x10 +
                   *(longlong *)&this->GuidToInstanceMap) + 0x2b8))();
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// StaticRegisterNativesUOptimusDeformerDynamicInstanceManager @ 14e225930

void __cdecl
UOptimusDeformerDynamicInstanceManager::StaticRegisterNativesUOptimusDeformerDynamicInstanceManager
          (void)

{
  return;
}

