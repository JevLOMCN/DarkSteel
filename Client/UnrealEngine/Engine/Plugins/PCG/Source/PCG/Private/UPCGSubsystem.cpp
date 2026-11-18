// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 87

// StaticClass @ 149f1b110

UClass * __cdecl UPCGSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSubsystem",
               &Z_Registration_Info_UClass_UPCGSubsystem.InnerSingleton,
               StaticRegisterNativesUPCGSubsystem,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSubsystem>,InternalVTableHelperCtorCaller<UPCGSubsystem>,
               local_res8,UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSubsystem.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 149f200f0

bool __cdecl
`UPCGSubsystem::ForAllOverlappingCells'::__l49::<lambda_3>::<lambda_invoker_cdecl>(void)

{
  return true;
}

// UPCGSubsystem @ 149f33610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSubsystem * __thiscall UPCGSubsystem::UPCGSubsystem(UPCGSubsystem *this,FVTableHelper *param_1)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = 0;
  this->PCGWorldActor = (APCGWorldActor *)0x0;
  this->RuntimeGenScheduler = (FPCGRuntimeGenScheduler *)0x0;
  this->bHasTickedOnce = false;
  (this->ActorAndComponentMapping).Ptr = (FPCGActorAndComponentMapping *)0x0;
  (this->BeginTickActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BeginTickActions).ArrayNum = 0;
  (this->BeginTickActions).ArrayMax = 0;
  this->_padding_ = (longlong)&___7UPCGSubsystem__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PCGWorldActorLock,4000);
  return this;
}

// UPCGSubsystem @ 149f33690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSubsystem * __thiscall UPCGSubsystem::UPCGSubsystem(UPCGSubsystem *this)

{
  FPCGActorAndComponentMapping *this_00;
  FPCGActorAndComponentMapping *pFVar1;
  
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  pFVar1 = (FPCGActorAndComponentMapping *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = (longlong)&___7UPCGSubsystem__6B_;
  this->_padding_ = 0;
  this->PCGWorldActor = (APCGWorldActor *)0x0;
  this->RuntimeGenScheduler = (FPCGRuntimeGenScheduler *)0x0;
  this->bHasTickedOnce = false;
  this_00 = ::operator_new(0x2e0);
  if (this_00 != (FPCGActorAndComponentMapping *)0x0) {
    pFVar1 = FPCGActorAndComponentMapping::FPCGActorAndComponentMapping(this_00,this);
  }
  (this->ActorAndComponentMapping).Ptr = pFVar1;
  (this->BeginTickActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BeginTickActions).ArrayNum = 0;
  (this->BeginTickActions).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PCGWorldActorLock,4000);
  return this;
}

// ~UPCGSubsystem @ 149f34d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGSubsystem::~UPCGSubsystem(UPCGSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = (longlong)&___7UPCGSubsystem__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PCGWorldActorLock);
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)(this->BeginTickActions).AllocatorInstance.Data,
             (this->BeginTickActions).ArrayNum);
  pFVar1 = (this->BeginTickActions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDefaultDelete<FPCGActorAndComponentMapping>::operator()
            ((TDefaultDelete<FPCGActorAndComponentMapping> *)&this->ActorAndComponentMapping,
             (this->ActorAndComponentMapping).Ptr);
  this->_padding_ = (longlong)&___7IPCGBaseSubsystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  return;
}

// operator() @ 149f368b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UPCGSubsystem::ForAllOverlappingComponentsInHierarchy'::__l2::<lambda_1>::operator()
          (void *this,UPCGComponent *param_1)

{
  undefined1 auStack_e8 [32];
  UPCGComponent *local_c8;
  TVector<double>_u_0 local_c0;
  double local_a8;
  double local_a0;
  double local_98;
  TBox<double> local_88;
  TBox<double> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  UPCGComponent::GetGridBounds(param_1,&local_50);
  UPCGComponent::GetGridBounds(*(UPCGComponent **)this,&local_88);
  UE::Math::TBox<double>::Overlap(&local_50,(TBox<double> *)&local_c0._s_0,&local_88);
  if (0.0 < (local_a0 - local_c0._s_0.Y) * (local_a8 - local_c0._s_0.X) *
            (local_98 - local_c0._s_0.Z)) {
    local_c8 = param_1;
    (*(code *)**(undefined8 **)((longlong)this + 8))
              ((*(undefined8 **)((longlong)this + 8))[1],&local_c8);
  }
  return;
}

// operator() @ 149f37440

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

ulong64 __thiscall
`UPCGSubsystem::ScheduleComponent'::__l29::<lambda_1>::operator()
          (void *this,UPCGComponent *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  EPCGHiGenGrid EVar4;
  int iVar5;
  ulong64 uVar6;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  uint *puVar9;
  ulong64 local_28;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_20;
  
  puVar1 = *(uint **)((longlong)this + 0x20);
  puVar9 = *(uint **)(puVar1 + 0xe);
  if (*(uint **)(puVar1 + 0xe) == (uint *)0x0) {
    puVar9 = puVar1;
  }
  puVar1 = puVar9 + (int)puVar1[0x10];
  while( true ) {
    if (puVar9 == puVar1) {
      uVar6 = UPCGComponent::CleanupLocal
                        (param_1,true,
                         *(TArray<unsigned___int64,TSizedDefaultAllocator<32>_> **)
                          ((longlong)this + 0x10));
      return uVar6;
    }
    if (*puVar9 == param_1->GenerationGridSize) break;
    puVar9 = puVar9 + 1;
  }
  if ((*(int *)((longlong)this + 8) != 0) &&
     (EVar4 = UPCGComponent::GetGenerationGrid(param_1),
     (*(EPCGHiGenGrid *)((longlong)this + 8) & EVar4) == Uninitialized)) {
    return 0xffffffffffffffff;
  }
  if (param_1->CurrentGenerationTask != 0xffffffffffffffff) {
    return param_1->CurrentGenerationTask;
  }
  UPCGComponent::SetPropertiesFromOriginal(param_1,*(UPCGComponent **)this);
  local_28 = 0xffffffffffffffff;
  if ((param_1->bGenerated != false) && (*(char *)(*(longlong *)this + 0x240) == '\0')) {
    local_28 = UPCGComponent::CleanupLocal
                         (param_1,true,
                          *(TArray<unsigned___int64,TSizedDefaultAllocator<32>_> **)
                           ((longlong)this + 0x10));
  }
  pTVar7 = *(TArray<unsigned___int64,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10);
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  if ((local_28 != 0xffffffffffffffff) || (param_2->ArrayNum != 0)) {
    uVar8 = param_2->ArrayNum + 1 + pTVar7->ArrayNum;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (0 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar8,&local_20.AllocatorInstance,0,&local_20.ArrayMax);
    }
    TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
    Append<unsigned___int64,TSizedDefaultAllocator<32>_>
              (&local_20,
               *(TArray<unsigned___int64,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10));
    if (local_28 != 0xffffffffffffffff) {
      if (((local_20.AllocatorInstance.Data <= (FScriptContainerElement *)&local_28) &&
          ((FScriptContainerElement *)&local_28 <
           local_20.AllocatorInstance.Data + (longlong)local_20.ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      iVar5 = local_20.ArrayNum;
      if (local_20.ArrayNum == local_20.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_20.AllocatorInstance,&local_20.ArrayMax);
      }
      local_20.ArrayNum = iVar5 + 1;
      *(ulong64 *)(local_20.AllocatorInstance.Data + (longlong)iVar5 * 8) = local_28;
    }
    if (param_2->ArrayNum != 0) {
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
      Append<unsigned___int64,TSizedDefaultAllocator<32>_>(&local_20,param_2);
    }
    pTVar7 = &local_20;
  }
  EVar4 = UPCGComponent::GetGenerationGrid(param_1);
  uVar6 = UPCGComponent::GenerateInternal
                    (param_1,*(bool *)((longlong)this + 0x18),EVar4,GenerateOnDemand,pTVar7);
  if (local_20.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return uVar6;
  }
  FMemory::Free(local_20.AllocatorInstance.Data);
  return uVar6;
}

// operator() @ 149f37970

ulong64 __thiscall
`UPCGSubsystem::ScheduleCleanup'::__l14::<lambda_1>::operator()
          (void *this,UPCGComponent *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  ulong64 uVar1;
  uint uVar2;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  uVar1 = param_1->CurrentCleanupTask;
  if (uVar1 == 0xffffffffffffffff) {
    pTVar3 = *(TArray<unsigned___int64,TSizedDefaultAllocator<32>_> **)((longlong)this + 8);
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    if (param_2->ArrayNum != 0) {
      uVar2 = pTVar3->ArrayNum + param_2->ArrayNum;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if (0 < (int)uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar2,&local_18.AllocatorInstance,0,&local_18.ArrayMax);
      }
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
      Append<unsigned___int64,TSizedDefaultAllocator<32>_>
                (&local_18,
                 *(TArray<unsigned___int64,TSizedDefaultAllocator<32>_> **)((longlong)this + 8));
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
      Append<unsigned___int64,TSizedDefaultAllocator<32>_>(&local_18,param_2);
      pTVar3 = &local_18;
    }
    uVar1 = UPCGComponent::CleanupLocal(param_1,*(bool *)this,pTVar3);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return uVar1;
}

// operator() @ 149f37f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall `UPCGSubsystem::ScheduleCleanup'::__l2::<lambda_2>::operator()(void *this)

{
  bool bVar1;
  UPCGComponent *this_00;
  
  this_00 = (UPCGComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0xc));
  if ((this_00 != (UPCGComponent *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
    UPCGComponent::PostCleanupGraph(this_00,*(bool *)((longlong)this + 8));
    if (*(char *)((longlong)this + 8) != '\0') {
      bVar1 = UPCGComponent::IsPartitioned(this_00);
      if (bVar1) {
        FPCGActorAndComponentMapping::DeleteMappingPCGComponentPartitionActor
                  (*(FPCGActorAndComponentMapping **)(*(longlong *)this + 0x78),this_00);
      }
    }
  }
  return true;
}

// AddReferencedObjects @ 149f3c010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UPCGSubsystem::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar4 = GetTypeName<UPCGSubsystem>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = GetPrivateStaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    lVar2 = *(longlong *)&param_1[2].field_0x18;
    if (lVar2 != 0) {
      if (*(FPCGGenSourceManager **)(lVar2 + 0x160) != (FPCGGenSourceManager *)0x0) {
        FPCGGenSourceManager::AddReferencedObjects
                  (*(FPCGGenSourceManager **)(lVar2 + 0x160),param_2);
      }
      (**(code **)(param_2->_padding_ + 0x90))
                (param_2,*(undefined8 *)(lVar2 + 0x140),*(undefined4 *)(lVar2 + 0x148),0,0);
    }
    return;
  }
  pFVar4 = GetTypeName<UPCGSubsystem>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// CancelGenerationInternal @ 149f3e2d0

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
UPCGSubsystem::CancelGenerationInternal
          (UPCGSubsystem *this,IPCGGraphExecutionSource *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPCGComponent *this_00;
  UClass *pUVar4;
  bool *local_38;
  undefined1 local_30;
  code *local_28;
  bool **local_20;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->_padding_ != 0) {
    bVar3 = IsInGameThread();
    if (bVar3) goto LAB_149f3e31f;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("GraphExecutor && IsInGameThread()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                     ,0x391,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_149f3e31f:
  if (param_1 != (IPCGGraphExecutionSource *)0x0) {
    this_00 = (UPCGComponent *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this_00 != (UPCGComponent *)0x0) {
      pUVar4 = Z_Construct_UClass_UPCGComponent_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if (((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar4->_padding_)) && (this_00->CurrentGenerationTask != 0xffffffffffffffff)) {
        bVar3 = UPCGComponent::IsPartitioned(this_00);
        if (bVar3) {
          local_38 = &this[-1].bHasTickedOnce;
          local_20 = &local_38;
          local_28 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UPCGSubsystem::CancelGenerationInternal'::__l15::<lambda_1>,unsigned___int64,UPCGComponent_*,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_const_&>
                     ::Call;
          local_30 = param_2;
          FPCGActorAndComponentMapping::DispatchToRegisteredLocalComponents
                    ((FPCGActorAndComponentMapping *)this->_padding_,&local_18,this_00,
                     (TFunctionRef<unsigned___int64___cdecl(UPCGComponent_*,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_const_&)>
                      *)&local_28);
          if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// CleanupLocalComponentsImmediate @ 149f3fe10

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
UPCGSubsystem::CleanupLocalComponentsImmediate
          (UPCGSubsystem *this,UPCGComponent *param_1,bool param_2)

{
  bool bVar1;
  undefined1 local_res10 [8];
  code *local_28;
  undefined1 *local_20;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1 != (UPCGComponent *)0x0) {
    local_20 = local_res10;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGSubsystem::CleanupLocalComponentsImmediate'::__l2::<lambda_1>,unsigned___int64,UPCGComponent_*,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_const_&>
               ::Call;
    local_res10[0] = param_2;
    FPCGActorAndComponentMapping::DispatchToRegisteredLocalComponents
              ((this->ActorAndComponentMapping).Ptr,&local_18,param_1,
               (TFunctionRef<unsigned___int64___cdecl(UPCGComponent_*,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_const_&)>
                *)&local_28);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    if ((param_2) && (bVar1 = UPCGComponent::IsPartitioned(param_1), bVar1)) {
      FPCGActorAndComponentMapping::DeleteMappingPCGComponentPartitionActor
                ((this->ActorAndComponentMapping).Ptr,param_1);
    }
  }
  return;
}

// Deinitialize @ 149f41750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGSubsystem::Deinitialize(UPCGSubsystem *this)

{
  FPCGRuntimeGenScheduler *this_00;
  FPCGActorAndComponentMapping *this_01;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &local_18) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this_00 = this->RuntimeGenScheduler;
  if (this_00 != (FPCGRuntimeGenScheduler *)0x0) {
    FPCGRuntimeGenScheduler::~FPCGRuntimeGenScheduler(this_00);
    ::operator_delete(this_00,0x248);
  }
  this_01 = (this->ActorAndComponentMapping).Ptr;
  this->RuntimeGenScheduler = (FPCGRuntimeGenScheduler *)0x0;
  this->PCGWorldActor = (APCGWorldActor *)0x0;
  this->bHasTickedOnce = false;
  FPCGActorAndComponentMapping::Deinitialize(this_01);
  UTickableWorldSubsystem::Deinitialize((UTickableWorldSubsystem *)this);
  return;
}

// ExecuteBeginTickActions @ 149f42680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGSubsystem::ExecuteBeginTickActions(UPCGSubsystem *this)

{
  int iVar1;
  TFunction<void___cdecl(void)> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  TFunction<void___cdecl(void)> *pTVar6;
  
  pTVar2 = (TFunction<void___cdecl(void)> *)(this->BeginTickActions).AllocatorInstance.Data;
  (this->BeginTickActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->BeginTickActions).ArrayNum;
  (this->BeginTickActions).ArrayNum = 0;
  (this->BeginTickActions).ArrayMax = 0;
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)(this->BeginTickActions).AllocatorInstance.Data,0);
  (this->BeginTickActions).ArrayNum = 0;
  for (pTVar6 = pTVar2; pTVar6 != pTVar2 + iVar1; pTVar6 = pTVar6 + 1) {
    UE::Core::Private::Function::CheckCallable(*(void **)pTVar6);
    pcVar3 = *(code **)pTVar6;
    plVar5 = (longlong *)&pTVar6->field_0x10;
    if (*(longlong **)&pTVar6->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&pTVar6->field_0x28;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar3)(uVar4);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>(pTVar2,iVar1);
  if (pTVar2 != (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(pTVar2);
  }
  return;
}

// FindOrCreatePCGPartitionActor @ 149f44da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APCGPartitionActor * __thiscall
UPCGSubsystem::FindOrCreatePCGPartitionActor
          (UPCGSubsystem *this,FGuid *param_1,uint param_2,TIntVector3<int> *param_3,bool param_4,
          bool param_5)

{
  APCGPartitionActor *pAVar1;
  FPCGGridDescriptor local_28 [2];
  
  local_28[0].bIs2DGrid = true;
  local_28[0].bIsRuntime = param_4;
  local_28[0].RuntimeHash = 0;
  local_28[0].Hash.bIsSet = false;
  local_28[0].GridSize = param_2;
  pAVar1 = FindOrCreatePCGPartitionActor(this,local_28,param_3,param_5,false);
  return pAVar1;
}

// FindOrCreatePCGPartitionActor @ 149f44df0

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

APCGPartitionActor * __thiscall
UPCGSubsystem::FindOrCreatePCGPartitionActor
          (UPCGSubsystem *this,FPCGGridDescriptor *param_1,TIntVector3<int> *param_2,bool param_3,
          bool param_4)

{
  bool bVar1;
  UWorld *this_00;
  APCGPartitionActor *this_01;
  UWorld *this_02;
  UClass *pUVar2;
  AActor *pAVar3;
  longlong *plVar4;
  bool bVar5;
  double dVar6;
  undefined1 auStackY_108 [32];
  TVector<double>_u_0 local_d8;
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1198,"UPCGActorHelpers::FindOrCreatePCGPartitionActor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
               ,0x4ae);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1198);
  }
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (this_00 == (UWorld *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      this_01 = (APCGPartitionActor *)0x0;
      goto LAB_149f4502b;
    }
  }
  else {
    if (this->PCGWorldActor != (APCGWorldActor *)0x0) {
      this_01 = FPCGActorAndComponentMapping::GetPartitionActor
                          ((this->ActorAndComponentMapping).Ptr,param_1,param_2);
      if (this_01 == (APCGPartitionActor *)0x0) {
        if (param_1->bIsRuntime == false) {
          this_02 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
          bVar1 = UWorld::IsGameWorld(this_02);
          if (bVar1) goto LAB_149f4502b;
        }
        if (((this_00->PersistentLevel).field0_0x0.DebugPtr)->bAreComponentsCurrentlyRegistered ==
            '\0') {
          this_01 = (APCGPartitionActor *)0x0;
        }
        else if (param_3) {
          FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_b8);
          local_b8._32_8_ = (this_00->PersistentLevel).field0_0x0;
          if (param_1->bIsRuntime != false) {
            local_b8[0x33] = Requested;
            local_b8._52_4_ =
                 local_b8._52_4_ &
                 (RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                  RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                  RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                  RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                  RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                  RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|
                  RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|RF_TagGarbageTemp|
                  RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject|
                  RF_MarkAsNative|RF_Standalone|RF_Public) | RF_Transient;
          }
          dVar6 = (double)param_1->GridSize;
          local_d8._s_0.X = ((double)(param_2->field0_0x0)._s_0.X + __real_3fe0000000000000) * dVar6
          ;
          local_d8._s_0.Z = ((double)(param_2->field0_0x0)._s_0.Z + __real_3fe0000000000000) * dVar6
          ;
          local_d8._s_0.Y = ((double)(param_2->field0_0x0)._s_0.Y + __real_3fe0000000000000) * dVar6
          ;
          pUVar2 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
          pAVar3 = UWorld::SpawnActor(this_00,pUVar2,(TVector<double> *)&local_d8._s_0,
                                      (TRotator<double> *)0x0,(FActorSpawnParameters *)local_b8);
          this_01 = CastChecked<APCGPartitionActor,AActor>(pAVar3);
          if (param_1->bIsRuntime != false) {
            this_01->bIsRuntimeGenerated = true;
          }
          APCGPartitionActor::PostCreation(this_01,param_1);
          if (local_b8._64_8_ != 0) {
            plVar4 = (longlong *)(local_b8 + 0x50);
            if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
              plVar4 = (longlong *)local_b8._104_8_;
            }
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        else {
          this_01 = (APCGPartitionActor *)0x0;
        }
      }
      goto LAB_149f4502b;
    }
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  this_01 = (APCGPartitionActor *)0x0;
LAB_149f4502b:
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return this_01;
}

// FindPCGWorldActor @ 149f45090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APCGWorldActor * __thiscall UPCGSubsystem::FindPCGWorldActor(UPCGSubsystem *this)

{
  return this->PCGWorldActor;
}

// ForAllIntersectingPartitionedComponents @ 149f457f0

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
UPCGSubsystem::ForAllIntersectingPartitionedComponents
          (UPCGSubsystem *this,FBoxCenterAndExtent *param_1,
          TFunctionRef<void___cdecl(UPCGComponent_*)> *param_2)

{
  TFunctionRef<void___cdecl(UPCGComponent_*)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  FPCGActorAndComponentMapping::ForAllIntersectingPartitionedComponents
            ((this->ActorAndComponentMapping).Ptr,param_1,&local_18);
  return;
}

// ForAllOverlappingCells @ 149f45820

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

ulong64 __thiscall
UPCGSubsystem::ForAllOverlappingCells
          (UPCGSubsystem *this,UPCGComponent *param_1,TBox<double> *param_2,
          TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *param_3,
          bool param_4,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_5,
          TFunctionRef<unsigned___int64___cdecl(APCGPartitionActor_*,UE::Math::TBox<double>_const_&)>
          *param_6,TFunctionRef<unsigned___int64___cdecl(FPCGGridDescriptor_const_&,UE::Math::TIntVector3<int>_const_&,UE::Math::TBox<double>_const_&)>
                   *param_7)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ForElementType<unsigned_int> FVar6;
  bool bVar7;
  byte bVar8;
  undefined4 uVar9;
  ulong64 uVar10;
  APCGPartitionActor *pAVar11;
  undefined4 uVar12;
  FPCGGridDescriptor *pFVar13;
  ForElementType<unsigned_int> FVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  longlong lVar21;
  byte bVar22;
  undefined4 uVar23;
  undefined1 auStackY_3a8 [32];
  undefined1 local_358 [4];
  uint local_354;
  uint local_350;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_348;
  longlong local_338;
  TIntVector3<int>_u_0 local_330;
  ForAnyElementType local_320;
  undefined8 local_318;
  uint local_310;
  uint local_30c;
  TBox<double> *local_308;
  ForElementType<unsigned_int> local_300;
  UPCGSubsystem *local_2f8;
  UPCGComponent *local_2f0;
  TIntVector3<int>_u_0 local_2e8;
  TIntVector3<int>_u_0 local_2d8;
  TVector<double>_u_0 local_2c8;
  APCGPartitionActor *local_2a8;
  ForElementType<unsigned_int> local_2a0;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *local_298;
  FPCGGridDescriptor local_290;
  UPCGSubsystem *local_278;
  ForAnyElementType *local_270;
  TVector<double>_u_0 local_268;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  double local_248;
  double dStack_240;
  undefined8 local_238;
  bool local_230;
  FPCGGridDescriptor *local_228;
  TFunctionRef<unsigned___int64___cdecl(APCGPartitionActor_*,UE::Math::TBox<double>_const_&)>
  *local_220;
  undefined8 local_218;
  undefined8 local_210;
  double local_208;
  double dStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  double dStack_1e8;
  double dStack_1e0;
  undefined1 local_1d8;
  undefined7 uStack_1d7;
  TVector<double>_u_0 local_1d0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined1 local_1a0;
  TVector<double>_u_0 local_198;
  code *local_178 [2];
  undefined **local_168;
  code *local_160;
  undefined8 local_150;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> local_148;
  TBox<double> local_f8;
  ulonglong local_c0;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_298 = param_5;
  local_308 = param_2;
  local_2f8 = this;
  local_2f0 = param_1;
  if ((this->_padding_ == 0) || (this->PCGWorldActor == (APCGWorldActor *)0x0)) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else {
    FVar14 = (param_3->AllocatorInstance).SecondaryData;
    local_148.ArrayNum = param_3->ArrayNum;
    lVar21 = (longlong)local_148.ArrayNum;
    local_148.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    if (FVar14 != (ForElementType<unsigned_int>)0x0) {
      param_3 = (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *)
                FVar14;
    }
    if (local_148.ArrayNum == 0) {
      local_148.ArrayMax = 0xd;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_148.ArrayNum,0,&local_148.AllocatorInstance,local_148.ArrayNum,
                 &local_148.ArrayMax);
      FVar14 = (ForElementType<unsigned_int>)&local_148;
      if (local_148.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_148.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar14,param_3,lVar21 << 2);
    }
    local_310 = 0x80000000;
    TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>::Remove
              (&local_148,&local_310);
    uVar16 = (ulonglong)local_148.ArrayNum;
    local_350 = local_148.ArrayNum;
    uVar17 = uVar16;
    if (local_148.ArrayNum != 0) {
      FVar14 = (ForElementType<unsigned_int>)&local_148;
      if (local_148.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_148.AllocatorInstance.SecondaryData;
      }
      uVar17 = 0;
      local_354 = 0;
      iVar18 = 0;
      bVar7 = PCGHiGenGrid::IsValidGridSize(*(uint *)FVar14);
      if (bVar7) {
        bVar22 = 1;
      }
      else {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5963826634711630856>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                           ,0x408,"PCGHiGenGrid::IsValidGridSize(GridSize)");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          uVar10 = (*pcVar2)();
          return uVar10;
        }
        bVar22 = 0;
      }
      lVar21 = 0;
      do {
        lVar21 = lVar21 + 1;
        iVar19 = iVar18 + 1;
        local_350 = iVar18;
        if (lVar21 < (longlong)uVar16) {
          do {
            bVar7 = PCGHiGenGrid::IsValidGridSize(*(uint *)((longlong)FVar14 + lVar21 * 4));
            if (bVar7) {
              bVar8 = 1;
            }
            else {
              bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<5963826634711630856>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                                 ,0x408,"PCGHiGenGrid::IsValidGridSize(GridSize)");
              if (bVar7) {
                pcVar2 = (code *)swi(3);
                uVar10 = (*pcVar2)();
                return uVar10;
              }
              bVar8 = 0;
            }
            if (bVar22 != bVar8) break;
            iVar19 = iVar19 + 1;
            lVar21 = lVar21 + 1;
          } while (lVar21 < (longlong)uVar16);
          uVar17 = (ulonglong)local_354;
        }
        iVar18 = iVar19;
        iVar19 = iVar18 - local_350;
        if (bVar22 != 0) {
          iVar15 = (int)uVar17;
          if (iVar15 != local_350) {
            memmove((uint *)((longlong)FVar14 + (longlong)iVar15 * 4),
                    (uint *)((longlong)FVar14 + (longlong)(int)local_350 * 4),(longlong)iVar19 << 2)
            ;
          }
          local_354 = iVar15 + iVar19;
          uVar17 = (ulonglong)local_354;
        }
        bVar22 = bVar22 ^ 1;
      } while (lVar21 < (longlong)uVar16);
      local_148.ArrayNum = (uint)uVar17;
      param_1 = local_2f0;
      this = local_2f8;
      param_2 = local_308;
    }
    dVar5 = __real_3ff0000000000000;
    local_350 = local_148.ArrayNum;
    if ((int)uVar17 != 0) {
      local_320.Data = (FScriptContainerElement *)0x0;
      local_318 = 0;
      FVar14 = (ForElementType<unsigned_int>)&local_148;
      if (local_148.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_148.AllocatorInstance.SecondaryData;
      }
      local_2a0 = (ForElementType<unsigned_int>)((longlong)FVar14 + (longlong)(int)uVar17 * 4);
      uVar16 = uVar17;
      while( true ) {
        FVar6 = local_2a0;
        local_300 = FVar14;
        if ((int)uVar17 != (int)uVar16) {
          local_358[0] = 0;
          `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_358);
        }
        if (FVar14 == FVar6) break;
        uVar1 = *(uint *)FVar14;
        local_30c = uVar1;
        UPCGComponent::GetGridDescriptor(param_1,&local_290,uVar1);
        if ((local_290.bIsRuntime != false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Descriptor.IsRuntime()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                               ,0x413,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar10 = (*pcVar2)();
          return uVar10;
        }
        local_238._0_1_ = param_2->IsValid;
        local_238._1_1_ = param_2->Pad[0];
        local_238._2_1_ = param_2->Pad[1];
        local_238._3_1_ = param_2->Pad[2];
        local_238._4_1_ = param_2->Pad[3];
        local_238._5_1_ = param_2->Pad[4];
        local_238._6_1_ = param_2->Pad[5];
        local_238._7_1_ = param_2->Pad[6];
        local_268._s_0.X = (param_2->Min).field0_0x0._s_0.X;
        local_268._s_0.Y = (param_2->Min).field0_0x0._s_0.Y;
        local_268._16_4_ = *(undefined4 *)((longlong)&(param_2->Min).field0_0x0 + 0x10);
        local_268._20_4_ = *(undefined4 *)((longlong)&(param_2->Min).field0_0x0 + 0x14);
        uStack_250 = *(undefined4 *)&(param_2->Max).field0_0x0;
        uStack_24c = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 4);
        local_248 = (param_2->Max).field0_0x0._s_0.Y;
        dStack_240 = (param_2->Max).field0_0x0._s_0.Z;
        if (local_290.bIs2DGrid != false) {
          local_1f0 = *(undefined8 *)&(param_2->Max).field0_0x0;
          local_248 = (param_2->Max).field0_0x0._s_0.Y;
          local_1d8 = 1;
          uStack_250 = (undefined4)local_1f0;
          uStack_24c = (undefined4)((ulonglong)local_1f0 >> 0x20);
          dStack_240 = (double)uVar1;
          local_268._16_4_ = 0;
          local_268._20_4_ = 0;
          local_238 = CONCAT71(uStack_1d7,1);
          uStack_1f8 = 0;
          local_2c8._s_0.Z = dStack_240;
          local_208 = local_268._s_0.X;
          dStack_200 = local_268._s_0.Y;
          dStack_1e8 = local_248;
          dStack_1e0 = dStack_240;
        }
        pFVar13 = &local_290;
        local_198._s_0.X = (param_2->Min).field0_0x0._s_0.X;
        local_198._s_0.Y = (param_2->Min).field0_0x0._s_0.Y;
        local_218 = *(undefined8 *)param_7;
        local_210 = *(undefined8 *)&param_7->field_0x8;
        local_198._s_0.Z = (param_2->Min).field0_0x0._s_0.Z;
        local_230 = param_4;
        local_220 = param_6;
        local_278 = this;
        local_270 = &local_320;
        local_228 = pFVar13;
        UPCGActorHelpers::GetCellCoord
                  ((TIntVector3<int> *)&local_2e8._s_0,(TVector<double> *)&local_198._s_0,uVar1,
                   local_290.bIs2DGrid);
        local_2c8._s_0.X = (param_2->Max).field0_0x0._s_0.X;
        local_2c8._s_0.Y = (param_2->Max).field0_0x0._s_0.Y;
        local_2c8._s_0.Z = (param_2->Max).field0_0x0._s_0.Z;
        UPCGActorHelpers::GetCellCoord
                  ((TIntVector3<int> *)&local_330._s_0,(TVector<double> *)&local_2c8._s_0,uVar1,
                   local_290.bIs2DGrid);
        local_354 = local_2e8._s_0.Z;
        uVar12 = local_2e8._s_0.Z;
        uVar20 = local_330._s_0.Z;
        uVar9 = local_330._s_0.Y;
        if (local_2e8._s_0.Z <= local_330._s_0.Z) {
          do {
            uVar23 = local_2e8._s_0.Y;
            local_354 = uVar12;
            if (local_2e8._s_0.Y <= (int)uVar9) {
              do {
                if (local_2e8._s_0.X <= local_330._s_0.X) {
                  dVar3 = (double)local_30c;
                  dVar4 = (double)(int)uVar12;
                  uVar20 = local_2e8._s_0.X;
                  do {
                    local_1a0 = 1;
                    local_1d0._s_0.X = (double)(int)uVar20 * dVar3;
                    local_1b8 = ((double)(int)uVar20 + dVar5) * dVar3;
                    local_2d8._s_0.X = uVar20;
                    local_2d8._s_0.Y = uVar23;
                    local_2d8._s_0.Z = uVar12;
                    local_1d0._s_0.Y = (double)(int)uVar23 * dVar3;
                    local_1d0._s_0.Z = dVar4 * dVar3;
                    local_1b0 = ((double)(int)uVar23 + dVar5) * dVar3;
                    local_1a8 = (dVar4 + dVar5) * dVar3;
                    UE::Math::TBox<double>::Overlap
                              ((TBox<double> *)&local_268._s_0,&local_f8,
                               (TBox<double> *)&local_1d0._s_0);
                    if (((local_f8.IsValid != '\0') &&
                        (pAVar11 = FindOrCreatePCGPartitionActor
                                             (this,pFVar13,(TIntVector3<int> *)&local_2d8._s_0,
                                              param_4,false), pAVar11 != (APCGPartitionActor *)0x0))
                       && (local_2a8 = pAVar11,
                          local_338 = (**(code **)param_6)
                                                (*(undefined8 *)&param_6->field_0x8,&local_2a8),
                          local_338 != -1)) {
                      if (((local_320.Data <= (FScriptContainerElement *)&local_338) &&
                          ((FScriptContainerElement *)&local_338 <
                           local_320.Data + (longlong)local_318._4_4_ * 8)) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar7)) {
                        pcVar2 = (code *)swi(3);
                        uVar10 = (*pcVar2)();
                        return uVar10;
                      }
                      iVar18 = (int)local_318;
                      if ((int)local_318 == local_318._4_4_) {
                        iVar18 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x808,&local_320,(int *)((longlong)&local_318 + 4));
                      }
                      local_318 = CONCAT44(local_318._4_4_,iVar18 + 1);
                      *(longlong *)(local_320.Data + (longlong)iVar18 * 8) = local_338;
                      pFVar13 = local_228;
                    }
                    uVar20 = uVar20 + 1;
                    uVar12 = local_354;
                    uVar9 = local_330._s_0.Y;
                  } while ((int)uVar20 <= local_330._s_0.X);
                }
                uVar23 = uVar23 + 1;
                uVar20 = local_330._s_0.Z;
              } while ((int)uVar23 <= (int)uVar9);
            }
            local_354 = uVar12 + 1;
            param_2 = local_308;
            uVar12 = local_354;
          } while ((int)local_354 <= (int)uVar20);
        }
        uVar17 = (ulonglong)(uint)local_148.ArrayNum;
        FVar14 = (ForElementType<unsigned_int>)((longlong)local_300 + 4);
        uVar16 = (ulonglong)local_350;
        param_1 = local_2f0;
        this = local_2f8;
      }
      if ((int)local_318 != 0) {
        local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_348.ArrayNum = local_298->ArrayNum;
        lVar21 = (longlong)local_348.ArrayNum;
        _Src = (local_298->AllocatorInstance).Data;
        if (local_348.ArrayNum == 0) {
          local_348.ArrayMax = 0;
          iVar18 = (int)local_318;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_348.ArrayNum,0,&local_348.AllocatorInstance,local_348.ArrayNum,
                     &local_348.ArrayMax);
          memcpy(local_348.AllocatorInstance.Data,_Src,lVar21 << 3);
          iVar18 = (int)local_318;
        }
        if (iVar18 != 0) {
          iVar19 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,iVar18,&local_348.AllocatorInstance,&local_348.ArrayNum,
                              &local_348.ArrayMax);
          memcpy(local_348.AllocatorInstance.Data + (longlong)iVar19 * 8,local_320.Data,
                 (longlong)iVar18 << 3);
        }
        if ((this->_padding_ == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar10 = (*pcVar2)();
          return uVar10;
        }
        local_168 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
        local_150 = 0;
        local_160 = `UPCGSubsystem::ForAllOverlappingCells'::__l49::<lambda_3>::
                    <lambda_invoker_cdecl>;
        local_178[0] = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::
                       Call;
        uVar10 = FPCGGraphExecutor::ScheduleGeneric
                           ((FPCGGraphExecutor *)this->_padding_,
                            (TFunction<bool___cdecl(void)> *)local_178,
                            (IPCGGraphExecutionSource *)0x0,&local_348);
        if (local_348.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_348.AllocatorInstance.Data);
        }
        if (local_320.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_320.Data);
        }
        if (local_148.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
          return uVar10;
        }
        FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
        return uVar10;
      }
      if (local_320.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Data);
      }
    }
    if (local_148.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
    }
  }
  return 0xffffffffffffffff;
}

// ForAllOverlappingComponentsInHierarchy @ 149f460f0

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
UPCGSubsystem::ForAllOverlappingComponentsInHierarchy
          (UPCGSubsystem *this,UPCGComponent *param_1,
          TFunctionRef<void___cdecl(UPCGComponent_*)> *param_2)

{
  UPCGComponent *pUVar1;
  code **local_res8;
  UPCGComponent *local_48;
  TFunctionRef<void___cdecl(UPCGComponent_*)> *local_40;
  code *local_38;
  UPCGComponent **local_30;
  code *local_28;
  undefined8 **local_20;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar1 = UPCGComponent::GetOriginalComponent(param_1);
  local_30 = &local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGSubsystem::ForAllOverlappingComponentsInHierarchy'::__l2::<lambda_1>,void,UPCGComponent_*>
             ::Call;
  local_res8 = &local_38;
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGSubsystem::ForAllRegisteredLocalComponents'::__l2::<lambda_1>,unsigned___int64,UPCGComponent_*,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_const_&>
             ::Call;
  local_48 = param_1;
  local_40 = param_2;
  FPCGActorAndComponentMapping::DispatchToRegisteredLocalComponents
            ((this->ActorAndComponentMapping).Ptr,&local_18,pUVar1,
             (TFunctionRef<unsigned___int64___cdecl(UPCGComponent_*,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_const_&)>
              *)&local_28);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ForAllRegisteredIntersectingLocalComponents @ 149f46190

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
UPCGSubsystem::ForAllRegisteredIntersectingLocalComponents
          (UPCGSubsystem *this,UPCGComponent *param_1,FBoxCenterAndExtent *param_2,
          TFunctionRef<void___cdecl(UPCGComponent_*)> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TBox<double> *this_00;
  undefined1 auStack_128 [32];
  UPCGComponent *local_108;
  TFunctionRef<void___cdecl(UPCGComponent_*)> *local_100;
  code *local_f8;
  UPCGComponent **local_f0;
  TVector<double>_u_0 local_e8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined1 local_b8;
  TVector<double>_u_0 local_b0;
  double local_98;
  double local_90;
  double local_88;
  TBox<double> local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (param_1 == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOriginalComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                       ,0x3da,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = UPCGComponent::GetGridBounds(param_1,&local_78);
  local_d0 = (param_2->Extent).field0_0x0._s_0.X;
  local_c8 = (param_2->Extent).field0_0x0._s_0.Y;
  local_e8._s_0.X = (param_2->Center).field0_0x0._s_0.X - local_d0;
  local_c0 = (param_2->Extent).field0_0x0._s_0.Z;
  local_d0 = local_d0 + (param_2->Center).field0_0x0._s_0.X;
  local_e8._s_0.Y = (param_2->Center).field0_0x0._s_0.Y - local_c8;
  local_b8 = 1;
  local_c8 = local_c8 + (param_2->Center).field0_0x0._s_0.Y;
  local_e8._s_0.Z = (param_2->Center).field0_0x0._s_0.Z - local_c0;
  local_c0 = local_c0 + (param_2->Center).field0_0x0._s_0.Z;
  UE::Math::TBox<double>::Overlap
            (this_00,(TBox<double> *)&local_b0._s_0,(TBox<double> *)&local_e8._s_0);
  if (0.0 < (local_90 - local_b0._s_0.Y) * (local_98 - local_b0._s_0.X) *
            (local_88 - local_b0._s_0.Z)) {
    local_f0 = &local_108;
    local_f8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGSubsystem::ForAllRegisteredIntersectingLocalComponents'::__l2::<lambda_1>,void,APCGPartitionActor_*>
               ::Call;
    local_108 = param_1;
    local_100 = param_3;
    FPCGActorAndComponentMapping::ForAllIntersectingPartitionActors
              ((this->ActorAndComponentMapping).Ptr,(TBox<double> *)&local_b0._s_0,
               (TFunctionRef<void___cdecl(APCGPartitionActor_*)> *)&local_f8);
  }
  return;
}

// ForAllRegisteredLocalComponents @ 149f46320

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
UPCGSubsystem::ForAllRegisteredLocalComponents
          (UPCGSubsystem *this,UPCGComponent *param_1,
          TFunctionRef<void___cdecl(UPCGComponent_*)> *param_2)

{
  TFunctionRef<void___cdecl(UPCGComponent_*)> *local_res8 [4];
  code *local_28;
  TFunctionRef<void___cdecl(UPCGComponent_*)> **local_20;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  local_20 = local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGSubsystem::ForAllRegisteredLocalComponents'::__l2::<lambda_1>,unsigned___int64,UPCGComponent_*,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_const_&>
             ::Call;
  local_res8[0] = param_2;
  FPCGActorAndComponentMapping::DispatchToRegisteredLocalComponents
            ((this->ActorAndComponentMapping).Ptr,&local_18,param_1,
             (TFunctionRef<unsigned___int64___cdecl(UPCGComponent_*,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_const_&)>
              *)&local_28);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetActorPCGData @ 149f47110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGData * __thiscall
UPCGSubsystem::GetActorPCGData(UPCGSubsystem *this,ulong64 param_1,bool *param_2)

{
  UPCGData *pUVar1;
  
  *param_2 = false;
  if (this->_padding_ != 0) {
    pUVar1 = FPCGPerExecutionCache::GetExecutionCachePCGData
                       ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),param_1,ActorData,param_2)
    ;
    return pUVar1;
  }
  return (UPCGData *)0x0;
}

// GetAllIntersectingComponents @ 149f47b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UPCGComponent_*,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSubsystem::GetAllIntersectingComponents
          (UPCGSubsystem *this,
          TArray<UPCGComponent_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FBoxCenterAndExtent *param_1)

{
  FPCGActorAndComponentMapping::GetAllIntersectingComponents
            ((this->ActorAndComponentMapping).Ptr,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetAllRegisteredComponents @ 149f47b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> * __thiscall
UPCGSubsystem::GetAllRegisteredComponents
          (UPCGSubsystem *this,
          TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__)

{
  FPCGActorAndComponentMapping::GetAllRegisteredComponents
            ((this->ActorAndComponentMapping).Ptr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetAllRegisteredPartitionedComponents @ 149f47bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> * __thiscall
UPCGSubsystem::GetAllRegisteredPartitionedComponents
          (UPCGSubsystem *this,
          TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__)

{
  FPCGActorAndComponentMapping::GetAllRegisteredPartitionedComponents
            ((this->ActorAndComponentMapping).Ptr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetBounds @ 149f47fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TOptional<UE::Math::TBox<double>_> * __thiscall
UPCGSubsystem::GetBounds
          (UPCGSubsystem *this,TOptional<UE::Math::TBox<double>_> *__return_storage_ptr__,
          ulong64 param_1)

{
  TVector<double>_u_0 local_48;
  double dStack_30;
  double local_28;
  double dStack_20;
  undefined8 local_18;
  bool local_10;
  
  if (this->_padding_ == 0) {
    local_10 = false;
  }
  else {
    FPCGPerExecutionCache::GetExecutionCacheBounds
              ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),
               (TOptional<UE::Math::TBox<double>_> *)&local_48._s_0,param_1,Bounds);
  }
  __return_storage_ptr__->bIsSet = local_10;
  if (local_10 != false) {
    (__return_storage_ptr__->TypedValue).Min.field0_0x0._s_0.X = local_48._s_0.X;
    (__return_storage_ptr__->TypedValue).Min.field0_0x0._s_0.Y = local_48._s_0.Y;
    (__return_storage_ptr__->TypedValue).Min.field0_0x0._s_0.Z = local_48._s_0.Z;
    (__return_storage_ptr__->TypedValue).Max.field0_0x0._s_0.X = dStack_30;
    (__return_storage_ptr__->TypedValue).Max.field0_0x0._s_0.Y = local_28;
    (__return_storage_ptr__->TypedValue).Max.field0_0x0._s_0.Z = dStack_20;
    (__return_storage_ptr__->TypedValue).IsValid = (undefined1)local_18;
    (__return_storage_ptr__->TypedValue).Pad[0] = local_18._1_1_;
    (__return_storage_ptr__->TypedValue).Pad[1] = local_18._2_1_;
    (__return_storage_ptr__->TypedValue).Pad[2] = local_18._3_1_;
    (__return_storage_ptr__->TypedValue).Pad[3] = local_18._4_1_;
    (__return_storage_ptr__->TypedValue).Pad[4] = local_18._5_1_;
    (__return_storage_ptr__->TypedValue).Pad[5] = local_18._6_1_;
    (__return_storage_ptr__->TypedValue).Pad[6] = local_18._7_1_;
  }
  return __return_storage_ptr__;
}

// GetGenSourceManager @ 149f4aa70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGGenSourceManager * __thiscall UPCGSubsystem::GetGenSourceManager(UPCGSubsystem *this)

{
  if (this->RuntimeGenScheduler != (FPCGRuntimeGenScheduler *)0x0) {
    return this->RuntimeGenScheduler->GenSourceManager;
  }
  return (FPCGGenSourceManager *)0x0;
}

// GetInputPCGData @ 149f4acf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGData * __thiscall
UPCGSubsystem::GetInputPCGData(UPCGSubsystem *this,ulong64 param_1,bool *param_2)

{
  UPCGData *pUVar1;
  
  *param_2 = false;
  if (this->_padding_ != 0) {
    pUVar1 = FPCGPerExecutionCache::GetExecutionCachePCGData
                       ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),param_1,InputData,param_2)
    ;
    return pUVar1;
  }
  return (UPCGData *)0x0;
}

// GetInstance @ 149f4ae00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSubsystem * __cdecl UPCGSubsystem::GetInstance(UWorld *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UPCGSubsystem *pUVar5;
  
  if (param_1 == (UWorld *)0x0) {
    return (UPCGSubsystem *)0x0;
  }
  pUVar3 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_149f4ae38;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_149f4ae38:
    pUVar4 = StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_149f4ae68;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_149f4ae68:
  pUVar5 = (UPCGSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&param_1->SubsystemCollection,pUVar3);
  if ((pUVar5 != (UPCGSubsystem *)0x0) && ((char)pUVar5->_padding_ != '\0')) {
    return pUVar5;
  }
  return (UPCGSubsystem *)0x0;
}

// GetLandscapeCache @ 149f4aea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGLandscapeCache * __thiscall UPCGSubsystem::GetLandscapeCache(UPCGSubsystem *this)

{
  if (this->PCGWorldActor != (APCGWorldActor *)0x0) {
    return (this->PCGWorldActor->LandscapeCacheObject).field0_0x0.DebugPtr;
  }
  return (UPCGLandscapeCache *)0x0;
}

// GetLandscapeHeightPCGData @ 149f4aec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGData * __thiscall
UPCGSubsystem::GetLandscapeHeightPCGData(UPCGSubsystem *this,ulong64 param_1,bool *param_2)

{
  UPCGData *pUVar1;
  
  *param_2 = false;
  if (this->_padding_ != 0) {
    pUVar1 = FPCGPerExecutionCache::GetExecutionCachePCGData
                       ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),param_1,
                        LandscapeHeightData,param_2);
    return pUVar1;
  }
  return (UPCGData *)0x0;
}

// GetLandscapePCGData @ 149f4aef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGData * __thiscall
UPCGSubsystem::GetLandscapePCGData(UPCGSubsystem *this,ulong64 param_1,bool *param_2)

{
  UPCGData *pUVar1;
  
  *param_2 = false;
  if (this->_padding_ != 0) {
    pUVar1 = FPCGPerExecutionCache::GetExecutionCachePCGData
                       ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),param_1,LandscapeData,
                        param_2);
    return pUVar1;
  }
  return (UPCGData *)0x0;
}

// GetLocalComponent @ 149f4af20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGComponent * __thiscall
UPCGSubsystem::GetLocalComponent
          (UPCGSubsystem *this,FPCGGridDescriptor *param_1,TIntVector3<int> *param_2,
          UPCGComponent *param_3)

{
  code *pcVar1;
  bool bVar2;
  UPCGComponent *pUVar3;
  
  if (param_3 == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOriginalComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                       ,0x4a3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGComponent *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = FPCGActorAndComponentMapping::GetLocalComponent
                     ((this->ActorAndComponentMapping).Ptr,param_1,param_2,param_3);
  return pUVar3;
}

// GetLocalComponent @ 149f4afa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGComponent * __thiscall
UPCGSubsystem::GetLocalComponent
          (UPCGSubsystem *this,uint param_1,TIntVector3<int> *param_2,UPCGComponent *param_3,
          bool param_4)

{
  code *pcVar1;
  bool bVar2;
  UPCGComponent *pUVar3;
  FPCGGridDescriptor local_38;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  if (param_3 == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOriginalComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                       ,0x483,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGComponent *)(*pcVar1)();
      return pUVar3;
    }
  }
  uStack_18 = 0;
  local_20._0_5_ = (uint5)param_1;
  local_20 = (ulonglong)CONCAT15(param_4,(uint5)local_20);
  local_10 = 0;
  local_38.bIs2DGrid = UPCGComponent::Use2DGrid(param_3);
  local_20._0_5_ = CONCAT14(local_38.bIs2DGrid,(undefined4)local_20);
  local_38.bIsRuntime = param_4;
  local_38.RuntimeHash = 0;
  local_38.Hash.bIsSet = false;
  local_38.GridSize = param_1;
  if (param_3 == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOriginalComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                       ,0x4a3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGComponent *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = FPCGActorAndComponentMapping::GetLocalComponent
                     ((this->ActorAndComponentMapping).Ptr,&local_38,param_2,param_3);
  return pUVar3;
}

// GetLocalSpaceBounds @ 149f4b0a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TOptional<UE::Math::TBox<double>_> * __thiscall
UPCGSubsystem::GetLocalSpaceBounds
          (UPCGSubsystem *this,TOptional<UE::Math::TBox<double>_> *__return_storage_ptr__,
          ulong64 param_1)

{
  TVector<double>_u_0 local_48;
  double dStack_30;
  double local_28;
  double dStack_20;
  undefined8 local_18;
  bool local_10;
  
  if (this->_padding_ == 0) {
    local_10 = false;
  }
  else {
    FPCGPerExecutionCache::GetExecutionCacheBounds
              ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),
               (TOptional<UE::Math::TBox<double>_> *)&local_48._s_0,param_1,LocalSpaceBounds);
  }
  __return_storage_ptr__->bIsSet = local_10;
  if (local_10 != false) {
    (__return_storage_ptr__->TypedValue).Min.field0_0x0._s_0.X = local_48._s_0.X;
    (__return_storage_ptr__->TypedValue).Min.field0_0x0._s_0.Y = local_48._s_0.Y;
    (__return_storage_ptr__->TypedValue).Min.field0_0x0._s_0.Z = local_48._s_0.Z;
    (__return_storage_ptr__->TypedValue).Max.field0_0x0._s_0.X = dStack_30;
    (__return_storage_ptr__->TypedValue).Max.field0_0x0._s_0.Y = local_28;
    (__return_storage_ptr__->TypedValue).Max.field0_0x0._s_0.Z = dStack_20;
    (__return_storage_ptr__->TypedValue).IsValid = (undefined1)local_18;
    (__return_storage_ptr__->TypedValue).Pad[0] = local_18._1_1_;
    (__return_storage_ptr__->TypedValue).Pad[1] = local_18._2_1_;
    (__return_storage_ptr__->TypedValue).Pad[2] = local_18._3_1_;
    (__return_storage_ptr__->TypedValue).Pad[3] = local_18._4_1_;
    (__return_storage_ptr__->TypedValue).Pad[4] = local_18._5_1_;
    (__return_storage_ptr__->TypedValue).Pad[5] = local_18._6_1_;
    (__return_storage_ptr__->TypedValue).Pad[6] = local_18._7_1_;
  }
  return __return_storage_ptr__;
}

// GetOriginalActorPCGData @ 149f4bd00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGData * __thiscall
UPCGSubsystem::GetOriginalActorPCGData(UPCGSubsystem *this,ulong64 param_1,bool *param_2)

{
  UPCGData *pUVar1;
  
  *param_2 = false;
  if (this->_padding_ != 0) {
    pUVar1 = FPCGPerExecutionCache::GetExecutionCachePCGData
                       ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),param_1,OriginalActorData,
                        param_2);
    return pUVar1;
  }
  return (UPCGData *)0x0;
}

// GetOriginalBounds @ 149f4bd30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TOptional<UE::Math::TBox<double>_> * __thiscall
UPCGSubsystem::GetOriginalBounds
          (UPCGSubsystem *this,TOptional<UE::Math::TBox<double>_> *__return_storage_ptr__,
          ulong64 param_1)

{
  TVector<double>_u_0 local_48;
  double dStack_30;
  double local_28;
  double dStack_20;
  undefined8 local_18;
  bool local_10;
  
  if (this->_padding_ == 0) {
    local_10 = false;
  }
  else {
    FPCGPerExecutionCache::GetExecutionCacheBounds
              ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),
               (TOptional<UE::Math::TBox<double>_> *)&local_48._s_0,param_1,OriginalBounds);
  }
  __return_storage_ptr__->bIsSet = local_10;
  if (local_10 != false) {
    (__return_storage_ptr__->TypedValue).Min.field0_0x0._s_0.X = local_48._s_0.X;
    (__return_storage_ptr__->TypedValue).Min.field0_0x0._s_0.Y = local_48._s_0.Y;
    (__return_storage_ptr__->TypedValue).Min.field0_0x0._s_0.Z = local_48._s_0.Z;
    (__return_storage_ptr__->TypedValue).Max.field0_0x0._s_0.X = dStack_30;
    (__return_storage_ptr__->TypedValue).Max.field0_0x0._s_0.Y = local_28;
    (__return_storage_ptr__->TypedValue).Max.field0_0x0._s_0.Z = dStack_20;
    (__return_storage_ptr__->TypedValue).IsValid = (undefined1)local_18;
    (__return_storage_ptr__->TypedValue).Pad[0] = local_18._1_1_;
    (__return_storage_ptr__->TypedValue).Pad[1] = local_18._2_1_;
    (__return_storage_ptr__->TypedValue).Pad[2] = local_18._3_1_;
    (__return_storage_ptr__->TypedValue).Pad[3] = local_18._4_1_;
    (__return_storage_ptr__->TypedValue).Pad[4] = local_18._5_1_;
    (__return_storage_ptr__->TypedValue).Pad[5] = local_18._6_1_;
    (__return_storage_ptr__->TypedValue).Pad[6] = local_18._7_1_;
  }
  return __return_storage_ptr__;
}

// GetOriginalLocalSpaceBounds @ 149f4bda0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TOptional<UE::Math::TBox<double>_> * __thiscall
UPCGSubsystem::GetOriginalLocalSpaceBounds
          (UPCGSubsystem *this,TOptional<UE::Math::TBox<double>_> *__return_storage_ptr__,
          ulong64 param_1)

{
  TVector<double>_u_0 local_48;
  double dStack_30;
  double local_28;
  double dStack_20;
  undefined8 local_18;
  bool local_10;
  
  if (this->_padding_ == 0) {
    local_10 = false;
  }
  else {
    FPCGPerExecutionCache::GetExecutionCacheBounds
              ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),
               (TOptional<UE::Math::TBox<double>_> *)&local_48._s_0,param_1,OriginalLocalSpaceBounds
              );
  }
  __return_storage_ptr__->bIsSet = local_10;
  if (local_10 != false) {
    (__return_storage_ptr__->TypedValue).Min.field0_0x0._s_0.X = local_48._s_0.X;
    (__return_storage_ptr__->TypedValue).Min.field0_0x0._s_0.Y = local_48._s_0.Y;
    (__return_storage_ptr__->TypedValue).Min.field0_0x0._s_0.Z = local_48._s_0.Z;
    (__return_storage_ptr__->TypedValue).Max.field0_0x0._s_0.X = dStack_30;
    (__return_storage_ptr__->TypedValue).Max.field0_0x0._s_0.Y = local_28;
    (__return_storage_ptr__->TypedValue).Max.field0_0x0._s_0.Z = dStack_20;
    (__return_storage_ptr__->TypedValue).IsValid = (undefined1)local_18;
    (__return_storage_ptr__->TypedValue).Pad[0] = local_18._1_1_;
    (__return_storage_ptr__->TypedValue).Pad[1] = local_18._2_1_;
    (__return_storage_ptr__->TypedValue).Pad[2] = local_18._3_1_;
    (__return_storage_ptr__->TypedValue).Pad[3] = local_18._4_1_;
    (__return_storage_ptr__->TypedValue).Pad[4] = local_18._5_1_;
    (__return_storage_ptr__->TypedValue).Pad[5] = local_18._6_1_;
    (__return_storage_ptr__->TypedValue).Pad[6] = local_18._7_1_;
  }
  return __return_storage_ptr__;
}

// GetPCGComponentPartitionActorMappings @ 149f4bf90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
* __thiscall
UPCGSubsystem::GetPCGComponentPartitionActorMappings
          (UPCGSubsystem *this,
          TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,UPCGComponent *param_1)

{
  FPCGActorAndComponentMapping::GetPCGComponentPartitionActorMappings
            ((this->ActorAndComponentMapping).Ptr,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetPCGData @ 149f4bfc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGData * __thiscall UPCGSubsystem::GetPCGData(UPCGSubsystem *this,ulong64 param_1,bool *param_2)

{
  UPCGData *pUVar1;
  
  *param_2 = false;
  if (this->_padding_ != 0) {
    pUVar1 = FPCGPerExecutionCache::GetExecutionCachePCGData
                       ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),param_1,PCGData,param_2);
    return pUVar1;
  }
  return (UPCGData *)0x0;
}

// GetPCGQualityLevel @ 149f4c040

int __cdecl UPCGSubsystem::GetPCGQualityLevel(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = PCGSubsystemConsole::CVarPCGQuality.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// GetPCGWorldActor @ 149f4c080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APCGWorldActor * __thiscall UPCGSubsystem::GetPCGWorldActor(UPCGSubsystem *this)

{
  return this->PCGWorldActor;
}

// GetPCGWorldActorForPartitionActor @ 149f4c090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APCGWorldActor * __thiscall
UPCGSubsystem::GetPCGWorldActorForPartitionActor(UPCGSubsystem *this,APCGPartitionActor *param_1)

{
  code *pcVar1;
  bool bVar2;
  APCGWorldActor *pAVar3;
  ULevel *pUVar4;
  UPCGSubsystem *local_res8;
  code *local_18;
  UPCGSubsystem **local_10;
  
  pAVar3 = this->PCGWorldActor;
  if (pAVar3 == (APCGWorldActor *)0x0) {
    bVar2 = PCGHelpers::IsRuntimeOrPIE();
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5963826634711630205>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                         ,0x17d,"PCGHelpers::IsRuntimeOrPIE()");
      if (!bVar2) {
        return this->PCGWorldActor;
      }
code_r0x000149f4c121:
      pcVar1 = (code *)swi(3);
      pAVar3 = (APCGWorldActor *)(*pcVar1)();
      return pAVar3;
    }
    if (param_1 == (APCGPartitionActor *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5963826634711630205>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                         ,0x17d,"InActor");
      if (bVar2) goto code_r0x000149f4c121;
    }
    else {
      local_10 = &local_res8;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPCGSubsystem::GetPCGWorldActorForPartitionActor'::__l8::<lambda_1>,bool,AActor_*>
                 ::Call;
      local_res8 = this;
      pUVar4 = AActor::GetLevel((AActor *)param_1);
      UPCGActorHelpers::ForEachActorInLevel<APCGWorldActor,void>
                (pUVar4,(TFunctionRef<bool___cdecl(AActor_*)> *)&local_18);
    }
    pAVar3 = this->PCGWorldActor;
  }
  return pAVar3;
}

// GetPrivateStaticClass @ 149f4e310

UClass * __cdecl UPCGSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSubsystem",
               &Z_Registration_Info_UClass_UPCGSubsystem.InnerSingleton,
               StaticRegisterNativesUPCGSubsystem,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSubsystem>,InternalVTableHelperCtorCaller<UPCGSubsystem>,
               local_res8,UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSubsystem.InnerSingleton;
}

// GetRegisteredPCGPartitionActor @ 149f4ec40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APCGPartitionActor * __thiscall
UPCGSubsystem::GetRegisteredPCGPartitionActor
          (UPCGSubsystem *this,FPCGGridDescriptor *param_1,TIntVector3<int> *param_2)

{
  APCGPartitionActor *pAVar1;
  
  pAVar1 = FPCGActorAndComponentMapping::GetPartitionActor
                     ((this->ActorAndComponentMapping).Ptr,param_1,param_2);
  return pAVar1;
}

// GetRegisteredPCGPartitionActor @ 149f4ec50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APCGPartitionActor * __thiscall
UPCGSubsystem::GetRegisteredPCGPartitionActor
          (UPCGSubsystem *this,uint param_1,TIntVector3<int> *param_2,bool param_3)

{
  APCGPartitionActor *pAVar1;
  FPCGGridDescriptor local_28 [2];
  
  local_28[0].bIs2DGrid = true;
  local_28[0].RuntimeHash = 0;
  local_28[0].Hash.bIsSet = false;
  local_28[0].GridSize = param_1;
  local_28[0].bIsRuntime = param_3;
  pAVar1 = FPCGActorAndComponentMapping::GetPartitionActor
                     ((this->ActorAndComponentMapping).Ptr,local_28,param_2);
  return pAVar1;
}

// GetStatId @ 149f4f080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TStatId __thiscall UPCGSubsystem::GetStatId(UPCGSubsystem *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UPCGSubsystem::GetStatId(void)const_::_2_::FStat_UPCGSubsystem>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UPCGSubsystem ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UPCGSubsystem::GetStatId(void)const_::_2_::FStat_UPCGSubsystem>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UPCGSubsystem");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UPCGSubsystem,*pFVar1,L"UPCGSubsystem",
                   "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,
                   false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UPCGSubsystem;
  if (StatPtr_UPCGSubsystem ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UPCGSubsystem::GetStatId(void)const_::_2_::FStat_UPCGSubsystem>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UPCGSubsystem");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UPCGSubsystem::GetStatId(void)const_::_2_::FStat_UPCGSubsystem>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UPCGSubsystem,*pFVar1,
                         L"UPCGSubsystem","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true
                         ,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetSubsystemForCurrentWorld @ 149f4f410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSubsystem * __cdecl UPCGSubsystem::GetSubsystemForCurrentWorld(void)

{
  int iVar1;
  bool bVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UPCGSubsystem *pUVar6;
  
  if (GEngine == (UEngine *)0x0) {
    return (UPCGSubsystem *)0x0;
  }
  pUVar3 = UEngine::GetCurrentPlayWorld(GEngine,(UWorld *)0x0);
  if (pUVar3 == (UWorld *)0x0) {
    return (UPCGSubsystem *)0x0;
  }
  pUVar4 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_149f4f45f;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_149f4f45f:
    pUVar5 = StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_149f4f48f;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_149f4f48f:
  pUVar6 = (UPCGSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&pUVar3->SubsystemCollection,pUVar4);
  if ((pUVar6 != (UPCGSubsystem *)0x0) && ((char)pUVar6->_padding_ != '\0')) {
    return pUVar6;
  }
  return (UPCGSubsystem *)0x0;
}

// GetSubsystemWorld @ 149f4f4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UPCGSubsystem::GetSubsystemWorld(UPCGSubsystem *this)

{
  UWorld *pUVar1;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)&this[-1].bHasTickedOnce);
  return pUVar1;
}

// GetTickableTickType @ 149f4f540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ETickableTickType __thiscall UPCGSubsystem::GetTickableTickType(UPCGSubsystem *this)

{
  bool bVar1;
  
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)&this[-1].BeginTickActions,
                     RF_ArchetypeObject|RF_ClassDefaultObject);
  return bVar1 + Always;
}

// IsTickableInEditor @ 149f52cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPCGSubsystem::IsTickableInEditor(UPCGSubsystem *this)

{
  return true;
}

// OnOriginalComponentRegistered @ 149f56a30

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
UPCGSubsystem::OnOriginalComponentRegistered(UPCGSubsystem *this,UPCGComponent *param_1)

{
  int iVar1;
  FPCGRuntimeGenScheduler *pFVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  pFVar2 = this->RuntimeGenScheduler;
  if (((pFVar2 != (FPCGRuntimeGenScheduler *)0x0) && (param_1 != (UPCGComponent *)0x0)) &&
     (param_1->GenerationTrigger == GenerateAtRuntime)) {
    lVar3 = param_1->_padding_;
    if (lVar3 != 0) {
      pUVar4 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        return;
      }
    }
    pFVar2->bAnyRuntimeGenComponentsExistDirty = true;
  }
  return;
}

// OnOriginalComponentUnregistered @ 149f572c0

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
UPCGSubsystem::OnOriginalComponentUnregistered(UPCGSubsystem *this,UPCGComponent *param_1)

{
  undefined1 *puVar1;
  FGridGenerationKey *pFVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  FPCGRuntimeGenScheduler *this_00;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FPCGRuntimeGenScheduler *pFVar9;
  longlong *plVar10;
  bool bVar11;
  uint uVar12;
  UClass *pUVar13;
  UPCGComponent *pUVar14;
  UObject *pUVar15;
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> FVar16;
  longlong lVar17;
  UPCGComponent *pUVar18;
  byte bVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> FVar24;
  undefined1 *puVar25;
  uint *puVar26;
  uint uVar27;
  undefined1 auStack_4a8 [32];
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> FStack_488;
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> FStack_480;
  longlong lStack_478;
  longlong lStack_470;
  undefined8 uStack_468;
  undefined1 uStack_458;
  undefined1 uStack_457;
  undefined1 auStack_456 [6];
  UPCGComponent *pUStack_450;
  FPCGRuntimeGenScheduler *pFStack_448;
  uint uStack_440;
  uint uStack_43c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_438;
  undefined4 uStack_430;
  uint uStack_42c;
  uint uStack_428;
  undefined4 uStack_424;
  int iStack_420;
  undefined4 uStack_41c;
  FWeakObjectPtr FStack_418;
  ulonglong uStack_410;
  FWeakObjectPtr FStack_408;
  FPCGGridDescriptor FStack_400;
  int iStack_3e8;
  int iStack_3e4;
  undefined1 auStack_3e0 [40];
  undefined4 uStack_3b8;
  FPCGRuntimeGenScheduler *pFStack_3b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3a8;
  undefined8 uStack_388;
  longlong *plStack_380;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_378;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined4 uStack_340;
  int iStack_33c;
  int iStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_30c;
  undefined4 uStack_2ec;
  undefined1 auStack_2e8 [32];
  uint *puStack_2c8;
  uint uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  int iStack_2b4;
  ForElementType<FSetElementId> FStack_2a8;
  int iStack_2a0;
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> FStack_298;
  int iStack_50;
  int iStack_4c;
  ulonglong uStack_48;
  
  this_00 = this->RuntimeGenScheduler;
  if (this_00 == (FPCGRuntimeGenScheduler *)0x0) {
    return;
  }
  if (param_1 == (UPCGComponent *)0x0) {
    return;
  }
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_4a8;
  lVar17 = param_1->_padding_;
  pUStack_450 = param_1;
  if (lVar17 != 0) {
    pUVar13 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
    lVar17 = *(longlong *)(lVar17 + 0x10);
    iVar22 = (int)pUVar13->_padding_;
    if ((iVar22 <= *(int *)(lVar17 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar22 * 8) ==
        &pUVar13->_padding_)) {
      return;
    }
  }
  if ((this_00->ActorAndComponentMapping == (FPCGActorAndComponentMapping *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActorAndComponentMapping",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                          ,0x5ab,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00->bAnyRuntimeGenComponentsExistDirty = true;
  auStack_2e8._0_8_ = 0;
  puVar1 = &(this_00->GeneratedComponents).Elements.field_0x10;
  auStack_2e8._8_8_ = 0;
  puStack_2c8 = (uint *)0x0;
  uStack_440 = 0;
  uStack_2c0 = 0;
  iStack_2b4 = 0;
  uStack_428 = 0;
  FStack_2a8 = (ForElementType<FSetElementId>)0x0;
  iStack_2a0 = 0;
  uStack_2bc = 0x80;
  uStack_2b8 = 0xffffffff;
  iVar22 = *(int *)&(this_00->GeneratedComponents).Elements.field_0x28;
  uStack_410 = 1;
  uStack_43c = 1;
  uStack_42c = uStack_428;
  if (iVar22 != 0) {
    puVar26 = *(uint **)&(this_00->GeneratedComponents).Elements.field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar1;
    }
    uStack_43c = *puVar26;
    uStack_440 = 0;
    uStack_428 = 0;
    while (uStack_43c == 0) {
      uStack_440 = uStack_440 + 1;
      uStack_428 = uStack_428 + 0x20;
      uStack_43c = 1;
      uStack_42c = iVar22;
      if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_440)
      goto LAB_149f56c2e;
      uStack_43c = puVar26[(int)uStack_440];
    }
    uStack_43c = -uStack_43c & uStack_43c;
    uVar3 = (ulonglong)uStack_43c * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iStack_3e8 = (int)lVar17;
    uStack_42c = iStack_3e8 + -1 + uStack_428;
    if (iVar22 < (int)uStack_42c) {
      uStack_42c = iVar22;
    }
  }
LAB_149f56c2e:
  uVar23 = *(uint *)&(this_00->GeneratedComponents).Elements.field_0x28;
  uStack_424 = uStack_30c;
  uVar27 = uVar23 & 0xffffffe0;
  iStack_420 = *(int *)&(this_00->GeneratedComponents).Elements.field_0x8 -
               *(int *)&(this_00->GeneratedComponents).Elements.field_0x34;
  TStack_3a8._padding_ = CONCAT44(uStack_43c,uStack_440);
  uStack_430 = 0xffffffff;
  TStack_3a8.CurrentBitIndex = uStack_42c;
  TStack_3a8.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar23 >> 5;
  TStack_3a8._28_4_ = uStack_30c;
  TStack_3a8.BaseBitIndex = uStack_428;
  uStack_388 = CONCAT44(uStack_41c,iStack_420);
  pFStack_448 = this_00;
  pTStack_438 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  pFStack_3b0 = this_00;
  TStack_3a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar23 < 0) || (iVar22 < (int)uVar23)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar18 = pUStack_450;
  uVar12 = *(uint *)&(this_00->GeneratedComponents).Elements.field_0x28;
  if (uVar23 != uVar12) {
    puVar5 = *(undefined1 **)&(this_00->GeneratedComponents).Elements.field_0x20;
    puVar25 = puVar1;
    if (puVar5 != (undefined1 *)0x0) {
      puVar25 = puVar5;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar21 * 4);
    while (uVar23 == 0) {
      iVar21 = iVar21 + 1;
      uVar27 = uVar27 + 0x20;
      uVar23 = uVar12;
      if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 < iVar21)
      goto LAB_149f56d50;
      uVar23 = *(uint *)(puVar25 + (longlong)iVar21 * 4);
    }
    uVar3 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iStack_3e4 = (int)lVar17;
    uVar23 = iStack_3e4 + -1 + uVar27;
    if ((int)uVar12 < (int)uVar23) {
      uVar23 = uVar12;
    }
  }
LAB_149f56d50:
  while( true ) {
    pFVar9 = pFStack_3b0;
    if (*(int *)&(pFStack_3b0->GeneratedComponents).Elements.field_0x8 -
        *(int *)&(pFStack_3b0->GeneratedComponents).Elements.field_0x34 != (int)uStack_388) {
      uStack_458 = 0;
      `TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&uStack_458);
    }
    uVar27 = uStack_2c0;
    if (((TStack_3a8.CurrentBitIndex == uVar23) &&
        (TStack_3a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar9 == this_00)
       ) break;
    lVar20 = (longlong)TStack_3a8.CurrentBitIndex * 0x2c;
    lVar17 = *(longlong *)&(pFVar9->GeneratedComponents).Elements;
    puVar4 = (undefined4 *)(lVar20 + 0x10 + lVar17);
    uStack_340 = *puVar4;
    FStack_418.ObjectIndex = puVar4[1];
    FStack_418.ObjectSerialNumber = puVar4[2];
    uStack_334 = puVar4[3];
    uStack_350 = *(undefined8 *)(lVar20 + lVar17);
    uStack_348 = ((undefined8 *)(lVar20 + lVar17))[1];
    uStack_330 = *(undefined4 *)(lVar20 + 0x20 + lVar17);
    iStack_33c = FStack_418.ObjectIndex;
    iStack_338 = FStack_418.ObjectSerialNumber;
    pUVar14 = (UPCGComponent *)FWeakObjectPtr::Get(&FStack_418);
    if (pUVar14 == pUVar18) {
      TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
      ::Emplace<FPCGRuntimeGenScheduler::FGridGenerationKey_const_&>
                ((TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
                  *)auStack_2e8,(FGridGenerationKey *)auStack_3e0,(bool *)&uStack_350);
    }
    TStack_3a8.UnvisitedBitMask = TStack_3a8.UnvisitedBitMask & ~TStack_3a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3a8);
  }
  uStack_440 = 0;
  FStack_298.SecondaryData = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0;
  iStack_50 = 0;
  iStack_4c = 0x10;
  uStack_42c = uStack_440;
  uStack_428 = uStack_440;
  if (uStack_2c0 != 0) {
    puVar26 = (uint *)(auStack_2e8 + 0x10);
    if (puStack_2c8 != (uint *)0x0) {
      puVar26 = puStack_2c8;
    }
    uVar23 = *puVar26;
    uStack_440 = 0;
    uStack_428 = 0;
    while (uVar23 == 0) {
      uStack_440 = uStack_440 + 1;
      uStack_428 = uStack_428 + 0x20;
      uStack_42c = uStack_2c0;
      if ((int)((uStack_2c0 - 1) + ((int)(uStack_2c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_440)
      goto LAB_149f56e91;
      uVar23 = puVar26[(int)uStack_440];
    }
    uStack_410 = (ulonglong)(-uVar23 & uVar23);
    uVar3 = uStack_410 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    auStack_3e0._4_4_ = (undefined4)lVar17;
    uStack_42c = (auStack_3e0._4_4_ - 1) + uStack_428;
    if ((int)uStack_2c0 < (int)uStack_42c) {
      uStack_42c = uStack_2c0;
    }
  }
LAB_149f56e91:
  pFStack_448 = (FPCGRuntimeGenScheduler *)auStack_2e8;
  uVar23 = uStack_2c0 & 0xffffffe0;
  uStack_43c = (uint)uStack_410;
  uStack_424 = uStack_2ec;
  pTStack_438 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_2e8 + 0x10);
  iStack_420 = auStack_2e8._8_4_ - iStack_2b4;
  uStack_430 = 0xffffffff;
  TStack_378.CurrentBitIndex = uStack_42c;
  TStack_378.UnvisitedBitMask = 0xffffffff;
  TStack_378._padding_ = CONCAT44(uStack_43c,uStack_440);
  iVar22 = (int)uStack_2c0 >> 5;
  TStack_378._28_4_ = uStack_2ec;
  TStack_378.BaseBitIndex = uStack_428;
  uStack_358 = CONCAT44(uStack_41c,iStack_420);
  bVar19 = (byte)uStack_2c0;
  plStack_380 = (longlong *)pFStack_448;
  TStack_378.Array = pTStack_438;
  if (((int)uStack_2c0 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar27 != uStack_2c0) {
    puVar26 = (uint *)(auStack_2e8 + 0x10);
    if (puStack_2c8 != (uint *)0x0) {
      puVar26 = puStack_2c8;
    }
    uVar27 = -1 << (bVar19 & 0x1f) & puVar26[iVar22];
    while (uVar27 == 0) {
      iVar22 = iVar22 + 1;
      uVar23 = uVar23 + 0x20;
      uVar27 = uStack_2c0;
      if ((int)(((int)(uStack_2c0 - 1) >> 0x1f & 0x1fU) + (uStack_2c0 - 1)) >> 5 < iVar22)
      goto LAB_149f56fc1;
      uVar27 = puVar26[iVar22];
    }
    uVar3 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    auStack_3e0._8_4_ = (undefined4)lVar17;
    uVar27 = auStack_3e0._8_4_ + -1 + uVar23;
    if ((int)uStack_2c0 < (int)uVar27) {
      uVar27 = uStack_2c0;
    }
  }
LAB_149f56fc1:
  do {
    plVar10 = plStack_380;
    if ((int)plStack_380[1] - *(int *)((longlong)plStack_380 + 0x34) != (int)uStack_358) {
      uStack_457 = 0;
      `TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&uStack_457);
    }
    iVar22 = iStack_50;
    if (((TStack_378.CurrentBitIndex == uVar27) &&
        (TStack_378.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_2e8 + 0x10))) &&
       (plVar10 == (longlong *)auStack_2e8)) {
      FVar24 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&FStack_298;
      if (FStack_298.SecondaryData !=
          (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
        FVar24 = FStack_298.SecondaryData;
      }
      FVar16 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)
               ((longlong)FVar24 + (longlong)iStack_50 * 0x24);
      while( true ) {
        if (iStack_50 != iVar22) {
          `TCheckedPointerIterator<FPCGRuntimeGenScheduler::FGridGenerationKey,int,0>::operator!='::
          __l2::<lambda_1>::operator()(auStack_456);
        }
        if (FVar24 == FVar16) break;
        if (*(int *)&(this_00->GeneratedComponents).Elements.field_0x8 !=
            *(int *)&(this_00->GeneratedComponents).Elements.field_0x34) {
          uVar23 = ::GetTypeHash((FGridGenerationKey *)FVar24);
          TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
          ::RemoveImpl<FPCGRuntimeGenScheduler::FGridGenerationKey>
                    (&this_00->GeneratedComponents,uVar23,(FGridGenerationKey *)FVar24);
        }
        FVar24 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)
                 ((longlong)FVar24 + 0x24);
      }
      FPCGRuntimeGenScheduler::CleanupRemainingComponents(this_00,pUStack_450);
      if (FStack_298.SecondaryData !=
          (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
        FMemory::Free((void *)FStack_298.SecondaryData);
      }
      iStack_2a0 = 0;
      if (FStack_2a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_2a8);
      }
      TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)auStack_2e8);
      return;
    }
    FVar24 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)
             ((longlong)TStack_378.CurrentBitIndex * 0x2c + *plVar10);
    FStack_408.ObjectIndex = *(int *)((longlong)FVar24 + 0x14);
    FStack_408.ObjectSerialNumber = *(int *)((longlong)FVar24 + 0x18);
    pUVar15 = FWeakObjectPtr::Get(&FStack_408);
    if (pUVar15 == (UObject *)0x0) {
      FVar16 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&FStack_298;
      if (FStack_298.SecondaryData !=
          (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
        FVar16 = FStack_298.SecondaryData;
      }
      if ((ulonglong)FVar16 <= (ulonglong)FVar24) {
        FVar16 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&FStack_298;
        if (FStack_298.SecondaryData !=
            (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
          FVar16 = FStack_298.SecondaryData;
        }
        if ((ulonglong)FVar24 < (ulonglong)((longlong)FVar16 + (longlong)iStack_4c * 0x24)) {
          lStack_470 = (longlong)iStack_50;
          uStack_468 = 0x24;
          FStack_480 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&FStack_298;
          if (FStack_298.SecondaryData !=
              (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
            FStack_480 = FStack_298.SecondaryData;
          }
          FStack_488 = FVar24;
          lStack_478 = (longlong)iStack_4c;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
      if (iStack_50 == iStack_4c) {
        iStack_50 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>_>
                              (0x424,&FStack_298,&iStack_4c);
      }
      uVar7 = *(undefined8 *)FVar24;
      uVar8 = *(undefined8 *)((longlong)FVar24 + 8);
      FVar16 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&FStack_298;
      if (FStack_298.SecondaryData !=
          (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
        FVar16 = FStack_298.SecondaryData;
      }
      lVar17 = (longlong)iStack_50;
      pFVar2 = (FGridGenerationKey *)((longlong)FVar16 + lVar17 * 0x24);
      iStack_50 = iStack_50 + 1;
      pFVar2->bUse2DGrid = (bool)(char)uVar7;
      *(int3 *)&pFVar2->field_0x1 = (int3)((ulonglong)uVar7 >> 8);
      pFVar2->GridSize = (int)((ulonglong)uVar7 >> 0x20);
      *(undefined8 *)&(pFVar2->GridCoords).field0_0x0 = uVar8;
      uVar7 = *(undefined8 *)((longlong)FVar24 + 0x18);
      *(undefined8 *)((uchar *)((longlong)FVar16 + 0x10) + lVar17 * 0x24) =
           *(undefined8 *)((longlong)FVar24 + 0x10);
      *(undefined8 *)((uchar *)((longlong)FVar16 + 0x10) + lVar17 * 0x24 + 8) = uVar7;
      ((int *)((longlong)FVar16 + 0x20))[lVar17 * 9] = *(int *)((longlong)FVar24 + 0x20);
    }
    else {
      uVar23 = *(uint *)((longlong)FVar24 + 4);
      uStack_3b8 = 0;
      FStack_400.bIs2DGrid = *(bool *)FVar24;
      auStack_3e0._32_8_ = 0;
      auStack_3e0[0x1c] = FStack_400.bIs2DGrid;
      auStack_3e0._24_4_ = uVar23;
      auStack_3e0[0x1d] = 1;
      auStack_3e0._30_2_ = 0;
      FStack_400.bIsRuntime = true;
      FStack_400.RuntimeHash = 0;
      FStack_400.Hash.bIsSet = false;
      FStack_400.GridSize = uVar23;
      uVar12 = PCGHiGenGrid::UnboundedGridSize();
      pUVar18 = pUStack_450;
      if (uVar23 != uVar12) {
        auStack_3e0._12_8_ = *(undefined8 *)((longlong)FVar24 + 8);
        auStack_3e0._20_4_ = *(undefined4 *)((longlong)FVar24 + 0x10);
        pUVar18 = FPCGActorAndComponentMapping::GetLocalComponent
                            (this_00->ActorAndComponentMapping,&FStack_400,
                             (TIntVector3<int> *)(auStack_3e0 + 0xc),pUStack_450);
        if (pUVar18 == (UPCGComponent *)0x0) goto LAB_149f571b9;
      }
      FPCGRuntimeGenScheduler::CleanupComponent(this_00,(FGridGenerationKey *)FVar24,pUVar18);
    }
LAB_149f571b9:
    TStack_378.UnvisitedBitMask = TStack_378.UnvisitedBitMask & ~TStack_378._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_378);
  } while( true );
}

// OnPCGQualityLevelChanged @ 149f572f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGSubsystem::OnPCGQualityLevelChanged(UPCGSubsystem *this)

{
  UPCGSubsystem *local_res8 [4];
  code *local_18;
  UPCGSubsystem **local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGSubsystem::OnPCGQualityLevelChanged'::__l2::<lambda_1>,void,UPCGComponent_*>
             ::Call;
  local_res8[0] = this;
  FPCGActorAndComponentMapping::ForAllOriginalComponents
            ((this->ActorAndComponentMapping).Ptr,
             (TFunctionRef<void___cdecl(UPCGComponent_*)> *)&local_18);
  return;
}

// PostInitialize @ 149f57c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGSubsystem::PostInitialize(UPCGSubsystem *this)

{
  ULevel *pUVar1;
  FPCGActorAndComponentMapping *pFVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  FPCGRuntimeGenScheduler *this_00;
  FPCGRuntimeGenScheduler *pFVar6;
  FLLMScope local_res8 [2];
  FName local_res10;
  UPCGSubsystem *local_res18;
  UClass *local_res20;
  FMemScope local_38;
  code *local_30;
  UPCGSubsystem **local_28;
  
  UWorldSubsystem::PostInitialize((UWorldSubsystem *)this);
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_38,&local_res10,true);
  if (this->PCGWorldActor == (APCGWorldActor *)0x0) {
    pUVar5 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    if (pUVar5 != (UWorld *)0x0) {
      pUVar1 = (pUVar5->PersistentLevel).field0_0x0.DebugPtr;
      local_30 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPCGSubsystem::PostInitialize'::__l8::<lambda_1>,bool,AActor_*>
                 ::Call;
      local_28 = &local_res18;
      local_res18 = this;
      local_res20 = APCGWorldActor::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res20);
      }
      UPCGActorHelpers::ForEachActorInLevel
                (pUVar1,(TSubclassOf<AActor>)&local_res20,
                 (TFunctionRef<bool___cdecl(AActor_*)> *)&local_30);
    }
  }
  FPCGActorAndComponentMapping::Initialize((this->ActorAndComponentMapping).Ptr);
  IPCGBaseSubsystem::InitializeBaseSubsystem((IPCGBaseSubsystem *)&this->_padding_);
  if (this->RuntimeGenScheduler != (FPCGRuntimeGenScheduler *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!RuntimeGenScheduler",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                       ,0xf3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = ::operator_new(0x248);
  pFVar6 = (FPCGRuntimeGenScheduler *)0x0;
  if (this_00 != (FPCGRuntimeGenScheduler *)0x0) {
    pFVar2 = (this->ActorAndComponentMapping).Ptr;
    pUVar5 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    pFVar6 = FPCGRuntimeGenScheduler::FPCGRuntimeGenScheduler(this_00,pUVar5,pFVar2);
  }
  this->RuntimeGenScheduler = pFVar6;
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RefreshAllRuntimeGenComponents @ 149f58d90

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
UPCGSubsystem::RefreshAllRuntimeGenComponents(UPCGSubsystem *this,EPCGChangeType param_1)

{
  ulonglong uVar1;
  UPCGComponent *pUVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  longlong *local_f0;
  int iStack_e8;
  uint uStack_e4;
  TBitArray<FDefaultBitArrayAllocator> *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  int local_d0;
  uint uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  longlong *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  FPCGActorAndComponentMapping::GetAllRegisteredComponents
            ((this->ActorAndComponentMapping).Ptr,
             (TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *)
             local_88);
  uVar9 = local_60;
  iStack_e8 = 0;
  local_d0 = 0;
  uStack_e4 = 1;
  uStack_d4 = 0;
  if (local_60 != 0) {
    puVar10 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar10 = local_68;
    }
    uVar11 = *puVar10;
    while (uVar11 == 0) {
      lVar7 = (longlong)iStack_e8;
      local_d0 = local_d0 + 0x20;
      iStack_e8 = iStack_e8 + 1;
      uStack_d4 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_e8)
      goto LAB_149f58e50;
      uVar11 = puVar10[lVar7 + 1];
    }
    uStack_e4 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_e4 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_c0 = (int)lVar7;
    uStack_d4 = local_c0 + -1 + local_d0;
    if ((int)local_60 < (int)uStack_d4) {
      uStack_d4 = local_60;
    }
  }
LAB_149f58e50:
  local_f0 = (longlong *)local_88;
  local_e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar11 = local_60 & 0xffffffe0;
  iStack_c8 = local_88._8_4_ - local_54;
  uStack_d8 = 0xffffffff;
  TStack_b0.CurrentBitIndex = uStack_d4;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_e4,iStack_e8);
  iVar8 = (int)local_60 >> 5;
  TStack_b0._28_4_ = uStack_d4;
  TStack_b0.BaseBitIndex = local_d0;
  uStack_90 = CONCAT44(uStack_c4,iStack_c8);
  bVar6 = (byte)local_60;
  uStack_cc = uStack_d4;
  local_b8 = local_f0;
  TStack_b0.Array = local_e0;
  if (((int)local_60 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar9 != local_60) {
    puVar10 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar10 = local_68;
    }
    uVar9 = -1 << (bVar6 & 0x1f) & puVar10[iVar8];
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar8;
      uVar11 = uVar11 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_149f58f4d;
      uVar9 = puVar10[lVar7 + 1];
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar11;
    if ((int)local_60 < (int)uVar9) {
      uVar9 = local_60;
    }
  }
LAB_149f58f4d:
  while( true ) {
    plVar4 = local_b8;
    if ((int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34) != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_f8);
    }
    if (((TStack_b0.CurrentBitIndex == uVar9) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar4 == (longlong *)local_88)) break;
    pUVar2 = *(UPCGComponent **)(*plVar4 + (longlong)TStack_b0.CurrentBitIndex * 0x10);
    if ((pUVar2->GenerationTrigger == GenerateAtRuntime) &&
       (this->RuntimeGenScheduler != (FPCGRuntimeGenScheduler *)0x0)) {
      FPCGRuntimeGenScheduler::RefreshComponent
                (this->RuntimeGenScheduler,pUVar2,(bool)((byte)(param_1 >> 6) & 1));
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// RefreshRuntimeGenComponent @ 149f59df0

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
UPCGSubsystem::RefreshRuntimeGenComponent
          (UPCGSubsystem *this,UPCGComponent *param_1,EPCGChangeType param_2)

{
  if (((param_1 != (UPCGComponent *)0x0) && (param_1->GenerationTrigger == GenerateAtRuntime)) &&
     (this->RuntimeGenScheduler != (FPCGRuntimeGenScheduler *)0x0)) {
    FPCGRuntimeGenScheduler::RefreshComponent
              (this->RuntimeGenScheduler,param_1,(bool)((byte)(param_2 >> 6) & 1));
    return;
  }
  return;
}

// RegisterBeginTickAction @ 149f59e20

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
UPCGSubsystem::RegisterBeginTickAction(UPCGSubsystem *this,TFunction<void___cdecl(void)> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  
  iVar2 = (this->BeginTickActions).ArrayNum;
  piVar1 = &(this->BeginTickActions).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&(this->BeginTickActions).AllocatorInstance,piVar1);
  }
  (this->BeginTickActions).ArrayNum = iVar2 + 1;
  pFVar4 = (this->BeginTickActions).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
  *(longlong *)pFVar4 = *(longlong *)param_1;
  *(longlong *)(pFVar4 + 0x28) = 0;
  if (*(longlong *)pFVar4 != 0) {
    puVar3 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar3)();
  }
  return;
}

// RegisterOrUpdatePCGComponent @ 149f5a010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UPCGSubsystem::RegisterOrUpdatePCGComponent(UPCGSubsystem *this,UPCGComponent *param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = FPCGActorAndComponentMapping::RegisterOrUpdatePCGComponent
                    ((this->ActorAndComponentMapping).Ptr,param_1,param_2);
  return bVar1;
}

// RegisterPCGWorldActor @ 149f5a020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGSubsystem::RegisterPCGWorldActor(UPCGSubsystem *this,APCGWorldActor *param_1)

{
  APCGWorldActor *pAVar1;
  code *pcVar2;
  bool bVar3;
  
  pAVar1 = this->PCGWorldActor;
  if (pAVar1 == (APCGWorldActor *)0x0) {
    this->PCGWorldActor = param_1;
    return;
  }
  if (param_1 != pAVar1) {
    if (param_1 == (APCGWorldActor *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OtherWorldActor && this != OtherWorldActor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGWorldActor.cpp"
                         ,200,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UPCGLandscapeCache::TakeOwnership
              ((pAVar1->LandscapeCacheObject).field0_0x0.DebugPtr,
               (param_1->LandscapeCacheObject).field0_0x0.DebugPtr);
  }
  return;
}

// RegisterPartitionActor @ 149f5a0a0

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
UPCGSubsystem::RegisterPartitionActor(UPCGSubsystem *this,APCGPartitionActor *param_1)

{
  FPCGActorAndComponentMapping::RegisterPartitionActor((this->ActorAndComponentMapping).Ptr,param_1)
  ;
  return;
}

// RemapPCGComponent @ 149f5cd20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UPCGSubsystem::RemapPCGComponent
          (UPCGSubsystem *this,UPCGComponent *param_1,UPCGComponent *param_2,bool param_3)

{
  bool bVar1;
  
  bVar1 = FPCGActorAndComponentMapping::RemapPCGComponent
                    ((this->ActorAndComponentMapping).Ptr,param_1,param_2,param_3);
  return bVar1;
}

// ScheduleCleanup @ 149f5e980

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
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

ulong64 __thiscall
UPCGSubsystem::ScheduleCleanup
          (UPCGSubsystem *this,UPCGComponent *param_1,bool param_2,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_3)

{
  APCGWorldActor *pAVar1;
  FPCGGraphExecutor *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  UPCGGraph *pUVar6;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar7;
  UPCGComponent *this_01;
  undefined1 auStackY_198 [32];
  bool local_148 [8];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_140;
  ulong64 local_130;
  FWeakObjectPtr local_128;
  UPCGSubsystem *local_120;
  undefined4 uStack_118;
  FWeakObjectPtr FStack_114;
  undefined4 uStack_10c;
  UPCGComponent *local_108;
  undefined1 local_100 [8];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_e0;
  code *local_c8 [5];
  undefined8 *local_a0;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_1 == (UPCGComponent *)0x0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    pAVar1 = this->PCGWorldActor;
    local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_98.ArrayNum = 0;
    local_148[0] = false;
    local_98.ArrayMax = 0xd;
    pUVar6 = UPCGComponent::GetGraph(param_1);
    bVar3 = PCGHelpers::GetGenerationGridSizes(pUVar6,pAVar1,&local_98,local_148);
    if ((!bVar3) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5963826634711630593>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                           ,0x301,
                           "PCGHelpers::GetGenerationGridSizes(PCGComponent->GetGraph(), GetPCGWorldActor(), GridSizes, bHasUnbounded)"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ArrayNum = 0;
    local_140.ArrayMax = 0;
    bVar3 = UPCGComponent::IsPartitioned(param_1);
    if (((!bVar3) || (local_148[0] != false)) &&
       (local_130 = UPCGComponent::CreateCleanupTask(param_1,param_2,param_3),
       local_130 != 0xffffffffffffffff)) {
      if (((local_140.AllocatorInstance.Data <= (FScriptContainerElement *)&local_130) &&
          ((FScriptContainerElement *)&local_130 <
           local_140.AllocatorInstance.Data + (longlong)local_140.ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      iVar4 = local_140.ArrayNum;
      if (local_140.ArrayNum == local_140.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_140.AllocatorInstance,&local_140.ArrayMax);
      }
      local_140.ArrayNum = iVar4 + 1;
      *(ulong64 *)(local_140.AllocatorInstance.Data + (longlong)iVar4 * 8) = local_130;
    }
    bVar3 = UPCGComponent::IsPartitioned(param_1);
    if (bVar3) {
      local_e8 = local_100;
      local_f0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPCGSubsystem::ScheduleCleanup'::__l14::<lambda_1>,unsigned___int64,UPCGComponent_*,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_const_&>
                 ::Call;
      local_100[0] = param_2;
      local_f8 = param_3;
      pTVar7 = FPCGActorAndComponentMapping::DispatchToRegisteredLocalComponents
                         ((this->ActorAndComponentMapping).Ptr,&local_e0,param_1,
                          (TFunctionRef<unsigned___int64___cdecl(UPCGComponent_*,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_const_&)>
                           *)&local_f0);
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
      Append<unsigned___int64,TSizedDefaultAllocator<32>_>(&local_140,pTVar7);
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_128.ObjectIndex = 0;
    local_128.ObjectSerialNumber = 0;
    local_108 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_108);
    uStack_118 = CONCAT31(uStack_118._1_3_,param_2);
    uVar5 = 0xffffffffffffffff;
    FStack_114.ObjectIndex = local_128.ObjectIndex;
    FStack_114.ObjectSerialNumber = local_128.ObjectSerialNumber;
    local_120 = this;
    if (local_140.ArrayNum == 0) {
      this_01 = (UPCGComponent *)FWeakObjectPtr::Get(&FStack_114);
      if ((this_01 != (UPCGComponent *)0x0) && (((uint)this_01->_padding_ >> 0x1e & 1) == 0)) {
        UPCGComponent::PostCleanupGraph(this_01,(bool)(char)uStack_118);
        if (((char)uStack_118 != '\0') && (bVar3 = UPCGComponent::IsPartitioned(this_01), bVar3)) {
          FPCGActorAndComponentMapping::DeleteMappingPCGComponentPartitionActor
                    ((local_120->ActorAndComponentMapping).Ptr,this_01);
        }
      }
    }
    else {
      if ((this->_padding_ == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      this_00 = (FPCGGraphExecutor *)this->_padding_;
      local_c8[0] = (code *)0x0;
      local_a0 = FMemory::Malloc(0x20,8);
      *local_a0 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UPCGSubsystem::ScheduleCleanup'::`2'::<lambda_2>,0,1>::
                   _vftable_;
      local_a0[1] = local_120;
      local_a0[2] = CONCAT44(FStack_114.ObjectIndex,uStack_118);
      local_a0[3] = CONCAT44(uStack_10c,FStack_114.ObjectSerialNumber);
      if (local_a0 + 1 != (undefined8 *)0x0) {
        local_c8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UPCGSubsystem::ScheduleCleanup'::__l2::<lambda_2>,bool>::
                      Call;
      }
      uVar5 = FPCGGraphExecutor::ScheduleGeneric
                        (this_00,(TFunction<bool___cdecl(void)> *)local_c8,
                         (IPCGGraphExecutionSource *)&param_1->_padding_,&local_140);
    }
    if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
    }
  }
  return uVar5;
}

// ScheduleComponent @ 149f5ed20

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
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

ulong64 __thiscall
UPCGSubsystem::ScheduleComponent
          (UPCGSubsystem *this,UPCGComponent *param_1,EPCGHiGenGrid param_2,bool param_3,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4)

{
  APCGWorldActor *pAVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  EPCGHiGenGrid EVar4;
  int iVar5;
  ulong64 uVar6;
  UPCGGraph *pUVar7;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  undefined1 auStackY_1c8 [32];
  bool local_178 [8];
  ulong64 local_170;
  ForAnyElementType local_168;
  int local_160;
  int local_15c;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_158;
  FWeakObjectPtr local_148;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_140;
  UPCGComponent *local_130;
  code *local_128;
  UPCGComponent **local_120;
  UPCGComponent *local_118;
  EPCGHiGenGrid local_110;
  ForAnyElementType *local_108;
  undefined1 local_100;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *local_f8;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_f0;
  code *local_d8 [2];
  undefined **local_c8;
  FWeakObjectPtr local_c0;
  undefined8 local_b0;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphExecutor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                         ,0x25c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  if (param_1 == (UPCGComponent *)0x0) {
    return 0xffffffffffffffff;
  }
  pAVar1 = this->PCGWorldActor;
  local_a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_a8.ArrayNum = 0;
  local_178[0] = false;
  local_a8.ArrayMax = 0xd;
  pUVar7 = UPCGComponent::GetGraph(param_1);
  bVar3 = PCGHelpers::GetGenerationGridSizes(pUVar7,pAVar1,&local_a8,local_178);
  if ((!bVar3) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5963826634711630437>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                         ,0x265,
                         "PCGHelpers::GetGenerationGridSizes(PCGComponent->GetGraph(), GetPCGWorldActor(), GridSizes, bHasUnbounded)"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  bVar3 = UPCGComponent::IsPartitioned(param_1);
  if ((bVar3) && (param_1->GenerationTrigger != GenerateAtRuntime)) {
    FPCGActorAndComponentMapping::UpdateMappingPCGComponentPartitionActor
              ((this->ActorAndComponentMapping).Ptr,param_1,true);
  }
  uVar6 = 0xffffffffffffffff;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_170 = 0xffffffffffffffff;
  bVar3 = UPCGComponent::IsPartitioned(param_1);
  if (bVar3) {
    if ((local_178[0] == false) || ((-1 < (int)param_2 && (param_2 != Uninitialized))))
    goto LAB_149f5ef5b;
  }
  else if ((param_2 != Uninitialized) &&
          (EVar4 = UPCGComponent::GetGenerationGrid(param_1), (param_2 & EVar4) == Uninitialized))
  goto LAB_149f5ef5b;
  local_170 = UPCGComponent::CreateGenerateTask(param_1,param_3,param_4);
  if (local_170 != 0xffffffffffffffff) {
    if (((local_158.AllocatorInstance.Data <= (FScriptContainerElement *)&local_170) &&
        ((FScriptContainerElement *)&local_170 <
         local_158.AllocatorInstance.Data + (longlong)local_158.ArrayMax * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    iVar5 = local_158.ArrayNum;
    if (local_158.ArrayNum == local_158.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_158.AllocatorInstance,&local_158.ArrayMax);
    }
    local_158.ArrayNum = iVar5 + 1;
    *(ulong64 *)(local_158.AllocatorInstance.Data + (longlong)iVar5 * 8) = local_170;
  }
LAB_149f5ef5b:
  bVar3 = UPCGComponent::IsPartitioned(param_1);
  if ((bVar3) && (bVar3 = PCGHiGenGrid::IsValidGridOrUninitialized(param_2), bVar3)) {
    local_168.Data = (FScriptContainerElement *)0x0;
    local_160 = param_4->ArrayNum;
    lVar9 = (longlong)local_160;
    _Src = (param_4->AllocatorInstance).Data;
    if (local_160 == 0) {
      local_15c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_160,0,&local_168,local_160,&local_15c);
      memcpy(local_168.Data,_Src,lVar9 << 3);
    }
    if (local_170 != 0xffffffffffffffff) {
      if (((local_168.Data <= (FScriptContainerElement *)&local_170) &&
          ((FScriptContainerElement *)&local_170 < local_168.Data + (longlong)local_15c * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      if (local_160 == local_15c) {
        local_160 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_168,&local_15c);
      }
      *(ulong64 *)(local_168.Data + (longlong)local_160 * 8) = local_170;
      local_160 = local_160 + 1;
    }
    local_108 = &local_168;
    local_f8 = &local_a8;
    local_120 = &local_118;
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<`UPCGSubsystem::ScheduleComponent'::__l29::<lambda_1>,unsigned___int64,UPCGComponent_*,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_const_&>
                ::Call;
    local_118 = param_1;
    local_110 = param_2;
    local_100 = param_3;
    pTVar8 = FPCGActorAndComponentMapping::DispatchToRegisteredLocalComponents
                       ((this->ActorAndComponentMapping).Ptr,&local_f0,param_1,
                        (TFunctionRef<unsigned___int64___cdecl(UPCGComponent_*,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_const_&)>
                         *)&local_128);
    TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
    Append<unsigned___int64,TSizedDefaultAllocator<32>_>(&local_140,pTVar8);
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data);
    }
  }
  if ((local_140.ArrayNum == 0) && (local_158.ArrayNum == 0)) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    UPCGComponent::OnProcessGraphAborted(param_1,false,true);
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_148.ObjectIndex = 0;
    local_148.ObjectSerialNumber = 0;
    local_130 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_130);
    if ((this->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    local_c8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UPCGSubsystem::ScheduleComponent'::`35'::<lambda_2>,0,0>::
                _vftable_;
    local_c0 = local_148;
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UPCGSubsystem::ScheduleComponent'::__l35::<lambda_2>,bool,FPCGContext_*>
                  ::Call;
    local_b0 = 0;
    uVar6 = FPCGGraphExecutor::ScheduleGenericWithContext
                      ((FPCGGraphExecutor *)this->_padding_,
                       (TFunction<bool___cdecl(FPCGContext_*)> *)local_d8,
                       (IPCGGraphExecutionSource *)&param_1->_padding_,&local_140,&local_158,true);
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
  }
  return uVar6;
}

// ScheduleGeneric @ 149f5f2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
UPCGSubsystem::ScheduleGeneric
          (UPCGSubsystem *this,TFunction<bool___cdecl(void)> *param_1,UPCGComponent *param_2,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_3)

{
  FPCGGraphExecutor *this_00;
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  IPCGGraphExecutionSource *pIVar6;
  TFunction<bool___cdecl(void)> local_58;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphExecutor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                       ,0x378,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  this_00 = (FPCGGraphExecutor *)this->_padding_;
  local_58._0_8_ = *(undefined8 *)param_1;
  local_58._40_8_ = 0;
  pIVar6 = (IPCGGraphExecutionSource *)&param_2->_padding_;
  if (param_2 == (UPCGComponent *)0x0) {
    pIVar6 = (IPCGGraphExecutionSource *)0x0;
  }
  if (local_58._0_8_ != 0) {
    puVar4 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar4)(puVar4,&local_58.field_0x10);
  }
  uVar3 = FPCGGraphExecutor::ScheduleGeneric(this_00,&local_58,pIVar6,param_3);
  if (*(longlong *)param_1 != 0) {
    plVar5 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return uVar3;
}

// ScheduleGeneric @ 149f5f3f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
UPCGSubsystem::ScheduleGeneric
          (UPCGSubsystem *this,TFunction<bool___cdecl(void)> *param_1,
          TFunction<void___cdecl(void)> *param_2,UPCGComponent *param_3,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4)

{
  FPCGGraphExecutor *this_00;
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  IPCGGraphExecutionSource *pIVar6;
  TFunction<void___cdecl(void)> local_98;
  TFunction<bool___cdecl(void)> local_68;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphExecutor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                       ,0x37e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  this_00 = (FPCGGraphExecutor *)this->_padding_;
  local_98._0_8_ = *(undefined8 *)param_2;
  local_98._40_8_ = 0;
  pIVar6 = (IPCGGraphExecutionSource *)&param_3->_padding_;
  if (param_3 == (UPCGComponent *)0x0) {
    pIVar6 = (IPCGGraphExecutionSource *)0x0;
  }
  if (local_98._0_8_ != 0) {
    puVar4 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar4)(puVar4,&local_98.field_0x10);
  }
  local_68._0_8_ = *(undefined8 *)param_1;
  local_68._40_8_ = 0;
  if (local_68._0_8_ != 0) {
    puVar4 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar4)(puVar4,&local_68.field_0x10);
  }
  uVar3 = FPCGGraphExecutor::ScheduleGeneric(this_00,&local_68,&local_98,pIVar6,param_4);
  if (*(longlong *)param_1 != 0) {
    plVar5 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return uVar3;
}

// ScheduleGenericWithContext @ 149f5f550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
UPCGSubsystem::ScheduleGenericWithContext
          (UPCGSubsystem *this,TFunction<bool___cdecl(FPCGContext_*)> *param_1,
          UPCGComponent *param_2,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4)

{
  FPCGGraphExecutor *this_00;
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  IPCGGraphExecutionSource *pIVar6;
  TFunction<bool___cdecl(FPCGContext_*)> local_68;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphExecutor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                       ,900,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  this_00 = (FPCGGraphExecutor *)this->_padding_;
  local_68._0_8_ = *(undefined8 *)param_1;
  local_68._40_8_ = 0;
  pIVar6 = (IPCGGraphExecutionSource *)&param_2->_padding_;
  if (param_2 == (UPCGComponent *)0x0) {
    pIVar6 = (IPCGGraphExecutionSource *)0x0;
  }
  if (local_68._0_8_ != 0) {
    puVar4 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar4)(puVar4,&local_68.field_0x10);
  }
  uVar3 = FPCGGraphExecutor::ScheduleGenericWithContext
                    (this_00,&local_68,pIVar6,param_3,param_4,false);
  if (*(longlong *)param_1 != 0) {
    plVar5 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return uVar3;
}

// ScheduleGenericWithContext @ 149f5f660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
UPCGSubsystem::ScheduleGenericWithContext
          (UPCGSubsystem *this,TFunction<bool___cdecl(FPCGContext_*)> *param_1,
          TFunction<void___cdecl(FPCGContext_*)> *param_2,UPCGComponent *param_3,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_5)

{
  FPCGGraphExecutor *this_00;
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  IPCGGraphExecutionSource *pIVar6;
  TFunction<void___cdecl(FPCGContext_*)> local_a8;
  TFunction<bool___cdecl(FPCGContext_*)> local_78;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphExecutor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
                       ,0x38a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  this_00 = (FPCGGraphExecutor *)this->_padding_;
  local_a8._0_8_ = *(undefined8 *)param_2;
  local_a8._40_8_ = 0;
  pIVar6 = (IPCGGraphExecutionSource *)&param_3->_padding_;
  if (param_3 == (UPCGComponent *)0x0) {
    pIVar6 = (IPCGGraphExecutionSource *)0x0;
  }
  if (local_a8._0_8_ != 0) {
    puVar4 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar4)(puVar4,&local_a8.field_0x10);
  }
  local_78._0_8_ = *(undefined8 *)param_1;
  local_78._40_8_ = 0;
  if (local_78._0_8_ != 0) {
    puVar4 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar4)(puVar4,&local_78.field_0x10);
  }
  uVar3 = FPCGGraphExecutor::ScheduleGenericWithContext
                    (this_00,&local_78,&local_a8,pIVar6,param_4,param_5,false);
  if (*(longlong *)param_1 != 0) {
    plVar5 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return uVar3;
}

// ScheduleGraph @ 149f5f860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
UPCGSubsystem::ScheduleGraph
          (UPCGSubsystem *this,UPCGComponent *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (param_1 == (UPCGComponent *)0x0) {
    return 0xffffffffffffffff;
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = FPCGGraphExecutor::Schedule
                    ((FPCGGraphExecutor *)this->_padding_,
                     (IPCGGraphExecutionSource *)&param_1->_padding_,param_2,(FPCGStack *)0x0);
  return uVar3;
}

// ScheduleGraph @ 149f5f8f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

ulong64 __thiscall
UPCGSubsystem::ScheduleGraph
          (UPCGSubsystem *this,UPCGGraph *param_1,UPCGComponent *param_2,
          TSharedPtr<IPCGElement,1> *param_3,TSharedPtr<IPCGElement,1> *param_4,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_5,FPCGStack *param_6,
          bool param_7)

{
  int iVar1;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  ForAnyElementType local_88;
  undefined8 local_80;
  FPCGScheduleGraphParams local_78;
  
  local_88.Data = (FScriptContainerElement *)0x0;
  iVar1 = param_5->ArrayNum;
  _Src = (param_5->AllocatorInstance).Data;
  local_80 = CONCAT44(local_80._4_4_,iVar1);
  if (iVar1 == 0) {
    local_80 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_88,iVar1,(int *)((longlong)&local_80 + 4));
    memcpy(local_88.Data,_Src,(longlong)iVar1 << 3);
  }
  pTVar2 = (param_4->SharedReferenceCount).ReferenceController;
  local_78.InputElement.Object = param_4->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78.PreGraphElement.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  local_78.PreGraphElement.Object = param_3->Object;
  local_78.ExecutionSource = (IPCGGraphExecutionSource *)&param_2->_padding_;
  if (local_78.PreGraphElement.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    if (param_2 == (UPCGComponent *)0x0) {
      local_78.ExecutionSource = (IPCGGraphExecutionSource *)0x0;
    }
  }
  else {
    LOCK();
    (local_78.PreGraphElement.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.PreGraphElement.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    if (param_2 == (UPCGComponent *)0x0) {
      local_78.ExecutionSource = (IPCGGraphExecutionSource *)0x0;
    }
    LOCK();
    (local_78.PreGraphElement.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.PreGraphElement.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78.ExternalDependencies.AllocatorInstance.Data = local_88.Data;
  local_78.ExternalDependencies.ArrayNum = (int)local_80;
  local_78.ExternalDependencies.ArrayMax = local_80._4_4_;
  local_78.FromStack = param_6;
  local_78.bAllowHierarchicalGeneration = param_7;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.Graph = param_1;
  local_78.InputElement.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.PreGraphElement.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_78.ExecutionSource == (IPCGGraphExecutionSource *)0x0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    uVar5 = FPCGGraphExecutor::ScheduleGraph((FPCGGraphExecutor *)this->_padding_,&local_78);
  }
  if (local_78.ExternalDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ExternalDependencies.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.InputElement.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.PreGraphElement.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return uVar5;
}

// SetActorPCGData @ 149f605f0

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
UPCGSubsystem::SetActorPCGData(UPCGSubsystem *this,ulong64 param_1,UPCGData *param_2)

{
  if (this->_padding_ != 0) {
    FPCGPerExecutionCache::SetExecutionCachePCGData
              ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),param_1,ActorData,param_2);
    return;
  }
  return;
}

// SetBounds @ 149f60630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGSubsystem::SetBounds(UPCGSubsystem *this,ulong64 param_1,TBox<double> *param_2)

{
  if (this->_padding_ != 0) {
    FPCGPerExecutionCache::SetExecutionCacheBounds
              ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),param_1,Bounds,param_2);
    return;
  }
  return;
}

// SetInputPCGData @ 149f60c10

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
UPCGSubsystem::SetInputPCGData(UPCGSubsystem *this,ulong64 param_1,UPCGData *param_2)

{
  if (this->_padding_ != 0) {
    FPCGPerExecutionCache::SetExecutionCachePCGData
              ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),param_1,InputData,param_2);
    return;
  }
  return;
}

// SetLandscapeHeightPCGData @ 149f60c30

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
UPCGSubsystem::SetLandscapeHeightPCGData(UPCGSubsystem *this,ulong64 param_1,UPCGData *param_2)

{
  if (this->_padding_ != 0) {
    FPCGPerExecutionCache::SetExecutionCachePCGData
              ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),param_1,LandscapeHeightData,param_2
              );
    return;
  }
  return;
}

// SetLandscapePCGData @ 149f60c50

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
UPCGSubsystem::SetLandscapePCGData(UPCGSubsystem *this,ulong64 param_1,UPCGData *param_2)

{
  if (this->_padding_ != 0) {
    FPCGPerExecutionCache::SetExecutionCachePCGData
              ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),param_1,LandscapeData,param_2);
    return;
  }
  return;
}

// SetLocalSpaceBounds @ 149f60cc0

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
UPCGSubsystem::SetLocalSpaceBounds(UPCGSubsystem *this,ulong64 param_1,TBox<double> *param_2)

{
  if (this->_padding_ != 0) {
    FPCGPerExecutionCache::SetExecutionCacheBounds
              ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),param_1,LocalSpaceBounds,param_2);
    return;
  }
  return;
}

// SetOriginalActorPCGData @ 149f611b0

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
UPCGSubsystem::SetOriginalActorPCGData(UPCGSubsystem *this,ulong64 param_1,UPCGData *param_2)

{
  if (this->_padding_ != 0) {
    FPCGPerExecutionCache::SetExecutionCachePCGData
              ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),param_1,OriginalActorData,param_2);
    return;
  }
  return;
}

// SetOriginalBounds @ 149f611d0

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
UPCGSubsystem::SetOriginalBounds(UPCGSubsystem *this,ulong64 param_1,TBox<double> *param_2)

{
  if (this->_padding_ != 0) {
    FPCGPerExecutionCache::SetExecutionCacheBounds
              ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),param_1,OriginalBounds,param_2);
    return;
  }
  return;
}

// SetOriginalLocalSpaceBounds @ 149f611f0

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
UPCGSubsystem::SetOriginalLocalSpaceBounds
          (UPCGSubsystem *this,ulong64 param_1,TBox<double> *param_2)

{
  if (this->_padding_ != 0) {
    FPCGPerExecutionCache::SetExecutionCacheBounds
              ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),param_1,OriginalLocalSpaceBounds,
               param_2);
    return;
  }
  return;
}

// SetPCGData @ 149f61210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGSubsystem::SetPCGData(UPCGSubsystem *this,ulong64 param_1,UPCGData *param_2)

{
  if (this->_padding_ != 0) {
    FPCGPerExecutionCache::SetExecutionCachePCGData
              ((FPCGPerExecutionCache *)(this->_padding_ + 0x20),param_1,PCGData,param_2);
    return;
  }
  return;
}

// StaticRegisterNativesUPCGSubsystem @ 149f63cb0

void __cdecl UPCGSubsystem::StaticRegisterNativesUPCGSubsystem(void)

{
  return;
}

// Tick @ 149f65260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGSubsystem::Tick(UPCGSubsystem *this,float param_1)

{
  int iVar1;
  TFunction<void___cdecl(void)> *pTVar2;
  code *pcVar3;
  UPCGLandscapeCache *this_00;
  FName FVar4;
  undefined8 uVar5;
  longlong *plVar6;
  TFunction<void___cdecl(void)> *pTVar7;
  bool bVar8;
  FLLMScope local_res8 [5];
  FName local_res18;
  FMemScope local_res20;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId313,"UPCGSubsystem::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\PCGSubsystem.cpp"
               ,0x139);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId313);
  }
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  UTickableWorldSubsystem::Tick((UTickableWorldSubsystem *)this,param_1);
  pTVar2 = (TFunction<void___cdecl(void)> *)this->_padding_;
  this->_padding_ = 0;
  iVar1 = (int)this->_padding_;
  this->_padding_ = 0;
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)this->_padding_,0);
  *(undefined4 *)&this->_padding_ = 0;
  for (pTVar7 = pTVar2; pTVar7 != pTVar2 + iVar1; pTVar7 = pTVar7 + 1) {
    UE::Core::Private::Function::CheckCallable(*(void **)pTVar7);
    pcVar3 = *(code **)pTVar7;
    plVar6 = (longlong *)&pTVar7->field_0x10;
    if (*(longlong **)&pTVar7->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&pTVar7->field_0x28;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar3)(uVar5);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>(pTVar2,iVar1);
  if (pTVar2 != (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(pTVar2);
  }
  if ((char)this->_padding_ == '\0') {
    *(undefined1 *)&this->_padding_ = 1;
  }
  if ((this->_padding_ != 0) &&
     (this_00 = *(UPCGLandscapeCache **)(this->_padding_ + 0x2c8),
     this_00 != (UPCGLandscapeCache *)0x0)) {
    UPCGLandscapeCache::Tick(this_00,param_1);
  }
  local_res18 = (FName)(**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  FVar4 = local_res18;
  if ((FPCGGraphExecutor *)this->_padding_ != (FPCGGraphExecutor *)0x0) {
    FPCGGraphExecutor::Execute((FPCGGraphExecutor *)this->_padding_,(double *)&local_res18);
    FVar4 = local_res18;
  }
  local_res18 = FVar4;
  FPCGActorAndComponentMapping::Tick((FPCGActorAndComponentMapping *)this->_padding_);
  if ((APCGWorldActor *)this->_padding_ != (APCGWorldActor *)0x0) {
    FPCGRuntimeGenScheduler::Tick
              ((FPCGRuntimeGenScheduler *)this->_padding_,(APCGWorldActor *)this->_padding_,
               (double)FVar4);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UnregisterPCGComponent @ 149f6c870

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
UPCGSubsystem::UnregisterPCGComponent(UPCGSubsystem *this,UPCGComponent *param_1,bool param_2)

{
  FPCGActorAndComponentMapping::UnregisterPCGComponent
            ((this->ActorAndComponentMapping).Ptr,param_1,param_2);
  return;
}

// UnregisterPCGWorldActor @ 149f6c880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGSubsystem::UnregisterPCGWorldActor(UPCGSubsystem *this,APCGWorldActor *param_1)

{
  if (this->PCGWorldActor == param_1) {
    this->PCGWorldActor = (APCGWorldActor *)0x0;
  }
  return;
}

// UnregisterPartitionActor @ 149f6c8a0

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
UPCGSubsystem::UnregisterPartitionActor(UPCGSubsystem *this,APCGPartitionActor *param_1)

{
  FPCGActorAndComponentMapping::UnregisterPartitionActor
            ((this->ActorAndComponentMapping).Ptr,param_1);
  return;
}

// _getUObject @ 149f6f620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall UPCGSubsystem::_getUObject(UPCGSubsystem *this)

{
  return (UObject *)&this[-1].bHasTickedOnce;
}

