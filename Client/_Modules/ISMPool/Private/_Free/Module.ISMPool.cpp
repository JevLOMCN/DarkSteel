// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ISMPool
// Functions: 72

// `dynamic_initializer_for_'CVarISMPoolClearComponentMeshOnRecycle'' @ 141090330

void __cdecl _dynamic_initializer_for__CVarISMPoolClearComponentMeshOnRecycle__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarISMPoolClearComponentMeshOnRecycle,L"r.ISMPool.ClearComponentMeshOnRecycle",
             &GISMPoolClearComponentMeshOnRecycle,
             L"If true, ISM components on the free list will have their StaticMesh property cleared - to prevent holding a reference to an unused mesh"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarISMPoolClearComponentMeshOnRecycle__);
  return;
}

// `dynamic_initializer_for_'CVarISMPoolComponentFreeListTargetSize'' @ 141090380

void __cdecl _dynamic_initializer_for__CVarISMPoolComponentFreeListTargetSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarISMPoolComponentFreeListTargetSize,L"r.ISMPool.ComponentFreeListTargetSize",
             &GComponentFreeListTargetSize,
             L"Target size for number of ISM components in the recycling free list.",0);
  atexit(_dynamic_atexit_destructor_for__CVarISMPoolComponentFreeListTargetSize__);
  return;
}

// `dynamic_initializer_for_'CVarISMPoolComponentKeepAlive'' @ 1410903d0

void __cdecl _dynamic_initializer_for__CVarISMPoolComponentKeepAlive__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarISMPoolComponentKeepAlive,L"r.ISMPool.ComponentKeepAlive",&GComponentKeepAlive,
             L"Keep ISM components alive when all their instances are removed.",0);
  atexit(_dynamic_atexit_destructor_for__CVarISMPoolComponentKeepAlive__);
  return;
}

// `dynamic_initializer_for_'CVarISMPoolComponentRecycle'' @ 141090420

void __cdecl _dynamic_initializer_for__CVarISMPoolComponentRecycle__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarISMPoolComponentRecycle,L"r.ISMPool.ComponentRecycle",&GComponentRecycle,
             L"Recycle ISM components to a free list for reuse when all their instances are removed."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarISMPoolComponentRecycle__);
  return;
}

// `dynamic_initializer_for_'CVarISMPoolDebugDraw'' @ 141090470

void __cdecl _dynamic_initializer_for__CVarISMPoolDebugDraw__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  int local_res8 [2];
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarISMPoolDebugDraw,L"r.ISMPool.DebugDraw",local_res8,
             L"Show debug drawing for the ISM pools",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarISMPoolDebugDraw__);
  return;
}

// `dynamic_initializer_for_'CVarISMPoolShadowCopyCustomData'' @ 1410905b0

void __cdecl _dynamic_initializer_for__CVarISMPoolShadowCopyCustomData__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarISMPoolShadowCopyCustomData,L"r.ISMPool.ShadowCopyCustomData",
             &GShadowCopyCustomData,
             L"Keeps a copy of custom instance data so it can be restored if the instance is removed and readded."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarISMPoolShadowCopyCustomData__);
  return;
}

// `dynamic_initializer_for_'CVarISMPoolStats'' @ 141090600

void __cdecl _dynamic_initializer_for__CVarISMPoolStats__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  int local_res8 [2];
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarISMPoolStats,L"r.ISMPool.DebugStats",local_res8,L"Show stats for the ISM pools",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarISMPoolStats__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolActor_h__Script_ISMPool_3463616472'' @ 141090740

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolActor_h__Script_ISMPool_3463616472__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ISMPool",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolActor_h__Script_ISMPool_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolComponent_h__Script_ISMPool_1737328947'' @ 141090780

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolComponent_h__Script_ISMPool_1737328947__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ISMPool",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolComponent_h__Script_ISMPool_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolDebugDrawComponent_h__Script_ISMPool_2998246243'' @ 1410907c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolDebugDrawComponent_h__Script_ISMPool_2998246243__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ISMPool",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolDebugDrawComponent_h__Script_ISMPool_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolSubSystem_h__Script_ISMPool_1906293716'' @ 141090800

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolSubSystem_h__Script_ISMPool_1906293716__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ISMPool",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolSubSystem_h__Script_ISMPool_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ISMPool'' @ 141090840

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ISMPool__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x3d89238a;
  local_res8[0].DeclarationsHash = 0xf6b04a9d;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ISMPool,L"/Script/ISMPool",
             &Z_Registration_Info_UPackage__Script_ISMPool,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 146337860

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UISMPoolSubSystem @ 146337b00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UISMPoolSubSystem(void)

{
  if (Z_Registration_Info_UClass_UISMPoolSubSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UISMPoolSubSystem.OuterSingleton,
               &Z_Construct_UClass_UISMPoolSubSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UISMPoolSubSystem.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146337b40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UISMPoolSubSystem_OnActorEndPlay @ 146337b70

UFunction * __cdecl Z_Construct_UFunction_UISMPoolSubSystem_OnActorEndPlay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UISMPoolSubSystem_OnActorEndPlay_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_ISMPool @ 146337bb0

UPackage * __cdecl Z_Construct_UPackage__Script_ISMPool(void)

{
  if (Z_Registration_Info_UPackage__Script_ISMPool.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ISMPool.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ISMPool.OuterSingleton;
}

// Z_Construct_UClass_UISMPoolComponent_NoRegister @ 146337cb0

UClass * __cdecl Z_Construct_UClass_UISMPoolComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UISMPoolComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ISMPool",L"ISMPoolComponent",
               &Z_Registration_Info_UClass_UISMPoolComponent.InnerSingleton,
               UISMPoolComponent::StaticRegisterNativesUISMPoolComponent,0x380,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UISMPoolComponent>,
               InternalVTableHelperCtorCaller<UISMPoolComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UISMPoolComponent.InnerSingleton;
}

// Z_Construct_UClass_UISMPoolDebugDrawComponent @ 146337d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UISMPoolDebugDrawComponent(void)

{
  if (Z_Registration_Info_UClass_UISMPoolDebugDrawComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UISMPoolDebugDrawComponent.OuterSingleton,
               &Z_Construct_UClass_UISMPoolDebugDrawComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UISMPoolDebugDrawComponent.OuterSingleton;
}

// NewProp_bShowGlobalStats_SetBit @ 146337db0

void __cdecl
Z_Construct_UClass_UISMPoolDebugDrawComponent_Statics::NewProp_bShowGlobalStats_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5b0) = 1;
  return;
}

// NewProp_bShowStats_SetBit @ 146337dc0

void __cdecl
Z_Construct_UClass_UISMPoolDebugDrawComponent_Statics::NewProp_bShowStats_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5b1) = 1;
  return;
}

// NewProp_bShowBounds_SetBit @ 146337dd0

void __cdecl
Z_Construct_UClass_UISMPoolDebugDrawComponent_Statics::NewProp_bShowBounds_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5b2) = 1;
  return;
}

// Z_Construct_UClass_UISMPoolComponent @ 146337de0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UISMPoolComponent(void)

{
  if (Z_Registration_Info_UClass_UISMPoolComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UISMPoolComponent.OuterSingleton,
               &Z_Construct_UClass_UISMPoolComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UISMPoolComponent.OuterSingleton;
}

// Z_Construct_UClass_UISMPoolDebugDrawComponent_NoRegister @ 146337e20

UClass * __cdecl Z_Construct_UClass_UISMPoolDebugDrawComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UISMPoolDebugDrawComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ISMPool",L"ISMPoolDebugDrawComponent",
               &Z_Registration_Info_UClass_UISMPoolDebugDrawComponent.InnerSingleton,
               UISMPoolDebugDrawComponent::StaticRegisterNativesUISMPoolDebugDrawComponent,0x640,
               0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UISMPoolDebugDrawComponent>,
               InternalVTableHelperCtorCaller<UISMPoolDebugDrawComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UISMPoolDebugDrawComponent.InnerSingleton;
}

// Z_Construct_UClass_AISMPoolActor @ 146337fa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AISMPoolActor(void)

{
  if (Z_Registration_Info_UClass_AISMPoolActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AISMPoolActor.OuterSingleton,
               &Z_Construct_UClass_AISMPoolActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AISMPoolActor.OuterSingleton;
}

// CastChecked<AISMPoolActor,AActor> @ 1463384d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

AISMPoolActor * __cdecl CastChecked<AISMPoolActor,AActor>(AActor *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    if (param_2 != NullChecked) {
      return (AISMPoolActor *)0x0;
    }
    pFVar3 = GetTypeName<AISMPoolActor>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AISMPoolActor::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AISMPoolActor *)param_1;
  }
  pFVar3 = GetTypeName<AISMPoolActor>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FISMPoolMeshInfo,FISMPoolMeshInfo,int> @ 1463385b0

void __cdecl
ConstructItems<FISMPoolMeshInfo,FISMPoolMeshInfo,int>
          (void *param_1,FISMPoolMeshInfo *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0x14);
    piVar4 = &param_2->InstanceGroupIndex;
    do {
      pFVar1 = (ForAnyElementType *)(piVar3 + -3);
      *(int *)((longlong)param_1 + (-4 - (longlong)param_2) + (longlong)piVar4) =
           ((FISMPoolMeshInfo *)(piVar4 + -1))->ISMIndex;
      piVar3[-4] = *piVar4;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar4[3];
      _Src = (((TArray<float,TSizedDefaultAllocator<32>_> *)(piVar4 + 1))->AllocatorInstance).Data;
      piVar3[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar3);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
      }
      piVar4 = piVar4 + 6;
      piVar3 = piVar3 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FISMPoolISM,int> @ 146338690

void __cdecl DefaultConstructItems<FISMPoolISM,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0xe0;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      puVar2[5] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      puVar2[6] = uVar1;
      puVar2[7] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      *(undefined4 *)(puVar2 + 10) = 0x3f800000;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      puVar2[0x12] = 0;
      puVar2[0x13] = 0;
      puVar2[0x14] = 0;
      puVar2[0x15] = 0;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 0x17;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPrimitiveInstanceId,int> @ 146338730

void __cdecl DefaultConstructItems<FPrimitiveInstanceId,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,-1,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DestructItems<FISMPoolISM,int> @ 146338770

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl DestructItems<FISMPoolISM,int>(FISMPoolISM *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->InstanceGroups).FreeList;
    do {
      if (*(void **)(pTVar2 + 1) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + 1));
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FISMPoolInstanceGroups::FInstanceGroupRange,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + -1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -4) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -4) + 8));
      }
      if (*(void **)(pTVar2 + -8) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -8));
      }
      if (*(void **)(pTVar2 + -9) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -9));
      }
      pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 0xb) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FISMPoolMeshInfo,int> @ 146338800

void __cdecl DestructItems<FISMPoolMeshInfo,int>(FISMPoolMeshInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->CustomData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FISMPoolMeshInfo *)(&param_1->CustomData + 1);
  }
  return;
}

// GetTypeName<AISMPoolActor> @ 146339430

FString * __cdecl GetTypeName<AISMPoolActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AISMPoolActor::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<AISMPoolActor> @ 146339470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AISMPoolActor>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AISMPoolActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar2 = FName::FName(&local_res8,L"ISMPoolComp");
    FVar1 = *pFVar2;
    pUVar3 = UISMPoolComponent::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this[1]._padding_ = (longlong)pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    (this->RootComponent).field0_0x0 = *(TObjectPtr<USceneComponent>_u_0 *)(this + 1);
    pFVar2 = FName::FName(&local_res8,L"ISMPoolDebug");
    FVar1 = *pFVar2;
    pUVar3 = UISMPoolDebugDrawComponent::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this[1]._padding_ = (longlong)pUVar4;
    (**(code **)(*(longlong *)pUVar4 + 0x780))(pUVar4);
    UActorComponent::SetCanEverAffectNavigation((UActorComponent *)this[1]._padding_,false);
    *(undefined1 *)(this[1]._padding_ + 0x287) = 0;
    UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this[1]._padding_,false);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    USceneComponent::SetupAttachment
              ((USceneComponent *)this[1]._padding_,(USceneComponent *)this[1]._padding_,(FName)0x0)
    ;
  }
  return;
}

// InternalConstructor<UISMPoolComponent> @ 1463395f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UISMPoolComponent>(FObjectInitializer *param_1)

{
  USceneComponent *this;
  FObjectInitializer *pFVar1;
  
  this = (USceneComponent *)param_1->Obj;
  if (this != (USceneComponent *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    USceneComponent::USceneComponent(this,pFVar1);
    this->_padding_ = (longlong)&UISMPoolComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UISMPoolComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UISMPoolComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    FISMPool::FISMPool((FISMPool *)&this[1]._padding_);
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3e800000;
    *(byte *)((longlong)&this->_padding_ + 2) = *(byte *)((longlong)&this->_padding_ + 2) & 0xf7 | 6
    ;
  }
  return;
}

// InternalConstructor<UISMPoolDebugDrawComponent> @ 1463396b0

void __cdecl InternalConstructor<UISMPoolDebugDrawComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  byte bVar2;
  UDebugDrawComponent *this;
  
  this = (UDebugDrawComponent *)param_1->Obj;
  if (this != (UDebugDrawComponent *)0x0) {
    UDebugDrawComponent::UDebugDrawComponent(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UISMPoolDebugDrawComponent::_vftable__for__UObject__;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    this->_padding_ =
         (longlong)&UISMPoolDebugDrawComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UISMPoolDebugDrawComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UISMPoolDebugDrawComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UISMPoolDebugDrawComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UISMPoolDebugDrawComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    FDebugDrawDelegateHelper::FDebugDrawDelegateHelper
              ((FDebugDrawDelegateHelper *)&this[1]._padding_);
    bVar2 = *(byte *)((longlong)&this->_padding_ + 2);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
    *pbVar1 = *pbVar1 & 0xfd;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
    *pbVar1 = *pbVar1 & 0xef;
    this[1]._padding_ = 0;
    *(byte *)((longlong)&this->_padding_ + 2) = bVar2 & 0xf3 | 2;
  }
  return;
}

// InternalConstructor<UISMPoolSubSystem> @ 146339780

void __cdecl InternalConstructor<UISMPoolSubSystem>(FObjectInitializer *param_1)

{
  UWorldSubsystem *this;
  
  this = (UWorldSubsystem *)param_1->Obj;
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this);
    this->_padding_ = (longlong)&___7UISMPoolSubSystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].field_0x30 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x34 = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<AISMPoolActor> @ 1463397e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AISMPoolActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AISMPoolActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AISMPoolActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UISMPoolComponent> @ 1463398a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UISMPoolComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USceneComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UISMPoolComponent::GetPrivateStaticClass();
  this = (USceneComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UISMPoolComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UISMPoolComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UISMPoolComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    FISMPool::FISMPool((FISMPool *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UISMPoolDebugDrawComponent> @ 1463399c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UISMPoolDebugDrawComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDebugDrawComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UISMPoolDebugDrawComponent::GetPrivateStaticClass();
  this = (UDebugDrawComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDebugDrawComponent *)0x0) {
    UDebugDrawComponent::UDebugDrawComponent(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UISMPoolDebugDrawComponent::_vftable__for__UObject__;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    this->_padding_ =
         (longlong)&UISMPoolDebugDrawComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UISMPoolDebugDrawComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UISMPoolDebugDrawComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UISMPoolDebugDrawComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UISMPoolDebugDrawComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    FDebugDrawDelegateHelper::FDebugDrawDelegateHelper
              ((FDebugDrawDelegateHelper *)&this[1]._padding_);
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UISMPoolSubSystem> @ 146339ae0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UISMPoolSubSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UISMPoolSubSystem::GetPrivateStaticClass();
  this = (UWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&___7UISMPoolSubSystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].field_0x30 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x34 = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UInstancedStaticMeshComponent_const_,UInstancedStaticMeshComponent_const_*,0> @ 146339bc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::
IsObjectPtrEqual<UInstancedStaticMeshComponent_const_,UInstancedStaticMeshComponent_const_*,0>
          (TObjectPtr<UInstancedStaticMeshComponent_const_> *param_1,
          UInstancedStaticMeshComponent **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UInstancedStaticMeshComponent *)0x0) {
    return *param_2 == (UInstancedStaticMeshComponent *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UInstancedStaticMeshComponent> @ 146339be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInstancedStaticMeshComponent * __cdecl
NewObject<UInstancedStaticMeshComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInstancedStaticMeshComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInstancedStaticMeshComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14633b494

/* [thunk]:public: virtual void * __ptr64 __cdecl UISMPoolComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UISMPoolComponent::_vector_deleting_destructor__adjustor_40__(UISMPoolComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UISMPoolComponent *)&this[-1].Pool.FreeList,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14633b4a4

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UISMPoolDebugDrawComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UISMPoolDebugDrawComponent::_vector_deleting_destructor__adjustor_592__
          (UISMPoolDebugDrawComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UISMPoolDebugDrawComponent *)&this[-1].field_0x3f0,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14633b4b8

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UISMPoolDebugDrawComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UISMPoolDebugDrawComponent::_vector_deleting_destructor__adjustor_600__
          (UISMPoolDebugDrawComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UISMPoolDebugDrawComponent *)&this[-1].field_0x3e8,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14633b4cc

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UISMPoolDebugDrawComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UISMPoolDebugDrawComponent::_vector_deleting_destructor__adjustor_608__
          (UISMPoolDebugDrawComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UISMPoolDebugDrawComponent *)&this[-1].field_0x3e0,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14633b4e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UISMPoolDebugDrawComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UISMPoolDebugDrawComponent::_vector_deleting_destructor__adjustor_40__
          (UISMPoolDebugDrawComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UISMPoolDebugDrawComponent *)
                      &this[-1].DebugDrawDelegateHelper.ViewFlagName.Data.ArrayNum,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14633b4f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UISMPoolDebugDrawComponent,void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14633b520

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall AISMPoolActor::_scalar_deleting_destructor_(AISMPoolActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AISMPoolActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14633b580

void * __thiscall
FDebugDrawDelegateHelper::_scalar_deleting_destructor_(FDebugDrawDelegateHelper *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FDebugDrawDelegateHelper__6B_;
  pFVar1 = (this->ViewFlagName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDebugRenderSceneProxy::FText3d,int>
            ((FText3d *)(this->Texts).AllocatorInstance.Data,(this->Texts).ArrayNum);
  pFVar1 = (this->Texts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DebugTextDrawingDelegate);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14633b600

void * __thiscall
FISMPoolDebugDrawSceneProxy::_scalar_deleting_destructor_
          (FISMPoolDebugDrawSceneProxy *this,uint param_1)

{
  FDebugRenderSceneProxy::~FDebugRenderSceneProxy((FDebugRenderSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14633b640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UISMPoolComponent::_scalar_deleting_destructor_(UISMPoolComponent *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FISMPool::~FISMPool(&this->Pool);
  *(undefined4 *)&(this->MeshGroups).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MeshGroups).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FISMPoolMeshGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FISMPoolMeshGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FISMPoolMeshGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MeshGroups);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x380);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14633b700

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
UISMPoolDebugDrawComponent::_scalar_deleting_destructor_
          (UISMPoolDebugDrawComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->DebugDrawDelegateHelper)._padding_ = (longlong)&___7FDebugDrawDelegateHelper__6B_;
  pFVar1 = (this->DebugDrawDelegateHelper).ViewFlagName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDebugRenderSceneProxy::FText3d,int>
            ((FText3d *)(this->DebugDrawDelegateHelper).Texts.AllocatorInstance.Data,
             (this->DebugDrawDelegateHelper).Texts.ArrayNum);
  pFVar1 = (this->DebugDrawDelegateHelper).Texts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->DebugDrawDelegateHelper).DebugTextDrawingDelegate);
  UDebugDrawComponent::~UDebugDrawComponent((UDebugDrawComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x640);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14633b7f0

void * __thiscall
UISMPoolSubSystem::_scalar_deleting_destructor_(UISMPoolSubSystem *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UISMPoolSubSystem__6B_;
  *(undefined4 *)&(this->PerLevelISMPoolActors).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PerLevelISMPoolActors).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerLevelISMPoolActors);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// DrawBoxAndChildren @ 14633e4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
DrawBoxAndChildren(FDebugRenderSceneProxy *param_1,TTransform<double> *param_2,
                  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *param_3,int param_4,int param_5)

{
  int *piVar1;
  TArray<FDebugRenderSceneProxy::FDebugBox,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  FColor FVar11;
  FColor FVar12;
  FColor FVar13;
  FColor FVar14;
  FColor FVar15;
  FColor FVar16;
  FColor FVar17;
  ForAnyElementType FVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 auStackY_1c8 [32];
  undefined7 uStack_13f;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uVar24 = 0;
  if (param_4 < param_3->ArrayNum) {
    uVar24 = (uint)~param_4 >> 0x1f;
  }
  if (uVar24 == 0) {
    bVar19 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar19) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (param_3->AllocatorInstance).Data;
  lVar23 = (longlong)param_4 * 0x40;
  uVar3 = *(undefined8 *)(pFVar4 + lVar23 + 0x14);
  dVar10 = (double)(float)((ulonglong)uVar3 >> 0x20);
  dVar6 = (double)*(float *)(pFVar4 + lVar23);
  dVar8 = (double)*(float *)(pFVar4 + lVar23 + 4);
  dVar7 = (double)*(float *)(pFVar4 + lVar23 + 8);
  dVar9 = (double)*(float *)(pFVar4 + lVar23 + 0x10);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    FVar17 = FColorList::VeryLightGrey;
    FVar16 = FColorList::GreenYellow;
    FVar15 = FColorList::DustyRose;
    FVar14 = FColorList::CornFlowerBlue;
    FVar13 = FColorList::CoolCopper;
    FVar12 = FColorList::Magenta;
    FVar11 = FColorList::Red;
    if (_TSS0 == -1) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,7,0,&Colors.AllocatorInstance,7,&Colors.ArrayMax);
      FVar18 = Colors.AllocatorInstance;
      *(ulonglong *)Colors.AllocatorInstance.Data = CONCAT44(FVar13.field0_0x0,FVar17.field0_0x0);
      *(ulonglong *)(FVar18.Data + 8) = CONCAT44(FVar14.field0_0x0,FVar16.field0_0x0);
      *(ulonglong *)(FVar18.Data + 0x10) = CONCAT44(FVar11.field0_0x0,FVar15.field0_0x0);
      ((FColor_u_0 *)(FVar18.Data + 0x18))->_s_0 = (FColor_u_0_s_0)FVar12.field0_0x0;
      atexit(`DrawBoxAndChildren'::__l2::_dynamic_atexit_destructor_for__Colors__);
      _Init_thread_footer(&_TSS0);
    }
  }
  uVar24 = Colors.ArrayNum - 1;
  if (param_5 < (int)uVar24) {
    uVar24 = param_5;
  }
  uVar21 = 0;
  if ((int)uVar24 < Colors.ArrayNum) {
    uVar21 = ~uVar24 >> 0x1f;
  }
  if (uVar21 == 0) {
    bVar19 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar19) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar2 = &param_1->Boxes;
  pFVar22 = (pTVar2->AllocatorInstance).Data;
  local_e8 = (double)CONCAT71(uStack_13f,1);
  local_c8 = (param_2->Rotation).ZW.m128d_f64[0];
  dStack_c0 = (param_2->Rotation).ZW.m128d_f64[1];
  local_d8 = (param_2->Rotation).XY.m128d_f64[0];
  dStack_d0 = (param_2->Rotation).XY.m128d_f64[1];
  local_a8 = (param_2->Translation).ZW.m128d_f64[0];
  dStack_a0 = (param_2->Translation).ZW.m128d_f64[1];
  local_b8 = (param_2->Translation).XY.m128d_f64[0];
  dStack_b0 = (param_2->Translation).XY.m128d_f64[1];
  local_88 = (param_2->Scale3D).ZW.m128d_f64[0];
  dStack_80 = (param_2->Scale3D).ZW.m128d_f64[1];
  uStack_e0 = *(undefined4 *)(Colors.AllocatorInstance.Data + (longlong)(int)uVar24 * 4);
  local_98 = (param_2->Scale3D).XY.m128d_f64[0];
  dStack_90 = (param_2->Scale3D).XY.m128d_f64[1];
  local_f8._8_4_ = SUB84(dVar10,0);
  local_f8._0_8_ = (double)(float)uVar3;
  local_f8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  uStack_dc = 0;
  local_78 = 3;
  local_118 = dVar6;
  dStack_110 = dVar8;
  local_108 = dVar7;
  dStack_100 = dVar9;
  if ((pFVar22 <= (FScriptContainerElement *)&local_118) &&
     ((FScriptContainerElement *)&local_118 < pFVar22 + (longlong)(param_1->Boxes).ArrayMax * 0xb0))
  {
    bVar19 = FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar19) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar20 = (param_1->Boxes).ArrayNum;
  piVar1 = &(param_1->Boxes).ArrayMax;
  if (iVar20 == *piVar1) {
    iVar20 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10b0,&pTVar2->AllocatorInstance,piVar1);
  }
  (param_1->Boxes).ArrayNum = iVar20 + 1;
  pFVar22 = (pTVar2->AllocatorInstance).Data + (longlong)iVar20 * 0xb0;
  *(double *)pFVar22 = local_118;
  *(double *)(pFVar22 + 8) = dStack_110;
  *(double *)(pFVar22 + 0x10) = local_108;
  *(double *)(pFVar22 + 0x18) = dStack_100;
  *(undefined8 *)(pFVar22 + 0x20) = local_f8._0_8_;
  *(undefined8 *)(pFVar22 + 0x28) = local_f8._8_8_;
  *(double *)(pFVar22 + 0x30) = local_e8;
  *(ulonglong *)(pFVar22 + 0x38) = CONCAT44(uStack_dc,uStack_e0);
  *(double *)(pFVar22 + 0x40) = local_d8;
  *(double *)(pFVar22 + 0x48) = dStack_d0;
  *(double *)(pFVar22 + 0x50) = local_c8;
  *(double *)(pFVar22 + 0x58) = dStack_c0;
  *(double *)(pFVar22 + 0x60) = local_b8;
  *(double *)(pFVar22 + 0x68) = dStack_b0;
  *(double *)(pFVar22 + 0x70) = local_a8;
  *(double *)(pFVar22 + 0x78) = dStack_a0;
  *(double *)(pFVar22 + 0x80) = local_98;
  *(double *)(pFVar22 + 0x88) = dStack_90;
  *(double *)(pFVar22 + 0x90) = local_88;
  *(double *)(pFVar22 + 0x98) = dStack_80;
  *(ulonglong *)(pFVar22 + 0xa0) = CONCAT44(uStack_74,local_78);
  *(double *)(pFVar22 + 0xa8) = dStack_70;
  iVar20 = *(int *)(pFVar4 + lVar23 + 0xc);
  if ((0 < iVar20) && (iVar20 <= *(int *)(pFVar4 + lVar23 + 0x1c))) {
    do {
      DrawBoxAndChildren(param_1,param_2,param_3,iVar20,param_5 + 1);
      iVar20 = iVar20 + 1;
    } while (iVar20 <= *(int *)(pFVar4 + lVar23 + 0x1c));
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeISMPoolActor @ 14633e920

void __cdecl EmptyLinkFunctionForGeneratedCodeISMPoolActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeISMPoolComponent @ 14633e930

void __cdecl EmptyLinkFunctionForGeneratedCodeISMPoolComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeISMPoolDebugDrawComponent @ 14633e940

void __cdecl EmptyLinkFunctionForGeneratedCodeISMPoolDebugDrawComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeISMPoolSubSystem @ 14633e950

void __cdecl EmptyLinkFunctionForGeneratedCodeISMPoolSubSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeISMPool_init @ 14633e960

void __cdecl EmptyLinkFunctionForGeneratedCodeISMPool_init(void)

{
  return;
}

// GetTypeHash @ 146340510

uint __cdecl GetTypeHash(FISMPoolComponentDescription *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FName FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar5 = param_1->Flags;
  uVar5 = param_1->NumCustomDataFloats + -0x61c88647 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
  uVar4 = FCrc::MemCrc_DEPRECATED(&param_1->Position,0x18,0);
  pFVar1 = (param_1->Tags).AllocatorInstance.Data;
  uVar7 = 0;
  uVar5 = uVar5 * 0x40 + (uVar5 >> 2) + uVar4 + 0x9e3779b9 ^ uVar5;
  uVar5 = param_1->StartCullDistance + -0x61c88647 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
  uVar5 = param_1->EndCullDistance + -0x61c88647 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
  uVar5 = param_1->MinLod + -0x61c88647 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
  uVar5 = uVar5 * 0x40 + (int)param_1->LodScale + -0x61c88647 + (uVar5 >> 2) ^ uVar5;
  uVar5 = param_1->GroupHash + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
  for (lVar6 = (longlong)(param_1->Tags).ArrayNum; lVar6 != 0; lVar6 = lVar6 + -1) {
    uVar2 = *(undefined8 *)pFVar1;
    uVar4 = GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar1 = pFVar1 + 8;
    uVar7 = uVar7 ^ uVar4 + 0x9e3779b9 +
                    (int)((ulonglong)uVar2 >> 0x20) + uVar7 * 0x40 + (uVar7 >> 2);
  }
  FVar3 = param_1->StatsCategory;
  uVar5 = uVar7 + uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  uVar7 = GetTypeHash(FVar3.ComparisonIndex.Value);
  return uVar7 + 0x9e3779b9 + FVar3.Number + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
}

// GetTypeHash @ 1463406b0

uint __cdecl GetTypeHash(FISMPoolStaticMeshInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (param_1->MaterialsOverrides).ArrayNum;
  uVar6 = (param_1->StaticMesh).WeakPtr.ObjectSerialNumber ^
          (param_1->StaticMesh).WeakPtr.ObjectIndex;
  pFVar5 = (param_1->MaterialsOverrides).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  uVar6 = uVar6 * 0x40 + iVar2 + (uVar6 >> 2) + 0x9e3779b9 ^ uVar6;
  while( true ) {
    if ((param_1->MaterialsOverrides).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    uVar6 = uVar6 ^ (uVar6 >> 2) + 0x9e3779b9 +
                    ((uint)((ulonglong)*(undefined8 *)pFVar5 >> 0x20) ^ (uint)*(undefined8 *)pFVar5)
                    + uVar6 * 0x40;
    pFVar5 = pFVar5 + 8;
  }
  pFVar5 = (param_1->CustomPrimitiveData).AllocatorInstance.Data;
  iVar2 = (param_1->CustomPrimitiveData).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 4;
  while( true ) {
    if ((param_1->CustomPrimitiveData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    iVar4 = uVar6 * 0x40 + (uVar6 >> 2);
    if (pFVar5 == pFVar1) break;
    uVar6 = uVar6 ^ *(int *)pFVar5 + -0x61c88647 + iVar4;
    pFVar5 = pFVar5 + 4;
  }
  uVar3 = GetTypeHash(&param_1->Desc);
  return uVar3 + 0x9e3779b9 + iVar4 ^ uVar6;
}

// Z_Construct_UClass_AISMPoolActor_NoRegister @ 146343fd0

UClass * __cdecl Z_Construct_UClass_AISMPoolActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AISMPoolActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ISMPool",L"ISMPoolActor",
               &Z_Registration_Info_UClass_AISMPoolActor.InnerSingleton,
               AISMPoolActor::StaticRegisterNativesAISMPoolActor,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AISMPoolActor>,InternalVTableHelperCtorCaller<AISMPoolActor>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AISMPoolActor.InnerSingleton;
}

// Z_Construct_UClass_UISMPoolSubSystem_NoRegister @ 146344090

UClass * __cdecl Z_Construct_UClass_UISMPoolSubSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UISMPoolSubSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ISMPool",L"ISMPoolSubSystem",
               &Z_Registration_Info_UClass_UISMPoolSubSystem.InnerSingleton,
               UISMPoolSubSystem::StaticRegisterNativesUISMPoolSubSystem,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UISMPoolSubSystem>,
               InternalVTableHelperCtorCaller<UISMPoolSubSystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UISMPoolSubSystem.InnerSingleton;
}

// `dynamic_atexit_destructor_for_'CVarISMPoolClearComponentMeshOnRecycle'' @ 1503da860

void __cdecl _dynamic_atexit_destructor_for__CVarISMPoolClearComponentMeshOnRecycle__(void)

{
  CVarISMPoolClearComponentMeshOnRecycle._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarISMPoolClearComponentMeshOnRecycle);
  return;
}

// `dynamic_atexit_destructor_for_'CVarISMPoolComponentFreeListTargetSize'' @ 1503da880

void __cdecl _dynamic_atexit_destructor_for__CVarISMPoolComponentFreeListTargetSize__(void)

{
  CVarISMPoolComponentFreeListTargetSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarISMPoolComponentFreeListTargetSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarISMPoolComponentKeepAlive'' @ 1503da8a0

void __cdecl _dynamic_atexit_destructor_for__CVarISMPoolComponentKeepAlive__(void)

{
  CVarISMPoolComponentKeepAlive._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarISMPoolComponentKeepAlive);
  return;
}

// `dynamic_atexit_destructor_for_'CVarISMPoolComponentRecycle'' @ 1503da8c0

void __cdecl _dynamic_atexit_destructor_for__CVarISMPoolComponentRecycle__(void)

{
  CVarISMPoolComponentRecycle._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarISMPoolComponentRecycle);
  return;
}

// `dynamic_atexit_destructor_for_'CVarISMPoolDebugDraw'' @ 1503da8e0

void __cdecl _dynamic_atexit_destructor_for__CVarISMPoolDebugDraw__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarISMPoolDebugDraw);
  return;
}

// `dynamic_atexit_destructor_for_'CVarISMPoolShadowCopyCustomData'' @ 1503da900

void __cdecl _dynamic_atexit_destructor_for__CVarISMPoolShadowCopyCustomData__(void)

{
  CVarISMPoolShadowCopyCustomData._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarISMPoolShadowCopyCustomData);
  return;
}

// `dynamic_atexit_destructor_for_'CVarISMPoolStats'' @ 1503da920

void __cdecl _dynamic_atexit_destructor_for__CVarISMPoolStats__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarISMPoolStats);
  return;
}

// `dynamic_atexit_destructor_for_'Colors'' @ 1503da940

void __cdecl `DrawBoxAndChildren'::__l2::_dynamic_atexit_destructor_for__Colors__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Colors.AllocatorInstance.Data;
  if (Colors.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Colors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

