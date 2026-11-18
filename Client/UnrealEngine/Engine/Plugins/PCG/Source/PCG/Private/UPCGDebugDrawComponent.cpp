// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// StaticClass @ 149ede9e0

UClass * __cdecl UPCGDebugDrawComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDebugDrawComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDebugDrawComponent",
               &Z_Registration_Info_UClass_UPCGDebugDrawComponent.InnerSingleton,
               StaticRegisterNativesUPCGDebugDrawComponent,0x5c0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGDebugDrawComponent>,
               InternalVTableHelperCtorCaller<UPCGDebugDrawComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDebugDrawComponent.InnerSingleton;
}

// UPCGDebugDrawComponent @ 149eee260

UPCGDebugDrawComponent * __thiscall
UPCGDebugDrawComponent::UPCGDebugDrawComponent(UPCGDebugDrawComponent *this,FVTableHelper *param_1)

{
  UDebugDrawComponent::UDebugDrawComponent((UDebugDrawComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->SceneProxy = (FDebugRenderSceneProxy *)0x0;
  (this->TimerHandle).Handle = 0;
  return this;
}

// UPCGDebugDrawComponent @ 149eee2e0

UPCGDebugDrawComponent * __thiscall
UPCGDebugDrawComponent::UPCGDebugDrawComponent
          (UPCGDebugDrawComponent *this,FObjectInitializer *param_1)

{
  UDebugDrawComponent::UDebugDrawComponent((UDebugDrawComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->SceneProxy = (FDebugRenderSceneProxy *)0x0;
  (this->TimerHandle).Handle = 0;
  return this;
}

// ~UPCGDebugDrawComponent @ 149eefcb0

void __thiscall UPCGDebugDrawComponent::~UPCGDebugDrawComponent(UPCGDebugDrawComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  UDebugDrawComponent::~UDebugDrawComponent((UDebugDrawComponent *)this);
  return;
}

// AddDebugString @ 149ef3610

void __thiscall
UPCGDebugDrawComponent::AddDebugString(UPCGDebugDrawComponent *this,FText3d *param_1)

{
  int *piVar1;
  FDebugRenderSceneProxy *pFVar2;
  FText3d *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *this_00;
  
  pFVar2 = this->SceneProxy;
  pTVar8 = &pFVar2->Texts;
  pFVar3 = (FText3d *)(pTVar8->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (pFVar2->Texts).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (pFVar2->Texts).ArrayNum;
  piVar1 = &(pFVar2->Texts).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar8->AllocatorInstance,piVar1);
  }
  (pFVar2->Texts).ArrayNum = iVar7 + 1;
  this_00 = (pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
  ::FString::FString((FString *)this_00,&param_1->Text);
  dVar5 = (param_1->Location).field0_0x0._s_0.Y;
  *(double *)&this_00[0x10].field_0x0 = (param_1->Location).field0_0x0._s_0.X;
  *(double *)(this_00 + 0x18) = dVar5;
  *(double *)&this_00[0x20].field_0x0 = (param_1->Location).field0_0x0._s_0.Z;
  *(FColor_u_0 *)(this_00 + 0x28) = (param_1->Color).field0_0x0;
  return;
}

// AddDebugString @ 149ef3700

void __thiscall
UPCGDebugDrawComponent::AddDebugString
          (UPCGDebugDrawComponent *this,FString *param_1,TVector<double> *param_2,
          FLinearColor *param_3)

{
  int *piVar1;
  FDebugRenderSceneProxy *pFVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *this_00;
  
  pFVar2 = this->SceneProxy;
  iVar4 = (pFVar2->Texts).ArrayNum;
  piVar1 = &(pFVar2->Texts).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(pFVar2->Texts).AllocatorInstance,piVar1);
  }
  (pFVar2->Texts).ArrayNum = iVar4 + 1;
  this_00 = (pFVar2->Texts).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  ::FString::FString((FString *)this_00,param_1);
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  *(double *)&this_00[0x10].field_0x0 = (param_2->field0_0x0)._s_0.X;
  *(double *)(this_00 + 0x18) = dVar3;
  *(double *)&this_00[0x20].field_0x0 = (param_2->field0_0x0)._s_0.Z;
  FLinearColor::ToFColorSRGB(param_3);
  return;
}

// AddDebugStrings @ 149ef37b0

void __thiscall
UPCGDebugDrawComponent::AddDebugStrings
          (UPCGDebugDrawComponent *this,TArrayView<FDebugRenderSceneProxy::FText3d,int> *param_1)

{
  int iVar1;
  FDebugRenderSceneProxy *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = this->SceneProxy;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,iVar1,&(pFVar2->Texts).AllocatorInstance,&(pFVar2->Texts).ArrayNum,
                     &(pFVar2->Texts).ArrayMax);
  ConstructItems<FDebugRenderSceneProxy::FText3d,FDebugRenderSceneProxy::FText3d,int>
            ((pFVar2->Texts).AllocatorInstance.Data + (longlong)iVar5 * 0x30,param_1->DataPtr,iVar1)
  ;
  return;
}

// ClearTimer @ 149ef8740

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGDebugDrawComponent::ClearTimer(UPCGDebugDrawComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  FTimerManager *this_01;
  FTimerData *pFVar3;
  
  this_00 = (UWorld *)this->_padding_;
  if ((this_00 == (UWorld *)0x0) &&
     (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     this_00 == (UWorld *)0x0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8067822196946370493>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGDebugDrawComponent.cpp"
                       ,0x43,"World");
    if (!bVar2) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_01 = UWorld::GetTimerManager(this_00);
  pFVar3 = FTimerManager::FindTimer(this_01,&this->TimerHandle);
  if (pFVar3 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(this_01,(FTimerHandle)(this->TimerHandle).Handle);
  }
  (this->TimerHandle).Handle = 0;
  return;
}

// CreateDebugSceneProxy @ 149efa590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDebugRenderSceneProxy * __thiscall
UPCGDebugDrawComponent::CreateDebugSceneProxy(UPCGDebugDrawComponent *this)

{
  FDebugRenderSceneProxy *this_00;
  FDebugRenderSceneProxy *pFVar1;
  
  this_00 = ::operator_new(0x3a0);
  pFVar1 = (FDebugRenderSceneProxy *)0x0;
  if (this_00 != (FDebugRenderSceneProxy *)0x0) {
    pFVar1 = FDebugRenderSceneProxy::FDebugRenderSceneProxy(this_00,(UPrimitiveComponent *)this);
  }
  this->SceneProxy = pFVar1;
  ::FString::operator=(&pFVar1->ViewFlagName,L"PCGDebug");
  return this->SceneProxy;
}

// GetPrivateStaticClass @ 149f041b0

UClass * __cdecl UPCGDebugDrawComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDebugDrawComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDebugDrawComponent",
               &Z_Registration_Info_UClass_UPCGDebugDrawComponent.InnerSingleton,
               StaticRegisterNativesUPCGDebugDrawComponent,0x5c0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGDebugDrawComponent>,
               InternalVTableHelperCtorCaller<UPCGDebugDrawComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDebugDrawComponent.InnerSingleton;
}

// OnTimerElapsed @ 149f09c70

void __thiscall UPCGDebugDrawComponent::OnTimerElapsed(UPCGDebugDrawComponent *this)

{
  ClearTimer(this);
                    /* WARNING: Could not recover jumptable at 0x000149f09c8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x4a0))(this,0);
  return;
}

// OnUnregister @ 149f09cb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPCGDebugDrawComponent::OnUnregister(UPCGDebugDrawComponent *this)

{
  ClearTimer(this);
  UPrimitiveComponent::OnUnregister((UPrimitiveComponent *)this);
  return;
}

// StartTimer @ 149f13c80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGDebugDrawComponent::StartTimer(UPCGDebugDrawComponent *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  FTimerManager *this_01;
  undefined8 *puVar3;
  ulong64 uVar4;
  UPCGDebugDrawComponent *local_res8;
  FDelegateAllocation local_48;
  code *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  this_00 = (UWorld *)this->_padding_;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (this_00 == (UWorld *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8067822196946370516>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGDebugDrawComponent.cpp"
                         ,0x2c,"World");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto LAB_149f13e29;
    }
  }
  this_01 = UWorld::GetTimerManager(this_00);
  uStack_30 = 0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_38 = _vcall__2720__flat______;
  local_48.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_48);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPCGDebugDrawComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
    puVar3[4] = local_38;
    puVar3[5] = CONCAT44(uStack_2c,uStack_30);
  }
  FTimerManager::SetTimer
            (this_01,&this->TimerHandle,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_48,
             param_1,true,__real_bf800000);
  if ((local_48.DelegateSize != 0) &&
     (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_48,0,0,0x10);
    local_48.DelegateSize = 0;
  }
  if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48.DelegateAllocator);
  }
LAB_149f13e29:
  if ((this->TimerHandle).Handle != 0) {
    FDebugDrawDelegateHelper::InitDelegateHelper
              ((FDebugDrawDelegateHelper *)&this->_padding_,this->SceneProxy);
    return;
  }
  return;
}

// StaticRegisterNativesUPCGDebugDrawComponent @ 149f13fa0

void __cdecl UPCGDebugDrawComponent::StaticRegisterNativesUPCGDebugDrawComponent(void)

{
  return;
}

