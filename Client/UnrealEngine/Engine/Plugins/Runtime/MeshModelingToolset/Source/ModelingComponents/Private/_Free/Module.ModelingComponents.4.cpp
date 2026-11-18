// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 90

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1413b53c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeGenerateTree,*pFVar1,
               L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1413b5450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeInitialTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeInitialTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeInitialTimeSlice,*pFVar1,
               L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1413b54e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeProgressTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeProgressTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeProgressTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeProgressTimeSlice,*pFVar1,
               L"AABBTreeProgressTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1413b5570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeTimeSliceSetup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeTimeSliceSetup ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeTimeSliceSetup>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeTimeSliceSetup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeTimeSliceSetup,*pFVar1,
               L"AABBTreeTimeSliceSetup","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1413b5600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeAddElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeAddElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeAddElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeAddElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeAddElement,*pFVar1,
               L"BoundingVolumeAddElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1413b5690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeComputeGlobalBox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeComputeGlobalBox ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeComputeGlobalBox>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeComputeGlobalBox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeComputeGlobalBox,*pFVar1,
               L"BoundingVolumeComputeGlobalBox","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1413b5720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeFillGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeFillGrid ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeFillGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeFillGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeFillGrid,*pFVar1,
               L"BoundingVolumeFillGrid","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1413b57b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeGenerateTree ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeGenerateTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeGenerateTree,*pFVar1,
               L"BoundingVolumeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1413b5840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeRemoveElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeRemoveElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeRemoveElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeRemoveElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeRemoveElement,*pFVar1,
               L"BoundingVolumeRemoveElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1413b58d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeUpdateElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeUpdateElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeUpdateElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeUpdateElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeUpdateElement,*pFVar1,
               L"BoundingVolumeUpdateElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h__Script_ModelingComponents_3315927740'' @ 1413b5960

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h__Script_ModelingComponents_3315927740__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelingComponents",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h__Script_ModelingComponents_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h__Script_ModelingComponents_Statics
             ::EnumInfo,1);
  return;
}

// Z_Construct_UClass_UMultiTransformer @ 14cbbd670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMultiTransformer(void)

{
  if (Z_Registration_Info_UClass_UMultiTransformer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMultiTransformer.OuterSingleton,
               &Z_Construct_UClass_UMultiTransformer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMultiTransformer.OuterSingleton;
}

// EMultiTransformerMode_StaticEnum @ 14cbbd6b0

UEnum * __cdecl EMultiTransformerMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMultiTransformerMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelingComponents();
    Z_Registration_Info_UEnum_EMultiTransformerMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ModelingComponents_EMultiTransformerMode,(UObject *)pUVar1,
                       L"EMultiTransformerMode");
  }
  return Z_Registration_Info_UEnum_EMultiTransformerMode.OuterSingleton;
}

// AddWeakLambda<UMultiTransformer,`UMultiTransformer::Setup'::__l2::<lambda_1>_> @ 14cbbee90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
::AddWeakLambda<UMultiTransformer,_UMultiTransformer::Setup_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
           *this,UMultiTransformer *param_1,<lambda_1> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R9;
  <lambda_1> *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar5 = 0;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
    puVar3[4] = *in_R9;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_78,(FReadAccessScope *)&local_60);
  if (((local_70.DelegateSize == 0) ||
      (local_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_78,(FReadAccessScope *)&local_60);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                         (local_70.DelegateAllocator,&local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_60);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_70.DelegateAllocator;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_70.DelegateSize;
    local_70.DelegateSize = 0;
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddWeakLambda<UMultiTransformer,`UMultiTransformer::Setup'::__l2::<lambda_2>_> @ 14cbbf150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
AddWeakLambda<UMultiTransformer,_UMultiTransformer::Setup_::__l2::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
           *this,UMultiTransformer *param_1,<lambda_2> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R9;
  <lambda_2> *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar5 = 0;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::`2'::<lambda_2>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_2> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_2> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
    puVar3[4] = *in_R9;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_78,(FReadAccessScope *)&local_60);
  if (((local_70.DelegateSize == 0) ||
      (local_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_78,(FReadAccessScope *)&local_60);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                         (local_70.DelegateAllocator,&local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_60);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_70.DelegateAllocator;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_70.DelegateSize;
    local_70.DelegateSize = 0;
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// Dispatch<FVertexID,`UE::WeightMaps::FindVertexWeightMaps'::__l2::<lambda_1>,1> @ 14cbbf450

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_UE::WeightMaps::FindVertexWeightMaps_::__l2::<lambda_1>,1>
          (FName param_1,<lambda_1> *param_2,FMeshAttributeArraySetBase *param_3)

{
  TAttributesSet<FVertexID> *this;
  FMeshAttributeArraySetBase *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  this = param_2->VertexAttribs;
  if (param_3->Extent == 0) {
    local_28 = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_28) && (&local_28 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    local_20 = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_20) && (&local_20 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_20;
      return;
    }
  }
  else {
    local_18[0] = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= local_18) && (local_18 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
    }
  }
  return;
}

// Dispatch<FVertexID,`UE::WeightMaps::FindVertexWeightMaps'::__l2::<lambda_1>,2> @ 14cbbf6f0

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_UE::WeightMaps::FindVertexWeightMaps_::__l2::<lambda_1>,2>
          (FName param_1,<lambda_1> *param_2,FMeshAttributeArraySetBase *param_3)

{
  TAttributesSet<FVertexID> *this;
  FMeshAttributeArraySetBase *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  this = param_2->VertexAttribs;
  if (param_3->Extent == 0) {
    local_28 = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_28) && (&local_28 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    local_20 = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_20) && (&local_20 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_20;
      return;
    }
  }
  else {
    local_18[0] = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= local_18) && (local_18 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
    }
  }
  return;
}

// Dispatch<FVertexID,`UE::WeightMaps::FindVertexWeightMaps'::__l2::<lambda_1>,3> @ 14cbbf990

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_UE::WeightMaps::FindVertexWeightMaps_::__l2::<lambda_1>,3>
          (FName param_1,<lambda_1> *param_2,FMeshAttributeArraySetBase *param_3)

{
  TAttributesSet<FVertexID> *this;
  FMeshAttributeArraySetBase *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  this = param_2->VertexAttribs;
  if (param_3->Extent == 0) {
    local_28 = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_28) && (&local_28 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    local_20 = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_20) && (&local_20 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_20;
      return;
    }
  }
  else {
    local_18[0] = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= local_18) && (local_18 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
    }
  }
  return;
}

// Dispatch<FVertexID,`UE::WeightMaps::FindVertexWeightMaps'::__l2::<lambda_1>,4> @ 14cbbfc30

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_UE::WeightMaps::FindVertexWeightMaps_::__l2::<lambda_1>,4>
          (FName param_1,<lambda_1> *param_2,FMeshAttributeArraySetBase *param_3)

{
  TAttributesSet<FVertexID> *this;
  FMeshAttributeArraySetBase *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  this = param_2->VertexAttribs;
  if (param_3->Extent == 0) {
    local_28 = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_28) && (&local_28 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    local_20 = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_20) && (&local_20 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_20;
      return;
    }
  }
  else {
    local_18[0] = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= local_18) && (local_18 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
    }
  }
  return;
}

// Dispatch<FVertexID,`UE::WeightMaps::FindVertexWeightMaps'::__l2::<lambda_1>,5> @ 14cbbfed0

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_UE::WeightMaps::FindVertexWeightMaps_::__l2::<lambda_1>,5>
          (FName param_1,<lambda_1> *param_2,FMeshAttributeArraySetBase *param_3)

{
  TAttributesSet<FVertexID> *this;
  FMeshAttributeArraySetBase *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  this = param_2->VertexAttribs;
  if (param_3->Extent == 0) {
    local_28 = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_28) && (&local_28 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    local_20 = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_20) && (&local_20 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_20;
      return;
    }
  }
  else {
    local_18[0] = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= local_18) && (local_18 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
    }
  }
  return;
}

// Dispatch<FVertexID,`UE::WeightMaps::FindVertexWeightMaps'::__l2::<lambda_1>,6> @ 14cbc0170

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_UE::WeightMaps::FindVertexWeightMaps_::__l2::<lambda_1>,6>
          (FName param_1,<lambda_1> *param_2,FMeshAttributeArraySetBase *param_3)

{
  TAttributesSet<FVertexID> *this;
  FMeshAttributeArraySetBase *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  this = param_2->VertexAttribs;
  if (param_3->Extent == 0) {
    local_28 = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_28) && (&local_28 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    local_20 = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_20) && (&local_20 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_20;
      return;
    }
  }
  else {
    local_18[0] = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= local_18) && (local_18 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
    }
  }
  return;
}

// Dispatch<FVertexID,`UE::WeightMaps::FindVertexWeightMaps'::__l2::<lambda_1>,7> @ 14cbc0410

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_UE::WeightMaps::FindVertexWeightMaps_::__l2::<lambda_1>,7>
          (FName param_1,<lambda_1> *param_2,FMeshAttributeArraySetBase *param_3)

{
  TAttributesSet<FVertexID> *this;
  FMeshAttributeArraySetBase *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  this = param_2->VertexAttribs;
  if (param_3->Extent == 0) {
    local_28 = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_28) && (&local_28 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    local_20 = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_20) && (&local_20 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_20;
      return;
    }
  }
  else {
    local_18[0] = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= local_18) && (local_18 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
    }
  }
  return;
}

// Dispatch<FVertexID,`UE::WeightMaps::FindVertexWeightMaps'::__l2::<lambda_1>,0> @ 14cbc06b0

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_UE::WeightMaps::FindVertexWeightMaps_::__l2::<lambda_1>,0>
          (FName param_1,<lambda_1> *param_2,FMeshAttributeArraySetBase *param_3)

{
  TAttributesSet<FVertexID> *this;
  FMeshAttributeArraySetBase *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  this = param_2->VertexAttribs;
  if (param_3->Extent == 0) {
    local_28 = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_28) && (&local_28 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28;
      return;
    }
  }
  else if (param_3->Extent == 1) {
    local_20 = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_20) && (&local_20 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_20;
      return;
    }
  }
  else {
    local_18[0] = param_1;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,param_1);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar7->Ptr).Ptr, pFVar1->Type == 3))
       && (pFVar1->Extent == 1)) {
      pTVar2 = param_2->PropertyNamesOut;
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= local_18) && (local_18 < pFVar3 + pTVar2->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
    }
  }
  return;
}

// DuplicateObject<UCurveFloat> @ 14cbc0950

UCurveFloat * __cdecl
DuplicateObject<UCurveFloat>(UCurveFloat *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UCurveFloat *pUVar2;
  
  pUVar1 = Z_Construct_UClass_UCurveFloat_NoRegister();
  pUVar2 = (UCurveFloat *)DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pUVar2;
}

// ForEach<`UE::WeightMaps::FindVertexWeightMaps'::__l2::<lambda_1>_> @ 14cbc0e20

void __thiscall
TAttributesSet<FVertexID>::ForEach<_UE::WeightMaps::FindVertexWeightMaps_::__l2::<lambda_1>_>
          (TAttributesSet<FVertexID> *this,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FMeshAttributeArraySetBase *pFVar5;
  code *pcVar6;
  TAttributesSet<FVertexID> *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  <lambda_1> local_a8;
  TAttributesSet<FVertexID> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TAttributesSet<FVertexID> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&this->field_0x28;
  puVar1 = &this->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&this->field_0x20;
    if (*(uint **)&this->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14cbc0ebd;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar9;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14cbc0ebd:
  uVar12 = *(uint *)&this->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_70 = *(int *)&this->field_0x8 - *(int *)&this->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = this;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = this;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&this->field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14cbc0fc0;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14cbc0fc0:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == this))
    break;
    local_a8.VertexAttribs = param_1->VertexAttribs;
    local_a8.PropertyNamesOut = param_1->PropertyNamesOut;
    lVar9 = *(longlong *)pTVar7;
    pFVar5 = *(FMeshAttributeArraySetBase **)
              (lVar9 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    (*::JumpTable.Fns[pFVar5->Type])
              (*(FName *)(lVar9 + (longlong)TStack_60.CurrentBitIndex * 0x18),&local_a8,pFVar5);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// InternalConstructor<UMultiTransformer> @ 14cbc1050

void __cdecl InternalConstructor<UMultiTransformer>(FObjectInitializer *param_1)

{
  UObject *this;
  undefined8 uVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[4].field_0x1c = 0x7fffe;
    *(undefined2 *)&this[4].field_0x20 = 0;
    *(undefined ***)this = &___7UMultiTransformer__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 2;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 2;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 2;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 2;
    *(undefined8 *)&this[4].field_0x8 = 0;
    this[4].field_0x22 = 1;
    *(undefined8 *)&this[6].field_0x8 = 0x3ff0000000000000;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)(this + 5) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[5].field_0x8 = uVar1;
    *(double *)&this[5].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0x3ff0000000000000;
    *(undefined2 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 9) = 0;
    *(undefined8 *)&this[9].field_0x8 = 0;
    *(undefined8 *)&this[10].field_0x8 = 0;
    this[10].field_0x10 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMultiTransformer> @ 14cbc11b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMultiTransformer>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UMultiTransformer::GetPrivateStaticClass();
  pUVar2 = StaticAllocateObject
                     (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar2 != (UObject *)0x0) {
    UObject::UObject(pUVar2,param_1);
    *(undefined4 *)&pUVar2[4].field_0x1c = 0x7fffe;
    *(undefined ***)pUVar2 = &___7UMultiTransformer__6B_;
    *(undefined8 *)(pUVar2 + 1) = 0;
    *(undefined8 *)&pUVar2[1].field_0x8 = 0;
    *(undefined8 *)&pUVar2[1].field_0x10 = 0;
    *(undefined8 *)&pUVar2[1].field_0x18 = 2;
    *(undefined8 *)&pUVar2[1].field_0x20 = 0;
    *(undefined8 *)(pUVar2 + 2) = 0;
    *(undefined8 *)&pUVar2[2].field_0x8 = 0;
    *(undefined8 *)&pUVar2[2].field_0x10 = 2;
    *(undefined8 *)&pUVar2[2].field_0x18 = 0;
    *(undefined8 *)&pUVar2[2].field_0x20 = 0;
    *(undefined8 *)(pUVar2 + 3) = 0;
    *(undefined8 *)&pUVar2[3].field_0x8 = 2;
    *(undefined8 *)&pUVar2[3].field_0x10 = 0;
    *(undefined8 *)&pUVar2[3].field_0x18 = 0;
    *(undefined8 *)&pUVar2[3].field_0x20 = 0;
    *(undefined8 *)(pUVar2 + 4) = 2;
    *(undefined8 *)&pUVar2[4].field_0x8 = 0;
    *(undefined2 *)&pUVar2[4].field_0x20 = 0;
    pUVar2[4].field_0x22 = 1;
    *(undefined8 *)&pUVar2[6].field_0x8 = 0x3ff0000000000000;
    *(undefined8 *)(pUVar2 + 6) = 0;
    *(undefined8 *)&pUVar2[5].field_0x20 = 0;
    *(undefined8 *)&pUVar2[5].field_0x18 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)(pUVar2 + 5) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar2[5].field_0x8 = uVar1;
    *(double *)&pUVar2[5].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&pUVar2[5].field_0x18 = 0;
    *(undefined8 *)&pUVar2[5].field_0x20 = 0;
    *(undefined8 *)(pUVar2 + 6) = 0;
    *(undefined8 *)&pUVar2[6].field_0x8 = 0x3ff0000000000000;
    *(undefined2 *)(pUVar2 + 7) = 0;
    *(undefined8 *)&pUVar2[7].field_0x8 = 0;
    *(undefined8 *)&pUVar2[7].field_0x10 = 0;
    *(undefined8 *)&pUVar2[7].field_0x18 = 0;
    *(undefined8 *)(pUVar2 + 8) = 0;
    *(undefined8 *)(pUVar2 + 9) = 0;
    *(undefined8 *)&pUVar2[9].field_0x8 = 0;
    *(undefined8 *)&pUVar2[10].field_0x8 = 0;
    pUVar2[10].field_0x10 = 0;
    return pUVar2;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EMultiTransformerMode> @ 14cbc1520

UEnum * __cdecl StaticEnum<enum_EMultiTransformerMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMultiTransformerMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelingComponents();
    Z_Registration_Info_UEnum_EMultiTransformerMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ModelingComponents_EMultiTransformerMode,(UObject *)pUVar1,
                       L"EMultiTransformerMode");
  }
  return Z_Registration_Info_UEnum_EMultiTransformerMode.OuterSingleton;
}

// ~TFunction_OwnedObject<`UE::Geometry::FQuickAxisRotator::Initialize'::__l2::<lambda_1>,0,0> @ 14cbc1970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FQuickAxisRotator::Initialize'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::FQuickAxisRotator::Initialize_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FQuickAxisRotator::Initialize'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::FQuickAxisTranslater::Initialize'::__l2::<lambda_1>,0,0> @ 14cbc1990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FQuickAxisTranslater::Initialize'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::FQuickAxisTranslater::Initialize_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FQuickAxisTranslater::Initialize'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// `vcall'{24,{flat}}'_}' @ 14cbc1d68

/* [thunk]: __cdecl FTransformGizmoDataBinder::`vcall'{24,{flat}}' }' */

void __thiscall FTransformGizmoDataBinder::_vcall__24__flat______(FTransformGizmoDataBinder *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cbc1d6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))();
  return;
}

// `vcall'{32,{flat}}'_}' @ 14cbc1d74

/* [thunk]: __cdecl FTransformGizmoDataBinder::`vcall'{32,{flat}}' }' */

void __thiscall FTransformGizmoDataBinder::_vcall__32__flat______(FTransformGizmoDataBinder *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cbc1d77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x20))();
  return;
}

// `scalar_deleting_destructor' @ 14cbc1d80

void * __thiscall
IBaseDelegateInstance<void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc1db0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc1de0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc1e10

void * __thiscall
IBaseDelegateInstance<void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc1e40

void * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc1ea0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc1f00

void * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc1f60

void * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc1fc0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc2020

void * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc2080

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMultiTransformer,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMultiTransformer,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc20b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMultiTransformer,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMultiTransformer,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc20e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc2110

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc2140

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc2170

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc21a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc21d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc2200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FQuickAxisRotator::Initialize'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FQuickAxisRotator::Initialize'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc2240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FQuickAxisTranslater::Initialize'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FQuickAxisTranslater::Initialize'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc2280

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc22b0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UMultiTransformer::Setup'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc22e0

void * __thiscall
FTransformGizmoDataBinder::_scalar_deleting_destructor_
          (FTransformGizmoDataBinder *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  ForElementType<FSetElementId> FVar5;
  void *pvVar6;
  longlong *plVar7;
  
  *(undefined ***)this = &___7FTransformGizmoDataBinder__6B_;
  Reset(this);
  pFVar3 = (this->ContextObjectsToUnregisterWith).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (*(longlong *)&this->BoundToActualConversion != 0) {
    plVar4 = *(longlong **)&(this->BoundToActualConversion).field_0x28;
    plVar7 = (longlong *)&(this->BoundToActualConversion).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (*(longlong *)&this->ActualToBoundConversion != 0) {
    plVar4 = *(longlong **)&(this->ActualToBoundConversion).field_0x28;
    plVar7 = (longlong *)&(this->ActualToBoundConversion).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  (this->BoundGizmos).HashSize = 0;
  FVar5 = (this->BoundGizmos).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->BoundGizmos).Elements);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTrackedGizmoChanged).field_0x8,
             *(int *)&(this->OnTrackedGizmoChanged).field_0x10);
  pvVar6 = *(void **)&(this->OnTrackedGizmoChanged).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTrackedGizmoChanged);
  plVar4 = *(longlong **)&this->field_0x18;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x340);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbc23f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UMultiTransformer::_scalar_deleting_destructor_(UMultiTransformer *this,uint param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UMultiTransformer__6B_;
  if (*(longlong *)&this->IsNonUniformScaleAllowed != 0) {
    plVar1 = *(longlong **)&(this->IsNonUniformScaleAllowed).field_0x28;
    plVar3 = (longlong *)&(this->IsNonUniformScaleAllowed).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->EnableSnapToWorldGridFunc != 0) {
    plVar1 = *(longlong **)&(this->EnableSnapToWorldGridFunc).field_0x28;
    plVar3 = (longlong *)&(this->EnableSnapToWorldGridFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnEndPivotEdit).field_0x8,*(int *)&(this->OnEndPivotEdit).field_0x10);
  pvVar2 = *(void **)&(this->OnEndPivotEdit).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEndPivotEdit);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTransformCompleted).field_0x8,
             *(int *)&(this->OnTransformCompleted).field_0x10);
  pvVar2 = *(void **)&(this->OnTransformCompleted).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTransformCompleted);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTransformUpdated).field_0x8,*(int *)&(this->OnTransformUpdated).field_0x10);
  pvVar2 = *(void **)&(this->OnTransformUpdated).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTransformUpdated);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTransformStarted).field_0x8,*(int *)&(this->OnTransformStarted).field_0x10);
  pvVar2 = *(void **)&(this->OnTransformStarted).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTransformStarted);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b0);
  }
  return this;
}

// ApplyRenderingConfigurationToPreview @ 14cbc25a0

void __cdecl
ToolSetupUtil::ApplyRenderingConfigurationToPreview
          (UBaseDynamicMeshComponent *param_1,UToolTarget *param_2)

{
  UObject *pUVar1;
  UClass *this;
  
  this = Z_Construct_UClass_UModelingComponentsSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UObject *)0x0) && (pUVar1[1].field_0x10 != '\0')) {
    (**(code **)(param_1->_padding_ + 0xc80))(param_1);
  }
  return;
}

// ApplyRenderingConfigurationToPreview @ 14cbc2600

void __cdecl
ToolSetupUtil::ApplyRenderingConfigurationToPreview(UPreviewMesh *param_1,UToolTarget *param_2)

{
  int iVar1;
  UDynamicMeshComponent *pUVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  
  pUVar2 = (param_1->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UDynamicMeshComponent *)0x0) {
    pUVar4 = Z_Construct_UClass_UBaseDynamicMeshComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      pUVar4 = Z_Construct_UClass_UModelingComponentsSettings_NoRegister();
      if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar4);
      }
      pUVar3 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
      if ((pUVar3 != (UObject *)0x0) && (pUVar3[1].field_0x10 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00014cbc2675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(pUVar2->_padding_ + 0xc80))(pUVar2);
        return;
      }
    }
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeMultiTransformer @ 14cbc4320

void __cdecl EmptyLinkFunctionForGeneratedCodeMultiTransformer(void)

{
  return;
}

// GetContrastAdjustmentCurve @ 14cbc5480

UCurveFloat * __cdecl ToolSetupUtil::GetContrastAdjustmentCurve(UInteractiveToolManager *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  UPackage *pUVar3;
  UCurveFloat *pUVar4;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0x36;
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"/MeshModelingToolsetExp/Curves/ContrastAdjustmentCurve";
  pUVar1 = Z_Construct_UClass_UCurveFloat_NoRegister();
  pUVar2 = StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  pUVar3 = GetTransientPackage();
  pUVar1 = Z_Construct_UClass_UCurveFloat_NoRegister();
  pUVar4 = (UCurveFloat *)DuplicateObject_Internal(pUVar1,pUVar2,(UObject *)pUVar3,(FName)0x0);
  return pUVar4;
}

// GetCustomDepthOffsetMaterial @ 14cbc5550

UMaterialInstanceDynamic * __cdecl
ToolSetupUtil::GetCustomDepthOffsetMaterial
          (UInteractiveToolManager *param_1,FLinearColor *param_2,float param_3)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  UMaterialInstanceDynamic *this;
  FName *pFVar5;
  FName local_res20;
  TStringView<wchar_t> local_48;
  wchar_t *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  local_48.Size = 0;
  local_48._12_4_ = 0;
  local_48.DataPtr = (wchar_t *)0x0;
  local_38 = L"/MeshModelingToolsetExp/Materials/SimpleOffsetMaterial";
  iStack_30 = 0x36;
  pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar4 = (UMaterialInterface *)
           StaticLoadObject(pUVar3,(UObject *)0x0,(TStringView<wchar_t> *)&local_38,&local_48,0,
                            (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
  this = (UMaterialInstanceDynamic *)0x0;
  if (pUVar4 != (UMaterialInterface *)0x0) {
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    this = UMaterialInstanceDynamic::Create(pUVar4,(UObject *)param_1,(FName)0x0);
    pwVar1 = *(wchar_t **)&param_2->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    pFVar5 = ::FName::FName(&local_res20,L"Color");
    local_38 = pwVar1;
    _iStack_30 = uVar2;
    UMaterialInstanceDynamic::SetVectorParameterValue(this,*pFVar5,(FLinearColor *)&local_38);
    pFVar5 = ::FName::FName(&local_res20,L"DepthBias");
    UMaterialInstanceDynamic::SetScalarParameterValue(this,*pFVar5,param_3);
  }
  return this;
}

// GetCustomDepthOffsetMaterial @ 14cbc5670

UMaterialInstanceDynamic * __cdecl
ToolSetupUtil::GetCustomDepthOffsetMaterial
          (UInteractiveToolManager *param_1,FLinearColor *param_2,float param_3,float param_4)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  UMaterialInstanceDynamic *this;
  FName *pFVar5;
  TStringView<wchar_t> local_58;
  wchar_t *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  
  local_58.Size = 0;
  local_58._12_4_ = 0;
  local_58.DataPtr = (wchar_t *)0x0;
  local_48 = L"/MeshModelingToolsetExp/Materials/SimpleOffsetMaterial_Transparent";
  iStack_40 = 0x42;
  pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar4 = (UMaterialInterface *)
           StaticLoadObject(pUVar3,(UObject *)0x0,(TStringView<wchar_t> *)&local_48,&local_58,0,
                            (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
  this = (UMaterialInstanceDynamic *)0x0;
  if (pUVar4 != (UMaterialInterface *)0x0) {
    local_58.DataPtr = (wchar_t *)0x0;
    this = UMaterialInstanceDynamic::Create(pUVar4,(UObject *)param_1,(FName)0x0);
    pwVar1 = *(wchar_t **)&param_2->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    pFVar5 = ::FName::FName((FName *)&local_58,L"Color");
    local_48 = pwVar1;
    _iStack_40 = uVar2;
    UMaterialInstanceDynamic::SetVectorParameterValue(this,*pFVar5,(FLinearColor *)&local_48);
    pFVar5 = ::FName::FName((FName *)&local_58,L"DepthBias");
    UMaterialInstanceDynamic::SetScalarParameterValue(this,*pFVar5,param_3);
    pFVar5 = ::FName::FName((FName *)&local_58,L"Opacity");
    UMaterialInstanceDynamic::SetScalarParameterValue(this,*pFVar5,param_4);
  }
  return this;
}

// GetCustomImageBasedSculptMaterial @ 14cbc57c0

UMaterialInstanceDynamic * __cdecl
ToolSetupUtil::GetCustomImageBasedSculptMaterial(UInteractiveToolManager *param_1,UTexture *param_2)

{
  UClass *pUVar1;
  UMaterialInterface *pUVar2;
  UMaterialInstanceDynamic *this;
  FName *pFVar3;
  FName local_res18 [2];
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0x3b;
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/ImageBasedMaterial_Master";
  pUVar1 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar2 = (UMaterialInterface *)
           StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if (pUVar2 != (UMaterialInterface *)0x0) {
    local_res18[0].ComparisonIndex.Value = 0;
    local_res18[0].Number = 0;
    this = UMaterialInstanceDynamic::Create(pUVar2,(UObject *)param_1,(FName)0x0);
    if (param_2 != (UTexture *)0x0) {
      pFVar3 = ::FName::FName(local_res18,L"ImageTexture");
      UMaterialInstanceDynamic::SetTextureParameterValue(this,*pFVar3,param_2);
    }
    return this;
  }
  return (UMaterialInstanceDynamic *)0x0;
}

// GetCustomTwoSidedDepthOffsetMaterial @ 14cbc58b0

UMaterialInstanceDynamic * __cdecl
ToolSetupUtil::GetCustomTwoSidedDepthOffsetMaterial
          (UInteractiveToolManager *param_1,FLinearColor *param_2,float param_3)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  UMaterialInstanceDynamic *this;
  FName *pFVar5;
  FName local_res20;
  TStringView<wchar_t> local_48;
  wchar_t *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  local_48.Size = 0;
  local_48._12_4_ = 0;
  local_48.DataPtr = (wchar_t *)0x0;
  local_38 = L"/MeshModelingToolsetExp/Materials/SimpleTwoSidedOffsetMaterial";
  iStack_30 = 0x3e;
  pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar4 = (UMaterialInterface *)
           StaticLoadObject(pUVar3,(UObject *)0x0,(TStringView<wchar_t> *)&local_38,&local_48,0,
                            (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
  this = (UMaterialInstanceDynamic *)0x0;
  if (pUVar4 != (UMaterialInterface *)0x0) {
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    this = UMaterialInstanceDynamic::Create(pUVar4,(UObject *)param_1,(FName)0x0);
    pwVar1 = *(wchar_t **)&param_2->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    pFVar5 = ::FName::FName(&local_res20,L"Color");
    local_38 = pwVar1;
    _iStack_30 = uVar2;
    UMaterialInstanceDynamic::SetVectorParameterValue(this,*pFVar5,(FLinearColor *)&local_38);
    pFVar5 = ::FName::FName(&local_res20,L"DepthBias");
    UMaterialInstanceDynamic::SetScalarParameterValue(this,*pFVar5,param_3);
  }
  return this;
}

// GetCustomTwoSidedDepthOffsetMaterial @ 14cbc59d0

UMaterialInstanceDynamic * __cdecl
ToolSetupUtil::GetCustomTwoSidedDepthOffsetMaterial
          (UInteractiveToolManager *param_1,FLinearColor *param_2,float param_3,float param_4)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  UMaterialInstanceDynamic *this;
  FName *pFVar5;
  TStringView<wchar_t> local_58;
  wchar_t *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  
  local_58.Size = 0;
  local_58._12_4_ = 0;
  local_58.DataPtr = (wchar_t *)0x0;
  local_48 = L"/MeshModelingToolsetExp/Materials/SimpleTwoSidedOffsetMaterial_Transparent";
  iStack_40 = 0x4a;
  pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar4 = (UMaterialInterface *)
           StaticLoadObject(pUVar3,(UObject *)0x0,(TStringView<wchar_t> *)&local_48,&local_58,0,
                            (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
  this = (UMaterialInstanceDynamic *)0x0;
  if (pUVar4 != (UMaterialInterface *)0x0) {
    local_58.DataPtr = (wchar_t *)0x0;
    this = UMaterialInstanceDynamic::Create(pUVar4,(UObject *)param_1,(FName)0x0);
    pwVar1 = *(wchar_t **)&param_2->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    pFVar5 = ::FName::FName((FName *)&local_58,L"Color");
    local_48 = pwVar1;
    _iStack_40 = uVar2;
    UMaterialInstanceDynamic::SetVectorParameterValue(this,*pFVar5,(FLinearColor *)&local_48);
    pFVar5 = ::FName::FName((FName *)&local_58,L"DepthBias");
    UMaterialInstanceDynamic::SetScalarParameterValue(this,*pFVar5,param_3);
    pFVar5 = ::FName::FName((FName *)&local_58,L"Opacity");
    UMaterialInstanceDynamic::SetScalarParameterValue(this,*pFVar5,param_4);
  }
  return this;
}

// GetDefaultBrushAlphaMaterial @ 14cbc5b20

UMaterialInstanceDynamic * __cdecl
ToolSetupUtil::GetDefaultBrushAlphaMaterial(UInteractiveToolManager *param_1)

{
  UClass *pUVar1;
  UMaterialInterface *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0x3d;
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/BrushAlphaIndicatorMaterial";
  pUVar1 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar2 = (UMaterialInterface *)
           StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if (pUVar2 != (UMaterialInterface *)0x0) {
    pUVar3 = UMaterialInstanceDynamic::Create(pUVar2,(UObject *)param_1,(FName)0x0);
    return pUVar3;
  }
  return (UMaterialInstanceDynamic *)0x0;
}

// GetDefaultBrushVolumeMaterial @ 14cbc5bd0

UMaterialInstanceDynamic * __cdecl
ToolSetupUtil::GetDefaultBrushVolumeMaterial(UInteractiveToolManager *param_1)

{
  UClass *pUVar1;
  UMaterialInterface *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0x38;
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/BrushIndicatorMaterial";
  pUVar1 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar2 = (UMaterialInterface *)
           StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if (pUVar2 != (UMaterialInterface *)0x0) {
    pUVar3 = UMaterialInstanceDynamic::Create(pUVar2,(UObject *)param_1,(FName)0x0);
    return pUVar3;
  }
  return (UMaterialInstanceDynamic *)0x0;
}

// GetDefaultEditVolumeMaterial @ 14cbc5c80

UMaterialInterface * __cdecl ToolSetupUtil::GetDefaultEditVolumeMaterial(void)

{
  UClass *pUVar1;
  UMaterialInterface *pUVar2;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0x34;
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/VolumeEditMaterial";
  pUVar1 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar2 = (UMaterialInterface *)
           StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  return pUVar2;
}

// GetDefaultErrorMaterial @ 14cbc5d00

UMaterialInstanceDynamic * __cdecl
ToolSetupUtil::GetDefaultErrorMaterial(UInteractiveToolManager *param_1)

{
  FLinearColor FVar1;
  UMaterialInterface *pUVar2;
  UMaterialInstanceDynamic *this;
  FName *pFVar3;
  FName local_res10 [3];
  FLinearColor_u_0 local_28 [2];
  
  pUVar2 = GetDefaultWorkingMaterial(param_1);
  if (pUVar2 != (UMaterialInterface *)0x0) {
    local_res10[0].ComparisonIndex.Value = 0;
    local_res10[0].Number = 0;
    this = UMaterialInstanceDynamic::Create(pUVar2,(UObject *)param_1,(FName)0x0);
    FVar1 = ErrorBrightColor;
    pFVar3 = ::FName::FName(local_res10,L"BrightColor");
    local_28[0] = FVar1.field0_0x0;
    UMaterialInstanceDynamic::SetVectorParameterValue
              (this,*pFVar3,(FLinearColor *)&local_28[0]._s_0);
    FVar1 = ErrorDarkColor;
    pFVar3 = ::FName::FName(local_res10,L"DarkColor");
    local_28[0] = FVar1.field0_0x0;
    UMaterialInstanceDynamic::SetVectorParameterValue
              (this,*pFVar3,(FLinearColor *)&local_28[0]._s_0);
    pFVar3 = ::FName::FName(local_res10,L"TimeFactor");
    UMaterialInstanceDynamic::SetScalarParameterValue(this,*pFVar3,__real_40000000);
    return this;
  }
  return (UMaterialInstanceDynamic *)0x0;
}

// GetDefaultLineComponentMaterial @ 14cbc5dd0

UMaterialInterface * __cdecl
ToolSetupUtil::GetDefaultLineComponentMaterial(UInteractiveToolManager *param_1,bool param_2)

{
  UClass *pUVar1;
  UMaterialInterface *pUVar2;
  longlong *plVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  if (param_2) {
    local_18.DataPtr = L"/Engine/EngineMaterials/LineSetComponentMaterial";
    local_18.Size = 0x30;
  }
  else {
    local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/LineSetOverlaidComponentMaterial";
    local_18.Size = 0x42;
  }
  pUVar1 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar2 = (UMaterialInterface *)
           StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if ((pUVar2 == (UMaterialInterface *)0x0) && (param_1 != (UInteractiveToolManager *)0x0)) {
    plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014cbc5e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UMaterialInterface *)
             (**(code **)(*plVar3 + 0x38))(plVar3,1,*(code **)(*plVar3 + 0x38));
    return pUVar2;
  }
  return pUVar2;
}

// GetDefaultMaterial @ 14cbc5ea0

UMaterialInterface * __cdecl
ToolSetupUtil::GetDefaultMaterial(UInteractiveToolManager *param_1,UMaterialInterface *param_2)

{
  longlong *plVar1;
  UMaterialInterface *pUVar2;
  
  if ((param_2 == (UMaterialInterface *)0x0) && (param_1 != (UInteractiveToolManager *)0x0)) {
    plVar1 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))();
                    /* WARNING: Could not recover jumptable at 0x00014cbc5eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UMaterialInterface *)
             (**(code **)(*plVar1 + 0x38))(plVar1,1,*(code **)(*plVar1 + 0x38));
    return pUVar2;
  }
  return param_2;
}

// GetDefaultMaterial @ 14cbc5ee0

UMaterialInterface * __cdecl ToolSetupUtil::GetDefaultMaterial(void)

{
  UMaterial *pUVar1;
  
  pUVar1 = UMaterial::GetDefaultMaterial(MD_Surface);
  return (UMaterialInterface *)pUVar1;
}

// GetDefaultPointComponentMaterial @ 14cbc5ef0

UMaterialInterface * __cdecl
ToolSetupUtil::GetDefaultPointComponentMaterial(UInteractiveToolManager *param_1,bool param_2)

{
  UClass *pUVar1;
  UMaterialInterface *pUVar2;
  longlong *plVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  if (param_2) {
    local_18.DataPtr = L"/Engine/EngineMaterials/PointSetComponentMaterial";
    local_18.Size = 0x31;
  }
  else {
    local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/PointSetOverlaidComponentMaterial";
    local_18.Size = 0x43;
  }
  pUVar1 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar2 = (UMaterialInterface *)
           StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if ((pUVar2 == (UMaterialInterface *)0x0) && (param_1 != (UInteractiveToolManager *)0x0)) {
    plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014cbc5fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UMaterialInterface *)
             (**(code **)(*plVar3 + 0x38))(plVar3,1,*(code **)(*plVar3 + 0x38));
    return pUVar2;
  }
  return pUVar2;
}

// GetDefaultSculptMaterial @ 14cbc5fc0

UMaterialInterface * __cdecl
ToolSetupUtil::GetDefaultSculptMaterial(UInteractiveToolManager *param_1)

{
  UClass *pUVar1;
  UMaterialInterface *pUVar2;
  longlong *plVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0x30;
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/SculptMaterial";
  pUVar1 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar2 = (UMaterialInterface *)
           StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if ((pUVar2 == (UMaterialInterface *)0x0) && (param_1 != (UInteractiveToolManager *)0x0)) {
    plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))(param_1);
    pUVar2 = (UMaterialInterface *)(**(code **)(*plVar3 + 0x38))(plVar3,1);
  }
  return pUVar2;
}

// GetDefaultWorkingMaterial @ 14cbc6070

UMaterialInterface * __cdecl
ToolSetupUtil::GetDefaultWorkingMaterial(UInteractiveToolManager *param_1)

{
  UClass *pUVar1;
  UMaterialInterface *pUVar2;
  longlong *plVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0x34;
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/InProgressMaterial";
  pUVar1 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar2 = (UMaterialInterface *)
           StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if ((pUVar2 == (UMaterialInterface *)0x0) && (param_1 != (UInteractiveToolManager *)0x0)) {
    plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))(param_1);
    pUVar2 = (UMaterialInterface *)(**(code **)(*plVar3 + 0x38))(plVar3,1);
  }
  return pUVar2;
}

// GetDefaultWorkingMaterialInstance @ 14cbc6120

UMaterialInstanceDynamic * __cdecl
ToolSetupUtil::GetDefaultWorkingMaterialInstance(UInteractiveToolManager *param_1)

{
  UMaterialInterface *pUVar1;
  UMaterialInstanceDynamic *pUVar2;
  
  pUVar1 = GetDefaultWorkingMaterial(param_1);
  if (pUVar1 != (UMaterialInterface *)0x0) {
    pUVar2 = UMaterialInstanceDynamic::Create(pUVar1,(UObject *)param_1,(FName)0x0);
    return pUVar2;
  }
  return (UMaterialInstanceDynamic *)0x0;
}

// GetDefaultWorldReferenceFrame @ 14cbc6160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TFrame3<double> * __cdecl
ToolSetupUtil::GetDefaultWorldReferenceFrame
          (TFrame3<double> *__return_storage_ptr__,UInteractiveToolManager *param_1,
          TQuaternion<double> *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  longlong *plVar6;
  USceneSnappingManager *pUVar7;
  bool local_res10 [8];
  TVector<double>_u_0 local_2d8;
  undefined4 uStack_2c0;
  undefined1 uStack_2bc;
  undefined2 uStack_2bb;
  undefined1 uStack_2b9;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_298;
  double dStack_280;
  double dStack_278;
  double dStack_270;
  double dStack_268;
  FToolBuilderState local_258;
  TVector<double>_u_0 local_208;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  TQuat<double> local_1b8;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined2 local_18c;
  undefined8 local_188;
  TVector<double>_u_0 local_178;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [48];
  double local_118;
  double local_110;
  int local_a4;
  FWeakObjectPtr local_90;
  FWeakObjectPtr FStack_88;
  IActorInstanceManagerInterface *local_80;
  undefined8 uStack_78;
  
  dVar2 = _UNK_15061cbc8;
  dVar1 = ___xmm_3ff00000000000000000000000000000;
  local_298._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_298._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_298._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_178._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_178._s_0.Y = _UNK_150a9e648;
  local_258.SelectedActors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  dStack_280 = 0.0;
  dStack_278 = 0.0;
  local_258.SelectedActors.ArrayNum = 0;
  local_258.SelectedActors.ArrayMax = 0;
  local_158 = ___xmm_ffefffffffffffffffefffffffffffff;
  uStack_150 = _UNK_1508ffb58;
  local_258.SelectedComponents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
  uStack_160 = _UNK_150a9e6d8;
  local_258.SelectedComponents.ArrayNum = 0;
  local_258.SelectedComponents.ArrayMax = 0;
  local_258.TypedElementSelectionSet.WeakPtr.ObjectIndex = 0;
  local_258.TypedElementSelectionSet.WeakPtr.ObjectSerialNumber = 0;
  local_258.World = (UWorld *)0x0;
  local_258.ToolManager = (UInteractiveToolManager *)0x0;
  dStack_270 = ___xmm_3ff00000000000000000000000000000;
  dStack_268 = _UNK_15061cbc8;
  local_258.TargetManager = (UToolTargetManager *)0x0;
  local_258.GizmoManager = (UInteractiveGizmoManager *)0x0;
  plVar6 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))(param_1);
  (**(code **)(*plVar6 + 0x10))(plVar6,&local_258);
  bVar5 = UE::Geometry::GetCurrentSelectionWorldFrameBounds
                    (&local_258,(TFrame3<double> *)&local_298._s_0,
                     (TAxisAlignedBox3<double> *)&local_178._s_0,local_res10);
  if (bVar5) {
    if (local_res10[0] == false) {
      dStack_280 = (param_2->field0_0x0)._s_0.X;
      dStack_278 = (param_2->field0_0x0)._s_0.Y;
      dStack_270 = (param_2->field0_0x0)._s_0.Z;
      dStack_268 = (param_2->field0_0x0)._s_0.W;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X = local_298._s_0.X;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = local_298._s_0.Y;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_298._s_0.Z;
      (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = dStack_280;
      (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = dStack_278;
      (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = dStack_270;
      (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = dStack_268;
    }
    else {
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X = local_298._s_0.X;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = local_298._s_0.Y;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_298._s_0.Z;
      (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = dStack_280;
      (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = dStack_278;
      (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = dStack_270;
      (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = dStack_268;
    }
  }
  else {
    local_1d8 = 0.0;
    dStack_1d0 = 0.0;
    local_1b8.X = 0.0;
    local_1b8.Y = 0.0;
    local_188 = __real_3ff0000000000000;
    local_1c8 = 0.0;
    local_1b8.Z = dVar1;
    local_1b8.W = dVar2;
    local_198 = 0x42b40000;
    local_194 = 0x42c80000;
    local_190 = 0x3f800000;
    local_18c = 0;
    plVar6 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))(param_1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    memset(local_148,0,0x100);
    dVar2 = _UNK_150689518;
    dVar1 = ___xmm_00000000000000003ff0000000000000;
    uStack_2bb = 0;
    local_90.ObjectIndex = 0;
    local_90.ObjectSerialNumber = 0;
    FStack_88.ObjectIndex = 0;
    FStack_88.ObjectSerialNumber = 0;
    uStack_2b9 = 0;
    local_2d8._s_0.Z = 0.0;
    uStack_2c0 = 0xffffffff;
    uStack_2bc = 0;
    uStack_78._0_4_ = -1;
    uStack_78._4_1_ = Invalid;
    uStack_78._5_3_ = 0;
    local_148._4_4_ = 1.0;
    local_2b8._s_0.Z = 0.0;
    local_80 = (IActorInstanceManagerInterface *)0x0;
    local_a4 = -1;
    local_2b8._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_2b8._s_0.Y = _UNK_150689518;
    UE::Math::TQuat<double>::RotateVector
              (&local_1b8,(TVector<double> *)&local_2d8._s_0,(TVector<double> *)&local_2b8._s_0);
    local_208._s_0.X = local_1d8;
    local_208._s_0.Y = dStack_1d0;
    local_208._s_0.Z = local_1c8;
    local_1f0 = local_2d8._s_0.X;
    dStack_1e8 = local_2d8._s_0.Y;
    local_1e0 = local_2d8._s_0.Z;
    pUVar7 = USceneSnappingManager::Find(param_1);
    bVar5 = ToolSceneQueriesUtil::FindNearestVisibleObjectHit
                      (pUVar7,(FHitResult *)local_148,(TRay<double> *)&local_208._s_0,
                       (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0,
                       (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0);
    if (bVar5) {
      param_3 = (local_118 - local_208._s_0.Y) * dStack_1e8 +
                ((double)local_148._40_8_ - local_208._s_0.X) * local_1f0 +
                (local_110 - local_208._s_0.Z) * local_1e0;
    }
    local_2d8._s_0.Z = 0.0;
    local_2d8._s_0.X = dVar1;
    local_2d8._s_0.Y = dVar2;
    UE::Math::TQuat<double>::RotateVector
              (&local_1b8,(TVector<double> *)&local_2b8._s_0,(TVector<double> *)&local_2d8._s_0);
    dVar1 = (param_2->field0_0x0)._s_0.X;
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    dVar3 = (param_2->field0_0x0)._s_0.Z;
    dVar4 = (param_2->field0_0x0)._s_0.W;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = local_2b8._s_0.X * param_3 + local_1d8;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = local_2b8._s_0.Y * param_3 + dStack_1d0;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_2b8._s_0.Z * param_3 + local_1c8;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = dVar1;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = dVar2;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = dVar3;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = dVar4;
  }
  if (local_258.SelectedComponents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.SelectedComponents.AllocatorInstance.Data);
  }
  if (local_258.SelectedActors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.SelectedActors.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetImageBasedSculptMaterial @ 14cbc6ca0

UMaterialInterface * __cdecl
ToolSetupUtil::GetImageBasedSculptMaterial
          (UInteractiveToolManager *param_1,ImageMaterialType param_2)

{
  UClass *pUVar1;
  UMaterialInterface *pUVar2;
  longlong *plVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  if (param_2 == DefaultBasic) {
    local_28.Size = 0;
    local_28._12_4_ = 0;
    local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/SculptMaterial_Basic";
    local_28.DataPtr = (wchar_t *)0x0;
    local_18.Size = 0x36;
    pUVar1 = Z_Construct_UClass_UMaterialInstance_NoRegister();
  }
  else if (param_2 == DefaultSoft) {
    local_28.Size = 0;
    local_28._12_4_ = 0;
    local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/SculptMaterial_Soft";
    local_28.DataPtr = (wchar_t *)0x0;
    local_18.Size = 0x35;
    pUVar1 = Z_Construct_UClass_UMaterialInstance_NoRegister();
  }
  else {
    if (param_2 != TangentNormalFromView) goto LAB_14cbc6d64;
    local_28.Size = 0;
    local_28._12_4_ = 0;
    local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/SculptMaterial_TangentNormalFromView";
    local_28.DataPtr = (wchar_t *)0x0;
    local_18.Size = 0x46;
    pUVar1 = Z_Construct_UClass_UMaterial_NoRegister();
  }
  pUVar2 = (UMaterialInterface *)
           StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if (pUVar2 != (UMaterialInterface *)0x0) {
    return pUVar2;
  }
LAB_14cbc6d64:
  pUVar2 = (UMaterialInterface *)0x0;
  if (param_1 != (UInteractiveToolManager *)0x0) {
    local_28.Size = 0;
    local_28._12_4_ = 0;
    local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/SculptMaterial";
    local_28.DataPtr = (wchar_t *)0x0;
    local_18.Size = 0x30;
    pUVar1 = Z_Construct_UClass_UMaterial_NoRegister();
    pUVar2 = (UMaterialInterface *)
             StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                              (FLinkerInstancingContext *)0x0);
    if (pUVar2 == (UMaterialInterface *)0x0) {
      plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))(param_1);
      pUVar2 = (UMaterialInterface *)(**(code **)(*plVar3 + 0x38))(plVar3,1);
    }
  }
  return pUVar2;
}

// GetRoundPointComponentMaterial @ 14cbc7140

UMaterialInterface * __cdecl
ToolSetupUtil::GetRoundPointComponentMaterial(UInteractiveToolManager *param_1,bool param_2)

{
  UClass *pUVar1;
  UMaterialInterface *pUVar2;
  longlong *plVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  if (param_2) {
    local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/PointSetComponentMaterial_Round";
    local_18.Size = 0x41;
  }
  else {
    local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/PointSetOverlaidComponentMaterial_Round";
    local_18.Size = 0x49;
  }
  pUVar1 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar2 = (UMaterialInterface *)
           StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if ((pUVar2 == (UMaterialInterface *)0x0) && (param_1 != (UInteractiveToolManager *)0x0)) {
    plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014cbc71f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UMaterialInterface *)
             (**(code **)(*plVar3 + 0x38))(plVar3,1,*(code **)(*plVar3 + 0x38));
    return pUVar2;
  }
  return pUVar2;
}

// GetSelectionMaterial @ 14cbc7210

UMaterialInterface * __cdecl
ToolSetupUtil::GetSelectionMaterial
          (FLinearColor *param_1,UInteractiveToolManager *param_2,float param_3)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  longlong *plVar5;
  UMaterialInstanceDynamic *this;
  FName *pFVar6;
  FName local_res20;
  TStringView<wchar_t> local_48;
  wchar_t *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  local_48.Size = 0;
  local_48._12_4_ = 0;
  local_48.DataPtr = (wchar_t *)0x0;
  local_38 = L"/MeshModelingToolsetExp/Materials/SelectionMaterial";
  iStack_30 = 0x33;
  pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar4 = (UMaterialInterface *)
           StaticLoadObject(pUVar3,(UObject *)0x0,(TStringView<wchar_t> *)&local_38,&local_48,0,
                            (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
  if (pUVar4 == (UMaterialInterface *)0x0) {
    if (param_2 == (UInteractiveToolManager *)0x0) {
      this = (UMaterialInstanceDynamic *)0x0;
    }
    else {
      plVar5 = (longlong *)(**(code **)(param_2->_padding_ + 0x398))(param_2);
      this = (UMaterialInstanceDynamic *)(**(code **)(*plVar5 + 0x38))(plVar5,1);
    }
  }
  else {
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    this = UMaterialInstanceDynamic::Create(pUVar4,(UObject *)param_2,(FName)0x0);
    pwVar1 = *(wchar_t **)&param_1->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    pFVar6 = ::FName::FName(&local_res20,L"ConstantColor");
    local_38 = pwVar1;
    _iStack_30 = uVar2;
    UMaterialInstanceDynamic::SetVectorParameterValue(this,*pFVar6,(FLinearColor *)&local_38);
    if (param_3 != 0.0) {
      pFVar6 = ::FName::FName(&local_res20,L"DepthBias");
      UMaterialInstanceDynamic::SetScalarParameterValue(this,*pFVar6,param_3);
    }
  }
  return (UMaterialInterface *)this;
}

// GetSelectionMaterial @ 14cbc7360

UMaterialInterface * __cdecl ToolSetupUtil::GetSelectionMaterial(UInteractiveToolManager *param_1)

{
  UClass *pUVar1;
  UMaterialInterface *pUVar2;
  longlong *plVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0x33;
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/SelectionMaterial";
  pUVar1 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar2 = (UMaterialInterface *)
           StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if ((pUVar2 == (UMaterialInterface *)0x0) && (param_1 != (UInteractiveToolManager *)0x0)) {
    plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))(param_1);
    pUVar2 = (UMaterialInterface *)(**(code **)(*plVar3 + 0x38))(plVar3,1);
  }
  return pUVar2;
}

// GetSimpleCustomMaterial @ 14cbc7410

UMaterialInstanceDynamic * __cdecl
ToolSetupUtil::GetSimpleCustomMaterial(UInteractiveToolManager *param_1,FLinearColor *param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  UMaterialInstanceDynamic *this;
  FName *pFVar5;
  FName local_res18 [2];
  TStringView<wchar_t> local_38;
  wchar_t *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  
  iStack_20 = 0x34;
  local_38.Size = 0;
  local_38._12_4_ = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  local_28 = L"/MeshModelingToolsetExp/Materials/SimpleBaseMaterial";
  pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar4 = (UMaterialInterface *)
           StaticLoadObject(pUVar3,(UObject *)0x0,(TStringView<wchar_t> *)&local_28,&local_38,0,
                            (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
  if (pUVar4 != (UMaterialInterface *)0x0) {
    local_res18[0].ComparisonIndex.Value = 0;
    local_res18[0].Number = 0;
    this = UMaterialInstanceDynamic::Create(pUVar4,(UObject *)param_1,(FName)0x0);
    pwVar1 = *(wchar_t **)&param_2->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    pFVar5 = ::FName::FName(local_res18,L"Color");
    local_28 = pwVar1;
    _iStack_20 = uVar2;
    UMaterialInstanceDynamic::SetVectorParameterValue(this,*pFVar5,(FLinearColor *)&local_28);
    return this;
  }
  return (UMaterialInstanceDynamic *)0x0;
}

// GetSimpleCustomMaterial @ 14cbc7510

UMaterialInstanceDynamic * __cdecl
ToolSetupUtil::GetSimpleCustomMaterial
          (UInteractiveToolManager *param_1,FLinearColor *param_2,float param_3)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  UMaterialInstanceDynamic *this;
  FName *pFVar5;
  FName local_res20;
  TStringView<wchar_t> local_48;
  wchar_t *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  local_48.Size = 0;
  local_48._12_4_ = 0;
  local_48.DataPtr = (wchar_t *)0x0;
  local_38 = L"/MeshModelingToolsetExp/Materials/SimpleBaseMaterial_Transparent";
  iStack_30 = 0x40;
  pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar4 = (UMaterialInterface *)
           StaticLoadObject(pUVar3,(UObject *)0x0,(TStringView<wchar_t> *)&local_38,&local_48,0,
                            (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
  this = (UMaterialInstanceDynamic *)0x0;
  if (pUVar4 != (UMaterialInterface *)0x0) {
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    this = UMaterialInstanceDynamic::Create(pUVar4,(UObject *)param_1,(FName)0x0);
    pwVar1 = *(wchar_t **)&param_2->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    pFVar5 = ::FName::FName(&local_res20,L"Color");
    local_38 = pwVar1;
    _iStack_30 = uVar2;
    UMaterialInstanceDynamic::SetVectorParameterValue(this,*pFVar5,(FLinearColor *)&local_38);
    pFVar5 = ::FName::FName(&local_res20,L"Opacity");
    UMaterialInstanceDynamic::SetScalarParameterValue(this,*pFVar5,param_3);
  }
  return this;
}

// GetTransparentSculptMaterial @ 14cbc7630

UMaterialInstanceDynamic * __cdecl
ToolSetupUtil::GetTransparentSculptMaterial
          (UInteractiveToolManager *param_1,FLinearColor *param_2,double param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  UMaterialInstanceDynamic *this;
  FName *pFVar5;
  TStringView<wchar_t> local_48;
  FLinearColor_u_0 local_38 [3];
  
  local_48.Size = 0;
  local_48._12_4_ = 0;
  local_48.DataPtr = (wchar_t *)0x0;
  if (param_4) {
    local_38[0]._0_8_ = L"/MeshModelingToolsetExp/Materials/SculptMaterial_TransparentTwoSided";
    local_38[0]._8_4_ = 0x44;
  }
  else {
    local_38[0]._0_8_ = L"/MeshModelingToolsetExp/Materials/SculptMaterial_Transparent";
    local_38[0]._8_4_ = 0x3c;
  }
  pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar4 = (UMaterialInterface *)
           StaticLoadObject(pUVar3,(UObject *)0x0,(TStringView<wchar_t> *)&local_38[0]._s_0,
                            &local_48,0,(UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
  this = (UMaterialInstanceDynamic *)0x0;
  if (pUVar4 != (UMaterialInterface *)0x0) {
    local_48.DataPtr = (wchar_t *)0x0;
    this = UMaterialInstanceDynamic::Create(pUVar4,(UObject *)param_1,(FName)0x0);
    uVar1 = *(undefined8 *)&param_2->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    pFVar5 = ::FName::FName((FName *)&local_48,L"Color");
    local_38[0]._0_8_ = uVar1;
    local_38[0]._8_8_ = uVar2;
    UMaterialInstanceDynamic::SetVectorParameterValue
              (this,*pFVar5,(FLinearColor *)&local_38[0]._s_0);
    pFVar5 = ::FName::FName((FName *)&local_48,L"Opacity");
    UMaterialInstanceDynamic::SetScalarParameterValue(this,*pFVar5,(float)param_3);
  }
  return this;
}

// GetUVCheckerboardMaterial @ 14cbc7810

UMaterialInstanceDynamic * __cdecl ToolSetupUtil::GetUVCheckerboardMaterial(double param_1)

{
  UClass *pUVar1;
  UMaterialInterface *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  FName *pFVar4;
  UMaterial *pUVar5;
  FName local_res10 [3];
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  local_38.Size = 0;
  local_38._12_4_ = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  local_28[0].DataPtr = L"/MeshModelingToolsetExp/Materials/CheckerMaterial";
  local_28[0].Size = 0x31;
  pUVar1 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar2 = (UMaterialInterface *)
           StaticLoadObject(pUVar1,(UObject *)0x0,local_28,&local_38,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if (pUVar2 != (UMaterialInterface *)0x0) {
    local_res10[0].ComparisonIndex.Value = 0;
    local_res10[0].Number = 0;
    pUVar3 = UMaterialInstanceDynamic::Create(pUVar2,(UObject *)0x0,(FName)0x0);
    if (pUVar3 != (UMaterialInstanceDynamic *)0x0) {
      pFVar4 = ::FName::FName(local_res10,"Density");
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar3,*pFVar4,(float)param_1);
      return pUVar3;
    }
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  pUVar5 = UMaterial::GetDefaultMaterial(MD_Surface);
  pUVar3 = UMaterialInstanceDynamic::Create((UMaterialInterface *)pUVar5,(UObject *)0x0,(FName)0x0);
  return pUVar3;
}

// GetVertexColorMaterial @ 14cbc7920

UMaterialInstanceDynamic * __cdecl
ToolSetupUtil::GetVertexColorMaterial(UInteractiveToolManager *param_1,bool param_2)

{
  UClass *pUVar1;
  UMaterialInterface *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  if (param_2) {
    local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/MeshVertexColorMaterialTwoSided";
    local_18.Size = 0x41;
  }
  else {
    local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/MeshVertexColorMaterial";
    local_18.Size = 0x39;
  }
  pUVar1 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar2 = (UMaterialInterface *)
           StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if (pUVar2 != (UMaterialInterface *)0x0) {
    pUVar3 = UMaterialInstanceDynamic::Create(pUVar2,(UObject *)param_1,(FName)0x0);
    return pUVar3;
  }
  return (UMaterialInstanceDynamic *)0x0;
}

// GetVertexColorSculptMaterial @ 14cbc79f0

UMaterialInterface * __cdecl
ToolSetupUtil::GetVertexColorSculptMaterial(UInteractiveToolManager *param_1)

{
  UClass *pUVar1;
  UMaterialInterface *pUVar2;
  longlong *plVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0x3f;
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"/MeshModelingToolsetExp/Materials/MeshVertexColorSculptMaterial";
  pUVar1 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar2 = (UMaterialInterface *)
           StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if ((pUVar2 == (UMaterialInterface *)0x0) && (param_1 != (UInteractiveToolManager *)0x0)) {
    plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))(param_1);
    pUVar2 = (UMaterialInterface *)(**(code **)(*plVar3 + 0x38))(plVar3,1);
  }
  return pUVar2;
}

// ProjectToCameraPlanePos @ 14cbc93b0

bool __cdecl
ProjectToCameraPlanePos
          (TVector<double> *param_1,TFrame3<double> *param_2,TVector<double> *param_3,
          TVector2<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TVector<double> *pTVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TVector<double> local_a8;
  TVector<double> local_90 [5];
  
  dVar9 = (param_1->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  dVar10 = (param_1->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  dVar12 = (param_1->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
  auVar7._0_8_ = dVar9 * dVar9;
  auVar7._8_8_ = 0;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar10 * dVar10 + auVar7._0_8_ + dVar12 * dVar12;
  auVar8 = sqrtpd(auVar7,auVar8);
  if (auVar8._0_8_ <= 0.0) {
    dVar10 = 0.0;
    dVar12 = 0.0;
    dVar3 = 0.0;
  }
  else {
    dVar3 = __real_3ff0000000000000 / auVar8._0_8_;
    dVar10 = dVar3 * dVar10;
    dVar12 = dVar3 * dVar12;
    dVar3 = dVar3 * dVar9;
  }
  dVar9 = (param_2->Rotation).field0_0x0._s_0.X;
  dVar11 = (param_2->Rotation).field0_0x0._s_0.Y;
  dVar1 = (param_2->Rotation).field0_0x0._s_0.Z;
  dVar2 = (param_2->Rotation).field0_0x0._s_0.W;
  dVar1 = dVar1 + dVar1;
  dVar5 = dVar2 * (dVar11 + dVar11) + dVar1 * dVar9;
  dVar1 = dVar1 * dVar11 - dVar2 * (dVar9 + dVar9);
  dVar9 = __real_3ff0000000000000 - ((dVar11 + dVar11) * dVar11 + (dVar9 + dVar9) * dVar9);
  dVar11 = dVar5 * dVar3 + dVar1 * dVar10 + dVar9 * dVar12;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar2 = (param_2->Origin).field0_0x0._s_0.Y;
    dVar11 = (((param_2->Origin).field0_0x0._s_0.X * dVar5 + dVar2 * dVar1 +
              (param_2->Origin).field0_0x0._s_0.Z * dVar9) -
             ((param_3->field0_0x0)._s_0.X * dVar5 + (param_3->field0_0x0)._s_0.Y * dVar1 +
             (param_3->field0_0x0)._s_0.Z * dVar9)) / dVar11;
    if (0.0 <= dVar11) {
      dVar5 = (dVar3 * dVar11 + (param_3->field0_0x0)._s_0.X) - (param_2->Origin).field0_0x0._s_0.X;
      dVar4 = (dVar12 * dVar11 + (param_3->field0_0x0)._s_0.Z) - (param_2->Origin).field0_0x0._s_0.Z
      ;
      dVar2 = (dVar10 * dVar11 + (param_3->field0_0x0)._s_0.Y) - dVar2;
      pTVar6 = UE::Geometry::TFrame3<double>::GetAxis(param_2,&local_a8,0);
      dVar10 = (pTVar6->field0_0x0)._s_0.Y;
      dVar12 = (pTVar6->field0_0x0)._s_0.X;
      dVar9 = (pTVar6->field0_0x0)._s_0.Z;
      pTVar6 = UE::Geometry::TFrame3<double>::GetAxis(param_2,local_90,1);
      dVar3 = (pTVar6->field0_0x0)._s_0.Y;
      dVar11 = (pTVar6->field0_0x0)._s_0.X;
      dVar1 = (pTVar6->field0_0x0)._s_0.Z;
      (param_4->field0_0x0)._s_0.X = dVar2 * dVar10 + dVar5 * dVar12 + dVar4 * dVar9;
      (param_4->field0_0x0)._s_0.Y = dVar2 * dVar3 + dVar5 * dVar11 + dVar4 * dVar1;
      return true;
    }
  }
  return false;
}

// Z_Construct_UClass_UMultiTransformer_NoRegister @ 14cbcdf20

UClass * __cdecl Z_Construct_UClass_UMultiTransformer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiTransformer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MultiTransformer",
               &Z_Registration_Info_UClass_UMultiTransformer.InnerSingleton,
               UMultiTransformer::StaticRegisterNativesUMultiTransformer,0x1b0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMultiTransformer>,
               InternalVTableHelperCtorCaller<UMultiTransformer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiTransformer.InnerSingleton;
}

// Z_Construct_UEnum_ModelingComponents_EMultiTransformerMode @ 14cbcdfd0

UEnum * __cdecl Z_Construct_UEnum_ModelingComponents_EMultiTransformerMode(void)

{
  if (Z_Registration_Info_UEnum_EMultiTransformerMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMultiTransformerMode.InnerSingleton,
               &Z_Construct_UEnum_ModelingComponents_EMultiTransformerMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMultiTransformerMode.InnerSingleton;
}

