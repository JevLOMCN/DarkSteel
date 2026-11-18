// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StartupModule @ 148b04da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FEngineModule::StartupModule(FEngineModule *this)

{
  code *pcVar1;
  FName FVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  IConsoleManager *pIVar6;
  undefined ***pppuVar7;
  int *piVar8;
  undefined1 auStack_c8 [32];
  FDelayedAutoRegisterHelper local_a8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  FDelegateAllocation local_98;
  FName local_88 [2];
  undefined1 local_78 [16];
  undefined **local_68;
  FDelegateAllocation *local_60;
  undefined **local_58;
  code *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&GGetMapNameDelegate,
             (FWriteAccessScope *)local_78);
  local_60 = (FDelegateAllocation *)0x154f0d728;
  puVar3 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)&GGetMapNameDelegate.field_0x8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_BVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_BVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = GetMapNameStatic;
  }
  if (local_68._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_78._8_8_,(FDestructionSentinel *)local_78);
  }
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar6 = IConsoleManager::Get();
      CacheWPOPrimitivesVar =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"r.Shadow.CacheWPOPrimitives");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_98.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_98.DelegateSize = 0;
  pcVar1 = *(code **)(*(longlong *)CacheWPOPrimitivesVar + 0xe0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a0,(FWriteAccessScope *)local_78);
  local_60 = &local_98;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_98);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = OnChangeEngineCVarRequiringRecreateRenderState;
  }
  if (local_68._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_78._8_8_,(FDestructionSentinel *)local_78);
  }
  (*pcVar1)(CacheWPOPrimitivesVar,&local_a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a0,(FWriteAccessScope *)local_78);
  if ((local_98.DelegateSize != 0) &&
     (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_98.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_98.DelegateSize = 0;
  }
  if (local_68._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_78._8_8_,(FDestructionSentinel *)local_78);
  }
  if (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_98.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  if (*piVar8 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      pIVar6 = IConsoleManager::Get();
      CVARShowMaterialDrawEvents =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"r.ShowMaterialDrawEvents");
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (CVARShowMaterialDrawEvents != (IConsoleVariable *)0x0) {
    local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_98.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_98.DelegateSize = 0;
    pcVar1 = *(code **)(*(longlong *)CVARShowMaterialDrawEvents + 0xe0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a0,(FWriteAccessScope *)local_78);
    local_60 = &local_98;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_98);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar3[3] = OnChangeEngineCVarRequiringRecreateRenderState;
    }
    if (local_68._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_78._8_8_,(FDestructionSentinel *)local_78);
    }
    (*pcVar1)(CVARShowMaterialDrawEvents,&local_a0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a0,(FWriteAccessScope *)local_78);
    if ((local_98.DelegateSize != 0) &&
       (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_98.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_98,0,0,0x10);
      local_98.DelegateSize = 0;
    }
    if (local_68._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_78._8_8_,(FDestructionSentinel *)local_78);
    }
    if (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_98.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  }
  SuspendTextureStreamingRenderTasks = SuspendRenderAssetStreaming;
  ResumeTextureStreamingRenderTasks = ResumeRenderAssetStreaming;
  InitScreenPercentage();
  InitCustomDepth();
  FParticleSystemWorldManager::OnStartup();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FInstancedStruct::NetSerializeScriptStructDelegate,(FWriteAccessScope *)local_78);
  local_60 = (FDelegateAllocation *)0x155018bf0;
  puVar3 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)
                           &FInstancedStruct::NetSerializeScriptStructDelegate.field_0x8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEAUFInstancedStruct__AEAVFArchive__PEAVUPackageMap___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(FInstancedStruct_&,FArchive_&,UPackageMap_*),FDefaultDelegateUserPolicy,`FEngineModule::StartupModule'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_68._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_78._8_8_,(FDestructionSentinel *)local_78);
  }
  local_78._0_8_ = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  local_40 = (undefined ***)0x0;
  local_58 = &
             ___7__TFunction_OwnedObject_P6APEAVIPrimitiveComponent__PEAVUObject___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = `FEngineModule::StartupModule'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
  local_68 = (undefined **)
             UE::Core::Private::Function::
             TFunctionRefCaller<IPrimitiveComponent_*_(__cdecl*)(UObject_*),void_*,UObject_*>::Call;
  IPrimitiveComponent::AddImplementer((FComponentInterfaceImplementation *)local_78);
  if (local_68 != (undefined **)0x0) {
    pppuVar7 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar7 = local_40;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  local_78._0_8_ = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  local_40 = (undefined ***)0x0;
  local_58 = &
             ___7__TFunction_OwnedObject_P6APEAVIStaticMeshComponent__PEAVUObject___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = `FEngineModule::StartupModule'::__l2::<lambda_3>::<lambda_invoker_cdecl>;
  local_68 = (undefined **)
             UE::Core::Private::Function::
             TFunctionRefCaller<IStaticMeshComponent_*_(__cdecl*)(UObject_*),void_*,UObject_*>::Call
  ;
  IStaticMeshComponent::AddImplementer((FComponentInterfaceImplementation *)local_78);
  if (local_68 != (undefined **)0x0) {
    pppuVar7 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar7 = local_40;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  FObjectTrace::Init();
  FObjectPropertyTrace::Init();
  FTraceFilter::Init();
  FSkinWeightProfileManager::OnStartup();
  UE::Anim::FSkeletonRemappingRegistry::Init();
  local_50 = (code *)0x0;
  local_68 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_60 = (FDelegateAllocation *)
             `FEngineModule::StartupModule'::__l2::<lambda_4>::<lambda_invoker_cdecl>;
  local_78._0_8_ = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call
  ;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (local_a8,ObjectSystemReady,(TFunction<void___cdecl(void)> *)local_78,false);
  FModuleManager::Get();
  pFVar5 = ::FName::FName(local_88,"UniversalObjectLocator");
  FVar2 = *pFVar5;
  this_00 = FModuleManager::Get();
  local_60 = (FDelegateAllocation *)FModuleManager::LoadModuleChecked(this_00,FVar2);
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FEngineModule::StartupModule'::`2'::<lambda_5>,0,0>::_vftable_;
  local_50 = (code *)0x0;
  local_78._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FEngineModule::StartupModule'::__l2::<lambda_5>,void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (local_a8,ObjectSystemReady,(TFunction<void___cdecl(void)> *)local_78,false);
  return;
}

// ShutdownModule @ 148b05310

void __thiscall FEngineModule::ShutdownModule(FEngineModule *this)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  IPrimitiveComponent::RemoveImplementer(pUVar1);
  pUVar1 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  IStaticMeshComponent::RemoveImplementer(pUVar1);
  UE::Net::ShutdownEngineNetObjectFactories();
  FTraceFilter::Destroy();
  FObjectTrace::Destroy();
  FObjectPropertyTrace::Destroy();
  FParticleSystemWorldManager::OnShutdown();
  FSkinWeightProfileManager::OnShutdown();
  UE::Anim::FSkeletonRemappingRegistry::Destroy();
  return;
}

// <lambda_invoker_cdecl> @ 148b065d0

IPrimitiveComponent * __cdecl
`FEngineModule::StartupModule'::__l2::<lambda_2>::<lambda_invoker_cdecl>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (IPrimitiveComponent *)&param_1[0x14].field_0x8;
    }
  }
  return (IPrimitiveComponent *)0x328;
}

// <lambda_invoker_cdecl> @ 148b06660

IStaticMeshComponent * __cdecl
`FEngineModule::StartupModule'::__l2::<lambda_3>::<lambda_invoker_cdecl>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (IStaticMeshComponent *)&param_1[0x27].field_0x18;
    }
  }
  return (IStaticMeshComponent *)0x630;
}

// <lambda_invoker_cdecl> @ 148b06780

void __cdecl `FEngineModule::StartupModule'::__l2::<lambda_4>::<lambda_invoker_cdecl>(void)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  UClass *pUVar4;
  
  FVar2 = UE::Net::Private::NetActorFactoryName;
  if (UE::Net::Private::bAreFactoriesRegistered) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2108164601089622039>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\NetEngineFactories.cpp"
                       ,0x17,"bAreFactoriesRegistered == false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar4 = UNetActorFactory::StaticClass();
    UE::Net::FNetObjectFactoryRegistry::RegisterFactory(pUVar4,FVar2);
    FVar2 = UE::Net::Private::SubObjectFactoryName;
    pUVar4 = UNetSubObjectFactory::StaticClass();
    UE::Net::FNetObjectFactoryRegistry::RegisterFactory(pUVar4,FVar2);
    UE::Net::Private::bAreFactoriesRegistered = true;
  }
  return;
}

// operator() @ 148b212b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
`FEngineModule::StartupModule'::__l2::<lambda_1>::operator()
          (void *this,FInstancedStruct *param_1,FArchive *param_2,UPackageMap *param_3)

{
  int iVar1;
  longlong lVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  UPackageMap *pUVar8;
  bool local_res10 [8];
  TSharedPtr<FRepLayout,1> local_28;
  
  if (param_3 == (UPackageMap *)0x0) {
LAB_148b21303:
    pUVar8 = (UPackageMap *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UPackageMapClient_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(param_3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_148b21303;
    pUVar8 = param_3;
    if (((uint)param_3->_padding_ >> 0x1e & 1) == 0) goto LAB_148b2132b;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("::IsValid(MapClient)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                     ,0x147,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
LAB_148b2132b:
  lVar2 = *(longlong *)&pUVar8[1].TrackedUnmappedNetGuids.Elements.field_0x20;
  if (((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("::IsValid(NetConnection)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                         ,0x14a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (((*(longlong *)(lVar2 + 0x58) == 0) ||
      ((*(uint *)(*(longlong *)(lVar2 + 0x58) + 8) >> 0x1e & 1) != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("::IsValid(NetConnection->GetDriver())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                         ,0x14b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pUVar3 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  UNetDriver::GetStructRepLayout(*(UNetDriver **)(lVar2 + 0x58),&local_28,(UStruct *)pUVar3);
  if ((local_28.Object == (FRepLayout *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RepLayout.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                         ,0x14f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  local_res10[0] = false;
  if ((local_28.Object == (FRepLayout *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FRepLayout::SerializePropertiesForStruct
            (local_28.Object,(UStruct *)pUVar3,(FBitArchive *)param_2,param_3,
             (TRepDataBufferBase<0,unsigned_char>)param_1->StructMemory,local_res10,(UObject *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return true;
}

// operator() @ 148b23350

void __thiscall `FEngineModule::StartupModule'::__l2::<lambda_5>::operator()(void *this)

{
  ITextData *pIVar1;
  FName FVar2;
  longlong *plVar3;
  code *pcVar4;
  TFragmentTypeHandle<FActorLocatorFragment> TVar5;
  TFragmentTypeHandle<FAssetLocatorFragment> TVar6;
  TFragmentTypeHandle<FAnimInstanceLocatorFragment> TVar7;
  FText *pFVar8;
  FName *pFVar9;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  UScriptStruct *pUVar10;
  TParameterTypeHandle<FActorLocatorFragmentResolveParameter> *pTVar11;
  FName local_res8;
  FName local_res10;
  FText local_58;
  ITextData *local_48;
  uint local_40;
  FName local_38;
  FName local_30;
  undefined1 local_28;
  
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"Engine",L"ActorLocatorFragment",L"Actor");
  pFVar9 = ::FName::FName(&local_res10,"actor");
  local_48 = (pFVar8->TextData).Reference;
  local_38 = *pFVar9;
  if (local_48 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48 + 8))(local_48,&local_res8);
  }
  local_40 = pFVar8->Flags;
  local_28 = 0;
  pIVar1 = (pFVar8->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  ::FName::FName(&local_res8,"Actor");
  local_30 = local_res8;
  TVar5 = UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
          RegisterFragmentType<FActorLocatorFragment>
                    (*(IUniversalObjectLocatorModule **)this,(FFragmentTypeParameters *)&local_res8)
  ;
  FActorLocatorFragment::FragmentType =
       *(TFragmentTypeHandle<FActorLocatorFragment> *)CONCAT71(extraout_var,TVar5);
  if (local_48 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48 + 0x10))();
  }
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"Engine",L"AssetLocatorFragment",L"Asset");
  pFVar9 = ::FName::FName(&local_res10,"asset");
  local_48 = (pFVar8->TextData).Reference;
  FVar2 = *pFVar9;
  if (local_48 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48 + 8))(local_48,&local_res8);
  }
  local_40 = pFVar8->Flags;
  pIVar1 = (pFVar8->TextData).Reference;
  local_38 = FVar2;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  ::FName::FName(&local_res8,"Asset");
  local_30 = local_res8;
  local_28 = 1;
  TVar6 = UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
          RegisterFragmentType<FAssetLocatorFragment>
                    (*(IUniversalObjectLocatorModule **)this,(FFragmentTypeParameters *)&local_res8)
  ;
  FAssetLocatorFragment::FragmentType =
       *(TFragmentTypeHandle<FAssetLocatorFragment> *)CONCAT71(extraout_var_00,TVar6);
  if (local_48 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48 + 0x10))();
  }
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"Engine",L"AnimInstanceLocatorFragment",L"AnimInstance");
  pFVar9 = ::FName::FName(&local_res10,"animinst");
  local_48 = (pFVar8->TextData).Reference;
  FVar2 = *pFVar9;
  if (local_48 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48 + 8))(local_48,&local_res8);
  }
  local_40 = pFVar8->Flags;
  local_28 = 0;
  pIVar1 = (pFVar8->TextData).Reference;
  local_38 = FVar2;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  ::FName::FName(&local_res8,"AnimInstance");
  local_30 = local_res8;
  TVar7 = UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
          RegisterFragmentType<FAnimInstanceLocatorFragment>
                    (*(IUniversalObjectLocatorModule **)this,(FFragmentTypeParameters *)&local_res8)
  ;
  FAnimInstanceLocatorFragment::FragmentType =
       *(TFragmentTypeHandle<FAnimInstanceLocatorFragment> *)CONCAT71(extraout_var_01,TVar7);
  if (local_48 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48 + 0x10))();
  }
  plVar3 = *(longlong **)this;
  pcVar4 = *(code **)(*plVar3 + 0x50);
  pUVar10 = FActorLocatorFragmentResolveParameter::StaticStruct();
  pTVar11 = (TParameterTypeHandle<FActorLocatorFragmentResolveParameter> *)
            (*pcVar4)(plVar3,&local_res8,pUVar10);
  FActorLocatorFragmentResolveParameter::ParameterType = *pTVar11;
  return;
}

