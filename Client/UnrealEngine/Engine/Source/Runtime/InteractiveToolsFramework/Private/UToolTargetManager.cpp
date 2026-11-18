// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 21

// StaticClass @ 1496ccdb0

UClass * __cdecl UToolTargetManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolTargetManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ToolTargetManager",
               &Z_Registration_Info_UClass_UToolTargetManager.InnerSingleton,
               StaticRegisterNativesUToolTargetManager,0x70,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UToolTargetManager>,
               InternalVTableHelperCtorCaller<UToolTargetManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolTargetManager.InnerSingleton;
}

// UToolTargetManager @ 1496d3eb0

UToolTargetManager * __thiscall
UToolTargetManager::UToolTargetManager(UToolTargetManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsActive = false;
  this->_padding_ = (longlong)&___7UToolTargetManager__6B_;
  (this->Factories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Factories).ArrayNum = 0;
  (this->Factories).ArrayMax = 0;
  *(undefined8 *)&this->InputFilterFunction = 0;
  *(undefined8 *)&(this->InputFilterFunction).field_0x28 = 0;
  return this;
}

// ~UToolTargetManager @ 1496d4ba0

void __thiscall UToolTargetManager::~UToolTargetManager(UToolTargetManager *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UToolTargetManager__6B_;
  if (*(longlong *)&this->InputFilterFunction != 0) {
    plVar1 = *(longlong **)&(this->InputFilterFunction).field_0x28;
    plVar3 = (longlong *)&(this->InputFilterFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar2 = (this->Factories).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddTargetFactory @ 1496d6de0

void __thiscall
UToolTargetManager::AddTargetFactory(UToolTargetManager *this,UToolTargetFactory *param_1)

{
  TArray<TObjectPtr<UToolTargetFactory>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  UToolTargetFactory *local_18 [2];
  
  pTVar1 = &this->Factories;
  pFVar7 = (this->Factories).AllocatorInstance.Data;
  pFVar3 = pFVar7 + (longlong)(this->Factories).ArrayNum * 8;
  if (pFVar7 != pFVar3) {
    do {
      if (*(longlong *)(*(longlong *)pFVar7 + 0x10) == *(longlong *)&param_1->field_0x10) {
        return;
      }
      pFVar7 = pFVar7 + 8;
    } while (pFVar7 != pFVar3);
  }
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UToolTargetFactory *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Factories).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->Factories).ArrayNum;
  piVar2 = &(this->Factories).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Factories).ArrayNum = iVar6 + 1;
  *(UToolTargetFactory **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UToolTargetFactory *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// BuildAllSelectedTargetable @ 1496d7710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TObjectPtr<UToolTarget>,TSizedDefaultAllocator<32>_> * __thiscall
UToolTargetManager::BuildAllSelectedTargetable
          (UToolTargetManager *this,
          TArray<TObjectPtr<UToolTarget>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FToolBuilderState *param_1,FToolTargetTypeRequirements *param_2)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  TArray<TObjectPtr<UToolTarget>,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined ***pppuVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_138 [32];
  <lambda_2> local_108;
  undefined1 local_107 [7];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_100;
  TArray<bool,TSizedDefaultAllocator<32>_> local_f0;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_e0;
  FToolTargetTypeRequirements *local_d0;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_c8;
  void *local_b8 [2];
  code *local_a8 [2];
  FFunctionStorage local_98;
  code *local_78 [2];
  undefined **local_68;
  UToolTargetManager *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UToolTargetManager::BuildAllSelectedTargetable'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UToolTargetManager::BuildAllSelectedTargetable'::__l2::<lambda_1>,bool,UActorComponent_*>
                ::Call;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  local_50 = (undefined ***)0x0;
  local_d0 = param_2;
  local_60 = this;
  if ((param_1->SelectedComponents).ArrayNum < 1) {
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    Algo::
    TransformAccumulate<TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>,TArray<AActor_*,TSizedDefaultAllocator<32>_>,_ToolBuilderUtil::FindAllComponents_::__l7::<lambda_1>,_ToolBuilderUtil::FindAllComponents_::__l7::<lambda_2>_>
              (&local_e0,&param_1->SelectedActors,
               (TFunction<bool___cdecl(UActorComponent_*)> *)local_78,&local_c8,local_108);
  }
  else {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UToolTargetManager::BuildAllSelectedTargetable'::__l2::<lambda_1>,bool,UActorComponent_*>
                  ::Call;
    local_98.HeapAllocation = (void *)0x0;
    UE::Core::Private::Function::
    TFunction_OwnedObject<`UToolTargetManager::BuildAllSelectedTargetable'::__l2::<lambda_1>,0,0>::
    CloneToEmptyStorage(&local_68,&local_98);
    TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>::
    FilterByPredicate<TFunction<bool___cdecl(UActorComponent_*)>_>
              (&param_1->SelectedComponents,&local_e0,
               (TFunction<bool___cdecl(UActorComponent_*)> *)local_a8);
  }
  if (local_e0.ArrayNum != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_e0.ArrayNum,&local_100.AllocatorInstance,&local_100.ArrayNum,
                       &local_100.ArrayMax);
    RelocateConstructItems<UObject_*,UActorComponent_*,int>
              (local_100.AllocatorInstance.Data + (longlong)iVar5 * 8,
               (UActorComponent **)local_e0.AllocatorInstance.Data,local_e0.ArrayNum);
    local_e0.ArrayNum = 0;
  }
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  if (local_78[0] != (code *)0x0) {
    pppuVar9 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar9 = local_50;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  iVar5 = (this->Factories).ArrayNum;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  pFVar10 = (this->Factories).AllocatorInstance.Data;
  pFVar1 = pFVar10 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->Factories).ArrayNum != iVar5) {
      local_107[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UToolTargetFactory>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_107);
    }
    if (pFVar10 == pFVar1) break;
    pUVar2 = *(UObject **)pFVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    iVar6 = (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,&local_100,param_2,&local_f0);
    if (0 < iVar6) {
      pTVar8 = (TArray<TObjectPtr<UToolTarget>,TSizedDefaultAllocator<32>_> *)
               (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,local_b8,&local_100,param_2);
      if ((__return_storage_ptr__ == pTVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<TObjectPtr<UToolTarget>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      iVar6 = pTVar8->ArrayNum;
      if (iVar6 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar6,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
        RelocateConstructItems<TObjectPtr<UToolTarget>,UToolTarget_*,int>
                  ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8,
                   (UToolTarget **)(pTVar8->AllocatorInstance).Data,iVar6);
        pTVar8->ArrayNum = 0;
      }
      if (local_b8[0] != (void *)0x0) {
        FMemory::Free(local_b8[0]);
      }
      iVar6 = ToolTargetManagerLocals::RemoveByFlags(&local_100,&local_f0);
      if (iVar6 < 1) {
        local_108 = (<lambda_2>)0x0;
        `UToolTargetManager::BuildAllSelectedTargetable'::__l9::<lambda_2>::operator()(&local_108);
      }
      param_2 = local_d0;
      if (local_100.ArrayNum == 0) break;
    }
    pFVar10 = pFVar10 + 8;
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildFirstSelectedTargetable @ 1496d79f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UToolTarget * __thiscall
UToolTargetManager::BuildFirstSelectedTargetable
          (UToolTargetManager *this,FToolBuilderState *param_1,FToolTargetTypeRequirements *param_2)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  int iVar3;
  int iVar4;
  UToolTarget *pUVar5;
  undefined ***pppuVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_128 [32];
  <lambda_2> local_f8 [8];
  ForAnyElementType local_f0;
  int local_e8 [2];
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_e0;
  void *local_d0;
  undefined8 local_c8;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_c0;
  code *local_a8 [2];
  FFunctionStorage local_98;
  code *local_78 [2];
  undefined **local_68;
  UToolTargetManager *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pUVar5 = (UToolTarget *)0x0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UToolTargetManager::BuildFirstSelectedTargetable'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UToolTargetManager::BuildFirstSelectedTargetable'::__l2::<lambda_1>,bool,UActorComponent_*>
                ::Call;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_50 = (undefined ***)0x0;
  local_60 = this;
  if ((param_1->SelectedComponents).ArrayNum < 1) {
    local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0;
    Algo::
    TransformAccumulate<TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>,TArray<AActor_*,TSizedDefaultAllocator<32>_>,_ToolBuilderUtil::FindAllComponents_::__l7::<lambda_1>,_ToolBuilderUtil::FindAllComponents_::__l7::<lambda_2>_>
              (&local_e0,&param_1->SelectedActors,
               (TFunction<bool___cdecl(UActorComponent_*)> *)local_78,&local_c0,local_f8[0]);
  }
  else {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UToolTargetManager::BuildFirstSelectedTargetable'::__l2::<lambda_1>,bool,UActorComponent_*>
                  ::Call;
    local_98.HeapAllocation = (void *)0x0;
    UE::Core::Private::Function::
    TFunction_OwnedObject<`UToolTargetManager::BuildFirstSelectedTargetable'::__l2::<lambda_1>,0,0>
    ::CloneToEmptyStorage(&local_68,&local_98);
    TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>::
    FilterByPredicate<TFunction<bool___cdecl(UActorComponent_*)>_>
              (&param_1->SelectedComponents,&local_e0,
               (TFunction<bool___cdecl(UActorComponent_*)> *)local_a8);
  }
  if (local_e0.ArrayNum != 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_e0.ArrayNum,&local_f0,local_e8,local_e8 + 1);
    RelocateConstructItems<UObject_*,UActorComponent_*,int>
              (local_f0.Data + (longlong)iVar3 * 8,
               (UActorComponent **)local_e0.AllocatorInstance.Data,local_e0.ArrayNum);
    local_e0.ArrayNum = 0;
  }
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  if (local_78[0] != (code *)0x0) {
    pppuVar6 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar6 = local_50;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  pFVar7 = (this->Factories).AllocatorInstance.Data;
  iVar3 = (this->Factories).ArrayNum;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  pFVar1 = pFVar7 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Factories).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UToolTargetFactory>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_f8);
    }
    if (pFVar7 == pFVar1) goto LAB_1496d7b9b;
    pUVar2 = *(UObject **)pFVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    iVar4 = (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,&local_f0,param_2,&local_d0);
    if (0 < iVar4) break;
    pFVar7 = pFVar7 + 8;
  }
  pUVar5 = (UToolTarget *)
           (**(code **)(*(longlong *)pUVar2 + 0x2d0))(pUVar2,&local_f0,param_2,&local_d0);
LAB_1496d7b9b:
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  return pUVar5;
}

// BuildTarget @ 1496d8150

UToolTarget * __thiscall
UToolTargetManager::BuildTarget
          (UToolTargetManager *this,UObject *param_1,FToolTargetTypeRequirements *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  UToolTarget *pUVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  UObject *local_res8;
  
  if (*(void **)&this->InputFilterFunction != (void *)0x0) {
    local_res8 = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->InputFilterFunction);
    plVar3 = *(longlong **)&(this->InputFilterFunction).field_0x28;
    pcVar4 = *(code **)&this->InputFilterFunction;
    plVar8 = (longlong *)&(this->InputFilterFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar8 = plVar3;
    }
    uVar6 = (**(code **)(*plVar8 + 8))();
    cVar5 = (*pcVar4)(uVar6,&local_res8);
    if (cVar5 == '\0') {
      return (UToolTarget *)0x0;
    }
  }
  pFVar9 = (this->Factories).AllocatorInstance.Data;
  iVar2 = (this->Factories).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Factories).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UToolTargetFactory>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (pFVar9 == pFVar1) break;
    plVar3 = *(longlong **)pFVar9;
    cVar5 = (**(code **)(*plVar3 + 0x2b0))(plVar3,param_1,param_2);
    if ((cVar5 != '\0') &&
       (pUVar7 = (UToolTarget *)(**(code **)(*plVar3 + 0x2b8))(plVar3,param_1,param_2),
       pUVar7 != (UToolTarget *)0x0)) {
      return pUVar7;
    }
    pFVar9 = pFVar9 + 8;
  }
  return (UToolTarget *)0x0;
}

// CanBuildTarget @ 1496d8ad0

bool __thiscall
UToolTargetManager::CanBuildTarget
          (UToolTargetManager *this,UObject *param_1,FToolTargetTypeRequirements *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  UObject *local_res8;
  
  if (*(void **)&this->InputFilterFunction != (void *)0x0) {
    local_res8 = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->InputFilterFunction);
    plVar3 = *(longlong **)&(this->InputFilterFunction).field_0x28;
    pcVar4 = *(code **)&this->InputFilterFunction;
    plVar7 = (longlong *)&(this->InputFilterFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar7 = plVar3;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar5 = (*pcVar4)(uVar6,&local_res8);
    if (cVar5 == '\0') {
      return false;
    }
  }
  pFVar8 = (this->Factories).AllocatorInstance.Data;
  iVar2 = (this->Factories).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Factories).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UToolTargetFactory>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar8 == pFVar1) break;
    cVar5 = (**(code **)(**(longlong **)pFVar8 + 0x2b0))(*(longlong **)pFVar8,param_1,param_2);
    if (cVar5 != '\0') {
      return true;
    }
    pFVar8 = pFVar8 + 8;
  }
  return false;
}

// CountSelectedAndTargetable @ 1496d9560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UToolTargetManager::CountSelectedAndTargetable
          (UToolTargetManager *this,FToolBuilderState *param_1,FToolTargetTypeRequirements *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x2e8))();
  return iVar1;
}

// CountSelectedAndTargetableWithPredicate @ 1496d95a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UToolTargetManager::CountSelectedAndTargetableWithPredicate
          (UToolTargetManager *this,FToolBuilderState *param_1,FToolTargetTypeRequirements *param_2,
          TFunctionRef<bool___cdecl(UActorComponent_&)> *param_3)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  int iVar3;
  int iVar4;
  undefined ***pppuVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_128 [32];
  <lambda_2> local_f8 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_f0;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_e0;
  TArray<bool,TSizedDefaultAllocator<32>_> local_d0;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_c0;
  code *local_a8 [2];
  FFunctionStorage local_98;
  code *local_78 [2];
  undefined **local_68;
  UToolTargetManager *local_60;
  TFunctionRef<bool___cdecl(UActorComponent_&)> *local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  iVar6 = 0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UToolTargetManager::CountSelectedAndTargetableWithPredicate'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UToolTargetManager::CountSelectedAndTargetableWithPredicate'::__l2::<lambda_1>,bool,UActorComponent_*>
                ::Call;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_50 = (undefined ***)0x0;
  local_60 = this;
  local_58 = param_3;
  if ((param_1->SelectedComponents).ArrayNum < 1) {
    local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0;
    Algo::
    TransformAccumulate<TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>,TArray<AActor_*,TSizedDefaultAllocator<32>_>,_ToolBuilderUtil::FindAllComponents_::__l7::<lambda_1>,_ToolBuilderUtil::FindAllComponents_::__l7::<lambda_2>_>
              (&local_e0,&param_1->SelectedActors,
               (TFunction<bool___cdecl(UActorComponent_*)> *)local_78,&local_c0,local_f8[0]);
  }
  else {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UToolTargetManager::CountSelectedAndTargetableWithPredicate'::__l2::<lambda_1>,bool,UActorComponent_*>
                  ::Call;
    local_98.HeapAllocation = (void *)0x0;
    UE::Core::Private::Function::
    TFunction_OwnedObject<`UToolTargetManager::CountSelectedAndTargetableWithPredicate'::__l2::<lambda_1>,0,0>
    ::CloneToEmptyStorage(&local_68,&local_98);
    TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>::
    FilterByPredicate<TFunction<bool___cdecl(UActorComponent_*)>_>
              (&param_1->SelectedComponents,&local_e0,
               (TFunction<bool___cdecl(UActorComponent_*)> *)local_a8);
  }
  if (local_e0.ArrayNum != 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_e0.ArrayNum,&local_f0.AllocatorInstance,&local_f0.ArrayNum,
                       &local_f0.ArrayMax);
    RelocateConstructItems<UObject_*,UActorComponent_*,int>
              (local_f0.AllocatorInstance.Data + (longlong)iVar3 * 8,
               (UActorComponent **)local_e0.AllocatorInstance.Data,local_e0.ArrayNum);
    local_e0.ArrayNum = 0;
  }
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  if (local_78[0] != (code *)0x0) {
    pppuVar5 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar5 = local_50;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  pFVar7 = (this->Factories).AllocatorInstance.Data;
  iVar3 = (this->Factories).ArrayNum;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  pFVar1 = pFVar7 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Factories).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UToolTargetFactory>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_f8);
    }
    if (pFVar7 == pFVar1) break;
    pUVar2 = *(UObject **)pFVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    iVar4 = (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,&local_f0,param_2,&local_d0);
    if (0 < iVar4) {
      iVar6 = iVar6 + iVar4;
      iVar4 = ToolTargetManagerLocals::RemoveByFlags(&local_f0,&local_d0);
      if (iVar4 < 1) {
        `UToolTargetManager::CountSelectedAndTargetableWithPredicate'::__l9::<lambda_2>::operator()
                  (local_f8);
      }
      if (local_f0.ArrayNum == 0) break;
    }
    pFVar7 = pFVar7 + 8;
  }
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return iVar6;
}

// EnumerateSelectedAndTargetableComponents @ 1496db9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UToolTargetManager::EnumerateSelectedAndTargetableComponents
          (UToolTargetManager *this,FToolBuilderState *param_1,FToolTargetTypeRequirements *param_2,
          TFunctionRef<void___cdecl(UActorComponent_*)> *param_3)

{
  UObject *pUVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined ***pppuVar8;
  uint uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_148 [32];
  <lambda_2> local_118;
  undefined1 local_117 [7];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_110;
  TArray<bool,TSizedDefaultAllocator<32>_> local_100;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_f0;
  undefined8 local_e0;
  UToolTargetManager *local_d8;
  FToolTargetTypeRequirements *local_d0;
  FScriptContainerElement *local_c8;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_c0;
  code *local_a8 [2];
  FFunctionStorage local_98;
  code *local_78 [2];
  undefined **local_68;
  UToolTargetManager *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UToolTargetManager::EnumerateSelectedAndTargetableComponents'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UToolTargetManager::EnumerateSelectedAndTargetableComponents'::__l2::<lambda_1>,bool,UActorComponent_*>
                ::Call;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  local_50 = (undefined ***)0x0;
  local_d8 = this;
  local_d0 = param_2;
  local_60 = this;
  if ((param_1->SelectedComponents).ArrayNum < 1) {
    local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0;
    Algo::
    TransformAccumulate<TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>,TArray<AActor_*,TSizedDefaultAllocator<32>_>,_ToolBuilderUtil::FindAllComponents_::__l7::<lambda_1>,_ToolBuilderUtil::FindAllComponents_::__l7::<lambda_2>_>
              (&local_f0,&param_1->SelectedActors,
               (TFunction<bool___cdecl(UActorComponent_*)> *)local_78,&local_c0,local_118);
  }
  else {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UToolTargetManager::EnumerateSelectedAndTargetableComponents'::__l2::<lambda_1>,bool,UActorComponent_*>
                  ::Call;
    local_98.HeapAllocation = (void *)0x0;
    UE::Core::Private::Function::
    TFunction_OwnedObject<`UToolTargetManager::EnumerateSelectedAndTargetableComponents'::__l2::<lambda_1>,0,0>
    ::CloneToEmptyStorage(&local_68,&local_98);
    TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>::
    FilterByPredicate<TFunction<bool___cdecl(UActorComponent_*)>_>
              (&param_1->SelectedComponents,&local_f0,
               (TFunction<bool___cdecl(UActorComponent_*)> *)local_a8);
  }
  if (local_f0.ArrayNum != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_f0.ArrayNum,&local_110.AllocatorInstance,&local_110.ArrayNum,
                       &local_110.ArrayMax);
    RelocateConstructItems<UObject_*,UActorComponent_*,int>
              (local_110.AllocatorInstance.Data + (longlong)iVar5 * 8,
               (UActorComponent **)local_f0.AllocatorInstance.Data,local_f0.ArrayNum);
    local_f0.ArrayNum = 0;
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  if (local_78[0] != (code *)0x0) {
    pppuVar8 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar8 = local_50;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  pFVar11 = (this->Factories).AllocatorInstance.Data;
  iVar5 = (this->Factories).ArrayNum;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  local_c8 = pFVar11 + (longlong)iVar5 * 8;
  while( true ) {
    pFVar3 = local_c8;
    if ((this->Factories).ArrayNum != iVar5) {
      local_117[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UToolTargetFactory>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_117);
    }
    if (pFVar11 == pFVar3) break;
    pUVar1 = *(UObject **)pFVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    iVar6 = (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1,&local_110,param_2,&local_100);
    if (0 < iVar6) {
      uVar9 = 0;
      lVar10 = 0;
      if (0 < local_100.ArrayNum) {
        do {
          uVar7 = 0;
          if ((int)uVar9 < local_100.ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (local_100.AllocatorInstance.Data[lVar10] != (FScriptContainerElement)0x0) {
            if (((int)uVar9 < 0) || (local_110.ArrayNum <= (int)uVar9)) {
              bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<111720560454533258>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\ToolTargetManager.cpp"
                                 ,0x8a,"InputObjects.IsValidIndex(Index)");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            else {
              uVar7 = 0;
              if ((int)uVar9 < local_110.ArrayNum) {
                uVar7 = ~uVar9 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              local_e0 = *(undefined8 *)(local_110.AllocatorInstance.Data + lVar10 * 8);
              (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8);
            }
          }
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 1;
          param_2 = local_d0;
          this = local_d8;
        } while ((int)uVar9 < local_100.ArrayNum);
      }
      iVar6 = ToolTargetManagerLocals::RemoveByFlags(&local_110,&local_100);
      if (iVar6 < 1) {
        local_118 = (<lambda_2>)0x0;
        `UToolTargetManager::EnumerateSelectedAndTargetableComponents'::__l9::<lambda_2>::operator()
                  (&local_118);
      }
      if (local_110.ArrayNum == 0) break;
    }
    pFVar11 = pFVar11 + 8;
  }
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  return;
}

// FindFirstFactoryByPredicate @ 1496dc780

UToolTargetFactory * __thiscall
UToolTargetManager::FindFirstFactoryByPredicate
          (UToolTargetManager *this,TFunctionRef<bool___cdecl(UToolTargetFactory_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_res8;
  
  pFVar5 = (this->Factories).AllocatorInstance.Data;
  pcVar2 = *(code **)param_1;
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  pFVar1 = pFVar5 + (longlong)(this->Factories).ArrayNum * 8;
  while( true ) {
    if (pFVar5 == pFVar1) {
      return (UToolTargetFactory *)0x0;
    }
    local_res8 = *(undefined8 *)pFVar5;
    cVar4 = (*pcVar2)(uVar3,&local_res8);
    if (cVar4 != '\0') break;
    pFVar5 = pFVar5 + 8;
  }
  return *(UToolTargetFactory **)pFVar5;
}

// GetPrivateStaticClass @ 1496de0a0

UClass * __cdecl UToolTargetManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolTargetManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ToolTargetManager",
               &Z_Registration_Info_UClass_UToolTargetManager.InnerSingleton,
               StaticRegisterNativesUToolTargetManager,0x70,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UToolTargetManager>,
               InternalVTableHelperCtorCaller<UToolTargetManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolTargetManager.InnerSingleton;
}

// Initialize @ 1496df140

void __thiscall UToolTargetManager::Initialize(UToolTargetManager *this)

{
  this->bIsActive = true;
  return;
}

// RemoveTargetFactoriesByPredicate @ 1496e5020

void __thiscall
UToolTargetManager::RemoveTargetFactoriesByPredicate
          (UToolTargetManager *this,TFunctionRef<bool___cdecl(UToolTargetFactory_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined8 local_res18;
  FScriptContainerElement *local_res20;
  undefined8 local_48 [2];
  
  iVar5 = (this->Factories).ArrayNum;
  lVar3 = (longlong)iVar5;
  if (iVar5 != 0) {
    local_res20 = (this->Factories).AllocatorInstance.Data;
    iVar5 = 0;
    local_res18 = *(undefined8 *)local_res20;
    iVar8 = 0;
    cVar2 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res18);
    bVar9 = cVar2 == '\0';
    lVar4 = 0;
    do {
      pFVar1 = local_res20;
      local_res18 = CONCAT44(local_res18._4_4_,iVar5);
      iVar6 = iVar5 + 1;
      lVar4 = lVar4 + 1;
      iVar7 = iVar5;
      if (lVar4 < lVar3) {
        do {
          local_48[0] = *(undefined8 *)(pFVar1 + lVar4 * 8);
          cVar2 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_48);
          if (bVar9 != (cVar2 == '\0')) break;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
        } while (lVar4 < lVar3);
        iVar7 = (int)local_res18;
      }
      iVar5 = iVar6;
      if (bVar9 != false) {
        if (iVar8 != iVar7) {
          memmove(local_res20 + (longlong)iVar8 * 8,local_res20 + (longlong)iVar7 * 8,
                  (longlong)(iVar5 - iVar7) << 3);
        }
        iVar8 = iVar8 + (iVar5 - iVar7);
      }
      bVar9 = (bool)(bVar9 ^ 1);
    } while (lVar4 < lVar3);
    (this->Factories).ArrayNum = iVar8;
  }
  return;
}

// SetInputFilterFunction @ 1496e5ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UToolTargetManager::SetInputFilterFunction
          (UToolTargetManager *this,TFunction<bool___cdecl(UObject_const_*)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = *(longlong *)param_1;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_48);
  }
  lVar6 = *(longlong *)&this->InputFilterFunction;
  uVar7 = *(undefined8 *)&(this->InputFilterFunction).field_0x8;
  uVar1 = *(undefined4 *)&(this->InputFilterFunction).field_0x10;
  uVar2 = *(undefined4 *)&(this->InputFilterFunction).field_0x14;
  uVar3 = *(undefined4 *)&(this->InputFilterFunction).field_0x18;
  uVar4 = *(undefined4 *)&(this->InputFilterFunction).field_0x1c;
  uVar5 = *(undefined8 *)&(this->InputFilterFunction).field_0x20;
  plVar10 = *(longlong **)&(this->InputFilterFunction).field_0x28;
  *(longlong *)&this->InputFilterFunction = local_58;
  *(undefined8 *)&(this->InputFilterFunction).field_0x8 = uStack_50;
  *(undefined4 *)&(this->InputFilterFunction).field_0x10 = (undefined4)local_48;
  *(undefined4 *)&(this->InputFilterFunction).field_0x14 = local_48._4_4_;
  *(undefined4 *)&(this->InputFilterFunction).field_0x18 = uStack_40;
  *(undefined4 *)&(this->InputFilterFunction).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->InputFilterFunction).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->InputFilterFunction).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->InputFilterFunction).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->InputFilterFunction).field_0x2c = uStack_30._4_4_;
  local_48._0_4_ = uVar1;
  local_48._4_4_ = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar10;
  local_58 = lVar6;
  uStack_50 = uVar7;
  if (lVar6 != 0) {
    plVar9 = &local_48;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}

// Shutdown @ 1496e65d0

void __thiscall UToolTargetManager::Shutdown(UToolTargetManager *this)

{
  int *piVar1;
  
  piVar1 = &(this->Factories).ArrayMax;
  (this->Factories).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Factories).AllocatorInstance,0,piVar1);
    this->bIsActive = false;
    return;
  }
  this->bIsActive = false;
  return;
}

// StaticRegisterNativesUToolTargetManager @ 1496e67d0

void __cdecl UToolTargetManager::StaticRegisterNativesUToolTargetManager(void)

{
  return;
}

// operator() @ 1505442d0

bool __thiscall
`UToolTargetManager::BuildAllSelectedTargetable'::__l9::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<111720560454533348>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<111720560454533348>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150544310

bool __thiscall
`UToolTargetManager::CountSelectedAndTargetableWithPredicate'::__l9::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<111720560454533296>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<111720560454533296>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150544350

bool __thiscall
`UToolTargetManager::EnumerateSelectedAndTargetableComponents'::__l9::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<111720560454533264>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<111720560454533264>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

