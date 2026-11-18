// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 18

// StaticClass @ 1494bd970

UClass * __cdecl UComputeGraphComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeGraphComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeGraphComponent",
               &Z_Registration_Info_UClass_UComputeGraphComponent.InnerSingleton,
               StaticRegisterNativesUComputeGraphComponent,0xe0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeGraphComponent>,
               InternalVTableHelperCtorCaller<UComputeGraphComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeGraphComponent.InnerSingleton;
}

// UComputeGraphComponent @ 1494c4ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UComputeGraphComponent * __thiscall
UComputeGraphComponent::UComputeGraphComponent(UComputeGraphComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ComputeGraph).field0_0x0.DebugPtr = (UComputeGraph *)0x0;
  (this->ComputeGraphInstance).DataProviders.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ComputeGraphInstance).DataProviders.ArrayNum = 0;
  (this->ComputeGraphInstance).DataProviders.ArrayMax = 0;
  (this->ComputeGraphInstance).GraphSortPriority = '\0';
  (this->ComputeGraphInstance).bEnableRenderCaptures = false;
  return this;
}

// UComputeGraphComponent @ 1494c4d00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UComputeGraphComponent * __thiscall
UComputeGraphComponent::UComputeGraphComponent(UComputeGraphComponent *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ComputeGraph).field0_0x0.DebugPtr = (UComputeGraph *)0x0;
  (this->ComputeGraphInstance).DataProviders.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ComputeGraphInstance).DataProviders.ArrayNum = 0;
  (this->ComputeGraphInstance).DataProviders.ArrayMax = 0;
  (this->ComputeGraphInstance).GraphSortPriority = '\0';
  (this->ComputeGraphInstance).bEnableRenderCaptures = false;
  *(byte *)((longlong)&this->_padding_ + 2) = *(byte *)((longlong)&this->_padding_ + 2) & 0xfb | 2;
  return this;
}

// ~UComputeGraphComponent @ 1494c5e20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UComputeGraphComponent::~UComputeGraphComponent(UComputeGraphComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->ComputeGraphInstance).DataProviders.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// CreateDataProviders @ 1494cb6e0

void __thiscall
UComputeGraphComponent::CreateDataProviders
          (UComputeGraphComponent *this,int param_1,UObject *param_2)

{
  UComputeGraph *this_00;
  TObjectPtr<UObject>_u_0 local_res8;
  
  local_res8.DebugPtr = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  this_00 = (this->ComputeGraph).field0_0x0.DebugPtr;
  if (this_00 != (UComputeGraph *)0x0) {
    UComputeGraph::CreateDataProviders
              (this_00,param_1,(TObjectPtr<UObject> *)&local_res8.ObjectPtr,
               &(this->ComputeGraphInstance).DataProviders);
  }
  return;
}

// DestroyDataProviders @ 1494cc3b0

void __thiscall UComputeGraphComponent::DestroyDataProviders(UComputeGraphComponent *this)

{
  int iVar1;
  
  iVar1 = (this->ComputeGraphInstance).DataProviders.ArrayMax;
  (this->ComputeGraphInstance).DataProviders.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->ComputeGraphInstance,0,
               &(this->ComputeGraphInstance).DataProviders.ArrayMax);
  }
  return;
}

// DestroyRenderState_Concurrent @ 1494cc7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UComputeGraphComponent::DestroyRenderState_Concurrent(UComputeGraphComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FSceneInterface *pFVar3;
  FComputeGraphTaskWorker **ppFVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FComputeGraphTaskWorker *pFStack_70;
  UComputeGraphComponent *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FComputeGraphTaskWorker *pFStack_40;
  UComputeGraphComponent *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  UActorComponent::DestroyRenderState_Concurrent((UActorComponent *)this);
  pFVar3 = UActorComponent::GetScene((UActorComponent *)this);
  if (FComputeFrameworkModule::ComputeSystem != (FComputeFrameworkSystem *)0x0) {
    ppFVar4 = TMapBase<FSceneInterface_const_*,FComputeGraphTaskWorker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>_>
              ::Find((TMapBase<FSceneInterface_const_*,FComputeGraphTaskWorker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>_>
                      *)&FComputeFrameworkModule::ComputeSystem->ComputeWorkers,pFVar3);
    pFStack_70 = (FComputeGraphTaskWorker *)0x0;
    if (ppFVar4 != (FComputeGraphTaskWorker **)0x0) {
      pFStack_70 = *ppFVar4;
    }
    if (pFStack_70 != (FComputeGraphTaskWorker *)0x0) {
      local_60 = (undefined ***)0x0;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`ComputeFramework::AbortWork'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`ComputeFramework::AbortWork'::`5'::<lambda_1>,1,0>::
                  _vftable_;
      local_68 = this;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_ComputeFramework::AbortWork_::__l5::TSTR_ComputeFrameworkAbortCommand117>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_58._0_8_ = local_88[0];
        local_30 = local_60;
        local_48 = local_78;
        pFStack_40 = pFStack_70;
        local_38 = local_68;
        local_88[0] = (code *)0x0;
        local_28 = 2;
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`ComputeFramework::AbortWork'::__l5::TSTR_ComputeFrameworkAbortCommand117>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_58,pFVar5);
        uVar7 = (ulonglong)local_28;
        if (2 < uVar7) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar7] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_58._0_8_ != (code *)0x0) {
            pppuVar6 = (undefined ***)(local_58 + 0x10);
            if (local_30 != (undefined ***)0x0) {
              pppuVar6 = local_30;
            }
            (*(code *)(*pppuVar6)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar7])(local_58);
        }
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar6 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar6 = local_60;
        }
        (*(code *)(*pppuVar6)[2])();
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 1494d0720

UClass * __cdecl UComputeGraphComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeGraphComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeGraphComponent",
               &Z_Registration_Info_UClass_UComputeGraphComponent.InnerSingleton,
               StaticRegisterNativesUComputeGraphComponent,0xe0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeGraphComponent>,
               InternalVTableHelperCtorCaller<UComputeGraphComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeGraphComponent.InnerSingleton;
}

// OnRegister @ 1494d4b80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UComputeGraphComponent::OnRegister(UComputeGraphComponent *this)

{
  UComputeGraph *this_00;
  TObjectPtr<UObject>_u_0 local_res8 [4];
  
  UActorComponent::OnRegister((UActorComponent *)this);
  local_res8[0] = (TObjectPtr<UObject>_u_0)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UComputeGraphComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  this_00 = (this->ComputeGraph).field0_0x0.DebugPtr;
  if (this_00 != (UComputeGraph *)0x0) {
    UComputeGraph::CreateDataProviders
              (this_00,0,(TObjectPtr<UObject> *)&local_res8[0].ObjectPtr,
               &(this->ComputeGraphInstance).DataProviders);
  }
  return;
}

// OnUnregister @ 1494d4be0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UComputeGraphComponent::OnUnregister(UComputeGraphComponent *this)

{
  int iVar1;
  
  iVar1 = (this->ComputeGraphInstance).DataProviders.ArrayMax;
  (this->ComputeGraphInstance).DataProviders.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->ComputeGraphInstance,0,
               &(this->ComputeGraphInstance).DataProviders.ArrayMax);
  }
  UActorComponent::OnUnregister((UActorComponent *)this);
  return;
}

// QueueExecute @ 1494d4fe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UComputeGraphComponent::QueueExecute(UComputeGraphComponent *this)

{
  byte *pbVar1;
  bool bVar2;
  UWorld *this_00;
  FUObjectItem *pFVar3;
  
  if ((this->ComputeGraph).field0_0x0.DebugPtr == (UComputeGraph *)0x0) {
    return;
  }
  if (((this->_padding_ & 3) == 3) &&
     (pbVar1 = (byte *)((longlong)&this->_padding_ + 1), *pbVar1 = *pbVar1 | 4,
     (this->_padding_ & 0x10000) == 0)) {
    this_00 = UActorComponent::GetWorld((UActorComponent *)this);
    if (this_00 != (UWorld *)0x0) {
      bVar2 = (bool)(**(code **)(this->_padding_ + 0x450))(this);
      UWorld::MarkActorComponentForNeededEndOfFrameUpdate(this_00,(UActorComponent *)this,bVar2);
      return;
    }
    pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    if (((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
      UActorComponent::DoDeferredRenderUpdates_Concurrent((UActorComponent *)this);
    }
  }
  return;
}

// SendRenderDynamicData_Concurrent @ 1494d6c40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UComputeGraphComponent::SendRenderDynamicData_Concurrent(UComputeGraphComponent *this)

{
  FName FVar1;
  FName FVar2;
  FSceneInterface *pFVar3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  UActorComponent::SendRenderDynamicData_Concurrent((UActorComponent *)this);
  FVar2 = ComputeTaskExecutionGroup::EndOfFrameUpdate;
  local_28._16_8_ = 0;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  FVar1 = *(FName *)(this->_padding_ + 0x18);
  pFVar3 = UActorComponent::GetScene((UActorComponent *)this);
  FComputeGraphInstance::EnqueueWork
            (&this->ComputeGraphInstance,(this->ComputeGraph).field0_0x0.DebugPtr,pFVar3,FVar2,FVar1
             ,&local_28,(UObject *)this,'\0');
  return;
}

// ShouldCreateRenderState @ 1494d7850

bool __thiscall UComputeGraphComponent::ShouldCreateRenderState(UComputeGraphComponent *this)

{
  return true;
}

// StaticRegisterNativesUComputeGraphComponent @ 1494d7e70

void __cdecl UComputeGraphComponent::StaticRegisterNativesUComputeGraphComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UComputeGraphComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 1494da370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UComputeGraphComponent::TickComponent
          (UComputeGraphComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if ((this->ComputeGraph).field0_0x0.DebugPtr != (UComputeGraph *)0x0) {
    UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
    return;
  }
  return;
}

// execCreateDataProviders @ 1494dbba0

void __cdecl
UComputeGraphComponent::execCreateDataProviders(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int local_res8 [2];
  UObject *local_res10 [2];
  TObjectPtr<UObject>_u_0 local_res20;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res8[0];
  local_res20.DebugPtr = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  if (*(UComputeGraph **)&param_1[4].field_0x20 != (UComputeGraph *)0x0) {
    UComputeGraph::CreateDataProviders
              (*(UComputeGraph **)&param_1[4].field_0x20,iVar2,
               (TObjectPtr<UObject> *)&local_res20.ObjectPtr,
               (TArray<TObjectPtr<UComputeDataProvider>,TSizedDefaultAllocator<32>_> *)(param_1 + 5)
              );
  }
  return;
}

// execDestroyDataProviders @ 1494dbc90

void __cdecl
UComputeGraphComponent::execDestroyDataProviders(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[5].field_0x8 = 0;
  if (*(int *)&param_1[5].field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(param_1 + 5),0,(int *)&param_1[5].field_0xc);
  }
  return;
}

// execQueueExecute @ 1494dbcf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UComputeGraphComponent::execQueueExecute(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UWorld *this;
  FUObjectItem *pFVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[4].field_0x20 == 0) {
    return;
  }
  if (((param_1[3].field_0x20 & 3) == 3) &&
     (param_1[3].field_0x21 = param_1[3].field_0x21 | 4, (param_1[3].field_0x22 & 1) == 0)) {
    this = UActorComponent::GetWorld((UActorComponent *)param_1);
    if (this != (UWorld *)0x0) {
      bVar1 = (bool)(**(code **)(*(longlong *)param_1 + 0x450))(param_1);
      UWorld::MarkActorComponentForNeededEndOfFrameUpdate(this,(UActorComponent *)param_1,bVar1);
      return;
    }
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
    if (((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
      UActorComponent::DoDeferredRenderUpdates_Concurrent((UActorComponent *)param_1);
    }
  }
  return;
}

