// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 512

// NoPin'' @ 1411abe80

void __cdecl `dynamic_initializer_for_'FPCGGraphTaskInput::NoPin__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPCGGraphTaskInput::NoPin__);
  return;
}

// `dynamic_initializer_for_'ActorIndexAttributeName'' @ 1411abea0

void __cdecl PCGLevelToAssetConstants::_dynamic_initializer_for__ActorIndexAttributeName__(void)

{
  ::FName::FName(&ActorIndexAttributeName,L"ActorIndex");
  return;
}

// `dynamic_initializer_for_'ActorReferenceAttribute'' @ 1411abec0

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ActorReferenceAttribute__(void)

{
  ::FName::FName(&ActorReferenceAttribute,L"ActorReference");
  return;
}

// `dynamic_initializer_for_'CVarCheckSamplerMemory'' @ 1411abee0

void __cdecl PCGFeatureSwitches::_dynamic_initializer_for__CVarCheckSamplerMemory__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarCheckSamplerMemory,L"pcg.CheckSamplerMemory",local_res8,
             L"Checks expected memory size consumption prior to performing sampling operations",0);
  atexit(_dynamic_atexit_destructor_for__CVarCheckSamplerMemory__);
  return;
}

// `dynamic_initializer_for_'CVarConvertToPointDataInPostProcessGraph'' @ 1411abf30

void __cdecl
PCGComponent::_dynamic_initializer_for__CVarConvertToPointDataInPostProcessGraph__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarConvertToPointDataInPostProcessGraph,
             L"pcg.Advanced.ConvertToPointDataInPostProcessGraph",local_res8,
             L"At the end of execution, generated output data will be converted from UPCGPointArrayData to UPCGPointData."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarConvertToPointDataInPostProcessGraph__);
  return;
}

// `dynamic_initializer_for_'CVarDeletePreviewResourcesWhenUnloading'' @ 1411abf80

void __cdecl PCGComponent::_dynamic_initializer_for__CVarDeletePreviewResourcesWhenUnloading__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarDeletePreviewResourcesWhenUnloading,
             L"pcg.Advanced.DeletePreviewResourcesWhenUnloading",local_res8,
             L"Delete generated preview resources (actors) when PCG Component gets unloaded.",0);
  atexit(_dynamic_atexit_destructor_for__CVarDeletePreviewResourcesWhenUnloading__);
  return;
}

// `dynamic_initializer_for_'CVarDisableStealingForFlattenInPostProcessGraph'' @ 1411abfd0

void __cdecl
PCGComponent::_dynamic_initializer_for__CVarDisableStealingForFlattenInPostProcessGraph__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarDisableStealingForFlattenInPostProcessGraph,
             L"pcg.Advanced.DisableStealingForFlattenInPostProcessGraph",local_res8,
             L"At the end of execution, generated output data is flattened in place if it can be stolen, but it can be disabled if it has unwanted side effects."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableStealingForFlattenInPostProcessGraph__);
  return;
}

// `dynamic_initializer_for_'CVarEnableComputeGraphInstancePooling'' @ 1411ac020

void __cdecl PCGGraph::_dynamic_initializer_for__CVarEnableComputeGraphInstancePooling__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnableComputeGraphInstancePooling,L"pcg.GPU.ComputeGraphInstancePooling",
             local_res8,
             L"Caches compute graph instances rather than creating each instance and its data providers from scratch each time."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableComputeGraphInstancePooling__);
  return;
}

// `dynamic_initializer_for_'CVarFixInvalidEdgesOnPostLoad'' @ 1411ac070

void __cdecl PCGGraph::_dynamic_initializer_for__CVarFixInvalidEdgesOnPostLoad__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarFixInvalidEdgesOnPostLoad,L"pcg.Graph.FixInvalidEdgesOnPostLoad",local_res8,
             L"Validates all edges are connected to valid pins/nodes and removes any invalid edges",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarFixInvalidEdgesOnPostLoad__);
  return;
}

// `dynamic_initializer_for_'CVarFuzzGPUMemory'' @ 1411ac0c0

void __cdecl PCGSystemSwitches::_dynamic_initializer_for__CVarFuzzGPUMemory__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarFuzzGPUMemory,L"pcg.GPU.FuzzMemory",local_res8,
             L"Initializes GPU buffers with random numbers which helps to reproduce undefined behaviour from unitialized memory."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarFuzzGPUMemory__);
  return;
}

// `dynamic_initializer_for_'CVarPCGAllowPerDataCaching'' @ 1411ac110

void __cdecl _dynamic_initializer_for__CVarPCGAllowPerDataCaching__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarPCGAllowPerDataCaching,L"pcg.AllowPerDataCaching",local_res8,
             L"Controls whether we test & split down inputs to check caching per input on primary loop nodes."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPCGAllowPerDataCaching__);
  return;
}

// `dynamic_initializer_for_'CVarPCGDebugDrawGeneratedCells'' @ 1411ac160

void __cdecl PCGSystemSwitches::_dynamic_initializer_for__CVarPCGDebugDrawGeneratedCells__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarPCGDebugDrawGeneratedCells,L"pcg.GraphExecution.DebugDrawGeneratedCells",
             local_res8,
             L"Draws debug boxes around any cell that is executing, colored by grid level, and in PIE/standalone labels grid size and coords."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPCGDebugDrawGeneratedCells__);
  return;
}

// `dynamic_initializer_for_'CVarPCGEnablePointArrayData'' @ 1411ac1b0

void __cdecl _dynamic_initializer_for__CVarPCGEnablePointArrayData__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarPCGEnablePointArrayData,L"pcg.EnablePointArrayData",local_res8,
             L"Whether to use the new UPCGPointArrayData when calling FPCGContext::CreatePointData_AnyThread"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPCGEnablePointArrayData__);
  return;
}

// `dynamic_initializer_for_'CVarPCGEnablePointArrayDataToPointDataConversionWarnings'' @ 1411ac200

void __cdecl
_dynamic_initializer_for__CVarPCGEnablePointArrayDataToPointDataConversionWarnings__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarPCGEnablePointArrayDataToPointDataConversionWarnings,
             L"pcg.EnablePointArrayDataToPointDataConversionWarnings",local_res8,
             L"Warn about input conversions from PointArrayData to PointData so that code that needs to be updated is identified."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPCGEnablePointArrayDataToPointDataConversionWarnings__)
  ;
  return;
}

// `dynamic_initializer_for_'CVarPCGFullDataCrcInCommandlets'' @ 1411ac250

void __cdecl _dynamic_initializer_for__CVarPCGFullDataCrcInCommandlets__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarPCGFullDataCrcInCommandlets,L"pcg.FullDataCrcInCommandlets",local_res8,
             L"Always compute full data Crcs in Commandlets (to improve reusability).",0);
  atexit(_dynamic_atexit_destructor_for__CVarPCGFullDataCrcInCommandlets__);
  return;
}

// `dynamic_initializer_for_'CVarPCGShouldVerifyIfOutputsAreUsedMultipleTimes'' @ 1411ac2a0

void __cdecl _dynamic_initializer_for__CVarPCGShouldVerifyIfOutputsAreUsedMultipleTimes__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarPCGShouldVerifyIfOutputsAreUsedMultipleTimes,
             L"pcg.ShouldVerifyIfOutputsAreUsedMultipleTimes",local_res8,
             L"Add small computation at the end of each node to detect if the data is used multiple times. Necessary for data stealing."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPCGShouldVerifyIfOutputsAreUsedMultipleTimes__);
  return;
}

// `dynamic_initializer_for_'CVarPCGValidatePointMetadata'' @ 1411ac2f0

void __cdecl _dynamic_initializer_for__CVarPCGValidatePointMetadata__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarPCGValidatePointMetadata,L"pcg.debug.ValidatePointMetadata",local_res8,
             L"Controls whether we validate that the metadata entry keys on the output point data are consistent"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPCGValidatePointMetadata__);
  return;
}

// `dynamic_initializer_for_'CVarPassGPUDataThroughGridLinks'' @ 1411ac340

void __cdecl PCGSystemSwitches::_dynamic_initializer_for__CVarPassGPUDataThroughGridLinks__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarPassGPUDataThroughGridLinks,L"pcg.Graph.GPU.PassGPUDataThroughGridLinks",
             local_res8,
             L"Whether proxies for GPU data are cached in per pin output data and passed through grid links. If false data is read back to CPU."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPassGPUDataThroughGridLinks__);
  return;
}

// `dynamic_initializer_for_'CVarReleaseTransientResourcesEarly'' @ 1411ac390

void __cdecl PCGSystemSwitches::_dynamic_initializer_for__CVarReleaseTransientResourcesEarly__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarReleaseTransientResourcesEarly,L"pcg.ReleaseTransientResourcesEarly",local_res8,
             L"Aggressively release transient (esp. GPU) data when possible.",0);
  atexit(_dynamic_atexit_destructor_for__CVarReleaseTransientResourcesEarly__);
  return;
}

// `dynamic_initializer_for_'CVarSamplerMemoryThreshold'' @ 1411ac3e0

void __cdecl PCGFeatureSwitches::_dynamic_initializer_for__CVarSamplerMemoryThreshold__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  float local_res8 [2];
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  local_res8[0] = 0.8;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSamplerMemoryThreshold,L"pcg.SamplerMemoryThreshold",local_res8,
             L"Normalized threshold of remaining physical memory required to abort sampling operation."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__CVarSamplerMemoryThreshold__);
  return;
}

// `dynamic_initializer_for_'CategoryMetadataName'' @ 1411ac520

void __cdecl PCGPropertyHelpers::Constants::_dynamic_initializer_for__CategoryMetadataName__(void)

{
  ::FName::FName(&CategoryMetadataName,"Category");
  return;
}

// `dynamic_initializer_for_'CompactNodeConvert'' @ 1411ac540

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeConvert__(void)

{
  ::FName::FName(&CompactNodeConvert,L"PCG.Node.Compact.Convert");
  return;
}

// `dynamic_initializer_for_'CompactNodeFilter'' @ 1411ac560

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeFilter__(void)

{
  ::FName::FName(&CompactNodeFilter,L"PCG.Node.Compact.Filter");
  return;
}

// `dynamic_initializer_for_'Data'' @ 1411ac580

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Data__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Data");
  Data.DebugName = *pFVar1;
  Data.Flag = Data;
  Data.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'DataDomainName'' @ 1411ac5c0

void __cdecl PCGDataConstants::_dynamic_initializer_for__DataDomainName__(void)

{
  ::FName::FName(&DataDomainName,"Data");
  return;
}

// `dynamic_initializer_for_'Default'' @ 1411ac5e0

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Default__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Default");
  Default.DebugName = *pFVar1;
  Default.Flag = Default;
  Default.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'DefaultActorLabel'' @ 1411ac620

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultActorLabel__(void)

{
  ::FName::FName(&DefaultActorLabel,L"Actor");
  return;
}

// `dynamic_initializer_for_'DefaultDependencyOnlyLabel'' @ 1411ac640

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultDependencyOnlyLabel__(void)

{
  ::FName::FName(&DefaultDependencyOnlyLabel,L"Dependency Only");
  return;
}

// `dynamic_initializer_for_'DefaultDomainName'' @ 1411ac660

void __cdecl PCGDataConstants::_dynamic_initializer_for__DefaultDomainName__(void)

{
  ::FName::FName(&DefaultDomainName,"Default");
  return;
}

// `dynamic_initializer_for_'DefaultExecutionDependencyLabel'' @ 1411ac680

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultExecutionDependencyLabel__(void)

{
  ::FName::FName(&DefaultExecutionDependencyLabel,L"Execution Dependency");
  return;
}

// `dynamic_initializer_for_'DefaultInFilterLabel'' @ 1411ac6a0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInFilterLabel__(void)

{
  ::FName::FName(&DefaultInFilterLabel,L"InsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultInputLabel'' @ 1411ac6c0

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultInputLabel__(void)

{
  ::FName::FName(&DefaultInputLabel,L"Input");
  return;
}

// `dynamic_initializer_for_'DefaultInputLabel'' @ 1411ac6e0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInputLabel__(void)

{
  ::FName::FName(&DefaultInputLabel,L"In");
  return;
}

// `dynamic_initializer_for_'DefaultLandscapeHeightLabel'' @ 1411ac700

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultLandscapeHeightLabel__(void)

{
  ::FName::FName(&DefaultLandscapeHeightLabel,L"Landscape Height");
  return;
}

// `dynamic_initializer_for_'DefaultLandscapeLabel'' @ 1411ac720

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultLandscapeLabel__(void)

{
  ::FName::FName(&DefaultLandscapeLabel,L"Landscape");
  return;
}

// `dynamic_initializer_for_'DefaultNewCustomPinName'' @ 1411ac740

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultNewCustomPinName__(void)

{
  ::FName::FName(&DefaultNewCustomPinName,L"NewPin");
  return;
}

// `dynamic_initializer_for_'DefaultOriginalActorLabel'' @ 1411ac760

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultOriginalActorLabel__(void)

{
  ::FName::FName(&DefaultOriginalActorLabel,L"OriginalActor");
  return;
}

// `dynamic_initializer_for_'DefaultOutFilterLabel'' @ 1411ac780

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutFilterLabel__(void)

{
  ::FName::FName(&DefaultOutFilterLabel,L"OutsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultOutputLabel'' @ 1411ac7a0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutputLabel__(void)

{
  ::FName::FName(&DefaultOutputLabel,L"Out");
  return;
}

// `dynamic_initializer_for_'DefaultPCGActorTag'' @ 1411ac7c0

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGActorTag__(void)

{
  ::FName::FName(&DefaultPCGActorTag,L"PCG Generated Actor");
  return;
}

// `dynamic_initializer_for_'DefaultPCGDebugTag'' @ 1411ac7e0

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGDebugTag__(void)

{
  ::FName::FName(&DefaultPCGDebugTag,L"PCG Generated Debug Component");
  return;
}

// `dynamic_initializer_for_'DefaultPCGTag'' @ 1411ac800

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGTag__(void)

{
  ::FName::FName(&DefaultPCGTag,L"PCG Generated Component");
  return;
}

// `dynamic_initializer_for_'DefaultParamsLabel'' @ 1411ac820

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultParamsLabel__(void)

{
  ::FName::FName(&DefaultParamsLabel,L"Overrides");
  return;
}

// `dynamic_initializer_for_'DefaultPathPinLabel'' @ 1411ac840

void __cdecl PCGControlFlowConstants::_dynamic_initializer_for__DefaultPathPinLabel__(void)

{
  ::FName::FName(&DefaultPathPinLabel,L"Default");
  return;
}

// `dynamic_initializer_for_'DefaultPointMesh'' @ 1411ac860

void __cdecl PCGDebugVisConstants::_dynamic_initializer_for__DefaultPointMesh__(void)

{
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0x23;
  local_18.DataPtr = L"/PCG/DebugObjects/PCG_Cube.PCG_Cube";
  FSoftObjectPath::SetPath(&DefaultPointMesh,&local_18);
  atexit(_dynamic_atexit_destructor_for__DefaultPointMesh__);
  return;
}

// `dynamic_initializer_for_'Elements'' @ 1411ac8b0

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Elements__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Elements");
  Elements.DebugName = *pFVar1;
  Elements.Flag = Elements;
  Elements.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'ElementsDomainName'' @ 1411ac8f0

void __cdecl PCGParamDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Elements");
  return;
}

// `dynamic_initializer_for_'ElementsDomainName'' @ 1411ac910

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Points");
  return;
}

// `dynamic_initializer_for_'EnableCategoriesMetadataName'' @ 1411ac930

void __cdecl
PCGPropertyHelpers::Constants::_dynamic_initializer_for__EnableCategoriesMetadataName__(void)

{
  ::FName::FName(&EnableCategoriesMetadataName,"EnableCategories");
  return;
}

// `dynamic_initializer_for_'ExcludedActorTag'' @ 1411ac950

void __cdecl PCGLevelToAssetConstants::_dynamic_initializer_for__ExcludedActorTag__(void)

{
  ::FName::FName(&ExcludedActorTag,L"PCGLevelToAssetExclude");
  return;
}

// `dynamic_initializer_for_'ExtentsName'' @ 1411ac970

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ExtentsName__(void)

{
  ::FName::FName(&ExtentsName,L"Extents");
  return;
}

// `dynamic_initializer_for_'FeedbackPinIcon'' @ 1411ac990

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__FeedbackPinIcon__(void)

{
  ::FName::FName(&FeedbackPinIcon,L"GraphEditor.GetSequenceBinding");
  return;
}

// `dynamic_initializer_for_'GRegisterPCGCustomVersion'' @ 1411ac9b0

void __cdecl _dynamic_initializer_for__GRegisterPCGCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FPCGCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,0x1b,L"PCGBaseVer",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterPCGCustomVersion__);
  return;
}

// `dynamic_initializer_for_'HierarchyDepthAttributeName'' @ 1411ac9f0

void __cdecl PCGLevelToAssetConstants::_dynamic_initializer_for__HierarchyDepthAttributeName__(void)

{
  ::FName::FName(&HierarchyDepthAttributeName,L"HierarchyDepth");
  return;
}

// `dynamic_initializer_for_'IgnoreParentRotationAttributeName'' @ 1411aca10

void __cdecl
PCGLevelToAssetConstants::_dynamic_initializer_for__IgnoreParentRotationAttributeName__(void)

{
  ::FName::FName(&IgnoreParentRotationAttributeName,L"IgnoreParentRotation");
  return;
}

// `dynamic_initializer_for_'IgnoreParentScaleAttributeName'' @ 1411aca30

void __cdecl
PCGLevelToAssetConstants::_dynamic_initializer_for__IgnoreParentScaleAttributeName__(void)

{
  ::FName::FName(&IgnoreParentScaleAttributeName,L"IgnoreParentScale");
  return;
}

// `dynamic_initializer_for_'Invalid'' @ 1411aca50

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Invalid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Invalid");
  Invalid.DebugName = *pFVar1;
  Invalid.Flag = Invalid;
  Invalid.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'LastAttributeName'' @ 1411aca90

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__LastAttributeName__(void)

{
  ::FName::FName(&LastAttributeName,L"@Last");
  return;
}

// `dynamic_initializer_for_'LastCreatedAttributeName'' @ 1411acab0

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__LastCreatedAttributeName__(void)

{
  ::FName::FName(&LastCreatedAttributeName,L"@LastCreated");
  return;
}

// `dynamic_initializer_for_'LocalCenterName'' @ 1411acad0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalCenterName__(void)

{
  ::FName::FName(&LocalCenterName,L"LocalCenter");
  return;
}

// `dynamic_initializer_for_'LocalSizeName'' @ 1411acaf0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalSizeName__(void)

{
  ::FName::FName(&LocalSizeName,L"LocalSize");
  return;
}

// `dynamic_initializer_for_'LoopPinIcon'' @ 1411acb10

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__LoopPinIcon__(void)

{
  ::FName::FName(&LoopPinIcon,L"GraphEditor.Macro.Loop_16x");
  return;
}

// `dynamic_initializer_for_'MarkedForCleanupPCGTag'' @ 1411acb30

void __cdecl PCGHelpers::_dynamic_initializer_for__MarkedForCleanupPCGTag__(void)

{
  ::FName::FName(&MarkedForCleanupPCGTag,L"PCG Marked For Cleanup");
  return;
}

// `dynamic_initializer_for_'MaterialAttributeName'' @ 1411acb50

void __cdecl PCGLevelToAssetConstants::_dynamic_initializer_for__MaterialAttributeName__(void)

{
  ::FName::FName(&MaterialAttributeName,L"Material");
  return;
}

// `dynamic_initializer_for_'MaterialForDefaultPointMesh'' @ 1411acb70

void __cdecl PCGDebugVisConstants::_dynamic_initializer_for__MaterialForDefaultPointMesh__(void)

{
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0x3f;
  local_18.DataPtr = L"Material\'/PCG/DebugObjects/PCG_DebugMaterial.PCG_DebugMaterial\'";
  FSoftObjectPath::SetPath(&MaterialForDefaultPointMesh,&local_18);
  atexit(_dynamic_atexit_destructor_for__MaterialForDefaultPointMesh__);
  return;
}

// `dynamic_initializer_for_'MeshAttributeName'' @ 1411acbc0

void __cdecl PCGLevelToAssetConstants::_dynamic_initializer_for__MeshAttributeName__(void)

{
  ::FName::FName(&MeshAttributeName,L"Mesh");
  return;
}

// `dynamic_initializer_for_'NAME_UPCGAssetExporter_BP_ExportToAsset'' @ 1411acbe0

void __cdecl _dynamic_initializer_for__NAME_UPCGAssetExporter_BP_ExportToAsset__(void)

{
  FName::FName(&NAME_UPCGAssetExporter_BP_ExportToAsset,L"BP_ExportToAsset");
  return;
}

// `dynamic_initializer_for_'NAME_UPCGAssetExporter_BP_GetAssetType'' @ 1411acc00

void __cdecl _dynamic_initializer_for__NAME_UPCGAssetExporter_BP_GetAssetType__(void)

{
  FName::FName(&NAME_UPCGAssetExporter_BP_GetAssetType,L"BP_GetAssetType");
  return;
}

// `dynamic_initializer_for_'NAME_UPCGComponent_Cleanup'' @ 1411acc20

void __cdecl _dynamic_initializer_for__NAME_UPCGComponent_Cleanup__(void)

{
  FName::FName(&NAME_UPCGComponent_Cleanup,L"Cleanup");
  return;
}

// `dynamic_initializer_for_'NAME_UPCGComponent_Generate'' @ 1411acc40

void __cdecl _dynamic_initializer_for__NAME_UPCGComponent_Generate__(void)

{
  FName::FName(&NAME_UPCGComponent_Generate,L"Generate");
  return;
}

// `dynamic_initializer_for_'NAME_UPCGComponent_SetGraph'' @ 1411acc60

void __cdecl _dynamic_initializer_for__NAME_UPCGComponent_SetGraph__(void)

{
  FName::FName(&NAME_UPCGComponent_SetGraph,L"SetGraph");
  return;
}

// `dynamic_initializer_for_'NonEditorError'' @ 1411acc80

void __cdecl PCGAssetExporterUtils::_dynamic_initializer_for__NonEditorError__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&NonEditorError,L"PCGAssetExporterUtils",L"CannotExportInNonEditor",
             L"PCG Asset Exporter Utils cannot be used in non-editor builds.");
  atexit(_dynamic_atexit_destructor_for__NonEditorError__);
  return;
}

// `dynamic_initializer_for_'OldDefaultParamsLabel'' @ 1411accc0

void __cdecl PCGPinConstants::Private::_dynamic_initializer_for__OldDefaultParamsLabel__(void)

{
  ::FName::FName(&OldDefaultParamsLabel,L"Params");
  return;
}

// `dynamic_initializer_for_'ParentIndexAttributeName'' @ 1411acce0

void __cdecl PCGLevelToAssetConstants::_dynamic_initializer_for__ParentIndexAttributeName__(void)

{
  ::FName::FName(&ParentIndexAttributeName,L"ParentIndex");
  return;
}

// `dynamic_initializer_for_'PinLabelCinematic'' @ 1411acd00

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelCinematic__(void)

{
  ::FName::FName(&PinLabelCinematic,L"Cinematic");
  return;
}

// `dynamic_initializer_for_'PinLabelDefault'' @ 1411acd20

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelDefault__(void)

{
  ::FName::FName(&PinLabelDefault,L"Default");
  return;
}

// `dynamic_initializer_for_'PinLabelEpic'' @ 1411acd40

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelEpic__(void)

{
  ::FName::FName(&PinLabelEpic,L"Epic");
  return;
}

// `dynamic_initializer_for_'PinLabelHigh'' @ 1411acd60

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelHigh__(void)

{
  ::FName::FName(&PinLabelHigh,L"High");
  return;
}

// `dynamic_initializer_for_'PinLabelLow'' @ 1411acd80

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelLow__(void)

{
  ::FName::FName(&PinLabelLow,L"Low");
  return;
}

// `dynamic_initializer_for_'PinLabelMedium'' @ 1411acda0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelMedium__(void)

{
  ::FName::FName(&PinLabelMedium,L"Medium");
  return;
}

// `dynamic_initializer_for_'PositionName'' @ 1411acdc0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__PositionName__(void)

{
  ::FName::FName(&PositionName,L"Position");
  return;
}

// `dynamic_initializer_for_'RelativeTransformAttributeName'' @ 1411acde0

void __cdecl
PCGLevelToAssetConstants::_dynamic_initializer_for__RelativeTransformAttributeName__(void)

{
  ::FName::FName(&RelativeTransformAttributeName,L"RelativeTransform");
  return;
}

// `dynamic_initializer_for_'RotationName'' @ 1411ace00

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__RotationName__(void)

{
  ::FName::FName(&RotationName,L"Rotation");
  return;
}

// `dynamic_initializer_for_'ScaleName'' @ 1411ace20

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaleName__(void)

{
  ::FName::FName(&ScaleName,L"Scale");
  return;
}

// `dynamic_initializer_for_'ScaledLocalSizeName'' @ 1411ace40

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaledLocalSizeName__(void)

{
  ::FName::FName(&ScaledLocalSizeName,L"ScaledLocalSize");
  return;
}

// `dynamic_initializer_for_'SourceAttributeName'' @ 1411ace60

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceAttributeName__(void)

{
  ::FName::FName(&SourceAttributeName,L"@Source");
  return;
}

// `dynamic_initializer_for_'SourceNameAttributeName'' @ 1411ace80

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceNameAttributeName__(void)

{
  ::FName::FName(&SourceNameAttributeName,L"@SourceName");
  return;
}

// `dynamic_initializer_for_'SubtitleEnum'' @ 1411acea0

void __cdecl PCGControlFlowConstants::_dynamic_initializer_for__SubtitleEnum__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&SubtitleEnum,L"FPCGControlFlow",L"SubtitleEnum",L"Enum Selection");
  atexit(_dynamic_atexit_destructor_for__SubtitleEnum__);
  return;
}

// `dynamic_initializer_for_'SubtitleInt'' @ 1411acee0

void __cdecl PCGControlFlowConstants::_dynamic_initializer_for__SubtitleInt__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&SubtitleInt,L"FPCGControlFlow",L"SubtitleInt",L"Integer Selection");
  atexit(_dynamic_atexit_destructor_for__SubtitleInt__);
  return;
}

// `dynamic_initializer_for_'SubtitleString'' @ 1411acf20

void __cdecl PCGControlFlowConstants::_dynamic_initializer_for__SubtitleString__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&SubtitleString,L"FPCGControlFlow",L"SubtitleString",L"String Selection");
  atexit(_dynamic_atexit_destructor_for__SubtitleString__);
  return;
}

// `dynamic_initializer_for_'UserParameterTagData'' @ 1411acf60

void __cdecl PCGBaseSubgraphConstants::_dynamic_initializer_for__UserParameterTagData__(void)

{
  ::FString::FString(&UserParameterTagData,L"PCGUserParametersTagData");
  atexit(_dynamic_atexit_destructor_for__UserParameterTagData__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporterUtils_h__Script_PCG_160404859'' @ 1411acf90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporterUtils_h__Script_PCG_160404859__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporterUtils_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporter_h__Script_PCG_2529550881'' @ 1411acfd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporter_h__Script_PCG_2529550881__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporter_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporter_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGCommon_h__Script_PCG_1133422803'' @ 1411ad020

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGCommon_h__Script_PCG_1133422803__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGCommon_h__Script_PCG_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGCommon_h__Script_PCG_Statics
             ::EnumInfo,0xc);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h__Script_PCG_448048454'' @ 1411ad070

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h__Script_PCG_448048454__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h__Script_PCG_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h__Script_PCG_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGContext_h__Script_PCG_678451155'' @ 1411ad0c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGContext_h__Script_PCG_678451155__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGContext_h__Script_PCG_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGContext_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h__Script_PCG_985442979'' @ 1411ad110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h__Script_PCG_985442979__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h__Script_PCG_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h__Script_PCG_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDebugDrawComponent_h__Script_PCG_2224398860'' @ 1411ad160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDebugDrawComponent_h__Script_PCG_2224398860__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDebugDrawComponent_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDebug_h__Script_PCG_1543764045'' @ 1411ad1a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDebug_h__Script_PCG_1543764045__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDebug_h__Script_PCG_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDebug_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDefaultExecutionSource_h__Script_PCG_848410638'' @ 1411ad1f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDefaultExecutionSource_h__Script_PCG_848410638__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDefaultExecutionSource_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEdge_h__Script_PCG_818732974'' @ 1411ad230

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEdge_h__Script_PCG_818732974__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEdge_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEngineSettings_h__Script_PCG_3430284233'' @ 1411ad270

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEngineSettings_h__Script_PCG_3430284233__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEngineSettings_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraphExecutionStateInterface_h__Script_PCG_3622832829'' @ 1411ad2b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraphExecutionStateInterface_h__Script_PCG_3622832829__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraphExecutionStateInterface_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraphExecutionStateInterface_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h__Script_PCG_1273759534'' @ 1411ad300

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h__Script_PCG_1273759534__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h__Script_PCG_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h__Script_PCG_902803571'' @ 1411ad350

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h__Script_PCG_902803571__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// EPCGComponentInput_StaticEnum @ 149edcc00

UEnum * __cdecl EPCGComponentInput_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGComponentInput.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGComponentInput.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGComponentInput,(UObject *)pUVar1,
                       L"EPCGComponentInput");
  }
  return Z_Registration_Info_UEnum_EPCGComponentInput.OuterSingleton;
}

// EPCGComponentGenerationTrigger_StaticEnum @ 149edcc40

UEnum * __cdecl EPCGComponentGenerationTrigger_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGComponentGenerationTrigger.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGComponentGenerationTrigger.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger,(UObject *)pUVar1,
                       L"EPCGComponentGenerationTrigger");
  }
  return Z_Registration_Info_UEnum_EPCGComponentGenerationTrigger.OuterSingleton;
}

// EPCGComponentDirtyFlag_StaticEnum @ 149edcc80

UEnum * __cdecl EPCGComponentDirtyFlag_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGComponentDirtyFlag.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGComponentDirtyFlag.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGComponentDirtyFlag,(UObject *)pUVar1,
                       L"EPCGComponentDirtyFlag");
  }
  return Z_Registration_Info_UEnum_EPCGComponentDirtyFlag.OuterSingleton;
}

// Z_Construct_UFunction_UPCGComponent_AddActorsToManagedResources @ 149edccc0

UFunction * __cdecl Z_Construct_UFunction_UPCGComponent_AddActorsToManagedResources(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGComponent_AddActorsToManagedResources_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGComponent_AddComponentsToManagedResources @ 149edcd00

UFunction * __cdecl Z_Construct_UFunction_UPCGComponent_AddComponentsToManagedResources(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGComponent_AddComponentsToManagedResources_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGComponent_AddToManagedResources @ 149edcd40

UFunction * __cdecl Z_Construct_UFunction_UPCGComponent_AddToManagedResources(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGComponent_AddToManagedResources_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRemoveComponents_SetBit @ 149edcd80

void __cdecl
Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::NewProp_bRemoveComponents_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UPCGData_NoRegister @ 149edcdd0

UClass * __cdecl Z_Construct_UClass_UPCGData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGData",&Z_Registration_Info_UClass_UPCGData.InnerSingleton,
               UPCGData::StaticRegisterNativesUPCGData,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGData>,InternalVTableHelperCtorCaller<UPCGData>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGData.InnerSingleton;
}

// Z_Construct_UFunction_UPCGComponent_Cleanup @ 149edced0

UFunction * __cdecl Z_Construct_UFunction_UPCGComponent_Cleanup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRemoveComponents_SetBit @ 149edcf10

void __cdecl
Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::NewProp_bRemoveComponents_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UPCGComponent_CleanupLocal @ 149edd060

UFunction * __cdecl Z_Construct_UFunction_UPCGComponent_CleanupLocal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGComponent_ClearPCGLink @ 149edd0a0

UFunction * __cdecl Z_Construct_UFunction_UPCGComponent_ClearPCGLink(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGComponent_ClearPCGLink_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bForce_SetBit @ 149edd0e0

void __cdecl
Z_Construct_UFunction_UPCGComponent_Generate_Statics::NewProp_bForce_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UPCGComponent_Generate @ 149edd0f0

UFunction * __cdecl Z_Construct_UFunction_UPCGComponent_Generate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGComponent_Generate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bForce_SetBit @ 149edd130

void __cdecl
Z_Construct_UFunction_UPCGComponent_GenerateLocal_Statics::NewProp_bForce_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UPCGComponent_GenerateLocal @ 149edd140

UFunction * __cdecl Z_Construct_UFunction_UPCGComponent_GenerateLocal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGComponent_GenerateLocal_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGComponent_GetEditingMode @ 149edd180

UFunction * __cdecl Z_Construct_UFunction_UPCGComponent_GetEditingMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGComponent_GetEditingMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput @ 149edd1c0

UFunction * __cdecl Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGComponent_GetSerializedEditingMode @ 149edd200

UFunction * __cdecl Z_Construct_UFunction_UPCGComponent_GetSerializedEditingMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGComponent_GetSerializedEditingMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGComponent_NotifyPropertiesChangedFromBlueprint @ 149edd240

UFunction * __cdecl Z_Construct_UFunction_UPCGComponent_NotifyPropertiesChangedFromBlueprint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGComponent_NotifyPropertiesChangedFromBlueprint_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGComponent_SetEditingMode @ 149edd280

UFunction * __cdecl Z_Construct_UFunction_UPCGComponent_SetEditingMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGComponent_SetEditingMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGComponent_SetGraph @ 149edd2c0

UFunction * __cdecl Z_Construct_UFunction_UPCGComponent_SetGraph(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGComponent_SetGraph_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bActivated_SetBit @ 149edd300

void __cdecl Z_Construct_UClass_UPCGComponent_Statics::NewProp_bActivated_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  return;
}

// NewProp_bIsComponentPartitioned_SetBit @ 149edd310

void __cdecl
Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsComponentPartitioned_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xcd) = 1;
  return;
}

// NewProp_bGenerateOnDropWhenTriggerOnDemand_SetBit @ 149edd320

void __cdecl
Z_Construct_UClass_UPCGComponent_Statics::NewProp_bGenerateOnDropWhenTriggerOnDemand_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xcf) = 1;
  return;
}

// NewProp_bOverrideGenerationRadii_SetBit @ 149edd330

void __cdecl
Z_Construct_UClass_UPCGComponent_Statics::NewProp_bOverrideGenerationRadii_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  return;
}

// NewProp_bGenerated_SetBit @ 149edd340

void __cdecl Z_Construct_UClass_UPCGComponent_Statics::NewProp_bGenerated_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x240) = 1;
  return;
}

// NewProp_bRuntimeGenerated_SetBit @ 149edd350

void __cdecl
Z_Construct_UClass_UPCGComponent_Statics::NewProp_bRuntimeGenerated_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x241) = 1;
  return;
}

// NewProp_bParseActorComponents_SetBit @ 149edd360

void __cdecl
Z_Construct_UClass_UPCGComponent_Statics::NewProp_bParseActorComponents_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x269) = 1;
  return;
}

// NewProp_bIsComponentLocal_SetBit @ 149edd370

void __cdecl
Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsComponentLocal_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x380) = 1;
  return;
}

// NewProp_bProceduralInstancesInUse_SetBit @ 149edd380

void __cdecl
Z_Construct_UClass_UPCGComponent_Statics::NewProp_bProceduralInstancesInUse_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x381) = 1;
  return;
}

// Z_Construct_UClass_UPCGGraphExecutionSource @ 149edd590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGraphExecutionSource(void)

{
  if (Z_Registration_Info_UClass_UPCGGraphExecutionSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGraphExecutionSource.OuterSingleton,
               &Z_Construct_UClass_UPCGGraphExecutionSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGraphExecutionSource.OuterSingleton;
}

// NewStructOps @ 149edd5d0

void * __cdecl Z_Construct_UScriptStruct_FPCGSoftGraphExecutionSource_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGSoftGraphExecutionSource,&UE::CoreUObject::Private::Construct<FPCGSoftGraphExecutionSource>,&UE::CoreUObject::Private::ConstructForTests<FPCGSoftGraphExecutionSource>,&UE::CoreUObject::Private::Destruct<FPCGSoftGraphExecutionSource>,&UE::CoreUObject::Private::Copy<FPCGSoftGraphExecutionSource>,&UE::CoreUObject::Private::GetStructTypeHash<FPCGSoftGraphExecutionSource>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bValue_SetBit @ 149edd610

void __cdecl
Z_Construct_UScriptStruct_FDynamicTrackedKeyInstanceData_Statics::NewProp_bValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// NewStructOps @ 149edd620

void * __cdecl Z_Construct_UScriptStruct_FDynamicTrackedKeyInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDynamicTrackedKeyInstanceData,&UE::CoreUObject::Private::Construct<FDynamicTrackedKeyInstanceData>,&UE::CoreUObject::Private::ConstructForTests<FDynamicTrackedKeyInstanceData>,&UE::CoreUObject::Private::Destruct<FDynamicTrackedKeyInstanceData>,&UE::CoreUObject::Private::Copy<FDynamicTrackedKeyInstanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod @ 149edd660

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod(void)

{
  if (Z_Registration_Info_UEnum_EPCGDebugVisScaleMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGDebugVisScaleMethod.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGDebugVisScaleMethod.InnerSingleton;
}

// EPCGDebugVisScaleMethod_StaticEnum @ 149edd6a0

UEnum * __cdecl EPCGDebugVisScaleMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGDebugVisScaleMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGDebugVisScaleMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod,(UObject *)pUVar1,
                       L"EPCGDebugVisScaleMethod");
  }
  return Z_Registration_Info_UEnum_EPCGDebugVisScaleMethod.OuterSingleton;
}

// NewStructOps @ 149edd6e0

void * __cdecl Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDebugVisualizationSettings,&UE::CoreUObject::Private::Construct<FPCGDebugVisualizationSettings>,&UE::CoreUObject::Private::ConstructForTests<FPCGDebugVisualizationSettings>,&UE::CoreUObject::Private::Destruct<FPCGDebugVisualizationSettings>,&UE::CoreUObject::Private::Copy<FPCGDebugVisualizationSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149edd720

void * __cdecl Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGComponentInstanceData,&UE::CoreUObject::Private::Construct<FPCGComponentInstanceData>,&UE::CoreUObject::Private::ConstructForTests<FPCGComponentInstanceData>,&UE::CoreUObject::Private::Destruct<FPCGComponentInstanceData>,&UE::CoreUObject::Private::Copy<FPCGComponentInstanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGGraphInputOutputSettings @ 149edd8d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGraphInputOutputSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGGraphInputOutputSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGraphInputOutputSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGraphInputOutputSettings.OuterSingleton;
}

// NewProp_bHasAddedDefaultPin_SetBit @ 149edd910

void __cdecl
Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics::NewProp_bHasAddedDefaultPin_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x138) = 1;
  return;
}

// Z_Construct_UClass_UPCGComponent_NoRegister @ 149eddbb0

UClass * __cdecl Z_Construct_UClass_UPCGComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComponent",
               &Z_Registration_Info_UClass_UPCGComponent.InnerSingleton,
               UPCGComponent::StaticRegisterNativesUPCGComponent,0x3c0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGComponent>,InternalVTableHelperCtorCaller<UPCGComponent>,
               local_res8,UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComponent.InnerSingleton;
}

// Z_Construct_UClass_UPCGAssetExporterUtils @ 149eddc70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGAssetExporterUtils(void)

{
  if (Z_Registration_Info_UClass_UPCGAssetExporterUtils.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGAssetExporterUtils.OuterSingleton,
               &Z_Construct_UClass_UPCGAssetExporterUtils_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGAssetExporterUtils.OuterSingleton;
}

// EPCGExecutionPhase_StaticEnum @ 149eddd10

UEnum * __cdecl EPCGExecutionPhase_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGExecutionPhase.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGExecutionPhase.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGExecutionPhase,(UObject *)pUVar1,
                       L"EPCGExecutionPhase");
  }
  return Z_Registration_Info_UEnum_EPCGExecutionPhase.OuterSingleton;
}

// Z_Construct_UFunction_UPCGAssetExporterUtils_CreateAsset @ 149eddd50

UFunction * __cdecl Z_Construct_UFunction_UPCGAssetExporterUtils_CreateAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGAssetExporterUtils_CreateAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 149eddda0

void * __cdecl Z_Construct_UScriptStruct_FPCGBlueprintContextHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGBlueprintContextHandle,&UE::CoreUObject::Private::Construct<FPCGBlueprintContextHandle>,&UE::CoreUObject::Private::ConstructForTests<FPCGBlueprintContextHandle>,&UE::CoreUObject::Private::Destruct<FPCGBlueprintContextHandle>,&UE::CoreUObject::Private::Copy<FPCGBlueprintContextHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPCGAssetExporterUtils_UpdateAssets @ 149eddde0

UFunction * __cdecl Z_Construct_UFunction_UPCGAssetExporterUtils_UpdateAssets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGAssetExporterUtils_UpdateAssets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 149edde20

void * __cdecl Z_Construct_UScriptStruct_FPCGContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGContext,&UE::CoreUObject::Private::Construct<FPCGContext>,&UE::CoreUObject::Private::ConstructForTests<FPCGContext>,&UE::CoreUObject::Private::Destruct<FPCGContext>,&UE::CoreUObject::Private::Copy<FPCGContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGAssetExporter @ 149ede150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGAssetExporter(void)

{
  if (Z_Registration_Info_UClass_UPCGAssetExporter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGAssetExporter.OuterSingleton,
               &Z_Construct_UClass_UPCGAssetExporter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGAssetExporter.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPCGAssetExporterParameters @ 149ede190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGAssetExporterParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGAssetExporterParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGAssetExporterParameters.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGAssetExporterParameters_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGAssetExporterParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGAssetExporterParameters.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bOpenSaveDialog_SetBit @ 149ede210

void __cdecl
Z_Construct_UScriptStruct_FPCGAssetExporterParameters_Statics::NewProp_bOpenSaveDialog_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bSaveOnExportEnded_SetBit @ 149ede220

void __cdecl
Z_Construct_UScriptStruct_FPCGAssetExporterParameters_Statics::NewProp_bSaveOnExportEnded_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewStructOps @ 149ede230

void * __cdecl Z_Construct_UScriptStruct_FPCGAssetExporterParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGAssetExporterParameters,&UE::CoreUObject::Private::Construct<FPCGAssetExporterParameters>,&UE::CoreUObject::Private::ConstructForTests<FPCGAssetExporterParameters>,&UE::CoreUObject::Private::Destruct<FPCGAssetExporterParameters>,&UE::CoreUObject::Private::Copy<FPCGAssetExporterParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGData @ 149ede270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGData(void)

{
  if (Z_Registration_Info_UClass_UPCGData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGData.OuterSingleton,
               &Z_Construct_UClass_UPCGData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGData.OuterSingleton;
}

// Z_Construct_UClass_UPCGDataFunctionLibrary @ 149ede2b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDataFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UPCGDataFunctionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDataFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDataFunctionLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPCGTaggedData @ 149ede2f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGTaggedData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGTaggedData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGTaggedData.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGTaggedData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGTaggedData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGTaggedData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EPCGDataUsage_StaticEnum @ 149ede370

UEnum * __cdecl EPCGDataUsage_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGDataUsage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGDataUsage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDataUsage,(UObject *)pUVar1,L"EPCGDataUsage");
  }
  return Z_Registration_Info_UEnum_EPCGDataUsage.OuterSingleton;
}

// Z_Construct_UFunction_UPCGData_ConstMetadata @ 149ede3b0

UFunction * __cdecl Z_Construct_UFunction_UPCGData_ConstMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGData_ConstMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGData_MutableMetadata @ 149ede3f0

UFunction * __cdecl Z_Construct_UFunction_UPCGData_MutableMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGData_MutableMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 149ede430

void __cdecl
Z_Construct_UFunction_UPCGAssetExporter_BP_ExportToAsset_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UPCGAssetExporter_BP_ExportToAsset @ 149ede440

UFunction * __cdecl Z_Construct_UFunction_UPCGAssetExporter_BP_ExportToAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGAssetExporter_BP_ExportToAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPinlessData_SetBit @ 149ede480

void __cdecl
Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_bPinlessData_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewProp_bIsUsedMultipleTimes_SetBit @ 149ede490

void __cdecl
Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_bIsUsedMultipleTimes_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x69) = 1;
  return;
}

// NewStructOps @ 149ede4a0

void * __cdecl Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGTaggedData,&UE::CoreUObject::Private::Construct<FPCGTaggedData>,&UE::CoreUObject::Private::ConstructForTests<FPCGTaggedData>,&UE::CoreUObject::Private::Destruct<FPCGTaggedData>,&UE::CoreUObject::Private::Copy<FPCGTaggedData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPCGAssetExporter_BP_GetAssetType @ 149ede4e0

UFunction * __cdecl Z_Construct_UFunction_UPCGAssetExporter_BP_GetAssetType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGAssetExporter_BP_GetAssetType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCancelExecutionOnEmpty_SetBit @ 149ede520

void __cdecl
Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_bCancelExecutionOnEmpty_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 149ede530

void * __cdecl Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataCollection,&UE::CoreUObject::Private::Construct<FPCGDataCollection>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataCollection>,&UE::CoreUObject::Private::Destruct<FPCGDataCollection>,&UE::CoreUObject::Private::Copy<FPCGDataCollection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection @ 149ede570

UFunction * __cdecl Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataFunctionLibrary_AddToCollection_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsUsedMultipleTimes_SetBit @ 149ede5b0

void __cdecl
Z_Construct_UFunction_UPCGDataFunctionLibrary_BreakTaggedData_Statics::
NewProp_bIsUsedMultipleTimes_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd8) = 1;
  return;
}

// Z_Construct_UFunction_UPCGDataFunctionLibrary_BreakTaggedData @ 149ede620

UFunction * __cdecl Z_Construct_UFunction_UPCGDataFunctionLibrary_BreakTaggedData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataFunctionLibrary_BreakTaggedData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings @ 149ede700

UFunction * __cdecl Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs @ 149ede800

UFunction * __cdecl Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGGraph @ 149ede840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGraph(void)

{
  if (Z_Registration_Info_UClass_UPCGGraph.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGraph.OuterSingleton,
               &Z_Construct_UClass_UPCGGraph_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGraph.OuterSingleton;
}

// Z_Construct_UClass_UPCGGraphInstance @ 149ede880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGraphInstance(void)

{
  if (Z_Registration_Info_UClass_UPCGGraphInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGraphInstance.OuterSingleton,
               &Z_Construct_UClass_UPCGGraphInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGraphInstance.OuterSingleton;
}

// Z_Construct_UClass_UPCGGraphInterface @ 149ede8c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGraphInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGGraphInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGraphInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGGraphInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGraphInterface.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag @ 149ede900

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGOverrideInstancedPropertyBag.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGOverrideInstancedPropertyBag.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGOverrideInstancedPropertyBag.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGOverrideInstancedPropertyBag.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 149ede980

void * __cdecl
Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGOverrideInstancedPropertyBag,&UE::CoreUObject::Private::Construct<FPCGOverrideInstancedPropertyBag>,&UE::CoreUObject::Private::ConstructForTests<FPCGOverrideInstancedPropertyBag>,&UE::CoreUObject::Private::Destruct<FPCGOverrideInstancedPropertyBag>,&UE::CoreUObject::Private::Copy<FPCGOverrideInstancedPropertyBag>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel @ 149edeb00

UFunction * __cdecl Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPinLabel_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag @ 149ededa0

UFunction * __cdecl Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149edee00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UPCGDebugDrawComponent @ 149edee30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDebugDrawComponent(void)

{
  if (Z_Registration_Info_UClass_UPCGDebugDrawComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDebugDrawComponent.OuterSingleton,
               &Z_Construct_UClass_UPCGDebugDrawComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDebugDrawComponent.OuterSingleton;
}

// Z_Construct_UClass_UPCGManagedDebugDrawComponent @ 149edee70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGManagedDebugDrawComponent(void)

{
  if (Z_Registration_Info_UClass_UPCGManagedDebugDrawComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGManagedDebugDrawComponent.OuterSingleton,
               &Z_Construct_UClass_UPCGManagedDebugDrawComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGManagedDebugDrawComponent.OuterSingleton;
}

// Z_Construct_UClass_UPCGEngineSettings @ 149edeeb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGEngineSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGEngineSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGEngineSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGEngineSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGEngineSettings.OuterSingleton;
}

// NewProp_bGenerateOnDrop_SetBit @ 149edeef0

void __cdecl
Z_Construct_UClass_UPCGEngineSettings_Statics::NewProp_bGenerateOnDrop_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams @ 149edef00

UFunction * __cdecl Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDisplayCullingStateWhenDebugging_SetBit @ 149edef40

void __cdecl
Z_Construct_UClass_UPCGEngineSettings_Statics::NewProp_bDisplayCullingStateWhenDebugging_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  return;
}

// Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph @ 149edef80

UFunction * __cdecl Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGGraphInterface_GetConstPCGGraph_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGGraphInterface_GetMutablePCGGraph @ 149edf190

UFunction * __cdecl Z_Construct_UFunction_UPCGGraphInterface_GetMutablePCGGraph(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGGraphInterface_GetMutablePCGGraph_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel @ 149edf1d0

UFunction * __cdecl Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPinLabel_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag @ 149edf210

UFunction * __cdecl Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGGraph_AddEdge @ 149edf250

UFunction * __cdecl Z_Construct_UFunction_UPCGGraph_AddEdge(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGGraph_AddEdge_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGGraph_AddNodeCopy @ 149edf350

UFunction * __cdecl Z_Construct_UFunction_UPCGGraph_AddNodeCopy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGGraph_AddNodeCopy_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_PCG_EPCGEditorDirtyMode @ 149edf3f0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGEditorDirtyMode(void)

{
  if (Z_Registration_Info_UEnum_EPCGEditorDirtyMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGEditorDirtyMode.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGEditorDirtyMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGEditorDirtyMode.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGHiGenGrid @ 149edf480

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGHiGenGrid(void)

{
  if (Z_Registration_Info_UEnum_EPCGHiGenGrid.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGHiGenGrid.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGHiGenGrid_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGHiGenGrid.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPCGRuntimeGenerationRadii @ 149edf4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGRuntimeGenerationRadii(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGRuntimeGenerationRadii.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGRuntimeGenerationRadii.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGRuntimeGenerationRadii_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGRuntimeGenerationRadii.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGRuntimeGenerationRadii.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EPCGChangeType_StaticEnum @ 149edf590

UEnum * __cdecl EPCGChangeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGChangeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGChangeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGChangeType,(UObject *)pUVar1,L"EPCGChangeType");
  }
  return Z_Registration_Info_UEnum_EPCGChangeType.OuterSingleton;
}

// Z_Construct_UFunction_UPCGGraph_AddNodeInstance @ 149edf680

UFunction * __cdecl Z_Construct_UFunction_UPCGGraph_AddNodeInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGGraph_AddNodeInstance_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// EPCGDataType_StaticEnum @ 149edf6c0

UEnum * __cdecl EPCGDataType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGDataType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGDataType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDataType,(UObject *)pUVar1,L"EPCGDataType");
  }
  return Z_Registration_Info_UEnum_EPCGDataType.OuterSingleton;
}

// Z_Construct_UFunction_UPCGGraph_AddNodeOfType @ 149edf700

UFunction * __cdecl Z_Construct_UFunction_UPCGGraph_AddNodeOfType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGGraph_AddNodeOfType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EPCGExclusiveDataType_StaticEnum @ 149edf740

UEnum * __cdecl EPCGExclusiveDataType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGExclusiveDataType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGExclusiveDataType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGExclusiveDataType,(UObject *)pUVar1,
                       L"EPCGExclusiveDataType");
  }
  return Z_Registration_Info_UEnum_EPCGExclusiveDataType.OuterSingleton;
}

// Z_Construct_UFunction_UPCGGraph_GetInputNode @ 149edf780

UFunction * __cdecl Z_Construct_UFunction_UPCGGraph_GetInputNode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGGraph_GetInputNode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGGraph_GetOutputNode @ 149edf870

UFunction * __cdecl Z_Construct_UFunction_UPCGGraph_GetOutputNode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGGraph_GetOutputNode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EPCGContainerType_StaticEnum @ 149edf8b0

UEnum * __cdecl EPCGContainerType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGContainerType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGContainerType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGContainerType,(UObject *)pUVar1,
                       L"EPCGContainerType");
  }
  return Z_Registration_Info_UEnum_EPCGContainerType.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 149edf8f0

void __cdecl
Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// EPCGCoordinateSpace_StaticEnum @ 149edf900

UEnum * __cdecl EPCGCoordinateSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGCoordinateSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGCoordinateSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGCoordinateSpace,(UObject *)pUVar1,
                       L"EPCGCoordinateSpace");
  }
  return Z_Registration_Info_UEnum_EPCGCoordinateSpace.OuterSingleton;
}

// Z_Construct_UClass_UPCGDefaultExecutionSource @ 149edf940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDefaultExecutionSource(void)

{
  if (Z_Registration_Info_UClass_UPCGDefaultExecutionSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDefaultExecutionSource.OuterSingleton,
               &Z_Construct_UClass_UPCGDefaultExecutionSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDefaultExecutionSource.OuterSingleton;
}

// Z_Construct_UFunction_UPCGGraph_RemoveEdge @ 149edf980

UFunction * __cdecl Z_Construct_UFunction_UPCGGraph_RemoveEdge(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGGraph_RemoveEdge_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs @ 149edf9c0

UFunction * __cdecl Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputs_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EPCGStringMatchingOperator_StaticEnum @ 149edfa00

UEnum * __cdecl EPCGStringMatchingOperator_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGStringMatchingOperator.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGStringMatchingOperator.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGStringMatchingOperator,(UObject *)pUVar1,
                       L"EPCGStringMatchingOperator");
  }
  return Z_Registration_Info_UEnum_EPCGStringMatchingOperator.OuterSingleton;
}

// Z_Construct_UFunction_UPCGGraph_RemoveNode @ 149edfa40

UFunction * __cdecl Z_Construct_UFunction_UPCGGraph_RemoveNode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGGraph_RemoveNode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EPCGHiGenGrid_StaticEnum @ 149edfa80

UEnum * __cdecl EPCGHiGenGrid_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGHiGenGrid.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGHiGenGrid.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGHiGenGrid,(UObject *)pUVar1,L"EPCGHiGenGrid");
  }
  return Z_Registration_Info_UEnum_EPCGHiGenGrid.OuterSingleton;
}

// Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin @ 149edff20

UFunction * __cdecl Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPin_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EPCGAttachOptions_StaticEnum @ 149edff60

UEnum * __cdecl EPCGAttachOptions_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGAttachOptions.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGAttachOptions.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGAttachOptions,(UObject *)pUVar1,
                       L"EPCGAttachOptions");
  }
  return Z_Registration_Info_UEnum_EPCGAttachOptions.OuterSingleton;
}

// EPCGEditorDirtyMode_StaticEnum @ 149edffa0

UEnum * __cdecl EPCGEditorDirtyMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGEditorDirtyMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGEditorDirtyMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGEditorDirtyMode,(UObject *)pUVar1,
                       L"EPCGEditorDirtyMode");
  }
  return Z_Registration_Info_UEnum_EPCGEditorDirtyMode.OuterSingleton;
}

// Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel @ 149edffe0

UFunction * __cdecl Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByPinLabel_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 149ee0020

void * __cdecl Z_Construct_UScriptStruct_FPCGRuntimeGenerationRadii_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGRuntimeGenerationRadii,&UE::CoreUObject::Private::Construct<FPCGRuntimeGenerationRadii>,&UE::CoreUObject::Private::ConstructForTests<FPCGRuntimeGenerationRadii>,&UE::CoreUObject::Private::Destruct<FPCGRuntimeGenerationRadii>,&UE::CoreUObject::Private::Copy<FPCGRuntimeGenerationRadii>,&UE::CoreUObject::Private::GetStructTypeHash<FPCGRuntimeGenerationRadii>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag @ 149ee0060

UFunction * __cdecl Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTypedInputsByTag_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EPCGNodeTitleType_StaticEnum @ 149ee00a0

UEnum * __cdecl EPCGNodeTitleType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGNodeTitleType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGNodeTitleType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGNodeTitleType,(UObject *)pUVar1,
                       L"EPCGNodeTitleType");
  }
  return Z_Registration_Info_UEnum_EPCGNodeTitleType.OuterSingleton;
}

// Z_Construct_UFunction_UPCGDataFunctionLibrary_MakeTaggedData @ 149ee00e0

UFunction * __cdecl Z_Construct_UFunction_UPCGDataFunctionLibrary_MakeTaggedData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataFunctionLibrary_MakeTaggedData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 149ee0120

void * __cdecl Z_Construct_UScriptStruct_FPCGPartitionActorRecord_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGPartitionActorRecord,&UE::CoreUObject::Private::Construct<FPCGPartitionActorRecord>,&UE::CoreUObject::Private::ConstructForTests<FPCGPartitionActorRecord>,&UE::CoreUObject::Private::Destruct<FPCGPartitionActorRecord>,&UE::CoreUObject::Private::Copy<FPCGPartitionActorRecord>,&UE::CoreUObject::Private::GetStructTypeHash<FPCGPartitionActorRecord>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// EPCGDensityMergeOperation_StaticEnum @ 149ee0250

UEnum * __cdecl EPCGDensityMergeOperation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGDensityMergeOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGDensityMergeOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDensityMergeOperation,(UObject *)pUVar1,
                       L"EPCGDensityMergeOperation");
  }
  return Z_Registration_Info_UEnum_EPCGDensityMergeOperation.OuterSingleton;
}

// Z_Construct_UFunction_UPCGGraph_RemoveNodes @ 149ee0290

UFunction * __cdecl Z_Construct_UFunction_UPCGGraph_RemoveNodes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGGraph_RemoveNodes_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EPCGGenerationStatus_StaticEnum @ 149ee02d0

UEnum * __cdecl EPCGGenerationStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGGenerationStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGGenerationStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGGenerationStatus,(UObject *)pUVar1,
                       L"EPCGGenerationStatus");
  }
  return Z_Registration_Info_UEnum_EPCGGenerationStatus.OuterSingleton;
}

// NewProp_bLandscapeUsesMetadata_SetBit @ 149ee0310

void __cdecl
Z_Construct_UClass_UPCGGraph_Statics::NewProp_bLandscapeUsesMetadata_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bUseHierarchicalGeneration_SetBit @ 149ee0320

void __cdecl
Z_Construct_UClass_UPCGGraph_Statics::NewProp_bUseHierarchicalGeneration_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bUse2DGrid_SetBit @ 149ee0330

void __cdecl Z_Construct_UClass_UPCGGraph_Statics::NewProp_bUse2DGrid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  return;
}

// NewProp_bHasDefaultConstructedInputs_SetBit @ 149ee0340

void __cdecl
Z_Construct_UClass_UPCGGraph_Statics::NewProp_bHasDefaultConstructedInputs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6d) = 1;
  return;
}

// NewProp_bIsEditorOnly_SetBit @ 149ee0350

void __cdecl Z_Construct_UClass_UPCGGraph_Statics::NewProp_bIsEditorOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e8) = 1;
  return;
}

// Z_Construct_UClass_UPCGAssetExporter_NoRegister @ 149ee0360

UClass * __cdecl Z_Construct_UClass_UPCGAssetExporter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAssetExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAssetExporter",
               &Z_Registration_Info_UClass_UPCGAssetExporter.InnerSingleton,
               UPCGAssetExporter::StaticRegisterNativesUPCGAssetExporter,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGAssetExporter>,
               InternalVTableHelperCtorCaller<UPCGAssetExporter>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAssetExporter.InnerSingleton;
}

// Z_Construct_UClass_UPCGEdge @ 149ee0500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGEdge(void)

{
  if (Z_Registration_Info_UClass_UPCGEdge.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGEdge.OuterSingleton,
               &Z_Construct_UClass_UPCGEdge_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGEdge.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 149ee0590

void __cdecl
Z_Construct_UFunction_UPCGGraphInstance_GraphAssetFilter_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UFunction_UPCGGraphInstance_GraphAssetFilter @ 149ee0a00

UFunction * __cdecl Z_Construct_UFunction_UPCGGraphInstance_GraphAssetFilter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGGraphInstance_GraphAssetFilter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149ee0a80

void * __thiscall
FPCGComponentInstanceData::_scalar_deleting_destructor_
          (FPCGComponentInstanceData *this,uint param_1)

{
  FInstanceCacheDataBase::~FInstanceCacheDataBase((FInstanceCacheDataBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// Z_Construct_UClass_UPCGGraphInterface_NoRegister @ 149ee0ac0

UClass * __cdecl Z_Construct_UClass_UPCGGraphInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphInterface",
               &Z_Registration_Info_UClass_UPCGGraphInterface.InnerSingleton,
               UPCGGraphInterface::StaticRegisterNativesUPCGGraphInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGraphInterface>,
               InternalVTableHelperCtorCaller<UPCGGraphInterface>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGGraph_NoRegister @ 149ee0b70

UClass * __cdecl Z_Construct_UClass_UPCGGraph_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGGraph::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraph",&Z_Registration_Info_UClass_UPCGGraph.InnerSingleton,
               UPCGGraph::StaticRegisterNativesUPCGGraph,0x2f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGraph>,InternalVTableHelperCtorCaller<UPCGGraph>,
               local_res8,UPCGGraphInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraph.InnerSingleton;
}

// Z_Construct_UClass_UPCGGraphInstance_NoRegister @ 149ee0c30

UClass * __cdecl Z_Construct_UClass_UPCGGraphInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphInstance",
               &Z_Registration_Info_UClass_UPCGGraphInstance.InnerSingleton,
               UPCGGraphInstance::StaticRegisterNativesUPCGGraphInstance,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGraphInstance>,
               InternalVTableHelperCtorCaller<UPCGGraphInstance>,local_res8,
               UPCGGraphInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphInstance.InnerSingleton;
}

// Z_Construct_UClass_UPCGComponent @ 149ee0ea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGComponent(void)

{
  if (Z_Registration_Info_UClass_UPCGComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGComponent.OuterSingleton,
               &Z_Construct_UClass_UPCGComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGComponent.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger @ 149ee0ee0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger(void)

{
  if (Z_Registration_Info_UEnum_EPCGComponentGenerationTrigger.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGComponentGenerationTrigger.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGComponentGenerationTrigger.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGComponentInput @ 149ee0f20

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGComponentInput(void)

{
  if (Z_Registration_Info_UEnum_EPCGComponentInput.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGComponentInput.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGComponentInput_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGComponentInput.InnerSingleton;
}

// Z_Construct_UDelegateFunction_PCG_OnPCGGraphCancelledExternal__DelegateSignature @ 149ee0f60

UFunction * __cdecl
Z_Construct_UDelegateFunction_PCG_OnPCGGraphCancelledExternal__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_PCG_OnPCGGraphCancelledExternal__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_PCG_OnPCGGraphCleanedExternal__DelegateSignature @ 149ee0fa0

UFunction * __cdecl
Z_Construct_UDelegateFunction_PCG_OnPCGGraphCleanedExternal__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_PCG_OnPCGGraphCleanedExternal__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_PCG_OnPCGGraphGeneratedExternal__DelegateSignature @ 149ee0fe0

UFunction * __cdecl
Z_Construct_UDelegateFunction_PCG_OnPCGGraphGeneratedExternal__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_PCG_OnPCGGraphGeneratedExternal__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_PCG_OnPCGGraphStartGeneratingExternal__DelegateSignature @ 149ee1020

UFunction * __cdecl
Z_Construct_UDelegateFunction_PCG_OnPCGGraphStartGeneratingExternal__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_PCG_OnPCGGraphStartGeneratingExternal__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FPCGDataCollection @ 149ee1060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataCollection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataCollection.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataCollection.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataCollection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataCollection.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataCollection.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Cast<UPCGSettings_const_> @ 149ee5020

UPCGSettings * __cdecl Cast<UPCGSettings_const_>(FPCGDataPtrWrapper *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 local_res8 [4];
  
  local_res8[0] = (FObjectPtr_u_0)(param_1->Data).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if ((UPCGSettings *)local_res8[0].Handle == (UPCGSettings *)0x0) {
      return (UPCGSettings *)0x0;
    }
    UE::GC::MarkAsReachable(local_res8[0].Handle);
  }
  if ((UPCGSettings *)local_res8[0].Handle != (UPCGSettings *)0x0) {
    pUVar2 = Z_Construct_UClass_UPCGSettings_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar2);
    if (bVar1) {
      return (UPCGSettings *)local_res8[0].Handle;
    }
  }
  return (UPCGSettings *)0x0;
}

// Cast<UPCGSettingsInterface_const_> @ 149ee5080

UPCGSettingsInterface * __cdecl Cast<UPCGSettingsInterface_const_>(FPCGDataPtrWrapper *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 local_res8 [4];
  
  local_res8[0] = (FObjectPtr_u_0)(param_1->Data).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if ((UPCGSettingsInterface *)local_res8[0].Handle == (UPCGSettingsInterface *)0x0) {
      return (UPCGSettingsInterface *)0x0;
    }
    UE::GC::MarkAsReachable(local_res8[0].Handle);
  }
  if ((UPCGSettingsInterface *)local_res8[0].Handle != (UPCGSettingsInterface *)0x0) {
    pUVar2 = Z_Construct_UClass_UPCGSettingsInterface_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar2);
    if (bVar1) {
      return (UPCGSettingsInterface *)local_res8[0].Handle;
    }
  }
  return (UPCGSettingsInterface *)0x0;
}

// CastChecked<IPCGGraphExecutionSource,UObject> @ 149ee50e0

IPCGGraphExecutionSource * __cdecl CastChecked<IPCGGraphExecutionSource,UObject>(UObject *param_1)

{
  UClass *pUVar1;
  IPCGGraphExecutionSource *pIVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<IPCGGraphExecutionSource>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar1 = Z_Construct_UClass_UPCGGraphExecutionSource_NoRegister();
  pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
  if (pIVar2 != (IPCGGraphExecutionSource *)0x0) {
    return pIVar2;
  }
  pFVar3 = GetTypeName<IPCGGraphExecutionSource>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGComponent,UActorComponent> @ 149ee5190

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGComponent * __cdecl CastChecked<UPCGComponent,UActorComponent>(UActorComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UActorComponent *)0x0) {
    pFVar3 = GetTypeName<UPCGComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGComponent::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGComponent *)param_1;
  }
  pFVar3 = GetTypeName<UPCGComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UActorComponent>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGDefaultExecutionSource,UObject> @ 149ee5250

UPCGDefaultExecutionSource * __cdecl
CastChecked<UPCGDefaultExecutionSource,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPCGDefaultExecutionSource>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGDefaultExecutionSource::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGDefaultExecutionSource *)param_1;
  }
  pFVar3 = GetTypeName<UPCGDefaultExecutionSource>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGManagedResource,UObject> @ 149ee5310

UPCGManagedResource * __cdecl CastChecked<UPCGManagedResource,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPCGManagedResource>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGManagedResource_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGManagedResource *)param_1;
  }
  pFVar3 = GetTypeName<UPCGManagedResource>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<TObjectPtr<UPCGManagedResource>,TObjectPtr<UPCGManagedResource>,int> @ 149ee53d0

void __cdecl
ConstructItems<TObjectPtr<UPCGManagedResource>,TObjectPtr<UPCGManagedResource>,int>
          (void *param_1,TObjectPtr<UPCGManagedResource> *param_2,int param_3)

{
  TObjectPtr<UPCGManagedResource> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UPCGManagedResource>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UPCGManagedResource>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UPCGManagedResource *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UPCGManagedResource *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<PCGInputOutputPrivate::FLabelAndTooltip,PCGInputOutputPrivate::FLabelAndTooltip,int> @ 149ee5430

void __cdecl
ConstructItems<PCGInputOutputPrivate::FLabelAndTooltip,PCGInputOutputPrivate::FLabelAndTooltip,int>
          (void *param_1,FLabelAndTooltip *param_2,int param_3)

{
  uint uVar1;
  ITextData *pIVar2;
  uint *puVar3;
  longlong *plVar4;
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    puVar3 = &(param_2->Tooltip).Flags;
    plVar4 = (longlong *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)((longlong)puVar3 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           *(undefined8 *)(puVar3 + -4);
      *plVar4 = 0;
      pIVar2 = (((FText *)(puVar3 + -2))->TextData).Reference;
      *plVar4 = (longlong)pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
      }
      uVar1 = *puVar3;
      puVar3 = puVar3 + 6;
      *(uint *)(plVar4 + 1) = uVar1;
      plVar4 = plVar4 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<UActorComponent>,int> @ 149ee5500

void __cdecl
DestructItems<TSoftObjectPtr<UActorComponent>,int>
          (TSoftObjectPtr<UActorComponent> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<PCGInputOutputPrivate::FLabelAndTooltip,int> @ 149ee5540

void __cdecl
DestructItems<PCGInputOutputPrivate::FLabelAndTooltip,int>(FLabelAndTooltip *param_1,int param_2)

{
  ITextData *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = (param_1->Tooltip).TextData.Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    param_1 = (FLabelAndTooltip *)(&param_1->Tooltip + 1);
  }
  return;
}

// DestructItems<TSharedPtr<FComputeGraphInstance,1>,int> @ 149ee5580

void __cdecl
DestructItems<TSharedPtr<FComputeGraphInstance,1>,int>
          (TSharedPtr<FComputeGraphInstance,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DuplicateObject<UPCGSettings> @ 149ee55c0

UPCGSettings * __cdecl
DuplicateObject<UPCGSettings>(UPCGSettings *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UPCGSettings *pUVar2;
  
  pUVar1 = Z_Construct_UClass_UPCGSettings_NoRegister();
  pUVar2 = (UPCGSettings *)DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pUVar2;
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGGraphInputOutputSettings>'::__l2::<lambda_1>_> @ 149ee6b30

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGraphInputOutputSettings>_::__l2::<lambda_1>_>
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 *pFVar3;
  FObjectPtr_u_0 *pFVar4;
  FObjectPtr_u_0 local_res8;
  
  pFVar3 = (FObjectPtr_u_0 *)(this->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)this->ArrayNum * 0xf;
  do {
    if (pFVar3 == pFVar4) {
      return (FPCGTaggedData *)0x0;
    }
    local_res8 = (FObjectPtr_u_0)pFVar3->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149ee6b73:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGGraphInputOutputSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149ee6b73;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGSettingsInterface>'::__l2::<lambda_1>_> @ 149ee6bc0

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSettingsInterface>_::__l2::<lambda_1>_>
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 *pFVar3;
  FObjectPtr_u_0 *pFVar4;
  FObjectPtr_u_0 local_res8;
  
  pFVar3 = (FObjectPtr_u_0 *)(this->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)this->ArrayNum * 0xf;
  do {
    if (pFVar3 == pFVar4) {
      return (FPCGTaggedData *)0x0;
    }
    local_res8 = (FObjectPtr_u_0)pFVar3->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149ee6c03:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = Z_Construct_UClass_UPCGSettingsInterface_NoRegister();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149ee6c03;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGContext::IsValueOverriden'::__l2::<lambda_1>_> @ 149ee6c50

FPCGSettingsOverridableParam ** __thiscall
TArray<FPCGSettingsOverridableParam_const_*,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGContext::IsValueOverriden_::__l2::<lambda_1>_>
          (TArray<FPCGSettingsOverridableParam_const_*,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPCGSettingsOverridableParam *pFVar3;
  code *pcVar4;
  bool bVar5;
  FPCGSettingsOverridableParam **ppFVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar7 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar7 + (longlong)this->ArrayNum * 8;
  do {
    if (pFVar7 == pFVar1) {
      return (FPCGSettingsOverridableParam **)0x0;
    }
    pFVar3 = *(FPCGSettingsOverridableParam **)pFVar7;
    if ((pFVar3 != (FPCGSettingsOverridableParam *)0x0) &&
       (iVar2 = (pFVar3->PropertiesNames).ArrayNum, iVar2 != 0)) {
      if ((iVar2 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        ppFVar6 = (FPCGSettingsOverridableParam **)(*pcVar4)();
        return ppFVar6;
      }
      if (*(FName *)(pFVar3->PropertiesNames).AllocatorInstance.Data == param_1.PropertyName) {
        return (FPCGSettingsOverridableParam **)pFVar7;
      }
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// ForEachComponent_Internal<UActorComponent,1,1,`UPCGComponent::PurgeUnlinkedResources'::__l2::<lambda_1>_> @ 149ee6e90

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

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,1,1,_UPCGComponent::PurgeUnlinkedResources_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UActorComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.ActorComponentList = param_2.ActorComponentList;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_149ee6fb3;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_149ee6fb3:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_149ee704d;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_149ee704d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_149ee7150;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_149ee7150:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.ActorComponentList = local_res18.ActorComponentList;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UActorComponent,1,1,_UPCGComponent::PurgeUnlinkedResources_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UActorComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UActorComponent *)0x0) {
      `UPCGComponent::PurgeUnlinkedResources'::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8[3]._padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UActorComponent,0,1,`UPCGComponent::PurgeUnlinkedResources'::__l2::<lambda_1>_> @ 149ee73c0

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

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,0,1,_UPCGComponent::PurgeUnlinkedResources_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UActorComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.ActorComponentList = param_2.ActorComponentList;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_149ee74b3;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_149ee74b3:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_149ee7560;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_149ee7560:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_149ee7670;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_149ee7670:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.ActorComponentList = local_res18.ActorComponentList;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UActorComponent,0,1,_UPCGComponent::PurgeUnlinkedResources_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UActorComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UActorComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `UPCGComponent::PurgeUnlinkedResources'::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8[3]._padding_, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UPCGComponent,1,1,`UPCGComponent::PurgeUnlinkedResources'::__l2::<lambda_2>_> @ 149ee7900

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

void __thiscall
AActor::
ForEachComponent_Internal<UPCGComponent,1,1,_UPCGComponent::PurgeUnlinkedResources_::__l2::<lambda_2>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_2> *param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UPCGComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_2> *this_01;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  int iVar15;
  ForElementType<AActor_*> FVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 auStack_218 [32];
  TObjectPtr<UPCGGraphInstance>_u_0 *local_1f8;
  ForElementType<AActor_*> local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  TObjectPtr<UPCGGraphInstance>_u_0 local_1c0;
  <lambda_2> *local_1b8;
  int local_1b0;
  int local_1ac;
  UObject *local_1a8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1a0;
  int iStack_198;
  uint uStack_194;
  undefined1 *local_190;
  undefined4 uStack_188;
  int iStack_184;
  int local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  <lambda_2> local_138 [2];
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_218;
  lVar14 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar14 == 0) {
    return;
  }
  local_1b8 = param_2;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar14 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar12->_padding_)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  pUVar12 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar12 != pUVar13) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar13 = UPCGComponent::StaticClass();
  if (pUVar13 != (UClass *)0x0) {
    iVar5 = (int)pUVar13->_padding_;
    if (((int)pUVar12->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar13->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_149ee7a24;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar11) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_149ee7a24:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_198 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_194 = 1;
  local_180 = 0;
  iStack_184 = iStack_198;
  if (iVar5 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar18 = *puVar20;
    iStack_198 = 0;
    local_180 = 0;
    while (uVar18 == 0) {
      iStack_198 = iStack_198 + 1;
      local_180 = local_180 + 0x20;
      iStack_184 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_198) goto LAB_149ee7abd;
      uVar18 = puVar20[iStack_198];
    }
    uStack_194 = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_194 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1b0 = (int)lVar14;
    iStack_184 = local_1b0 + -1 + local_180;
    if (iVar5 < iStack_184) {
      iStack_184 = iVar5;
    }
  }
LAB_149ee7abd:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_178 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_188 = 0xffffffff;
  TStack_168._padding_ = CONCAT44(uStack_194,iStack_198);
  TStack_168.CurrentBitIndex = iStack_184;
  TStack_168.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_168._28_4_ = local_10c;
  TStack_168.BaseBitIndex = local_180;
  uStack_148 = CONCAT44(uStack_174,iStack_178);
  local_1a0 = pTVar2;
  local_190 = puVar1;
  local_170 = pTVar2;
  TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this_01 = local_1b8;
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      iVar15 = iVar15 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar15) goto LAB_149ee7bd0;
      uVar18 = *(uint *)(puVar19 + (longlong)iVar15 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1ac = (int)lVar14;
    uVar18 = local_1ac + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_149ee7bd0:
  do {
    pTVar10 = local_170;
    if (*(int *)&(local_170->Elements).field_0x8 - *(int *)&(local_170->Elements).field_0x34 !=
        (int)uStack_148) {
      local_1c8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1c8);
    }
    iVar5 = local_40;
    if (((TStack_168.CurrentBitIndex == uVar18) &&
        (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar2)
       ) {
      FVar16 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1c7);
        }
        if (FVar16 == FVar3) break;
        local_1a8 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1a8);
        }
        local_138[0].ActorComponentList = local_1b8->ActorComponentList;
        local_138[0].ActorsToDelete = local_1b8->ActorsToDelete;
        ForEachComponent_Internal<UPCGComponent,1,1,_UPCGComponent::PurgeUnlinkedResources_::__l2::<lambda_2>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_1a8,local_138);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPCGComponent **)
              (*(longlong *)&pTVar10->Elements + (longlong)TStack_168.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPCGComponent *)0x0) {
      `UPCGComponent::PurgeUnlinkedResources'::__l2::<lambda_2>::operator()(this_01,pUVar8);
      pUVar12 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar12->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar12->_padding_)) &&
         (local_1c0 = (TObjectPtr<UPCGGraphInstance>_u_0)(pUVar8->GraphInstance).field0_0x0.DebugPtr
         , local_1c0.DebugPtr != (UPCGGraphInstance *)0x0)) {
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar16 <= &local_1c0) {
          FVar16 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_108.SecondaryData;
          }
          if (&local_1c0 <
              (TObjectPtr<UPCGGraphInstance>_u_0 *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_1e0 = (longlong)local_40;
            local_1d8 = 8;
            local_1f8 = &local_1c0;
            local_1f0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1f0 = local_108.SecondaryData;
            }
            local_1e8 = (longlong)local_3c;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar14 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        ((TObjectPtr<UPCGGraphInstance>_u_0 *)((longlong)FVar16 + lVar14 * 8))->DebugPtr =
             (UPCGGraphInstance *)local_1c0;
      }
    }
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  } while( true );
}

// ForEachComponent_Internal<UPCGComponent,0,1,`UPCGComponent::PurgeUnlinkedResources'::__l2::<lambda_2>_> @ 149ee7e40

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

void __thiscall
AActor::
ForEachComponent_Internal<UPCGComponent,0,1,_UPCGComponent::PurgeUnlinkedResources_::__l2::<lambda_2>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_2> *param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UPCGComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  TObjectPtr<UClass>_u_0 TVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  ForElementType<AActor_*> FVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 auStack_218 [32];
  TObjectPtr<UPCGGraphInstance>_u_0 *local_1f8;
  ForElementType<AActor_*> local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  TObjectPtr<UPCGGraphInstance>_u_0 local_1c0;
  int local_1b8;
  int local_1b4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1b0;
  TObjectPtr<UClass>_u_0 local_1a8;
  UObject *local_1a0;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  <lambda_2> local_138 [2];
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_218;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_1a8 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = UPCGComponent::StaticClass();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_149ee7f2f;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_149ee7f2f:
  local_3c = 0x18;
  local_1b0 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_190 = 0;
  local_40 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_18c = 1;
  local_178 = 0;
  iStack_17c = iStack_190;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    iStack_190 = 0;
    local_178 = 0;
    while (uVar17 == 0) {
      iStack_190 = iStack_190 + 1;
      local_178 = local_178 + 0x20;
      iStack_17c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_190) goto LAB_149ee7fd3;
      uVar17 = puVar20[iStack_190];
    }
    uStack_18c = ~(uVar17 - 1) & uVar17;
    uVar3 = (ulonglong)uStack_18c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1b8 = (int)lVar15;
    iStack_17c = local_1b8 + -1 + local_178;
    if (iVar4 < iStack_17c) {
      iStack_17c = iVar4;
    }
  }
LAB_149ee7fd3:
  uStack_174 = local_10c;
  iStack_170 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar17 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_180 = 0xffffffff;
  TStack_160._padding_ = CONCAT44(uStack_18c,iStack_190);
  uVar21 = uVar17 & 0xffffffe0;
  TStack_160.CurrentBitIndex = iStack_17c;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_160._28_4_ = local_10c;
  TStack_160.BaseBitIndex = local_178;
  uStack_140 = CONCAT44(uStack_16c,iStack_170);
  local_198 = local_1b0;
  local_188 = puVar1;
  local_168 = local_1b0;
  TStack_160.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar10 = local_1b0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar17 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      iVar18 = iVar18 + 1;
      uVar21 = uVar21 + 0x20;
      uVar17 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar18) goto LAB_149ee80e0;
      uVar17 = *(uint *)(puVar19 + (longlong)iVar18 * 4);
    }
    uVar3 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1b4 = (int)lVar15;
    uVar17 = local_1b4 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_149ee80e0:
  do {
    pTVar12 = local_168;
    if (*(int *)&(local_168->Elements).field_0x8 - *(int *)&(local_168->Elements).field_0x34 !=
        (int)uStack_140) {
      local_1c8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1c8);
    }
    iVar4 = local_40;
    TVar11 = local_1a8;
    if (((TStack_160.CurrentBitIndex == uVar17) &&
        (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar10)) {
      FVar16 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_108.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1c7);
        }
        if (FVar16 == FVar2) break;
        local_1a0 = (UObject *)(TVar11.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1a0);
        }
        local_138[0].ActorComponentList = param_2->ActorComponentList;
        local_138[0].ActorsToDelete = param_2->ActorsToDelete;
        ForEachComponent_Internal<UPCGComponent,0,1,_UPCGComponent::PurgeUnlinkedResources_::__l2::<lambda_2>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_1a0,local_138);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPCGComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_160.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPCGComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `UPCGComponent::PurgeUnlinkedResources'::__l2::<lambda_2>::operator()(param_2,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) &&
         (local_1c0 = (TObjectPtr<UPCGGraphInstance>_u_0)(pUVar8->GraphInstance).field0_0x0.DebugPtr
         , local_1c0.DebugPtr != (UPCGGraphInstance *)0x0)) {
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar16 <= &local_1c0) {
          FVar16 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_108.SecondaryData;
          }
          if (&local_1c0 <
              (TObjectPtr<UPCGGraphInstance>_u_0 *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_1e0 = (longlong)local_40;
            local_1d8 = 8;
            local_1f8 = &local_1c0;
            local_1f0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1f0 = local_108.SecondaryData;
            }
            local_1e8 = (longlong)local_3c;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        ((TObjectPtr<UPCGGraphInstance>_u_0 *)((longlong)FVar16 + lVar15 * 8))->DebugPtr =
             (UPCGGraphInstance *)local_1c0;
      }
    }
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  } while( true );
}

// GetInputSettings<UPCGGraphInputOutputSettings> @ 149ee8360

UPCGGraphInputOutputSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGGraphInputOutputSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGGraphInputOutputSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGraphInputOutputSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGGraphInputOutputSettings *)local_res8.Handle == (UPCGGraphInputOutputSettings *)0x0
           ) {
          return (UPCGGraphInputOutputSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGGraphInputOutputSettings *)local_res8.Handle != (UPCGGraphInputOutputSettings *)0x0)
      {
        pUVar5 = UPCGGraphInputOutputSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGGraphInputOutputSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGGraphInputOutputSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGGraphInputOutputSettings *)0x0) {
      pUVar5 = UPCGGraphInputOutputSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGGraphInputOutputSettings *)0x0;
}

// GetOverrideParamValue<int> @ 149ee84c0

bool __cdecl
PCGAttributeAccessorHelpers::GetOverrideParamValue<int>(IPCGAttributeAccessor *param_1,int *param_2)

{
  bool bVar1;
  TArrayView<int,int> local_48;
  FPCGAttributeAccessorKeysEntries local_38;
  
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,0);
  local_48.ArrayNum = 1;
  local_48.DataPtr = param_2;
  bVar1 = IPCGAttributeAccessor::GetRange<int>
                    (param_1,&local_48,0,(IPCGAttributeAccessorKeys *)&local_38,
                     AllowBroadcastAndConstructible);
  if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetOverrideParamValue<float> @ 149ee8540

bool __cdecl
PCGAttributeAccessorHelpers::GetOverrideParamValue<float>
          (IPCGAttributeAccessor *param_1,float *param_2)

{
  bool bVar1;
  TArrayView<float,int> local_48;
  FPCGAttributeAccessorKeysEntries local_38;
  
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,0);
  local_48.ArrayNum = 1;
  local_48.DataPtr = param_2;
  bVar1 = IPCGAttributeAccessor::GetRange<float>
                    (param_1,&local_48,0,(IPCGAttributeAccessorKeys *)&local_38,
                     AllowBroadcastAndConstructible);
  if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetOverrideParamValue<double> @ 149ee85c0

bool __cdecl
PCGAttributeAccessorHelpers::GetOverrideParamValue<double>
          (IPCGAttributeAccessor *param_1,double *param_2)

{
  bool bVar1;
  TArrayView<double,int> local_48;
  FPCGAttributeAccessorKeysEntries local_38;
  
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,0);
  local_48.ArrayNum = 1;
  local_48.DataPtr = param_2;
  bVar1 = IPCGAttributeAccessor::GetRange<double>
                    (param_1,&local_48,0,(IPCGAttributeAccessorKeys *)&local_38,
                     AllowBroadcastAndConstructible);
  if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetOverrideParamValue<UE::Math::TQuat<double>_> @ 149ee8640

bool __cdecl
PCGAttributeAccessorHelpers::GetOverrideParamValue<UE::Math::TQuat<double>_>
          (IPCGAttributeAccessor *param_1,TQuat<double> *param_2)

{
  bool bVar1;
  TArrayView<UE::Math::TQuat<double>,int> local_48;
  FPCGAttributeAccessorKeysEntries local_38;
  
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,0);
  local_48.ArrayNum = 1;
  local_48.DataPtr = param_2;
  bVar1 = IPCGAttributeAccessor::GetRange<UE::Math::TQuat<double>_>
                    (param_1,&local_48,0,(IPCGAttributeAccessorKeys *)&local_38,
                     AllowBroadcastAndConstructible);
  if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetOverrideParamValue<UE::Math::TRotator<double>_> @ 149ee86c0

bool __cdecl
PCGAttributeAccessorHelpers::GetOverrideParamValue<UE::Math::TRotator<double>_>
          (IPCGAttributeAccessor *param_1,TRotator<double> *param_2)

{
  bool bVar1;
  TArrayView<UE::Math::TRotator<double>,int> local_48;
  FPCGAttributeAccessorKeysEntries local_38;
  
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,0);
  local_48.ArrayNum = 1;
  local_48.DataPtr = param_2;
  bVar1 = IPCGAttributeAccessor::GetRange<UE::Math::TRotator<double>_>
                    (param_1,&local_48,0,(IPCGAttributeAccessorKeys *)&local_38,
                     AllowBroadcastAndConstructible);
  if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetOverrideParamValue<UE::Math::TTransform<double>_> @ 149ee8740

bool __cdecl
PCGAttributeAccessorHelpers::GetOverrideParamValue<UE::Math::TTransform<double>_>
          (IPCGAttributeAccessor *param_1,TTransform<double> *param_2)

{
  bool bVar1;
  TArrayView<UE::Math::TTransform<double>,int> local_48;
  FPCGAttributeAccessorKeysEntries local_38;
  
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,0);
  local_48.ArrayNum = 1;
  local_48.DataPtr = param_2;
  bVar1 = IPCGAttributeAccessor::GetRange<UE::Math::TTransform<double>_>
                    (param_1,&local_48,0,(IPCGAttributeAccessorKeys *)&local_38,
                     AllowBroadcastAndConstructible);
  if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetOverrideParamValue<UE::Math::TVector2<double>_> @ 149ee87c0

bool __cdecl
PCGAttributeAccessorHelpers::GetOverrideParamValue<UE::Math::TVector2<double>_>
          (IPCGAttributeAccessor *param_1,TVector2<double> *param_2)

{
  bool bVar1;
  TArrayView<UE::Math::TVector2<double>,int> local_48;
  FPCGAttributeAccessorKeysEntries local_38;
  
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,0);
  local_48.ArrayNum = 1;
  local_48.DataPtr = param_2;
  bVar1 = IPCGAttributeAccessor::GetRange<UE::Math::TVector2<double>_>
                    (param_1,&local_48,0,(IPCGAttributeAccessorKeys *)&local_38,
                     AllowBroadcastAndConstructible);
  if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetOverrideParamValue<UE::Math::TVector4<double>_> @ 149ee8840

bool __cdecl
PCGAttributeAccessorHelpers::GetOverrideParamValue<UE::Math::TVector4<double>_>
          (IPCGAttributeAccessor *param_1,TVector4<double> *param_2)

{
  bool bVar1;
  TArrayView<UE::Math::TVector4<double>,int> local_48;
  FPCGAttributeAccessorKeysEntries local_38;
  
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,0);
  local_48.ArrayNum = 1;
  local_48.DataPtr = param_2;
  bVar1 = IPCGAttributeAccessor::GetRange<UE::Math::TVector4<double>_>
                    (param_1,&local_48,0,(IPCGAttributeAccessorKeys *)&local_38,
                     AllowBroadcastAndConstructible);
  if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetOverrideParamValue<UE::Math::TVector<double>_> @ 149ee88c0

bool __cdecl
PCGAttributeAccessorHelpers::GetOverrideParamValue<UE::Math::TVector<double>_>
          (IPCGAttributeAccessor *param_1,TVector<double> *param_2)

{
  bool bVar1;
  TArrayView<UE::Math::TVector<double>,int> local_48;
  FPCGAttributeAccessorKeysEntries local_38;
  
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,0);
  local_48.ArrayNum = 1;
  local_48.DataPtr = param_2;
  bVar1 = IPCGAttributeAccessor::GetRange<UE::Math::TVector<double>_>
                    (param_1,&local_48,0,(IPCGAttributeAccessorKeys *)&local_38,
                     AllowBroadcastAndConstructible);
  if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetOverrideParamValue<FSoftClassPath> @ 149ee8940

bool __cdecl
PCGAttributeAccessorHelpers::GetOverrideParamValue<FSoftClassPath>
          (IPCGAttributeAccessor *param_1,FSoftClassPath *param_2)

{
  bool bVar1;
  TArrayView<FSoftClassPath,int> local_48;
  FPCGAttributeAccessorKeysEntries local_38;
  
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,0);
  local_48.ArrayNum = 1;
  local_48.DataPtr = param_2;
  bVar1 = IPCGAttributeAccessor::GetRange<FSoftClassPath>
                    (param_1,&local_48,0,(IPCGAttributeAccessorKeys *)&local_38,
                     AllowBroadcastAndConstructible);
  if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetOverrideParamValue<FSoftObjectPath> @ 149ee89c0

bool __cdecl
PCGAttributeAccessorHelpers::GetOverrideParamValue<FSoftObjectPath>
          (IPCGAttributeAccessor *param_1,FSoftObjectPath *param_2)

{
  bool bVar1;
  TArrayView<FSoftObjectPath,int> local_48;
  FPCGAttributeAccessorKeysEntries local_38;
  
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,0);
  local_48.ArrayNum = 1;
  local_48.DataPtr = param_2;
  bVar1 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                    (param_1,&local_48,0,(IPCGAttributeAccessorKeys *)&local_38,
                     AllowBroadcastAndConstructible);
  if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetOverrideParamValue<FName> @ 149ee8a40

bool __cdecl
PCGAttributeAccessorHelpers::GetOverrideParamValue<FName>
          (IPCGAttributeAccessor *param_1,FName *param_2)

{
  bool bVar1;
  TArrayView<FName,int> local_48;
  FPCGAttributeAccessorKeysEntries local_38;
  
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,0);
  local_48.ArrayNum = 1;
  local_48.DataPtr = param_2;
  bVar1 = IPCGAttributeAccessor::GetRange<FName>
                    (param_1,&local_48,0,(IPCGAttributeAccessorKeys *)&local_38,
                     AllowBroadcastAndConstructible);
  if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetOverrideParamValue<FString> @ 149ee8ac0

bool __cdecl
PCGAttributeAccessorHelpers::GetOverrideParamValue<FString>
          (IPCGAttributeAccessor *param_1,FString *param_2)

{
  bool bVar1;
  TArrayView<FString,int> local_48;
  FPCGAttributeAccessorKeysEntries local_38;
  
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,0);
  local_48.ArrayNum = 1;
  local_48.DataPtr = param_2;
  bVar1 = IPCGAttributeAccessor::GetRange<FString>
                    (param_1,&local_48,0,(IPCGAttributeAccessorKeys *)&local_38,
                     AllowBroadcastAndConstructible);
  if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetOverrideParamValue<__int64> @ 149ee8b40

bool __cdecl
PCGAttributeAccessorHelpers::GetOverrideParamValue<__int64>
          (IPCGAttributeAccessor *param_1,long64 *param_2)

{
  bool bVar1;
  TArrayView<__int64,int> local_48;
  FPCGAttributeAccessorKeysEntries local_38;
  
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,0);
  local_48.ArrayNum = 1;
  local_48.DataPtr = param_2;
  bVar1 = IPCGAttributeAccessor::GetRange<__int64>
                    (param_1,&local_48,0,(IPCGAttributeAccessorKeys *)&local_38,
                     AllowBroadcastAndConstructible);
  if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetOverrideParamValue<bool> @ 149ee8bc0

bool __cdecl
PCGAttributeAccessorHelpers::GetOverrideParamValue<bool>
          (IPCGAttributeAccessor *param_1,bool *param_2)

{
  bool bVar1;
  TArrayView<bool,int> local_48;
  FPCGAttributeAccessorKeysEntries local_38;
  
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,0);
  local_48.ArrayNum = 1;
  local_48.DataPtr = param_2;
  bVar1 = IPCGAttributeAccessor::GetRange<bool>
                    (param_1,&local_48,0,(IPCGAttributeAccessorKeys *)&local_38,
                     AllowBroadcastAndConstructible);
  if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetTypeName<UPCGSpatialData_const_> @ 149ee8e30

FString * __cdecl GetTypeName<UPCGSpatialData_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<IPCGGraphExecutionSource> @ 149ee8e70

FString * __cdecl GetTypeName<IPCGGraphExecutionSource>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGGraphExecutionSource_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGDefaultExecutionSource> @ 149ee8eb0

FString * __cdecl GetTypeName<UPCGDefaultExecutionSource>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGDefaultExecutionSource::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGManagedResource> @ 149ee8ef0

FString * __cdecl GetTypeName<UPCGManagedResource>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGManagedResource_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetValid<UPCGManagedResource> @ 149ee8f30

UPCGManagedResource * __cdecl
GetValid<UPCGManagedResource>(TObjectPtr<UPCGManagedResource> *param_1)

{
  UPCGManagedResource *pUVar1;
  bool bVar2;
  UPCGManagedResource *pUVar3;
  
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  if ((pUVar1 == (UPCGManagedResource *)0x0) ||
     (bVar2 = true, ((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) {
    bVar2 = false;
  }
  pUVar3 = (UPCGManagedResource *)0x0;
  if (bVar2) {
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// HeapSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,`UPCGGraph::CalculateNodeGridSizesRecursiveNoLock'::__l2::<lambda_1>_>_> @ 149ee8f60

void __cdecl
AlgoImpl::
HeapSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_UPCGGraph::CalculateNodeGridSizesRecursiveNoLock_::__l2::<lambda_1>_>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_int,_protected:_class_TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>___cdecl_UPCGGraph::CalculateNodeGridSizesRecursiveNoLock(UPCGNode_const_*,unsigned_int)const_::_2_::<lambda_1>_>
          param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar8 = iVar5;
  iVar6 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_149ee903e:
      if (iVar6 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            uVar1 = *param_1;
            iVar8 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = uVar1;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar6 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[iVar6] < param_1[(longlong)iVar4 + 2]) {
                    iVar6 = iVar4;
                  }
                  iVar6 = iVar6 + 1;
                }
                uVar1 = param_1[iVar8];
                if (uVar1 <= param_1[iVar6]) break;
                param_1[iVar8] = param_1[iVar6];
                param_1[iVar6] = uVar1;
                iVar8 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar6 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar6 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[iVar7] < param_1[(longlong)iVar5 + 2]) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    uVar1 = param_1[iVar4];
    if (uVar1 <= param_1[iVar7]) goto LAB_149ee903e;
    param_1[iVar4] = param_1[iVar7];
    iVar5 = iVar7 * 2 + 1;
    param_1[iVar7] = uVar1;
    iVar4 = iVar7;
  } while( true );
}

// HeapSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,`UPCGGraph::CacheGridSizesInternalNoLock'::__l10::<lambda_1>_>_> @ 149ee90f0

void __cdecl
AlgoImpl::
HeapSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_UPCGGraph::CacheGridSizesInternalNoLock_::__l10::<lambda_1>_>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_int,_protected:_void___cdecl_UPCGGraph::CacheGridSizesInternalNoLock(void)const_::_10_::<lambda_1>_>
          param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar8 = iVar5;
  iVar6 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_149ee91ce:
      if (iVar6 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            uVar1 = *param_1;
            iVar8 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = uVar1;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar6 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[iVar6] < param_1[(longlong)iVar4 + 2]) {
                    iVar6 = iVar4;
                  }
                  iVar6 = iVar6 + 1;
                }
                uVar1 = param_1[iVar8];
                if (uVar1 <= param_1[iVar6]) break;
                param_1[iVar8] = param_1[iVar6];
                param_1[iVar6] = uVar1;
                iVar8 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar6 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar6 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[iVar7] < param_1[(longlong)iVar5 + 2]) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    uVar1 = param_1[iVar4];
    if (uVar1 <= param_1[iVar7]) goto LAB_149ee91ce;
    param_1[iVar4] = param_1[iVar7];
    iVar5 = iVar7 * 2 + 1;
    param_1[iVar7] = uVar1;
    iVar4 = iVar7;
  } while( true );
}

// HeapSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,`UPCGGraph::GetParentGridSizes'::__l11::<lambda_1>_>_> @ 149ee9280

void __cdecl
AlgoImpl::
HeapSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_UPCGGraph::GetParentGridSizes_::__l11::<lambda_1>_>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_int,_public:_void___cdecl_UPCGGraph::GetParentGridSizes(unsigned_int,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_&)const_::_11_::<lambda_1>_>
          param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar8 = iVar5;
  iVar6 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_149ee935e:
      if (iVar6 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            uVar1 = *param_1;
            iVar8 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = uVar1;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar6 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[iVar6] < param_1[(longlong)iVar4 + 2]) {
                    iVar6 = iVar4;
                  }
                  iVar6 = iVar6 + 1;
                }
                uVar1 = param_1[iVar8];
                if (uVar1 <= param_1[iVar6]) break;
                param_1[iVar8] = param_1[iVar6];
                param_1[iVar6] = uVar1;
                iVar8 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar6 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar6 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[iVar7] < param_1[(longlong)iVar5 + 2]) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    uVar1 = param_1[iVar4];
    if (uVar1 <= param_1[iVar7]) goto LAB_149ee935e;
    param_1[iVar4] = param_1[iVar7];
    iVar5 = iVar7 * 2 + 1;
    param_1[iVar7] = uVar1;
    iVar4 = iVar7;
  } while( true );
}

// HeapSortInternal<FPCGTaggedData,int,FIdentityFunctor,TDereferenceWrapper<FPCGTaggedData,`IPCGElement::PreExecutePrimaryLoopElement'::__l22::<lambda_1>_>_> @ 149ee9410

void __cdecl
AlgoImpl::
HeapSortInternal<FPCGTaggedData,int,FIdentityFunctor,TDereferenceWrapper<FPCGTaggedData,_IPCGElement::PreExecutePrimaryLoopElement_::__l22::<lambda_1>_>_>
          (FPCGTaggedData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FPCGTaggedData,_protected:_virtual_void___cdecl_IPCGElement::PreExecutePrimaryLoopElement(FPCGContext_*,UPCGSettings_const_*)const_::_22_::<lambda_1>_>
          param_4)

{
  undefined1 *puVar1;
  ForElementType<FSetElementId> *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  FWeakObjectPtr FVar6;
  TObjectPtr<UPCGData_const_>_u_0 TVar7;
  FWeakObjectPtr FVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ForElementType<FSetElementId> FVar17;
  undefined8 uVar18;
  FName FVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uchar uVar22;
  uchar uVar23;
  uchar uVar24;
  uchar uVar25;
  undefined4 uVar26;
  bool bVar27;
  undefined2 uVar28;
  uchar uVar29;
  uchar uVar30;
  uchar uVar31;
  uchar uVar32;
  undefined4 uVar33;
  bool bVar34;
  bool bVar35;
  undefined2 uVar36;
  bool bVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  longlong lVar41;
  FPCGTaggedData *pFVar42;
  FPCGTaggedData *pFVar43;
  int iVar44;
  int iVar45;
  
  if (param_2 < 0) {
    bVar37 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar37) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar37 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar37) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar38 = (param_2 + -2) / 2;
  iVar39 = iVar38 * 2 + 1;
  iVar5 = iVar39;
  iVar44 = iVar38;
  do {
    while (param_2 <= iVar39) {
LAB_149ee95c1:
      if (iVar44 == 0) {
        iVar39 = param_2 + -1;
        lVar41 = (longlong)iVar39;
        if (0 < iVar39) {
          pFVar42 = param_1 + lVar41;
          do {
            FVar6 = (pFVar42->Data).WeakData.WeakPtr;
            iVar45 = 0;
            uVar3 = *(undefined8 *)&(param_1->OriginatingNode).WeakPtr.ObjectSerialNumber;
            TVar7 = (param_1->Data).Data.field0_0x0;
            FVar8 = (param_1->Data).WeakData.WeakPtr;
            uVar9 = *(undefined8 *)&(param_1->Tags).Elements;
            uVar10 = *(undefined8 *)&(param_1->Tags).Elements.field_0x8;
            uVar11 = *(undefined8 *)&(param_1->Tags).Elements.field_0x10;
            uVar12 = *(undefined8 *)&(param_1->Tags).Elements.field_0x18;
            uVar13 = *(undefined8 *)&(param_1->Tags).Elements.field_0x20;
            uVar14 = *(undefined8 *)&(param_1->Tags).Elements.field_0x28;
            uVar15 = *(undefined8 *)&(param_1->Tags).Elements.field_0x30;
            uVar29 = (param_1->Tags).Hash.InlineData[0];
            uVar30 = (param_1->Tags).Hash.InlineData[1];
            uVar31 = (param_1->Tags).Hash.InlineData[2];
            uVar32 = (param_1->Tags).Hash.InlineData[3];
            iVar38 = (param_1->Tags).Hash._padding_;
            FVar17 = (param_1->Tags).Hash.SecondaryData;
            iVar44 = (param_1->Tags).HashSize;
            uVar33 = *(undefined4 *)&(param_1->Tags).field_0x4c;
            FVar19 = param_1->Pin;
            bVar34 = param_1->bPinlessData;
            bVar35 = param_1->bIsUsedMultipleTimes;
            uVar36 = *(undefined2 *)&param_1->field_0x6a;
            iVar40 = (param_1->OriginatingNode).WeakPtr.ObjectIndex;
            (param_1->Data).Data.field0_0x0 = (pFVar42->Data).Data.field0_0x0;
            (param_1->Data).WeakData.WeakPtr = FVar6;
            uVar16 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x8;
            *(undefined8 *)&(param_1->Tags).Elements = *(undefined8 *)&(pFVar42->Tags).Elements;
            *(undefined8 *)&(param_1->Tags).Elements.field_0x8 = uVar16;
            uVar16 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x18;
            *(undefined8 *)&(param_1->Tags).Elements.field_0x10 =
                 *(undefined8 *)&(pFVar42->Tags).Elements.field_0x10;
            *(undefined8 *)&(param_1->Tags).Elements.field_0x18 = uVar16;
            uVar16 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x28;
            *(undefined8 *)&(param_1->Tags).Elements.field_0x20 =
                 *(undefined8 *)&(pFVar42->Tags).Elements.field_0x20;
            *(undefined8 *)&(param_1->Tags).Elements.field_0x28 = uVar16;
            uVar22 = (pFVar42->Tags).Hash.InlineData[0];
            uVar23 = (pFVar42->Tags).Hash.InlineData[1];
            uVar24 = (pFVar42->Tags).Hash.InlineData[2];
            uVar25 = (pFVar42->Tags).Hash.InlineData[3];
            iVar5 = (pFVar42->Tags).Hash._padding_;
            *(undefined8 *)&(param_1->Tags).Elements.field_0x30 =
                 *(undefined8 *)&(pFVar42->Tags).Elements.field_0x30;
            (param_1->Tags).Hash.InlineData[0] = uVar22;
            (param_1->Tags).Hash.InlineData[1] = uVar23;
            (param_1->Tags).Hash.InlineData[2] = uVar24;
            (param_1->Tags).Hash.InlineData[3] = uVar25;
            (param_1->Tags).Hash._padding_ = iVar5;
            iVar5 = (pFVar42->Tags).HashSize;
            uVar26 = *(undefined4 *)&(pFVar42->Tags).field_0x4c;
            (param_1->Tags).Hash.SecondaryData = (pFVar42->Tags).Hash.SecondaryData;
            (param_1->Tags).HashSize = iVar5;
            *(undefined4 *)&(param_1->Tags).field_0x4c = uVar26;
            bVar37 = pFVar42->bPinlessData;
            bVar27 = pFVar42->bIsUsedMultipleTimes;
            uVar28 = *(undefined2 *)&pFVar42->field_0x6a;
            iVar5 = (pFVar42->OriginatingNode).WeakPtr.ObjectIndex;
            param_1->Pin = pFVar42->Pin;
            param_1->bPinlessData = bVar37;
            param_1->bIsUsedMultipleTimes = bVar27;
            *(undefined2 *)&param_1->field_0x6a = uVar28;
            (param_1->OriginatingNode).WeakPtr.ObjectIndex = iVar5;
            *(undefined8 *)&(param_1->OriginatingNode).WeakPtr.ObjectSerialNumber =
                 *(undefined8 *)&(pFVar42->OriginatingNode).WeakPtr.ObjectSerialNumber;
            (pFVar42->Data).Data.field0_0x0 = TVar7;
            (pFVar42->Data).WeakData.WeakPtr = FVar8;
            *(undefined8 *)&(pFVar42->Tags).Elements = uVar9;
            *(undefined8 *)&(pFVar42->Tags).Elements.field_0x8 = uVar10;
            *(undefined8 *)&(pFVar42->Tags).Elements.field_0x10 = uVar11;
            *(undefined8 *)&(pFVar42->Tags).Elements.field_0x18 = uVar12;
            *(undefined8 *)&(pFVar42->Tags).Elements.field_0x20 = uVar13;
            *(undefined8 *)&(pFVar42->Tags).Elements.field_0x28 = uVar14;
            *(undefined8 *)&(pFVar42->Tags).Elements.field_0x30 = uVar15;
            (pFVar42->Tags).Hash.InlineData[0] = uVar29;
            (pFVar42->Tags).Hash.InlineData[1] = uVar30;
            (pFVar42->Tags).Hash.InlineData[2] = uVar31;
            (pFVar42->Tags).Hash.InlineData[3] = uVar32;
            (pFVar42->Tags).Hash._padding_ = iVar38;
            (pFVar42->Tags).Hash.SecondaryData = FVar17;
            (pFVar42->Tags).HashSize = iVar44;
            *(undefined4 *)&(pFVar42->Tags).field_0x4c = uVar33;
            pFVar42->Pin = FVar19;
            pFVar42->bPinlessData = bVar34;
            pFVar42->bIsUsedMultipleTimes = bVar35;
            *(undefined2 *)&pFVar42->field_0x6a = uVar36;
            (pFVar42->OriginatingNode).WeakPtr.ObjectIndex = iVar40;
            *(undefined8 *)&(pFVar42->OriginatingNode).WeakPtr.ObjectSerialNumber = uVar3;
            if (1 < iVar39) {
              do {
                iVar5 = iVar45 * 2;
                iVar38 = iVar5 + 1;
                if (iVar5 + 2 < iVar39) {
                  if (param_1[(longlong)iVar5 + 2].OriginalIndex < param_1[iVar38].OriginalIndex) {
                    iVar38 = iVar5;
                  }
                  iVar38 = iVar38 + 1;
                }
                pFVar43 = param_1 + iVar38;
                if (pFVar43->OriginalIndex <= param_1[iVar45].OriginalIndex) break;
                FVar6 = (pFVar43->Data).WeakData.WeakPtr;
                uVar3 = *(undefined8 *)&param_1[iVar45].OriginatingNode.WeakPtr.ObjectSerialNumber;
                TVar7 = param_1[iVar45].Data.Data.field0_0x0;
                FVar8 = param_1[iVar45].Data.WeakData.WeakPtr;
                uVar9 = *(undefined8 *)&param_1[iVar45].Tags.Elements;
                uVar10 = *(undefined8 *)&param_1[iVar45].Tags.Elements.field_0x8;
                puVar1 = &param_1[iVar45].Tags.Elements.field_0x10;
                uVar11 = *(undefined8 *)puVar1;
                uVar12 = *(undefined8 *)(puVar1 + 8);
                puVar1 = &param_1[iVar45].Tags.Elements.field_0x20;
                uVar13 = *(undefined8 *)puVar1;
                uVar14 = *(undefined8 *)(puVar1 + 8);
                puVar1 = &param_1[iVar45].Tags.Elements.field_0x30;
                uVar15 = *(undefined8 *)puVar1;
                uVar16 = *(undefined8 *)(puVar1 + 8);
                pFVar2 = &param_1[iVar45].Tags.Hash.SecondaryData;
                FVar17 = *pFVar2;
                uVar18 = pFVar2[1];
                FVar19 = param_1[iVar45].Pin;
                uVar20 = (&param_1[iVar45].Pin)[1];
                param_1[iVar45].Data.Data.field0_0x0 = (pFVar43->Data).Data.field0_0x0;
                param_1[iVar45].Data.WeakData.WeakPtr = FVar6;
                uVar21 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x8;
                *(undefined8 *)&param_1[iVar45].Tags.Elements =
                     *(undefined8 *)&(pFVar43->Tags).Elements;
                *(undefined8 *)&param_1[iVar45].Tags.Elements.field_0x8 = uVar21;
                uVar21 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x18;
                puVar1 = &param_1[iVar45].Tags.Elements.field_0x10;
                *(undefined8 *)puVar1 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x10;
                *(undefined8 *)(puVar1 + 8) = uVar21;
                uVar21 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x28;
                puVar1 = &param_1[iVar45].Tags.Elements.field_0x20;
                *(undefined8 *)puVar1 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x20;
                *(undefined8 *)(puVar1 + 8) = uVar21;
                uVar21 = *(undefined8 *)&(pFVar43->Tags).Hash;
                puVar1 = &param_1[iVar45].Tags.Elements.field_0x30;
                *(undefined8 *)puVar1 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x30;
                *(undefined8 *)(puVar1 + 8) = uVar21;
                uVar21 = *(undefined8 *)&(pFVar43->Tags).HashSize;
                pFVar2 = &param_1[iVar45].Tags.Hash.SecondaryData;
                *pFVar2 = (pFVar43->Tags).Hash.SecondaryData;
                pFVar2[1] = (ForElementType<FSetElementId>)uVar21;
                uVar21 = *(undefined8 *)&pFVar43->bPinlessData;
                param_1[iVar45].Pin = pFVar43->Pin;
                (&param_1[iVar45].Pin)[1] = (FName)uVar21;
                *(undefined8 *)&param_1[iVar45].OriginatingNode.WeakPtr.ObjectSerialNumber =
                     *(undefined8 *)&(pFVar43->OriginatingNode).WeakPtr.ObjectSerialNumber;
                (pFVar43->Data).Data.field0_0x0 = TVar7;
                (pFVar43->Data).WeakData.WeakPtr = FVar8;
                *(undefined8 *)&(pFVar43->Tags).Elements = uVar9;
                *(undefined8 *)&(pFVar43->Tags).Elements.field_0x8 = uVar10;
                *(undefined8 *)&(pFVar43->Tags).Elements.field_0x10 = uVar11;
                *(undefined8 *)&(pFVar43->Tags).Elements.field_0x18 = uVar12;
                *(undefined8 *)&(pFVar43->Tags).Elements.field_0x20 = uVar13;
                *(undefined8 *)&(pFVar43->Tags).Elements.field_0x28 = uVar14;
                *(undefined8 *)&(pFVar43->Tags).Elements.field_0x30 = uVar15;
                (pFVar43->Tags).Hash.InlineData[0] = (char)uVar16;
                (pFVar43->Tags).Hash.InlineData[1] = (char)((ulonglong)uVar16 >> 8);
                (pFVar43->Tags).Hash.InlineData[2] = (char)((ulonglong)uVar16 >> 0x10);
                (pFVar43->Tags).Hash.InlineData[3] = (char)((ulonglong)uVar16 >> 0x18);
                (pFVar43->Tags).Hash._padding_ = (int)((ulonglong)uVar16 >> 0x20);
                (pFVar43->Tags).Hash.SecondaryData = FVar17;
                *(undefined8 *)&(pFVar43->Tags).HashSize = uVar18;
                pFVar43->Pin = FVar19;
                *(undefined8 *)&pFVar43->bPinlessData = uVar20;
                *(undefined8 *)&(pFVar43->OriginatingNode).WeakPtr.ObjectSerialNumber = uVar3;
                iVar45 = iVar38;
              } while (iVar38 * 2 + 1 < iVar39);
            }
            iVar39 = iVar39 + -1;
            lVar41 = lVar41 + -1;
            pFVar42 = pFVar42 + -1;
          } while (0 < lVar41);
        }
        return;
      }
      iVar38 = iVar44 + -1;
      iVar39 = iVar5 + -2;
      iVar5 = iVar39;
      iVar44 = iVar38;
    }
    iVar39 = iVar38 * 2;
    iVar40 = iVar39 + 1;
    if (iVar39 + 2 < param_2) {
      if (param_1[(longlong)iVar39 + 2].OriginalIndex < param_1[iVar40].OriginalIndex) {
        iVar40 = iVar39;
      }
      iVar40 = iVar40 + 1;
    }
    pFVar42 = param_1 + iVar40;
    if (pFVar42->OriginalIndex <= param_1[iVar38].OriginalIndex) goto LAB_149ee95c1;
    FVar6 = (pFVar42->Data).WeakData.WeakPtr;
    iVar39 = iVar40 * 2 + 1;
    uVar3 = *(undefined8 *)&param_1[iVar38].OriginatingNode.WeakPtr.ObjectSerialNumber;
    TVar7 = param_1[iVar38].Data.Data.field0_0x0;
    FVar8 = param_1[iVar38].Data.WeakData.WeakPtr;
    uVar9 = *(undefined8 *)&param_1[iVar38].Tags.Elements;
    uVar10 = *(undefined8 *)&param_1[iVar38].Tags.Elements.field_0x8;
    puVar1 = &param_1[iVar38].Tags.Elements.field_0x10;
    uVar11 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)(puVar1 + 8);
    puVar1 = &param_1[iVar38].Tags.Elements.field_0x20;
    uVar13 = *(undefined8 *)puVar1;
    uVar14 = *(undefined8 *)(puVar1 + 8);
    puVar1 = &param_1[iVar38].Tags.Elements.field_0x30;
    uVar15 = *(undefined8 *)puVar1;
    uVar16 = *(undefined8 *)(puVar1 + 8);
    pFVar2 = &param_1[iVar38].Tags.Hash.SecondaryData;
    FVar17 = *pFVar2;
    uVar18 = pFVar2[1];
    FVar19 = param_1[iVar38].Pin;
    uVar20 = (&param_1[iVar38].Pin)[1];
    param_1[iVar38].Data.Data.field0_0x0 = (pFVar42->Data).Data.field0_0x0;
    param_1[iVar38].Data.WeakData.WeakPtr = FVar6;
    uVar21 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x8;
    *(undefined8 *)&param_1[iVar38].Tags.Elements = *(undefined8 *)&(pFVar42->Tags).Elements;
    *(undefined8 *)&param_1[iVar38].Tags.Elements.field_0x8 = uVar21;
    uVar21 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x18;
    puVar1 = &param_1[iVar38].Tags.Elements.field_0x10;
    *(undefined8 *)puVar1 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x10;
    *(undefined8 *)(puVar1 + 8) = uVar21;
    uVar21 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x28;
    puVar1 = &param_1[iVar38].Tags.Elements.field_0x20;
    *(undefined8 *)puVar1 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x20;
    *(undefined8 *)(puVar1 + 8) = uVar21;
    uVar21 = *(undefined8 *)&(pFVar42->Tags).Hash;
    puVar1 = &param_1[iVar38].Tags.Elements.field_0x30;
    *(undefined8 *)puVar1 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x30;
    *(undefined8 *)(puVar1 + 8) = uVar21;
    uVar21 = *(undefined8 *)&(pFVar42->Tags).HashSize;
    pFVar2 = &param_1[iVar38].Tags.Hash.SecondaryData;
    *pFVar2 = (pFVar42->Tags).Hash.SecondaryData;
    pFVar2[1] = (ForElementType<FSetElementId>)uVar21;
    uVar21 = *(undefined8 *)&pFVar42->bPinlessData;
    param_1[iVar38].Pin = pFVar42->Pin;
    (&param_1[iVar38].Pin)[1] = (FName)uVar21;
    *(undefined8 *)&param_1[iVar38].OriginatingNode.WeakPtr.ObjectSerialNumber =
         *(undefined8 *)&(pFVar42->OriginatingNode).WeakPtr.ObjectSerialNumber;
    (pFVar42->Data).Data.field0_0x0 = TVar7;
    (pFVar42->Data).WeakData.WeakPtr = FVar8;
    *(undefined8 *)&(pFVar42->Tags).Elements = uVar9;
    *(undefined8 *)&(pFVar42->Tags).Elements.field_0x8 = uVar10;
    *(undefined8 *)&(pFVar42->Tags).Elements.field_0x10 = uVar11;
    *(undefined8 *)&(pFVar42->Tags).Elements.field_0x18 = uVar12;
    *(undefined8 *)&(pFVar42->Tags).Elements.field_0x20 = uVar13;
    *(undefined8 *)&(pFVar42->Tags).Elements.field_0x28 = uVar14;
    *(undefined8 *)&(pFVar42->Tags).Elements.field_0x30 = uVar15;
    (pFVar42->Tags).Hash.InlineData[0] = (char)uVar16;
    (pFVar42->Tags).Hash.InlineData[1] = (char)((ulonglong)uVar16 >> 8);
    (pFVar42->Tags).Hash.InlineData[2] = (char)((ulonglong)uVar16 >> 0x10);
    (pFVar42->Tags).Hash.InlineData[3] = (char)((ulonglong)uVar16 >> 0x18);
    (pFVar42->Tags).Hash._padding_ = (int)((ulonglong)uVar16 >> 0x20);
    (pFVar42->Tags).Hash.SecondaryData = FVar17;
    *(undefined8 *)&(pFVar42->Tags).HashSize = uVar18;
    pFVar42->Pin = FVar19;
    *(undefined8 *)&pFVar42->bPinlessData = uVar20;
    *(undefined8 *)&(pFVar42->OriginatingNode).WeakPtr.ObjectSerialNumber = uVar3;
    iVar38 = iVar40;
  } while( true );
}

// HeapSortInternal<FPCGTaggedData,int,FIdentityFunctor,TDereferenceWrapper<FPCGTaggedData,`IPCGElement::PostExecutePrimaryLoopElement'::__l35::<lambda_2>_>_> @ 149ee97e0

void __cdecl
AlgoImpl::
HeapSortInternal<FPCGTaggedData,int,FIdentityFunctor,TDereferenceWrapper<FPCGTaggedData,_IPCGElement::PostExecutePrimaryLoopElement_::__l35::<lambda_2>_>_>
          (FPCGTaggedData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FPCGTaggedData,_protected:_virtual_void___cdecl_IPCGElement::PostExecutePrimaryLoopElement(FPCGContext_*,UPCGSettings_const_*)const_::_35_::<lambda_2>_>
          param_4)

{
  undefined1 *puVar1;
  ForElementType<FSetElementId> *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  FWeakObjectPtr FVar6;
  TObjectPtr<UPCGData_const_>_u_0 TVar7;
  FWeakObjectPtr FVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ForElementType<FSetElementId> FVar17;
  undefined8 uVar18;
  FName FVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uchar uVar22;
  uchar uVar23;
  uchar uVar24;
  uchar uVar25;
  undefined4 uVar26;
  bool bVar27;
  undefined2 uVar28;
  uchar uVar29;
  uchar uVar30;
  uchar uVar31;
  uchar uVar32;
  undefined4 uVar33;
  bool bVar34;
  bool bVar35;
  undefined2 uVar36;
  bool bVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  longlong lVar41;
  FPCGTaggedData *pFVar42;
  FPCGTaggedData *pFVar43;
  int iVar44;
  int iVar45;
  
  if (param_2 < 0) {
    bVar37 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar37) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar37 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar37) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar38 = (param_2 + -2) / 2;
  iVar39 = iVar38 * 2 + 1;
  iVar5 = iVar39;
  iVar44 = iVar38;
  do {
    while (param_2 <= iVar39) {
LAB_149ee9991:
      if (iVar44 == 0) {
        iVar39 = param_2 + -1;
        lVar41 = (longlong)iVar39;
        if (0 < iVar39) {
          pFVar42 = param_1 + lVar41;
          do {
            FVar6 = (pFVar42->Data).WeakData.WeakPtr;
            iVar45 = 0;
            uVar3 = *(undefined8 *)&(param_1->OriginatingNode).WeakPtr.ObjectSerialNumber;
            TVar7 = (param_1->Data).Data.field0_0x0;
            FVar8 = (param_1->Data).WeakData.WeakPtr;
            uVar9 = *(undefined8 *)&(param_1->Tags).Elements;
            uVar10 = *(undefined8 *)&(param_1->Tags).Elements.field_0x8;
            uVar11 = *(undefined8 *)&(param_1->Tags).Elements.field_0x10;
            uVar12 = *(undefined8 *)&(param_1->Tags).Elements.field_0x18;
            uVar13 = *(undefined8 *)&(param_1->Tags).Elements.field_0x20;
            uVar14 = *(undefined8 *)&(param_1->Tags).Elements.field_0x28;
            uVar15 = *(undefined8 *)&(param_1->Tags).Elements.field_0x30;
            uVar29 = (param_1->Tags).Hash.InlineData[0];
            uVar30 = (param_1->Tags).Hash.InlineData[1];
            uVar31 = (param_1->Tags).Hash.InlineData[2];
            uVar32 = (param_1->Tags).Hash.InlineData[3];
            iVar38 = (param_1->Tags).Hash._padding_;
            FVar17 = (param_1->Tags).Hash.SecondaryData;
            iVar44 = (param_1->Tags).HashSize;
            uVar33 = *(undefined4 *)&(param_1->Tags).field_0x4c;
            FVar19 = param_1->Pin;
            bVar34 = param_1->bPinlessData;
            bVar35 = param_1->bIsUsedMultipleTimes;
            uVar36 = *(undefined2 *)&param_1->field_0x6a;
            iVar40 = (param_1->OriginatingNode).WeakPtr.ObjectIndex;
            (param_1->Data).Data.field0_0x0 = (pFVar42->Data).Data.field0_0x0;
            (param_1->Data).WeakData.WeakPtr = FVar6;
            uVar16 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x8;
            *(undefined8 *)&(param_1->Tags).Elements = *(undefined8 *)&(pFVar42->Tags).Elements;
            *(undefined8 *)&(param_1->Tags).Elements.field_0x8 = uVar16;
            uVar16 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x18;
            *(undefined8 *)&(param_1->Tags).Elements.field_0x10 =
                 *(undefined8 *)&(pFVar42->Tags).Elements.field_0x10;
            *(undefined8 *)&(param_1->Tags).Elements.field_0x18 = uVar16;
            uVar16 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x28;
            *(undefined8 *)&(param_1->Tags).Elements.field_0x20 =
                 *(undefined8 *)&(pFVar42->Tags).Elements.field_0x20;
            *(undefined8 *)&(param_1->Tags).Elements.field_0x28 = uVar16;
            uVar22 = (pFVar42->Tags).Hash.InlineData[0];
            uVar23 = (pFVar42->Tags).Hash.InlineData[1];
            uVar24 = (pFVar42->Tags).Hash.InlineData[2];
            uVar25 = (pFVar42->Tags).Hash.InlineData[3];
            iVar5 = (pFVar42->Tags).Hash._padding_;
            *(undefined8 *)&(param_1->Tags).Elements.field_0x30 =
                 *(undefined8 *)&(pFVar42->Tags).Elements.field_0x30;
            (param_1->Tags).Hash.InlineData[0] = uVar22;
            (param_1->Tags).Hash.InlineData[1] = uVar23;
            (param_1->Tags).Hash.InlineData[2] = uVar24;
            (param_1->Tags).Hash.InlineData[3] = uVar25;
            (param_1->Tags).Hash._padding_ = iVar5;
            iVar5 = (pFVar42->Tags).HashSize;
            uVar26 = *(undefined4 *)&(pFVar42->Tags).field_0x4c;
            (param_1->Tags).Hash.SecondaryData = (pFVar42->Tags).Hash.SecondaryData;
            (param_1->Tags).HashSize = iVar5;
            *(undefined4 *)&(param_1->Tags).field_0x4c = uVar26;
            bVar37 = pFVar42->bPinlessData;
            bVar27 = pFVar42->bIsUsedMultipleTimes;
            uVar28 = *(undefined2 *)&pFVar42->field_0x6a;
            iVar5 = (pFVar42->OriginatingNode).WeakPtr.ObjectIndex;
            param_1->Pin = pFVar42->Pin;
            param_1->bPinlessData = bVar37;
            param_1->bIsUsedMultipleTimes = bVar27;
            *(undefined2 *)&param_1->field_0x6a = uVar28;
            (param_1->OriginatingNode).WeakPtr.ObjectIndex = iVar5;
            *(undefined8 *)&(param_1->OriginatingNode).WeakPtr.ObjectSerialNumber =
                 *(undefined8 *)&(pFVar42->OriginatingNode).WeakPtr.ObjectSerialNumber;
            (pFVar42->Data).Data.field0_0x0 = TVar7;
            (pFVar42->Data).WeakData.WeakPtr = FVar8;
            *(undefined8 *)&(pFVar42->Tags).Elements = uVar9;
            *(undefined8 *)&(pFVar42->Tags).Elements.field_0x8 = uVar10;
            *(undefined8 *)&(pFVar42->Tags).Elements.field_0x10 = uVar11;
            *(undefined8 *)&(pFVar42->Tags).Elements.field_0x18 = uVar12;
            *(undefined8 *)&(pFVar42->Tags).Elements.field_0x20 = uVar13;
            *(undefined8 *)&(pFVar42->Tags).Elements.field_0x28 = uVar14;
            *(undefined8 *)&(pFVar42->Tags).Elements.field_0x30 = uVar15;
            (pFVar42->Tags).Hash.InlineData[0] = uVar29;
            (pFVar42->Tags).Hash.InlineData[1] = uVar30;
            (pFVar42->Tags).Hash.InlineData[2] = uVar31;
            (pFVar42->Tags).Hash.InlineData[3] = uVar32;
            (pFVar42->Tags).Hash._padding_ = iVar38;
            (pFVar42->Tags).Hash.SecondaryData = FVar17;
            (pFVar42->Tags).HashSize = iVar44;
            *(undefined4 *)&(pFVar42->Tags).field_0x4c = uVar33;
            pFVar42->Pin = FVar19;
            pFVar42->bPinlessData = bVar34;
            pFVar42->bIsUsedMultipleTimes = bVar35;
            *(undefined2 *)&pFVar42->field_0x6a = uVar36;
            (pFVar42->OriginatingNode).WeakPtr.ObjectIndex = iVar40;
            *(undefined8 *)&(pFVar42->OriginatingNode).WeakPtr.ObjectSerialNumber = uVar3;
            if (1 < iVar39) {
              do {
                iVar5 = iVar45 * 2;
                iVar38 = iVar5 + 1;
                if (iVar5 + 2 < iVar39) {
                  if (param_1[(longlong)iVar5 + 2].OriginalIndex < param_1[iVar38].OriginalIndex) {
                    iVar38 = iVar5;
                  }
                  iVar38 = iVar38 + 1;
                }
                pFVar43 = param_1 + iVar38;
                if (pFVar43->OriginalIndex <= param_1[iVar45].OriginalIndex) break;
                FVar6 = (pFVar43->Data).WeakData.WeakPtr;
                uVar3 = *(undefined8 *)&param_1[iVar45].OriginatingNode.WeakPtr.ObjectSerialNumber;
                TVar7 = param_1[iVar45].Data.Data.field0_0x0;
                FVar8 = param_1[iVar45].Data.WeakData.WeakPtr;
                uVar9 = *(undefined8 *)&param_1[iVar45].Tags.Elements;
                uVar10 = *(undefined8 *)&param_1[iVar45].Tags.Elements.field_0x8;
                puVar1 = &param_1[iVar45].Tags.Elements.field_0x10;
                uVar11 = *(undefined8 *)puVar1;
                uVar12 = *(undefined8 *)(puVar1 + 8);
                puVar1 = &param_1[iVar45].Tags.Elements.field_0x20;
                uVar13 = *(undefined8 *)puVar1;
                uVar14 = *(undefined8 *)(puVar1 + 8);
                puVar1 = &param_1[iVar45].Tags.Elements.field_0x30;
                uVar15 = *(undefined8 *)puVar1;
                uVar16 = *(undefined8 *)(puVar1 + 8);
                pFVar2 = &param_1[iVar45].Tags.Hash.SecondaryData;
                FVar17 = *pFVar2;
                uVar18 = pFVar2[1];
                FVar19 = param_1[iVar45].Pin;
                uVar20 = (&param_1[iVar45].Pin)[1];
                param_1[iVar45].Data.Data.field0_0x0 = (pFVar43->Data).Data.field0_0x0;
                param_1[iVar45].Data.WeakData.WeakPtr = FVar6;
                uVar21 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x8;
                *(undefined8 *)&param_1[iVar45].Tags.Elements =
                     *(undefined8 *)&(pFVar43->Tags).Elements;
                *(undefined8 *)&param_1[iVar45].Tags.Elements.field_0x8 = uVar21;
                uVar21 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x18;
                puVar1 = &param_1[iVar45].Tags.Elements.field_0x10;
                *(undefined8 *)puVar1 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x10;
                *(undefined8 *)(puVar1 + 8) = uVar21;
                uVar21 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x28;
                puVar1 = &param_1[iVar45].Tags.Elements.field_0x20;
                *(undefined8 *)puVar1 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x20;
                *(undefined8 *)(puVar1 + 8) = uVar21;
                uVar21 = *(undefined8 *)&(pFVar43->Tags).Hash;
                puVar1 = &param_1[iVar45].Tags.Elements.field_0x30;
                *(undefined8 *)puVar1 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x30;
                *(undefined8 *)(puVar1 + 8) = uVar21;
                uVar21 = *(undefined8 *)&(pFVar43->Tags).HashSize;
                pFVar2 = &param_1[iVar45].Tags.Hash.SecondaryData;
                *pFVar2 = (pFVar43->Tags).Hash.SecondaryData;
                pFVar2[1] = (ForElementType<FSetElementId>)uVar21;
                uVar21 = *(undefined8 *)&pFVar43->bPinlessData;
                param_1[iVar45].Pin = pFVar43->Pin;
                (&param_1[iVar45].Pin)[1] = (FName)uVar21;
                *(undefined8 *)&param_1[iVar45].OriginatingNode.WeakPtr.ObjectSerialNumber =
                     *(undefined8 *)&(pFVar43->OriginatingNode).WeakPtr.ObjectSerialNumber;
                (pFVar43->Data).Data.field0_0x0 = TVar7;
                (pFVar43->Data).WeakData.WeakPtr = FVar8;
                *(undefined8 *)&(pFVar43->Tags).Elements = uVar9;
                *(undefined8 *)&(pFVar43->Tags).Elements.field_0x8 = uVar10;
                *(undefined8 *)&(pFVar43->Tags).Elements.field_0x10 = uVar11;
                *(undefined8 *)&(pFVar43->Tags).Elements.field_0x18 = uVar12;
                *(undefined8 *)&(pFVar43->Tags).Elements.field_0x20 = uVar13;
                *(undefined8 *)&(pFVar43->Tags).Elements.field_0x28 = uVar14;
                *(undefined8 *)&(pFVar43->Tags).Elements.field_0x30 = uVar15;
                (pFVar43->Tags).Hash.InlineData[0] = (char)uVar16;
                (pFVar43->Tags).Hash.InlineData[1] = (char)((ulonglong)uVar16 >> 8);
                (pFVar43->Tags).Hash.InlineData[2] = (char)((ulonglong)uVar16 >> 0x10);
                (pFVar43->Tags).Hash.InlineData[3] = (char)((ulonglong)uVar16 >> 0x18);
                (pFVar43->Tags).Hash._padding_ = (int)((ulonglong)uVar16 >> 0x20);
                (pFVar43->Tags).Hash.SecondaryData = FVar17;
                *(undefined8 *)&(pFVar43->Tags).HashSize = uVar18;
                pFVar43->Pin = FVar19;
                *(undefined8 *)&pFVar43->bPinlessData = uVar20;
                *(undefined8 *)&(pFVar43->OriginatingNode).WeakPtr.ObjectSerialNumber = uVar3;
                iVar45 = iVar38;
              } while (iVar38 * 2 + 1 < iVar39);
            }
            iVar39 = iVar39 + -1;
            lVar41 = lVar41 + -1;
            pFVar42 = pFVar42 + -1;
          } while (0 < lVar41);
        }
        return;
      }
      iVar38 = iVar44 + -1;
      iVar39 = iVar5 + -2;
      iVar5 = iVar39;
      iVar44 = iVar38;
    }
    iVar39 = iVar38 * 2;
    iVar40 = iVar39 + 1;
    if (iVar39 + 2 < param_2) {
      if (param_1[(longlong)iVar39 + 2].OriginalIndex < param_1[iVar40].OriginalIndex) {
        iVar40 = iVar39;
      }
      iVar40 = iVar40 + 1;
    }
    pFVar42 = param_1 + iVar40;
    if (pFVar42->OriginalIndex <= param_1[iVar38].OriginalIndex) goto LAB_149ee9991;
    FVar6 = (pFVar42->Data).WeakData.WeakPtr;
    iVar39 = iVar40 * 2 + 1;
    uVar3 = *(undefined8 *)&param_1[iVar38].OriginatingNode.WeakPtr.ObjectSerialNumber;
    TVar7 = param_1[iVar38].Data.Data.field0_0x0;
    FVar8 = param_1[iVar38].Data.WeakData.WeakPtr;
    uVar9 = *(undefined8 *)&param_1[iVar38].Tags.Elements;
    uVar10 = *(undefined8 *)&param_1[iVar38].Tags.Elements.field_0x8;
    puVar1 = &param_1[iVar38].Tags.Elements.field_0x10;
    uVar11 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)(puVar1 + 8);
    puVar1 = &param_1[iVar38].Tags.Elements.field_0x20;
    uVar13 = *(undefined8 *)puVar1;
    uVar14 = *(undefined8 *)(puVar1 + 8);
    puVar1 = &param_1[iVar38].Tags.Elements.field_0x30;
    uVar15 = *(undefined8 *)puVar1;
    uVar16 = *(undefined8 *)(puVar1 + 8);
    pFVar2 = &param_1[iVar38].Tags.Hash.SecondaryData;
    FVar17 = *pFVar2;
    uVar18 = pFVar2[1];
    FVar19 = param_1[iVar38].Pin;
    uVar20 = (&param_1[iVar38].Pin)[1];
    param_1[iVar38].Data.Data.field0_0x0 = (pFVar42->Data).Data.field0_0x0;
    param_1[iVar38].Data.WeakData.WeakPtr = FVar6;
    uVar21 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x8;
    *(undefined8 *)&param_1[iVar38].Tags.Elements = *(undefined8 *)&(pFVar42->Tags).Elements;
    *(undefined8 *)&param_1[iVar38].Tags.Elements.field_0x8 = uVar21;
    uVar21 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x18;
    puVar1 = &param_1[iVar38].Tags.Elements.field_0x10;
    *(undefined8 *)puVar1 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x10;
    *(undefined8 *)(puVar1 + 8) = uVar21;
    uVar21 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x28;
    puVar1 = &param_1[iVar38].Tags.Elements.field_0x20;
    *(undefined8 *)puVar1 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x20;
    *(undefined8 *)(puVar1 + 8) = uVar21;
    uVar21 = *(undefined8 *)&(pFVar42->Tags).Hash;
    puVar1 = &param_1[iVar38].Tags.Elements.field_0x30;
    *(undefined8 *)puVar1 = *(undefined8 *)&(pFVar42->Tags).Elements.field_0x30;
    *(undefined8 *)(puVar1 + 8) = uVar21;
    uVar21 = *(undefined8 *)&(pFVar42->Tags).HashSize;
    pFVar2 = &param_1[iVar38].Tags.Hash.SecondaryData;
    *pFVar2 = (pFVar42->Tags).Hash.SecondaryData;
    pFVar2[1] = (ForElementType<FSetElementId>)uVar21;
    uVar21 = *(undefined8 *)&pFVar42->bPinlessData;
    param_1[iVar38].Pin = pFVar42->Pin;
    (&param_1[iVar38].Pin)[1] = (FName)uVar21;
    *(undefined8 *)&param_1[iVar38].OriginatingNode.WeakPtr.ObjectSerialNumber =
         *(undefined8 *)&(pFVar42->OriginatingNode).WeakPtr.ObjectSerialNumber;
    (pFVar42->Data).Data.field0_0x0 = TVar7;
    (pFVar42->Data).WeakData.WeakPtr = FVar8;
    *(undefined8 *)&(pFVar42->Tags).Elements = uVar9;
    *(undefined8 *)&(pFVar42->Tags).Elements.field_0x8 = uVar10;
    *(undefined8 *)&(pFVar42->Tags).Elements.field_0x10 = uVar11;
    *(undefined8 *)&(pFVar42->Tags).Elements.field_0x18 = uVar12;
    *(undefined8 *)&(pFVar42->Tags).Elements.field_0x20 = uVar13;
    *(undefined8 *)&(pFVar42->Tags).Elements.field_0x28 = uVar14;
    *(undefined8 *)&(pFVar42->Tags).Elements.field_0x30 = uVar15;
    (pFVar42->Tags).Hash.InlineData[0] = (char)uVar16;
    (pFVar42->Tags).Hash.InlineData[1] = (char)((ulonglong)uVar16 >> 8);
    (pFVar42->Tags).Hash.InlineData[2] = (char)((ulonglong)uVar16 >> 0x10);
    (pFVar42->Tags).Hash.InlineData[3] = (char)((ulonglong)uVar16 >> 0x18);
    (pFVar42->Tags).Hash._padding_ = (int)((ulonglong)uVar16 >> 0x20);
    (pFVar42->Tags).Hash.SecondaryData = FVar17;
    *(undefined8 *)&(pFVar42->Tags).HashSize = uVar18;
    pFVar42->Pin = FVar19;
    *(undefined8 *)&pFVar42->bPinlessData = uVar20;
    *(undefined8 *)&(pFVar42->OriginatingNode).WeakPtr.ObjectSerialNumber = uVar3;
    iVar38 = iVar40;
  } while( true );
}

// InternalConstructor<UPCGAssetExporter> @ 149ee9bf0

void __cdecl InternalConstructor<UPCGAssetExporter>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPCGAssetExporter__6B_;
  }
  return;
}

// InternalConstructor<UPCGAssetExporterUtils> @ 149ee9c20

void __cdecl InternalConstructor<UPCGAssetExporterUtils>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UPCGAssetExporterUtils__6B_;
  }
  return;
}

// InternalConstructor<UPCGComponent> @ 149ee9c50

void __cdecl InternalConstructor<UPCGComponent>(FObjectInitializer *param_1)

{
  if ((UPCGComponent *)param_1->Obj != (UPCGComponent *)0x0) {
    UPCGComponent::UPCGComponent((UPCGComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPCGData> @ 149ee9c70

void __cdecl InternalConstructor<UPCGData>(FObjectInitializer *param_1)

{
  UObject *this;
  longlong lVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPCGData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined4 *)&this[1].field_0x8 = 0;
    this[1].field_0xc = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x1c = 0;
    *(undefined2 *)&this[1].field_0x18 = 0;
    if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
      LOCK();
      UNLOCK();
      lVar1 = (longlong)UPCGData::UIDCounter + 1;
      UPCGData::UIDCounter = (atomic<unsigned___int64>)((longlong)UPCGData::UIDCounter + 1);
      *(longlong *)(this + 1) = lVar1;
    }
  }
  return;
}

// InternalConstructor<UPCGDataFunctionLibrary> @ 149ee9ce0

void __cdecl InternalConstructor<UPCGDataFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UPCGDataFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UPCGDebugDrawComponent> @ 149ee9d10

void __cdecl InternalConstructor<UPCGDebugDrawComponent>(FObjectInitializer *param_1)

{
  UDebugDrawComponent *this;
  
  this = (UDebugDrawComponent *)param_1->Obj;
  if (this != (UDebugDrawComponent *)0x0) {
    UDebugDrawComponent::UDebugDrawComponent(this,param_1);
    this->_padding_ = (longlong)&UPCGDebugDrawComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UPCGDebugDrawComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UPCGDebugDrawComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UPCGDebugDrawComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UPCGDebugDrawComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UPCGDebugDrawComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGDefaultExecutionSource> @ 149ee9d90

void __cdecl InternalConstructor<UPCGDefaultExecutionSource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined8 *)&this[1].field_0x8 = 0xffffffffffffffff;
    *(undefined ***)this = &UPCGDefaultExecutionSource::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UPCGDefaultExecutionSource::_vftable__for__IPCGGraphExecutionSource__;
    *(undefined ***)&this[1].field_0x18 = &___7FPCGDefaultExecutionState__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(UObject **)&this[1].field_0x20 = this;
    *(undefined4 *)(this + 2) = 0x2a;
  }
  return;
}

// InternalConstructor<UPCGEdge> @ 149ee9df0

void __cdecl InternalConstructor<UPCGEdge>(FObjectInitializer *param_1)

{
  UObjectBase *this;
  
  this = (UObjectBase *)param_1->Obj;
  if (this != (UObjectBase *)0x0) {
    UObject::UObject((UObject *)this,param_1);
    this->_padding_ = (longlong)&___7UPCGEdge__6B_;
    this[1]._padding_ = 0;
    this[1].ObjectFlags = RF_NoFlags;
    this[1].InternalIndex = 0;
    this[1].ClassPrivate.ObjectPtr.field0_0x0.DebugPtr = (UClass *)0x0;
    this[1].NamePrivate.Name = (FName)0x0;
    this[1].OuterPrivate.ObjectPtr.field0_0x0.DebugPtr = (UObject *)0x0;
    this[2]._padding_ = 0;
    UObjectBase::AtomicallySetFlags(this,RF_Transactional);
    return;
  }
  return;
}

// InternalConstructor<UPCGEngineSettings> @ 149ee9e50

void __cdecl InternalConstructor<UPCGEngineSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettingsBackedByCVars *this;
  
  this = (UDeveloperSettingsBackedByCVars *)param_1->Obj;
  if (this != (UDeveloperSettingsBackedByCVars *)0x0) {
    UDeveloperSettingsBackedByCVars::UDeveloperSettingsBackedByCVars(this,param_1);
    *(undefined2 *)&this[1].field_0x18 = 0x101;
    *(undefined ***)this = &___7UPCGEngineSettings__6B_;
    *(undefined8 *)(this + 1) = 0x4039000000000000;
    *(undefined8 *)&this[1].field_0x8 = 0x4039000000000000;
    *(undefined8 *)&this[1].field_0x10 = 0x4024000000000000;
  }
  return;
}

// InternalConstructor<UPCGGraph> @ 149ee9eb0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __cdecl InternalConstructor<UPCGGraph>(FObjectInitializer *param_1)

{
  if ((UPCGGraph *)param_1->Obj != (UPCGGraph *)0x0) {
    UPCGGraph::UPCGGraph((UPCGGraph *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPCGGraphExecutionSource> @ 149ee9ed0

void __cdecl InternalConstructor<UPCGGraphExecutionSource>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UPCGGraphExecutionSource__6B_;
  }
  return;
}

// InternalConstructor<UPCGGraphInputOutputSettings> @ 149ee9f00

void __cdecl InternalConstructor<UPCGGraphInputOutputSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGGraphInputOutputSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1].Seed = 0;
    this[1].bExecutionDependencyRequired = false;
    *(undefined3 *)&this[1].field_0x55 = 0;
    *(undefined4 *)&this[1].OriginalSettings = 0;
    *(undefined8 *)&this[1].bUseSeed = 0;
    this[1].CachedElement.Object = (IPCGElement *)0x0;
    *(undefined2 *)&this[1].CachedElement.SharedReferenceCount.ReferenceController = 0;
  }
  return;
}

// InternalConstructor<UPCGGraphInstance> @ 149ee9fa0

void __cdecl InternalConstructor<UPCGGraphInstance>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPCGGraphInstance__6B_;
    *(undefined8 *)(this + 1) = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this[1].field_0x8);
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UPCGGraphInterface> @ 149eea020

void __cdecl InternalConstructor<UPCGGraphInterface>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPCGGraphInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGManagedDebugDrawComponent> @ 149eea050

void __cdecl InternalConstructor<UPCGManagedDebugDrawComponent>(FObjectInitializer *param_1)

{
  UPCGManagedComponent *this;
  
  this = (UPCGManagedComponent *)param_1->Obj;
  if (this != (UPCGManagedComponent *)0x0) {
    UPCGManagedComponent::UPCGManagedComponent(this,param_1);
    this->_padding_ = (longlong)&___7UPCGManagedDebugDrawComponent__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UPCGAssetExporter> @ 149eea080

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGAssetExporter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGAssetExporter::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPCGAssetExporter__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGAssetExporterUtils> @ 149eea130

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGAssetExporterUtils>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGAssetExporterUtils::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPCGAssetExporterUtils__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGComponent> @ 149eea1e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComponent *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGComponent::GetPrivateStaticClass();
  pUVar3 = (UPCGComponent *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UPCGComponent *)0x0) {
    pUVar3 = UPCGComponent::UPCGComponent(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGData> @ 149eea280

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UPCGData__6B_;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0;
    pUVar1[1].field_0xc = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x1c = 0;
    *(undefined2 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDataFunctionLibrary> @ 149eea340

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGDataFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDataFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPCGDataFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDebugDrawComponent> @ 149eea3f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGDebugDrawComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDebugDrawComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDebugDrawComponent::GetPrivateStaticClass();
  this = (UDebugDrawComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDebugDrawComponent *)0x0) {
    UDebugDrawComponent::UDebugDrawComponent(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UPCGDebugDrawComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UPCGDebugDrawComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UPCGDebugDrawComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UPCGDebugDrawComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UPCGDebugDrawComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UPCGDebugDrawComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDefaultExecutionSource> @ 149eea4f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGDefaultExecutionSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDefaultExecutionSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0xffffffffffffffff;
    *(undefined ***)pUVar1 = &UPCGDefaultExecutionSource::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UPCGDefaultExecutionSource::_vftable__for__IPCGGraphExecutionSource__;
    *(undefined ***)&pUVar1[1].field_0x18 = &___7FPCGDefaultExecutionState__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0x2a;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGEdge> @ 149eea5d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGEdge>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGEdge::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPCGEdge__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGEngineSettings> @ 149eea6a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGEngineSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettingsBackedByCVars *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGEngineSettings::GetPrivateStaticClass();
  this = (UDeveloperSettingsBackedByCVars *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettingsBackedByCVars *)0x0) {
    UDeveloperSettingsBackedByCVars::UDeveloperSettingsBackedByCVars(this,param_1);
    *(undefined2 *)&this[1].field_0x18 = 0x101;
    *(undefined ***)this = &___7UPCGEngineSettings__6B_;
    *(undefined8 *)(this + 1) = 0x4039000000000000;
    *(undefined8 *)&this[1].field_0x8 = 0x4039000000000000;
    *(undefined8 *)&this[1].field_0x10 = 0x4024000000000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGraph> @ 149eea770

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGGraph>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGraph::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7UPCGGraph__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)(pUVar1 + 2));
    pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x14 = 0x100;
    *(undefined2 *)&pUVar1[2].field_0x1c = 0x101;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)&pUVar1[3].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 4) = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x4 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined4 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined4 *)&pUVar1[5].field_0x20 = 0;
    *(undefined4 *)&pUVar1[5].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 6) = 0xffffffff;
    *(undefined4 *)&pUVar1[6].field_0x4 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined4 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined1 *)(pUVar1 + 9) = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined8 *)&pUVar1[9].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined4 *)&pUVar1[10].field_0x8 = 0;
    *(undefined4 *)&pUVar1[10].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[10].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[10].field_0x14 = 0;
    *(undefined8 *)&pUVar1[10].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0xb) = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pUVar1[0xb].field_0x8,4000);
    pUVar1[0xc].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x10 = 0;
    FPCGRuntimeGenerationRadii::FPCGRuntimeGenerationRadii
              ((FPCGRuntimeGenerationRadii *)&pUVar1[0xc].field_0x18);
    *(undefined8 *)(pUVar1 + 0xf) = 0;
    *(undefined8 *)&pUVar1[0xf].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xf].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0x10) = 0;
    *(undefined4 *)&pUVar1[0x10].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[0x10].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[0x10].field_0xc = 0;
    *(undefined8 *)&pUVar1[0x10].field_0x18 = 0;
    *(undefined4 *)&pUVar1[0x10].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0x11) = 0;
    *(undefined8 *)&pUVar1[0x11].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0x11].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0x12) = 0;
    *(undefined4 *)&pUVar1[0x12].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[0x12].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[0x12].field_0xc = 0;
    *(undefined8 *)&pUVar1[0x12].field_0x18 = 0;
    *(undefined4 *)&pUVar1[0x12].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGraphExecutionSource> @ 149eea780

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGGraphExecutionSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGraphExecutionSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPCGGraphExecutionSource__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGraphInputOutputSettings> @ 149eea830

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGGraphInputOutputSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGraphInputOutputSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGGraphInputOutputSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1].Seed = 0;
    this[1].bExecutionDependencyRequired = false;
    *(undefined3 *)&this[1].field_0x55 = 0;
    *(undefined4 *)&this[1].OriginalSettings = 0;
    *(undefined8 *)&this[1].bUseSeed = 0;
    this[1].CachedElement.Object = (IPCGElement *)0x0;
    *(undefined2 *)&this[1].CachedElement.SharedReferenceCount.ReferenceController = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGraphInstance> @ 149eea950

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGGraphInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar3 = (UObject *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGraphInstance::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPCGGraphInstance__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// InternalVTableHelperCtorCaller<UPCGGraphInterface> @ 149eeaa30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGGraphInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGraphInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPCGGraphInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGManagedDebugDrawComponent> @ 149eeaae0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGManagedDebugDrawComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGManagedComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGManagedDebugDrawComponent::GetPrivateStaticClass();
  this = (UPCGManagedComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGManagedComponent *)0x0) {
    UPCGManagedComponent::UPCGManagedComponent(this,param_1);
    this->_padding_ = (longlong)&___7UPCGManagedDebugDrawComponent__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,`UPCGGraph::CalculateNodeGridSizesRecursiveNoLock'::__l2::<lambda_1>_>_> @ 149eeab90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_UPCGGraph::CalculateNodeGridSizesRecursiveNoLock_::__l2::<lambda_1>_>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_int,_protected:_class_TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>___cdecl_UPCGGraph::CalculateNodeGridSizesRecursiveNoLock(UPCGNode_const_*,unsigned_int)const_::_2_::<lambda_1>_>
          param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint **ppuVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  uint *local_338;
  uint *local_328;
  uint *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppuVar5 = &local_328;
    do {
      puVar8 = ppuVar5[1];
      puVar4 = *ppuVar5;
      puVar1 = ppuVar5[2];
      iVar3 = (int)((longlong)puVar8 - (longlong)puVar4 >> 2) + 1;
      local_338._0_4_ = (int)puVar1;
      puVar9 = puVar4;
      if ((int)local_338 != 0) {
LAB_149eeac40:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          puVar6 = puVar8 + 1;
          uVar2 = puVar9[iVar3 >> 1];
          puVar9[iVar3 >> 1] = *puVar9;
          *puVar9 = uVar2;
          puVar4 = puVar9;
LAB_149eeac70:
          puVar4 = puVar4 + 1;
          if (puVar4 <= puVar8) goto code_r0x000149eeac79;
          goto LAB_149eeac80;
        }
        for (; puVar4 = puVar9, puVar1 = puVar9, puVar9 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar1 = puVar1 + 1, puVar1 <= puVar8) {
            if (*puVar1 < *puVar4) {
              puVar4 = puVar1;
            }
          }
          uVar2 = *puVar4;
          *puVar4 = *puVar8;
          *puVar8 = uVar2;
        }
        goto LAB_149eead38;
      }
LAB_149eead27:
      local_338 = puVar1;
      HeapSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_UPCGGraph::CalculateNodeGridSizesRecursiveNoLock_::__l2::<lambda_1>_>_>
                (puVar4,iVar3,param_3,param_4);
LAB_149eead38:
      ppuVar5 = ppuVar5 + -3;
    } while (&local_328 <= ppuVar5);
  }
  return;
code_r0x000149eeac79:
  if (*puVar9 <= *puVar4) goto LAB_149eeac70;
LAB_149eeac80:
  do {
    puVar7 = puVar6;
    puVar6 = puVar7 + -1;
    if (puVar6 <= puVar9) break;
  } while (*puVar6 <= *puVar9);
  if (puVar4 <= puVar6) {
    uVar2 = *puVar4;
    *puVar4 = *puVar6;
    *puVar6 = uVar2;
    goto LAB_149eeac70;
  }
  uVar2 = *puVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *puVar9 = *puVar6;
  *puVar6 = uVar2;
  if ((longlong)((longlong)puVar6 + (-4 - (longlong)puVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar8 - (longlong)puVar4 & 0xfffffffffffffffcU)) {
    if (puVar4 < puVar8) {
      *ppuVar5 = puVar4;
      ppuVar5[1] = puVar8;
      *(int *)(ppuVar5 + 2) = (int)local_338;
      ppuVar5 = ppuVar5 + 3;
    }
    if (puVar6 <= puVar9 + 1) goto LAB_149eead38;
    puVar8 = puVar7 + -2;
    puVar4 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar6) {
      *ppuVar5 = puVar9;
      ppuVar5[1] = puVar7 + -2;
      *(int *)(ppuVar5 + 2) = (int)local_338;
      ppuVar5 = ppuVar5 + 3;
    }
    if (puVar8 <= puVar4) goto LAB_149eead38;
  }
  iVar3 = (int)((longlong)puVar8 - (longlong)puVar4 >> 2) + 1;
  puVar9 = puVar4;
  if ((int)local_338 == 0) goto LAB_149eead27;
  goto LAB_149eeac40;
}

// IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,`UPCGGraph::CacheGridSizesInternalNoLock'::__l10::<lambda_1>_>_> @ 149eeadb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_UPCGGraph::CacheGridSizesInternalNoLock_::__l10::<lambda_1>_>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_int,_protected:_void___cdecl_UPCGGraph::CacheGridSizesInternalNoLock(void)const_::_10_::<lambda_1>_>
          param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint **ppuVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  uint *local_338;
  uint *local_328;
  uint *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppuVar5 = &local_328;
    do {
      puVar8 = ppuVar5[1];
      puVar4 = *ppuVar5;
      puVar1 = ppuVar5[2];
      iVar3 = (int)((longlong)puVar8 - (longlong)puVar4 >> 2) + 1;
      local_338._0_4_ = (int)puVar1;
      puVar9 = puVar4;
      if ((int)local_338 != 0) {
LAB_149eeae60:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          puVar6 = puVar8 + 1;
          uVar2 = puVar9[iVar3 >> 1];
          puVar9[iVar3 >> 1] = *puVar9;
          *puVar9 = uVar2;
          puVar4 = puVar9;
LAB_149eeae90:
          puVar4 = puVar4 + 1;
          if (puVar4 <= puVar8) goto code_r0x000149eeae99;
          goto LAB_149eeaea0;
        }
        for (; puVar4 = puVar9, puVar1 = puVar9, puVar9 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar1 = puVar1 + 1, puVar1 <= puVar8) {
            if (*puVar1 < *puVar4) {
              puVar4 = puVar1;
            }
          }
          uVar2 = *puVar4;
          *puVar4 = *puVar8;
          *puVar8 = uVar2;
        }
        goto LAB_149eeaf58;
      }
LAB_149eeaf47:
      local_338 = puVar1;
      HeapSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_UPCGGraph::CacheGridSizesInternalNoLock_::__l10::<lambda_1>_>_>
                (puVar4,iVar3,param_3,param_4);
LAB_149eeaf58:
      ppuVar5 = ppuVar5 + -3;
    } while (&local_328 <= ppuVar5);
  }
  return;
code_r0x000149eeae99:
  if (*puVar9 <= *puVar4) goto LAB_149eeae90;
LAB_149eeaea0:
  do {
    puVar7 = puVar6;
    puVar6 = puVar7 + -1;
    if (puVar6 <= puVar9) break;
  } while (*puVar6 <= *puVar9);
  if (puVar4 <= puVar6) {
    uVar2 = *puVar4;
    *puVar4 = *puVar6;
    *puVar6 = uVar2;
    goto LAB_149eeae90;
  }
  uVar2 = *puVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *puVar9 = *puVar6;
  *puVar6 = uVar2;
  if ((longlong)((longlong)puVar6 + (-4 - (longlong)puVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar8 - (longlong)puVar4 & 0xfffffffffffffffcU)) {
    if (puVar4 < puVar8) {
      *ppuVar5 = puVar4;
      ppuVar5[1] = puVar8;
      *(int *)(ppuVar5 + 2) = (int)local_338;
      ppuVar5 = ppuVar5 + 3;
    }
    if (puVar6 <= puVar9 + 1) goto LAB_149eeaf58;
    puVar8 = puVar7 + -2;
    puVar4 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar6) {
      *ppuVar5 = puVar9;
      ppuVar5[1] = puVar7 + -2;
      *(int *)(ppuVar5 + 2) = (int)local_338;
      ppuVar5 = ppuVar5 + 3;
    }
    if (puVar8 <= puVar4) goto LAB_149eeaf58;
  }
  iVar3 = (int)((longlong)puVar8 - (longlong)puVar4 >> 2) + 1;
  puVar9 = puVar4;
  if ((int)local_338 == 0) goto LAB_149eeaf47;
  goto LAB_149eeae60;
}

// IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,`UPCGGraph::GetParentGridSizes'::__l11::<lambda_1>_>_> @ 149eeafd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_UPCGGraph::GetParentGridSizes_::__l11::<lambda_1>_>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_int,_public:_void___cdecl_UPCGGraph::GetParentGridSizes(unsigned_int,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_&)const_::_11_::<lambda_1>_>
          param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint **ppuVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  uint *local_338;
  uint *local_328;
  uint *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppuVar5 = &local_328;
    do {
      puVar8 = ppuVar5[1];
      puVar4 = *ppuVar5;
      puVar1 = ppuVar5[2];
      iVar3 = (int)((longlong)puVar8 - (longlong)puVar4 >> 2) + 1;
      local_338._0_4_ = (int)puVar1;
      puVar9 = puVar4;
      if ((int)local_338 != 0) {
LAB_149eeb080:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          puVar6 = puVar8 + 1;
          uVar2 = puVar9[iVar3 >> 1];
          puVar9[iVar3 >> 1] = *puVar9;
          *puVar9 = uVar2;
          puVar4 = puVar9;
LAB_149eeb0b0:
          puVar4 = puVar4 + 1;
          if (puVar4 <= puVar8) goto code_r0x000149eeb0b9;
          goto LAB_149eeb0c0;
        }
        for (; puVar4 = puVar9, puVar1 = puVar9, puVar9 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar1 = puVar1 + 1, puVar1 <= puVar8) {
            if (*puVar1 < *puVar4) {
              puVar4 = puVar1;
            }
          }
          uVar2 = *puVar4;
          *puVar4 = *puVar8;
          *puVar8 = uVar2;
        }
        goto LAB_149eeb178;
      }
LAB_149eeb167:
      local_338 = puVar1;
      HeapSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_UPCGGraph::GetParentGridSizes_::__l11::<lambda_1>_>_>
                (puVar4,iVar3,param_3,param_4);
LAB_149eeb178:
      ppuVar5 = ppuVar5 + -3;
    } while (&local_328 <= ppuVar5);
  }
  return;
code_r0x000149eeb0b9:
  if (*puVar9 <= *puVar4) goto LAB_149eeb0b0;
LAB_149eeb0c0:
  do {
    puVar7 = puVar6;
    puVar6 = puVar7 + -1;
    if (puVar6 <= puVar9) break;
  } while (*puVar6 <= *puVar9);
  if (puVar4 <= puVar6) {
    uVar2 = *puVar4;
    *puVar4 = *puVar6;
    *puVar6 = uVar2;
    goto LAB_149eeb0b0;
  }
  uVar2 = *puVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *puVar9 = *puVar6;
  *puVar6 = uVar2;
  if ((longlong)((longlong)puVar6 + (-4 - (longlong)puVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar8 - (longlong)puVar4 & 0xfffffffffffffffcU)) {
    if (puVar4 < puVar8) {
      *ppuVar5 = puVar4;
      ppuVar5[1] = puVar8;
      *(int *)(ppuVar5 + 2) = (int)local_338;
      ppuVar5 = ppuVar5 + 3;
    }
    if (puVar6 <= puVar9 + 1) goto LAB_149eeb178;
    puVar8 = puVar7 + -2;
    puVar4 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar6) {
      *ppuVar5 = puVar9;
      ppuVar5[1] = puVar7 + -2;
      *(int *)(ppuVar5 + 2) = (int)local_338;
      ppuVar5 = ppuVar5 + 3;
    }
    if (puVar8 <= puVar4) goto LAB_149eeb178;
  }
  iVar3 = (int)((longlong)puVar8 - (longlong)puVar4 >> 2) + 1;
  puVar9 = puVar4;
  if ((int)local_338 == 0) goto LAB_149eeb167;
  goto LAB_149eeb080;
}

// IntroSortInternal<FPCGTaggedData,int,FIdentityFunctor,TDereferenceWrapper<FPCGTaggedData,`IPCGElement::PreExecutePrimaryLoopElement'::__l22::<lambda_1>_>_> @ 149eeb1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FPCGTaggedData,int,FIdentityFunctor,TDereferenceWrapper<FPCGTaggedData,_IPCGElement::PreExecutePrimaryLoopElement_::__l22::<lambda_1>_>_>
          (FPCGTaggedData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FPCGTaggedData,_protected:_virtual_void___cdecl_IPCGElement::PreExecutePrimaryLoopElement(FPCGContext_*,UPCGSettings_const_*)const_::_22_::<lambda_1>_>
          param_4)

{
  FPCGTaggedData *pFVar1;
  undefined8 uVar2;
  FWeakObjectPtr FVar3;
  TObjectPtr<UPCGData_const_>_u_0 TVar4;
  FWeakObjectPtr FVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ForElementType<FSetElementId> FVar13;
  FName FVar14;
  undefined8 uVar15;
  TObjectPtr<UPCGData_const_>_u_0 TVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  undefined4 uVar21;
  bool bVar22;
  bool bVar23;
  undefined2 uVar24;
  uchar uVar25;
  uchar uVar26;
  uchar uVar27;
  uchar uVar28;
  int iVar29;
  int iVar30;
  undefined4 uVar31;
  bool bVar32;
  bool bVar33;
  undefined2 uVar34;
  int iVar35;
  int iVar36;
  longlong lVar37;
  longlong lVar38;
  FPCGTaggedData *pFVar39;
  FPCGTaggedData *pFVar40;
  FPCGTaggedData *pFVar41;
  FPCGTaggedData *pFVar42;
  FPCGTaggedData *pFVar43;
  FPCGTaggedData *pFVar44;
  FPCGTaggedData **ppFVar45;
  float fVar46;
  undefined1 auStack_3b8 [48];
  FPCGTaggedData *local_388;
  FPCGTaggedData *local_378;
  FPCGTaggedData *local_370;
  undefined4 local_368;
  undefined1 local_360 [744];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  if (1 < param_2) {
    local_370 = param_1 + (longlong)param_2 + -1;
    local_378 = param_1;
    fVar46 = logf((float)param_2 * (float)param_2);
    local_368 = (undefined4)(longlong)fVar46;
    memset(local_360,0,0x2e8);
    ppFVar45 = &local_378;
    do {
      pFVar39 = ppFVar45[1];
      pFVar44 = *ppFVar45;
      pFVar1 = ppFVar45[2];
      local_388._0_4_ = (int)pFVar1;
      lVar37 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar39 - (longlong)pFVar44),
                      8) + ((longlong)pFVar39 - (longlong)pFVar44);
      iVar36 = ((int)(lVar37 >> 6) - (int)(lVar37 >> 0x3f)) + 1;
      pFVar43 = pFVar44;
      if ((int)local_388 != 0) {
LAB_149eeb2e0:
        if (8 < iVar36) {
          FVar3 = (pFVar43->Data).WeakData.WeakPtr;
          pFVar41 = pFVar39 + 1;
          pFVar44 = pFVar43 + iVar36 / 2;
          TVar4 = (pFVar44->Data).Data.field0_0x0;
          FVar5 = (pFVar44->Data).WeakData.WeakPtr;
          uVar6 = *(undefined8 *)&(pFVar44->Tags).Elements;
          uVar7 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x8;
          uVar8 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x10;
          uVar9 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x18;
          uVar10 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x20;
          uVar11 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x28;
          uVar12 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x30;
          uVar25 = (pFVar44->Tags).Hash.InlineData[0];
          uVar26 = (pFVar44->Tags).Hash.InlineData[1];
          uVar27 = (pFVar44->Tags).Hash.InlineData[2];
          uVar28 = (pFVar44->Tags).Hash.InlineData[3];
          iVar29 = (pFVar44->Tags).Hash._padding_;
          FVar13 = (pFVar44->Tags).Hash.SecondaryData;
          iVar30 = (pFVar44->Tags).HashSize;
          uVar31 = *(undefined4 *)&(pFVar44->Tags).field_0x4c;
          FVar14 = pFVar44->Pin;
          bVar32 = pFVar44->bPinlessData;
          bVar33 = pFVar44->bIsUsedMultipleTimes;
          uVar34 = *(undefined2 *)&pFVar44->field_0x6a;
          iVar35 = (pFVar44->OriginatingNode).WeakPtr.ObjectIndex;
          uVar2 = *(undefined8 *)&(pFVar44->OriginatingNode).WeakPtr.ObjectSerialNumber;
          (pFVar44->Data).Data.field0_0x0 = (pFVar43->Data).Data.field0_0x0;
          (pFVar44->Data).WeakData.WeakPtr = FVar3;
          uVar15 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x8;
          *(undefined8 *)&(pFVar44->Tags).Elements = *(undefined8 *)&(pFVar43->Tags).Elements;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x8 = uVar15;
          uVar15 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x18;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x10 =
               *(undefined8 *)&(pFVar43->Tags).Elements.field_0x10;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x18 = uVar15;
          uVar15 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x28;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x20 =
               *(undefined8 *)&(pFVar43->Tags).Elements.field_0x20;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x28 = uVar15;
          uVar17 = (pFVar43->Tags).Hash.InlineData[0];
          uVar18 = (pFVar43->Tags).Hash.InlineData[1];
          uVar19 = (pFVar43->Tags).Hash.InlineData[2];
          uVar20 = (pFVar43->Tags).Hash.InlineData[3];
          iVar36 = (pFVar43->Tags).Hash._padding_;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x30 =
               *(undefined8 *)&(pFVar43->Tags).Elements.field_0x30;
          (pFVar44->Tags).Hash.InlineData[0] = uVar17;
          (pFVar44->Tags).Hash.InlineData[1] = uVar18;
          (pFVar44->Tags).Hash.InlineData[2] = uVar19;
          (pFVar44->Tags).Hash.InlineData[3] = uVar20;
          (pFVar44->Tags).Hash._padding_ = iVar36;
          iVar36 = (pFVar43->Tags).HashSize;
          uVar21 = *(undefined4 *)&(pFVar43->Tags).field_0x4c;
          (pFVar44->Tags).Hash.SecondaryData = (pFVar43->Tags).Hash.SecondaryData;
          (pFVar44->Tags).HashSize = iVar36;
          *(undefined4 *)&(pFVar44->Tags).field_0x4c = uVar21;
          bVar22 = pFVar43->bPinlessData;
          bVar23 = pFVar43->bIsUsedMultipleTimes;
          uVar24 = *(undefined2 *)&pFVar43->field_0x6a;
          iVar36 = (pFVar43->OriginatingNode).WeakPtr.ObjectIndex;
          pFVar44->Pin = pFVar43->Pin;
          pFVar44->bPinlessData = bVar22;
          pFVar44->bIsUsedMultipleTimes = bVar23;
          *(undefined2 *)&pFVar44->field_0x6a = uVar24;
          (pFVar44->OriginatingNode).WeakPtr.ObjectIndex = iVar36;
          *(undefined8 *)&(pFVar44->OriginatingNode).WeakPtr.ObjectSerialNumber =
               *(undefined8 *)&(pFVar43->OriginatingNode).WeakPtr.ObjectSerialNumber;
          (pFVar43->Data).Data.field0_0x0 = TVar4;
          (pFVar43->Data).WeakData.WeakPtr = FVar5;
          *(undefined8 *)&(pFVar43->Tags).Elements = uVar6;
          *(undefined8 *)&(pFVar43->Tags).Elements.field_0x8 = uVar7;
          *(undefined8 *)&(pFVar43->Tags).Elements.field_0x10 = uVar8;
          *(undefined8 *)&(pFVar43->Tags).Elements.field_0x18 = uVar9;
          *(undefined8 *)&(pFVar43->Tags).Elements.field_0x20 = uVar10;
          *(undefined8 *)&(pFVar43->Tags).Elements.field_0x28 = uVar11;
          *(undefined8 *)&(pFVar43->Tags).Elements.field_0x30 = uVar12;
          (pFVar43->Tags).Hash.InlineData[0] = uVar25;
          (pFVar43->Tags).Hash.InlineData[1] = uVar26;
          (pFVar43->Tags).Hash.InlineData[2] = uVar27;
          (pFVar43->Tags).Hash.InlineData[3] = uVar28;
          (pFVar43->Tags).Hash._padding_ = iVar29;
          (pFVar43->Tags).Hash.SecondaryData = FVar13;
          (pFVar43->Tags).HashSize = iVar30;
          *(undefined4 *)&(pFVar43->Tags).field_0x4c = uVar31;
          pFVar43->Pin = FVar14;
          pFVar43->bPinlessData = bVar32;
          pFVar43->bIsUsedMultipleTimes = bVar33;
          *(undefined2 *)&pFVar43->field_0x6a = uVar34;
          (pFVar43->OriginatingNode).WeakPtr.ObjectIndex = iVar35;
          *(undefined8 *)&(pFVar43->OriginatingNode).WeakPtr.ObjectSerialNumber = uVar2;
          pFVar44 = pFVar43;
LAB_149eeb393:
          pFVar40 = pFVar44;
          pFVar44 = pFVar40 + 1;
          if (pFVar44 <= pFVar39) goto code_r0x000149eeb39c;
          goto LAB_149eeb3a6;
        }
        for (; pFVar44 = pFVar43, pFVar1 = pFVar43, pFVar43 < pFVar39; pFVar39 = pFVar39 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar39) {
            if (pFVar44->OriginalIndex < pFVar1->OriginalIndex) {
              pFVar44 = pFVar1;
            }
          }
          TVar4 = (pFVar44->Data).Data.field0_0x0;
          FVar3 = (pFVar44->Data).WeakData.WeakPtr;
          uVar2 = *(undefined8 *)&(pFVar44->OriginatingNode).WeakPtr.ObjectSerialNumber;
          uVar6 = *(undefined8 *)&(pFVar44->Tags).Elements;
          uVar7 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x8;
          FVar5 = (pFVar39->Data).WeakData.WeakPtr;
          uVar8 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x10;
          uVar9 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x18;
          uVar10 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x20;
          uVar11 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x28;
          uVar12 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x30;
          uVar25 = (pFVar44->Tags).Hash.InlineData[0];
          uVar26 = (pFVar44->Tags).Hash.InlineData[1];
          uVar27 = (pFVar44->Tags).Hash.InlineData[2];
          uVar28 = (pFVar44->Tags).Hash.InlineData[3];
          iVar29 = (pFVar44->Tags).Hash._padding_;
          FVar13 = (pFVar44->Tags).Hash.SecondaryData;
          iVar30 = (pFVar44->Tags).HashSize;
          uVar31 = *(undefined4 *)&(pFVar44->Tags).field_0x4c;
          FVar14 = pFVar44->Pin;
          bVar32 = pFVar44->bPinlessData;
          bVar33 = pFVar44->bIsUsedMultipleTimes;
          uVar34 = *(undefined2 *)&pFVar44->field_0x6a;
          iVar35 = (pFVar44->OriginatingNode).WeakPtr.ObjectIndex;
          (pFVar44->Data).Data.field0_0x0 = (pFVar39->Data).Data.field0_0x0;
          (pFVar44->Data).WeakData.WeakPtr = FVar5;
          uVar15 = *(undefined8 *)&(pFVar39->Tags).Elements.field_0x8;
          *(undefined8 *)&(pFVar44->Tags).Elements = *(undefined8 *)&(pFVar39->Tags).Elements;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x8 = uVar15;
          uVar15 = *(undefined8 *)&(pFVar39->Tags).Elements.field_0x18;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x10 =
               *(undefined8 *)&(pFVar39->Tags).Elements.field_0x10;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x18 = uVar15;
          uVar15 = *(undefined8 *)&(pFVar39->Tags).Elements.field_0x28;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x20 =
               *(undefined8 *)&(pFVar39->Tags).Elements.field_0x20;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x28 = uVar15;
          uVar17 = (pFVar39->Tags).Hash.InlineData[0];
          uVar18 = (pFVar39->Tags).Hash.InlineData[1];
          uVar19 = (pFVar39->Tags).Hash.InlineData[2];
          uVar20 = (pFVar39->Tags).Hash.InlineData[3];
          iVar36 = (pFVar39->Tags).Hash._padding_;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x30 =
               *(undefined8 *)&(pFVar39->Tags).Elements.field_0x30;
          (pFVar44->Tags).Hash.InlineData[0] = uVar17;
          (pFVar44->Tags).Hash.InlineData[1] = uVar18;
          (pFVar44->Tags).Hash.InlineData[2] = uVar19;
          (pFVar44->Tags).Hash.InlineData[3] = uVar20;
          (pFVar44->Tags).Hash._padding_ = iVar36;
          iVar36 = (pFVar39->Tags).HashSize;
          uVar21 = *(undefined4 *)&(pFVar39->Tags).field_0x4c;
          (pFVar44->Tags).Hash.SecondaryData = (pFVar39->Tags).Hash.SecondaryData;
          (pFVar44->Tags).HashSize = iVar36;
          *(undefined4 *)&(pFVar44->Tags).field_0x4c = uVar21;
          bVar22 = pFVar39->bPinlessData;
          bVar23 = pFVar39->bIsUsedMultipleTimes;
          uVar24 = *(undefined2 *)&pFVar39->field_0x6a;
          iVar36 = (pFVar39->OriginatingNode).WeakPtr.ObjectIndex;
          pFVar44->Pin = pFVar39->Pin;
          pFVar44->bPinlessData = bVar22;
          pFVar44->bIsUsedMultipleTimes = bVar23;
          *(undefined2 *)&pFVar44->field_0x6a = uVar24;
          (pFVar44->OriginatingNode).WeakPtr.ObjectIndex = iVar36;
          *(undefined8 *)&(pFVar44->OriginatingNode).WeakPtr.ObjectSerialNumber =
               *(undefined8 *)&(pFVar39->OriginatingNode).WeakPtr.ObjectSerialNumber;
          (pFVar39->Data).Data.field0_0x0 = TVar4;
          (pFVar39->Data).WeakData.WeakPtr = FVar3;
          *(undefined8 *)&(pFVar39->Tags).Elements = uVar6;
          *(undefined8 *)&(pFVar39->Tags).Elements.field_0x8 = uVar7;
          *(undefined8 *)&(pFVar39->Tags).Elements.field_0x10 = uVar8;
          *(undefined8 *)&(pFVar39->Tags).Elements.field_0x18 = uVar9;
          *(undefined8 *)&(pFVar39->Tags).Elements.field_0x20 = uVar10;
          *(undefined8 *)&(pFVar39->Tags).Elements.field_0x28 = uVar11;
          *(undefined8 *)&(pFVar39->Tags).Elements.field_0x30 = uVar12;
          (pFVar39->Tags).Hash.InlineData[0] = uVar25;
          (pFVar39->Tags).Hash.InlineData[1] = uVar26;
          (pFVar39->Tags).Hash.InlineData[2] = uVar27;
          (pFVar39->Tags).Hash.InlineData[3] = uVar28;
          (pFVar39->Tags).Hash._padding_ = iVar29;
          (pFVar39->Tags).Hash.SecondaryData = FVar13;
          (pFVar39->Tags).HashSize = iVar30;
          *(undefined4 *)&(pFVar39->Tags).field_0x4c = uVar31;
          pFVar39->Pin = FVar14;
          pFVar39->bPinlessData = bVar32;
          pFVar39->bIsUsedMultipleTimes = bVar33;
          *(undefined2 *)&pFVar39->field_0x6a = uVar34;
          (pFVar39->OriginatingNode).WeakPtr.ObjectIndex = iVar35;
          *(undefined8 *)&(pFVar39->OriginatingNode).WeakPtr.ObjectSerialNumber = uVar2;
        }
        goto LAB_149eeb5c6;
      }
LAB_149eeb5b7:
      local_388 = pFVar1;
      HeapSortInternal<FPCGTaggedData,int,FIdentityFunctor,TDereferenceWrapper<FPCGTaggedData,_IPCGElement::PreExecutePrimaryLoopElement_::__l22::<lambda_1>_>_>
                (pFVar44,iVar36,param_3,param_4);
LAB_149eeb5c6:
      ppFVar45 = ppFVar45 + -3;
    } while (&local_378 <= ppFVar45);
  }
  return;
code_r0x000149eeb39c:
  if (pFVar40[1].OriginalIndex <= pFVar43->OriginalIndex) goto LAB_149eeb393;
LAB_149eeb3a6:
  do {
    pFVar42 = pFVar41;
    pFVar41 = pFVar42 + -1;
    if (pFVar41 <= pFVar43) break;
  } while (pFVar43->OriginalIndex <= pFVar42[-1].OriginalIndex);
  TVar4 = (pFVar41->Data).Data.field0_0x0;
  FVar3 = pFVar42[-1].Data.WeakData.WeakPtr;
  if (pFVar44 <= pFVar41) {
    TVar16 = (pFVar44->Data).Data.field0_0x0;
    FVar5 = pFVar40[1].Data.WeakData.WeakPtr;
    uVar6 = *(undefined8 *)&pFVar40[1].Tags.Elements;
    uVar7 = *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x8;
    uVar8 = *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x10;
    uVar9 = *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x18;
    uVar10 = *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x20;
    uVar11 = *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x28;
    uVar12 = *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x30;
    uVar25 = pFVar40[1].Tags.Hash.InlineData[0];
    uVar26 = pFVar40[1].Tags.Hash.InlineData[1];
    uVar27 = pFVar40[1].Tags.Hash.InlineData[2];
    uVar28 = pFVar40[1].Tags.Hash.InlineData[3];
    iVar29 = pFVar40[1].Tags.Hash._padding_;
    FVar13 = pFVar40[1].Tags.Hash.SecondaryData;
    iVar30 = pFVar40[1].Tags.HashSize;
    uVar31 = *(undefined4 *)&pFVar40[1].Tags.field_0x4c;
    FVar14 = pFVar40[1].Pin;
    bVar32 = pFVar40[1].bPinlessData;
    bVar33 = pFVar40[1].bIsUsedMultipleTimes;
    uVar34 = *(undefined2 *)&pFVar40[1].field_0x6a;
    iVar35 = pFVar40[1].OriginatingNode.WeakPtr.ObjectIndex;
    uVar2 = *(undefined8 *)&pFVar40[1].OriginatingNode.WeakPtr.ObjectSerialNumber;
    (pFVar44->Data).Data.field0_0x0 = TVar4;
    pFVar40[1].Data.WeakData.WeakPtr = FVar3;
    uVar15 = *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x8;
    *(undefined8 *)&pFVar40[1].Tags.Elements = *(undefined8 *)&pFVar42[-1].Tags.Elements;
    *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x8 = uVar15;
    uVar15 = *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x18;
    *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x10 =
         *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x10;
    *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x18 = uVar15;
    uVar15 = *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x28;
    *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x20 =
         *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x20;
    *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x28 = uVar15;
    uVar17 = pFVar42[-1].Tags.Hash.InlineData[0];
    uVar18 = pFVar42[-1].Tags.Hash.InlineData[1];
    uVar19 = pFVar42[-1].Tags.Hash.InlineData[2];
    uVar20 = pFVar42[-1].Tags.Hash.InlineData[3];
    iVar36 = pFVar42[-1].Tags.Hash._padding_;
    *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x30 =
         *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x30;
    pFVar40[1].Tags.Hash.InlineData[0] = uVar17;
    pFVar40[1].Tags.Hash.InlineData[1] = uVar18;
    pFVar40[1].Tags.Hash.InlineData[2] = uVar19;
    pFVar40[1].Tags.Hash.InlineData[3] = uVar20;
    pFVar40[1].Tags.Hash._padding_ = iVar36;
    iVar36 = pFVar42[-1].Tags.HashSize;
    uVar21 = *(undefined4 *)&pFVar42[-1].Tags.field_0x4c;
    pFVar40[1].Tags.Hash.SecondaryData = pFVar42[-1].Tags.Hash.SecondaryData;
    pFVar40[1].Tags.HashSize = iVar36;
    *(undefined4 *)&pFVar40[1].Tags.field_0x4c = uVar21;
    bVar22 = pFVar42[-1].bPinlessData;
    bVar23 = pFVar42[-1].bIsUsedMultipleTimes;
    uVar24 = *(undefined2 *)&pFVar42[-1].field_0x6a;
    iVar36 = pFVar42[-1].OriginatingNode.WeakPtr.ObjectIndex;
    pFVar40[1].Pin = pFVar42[-1].Pin;
    pFVar40[1].bPinlessData = bVar22;
    pFVar40[1].bIsUsedMultipleTimes = bVar23;
    *(undefined2 *)&pFVar40[1].field_0x6a = uVar24;
    pFVar40[1].OriginatingNode.WeakPtr.ObjectIndex = iVar36;
    *(undefined8 *)&pFVar40[1].OriginatingNode.WeakPtr.ObjectSerialNumber =
         *(undefined8 *)&pFVar42[-1].OriginatingNode.WeakPtr.ObjectSerialNumber;
    (pFVar41->Data).Data.field0_0x0 = TVar16;
    pFVar42[-1].Data.WeakData.WeakPtr = FVar5;
    *(undefined8 *)&pFVar42[-1].Tags.Elements = uVar6;
    *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x8 = uVar7;
    *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x10 = uVar8;
    *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x18 = uVar9;
    *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x20 = uVar10;
    *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x28 = uVar11;
    *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x30 = uVar12;
    pFVar42[-1].Tags.Hash.InlineData[0] = uVar25;
    pFVar42[-1].Tags.Hash.InlineData[1] = uVar26;
    pFVar42[-1].Tags.Hash.InlineData[2] = uVar27;
    pFVar42[-1].Tags.Hash.InlineData[3] = uVar28;
    pFVar42[-1].Tags.Hash._padding_ = iVar29;
    pFVar42[-1].Tags.Hash.SecondaryData = FVar13;
    pFVar42[-1].Tags.HashSize = iVar30;
    *(undefined4 *)&pFVar42[-1].Tags.field_0x4c = uVar31;
    pFVar42[-1].Pin = FVar14;
    pFVar42[-1].bPinlessData = bVar32;
    pFVar42[-1].bIsUsedMultipleTimes = bVar33;
    *(undefined2 *)&pFVar42[-1].field_0x6a = uVar34;
    pFVar42[-1].OriginatingNode.WeakPtr.ObjectIndex = iVar35;
    *(undefined8 *)&pFVar42[-1].OriginatingNode.WeakPtr.ObjectSerialNumber = uVar2;
    goto LAB_149eeb393;
  }
  TVar16 = (pFVar43->Data).Data.field0_0x0;
  FVar5 = (pFVar43->Data).WeakData.WeakPtr;
  uVar6 = *(undefined8 *)&(pFVar43->Tags).Elements;
  uVar7 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x8;
  local_388._0_4_ = (int)local_388 + -1;
  uVar8 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x10;
  uVar9 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x18;
  lVar37 = (longlong)pFVar41 + (-0x78 - (longlong)pFVar43);
  uVar10 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x20;
  uVar11 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x28;
  uVar12 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x30;
  uVar25 = (pFVar43->Tags).Hash.InlineData[0];
  uVar26 = (pFVar43->Tags).Hash.InlineData[1];
  uVar27 = (pFVar43->Tags).Hash.InlineData[2];
  uVar28 = (pFVar43->Tags).Hash.InlineData[3];
  iVar29 = (pFVar43->Tags).Hash._padding_;
  FVar13 = (pFVar43->Tags).Hash.SecondaryData;
  iVar30 = (pFVar43->Tags).HashSize;
  uVar31 = *(undefined4 *)&(pFVar43->Tags).field_0x4c;
  FVar14 = pFVar43->Pin;
  bVar32 = pFVar43->bPinlessData;
  bVar33 = pFVar43->bIsUsedMultipleTimes;
  uVar34 = *(undefined2 *)&pFVar43->field_0x6a;
  iVar35 = (pFVar43->OriginatingNode).WeakPtr.ObjectIndex;
  uVar2 = *(undefined8 *)&(pFVar43->OriginatingNode).WeakPtr.ObjectSerialNumber;
  (pFVar43->Data).Data.field0_0x0 = TVar4;
  (pFVar43->Data).WeakData.WeakPtr = FVar3;
  uVar15 = *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x8;
  *(undefined8 *)&(pFVar43->Tags).Elements = *(undefined8 *)&pFVar42[-1].Tags.Elements;
  *(undefined8 *)&(pFVar43->Tags).Elements.field_0x8 = uVar15;
  uVar15 = *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x18;
  *(undefined8 *)&(pFVar43->Tags).Elements.field_0x10 =
       *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x10;
  *(undefined8 *)&(pFVar43->Tags).Elements.field_0x18 = uVar15;
  uVar15 = *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x28;
  lVar37 = lVar37 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar37),8);
  *(undefined8 *)&(pFVar43->Tags).Elements.field_0x20 =
       *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x20;
  *(undefined8 *)&(pFVar43->Tags).Elements.field_0x28 = uVar15;
  uVar17 = pFVar42[-1].Tags.Hash.InlineData[0];
  uVar18 = pFVar42[-1].Tags.Hash.InlineData[1];
  uVar19 = pFVar42[-1].Tags.Hash.InlineData[2];
  uVar20 = pFVar42[-1].Tags.Hash.InlineData[3];
  iVar36 = pFVar42[-1].Tags.Hash._padding_;
  *(undefined8 *)&(pFVar43->Tags).Elements.field_0x30 =
       *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x30;
  (pFVar43->Tags).Hash.InlineData[0] = uVar17;
  (pFVar43->Tags).Hash.InlineData[1] = uVar18;
  (pFVar43->Tags).Hash.InlineData[2] = uVar19;
  (pFVar43->Tags).Hash.InlineData[3] = uVar20;
  (pFVar43->Tags).Hash._padding_ = iVar36;
  iVar36 = pFVar42[-1].Tags.HashSize;
  uVar21 = *(undefined4 *)&pFVar42[-1].Tags.field_0x4c;
  (pFVar43->Tags).Hash.SecondaryData = pFVar42[-1].Tags.Hash.SecondaryData;
  (pFVar43->Tags).HashSize = iVar36;
  *(undefined4 *)&(pFVar43->Tags).field_0x4c = uVar21;
  bVar22 = pFVar42[-1].bPinlessData;
  bVar23 = pFVar42[-1].bIsUsedMultipleTimes;
  uVar24 = *(undefined2 *)&pFVar42[-1].field_0x6a;
  iVar36 = pFVar42[-1].OriginatingNode.WeakPtr.ObjectIndex;
  pFVar43->Pin = pFVar42[-1].Pin;
  pFVar43->bPinlessData = bVar22;
  pFVar43->bIsUsedMultipleTimes = bVar23;
  *(undefined2 *)&pFVar43->field_0x6a = uVar24;
  (pFVar43->OriginatingNode).WeakPtr.ObjectIndex = iVar36;
  lVar38 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar39 - (longlong)pFVar44),8) +
           ((longlong)pFVar39 - (longlong)pFVar44);
  *(undefined8 *)&(pFVar43->OriginatingNode).WeakPtr.ObjectSerialNumber =
       *(undefined8 *)&pFVar42[-1].OriginatingNode.WeakPtr.ObjectSerialNumber;
  (pFVar41->Data).Data.field0_0x0 = TVar16;
  pFVar42[-1].Data.WeakData.WeakPtr = FVar5;
  *(undefined8 *)&pFVar42[-1].Tags.Elements = uVar6;
  *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x8 = uVar7;
  *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x10 = uVar8;
  *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x18 = uVar9;
  *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x20 = uVar10;
  *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x28 = uVar11;
  *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x30 = uVar12;
  pFVar42[-1].Tags.Hash.InlineData[0] = uVar25;
  pFVar42[-1].Tags.Hash.InlineData[1] = uVar26;
  pFVar42[-1].Tags.Hash.InlineData[2] = uVar27;
  pFVar42[-1].Tags.Hash.InlineData[3] = uVar28;
  pFVar42[-1].Tags.Hash._padding_ = iVar29;
  pFVar42[-1].Tags.Hash.SecondaryData = FVar13;
  pFVar42[-1].Tags.HashSize = iVar30;
  *(undefined4 *)&pFVar42[-1].Tags.field_0x4c = uVar31;
  pFVar42[-1].Pin = FVar14;
  pFVar42[-1].bPinlessData = bVar32;
  pFVar42[-1].bIsUsedMultipleTimes = bVar33;
  *(undefined2 *)&pFVar42[-1].field_0x6a = uVar34;
  pFVar42[-1].OriginatingNode.WeakPtr.ObjectIndex = iVar35;
  *(undefined8 *)&pFVar42[-1].OriginatingNode.WeakPtr.ObjectSerialNumber = uVar2;
  if ((lVar37 >> 6) - (lVar37 >> 0x3f) < (lVar38 >> 6) - (lVar38 >> 0x3f)) {
    if (pFVar44 < pFVar39) {
      *ppFVar45 = pFVar44;
      ppFVar45[1] = pFVar39;
      *(int *)(ppFVar45 + 2) = (int)local_388;
      ppFVar45 = ppFVar45 + 3;
    }
    if (pFVar41 <= pFVar43 + 1) goto LAB_149eeb5c6;
    pFVar39 = pFVar42 + -2;
    pFVar44 = pFVar43;
  }
  else {
    if (pFVar43 + 1 < pFVar41) {
      *ppFVar45 = pFVar43;
      ppFVar45[1] = pFVar42 + -2;
      *(int *)(ppFVar45 + 2) = (int)local_388;
      ppFVar45 = ppFVar45 + 3;
    }
    if (pFVar39 <= pFVar44) goto LAB_149eeb5c6;
  }
  lVar37 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar39 - (longlong)pFVar44),8) +
           ((longlong)pFVar39 - (longlong)pFVar44);
  iVar36 = ((int)(lVar37 >> 6) - (int)(lVar37 >> 0x3f)) + 1;
  pFVar43 = pFVar44;
  if ((int)local_388 == 0) goto LAB_149eeb5b7;
  goto LAB_149eeb2e0;
}

// IntroSortInternal<FPCGTaggedData,int,FIdentityFunctor,TDereferenceWrapper<FPCGTaggedData,`IPCGElement::PostExecutePrimaryLoopElement'::__l35::<lambda_2>_>_> @ 149eeb710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FPCGTaggedData,int,FIdentityFunctor,TDereferenceWrapper<FPCGTaggedData,_IPCGElement::PostExecutePrimaryLoopElement_::__l35::<lambda_2>_>_>
          (FPCGTaggedData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FPCGTaggedData,_protected:_virtual_void___cdecl_IPCGElement::PostExecutePrimaryLoopElement(FPCGContext_*,UPCGSettings_const_*)const_::_35_::<lambda_2>_>
          param_4)

{
  FPCGTaggedData *pFVar1;
  undefined8 uVar2;
  FWeakObjectPtr FVar3;
  TObjectPtr<UPCGData_const_>_u_0 TVar4;
  FWeakObjectPtr FVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ForElementType<FSetElementId> FVar13;
  FName FVar14;
  undefined8 uVar15;
  TObjectPtr<UPCGData_const_>_u_0 TVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  undefined4 uVar21;
  bool bVar22;
  bool bVar23;
  undefined2 uVar24;
  uchar uVar25;
  uchar uVar26;
  uchar uVar27;
  uchar uVar28;
  int iVar29;
  int iVar30;
  undefined4 uVar31;
  bool bVar32;
  bool bVar33;
  undefined2 uVar34;
  int iVar35;
  int iVar36;
  longlong lVar37;
  longlong lVar38;
  FPCGTaggedData *pFVar39;
  FPCGTaggedData *pFVar40;
  FPCGTaggedData *pFVar41;
  FPCGTaggedData *pFVar42;
  FPCGTaggedData *pFVar43;
  FPCGTaggedData *pFVar44;
  FPCGTaggedData **ppFVar45;
  float fVar46;
  undefined1 auStack_3b8 [48];
  FPCGTaggedData *local_388;
  FPCGTaggedData *local_378;
  FPCGTaggedData *local_370;
  undefined4 local_368;
  undefined1 local_360 [744];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  if (1 < param_2) {
    local_370 = param_1 + (longlong)param_2 + -1;
    local_378 = param_1;
    fVar46 = logf((float)param_2 * (float)param_2);
    local_368 = (undefined4)(longlong)fVar46;
    memset(local_360,0,0x2e8);
    ppFVar45 = &local_378;
    do {
      pFVar39 = ppFVar45[1];
      pFVar44 = *ppFVar45;
      pFVar1 = ppFVar45[2];
      local_388._0_4_ = (int)pFVar1;
      lVar37 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar39 - (longlong)pFVar44),
                      8) + ((longlong)pFVar39 - (longlong)pFVar44);
      iVar36 = ((int)(lVar37 >> 6) - (int)(lVar37 >> 0x3f)) + 1;
      pFVar43 = pFVar44;
      if ((int)local_388 != 0) {
LAB_149eeb800:
        if (8 < iVar36) {
          FVar3 = (pFVar43->Data).WeakData.WeakPtr;
          pFVar41 = pFVar39 + 1;
          pFVar44 = pFVar43 + iVar36 / 2;
          TVar4 = (pFVar44->Data).Data.field0_0x0;
          FVar5 = (pFVar44->Data).WeakData.WeakPtr;
          uVar6 = *(undefined8 *)&(pFVar44->Tags).Elements;
          uVar7 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x8;
          uVar8 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x10;
          uVar9 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x18;
          uVar10 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x20;
          uVar11 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x28;
          uVar12 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x30;
          uVar25 = (pFVar44->Tags).Hash.InlineData[0];
          uVar26 = (pFVar44->Tags).Hash.InlineData[1];
          uVar27 = (pFVar44->Tags).Hash.InlineData[2];
          uVar28 = (pFVar44->Tags).Hash.InlineData[3];
          iVar29 = (pFVar44->Tags).Hash._padding_;
          FVar13 = (pFVar44->Tags).Hash.SecondaryData;
          iVar30 = (pFVar44->Tags).HashSize;
          uVar31 = *(undefined4 *)&(pFVar44->Tags).field_0x4c;
          FVar14 = pFVar44->Pin;
          bVar32 = pFVar44->bPinlessData;
          bVar33 = pFVar44->bIsUsedMultipleTimes;
          uVar34 = *(undefined2 *)&pFVar44->field_0x6a;
          iVar35 = (pFVar44->OriginatingNode).WeakPtr.ObjectIndex;
          uVar2 = *(undefined8 *)&(pFVar44->OriginatingNode).WeakPtr.ObjectSerialNumber;
          (pFVar44->Data).Data.field0_0x0 = (pFVar43->Data).Data.field0_0x0;
          (pFVar44->Data).WeakData.WeakPtr = FVar3;
          uVar15 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x8;
          *(undefined8 *)&(pFVar44->Tags).Elements = *(undefined8 *)&(pFVar43->Tags).Elements;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x8 = uVar15;
          uVar15 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x18;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x10 =
               *(undefined8 *)&(pFVar43->Tags).Elements.field_0x10;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x18 = uVar15;
          uVar15 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x28;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x20 =
               *(undefined8 *)&(pFVar43->Tags).Elements.field_0x20;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x28 = uVar15;
          uVar17 = (pFVar43->Tags).Hash.InlineData[0];
          uVar18 = (pFVar43->Tags).Hash.InlineData[1];
          uVar19 = (pFVar43->Tags).Hash.InlineData[2];
          uVar20 = (pFVar43->Tags).Hash.InlineData[3];
          iVar36 = (pFVar43->Tags).Hash._padding_;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x30 =
               *(undefined8 *)&(pFVar43->Tags).Elements.field_0x30;
          (pFVar44->Tags).Hash.InlineData[0] = uVar17;
          (pFVar44->Tags).Hash.InlineData[1] = uVar18;
          (pFVar44->Tags).Hash.InlineData[2] = uVar19;
          (pFVar44->Tags).Hash.InlineData[3] = uVar20;
          (pFVar44->Tags).Hash._padding_ = iVar36;
          iVar36 = (pFVar43->Tags).HashSize;
          uVar21 = *(undefined4 *)&(pFVar43->Tags).field_0x4c;
          (pFVar44->Tags).Hash.SecondaryData = (pFVar43->Tags).Hash.SecondaryData;
          (pFVar44->Tags).HashSize = iVar36;
          *(undefined4 *)&(pFVar44->Tags).field_0x4c = uVar21;
          bVar22 = pFVar43->bPinlessData;
          bVar23 = pFVar43->bIsUsedMultipleTimes;
          uVar24 = *(undefined2 *)&pFVar43->field_0x6a;
          iVar36 = (pFVar43->OriginatingNode).WeakPtr.ObjectIndex;
          pFVar44->Pin = pFVar43->Pin;
          pFVar44->bPinlessData = bVar22;
          pFVar44->bIsUsedMultipleTimes = bVar23;
          *(undefined2 *)&pFVar44->field_0x6a = uVar24;
          (pFVar44->OriginatingNode).WeakPtr.ObjectIndex = iVar36;
          *(undefined8 *)&(pFVar44->OriginatingNode).WeakPtr.ObjectSerialNumber =
               *(undefined8 *)&(pFVar43->OriginatingNode).WeakPtr.ObjectSerialNumber;
          (pFVar43->Data).Data.field0_0x0 = TVar4;
          (pFVar43->Data).WeakData.WeakPtr = FVar5;
          *(undefined8 *)&(pFVar43->Tags).Elements = uVar6;
          *(undefined8 *)&(pFVar43->Tags).Elements.field_0x8 = uVar7;
          *(undefined8 *)&(pFVar43->Tags).Elements.field_0x10 = uVar8;
          *(undefined8 *)&(pFVar43->Tags).Elements.field_0x18 = uVar9;
          *(undefined8 *)&(pFVar43->Tags).Elements.field_0x20 = uVar10;
          *(undefined8 *)&(pFVar43->Tags).Elements.field_0x28 = uVar11;
          *(undefined8 *)&(pFVar43->Tags).Elements.field_0x30 = uVar12;
          (pFVar43->Tags).Hash.InlineData[0] = uVar25;
          (pFVar43->Tags).Hash.InlineData[1] = uVar26;
          (pFVar43->Tags).Hash.InlineData[2] = uVar27;
          (pFVar43->Tags).Hash.InlineData[3] = uVar28;
          (pFVar43->Tags).Hash._padding_ = iVar29;
          (pFVar43->Tags).Hash.SecondaryData = FVar13;
          (pFVar43->Tags).HashSize = iVar30;
          *(undefined4 *)&(pFVar43->Tags).field_0x4c = uVar31;
          pFVar43->Pin = FVar14;
          pFVar43->bPinlessData = bVar32;
          pFVar43->bIsUsedMultipleTimes = bVar33;
          *(undefined2 *)&pFVar43->field_0x6a = uVar34;
          (pFVar43->OriginatingNode).WeakPtr.ObjectIndex = iVar35;
          *(undefined8 *)&(pFVar43->OriginatingNode).WeakPtr.ObjectSerialNumber = uVar2;
          pFVar44 = pFVar43;
LAB_149eeb8b3:
          pFVar40 = pFVar44;
          pFVar44 = pFVar40 + 1;
          if (pFVar44 <= pFVar39) goto code_r0x000149eeb8bc;
          goto LAB_149eeb8c6;
        }
        for (; pFVar44 = pFVar43, pFVar1 = pFVar43, pFVar43 < pFVar39; pFVar39 = pFVar39 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar39) {
            if (pFVar44->OriginalIndex < pFVar1->OriginalIndex) {
              pFVar44 = pFVar1;
            }
          }
          TVar4 = (pFVar44->Data).Data.field0_0x0;
          FVar3 = (pFVar44->Data).WeakData.WeakPtr;
          uVar2 = *(undefined8 *)&(pFVar44->OriginatingNode).WeakPtr.ObjectSerialNumber;
          uVar6 = *(undefined8 *)&(pFVar44->Tags).Elements;
          uVar7 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x8;
          FVar5 = (pFVar39->Data).WeakData.WeakPtr;
          uVar8 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x10;
          uVar9 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x18;
          uVar10 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x20;
          uVar11 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x28;
          uVar12 = *(undefined8 *)&(pFVar44->Tags).Elements.field_0x30;
          uVar25 = (pFVar44->Tags).Hash.InlineData[0];
          uVar26 = (pFVar44->Tags).Hash.InlineData[1];
          uVar27 = (pFVar44->Tags).Hash.InlineData[2];
          uVar28 = (pFVar44->Tags).Hash.InlineData[3];
          iVar29 = (pFVar44->Tags).Hash._padding_;
          FVar13 = (pFVar44->Tags).Hash.SecondaryData;
          iVar30 = (pFVar44->Tags).HashSize;
          uVar31 = *(undefined4 *)&(pFVar44->Tags).field_0x4c;
          FVar14 = pFVar44->Pin;
          bVar32 = pFVar44->bPinlessData;
          bVar33 = pFVar44->bIsUsedMultipleTimes;
          uVar34 = *(undefined2 *)&pFVar44->field_0x6a;
          iVar35 = (pFVar44->OriginatingNode).WeakPtr.ObjectIndex;
          (pFVar44->Data).Data.field0_0x0 = (pFVar39->Data).Data.field0_0x0;
          (pFVar44->Data).WeakData.WeakPtr = FVar5;
          uVar15 = *(undefined8 *)&(pFVar39->Tags).Elements.field_0x8;
          *(undefined8 *)&(pFVar44->Tags).Elements = *(undefined8 *)&(pFVar39->Tags).Elements;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x8 = uVar15;
          uVar15 = *(undefined8 *)&(pFVar39->Tags).Elements.field_0x18;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x10 =
               *(undefined8 *)&(pFVar39->Tags).Elements.field_0x10;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x18 = uVar15;
          uVar15 = *(undefined8 *)&(pFVar39->Tags).Elements.field_0x28;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x20 =
               *(undefined8 *)&(pFVar39->Tags).Elements.field_0x20;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x28 = uVar15;
          uVar17 = (pFVar39->Tags).Hash.InlineData[0];
          uVar18 = (pFVar39->Tags).Hash.InlineData[1];
          uVar19 = (pFVar39->Tags).Hash.InlineData[2];
          uVar20 = (pFVar39->Tags).Hash.InlineData[3];
          iVar36 = (pFVar39->Tags).Hash._padding_;
          *(undefined8 *)&(pFVar44->Tags).Elements.field_0x30 =
               *(undefined8 *)&(pFVar39->Tags).Elements.field_0x30;
          (pFVar44->Tags).Hash.InlineData[0] = uVar17;
          (pFVar44->Tags).Hash.InlineData[1] = uVar18;
          (pFVar44->Tags).Hash.InlineData[2] = uVar19;
          (pFVar44->Tags).Hash.InlineData[3] = uVar20;
          (pFVar44->Tags).Hash._padding_ = iVar36;
          iVar36 = (pFVar39->Tags).HashSize;
          uVar21 = *(undefined4 *)&(pFVar39->Tags).field_0x4c;
          (pFVar44->Tags).Hash.SecondaryData = (pFVar39->Tags).Hash.SecondaryData;
          (pFVar44->Tags).HashSize = iVar36;
          *(undefined4 *)&(pFVar44->Tags).field_0x4c = uVar21;
          bVar22 = pFVar39->bPinlessData;
          bVar23 = pFVar39->bIsUsedMultipleTimes;
          uVar24 = *(undefined2 *)&pFVar39->field_0x6a;
          iVar36 = (pFVar39->OriginatingNode).WeakPtr.ObjectIndex;
          pFVar44->Pin = pFVar39->Pin;
          pFVar44->bPinlessData = bVar22;
          pFVar44->bIsUsedMultipleTimes = bVar23;
          *(undefined2 *)&pFVar44->field_0x6a = uVar24;
          (pFVar44->OriginatingNode).WeakPtr.ObjectIndex = iVar36;
          *(undefined8 *)&(pFVar44->OriginatingNode).WeakPtr.ObjectSerialNumber =
               *(undefined8 *)&(pFVar39->OriginatingNode).WeakPtr.ObjectSerialNumber;
          (pFVar39->Data).Data.field0_0x0 = TVar4;
          (pFVar39->Data).WeakData.WeakPtr = FVar3;
          *(undefined8 *)&(pFVar39->Tags).Elements = uVar6;
          *(undefined8 *)&(pFVar39->Tags).Elements.field_0x8 = uVar7;
          *(undefined8 *)&(pFVar39->Tags).Elements.field_0x10 = uVar8;
          *(undefined8 *)&(pFVar39->Tags).Elements.field_0x18 = uVar9;
          *(undefined8 *)&(pFVar39->Tags).Elements.field_0x20 = uVar10;
          *(undefined8 *)&(pFVar39->Tags).Elements.field_0x28 = uVar11;
          *(undefined8 *)&(pFVar39->Tags).Elements.field_0x30 = uVar12;
          (pFVar39->Tags).Hash.InlineData[0] = uVar25;
          (pFVar39->Tags).Hash.InlineData[1] = uVar26;
          (pFVar39->Tags).Hash.InlineData[2] = uVar27;
          (pFVar39->Tags).Hash.InlineData[3] = uVar28;
          (pFVar39->Tags).Hash._padding_ = iVar29;
          (pFVar39->Tags).Hash.SecondaryData = FVar13;
          (pFVar39->Tags).HashSize = iVar30;
          *(undefined4 *)&(pFVar39->Tags).field_0x4c = uVar31;
          pFVar39->Pin = FVar14;
          pFVar39->bPinlessData = bVar32;
          pFVar39->bIsUsedMultipleTimes = bVar33;
          *(undefined2 *)&pFVar39->field_0x6a = uVar34;
          (pFVar39->OriginatingNode).WeakPtr.ObjectIndex = iVar35;
          *(undefined8 *)&(pFVar39->OriginatingNode).WeakPtr.ObjectSerialNumber = uVar2;
        }
        goto LAB_149eebae6;
      }
LAB_149eebad7:
      local_388 = pFVar1;
      HeapSortInternal<FPCGTaggedData,int,FIdentityFunctor,TDereferenceWrapper<FPCGTaggedData,_IPCGElement::PostExecutePrimaryLoopElement_::__l35::<lambda_2>_>_>
                (pFVar44,iVar36,param_3,param_4);
LAB_149eebae6:
      ppFVar45 = ppFVar45 + -3;
    } while (&local_378 <= ppFVar45);
  }
  return;
code_r0x000149eeb8bc:
  if (pFVar40[1].OriginalIndex <= pFVar43->OriginalIndex) goto LAB_149eeb8b3;
LAB_149eeb8c6:
  do {
    pFVar42 = pFVar41;
    pFVar41 = pFVar42 + -1;
    if (pFVar41 <= pFVar43) break;
  } while (pFVar43->OriginalIndex <= pFVar42[-1].OriginalIndex);
  TVar4 = (pFVar41->Data).Data.field0_0x0;
  FVar3 = pFVar42[-1].Data.WeakData.WeakPtr;
  if (pFVar44 <= pFVar41) {
    TVar16 = (pFVar44->Data).Data.field0_0x0;
    FVar5 = pFVar40[1].Data.WeakData.WeakPtr;
    uVar6 = *(undefined8 *)&pFVar40[1].Tags.Elements;
    uVar7 = *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x8;
    uVar8 = *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x10;
    uVar9 = *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x18;
    uVar10 = *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x20;
    uVar11 = *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x28;
    uVar12 = *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x30;
    uVar25 = pFVar40[1].Tags.Hash.InlineData[0];
    uVar26 = pFVar40[1].Tags.Hash.InlineData[1];
    uVar27 = pFVar40[1].Tags.Hash.InlineData[2];
    uVar28 = pFVar40[1].Tags.Hash.InlineData[3];
    iVar29 = pFVar40[1].Tags.Hash._padding_;
    FVar13 = pFVar40[1].Tags.Hash.SecondaryData;
    iVar30 = pFVar40[1].Tags.HashSize;
    uVar31 = *(undefined4 *)&pFVar40[1].Tags.field_0x4c;
    FVar14 = pFVar40[1].Pin;
    bVar32 = pFVar40[1].bPinlessData;
    bVar33 = pFVar40[1].bIsUsedMultipleTimes;
    uVar34 = *(undefined2 *)&pFVar40[1].field_0x6a;
    iVar35 = pFVar40[1].OriginatingNode.WeakPtr.ObjectIndex;
    uVar2 = *(undefined8 *)&pFVar40[1].OriginatingNode.WeakPtr.ObjectSerialNumber;
    (pFVar44->Data).Data.field0_0x0 = TVar4;
    pFVar40[1].Data.WeakData.WeakPtr = FVar3;
    uVar15 = *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x8;
    *(undefined8 *)&pFVar40[1].Tags.Elements = *(undefined8 *)&pFVar42[-1].Tags.Elements;
    *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x8 = uVar15;
    uVar15 = *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x18;
    *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x10 =
         *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x10;
    *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x18 = uVar15;
    uVar15 = *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x28;
    *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x20 =
         *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x20;
    *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x28 = uVar15;
    uVar17 = pFVar42[-1].Tags.Hash.InlineData[0];
    uVar18 = pFVar42[-1].Tags.Hash.InlineData[1];
    uVar19 = pFVar42[-1].Tags.Hash.InlineData[2];
    uVar20 = pFVar42[-1].Tags.Hash.InlineData[3];
    iVar36 = pFVar42[-1].Tags.Hash._padding_;
    *(undefined8 *)&pFVar40[1].Tags.Elements.field_0x30 =
         *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x30;
    pFVar40[1].Tags.Hash.InlineData[0] = uVar17;
    pFVar40[1].Tags.Hash.InlineData[1] = uVar18;
    pFVar40[1].Tags.Hash.InlineData[2] = uVar19;
    pFVar40[1].Tags.Hash.InlineData[3] = uVar20;
    pFVar40[1].Tags.Hash._padding_ = iVar36;
    iVar36 = pFVar42[-1].Tags.HashSize;
    uVar21 = *(undefined4 *)&pFVar42[-1].Tags.field_0x4c;
    pFVar40[1].Tags.Hash.SecondaryData = pFVar42[-1].Tags.Hash.SecondaryData;
    pFVar40[1].Tags.HashSize = iVar36;
    *(undefined4 *)&pFVar40[1].Tags.field_0x4c = uVar21;
    bVar22 = pFVar42[-1].bPinlessData;
    bVar23 = pFVar42[-1].bIsUsedMultipleTimes;
    uVar24 = *(undefined2 *)&pFVar42[-1].field_0x6a;
    iVar36 = pFVar42[-1].OriginatingNode.WeakPtr.ObjectIndex;
    pFVar40[1].Pin = pFVar42[-1].Pin;
    pFVar40[1].bPinlessData = bVar22;
    pFVar40[1].bIsUsedMultipleTimes = bVar23;
    *(undefined2 *)&pFVar40[1].field_0x6a = uVar24;
    pFVar40[1].OriginatingNode.WeakPtr.ObjectIndex = iVar36;
    *(undefined8 *)&pFVar40[1].OriginatingNode.WeakPtr.ObjectSerialNumber =
         *(undefined8 *)&pFVar42[-1].OriginatingNode.WeakPtr.ObjectSerialNumber;
    (pFVar41->Data).Data.field0_0x0 = TVar16;
    pFVar42[-1].Data.WeakData.WeakPtr = FVar5;
    *(undefined8 *)&pFVar42[-1].Tags.Elements = uVar6;
    *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x8 = uVar7;
    *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x10 = uVar8;
    *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x18 = uVar9;
    *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x20 = uVar10;
    *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x28 = uVar11;
    *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x30 = uVar12;
    pFVar42[-1].Tags.Hash.InlineData[0] = uVar25;
    pFVar42[-1].Tags.Hash.InlineData[1] = uVar26;
    pFVar42[-1].Tags.Hash.InlineData[2] = uVar27;
    pFVar42[-1].Tags.Hash.InlineData[3] = uVar28;
    pFVar42[-1].Tags.Hash._padding_ = iVar29;
    pFVar42[-1].Tags.Hash.SecondaryData = FVar13;
    pFVar42[-1].Tags.HashSize = iVar30;
    *(undefined4 *)&pFVar42[-1].Tags.field_0x4c = uVar31;
    pFVar42[-1].Pin = FVar14;
    pFVar42[-1].bPinlessData = bVar32;
    pFVar42[-1].bIsUsedMultipleTimes = bVar33;
    *(undefined2 *)&pFVar42[-1].field_0x6a = uVar34;
    pFVar42[-1].OriginatingNode.WeakPtr.ObjectIndex = iVar35;
    *(undefined8 *)&pFVar42[-1].OriginatingNode.WeakPtr.ObjectSerialNumber = uVar2;
    goto LAB_149eeb8b3;
  }
  TVar16 = (pFVar43->Data).Data.field0_0x0;
  FVar5 = (pFVar43->Data).WeakData.WeakPtr;
  uVar6 = *(undefined8 *)&(pFVar43->Tags).Elements;
  uVar7 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x8;
  local_388._0_4_ = (int)local_388 + -1;
  uVar8 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x10;
  uVar9 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x18;
  lVar37 = (longlong)pFVar41 + (-0x78 - (longlong)pFVar43);
  uVar10 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x20;
  uVar11 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x28;
  uVar12 = *(undefined8 *)&(pFVar43->Tags).Elements.field_0x30;
  uVar25 = (pFVar43->Tags).Hash.InlineData[0];
  uVar26 = (pFVar43->Tags).Hash.InlineData[1];
  uVar27 = (pFVar43->Tags).Hash.InlineData[2];
  uVar28 = (pFVar43->Tags).Hash.InlineData[3];
  iVar29 = (pFVar43->Tags).Hash._padding_;
  FVar13 = (pFVar43->Tags).Hash.SecondaryData;
  iVar30 = (pFVar43->Tags).HashSize;
  uVar31 = *(undefined4 *)&(pFVar43->Tags).field_0x4c;
  FVar14 = pFVar43->Pin;
  bVar32 = pFVar43->bPinlessData;
  bVar33 = pFVar43->bIsUsedMultipleTimes;
  uVar34 = *(undefined2 *)&pFVar43->field_0x6a;
  iVar35 = (pFVar43->OriginatingNode).WeakPtr.ObjectIndex;
  uVar2 = *(undefined8 *)&(pFVar43->OriginatingNode).WeakPtr.ObjectSerialNumber;
  (pFVar43->Data).Data.field0_0x0 = TVar4;
  (pFVar43->Data).WeakData.WeakPtr = FVar3;
  uVar15 = *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x8;
  *(undefined8 *)&(pFVar43->Tags).Elements = *(undefined8 *)&pFVar42[-1].Tags.Elements;
  *(undefined8 *)&(pFVar43->Tags).Elements.field_0x8 = uVar15;
  uVar15 = *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x18;
  *(undefined8 *)&(pFVar43->Tags).Elements.field_0x10 =
       *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x10;
  *(undefined8 *)&(pFVar43->Tags).Elements.field_0x18 = uVar15;
  uVar15 = *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x28;
  lVar37 = lVar37 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar37),8);
  *(undefined8 *)&(pFVar43->Tags).Elements.field_0x20 =
       *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x20;
  *(undefined8 *)&(pFVar43->Tags).Elements.field_0x28 = uVar15;
  uVar17 = pFVar42[-1].Tags.Hash.InlineData[0];
  uVar18 = pFVar42[-1].Tags.Hash.InlineData[1];
  uVar19 = pFVar42[-1].Tags.Hash.InlineData[2];
  uVar20 = pFVar42[-1].Tags.Hash.InlineData[3];
  iVar36 = pFVar42[-1].Tags.Hash._padding_;
  *(undefined8 *)&(pFVar43->Tags).Elements.field_0x30 =
       *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x30;
  (pFVar43->Tags).Hash.InlineData[0] = uVar17;
  (pFVar43->Tags).Hash.InlineData[1] = uVar18;
  (pFVar43->Tags).Hash.InlineData[2] = uVar19;
  (pFVar43->Tags).Hash.InlineData[3] = uVar20;
  (pFVar43->Tags).Hash._padding_ = iVar36;
  iVar36 = pFVar42[-1].Tags.HashSize;
  uVar21 = *(undefined4 *)&pFVar42[-1].Tags.field_0x4c;
  (pFVar43->Tags).Hash.SecondaryData = pFVar42[-1].Tags.Hash.SecondaryData;
  (pFVar43->Tags).HashSize = iVar36;
  *(undefined4 *)&(pFVar43->Tags).field_0x4c = uVar21;
  bVar22 = pFVar42[-1].bPinlessData;
  bVar23 = pFVar42[-1].bIsUsedMultipleTimes;
  uVar24 = *(undefined2 *)&pFVar42[-1].field_0x6a;
  iVar36 = pFVar42[-1].OriginatingNode.WeakPtr.ObjectIndex;
  pFVar43->Pin = pFVar42[-1].Pin;
  pFVar43->bPinlessData = bVar22;
  pFVar43->bIsUsedMultipleTimes = bVar23;
  *(undefined2 *)&pFVar43->field_0x6a = uVar24;
  (pFVar43->OriginatingNode).WeakPtr.ObjectIndex = iVar36;
  lVar38 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar39 - (longlong)pFVar44),8) +
           ((longlong)pFVar39 - (longlong)pFVar44);
  *(undefined8 *)&(pFVar43->OriginatingNode).WeakPtr.ObjectSerialNumber =
       *(undefined8 *)&pFVar42[-1].OriginatingNode.WeakPtr.ObjectSerialNumber;
  (pFVar41->Data).Data.field0_0x0 = TVar16;
  pFVar42[-1].Data.WeakData.WeakPtr = FVar5;
  *(undefined8 *)&pFVar42[-1].Tags.Elements = uVar6;
  *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x8 = uVar7;
  *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x10 = uVar8;
  *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x18 = uVar9;
  *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x20 = uVar10;
  *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x28 = uVar11;
  *(undefined8 *)&pFVar42[-1].Tags.Elements.field_0x30 = uVar12;
  pFVar42[-1].Tags.Hash.InlineData[0] = uVar25;
  pFVar42[-1].Tags.Hash.InlineData[1] = uVar26;
  pFVar42[-1].Tags.Hash.InlineData[2] = uVar27;
  pFVar42[-1].Tags.Hash.InlineData[3] = uVar28;
  pFVar42[-1].Tags.Hash._padding_ = iVar29;
  pFVar42[-1].Tags.Hash.SecondaryData = FVar13;
  pFVar42[-1].Tags.HashSize = iVar30;
  *(undefined4 *)&pFVar42[-1].Tags.field_0x4c = uVar31;
  pFVar42[-1].Pin = FVar14;
  pFVar42[-1].bPinlessData = bVar32;
  pFVar42[-1].bIsUsedMultipleTimes = bVar33;
  *(undefined2 *)&pFVar42[-1].field_0x6a = uVar34;
  pFVar42[-1].OriginatingNode.WeakPtr.ObjectIndex = iVar35;
  *(undefined8 *)&pFVar42[-1].OriginatingNode.WeakPtr.ObjectSerialNumber = uVar2;
  if ((lVar37 >> 6) - (lVar37 >> 0x3f) < (lVar38 >> 6) - (lVar38 >> 0x3f)) {
    if (pFVar44 < pFVar39) {
      *ppFVar45 = pFVar44;
      ppFVar45[1] = pFVar39;
      *(int *)(ppFVar45 + 2) = (int)local_388;
      ppFVar45 = ppFVar45 + 3;
    }
    if (pFVar41 <= pFVar43 + 1) goto LAB_149eebae6;
    pFVar39 = pFVar42 + -2;
    pFVar44 = pFVar43;
  }
  else {
    if (pFVar43 + 1 < pFVar41) {
      *ppFVar45 = pFVar43;
      ppFVar45[1] = pFVar42 + -2;
      *(int *)(ppFVar45 + 2) = (int)local_388;
      ppFVar45 = ppFVar45 + 3;
    }
    if (pFVar39 <= pFVar44) goto LAB_149eebae6;
  }
  lVar37 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar39 - (longlong)pFVar44),8) +
           ((longlong)pFVar39 - (longlong)pFVar44);
  iVar36 = ((int)(lVar37 >> 6) - (int)(lVar37 >> 0x3f)) + 1;
  pFVar43 = pFVar44;
  if ((int)local_388 == 0) goto LAB_149eebad7;
  goto LAB_149eeb800;
}

// IsObjectPtrEqual<UPCGGraph,UPCGGraph_const_*,0> @ 149eebcd0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UPCGGraph,UPCGGraph_const_*,0>
          (TObjectPtr<UPCGGraph> *param_1,UPCGGraph **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UPCGGraph *)0x0) {
    return *param_2 == (UPCGGraph *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UPCGGraphInstance,UPCGGraphInterface_*,0> @ 149eebcf0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UPCGGraphInstance,UPCGGraphInterface_*,0>
          (TObjectPtr<UPCGGraphInstance> *param_1,UPCGGraphInterface **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UPCGGraphInstance *)0x0) {
    return (UPCGGraphInstance *)*param_2 == (UPCGGraphInstance *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (UPCGGraphInstance *)*param_2;
}

// IsObjectPtrEqual<UPCGGraphInterface,UPCGGraphInterface_*,0> @ 149eebd10

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UPCGGraphInterface,UPCGGraphInterface_*,0>
          (TObjectPtr<UPCGGraphInterface> *param_1,UPCGGraphInterface **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UPCGGraphInterface *)0x0) {
    return *param_2 == (UPCGGraphInterface *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UPCGNode,UPCGNode_*,0> @ 149eebd30

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UPCGNode,UPCGNode_*,0>
          (TObjectPtr<UPCGNode> *param_1,UPCGNode **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UPCGNode *)0x0) {
    return *param_2 == (UPCGNode *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MakeShared<FComputeGraphInstance,1> @ 149eebd50

TSharedRef<FComputeGraphInstance,1> * __cdecl
MakeShared<FComputeGraphInstance,1>(TSharedRef<FComputeGraphInstance,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FComputeGraphInstance,1> *pTVar4;
  
  pTVar3 = operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FComputeGraphInstance *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFComputeGraphInstance___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pTVar3[2]._padding_ + 2) = 0;
    *(undefined2 *)((longlong)&pTVar3[2]._padding_ + 6) = 0;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTVar3[2]._padding_ = 0;
    __return_storage_ptr__->Object = (FComputeGraphInstance *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FComputeGraphInstance *)(pTVar3 + 1) == (FComputeGraphInstance *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FComputeGraphInstance,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MutableView<TObjectPtr<UPCGData>_> @ 149eebe00

TMutableView<TObjectPtr<UPCGData>_> __cdecl
MutableView<TObjectPtr<UPCGData>_>(TObjectPtr<UPCGData> *param_1)

{
  TObjectPtr<UPCGData>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UPCGData>_>)(UPCGData **)param_1;
}

// MutableView<TObjectPtr<UPCGSettings>_> @ 149eebe10

TMutableView<TObjectPtr<UPCGSettings>_> __cdecl
MutableView<TObjectPtr<UPCGSettings>_>(TObjectPtr<UPCGSettings> *param_1)

{
  TObjectPtr<UPCGSettings>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UPCGSettings>_>)(UPCGSettings **)param_1;
}

// NewObject<UPCGGraphInstance> @ 149eebe20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGGraphInstance * __cdecl
NewObject<UPCGGraphInstance>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPCGGraphInstance *pUVar2;
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
  pUVar1 = UPCGGraphInstance::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPCGGraphInstance *)
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

// NewObject<UPCGManagedComponentDefaultList> @ 149eebf10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGManagedComponentDefaultList * __cdecl
NewObject<UPCGManagedComponentDefaultList>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGManagedComponentDefaultList *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGManagedComponentDefaultList_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGManagedComponentDefaultList *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPCGSchedulingPolicyBase> @ 149eebfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGSchedulingPolicyBase * __cdecl
NewObject<UPCGSchedulingPolicyBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UPCGSchedulingPolicyBase *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UPCGSchedulingPolicyBase_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UPCGSchedulingPolicyBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPCGSettings> @ 149eec0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGSettings * __cdecl
NewObject<UPCGSettings>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UPCGSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UPCGSettings_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UPCGSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPCGSettingsInstance> @ 149eec1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGSettingsInstance * __cdecl NewObject<UPCGSettingsInstance>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGSettingsInstance *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGSettingsInstance_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGSettingsInstance *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// ObjectPtrWrap<UPCGData_*,TObjectPtr<UPCGData>_> @ 149eec250

TObjectPtr<UPCGData> * __cdecl ObjectPtrWrap<UPCGData_*,TObjectPtr<UPCGData>_>(UPCGData **param_1)

{
  return (TObjectPtr<UPCGData> *)param_1;
}

// ObjectPtrWrap<UPCGSettings_*,TObjectPtr<UPCGSettings>_> @ 149eec260

TObjectPtr<UPCGSettings> * __cdecl
ObjectPtrWrap<UPCGSettings_*,TObjectPtr<UPCGSettings>_>(UPCGSettings **param_1)

{
  return (TObjectPtr<UPCGSettings> *)param_1;
}

// RemoveAll<`FPCGDataCollection::StripEmptyPointData'::__l2::<lambda_1>_> @ 149eec4a0

int __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
RemoveAll<_FPCGDataCollection::StripEmptyPointData_::__l2::<lambda_1>_>
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  FObjectPtr_u_0 *pFVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  UClass *pUVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  FObjectPtr_u_0 *pFVar11;
  int iVar12;
  byte bVar13;
  FObjectPtr_u_0 local_res20;
  
  iVar1 = this->ArrayNum;
  lVar8 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar12 = 0;
  pFVar2 = (FObjectPtr_u_0 *)(this->AllocatorInstance).Data;
  local_res20 = (FObjectPtr_u_0)pFVar2->Handle;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (local_res20.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res20.Handle);
      goto LAB_149eec51a;
    }
  }
  else {
LAB_149eec51a:
    if (local_res20.Handle != (UObject *)0x0) {
      pUVar7 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res20,pUVar7);
      if (((bVar3) && (local_res20.Handle != (UObject *)0x0)) &&
         (iVar5 = (**(code **)(*(longlong *)local_res20.Handle + 0x488))(), iVar5 == 0)) {
        bVar13 = 0;
        goto LAB_149eec55a;
      }
    }
  }
  bVar13 = 1;
LAB_149eec55a:
  lVar9 = 0;
  iVar5 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar10 = iVar5 + 1;
    if (lVar9 < lVar8) {
      pFVar11 = pFVar2 + lVar9 * 0xf;
      do {
        local_res20 = (FObjectPtr_u_0)pFVar11->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149eec5a9:
          if (local_res20.Handle == (UObject *)0x0) goto LAB_149eec5e1;
          pUVar7 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
          bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res20,pUVar7);
          if ((!bVar3) || (local_res20.Handle == (UObject *)0x0)) goto LAB_149eec5e1;
          iVar6 = (**(code **)(*(longlong *)local_res20.Handle + 0x488))();
          bVar4 = 0;
          if (iVar6 != 0) goto LAB_149eec5e1;
        }
        else {
          if (local_res20.Handle != (UObject *)0x0) {
            UE::GC::MarkAsReachable(local_res20.Handle);
            goto LAB_149eec5a9;
          }
LAB_149eec5e1:
          bVar4 = 1;
        }
        if (bVar13 != bVar4) break;
        iVar10 = iVar10 + 1;
        lVar9 = lVar9 + 1;
        pFVar11 = pFVar11 + 0xf;
      } while (lVar9 < lVar8);
    }
    iVar6 = iVar10 - iVar5;
    if (bVar13 == 0) {
      DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)(pFVar2 + (longlong)iVar5 * 0xf),iVar6);
    }
    else {
      if (iVar12 != iVar5) {
        memmove(pFVar2 + (longlong)iVar12 * 0xf,pFVar2 + (longlong)iVar5 * 0xf,
                (longlong)iVar6 * 0x78);
      }
      iVar12 = iVar12 + iVar6;
    }
    bVar13 = bVar13 ^ 1;
    iVar5 = iVar10;
    if (lVar8 <= lVar9) {
      this->ArrayNum = iVar12;
      return iVar1 - iVar12;
    }
  } while( true );
}

// StaticEnum<enum_EPCGAttachOptions> @ 149eec890

UEnum * __cdecl StaticEnum<enum_EPCGAttachOptions>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGAttachOptions.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGAttachOptions.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGAttachOptions,(UObject *)pUVar1,
                       L"EPCGAttachOptions");
  }
  return Z_Registration_Info_UEnum_EPCGAttachOptions.OuterSingleton;
}

// StaticEnum<enum_EPCGChangeType> @ 149eec8d0

UEnum * __cdecl StaticEnum<enum_EPCGChangeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGChangeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGChangeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGChangeType,(UObject *)pUVar1,L"EPCGChangeType");
  }
  return Z_Registration_Info_UEnum_EPCGChangeType.OuterSingleton;
}

// StaticEnum<enum_EPCGComponentDirtyFlag> @ 149eec910

UEnum * __cdecl StaticEnum<enum_EPCGComponentDirtyFlag>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGComponentDirtyFlag.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGComponentDirtyFlag.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGComponentDirtyFlag,(UObject *)pUVar1,
                       L"EPCGComponentDirtyFlag");
  }
  return Z_Registration_Info_UEnum_EPCGComponentDirtyFlag.OuterSingleton;
}

// StaticEnum<enum_EPCGComponentGenerationTrigger> @ 149eec950

UEnum * __cdecl StaticEnum<enum_EPCGComponentGenerationTrigger>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGComponentGenerationTrigger.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGComponentGenerationTrigger.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger,(UObject *)pUVar1,
                       L"EPCGComponentGenerationTrigger");
  }
  return Z_Registration_Info_UEnum_EPCGComponentGenerationTrigger.OuterSingleton;
}

// StaticEnum<enum_EPCGComponentInput> @ 149eec990

UEnum * __cdecl StaticEnum<enum_EPCGComponentInput>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGComponentInput.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGComponentInput.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGComponentInput,(UObject *)pUVar1,
                       L"EPCGComponentInput");
  }
  return Z_Registration_Info_UEnum_EPCGComponentInput.OuterSingleton;
}

// StaticEnum<enum_EPCGContainerType> @ 149eec9d0

UEnum * __cdecl StaticEnum<enum_EPCGContainerType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGContainerType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGContainerType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGContainerType,(UObject *)pUVar1,
                       L"EPCGContainerType");
  }
  return Z_Registration_Info_UEnum_EPCGContainerType.OuterSingleton;
}

// StaticEnum<enum_EPCGCoordinateSpace> @ 149eeca10

UEnum * __cdecl StaticEnum<enum_EPCGCoordinateSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGCoordinateSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGCoordinateSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGCoordinateSpace,(UObject *)pUVar1,
                       L"EPCGCoordinateSpace");
  }
  return Z_Registration_Info_UEnum_EPCGCoordinateSpace.OuterSingleton;
}

// StaticEnum<enum_EPCGDataType> @ 149eeca50

UEnum * __cdecl StaticEnum<enum_EPCGDataType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGDataType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGDataType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDataType,(UObject *)pUVar1,L"EPCGDataType");
  }
  return Z_Registration_Info_UEnum_EPCGDataType.OuterSingleton;
}

// StaticEnum<enum_EPCGDataUsage> @ 149eeca90

UEnum * __cdecl StaticEnum<enum_EPCGDataUsage>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGDataUsage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGDataUsage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDataUsage,(UObject *)pUVar1,L"EPCGDataUsage");
  }
  return Z_Registration_Info_UEnum_EPCGDataUsage.OuterSingleton;
}

// StaticEnum<enum_EPCGDebugVisScaleMethod> @ 149eecad0

UEnum * __cdecl StaticEnum<enum_EPCGDebugVisScaleMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGDebugVisScaleMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGDebugVisScaleMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDebugVisScaleMethod,(UObject *)pUVar1,
                       L"EPCGDebugVisScaleMethod");
  }
  return Z_Registration_Info_UEnum_EPCGDebugVisScaleMethod.OuterSingleton;
}

// StaticEnum<enum_EPCGDensityMergeOperation> @ 149eecb10

UEnum * __cdecl StaticEnum<enum_EPCGDensityMergeOperation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGDensityMergeOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGDensityMergeOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDensityMergeOperation,(UObject *)pUVar1,
                       L"EPCGDensityMergeOperation");
  }
  return Z_Registration_Info_UEnum_EPCGDensityMergeOperation.OuterSingleton;
}

// StaticEnum<enum_EPCGEditorDirtyMode> @ 149eecb50

UEnum * __cdecl StaticEnum<enum_EPCGEditorDirtyMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGEditorDirtyMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGEditorDirtyMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGEditorDirtyMode,(UObject *)pUVar1,
                       L"EPCGEditorDirtyMode");
  }
  return Z_Registration_Info_UEnum_EPCGEditorDirtyMode.OuterSingleton;
}

// StaticEnum<enum_EPCGExclusiveDataType> @ 149eecb90

UEnum * __cdecl StaticEnum<enum_EPCGExclusiveDataType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGExclusiveDataType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGExclusiveDataType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGExclusiveDataType,(UObject *)pUVar1,
                       L"EPCGExclusiveDataType");
  }
  return Z_Registration_Info_UEnum_EPCGExclusiveDataType.OuterSingleton;
}

// StaticEnum<enum_EPCGExecutionPhase> @ 149eecbd0

UEnum * __cdecl StaticEnum<enum_EPCGExecutionPhase>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGExecutionPhase.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGExecutionPhase.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGExecutionPhase,(UObject *)pUVar1,
                       L"EPCGExecutionPhase");
  }
  return Z_Registration_Info_UEnum_EPCGExecutionPhase.OuterSingleton;
}

// StaticEnum<enum_EPCGGenerationStatus> @ 149eecc10

UEnum * __cdecl StaticEnum<enum_EPCGGenerationStatus>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGGenerationStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGGenerationStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGGenerationStatus,(UObject *)pUVar1,
                       L"EPCGGenerationStatus");
  }
  return Z_Registration_Info_UEnum_EPCGGenerationStatus.OuterSingleton;
}

// StaticEnum<enum_EPCGHiGenGrid> @ 149eecc50

UEnum * __cdecl StaticEnum<enum_EPCGHiGenGrid>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGHiGenGrid.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGHiGenGrid.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGHiGenGrid,(UObject *)pUVar1,L"EPCGHiGenGrid");
  }
  return Z_Registration_Info_UEnum_EPCGHiGenGrid.OuterSingleton;
}

// StaticEnum<enum_EPCGNodeTitleType> @ 149eecc90

UEnum * __cdecl StaticEnum<enum_EPCGNodeTitleType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGNodeTitleType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGNodeTitleType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGNodeTitleType,(UObject *)pUVar1,
                       L"EPCGNodeTitleType");
  }
  return Z_Registration_Info_UEnum_EPCGNodeTitleType.OuterSingleton;
}

// StaticEnum<enum_EPCGStringMatchingOperator> @ 149eeccd0

UEnum * __cdecl StaticEnum<enum_EPCGStringMatchingOperator>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGStringMatchingOperator.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGStringMatchingOperator.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGStringMatchingOperator,(UObject *)pUVar1,
                       L"EPCGStringMatchingOperator");
  }
  return Z_Registration_Info_UEnum_EPCGStringMatchingOperator.OuterSingleton;
}

// Transform<TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_>_&,`UPCGComponent::AddComponentsToManagedResources'::__l2::<lambda_1>_> @ 149eecd10

/* WARNING: Removing unreachable block (ram,0x000149eece94) */

void __cdecl
Algo::
Transform<TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_>_&,_UPCGComponent::AddComponentsToManagedResources_::__l2::<lambda_1>_>
          (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSoftObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  UObject *local_68;
  undefined1 local_60 [24];
  FUtf8String local_48;
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UActorComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pUVar3 = *(UObject **)pFVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60._16_8_ = 0;
    local_60._8_8_ = 0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_60._0_8_ = 0;
    FUtf8String::Reset(&local_48,0);
    local_68 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)local_60,(FObjectPtr)&local_68);
    pFVar4 = (param_2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_60) &&
        ((FScriptContainerElement *)local_60 < pFVar4 + (longlong)param_2->ArrayMax * 0x28)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar7 + 1;
    pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x28;
    *(undefined8 *)pFVar4 = local_60._0_8_;
    *(undefined8 *)(pFVar4 + 8) = local_60._8_8_;
    *(undefined8 *)(pFVar4 + 0x10) = local_60._16_8_;
    *(undefined8 *)(pFVar4 + 0x18) = 0;
    *(FScriptContainerElement **)(pFVar4 + 0x18) = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar4 + 0x20) = local_48.Data.ArrayNum;
    *(int *)(pFVar4 + 0x24) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pFVar8 = pFVar8 + 8;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Transform<TArray<PCGInputOutputPrivate::FLabelAndTooltip,TSizedDefaultAllocator<32>_>,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>_&,`UPCGGraphInputOutputSettings::DefaultPinProperties'::__l2::<lambda_1>_> @ 149eeced0

/* WARNING: Removing unreachable block (ram,0x000149eed08e) */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __cdecl
Algo::
Transform<TArray<PCGInputOutputPrivate::FLabelAndTooltip,TSizedDefaultAllocator<32>_>,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>_&,_UPCGGraphInputOutputSettings::DefaultPinProperties_::__l2::<lambda_1>_>
          (TArray<PCGInputOutputPrivate::FLabelAndTooltip,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FName *pFVar1;
  int iVar2;
  FPCGPinProperties *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPCGDataTypeIdentifier *pFVar7;
  FName *pFVar8;
  FName *pFVar9;
  undefined1 local_res8 [8];
  EPCGDataType EStackX_1c;
  FPCGDataTypeIdentifier local_88;
  FPCGPinProperties local_70;
  
  iVar2 = param_1->ArrayNum;
  pFVar9 = (FName *)(param_1->AllocatorInstance).Data;
  pFVar1 = pFVar9 + (longlong)iVar2 * 3;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<PCGInputOutputPrivate::FLabelAndTooltip_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    EStackX_1c = param_3.DefaultPinDataType;
    pFVar7 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_88,EStackX_1c);
    FPCGPinProperties::FPCGPinProperties(&local_70,pFVar9,pFVar7,true,true,(FText *)(pFVar9 + 1));
    pFVar3 = (FPCGPinProperties *)(param_2->AllocatorInstance).Data;
    local_70.bInvisiblePin = param_3.bInvisiblePin;
    local_70.PinStatus = Advanced;
    if (((pFVar3 <= &local_70) && (&local_70 < pFVar3 + param_2->ArrayMax)) &&
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
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar6;
    }
    param_2->ArrayNum = iVar6 + 1;
    pFVar8 = (FName *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x30);
    *pFVar8 = local_70.Label;
    pFVar8[2].ComparisonIndex = 0;
    pFVar8[2].Number = 0;
    *(EPCGPinUsage *)&pFVar8[1].ComparisonIndex.Value = local_70.Usage;
    pFVar8[2] = (FName)local_70.AllowedTypes.Ids.AllocatorInstance.Data;
    local_70.AllowedTypes.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[3].ComparisonIndex.Value = local_70.AllowedTypes.Ids.ArrayNum;
    pFVar8[3].Number = local_70.AllowedTypes.Ids.ArrayMax;
    local_70.AllowedTypes.Ids.ArrayNum = 0;
    local_70.AllowedTypes.Ids.ArrayMax = 0;
    pFVar8[4].ComparisonIndex.Value = local_70.AllowedTypes.CustomSubtype;
    *(bool *)&pFVar8[5].ComparisonIndex.Value = local_70.bAllowMultipleData;
    *(EPCGPinStatus *)((longlong)&pFVar8[5].ComparisonIndex.Value + 1) = local_70.PinStatus;
    *(bool *)((longlong)&pFVar8[5].ComparisonIndex.Value + 2) = local_70.bInvisiblePin;
    *(bool *)((longlong)&pFVar8[5].ComparisonIndex.Value + 3) = local_70.bAllowMultipleConnections;
    pFVar9 = pFVar9 + 3;
  }
  return;
}

// Transform<TArray<PCGInputOutputPrivate::FLabelAndTooltip,TSizedDefaultAllocator<32>_>,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>_&,`UPCGGraphInputOutputSettings::SetInput'::__l8::<lambda_1>_> @ 149eed0c0

/* WARNING: Removing unreachable block (ram,0x000149eed27b) */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __cdecl
Algo::
Transform<TArray<PCGInputOutputPrivate::FLabelAndTooltip,TSizedDefaultAllocator<32>_>,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>_&,_UPCGGraphInputOutputSettings::SetInput_::__l8::<lambda_1>_>
          (TArray<PCGInputOutputPrivate::FLabelAndTooltip,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FName *pFVar1;
  int iVar2;
  FPCGPinProperties *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPCGDataTypeIdentifier *pFVar7;
  FName *pFVar8;
  FName *pFVar9;
  undefined1 local_res8 [8];
  FPCGDataTypeIdentifier local_78;
  FPCGPinProperties local_60;
  
  iVar2 = param_1->ArrayNum;
  pFVar9 = (FName *)(param_1->AllocatorInstance).Data;
  pFVar1 = pFVar9 + (longlong)iVar2 * 3;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<PCGInputOutputPrivate::FLabelAndTooltip_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    pFVar7 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_78,param_3.DefaultPinDataType);
    FPCGPinProperties::FPCGPinProperties(&local_60,pFVar9,pFVar7,true,true,(FText *)(pFVar9 + 1));
    pFVar3 = (FPCGPinProperties *)(param_2->AllocatorInstance).Data;
    local_60.PinStatus = Advanced;
    if (((pFVar3 <= &local_60) && (&local_60 < pFVar3 + param_2->ArrayMax)) &&
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
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar6;
    }
    param_2->ArrayNum = iVar6 + 1;
    pFVar8 = (FName *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x30);
    *pFVar8 = local_60.Label;
    pFVar8[2].ComparisonIndex = 0;
    pFVar8[2].Number = 0;
    *(EPCGPinUsage *)&pFVar8[1].ComparisonIndex.Value = local_60.Usage;
    pFVar8[2] = (FName)local_60.AllowedTypes.Ids.AllocatorInstance.Data;
    local_60.AllowedTypes.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[3].ComparisonIndex.Value = local_60.AllowedTypes.Ids.ArrayNum;
    pFVar8[3].Number = local_60.AllowedTypes.Ids.ArrayMax;
    local_60.AllowedTypes.Ids.ArrayNum = 0;
    local_60.AllowedTypes.Ids.ArrayMax = 0;
    pFVar8[4].ComparisonIndex.Value = local_60.AllowedTypes.CustomSubtype;
    *(bool *)&pFVar8[5].ComparisonIndex.Value = local_60.bAllowMultipleData;
    *(EPCGPinStatus *)((longlong)&pFVar8[5].ComparisonIndex.Value + 1) = local_60.PinStatus;
    *(bool *)((longlong)&pFVar8[5].ComparisonIndex.Value + 2) = local_60.bInvisiblePin;
    *(bool *)((longlong)&pFVar8[5].ComparisonIndex.Value + 3) = local_60.bAllowMultipleConnections;
    pFVar9 = pFVar9 + 3;
  }
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ConvertInputsIfNeeded'::__l23::<lambda_1>_>'::__l2::<lambda_1>,1,0> @ 149eeefa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ConvertInputsIfNeeded'::__l23::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_IPCGElement::ConvertInputsIfNeeded_::__l23::<lambda_1>_>_::__l2::<lambda_1>,1,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ConvertInputsIfNeeded'::`23'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000149eeefca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ReadbackGPUDataForOverrides'::__l33::<lambda_2>_>'::__l2::<lambda_1>,1,0> @ 149eeefe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ReadbackGPUDataForOverrides'::__l33::<lambda_2>_>'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_IPCGElement::ReadbackGPUDataForOverrides_::__l33::<lambda_2>_>_::__l2::<lambda_1>,1,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ReadbackGPUDataForOverrides'::`33'::<lambda_2>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000149eef00a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<``UPCGComponent::CleanupLocalDeleteAllGeneratedObjects'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0> @ 149eef020

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UPCGComponent::CleanupLocalDeleteAllGeneratedObjects'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__UPCGComponent::CleanupLocalDeleteAllGeneratedObjects_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UPCGComponent::CleanupLocalDeleteAllGeneratedObjects'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::__l2::<lambda_1>,0,1> @ 149eef040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UPCGComponent::CreateCleanupTask_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::`2'::<lambda_1>,0,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UPCGDefaultExecutionSource::Generate'::__l11::<lambda_1>,0,1> @ 149eef060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGDefaultExecutionSource::Generate'::__l11::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UPCGDefaultExecutionSource::Generate_::__l11::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGDefaultExecutionSource::Generate'::`11'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::__l2::<lambda_2>,0,1> @ 149eef080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::__l2::<lambda_2>,0,1>::
~TFunction_OwnedObject<_UPCGComponent::CreateCleanupTask_::__l2::<lambda_2>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::`2'::<lambda_2>,0,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// operator() @ 149ef1450

void __thiscall
PCGFeatureSwitches::<lambda_25>::operator()(<lambda_25> *this,IConsoleVariable *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ForAnyElementType FVar3;
  float fVar4;
  undefined1 local_68 [16];
  FString local_58;
  uint local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  fVar4 = (float)(**(code **)(*(longlong *)param_1 + 0xd0))(param_1);
  if ((fVar4 < 0.0) ||
     (fVar4 = (float)(**(code **)(*(longlong *)param_1 + 0xd0))(param_1), __real_3f800000 < fVar4))
  {
    (**(code **)(*(longlong *)param_1 + 0xd0))(param_1);
    local_40 = 0;
    local_38 = 0;
    local_44 = 1;
    local_30 = 0x1000000;
    local_34 = 0xf000000;
    local_48 = (**(code **)(*(longlong *)param_1 + 0x18))(param_1);
    local_48 = local_48 & 0xff000000;
    ::FString::PrintfImpl(&local_58,L"%g");
    lVar1 = *(longlong *)param_1;
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar3.Data = local_58.Data.AllocatorInstance.Data;
    }
    uVar2 = (**(code **)(lVar1 + 0xa8))(param_1,local_68,&local_48);
    (**(code **)(lVar1 + 0xb0))(param_1,FVar3.Data,uVar2);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// `vcall'{2720,{flat}}'_}' @ 149ef2008

/* [thunk]: __cdecl UPCGDebugDrawComponent::`vcall'{2720,{flat}}' }' */

void __thiscall UPCGDebugDrawComponent::_vcall__2720__flat______(UPCGDebugDrawComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149ef200b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xaa0))();
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 149ef2018

/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPCGComponent::_vector_deleting_destructor__adjustor_40__(UPCGComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPCGComponent *)this[-1].GeneratedResourcesLock.CriticalSection.Opaque3,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 149ef2028

/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGComponent::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UPCGComponent::_vector_deleting_destructor__adjustor_192__(UPCGComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPCGComponent *)&this[-1].GeneratedGraphOutput.DataCrcs,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 149ef203c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGDebugDrawComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UPCGDebugDrawComponent::_vector_deleting_destructor__adjustor_592__
          (UPCGDebugDrawComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPCGDebugDrawComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 149ef2050

/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGDebugDrawComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UPCGDebugDrawComponent::_vector_deleting_destructor__adjustor_600__
          (UPCGDebugDrawComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPCGDebugDrawComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 149ef2064

/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGDebugDrawComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UPCGDebugDrawComponent::_vector_deleting_destructor__adjustor_608__
          (UPCGDebugDrawComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPCGDebugDrawComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 149ef2078

/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGDebugDrawComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPCGDebugDrawComponent::_vector_deleting_destructor__adjustor_40__
          (UPCGDebugDrawComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPCGDebugDrawComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 149ef2088

/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGDefaultExecutionSource::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPCGDefaultExecutionSource::_vector_deleting_destructor__adjustor_40__
          (UPCGDefaultExecutionSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPCGDefaultExecutionSource *)&this[-1].CurrentGenerationTask,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 149ef20a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPCGDebugDrawComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UPCGDebugDrawComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef20d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ConvertInputsIfNeeded'::__l23::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ConvertInputsIfNeeded'::`23'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ReadbackGPUDataForOverrides'::__l33::<lambda_2>_>'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ReadbackGPUDataForOverrides'::`33'::<lambda_2>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef21b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UPCGComponent::CleanupLocalDeleteAllGeneratedObjects'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UPCGComponent::CleanupLocalDeleteAllGeneratedObjects'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef21f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::`2'::<lambda_1>,0,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGDefaultExecutionSource::Generate'::__l11::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGDefaultExecutionSource::Generate'::`11'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::__l2::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::`2'::<lambda_2>,0,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef22d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`UPCGComponent::CreateCleanupTask'::__l2::FCleanupContext,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2310

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FComputeGraphInstance,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FComputeGraphInstance,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2350

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGInputOutputElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGInputOutputElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2390

void * __thiscall
FPCGComponentExecutionState::_scalar_deleting_destructor_
          (FPCGComponentExecutionState *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef23c0

void * __thiscall
FPCGDefaultExecutionState::_scalar_deleting_destructor_
          (FPCGDefaultExecutionState *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef23f0

void * __thiscall
FPCGInputOutputElement::_scalar_deleting_destructor_(FPCGInputOutputElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2420

void * __thiscall
IPCGGraphExecutionSource::_scalar_deleting_destructor_(IPCGGraphExecutionSource *this,uint param_1)

{
  *this = (IPCGGraphExecutionSource)&___7IPCGGraphExecutionSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2460

void * __thiscall
IPCGGraphExecutionState::_scalar_deleting_destructor_(IPCGGraphExecutionState *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2490

void * __thiscall
UPCGAssetExporter::_scalar_deleting_destructor_(UPCGAssetExporter *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGAssetExporter__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef24f0

void * __thiscall
UPCGAssetExporterUtils::_scalar_deleting_destructor_(UPCGAssetExporterUtils *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGAssetExporterUtils__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2550

void * __thiscall UPCGComponent::_scalar_deleting_destructor_(UPCGComponent *this,uint param_1)

{
  ~UPCGComponent(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef25b0

void * __thiscall UPCGData::_scalar_deleting_destructor_(UPCGData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGData__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2610

void * __thiscall
UPCGDataFunctionLibrary::_scalar_deleting_destructor_(UPCGDataFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGDataFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2670

void * __thiscall
UPCGDebugDrawComponent::_scalar_deleting_destructor_(UPCGDebugDrawComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  UDebugDrawComponent::~UDebugDrawComponent((UDebugDrawComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x5c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2710

void * __thiscall
UPCGDefaultExecutionSource::_scalar_deleting_destructor_
          (UPCGDefaultExecutionSource *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPCGGraphExecutionSource__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2780

void * __thiscall UPCGEdge::_scalar_deleting_destructor_(UPCGEdge *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGEdge__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef27e0

void * __thiscall
UPCGEngineSettings::_scalar_deleting_destructor_(UPCGEngineSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGEngineSettings__6B_;
  UDeveloperSettingsBackedByCVars::~UDeveloperSettingsBackedByCVars
            ((UDeveloperSettingsBackedByCVars *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2840

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void * __thiscall UPCGGraph::_scalar_deleting_destructor_(UPCGGraph *this,uint param_1)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  void *pvVar6;
  
  this->_padding_ = (longlong)&___7UPCGGraph__6B_;
  *(undefined4 *)&(this->AllComputeGraphInstances).field_0x48 = 0;
  pvVar6 = *(void **)&(this->AllComputeGraphInstances).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllComputeGraphInstances);
  *(undefined4 *)&(this->AvailableComputeGraphInstances).field_0x48 = 0;
  pvVar6 = *(void **)&(this->AvailableComputeGraphInstances).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AvailableComputeGraphInstances);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CachedGridInfoLock);
  *(undefined4 *)&(this->ChildGridSizeToParentGridSizes).field_0x48 = 0;
  pvVar6 = *(void **)&(this->ChildGridSizeToParentGridSizes).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChildGridSizeToParentGridSizes);
  if (((this->CachedGridInfo).bIsSet != false) &&
     (FVar1 = (this->CachedGridInfo).TypedValue.GridSizes.AllocatorInstance.SecondaryData,
     FVar1 != (ForElementType<unsigned_int>)0x0)) {
    FMemory::Free((void *)FVar1);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->NodeToGridSizeLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->NodeToGridSizeLock);
  }
  *(undefined4 *)&(this->NodeToAllGridSizes).field_0x48 = 0;
  pvVar6 = *(void **)&(this->NodeToAllGridSizes).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NodeToAllGridSizes);
  *(undefined4 *)&(this->NodeToGridSize).field_0x48 = 0;
  pvVar6 = *(void **)&(this->NodeToGridSize).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NodeToGridSize);
  FInstancedStruct::Reset(&(this->UserParameters).Value);
  pFVar2 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7UPCGGraphInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x2f8);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef29f0

void * __thiscall
UPCGGraphExecutionSource::_scalar_deleting_destructor_(UPCGGraphExecutionSource *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2a50

void * __thiscall
UPCGGraphInputOutputSettings::_scalar_deleting_destructor_
          (UPCGGraphInputOutputSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7UPCGGraphInputOutputSettings__6B_;
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)(this->CustomPins_DEPRECATED).AllocatorInstance.Data,
             (this->CustomPins_DEPRECATED).ArrayNum);
  pFVar1 = (this->CustomPins_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->PinLabels_DEPRECATED).HashSize = 0;
  FVar2 = (this->PinLabels_DEPRECATED).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PinLabels_DEPRECATED).Elements);
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)(this->Pins).AllocatorInstance.Data,(this->Pins).ArrayNum);
  pFVar1 = (this->Pins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2b30

void * __thiscall
UPCGGraphInstance::_scalar_deleting_destructor_(UPCGGraphInstance *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7UPCGGraphInstance__6B_;
  (this->ParametersOverrides).PropertiesIDsOverridden.HashSize = 0;
  FVar1 = (this->ParametersOverrides).PropertiesIDsOverridden.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ParametersOverrides).PropertiesIDsOverridden.Elements);
  FInstancedStruct::Reset((FInstancedStruct *)&this->ParametersOverrides);
  this->_padding_ = (longlong)&___7UPCGGraphInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x90);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2bd0

void * __thiscall
UPCGGraphInterface::_scalar_deleting_destructor_(UPCGGraphInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGGraphInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ef2c30

void * __thiscall
UPCGManagedDebugDrawComponent::_scalar_deleting_destructor_
          (UPCGManagedDebugDrawComponent *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGManagedDebugDrawComponent__6B_;
  UPCGManagedComponent::~UPCGManagedComponent((UPCGManagedComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// ArePropertiesCompatible @ 149ef51c0

bool __cdecl
PCGGraphUtils::ArePropertiesCompatible
          (FPropertyBagPropertyDesc *param_1,FPropertyBagPropertyDesc *param_2)

{
  bool bVar1;
  
  if ((param_1 != (FPropertyBagPropertyDesc *)0x0) && (param_2 != (FPropertyBagPropertyDesc *)0x0))
  {
    bVar1 = FPropertyBagPropertyDesc::CompatibleType(param_1,param_2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// ArePropertiesIdentical @ 149ef51f0

bool __cdecl
PCGGraphUtils::ArePropertiesIdentical
          (FPropertyBagPropertyDesc *param_1,FInstancedPropertyBag *param_2,
          FPropertyBagPropertyDesc *param_3,FInstancedPropertyBag *param_4)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (((((((param_2->Value).StructMemory != (uchar *)0x0) &&
         ((param_2->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) &&
        ((param_4->Value).StructMemory != (uchar *)0x0)) &&
       (((param_4->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0 &&
        (param_1 != (FPropertyBagPropertyDesc *)0x0)))) &&
      ((param_1->CachedProperty != (FProperty *)0x0 &&
       ((param_3 != (FPropertyBagPropertyDesc *)0x0 && (param_3->CachedProperty != (FProperty *)0x0)
        ))))) && (bVar2 = FPropertyBagPropertyDesc::CompatibleType(param_1,param_3), bVar2)) {
    pFVar1 = param_1->CachedProperty;
    uVar3 = (**(code **)(pFVar1->_padding_ + 0xb8))
                      (pFVar1,(param_2->Value).StructMemory + pFVar1->Offset_Internal,
                       (param_4->Value).StructMemory + param_3->CachedProperty->Offset_Internal,0);
    return (bool)uVar3;
  }
  return false;
}

// CopyPropertyValue @ 149ef9780

void __cdecl
PCGGraphUtils::CopyPropertyValue
          (FPropertyBagPropertyDesc *param_1,FInstancedPropertyBag *param_2,
          FPropertyBagPropertyDesc *param_3,FInstancedPropertyBag *param_4)

{
  FProperty *pFVar1;
  bool bVar2;
  uchar *_Src;
  uchar *_Dst;
  
  if ((((((param_2->Value).StructMemory != (uchar *)0x0) &&
        ((param_2->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) &&
       ((param_4->Value).StructMemory != (uchar *)0x0)) &&
      (((param_4->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0 &&
       (param_1 != (FPropertyBagPropertyDesc *)0x0)))) &&
     ((param_1->CachedProperty != (FProperty *)0x0 &&
      ((param_3 != (FPropertyBagPropertyDesc *)0x0 && (param_3->CachedProperty != (FProperty *)0x0))
      )))) {
    bVar2 = FPropertyBagPropertyDesc::CompatibleType(param_1,param_3);
    if (bVar2) {
      pFVar1 = param_1->CachedProperty;
      _Src = (param_2->Value).StructMemory + pFVar1->Offset_Internal;
      _Dst = (param_4->Value).StructMemory + param_3->CachedProperty->Offset_Internal;
      if (_Dst != _Src) {
        if (((uint)(int)pFVar1->PropertyFlags >> 0x1e & 1) == 0) {
          (**(code **)(pFVar1->_padding_ + 0xf0))(pFVar1,_Dst,_Src,pFVar1->ArrayDim);
        }
        else {
          memcpy(_Dst,_Src,(longlong)pFVar1->ElementSize * (longlong)pFVar1->ArrayDim);
        }
      }
    }
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGAssetExporter @ 149efc1a0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGAssetExporter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGAssetExporterUtils @ 149efc1b0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGAssetExporterUtils(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGCommon @ 149efc1c0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGCommon(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGComponent @ 149efc1d0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGContext @ 149efc1e0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGContext(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGData @ 149efc1f0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDebug @ 149efc200

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDebug(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDebugDrawComponent @ 149efc210

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDebugDrawComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDefaultExecutionSource @ 149efc220

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDefaultExecutionSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGEdge @ 149efc230

void __cdecl EmptyLinkFunctionForGeneratedCodePCGEdge(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGEngineSettings @ 149efc240

void __cdecl EmptyLinkFunctionForGeneratedCodePCGEngineSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGGraph @ 149efc250

void __cdecl EmptyLinkFunctionForGeneratedCodePCGGraph(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGGraphExecutionStateInterface @ 149efc260

void __cdecl EmptyLinkFunctionForGeneratedCodePCGGraphExecutionStateInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGInputOutputSettings @ 149efc270

void __cdecl EmptyLinkFunctionForGeneratedCodePCGInputOutputSettings(void)

{
  return;
}

// FOnPCGGraphCancelledExternal_DelegateWrapper @ 149efce20

void __cdecl
FOnPCGGraphCancelledExternal_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UPCGComponent *param_2)

{
  UPCGComponent *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnPCGGraphCleanedExternal_DelegateWrapper @ 149efce40

void __cdecl
FOnPCGGraphCleanedExternal_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UPCGComponent *param_2)

{
  UPCGComponent *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnPCGGraphGeneratedExternal_DelegateWrapper @ 149efce60

void __cdecl
FOnPCGGraphGeneratedExternal_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UPCGComponent *param_2)

{
  UPCGComponent *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnPCGGraphStartGeneratingExternal_DelegateWrapper @ 149efce80

void __cdecl
FOnPCGGraphStartGeneratingExternal_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UPCGComponent *param_2)

{
  UPCGComponent *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// GetAvailableMemoryForSamplers @ 149efeeb0

ulong64 __cdecl PCGFeatureSwitches::Helpers::GetAvailableMemoryForSamplers(void)

{
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  FPlatformMemoryStats local_98;
  
  FWindowsPlatformMemory::GetStats(&local_98);
  pTVar1 = CVarSamplerMemoryThreshold.Ref;
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 4;
  }
  if ((ulonglong)local_98._padding_ < (ulonglong)local_98._padding_) {
    local_98._padding_ = local_98._padding_;
  }
  fVar4 = (float)(ulonglong)local_98._padding_ * *(float *)((longlong)pTVar1->ShadowedValue + lVar3)
  ;
  lVar3 = 0;
  if ((__real_5f000000 <= fVar4) && (fVar4 = fVar4 - __real_5f000000, fVar4 < __real_5f000000)) {
    lVar3 = -0x8000000000000000;
  }
  return (longlong)fVar4 + lVar3;
}

// GetComponentOwnerName @ 149eff4a0

FString * __cdecl
PCGLog::GetComponentOwnerName
          (FString *__return_storage_ptr__,UPCGComponent *param_1,bool param_2,FString *param_3)

{
  UObjectBaseUtility *this;
  FScriptContainerElement *pFVar1;
  FName local_res10 [3];
  
  if ((param_1 == (UPCGComponent *)0x0) ||
     (this = (UObjectBaseUtility *)param_1->_padding_, this == (UObjectBaseUtility *)0x0)) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_3->Data).AllocatorInstance.Data;
    (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_3->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_3->Data).ArrayMax;
    (param_3->Data).ArrayNum = 0;
    (param_3->Data).ArrayMax = 0;
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
  }
  else if (PRIVATE_GIsRunningCommandlet) {
    UObjectBaseUtility::GetPathName(this,__return_storage_ptr__,(UObject *)0x0);
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
  }
  else if ((param_2) && (1 < *(int *)&this[0xc].field_0x10)) {
    ::FString::FString(__return_storage_ptr__,(FString *)&this[0xc].field_0x8);
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
  }
  else {
    local_res10[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res10[0].Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(local_res10,__return_storage_ptr__);
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// GetExecutionSourceName @ 149effbc0

FString * __cdecl
PCGLog::GetExecutionSourceName
          (FString *__return_storage_ptr__,IPCGGraphExecutionSource *param_1,bool param_2,
          FString *param_3)

{
  int iVar1;
  UObjectBaseUtility *this;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  UClass *pUVar4;
  FString *pFVar5;
  longlong *plVar6;
  FName local_res10;
  FString local_28;
  
  if (param_1 == (IPCGGraphExecutionSource *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_3->Data).AllocatorInstance.Data;
    (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_3->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_3->Data).ArrayMax;
    (param_3->Data).ArrayNum = 0;
    (param_3->Data).ArrayMax = 0;
    pFVar2 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar2 == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(pFVar2);
    return __return_storage_ptr__;
  }
  lVar3 = (**(code **)((longlong)*param_1 + 8))(param_1);
  if (lVar3 != 0) {
    pUVar4 = UPCGComponent::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      pFVar5 = ::FString::FString(&local_28,param_3);
      this = *(UObjectBaseUtility **)(lVar3 + 0xa8);
      if (this == (UObjectBaseUtility *)0x0) {
        (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      else if (PRIVATE_GIsRunningCommandlet == false) {
        if ((param_2) && (1 < *(int *)&this[0xc].field_0x10)) {
          ::FString::FString(__return_storage_ptr__,(FString *)&this[0xc].field_0x8);
        }
        else {
          local_res10.ComparisonIndex.Value = *(uint *)&this->field_0x18;
          local_res10.Number = *(uint *)&this->field_0x1c;
          ::FName::ToString(&local_res10,__return_storage_ptr__);
        }
      }
      else {
        UObjectBaseUtility::GetPathName(this,__return_storage_ptr__,(UObject *)0x0);
      }
      pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      goto LAB_149effcbf;
    }
  }
  plVar6 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
  (**(code **)(*plVar6 + 0x18))(plVar6,__return_storage_ptr__);
LAB_149effcbf:
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// GetNodeIdFromPinId @ 149f024e0

ulong64 __cdecl PCGPinIdHelpers::GetNodeIdFromPinId(ulong64 param_1)

{
  return param_1 >> 6;
}

// GetPinIndexFromPinId @ 149f03e00

ulong64 __cdecl PCGPinIdHelpers::GetPinIndexFromPinId(ulong64 param_1)

{
  return (ulonglong)((uint)param_1 & 0x3f);
}

// GetQualityPinLabel @ 149f04900

FName __cdecl PCGQualityHelpers::GetQualityPinLabel(void)

{
  int iVar1;
  FName in_RCX;
  
  iVar1 = UPCGSubsystem::GetPCGQualityLevel();
  *(FName *)in_RCX = (FName)0x0;
  if (iVar1 == 0) {
    *(FName *)in_RCX = PinLabelLow;
    return in_RCX;
  }
  if (iVar1 == 1) {
    *(FName *)in_RCX = PinLabelMedium;
    return in_RCX;
  }
  if (iVar1 == 2) {
    *(FName *)in_RCX = PinLabelHigh;
    return in_RCX;
  }
  if (iVar1 != 3) {
    if (iVar1 != 4) {
      *(FName *)in_RCX = PinLabelDefault;
      return in_RCX;
    }
    *(FName *)in_RCX = PinLabelCinematic;
    return in_RCX;
  }
  *(FName *)in_RCX = PinLabelEpic;
  return in_RCX;
}

// GetStaticInLabels @ 149f05430

TArray<PCGInputOutputPrivate::FLabelAndTooltip,TSizedDefaultAllocator<32>_> * __cdecl
PCGInputOutputPrivate::GetStaticInLabels(void)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [32];
  FText local_38;
  FLabelAndTooltip local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"PCGInputOutputElement",L"InputOutputInPinTooltip",
                          L"Default input pin.");
      local_28.Label = PCGPinConstants::DefaultInputLabel;
      local_28.Tooltip.TextData.Reference = (pFVar2->TextData).Reference;
      if (local_28.Tooltip.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.Tooltip.TextData.Reference + 8))
                  (local_28.Tooltip.TextData.Reference,local_res8);
      }
      local_28.Tooltip.Flags = pFVar2->Flags;
      pIVar1 = (pFVar2->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      StaticInLabels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      StaticInLabels.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,1,0,&StaticInLabels.AllocatorInstance,1,&StaticInLabels.ArrayMax);
      ConstructItems<PCGInputOutputPrivate::FLabelAndTooltip,PCGInputOutputPrivate::FLabelAndTooltip,int>
                (StaticInLabels.AllocatorInstance.Data,&local_28,1);
      if (local_28.Tooltip.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.Tooltip.TextData.Reference + 0x10))();
      }
      atexit(`PCGInputOutputPrivate::GetStaticInLabels'::__l2::
             _dynamic_atexit_destructor_for__StaticInLabels__);
      _Init_thread_footer(&::_TSS0);
      return &StaticInLabels;
    }
  }
  return &StaticInLabels;
}

// GetStaticOutLabels @ 149f05590

TArray<PCGInputOutputPrivate::FLabelAndTooltip,TSizedDefaultAllocator<32>_> * __cdecl
PCGInputOutputPrivate::GetStaticOutLabels(void)

{
  uint uVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  FLabelAndTooltip local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar3 = FText::GetEmpty();
      pIVar2 = (pFVar3->TextData).Reference;
      local_28.Tooltip.TextData.Reference = pIVar2;
      if (pIVar2 == (ITextData *)0x0) {
        local_28.Tooltip.Flags = pFVar3->Flags;
        local_28.Label = PCGPinConstants::DefaultOutputLabel;
      }
      else {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
        uVar1 = pFVar3->Flags;
        local_28.Label = PCGPinConstants::DefaultOutputLabel;
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
        local_28.Tooltip.Flags = uVar1;
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
      StaticOutLabels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      StaticOutLabels.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,1,0,&StaticOutLabels.AllocatorInstance,1,&StaticOutLabels.ArrayMax);
      ConstructItems<PCGInputOutputPrivate::FLabelAndTooltip,PCGInputOutputPrivate::FLabelAndTooltip,int>
                (StaticOutLabels.AllocatorInstance.Data,&local_28,1);
      if (local_28.Tooltip.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.Tooltip.TextData.Reference + 0x10))();
      }
      atexit(`PCGInputOutputPrivate::GetStaticOutLabels'::__l2::
             _dynamic_atexit_destructor_for__StaticOutLabels__);
      _Init_thread_footer(&::_TSS0);
      return &StaticOutLabels;
    }
  }
  return &StaticOutLabels;
}

// GetTypeHash @ 149f05d50

int __cdecl GetTypeHash(FPCGSoftGraphExecutionSource *param_1)

{
  uint uVar1;
  
  uVar1 = GetTypeHash((FSoftObjectPath *)&(param_1->SoftObjectPtr).SoftObjectPtr.field_0x8);
  return uVar1;
}

// GetTypeHash @ 149f05d60

uint __cdecl GetTypeHash(FPCGRuntimeGenerationRadii *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (int)((ulonglong)param_1->GenerationRadius >> 0x20) * 0x17 +
          SUB84(param_1->GenerationRadius,0);
  uVar2 = uVar3 >> 0xd ^ -uVar3;
  uVar1 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 10;
  uVar4 = (int)((ulonglong)param_1->GenerationRadius400 >> 0x20) * 0x17 +
          SUB84(param_1->GenerationRadius400,0);
  uVar2 = ((uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar3 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar4 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar3 = (uVar2 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar2 = (int)((ulonglong)param_1->GenerationRadius800 >> 0x20) * 0x17 +
          SUB84(param_1->GenerationRadius800,0);
  uVar3 = ((uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar4 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar4) - uVar2 ^ uVar4 << 10;
  uVar3 = (int)((ulonglong)param_1->GenerationRadius1600 >> 0x20) * 0x17 +
          SUB84(param_1->GenerationRadius1600,0);
  uVar2 = ((uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 10;
  uVar4 = (int)((ulonglong)param_1->GenerationRadius3200 >> 0x20) * 0x17 +
          SUB84(param_1->GenerationRadius3200,0);
  uVar2 = ((uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar3 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar4 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar3 = (uVar2 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar2 = (int)((ulonglong)param_1->GenerationRadius6400 >> 0x20) * 0x17 +
          SUB84(param_1->GenerationRadius6400,0);
  uVar3 = ((uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar4 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar4) - uVar2 ^ uVar4 << 10;
  uVar3 = (int)((ulonglong)param_1->GenerationRadius12800 >> 0x20) * 0x17 +
          SUB84(param_1->GenerationRadius12800,0);
  uVar2 = ((uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 10;
  uVar4 = (int)((ulonglong)param_1->GenerationRadius25600 >> 0x20) * 0x17 +
          SUB84(param_1->GenerationRadius25600,0);
  uVar2 = ((uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar3 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar4 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar3 = (uVar2 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar2 = (int)((ulonglong)param_1->GenerationRadius51200 >> 0x20) * 0x17 +
          SUB84(param_1->GenerationRadius51200,0);
  uVar3 = ((uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  uVar4 = (int)((ulonglong)param_1->GenerationRadius102400 >> 0x20) * 0x17 +
          SUB84(param_1->GenerationRadius102400,0);
  uVar2 = ((uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar3 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar4 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar3 = (int)((ulonglong)param_1->GenerationRadius204800 >> 0x20) * 0x17 +
          SUB84(param_1->GenerationRadius204800,0);
  uVar4 = ((uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar1 = (uVar1 - uVar4) - uVar2 ^ uVar4 << 0x10;
  uVar3 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 10;
  uVar2 = (int)((ulonglong)param_1->CleanupRadiusMultiplier >> 0x20) * 0x17 +
          SUB84(param_1->CleanupRadiusMultiplier,0);
  uVar3 = ((uVar3 - uVar1) - uVar4 ^ uVar1 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// GridSizeToGrid @ 149f06740

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGHiGenGrid __cdecl PCGHiGenGrid::GridSizeToGrid(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGSubsystem *this;
  APCGWorldActor *pAVar3;
  EPCGHiGenGrid EVar4;
  
  if (param_1 == 0x80000000) {
    return Unbounded;
  }
  EVar4 = param_1 / 100;
  if (((EVar4 & EVar4 + ~Uninitialized) != Uninitialized) || (0x18fffe70 < param_1 - 400)) {
    this = UPCGSubsystem::GetSubsystemForCurrentWorld();
    if (this != (UPCGSubsystem *)0x0) {
      pAVar3 = UPCGSubsystem::GetPCGWorldActor(this);
      if ((pAVar3 != (APCGWorldActor *)0x0) && (pAVar3->PartitionGridSize != param_1)) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3381450936374263988>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGCommon.cpp"
                           ,0xb4,"IsValidGridSize(InGridSize)");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          EVar4 = (*pcVar1)();
          return EVar4;
        }
        EVar4 = Uninitialized;
      }
    }
  }
  return EVar4;
}

// GridToGridSize @ 149f067e0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

uint __cdecl PCGHiGenGrid::GridToGridSize(EPCGHiGenGrid param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((param_1 & param_1 + ~Uninitialized) != Uninitialized) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3381450936374263976>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGCommon.cpp"
                       ,0xa8,"FMath::IsPowerOfTwo(GridAsUint)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (param_1 - Grid4 < 0x7ffffc) {
    return param_1 * 100;
  }
  return 0;
}

// IsCustomPropertyName @ 149f07a10

bool __cdecl PCGPointCustomPropertyNames::IsCustomPropertyName(FName param_1)

{
  if ((((param_1 != ExtentsName) && (param_1 != LocalCenterName)) && (param_1 != PositionName)) &&
     (((param_1 != RotationName && (param_1 != ScaleName)) &&
      ((param_1 != LocalSizeName && (param_1 != ScaledLocalSizeName)))))) {
    return false;
  }
  return true;
}

// IsValidGrid @ 149f08590

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __cdecl PCGHiGenGrid::IsValidGrid(EPCGHiGenGrid param_1)

{
  return param_1 - Grid4 < 0x7ffffc;
}

// IsValidGridOrUninitialized @ 149f085b0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __cdecl PCGHiGenGrid::IsValidGridOrUninitialized(EPCGHiGenGrid param_1)

{
  if ((0x7ffffb < param_1 - Grid4) && (param_1 != Uninitialized)) {
    return false;
  }
  return true;
}

// IsValidGridSize @ 149f085d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl PCGHiGenGrid::IsValidGridSize(uint param_1)

{
  UPCGSubsystem *this;
  APCGWorldActor *pAVar1;
  
  if (((param_1 / 100 & param_1 / 100 - 1) != 0) || (0x18fffe70 < param_1 - 400)) {
    this = UPCGSubsystem::GetSubsystemForCurrentWorld();
    if (this != (UPCGSubsystem *)0x0) {
      pAVar1 = UPCGSubsystem::GetPCGWorldActor(this);
      if ((pAVar1 != (APCGWorldActor *)0x0) && (pAVar1->PartitionGridSize != param_1)) {
        return false;
      }
    }
  }
  return true;
}

// NodeIdAndPinIndexToPinId @ 149f09200

ulong64 __cdecl PCGPinIdHelpers::NodeIdAndPinIndexToPinId(ulong64 param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (0x3e < param_2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3381450936374264087>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGCommon.cpp"
                       ,0x117,"PinIndex < PCGPinIdHelpers::MaxOutputPins");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (ulonglong)((uint)param_2 & 0x3f) + param_1 * 0x40;
}

// NodeIdToPinId @ 149f09260

ulong64 __cdecl PCGPinIdHelpers::NodeIdToPinId(ulong64 param_1)

{
  return param_1 * 0x40 + 0x3f;
}

// NotifyTouchedNodes @ 149f09280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EPCGChangeType __cdecl
PCGGraphUtils::NotifyTouchedNodes
          (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *param_1,
          EPCGChangeType param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  UPCGNode *this;
  code *pcVar4;
  TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *pTVar5;
  bool bVar6;
  EPCGChangeType EVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  EPCGChangeType EVar13;
  uint *puVar14;
  EPCGChangeType EVar15;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [4];
  EPCGChangeType local_f4;
  TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *local_f0;
  EPCGChangeType EStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  EPCGChangeType EStack_d4;
  EPCGChangeType local_d0;
  EPCGChangeType EStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  EVar15 = None;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  EVar13 = None;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_f4 = param_2;
  TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator>::operator=
            ((TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)local_88,param_1
            );
  EVar7 = *(EPCGChangeType *)&(param_1->Elements).field_0x28;
  puVar2 = &(param_1->Elements).field_0x10;
  uStack_e4 = 1;
  local_d0 = None;
  EStack_d4 = local_d0;
  if (EVar7 != None) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar2;
    }
    uVar12 = *puVar14;
    local_d0 = EVar15;
    EVar13 = EVar15;
    while (uVar12 == 0) {
      lVar8 = (longlong)(int)EVar13;
      local_d0 = local_d0 + Structural;
      EVar13 = EVar13 + Cosmetic;
      EStack_d4 = EVar7;
      if ((int)(((int)(EVar7 - Cosmetic) >> 0x1f & 0x1fU) + (EVar7 - Cosmetic)) >> 5 < (int)EVar13)
      goto LAB_149f0936d;
      uVar12 = puVar14[lVar8 + 1];
    }
    uStack_e4 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_e4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_c0 = (int)lVar8;
    EStack_d4 = local_c0 + -1 + local_d0;
    if ((int)EVar7 < (int)EStack_d4) {
      EStack_d4 = EVar7;
    }
  }
LAB_149f0936d:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_c8 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_d8 = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_e4,EVar13);
  TStack_b0.CurrentBitIndex = EStack_d4;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_b0._28_4_ = EStack_d4;
  TStack_b0.BaseBitIndex = local_d0;
  uStack_90 = CONCAT44(uStack_c4,iStack_c8);
  local_f0 = param_1;
  EStack_e8 = EVar13;
  local_e0 = puVar2;
  EStack_cc = EStack_d4;
  local_b8 = param_1;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar12 < 0) || ((int)EVar7 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    EVar7 = (*pcVar4)();
    return EVar7;
  }
  EVar7 = local_f4;
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar3) {
    puVar9 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar9 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar10) goto LAB_149f09470;
      uVar12 = *(uint *)(puVar9 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar3 < (int)uVar12) {
      uVar12 = uVar3;
    }
  }
LAB_149f09470:
  while( true ) {
    pTVar5 = local_b8;
    if (*(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34 !=
        (int)uStack_90) {
      `TSparseArray<TSparseSetElement<UPCGNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_f8);
    }
    if (((TStack_b0.CurrentBitIndex == uVar12) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar5 == param_1))
    break;
    this = *(UPCGNode **)
            (*(longlong *)&pTVar5->Elements + (longlong)TStack_b0.CurrentBitIndex * 0x10);
    if (this != (UPCGNode *)0x0) {
      EVar13 = UPCGNode::PropagateDynamicPinTypes
                         (this,(TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator>
                                *)local_88,(UPCGNode *)0x0);
      EVar15 = EVar15 | EVar13 | EVar7;
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar10 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar10 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return EVar15;
}

// OffsetNodeIdInPinId @ 149f09590

ulong64 __cdecl PCGPinIdHelpers::OffsetNodeIdInPinId(ulong64 param_1,ulong64 param_2)

{
  return param_1 + param_2 * 0x40;
}

// RoundTrackingPriority @ 149f11a80

double __cdecl PCGComponent::RoundTrackingPriority(double param_1)

{
  undefined8 in_XMM0_Qb;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._0_8_ = param_1 * __real_40c3880000000000 + __real_3fe0000000000000;
  auVar1._8_8_ = in_XMM0_Qb;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = auVar1._0_8_;
  auVar2 = roundpd(auVar1,auVar2,1);
  return auVar2._0_8_ * __real_3f1a36e2eb1c432d;
}

// SplitDataPerPrimaryPin @ 149f12aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
PCGElementHelpers::SplitDataPerPrimaryPin
          (UPCGSettings *param_1,FPCGDataCollection *param_2,EPCGElementExecutionLoopMode param_3,
          TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> *param_4,
          FPCGDataCollection *param_5)

{
  int *piVar1;
  ForElementType<FName> FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  ForElementType<FName> FVar7;
  ForElementType<FPCGDataCollection> FVar8;
  EPCGPinStatus *pEVar9;
  FPCGTaggedData *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  FPCGPinProperties *pFVar13;
  ForElementType<FName> FVar14;
  FPCGDataCollection *pFVar15;
  TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> *pTVar16;
  FScriptContainerElement *pFVar17;
  FPCGPinProperties *pFVar18;
  FPCGTaggedData *pFVar19;
  ulonglong uVar20;
  FPCGDataCollection *pFVar21;
  longlong *plVar22;
  FPCGDataCollection *pFVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a7 [7];
  FPCGDataCollection *local_1a0;
  ulonglong local_198;
  FPCGDataCollection *local_190;
  TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> *local_180;
  FPCGPinProperties *local_178;
  FName local_170;
  FPCGPinProperties *local_168;
  int local_160;
  uint local_158;
  ForElementType<FName> local_150;
  ForElementType<FName> local_148;
  uint local_120;
  uint local_11c;
  ForElementType<FPCGDataCollection> local_118;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_1a0 = param_5;
  local_190 = param_2;
  local_180 = param_4;
  if ((param_1 == (UPCGSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                         ,0x3e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar21 = (FPCGDataCollection *)(param_4->AllocatorInstance).Data;
  if (param_4->ArrayMax < 0) {
    DestructItems<FPCGDataCollection,int>(pFVar21,param_4->ArrayNum);
    param_4->ArrayNum = 0;
    if (param_4->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
    }
  }
  else {
    DestructItems<FPCGDataCollection,int>(pFVar21,param_4->ArrayNum);
    param_4->ArrayNum = 0;
  }
  pFVar21 = local_1a0;
  uVar20 = 0;
  piVar1 = &(local_1a0->TaggedData).ArrayMax;
  pFVar19 = (FPCGTaggedData *)(local_1a0->TaggedData).AllocatorInstance.Data;
  iVar6 = (local_1a0->TaggedData).ArrayNum;
  uVar24 = 0;
  if ((local_1a0->TaggedData).ArrayMax < 0) {
    DestructItems<FPCGTaggedData,int>(pFVar19,iVar6);
    iVar6 = *piVar1;
    (pFVar21->TaggedData).ArrayNum = 0;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,0,(ForAnyElementType *)pFVar21,0,piVar1);
    }
  }
  else {
    DestructItems<FPCGTaggedData,int>(pFVar19,iVar6);
    (pFVar21->TaggedData).ArrayNum = 0;
  }
  if (param_3 == NotALoop) {
    return false;
  }
  (**(code **)(param_1->_padding_ + 0x450))(param_1,&local_168);
  lVar26 = (longlong)local_160;
  if (local_160 != 0) {
    local_178 = local_168;
    bVar4 = local_168->PinStatus == Required;
    uVar12 = uVar20;
    uVar28 = uVar20;
    uVar27 = uVar20;
    do {
      iVar6 = (int)uVar28;
      uVar12 = uVar12 + 1;
      uVar28 = (ulonglong)(iVar6 + 1);
      if ((longlong)uVar12 < lVar26) {
        pEVar9 = &local_178[uVar12].PinStatus;
        do {
          if (bVar4 != (*pEVar9 == Required)) break;
          uVar28 = (ulonglong)((int)uVar28 + 1);
          uVar12 = uVar12 + 1;
          pEVar9 = pEVar9 + 0x30;
        } while ((longlong)uVar12 < lVar26);
      }
      iVar29 = (int)uVar28 - iVar6;
      if (bVar4 == false) {
        DestructItems<FPCGPinProperties,int>(local_178 + iVar6,iVar29);
      }
      else {
        iVar25 = (int)uVar27;
        if (iVar25 != iVar6) {
          memmove(local_178 + iVar25,local_178 + iVar6,(longlong)iVar29 * 0x30);
        }
        uVar27 = (ulonglong)(uint)(iVar25 + iVar29);
      }
      local_160 = (int)uVar27;
      bVar4 = (bool)(bVar4 ^ 1);
      param_2 = local_190;
    } while ((longlong)uVar12 < lVar26);
  }
  iVar6 = local_160;
  if ((param_3 == SinglePrimaryPin) && (local_160 != 1)) {
    bVar4 = false;
    goto LAB_149f13c20;
  }
  local_148.SecondaryData = (ForElementType<FName>)0x0;
  local_120 = 0;
  local_11c = 4;
  pFVar18 = local_168 + local_160;
  pFVar13 = local_168;
  while( true ) {
    if (local_160 != iVar6) {
      local_1a7[0] = 0;
      `TCheckedPointerIterator<FPCGPinProperties_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1a7);
    }
    uVar11 = local_120;
    if (pFVar13 == pFVar18) break;
    local_170 = pFVar13->Label;
    FVar7 = (ForElementType<FName>)&local_148;
    if (local_148.SecondaryData != (ForElementType<FName>)0x0) {
      FVar7 = local_148.SecondaryData;
    }
    if ((ulonglong)FVar7 <= &local_170) {
      FVar7 = (ForElementType<FName>)&local_148;
      if (local_148.SecondaryData != (ForElementType<FName>)0x0) {
        FVar7 = local_148.SecondaryData;
      }
      if ((&local_170 < (FName *)((longlong)FVar7 + (longlong)(int)local_11c * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if (local_120 == local_11c) {
      local_120 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                            (0x408,&local_148,(int *)&local_11c);
    }
    lVar26 = (longlong)(int)local_120;
    FVar7 = (ForElementType<FName>)&local_148;
    if (local_148.SecondaryData != (ForElementType<FName>)0x0) {
      FVar7 = local_148.SecondaryData;
    }
    pFVar13 = pFVar13 + 1;
    local_120 = local_120 + 1;
    *(FName *)((longlong)FVar7 + lVar26 * 8) = local_170;
  }
  local_118.SecondaryData = (ForElementType<FPCGDataCollection>)0x0;
  local_50[0] = 0;
  local_50[1] = 4;
  if ((int)local_120 < 1) {
    if ((int)local_120 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_120);
    }
  }
  else {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataCollection>_>
                      (0x30,8,local_120,&local_118,local_50,local_50 + 1);
    FVar8 = (ForElementType<FPCGDataCollection>)&local_118;
    if (local_118.SecondaryData != (ForElementType<FPCGDataCollection>)0x0) {
      FVar8 = local_118.SecondaryData;
    }
    DefaultConstructItems<FPCGDataCollection,int>
              ((FPCGDataCollection *)((longlong)iVar6 * 0x30 + (longlong)FVar8),uVar11);
  }
  pFVar23 = local_190;
  pFVar21 = local_1a0;
  iVar6 = (param_2->TaggedData).ArrayNum;
  uVar12 = uVar20;
  uVar28 = uVar20;
  if (0 < iVar6) {
    do {
      uVar30 = (uint)uVar28;
      uVar11 = uVar24;
      if ((int)uVar30 < iVar6) {
        uVar11 = ~uVar30 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar19 = (FPCGTaggedData *)((pFVar23->TaggedData).AllocatorInstance.Data + uVar12);
      FVar7 = (ForElementType<FName>)&local_148;
      if (local_148.SecondaryData != (ForElementType<FName>)0x0) {
        FVar7 = local_148.SecondaryData;
      }
      FVar2 = (ForElementType<FName>)((longlong)FVar7 + (longlong)(int)local_120 * 8);
      if (FVar7 != FVar2) {
        FVar14 = FVar7;
        do {
          if (*(FName *)FVar14 == pFVar19->Pin) {
            uVar11 = (uint)((longlong)FVar14 - (longlong)FVar7 >> 3);
            if (uVar11 != 0xffffffff) {
              uVar31 = uVar24;
              if ((int)uVar11 < local_50[0]) {
                uVar31 = ~uVar11 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              FVar8 = (ForElementType<FPCGDataCollection>)&local_118;
              if (local_118.SecondaryData != (ForElementType<FPCGDataCollection>)0x0) {
                FVar8 = local_118.SecondaryData;
              }
              pFVar15 = (FPCGDataCollection *)((longlong)(int)uVar11 * 0x30 + (longlong)FVar8);
              pFVar10 = (FPCGTaggedData *)(pFVar15->TaggedData).AllocatorInstance.Data;
              if (((pFVar10 <= pFVar19) && (pFVar19 < pFVar10 + (pFVar15->TaggedData).ArrayMax)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              iVar6 = (pFVar15->TaggedData).ArrayNum;
              piVar1 = &(pFVar15->TaggedData).ArrayMax;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x878,(ForAnyElementType *)pFVar15,piVar1);
              }
              (pFVar15->TaggedData).ArrayNum = iVar6 + 1;
              pFVar10 = (FPCGTaggedData *)
                        ((pFVar15->TaggedData).AllocatorInstance.Data + (longlong)iVar6 * 0x78);
              goto LAB_149f12fb7;
            }
            break;
          }
          FVar14 = (ForElementType<FName>)((longlong)FVar14 + 8);
        } while (FVar14 != FVar2);
      }
      pFVar10 = (FPCGTaggedData *)(pFVar21->TaggedData).AllocatorInstance.Data;
      if (((pFVar10 <= pFVar19) && (pFVar19 < pFVar10 + (pFVar21->TaggedData).ArrayMax)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = (pFVar21->TaggedData).ArrayNum;
      if (iVar6 == (pFVar21->TaggedData).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)pFVar21,&(pFVar21->TaggedData).ArrayMax);
      }
      (pFVar21->TaggedData).ArrayNum = iVar6 + 1;
      pFVar10 = (FPCGTaggedData *)
                ((pFVar21->TaggedData).AllocatorInstance.Data + (longlong)iVar6 * 0x78);
LAB_149f12fb7:
      FPCGTaggedData::FPCGTaggedData(pFVar10,pFVar19);
      iVar6 = (pFVar23->TaggedData).ArrayNum;
      uVar28 = (ulonglong)(uVar30 + 1);
      uVar12 = uVar12 + 0x78;
    } while ((int)(uVar30 + 1) < iVar6);
  }
  lVar26 = 0x30;
  if (local_50[0] == 0) {
    bVar4 = true;
    goto LAB_149f13be4;
  }
  if (param_3 == SinglePrimaryPin) {
    if ((local_50[0] != 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataPerRequiredPin.Num() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                           ,0x6e,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((local_50[0] < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pTVar16 = local_180;
    FVar8 = (ForElementType<FPCGDataCollection>)&local_118;
    if (local_118.SecondaryData != (ForElementType<FPCGDataCollection>)0x0) {
      FVar8 = local_118.SecondaryData;
    }
    uVar11 = *(int *)((longlong)FVar8 + 8);
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (local_180->ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar11,&local_180->AllocatorInstance,local_180->ArrayNum,
                 &local_180->ArrayMax);
    }
    piVar1 = &pTVar16->ArrayMax;
    while( true ) {
      if ((local_50[0] < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      FVar8 = (ForElementType<FPCGDataCollection>)&local_118;
      if (local_118.SecondaryData != (ForElementType<FPCGDataCollection>)0x0) {
        FVar8 = local_118.SecondaryData;
      }
      uVar11 = (uint)uVar20;
      if (*(int *)((longlong)FVar8 + 8) <= (int)uVar11) break;
      iVar6 = pTVar16->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&pTVar16->AllocatorInstance,piVar1);
      }
      pTVar16->ArrayNum = iVar6 + 1;
      pFVar17 = (pTVar16->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
      *(undefined4 *)(pFVar17 + 0x12) = 0;
      *(undefined2 *)(pFVar17 + 0x16) = 0;
      *(undefined8 *)pFVar17 = 0;
      *(undefined8 *)(pFVar17 + 8) = 0;
      *(undefined2 *)(pFVar17 + 0x10) = 0;
      *(undefined8 *)(pFVar17 + 0x18) = 0;
      *(undefined8 *)(pFVar17 + 0x20) = 0;
      *(undefined8 *)(pFVar17 + 0x28) = 0;
      if ((local_50[0] < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      FVar8 = (ForElementType<FPCGDataCollection>)&local_118;
      if (local_118.SecondaryData != (ForElementType<FPCGDataCollection>)0x0) {
        FVar8 = local_118.SecondaryData;
      }
      uVar30 = uVar24;
      if ((int)uVar11 < *(int *)((longlong)FVar8 + 8)) {
        uVar30 = ~uVar11 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar19 = (FPCGTaggedData *)(*(longlong *)FVar8 + (longlong)(int)uVar11 * 0x78);
      if (((*(FPCGTaggedData **)pFVar17 <= pFVar19) &&
          (pFVar19 < *(FPCGTaggedData **)pFVar17 + *(int *)(pFVar17 + 0xc))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = *(int *)(pFVar17 + 8);
      if (iVar6 == *(int *)(pFVar17 + 0xc)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)pFVar17,(int *)(pFVar17 + 0xc));
      }
      *(int *)(pFVar17 + 8) = iVar6 + 1;
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)((longlong)iVar6 * 0x78 + *(longlong *)pFVar17),pFVar19);
      uVar20 = (ulonglong)(uVar11 + 1);
      pTVar16 = local_180;
    }
LAB_149f13a6a:
    bVar4 = true;
  }
  else if (param_3 == MatchingPrimaryPins) {
    if ((local_50[0] < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    uVar11 = 1;
    FVar8 = (ForElementType<FPCGDataCollection>)&local_118;
    if (local_118.SecondaryData != (ForElementType<FPCGDataCollection>)0x0) {
      FVar8 = local_118.SecondaryData;
    }
    iVar6 = *(int *)((longlong)FVar8 + 8);
    pFVar21 = (FPCGDataCollection *)(longlong)iVar6;
    if (1 < local_50[0]) {
      do {
        uVar30 = uVar24;
        if ((int)uVar11 < local_50[0]) {
          uVar30 = ~uVar11 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FVar8 = (ForElementType<FPCGDataCollection>)&local_118;
        if (local_118.SecondaryData != (ForElementType<FPCGDataCollection>)0x0) {
          FVar8 = local_118.SecondaryData;
        }
        if (*(int *)((longlong)((longlong)FVar8 + 8) + lVar26) != iVar6) goto LAB_149f13be2;
        uVar11 = uVar11 + 1;
        lVar26 = lVar26 + 0x30;
      } while ((int)uVar11 < local_50[0]);
    }
    TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_>::SetNum(local_180,iVar6,Default);
    local_190 = pFVar21;
    if (iVar6 < 1) goto LAB_149f13a6a;
    local_198 = 0;
    local_1a0 = (FPCGDataCollection *)0x0;
    uVar12 = uVar20;
    do {
      uVar11 = (uint)uVar12;
      if (0 < local_50[0]) {
        local_178 = (FPCGPinProperties *)((longlong)(int)uVar11 * 0x78);
        uVar12 = uVar20;
        uVar28 = uVar20;
        do {
          pTVar16 = local_180;
          pFVar21 = local_1a0;
          uVar30 = uVar24;
          if ((int)uVar11 < local_180->ArrayNum) {
            uVar30 = ~uVar11 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar17 = (pTVar16->AllocatorInstance).Data + (longlong)&pFVar21->TaggedData;
          uVar31 = (uint)uVar28;
          uVar30 = uVar24;
          if ((int)uVar31 < local_50[0]) {
            uVar30 = ~uVar31 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          FVar8 = (ForElementType<FPCGDataCollection>)&local_118;
          if (local_118.SecondaryData != (ForElementType<FPCGDataCollection>)0x0) {
            FVar8 = local_118.SecondaryData;
          }
          uVar30 = uVar24;
          if ((int)uVar11 < *(int *)((longlong)((longlong)FVar8 + 8) + uVar12)) {
            uVar30 = ~uVar11 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar19 = (FPCGTaggedData *)
                    ((longlong)&(local_178->Label).ComparisonIndex.Value +
                    *(longlong *)((longlong)FVar8 + uVar12));
          if (((*(FPCGTaggedData **)pFVar17 <= pFVar19) &&
              (pFVar19 < *(FPCGTaggedData **)pFVar17 + *(int *)(pFVar17 + 0xc))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar6 = *(int *)(pFVar17 + 8);
          if (iVar6 == *(int *)(pFVar17 + 0xc)) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x878,(ForAnyElementType *)pFVar17,(int *)(pFVar17 + 0xc));
          }
          *(int *)(pFVar17 + 8) = iVar6 + 1;
          FPCGTaggedData::FPCGTaggedData
                    ((FPCGTaggedData *)((longlong)iVar6 * 0x78 + *(longlong *)pFVar17),pFVar19);
          uVar28 = (ulonglong)(uVar31 + 1);
          uVar12 = uVar12 + 0x30;
          pFVar21 = local_190;
        } while ((int)(uVar31 + 1) < local_50[0]);
      }
      local_198 = local_198 + 1;
      local_1a0 = local_1a0 + 1;
      uVar12 = (ulonglong)(uVar11 + 1);
    } while ((longlong)local_198 < (longlong)pFVar21);
    bVar4 = true;
  }
  else {
    if (param_3 == PrimaryPinAndBroadcastablePins) {
      if ((local_50[0] < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar11 = 1;
      FVar8 = (ForElementType<FPCGDataCollection>)&local_118;
      if (local_118.SecondaryData != (ForElementType<FPCGDataCollection>)0x0) {
        FVar8 = local_118.SecondaryData;
      }
      iVar6 = *(int *)((longlong)FVar8 + 8);
      uVar12 = (ulonglong)iVar6;
      if (1 < local_50[0]) {
        do {
          uVar30 = uVar24;
          if ((int)uVar11 < local_50[0]) {
            uVar30 = ~uVar11 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          FVar8 = (ForElementType<FPCGDataCollection>)&local_118;
          if (local_118.SecondaryData != (ForElementType<FPCGDataCollection>)0x0) {
            FVar8 = local_118.SecondaryData;
          }
          iVar29 = *(int *)((longlong)((longlong)FVar8 + 8) + lVar26);
          if ((iVar29 != 1) && (iVar29 != iVar6)) goto LAB_149f13be2;
          uVar11 = uVar11 + 1;
          lVar26 = lVar26 + 0x30;
        } while ((int)uVar11 < local_50[0]);
      }
      TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_>::SetNum(local_180,iVar6,Default);
      local_198 = uVar12;
      if (0 < local_50[0]) {
        local_190 = (FPCGDataCollection *)0x0;
        FVar7 = (ForElementType<FName>)&(local_1a0->TaggedData).ArrayMax;
        pFVar13 = (FPCGPinProperties *)&(local_1a0->TaggedData).ArrayNum;
        uVar28 = uVar12;
        uVar27 = uVar20;
        local_178 = pFVar13;
        local_150 = FVar7;
        do {
          pFVar21 = local_190;
          uVar30 = (uint)uVar27;
          uVar11 = uVar24;
          if ((int)uVar30 < local_50[0]) {
            uVar11 = ~uVar30 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             uVar12 = local_198, bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          FVar8 = (ForElementType<FPCGDataCollection>)&local_118;
          if (local_118.SecondaryData != (ForElementType<FPCGDataCollection>)0x0) {
            FVar8 = local_118.SecondaryData;
          }
          if (*(int *)((longlong)((longlong)FVar8 + 8) + (longlong)pFVar21) == (int)uVar28) {
            pFVar13 = local_178;
            FVar7 = local_150;
            if (0 < (longlong)uVar12) {
              local_158 = ~uVar30 >> 0x1f;
              uVar12 = uVar20;
              uVar28 = uVar20;
              uVar27 = uVar20;
              do {
                uVar11 = local_158;
                pTVar16 = local_180;
                uVar32 = (uint)uVar27;
                uVar31 = uVar24;
                if ((int)uVar32 < local_180->ArrayNum) {
                  uVar31 = ~uVar32 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  uVar5 = (*pcVar3)();
                  return (bool)uVar5;
                }
                pFVar17 = (pTVar16->AllocatorInstance).Data + uVar28;
                uVar31 = uVar24;
                if ((int)uVar30 < local_50[0]) {
                  uVar31 = uVar11;
                }
                if ((uVar31 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  uVar5 = (*pcVar3)();
                  return (bool)uVar5;
                }
                FVar8 = (ForElementType<FPCGDataCollection>)&local_118;
                if (local_118.SecondaryData != (ForElementType<FPCGDataCollection>)0x0) {
                  FVar8 = local_118.SecondaryData;
                }
                plVar22 = (longlong *)
                          ((longlong)&(local_190->TaggedData).AllocatorInstance.Data +
                          (longlong)FVar8);
                uVar11 = uVar24;
                if ((int)uVar32 < (int)plVar22[1]) {
                  uVar11 = ~uVar32 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  uVar5 = (*pcVar3)();
                  return (bool)uVar5;
                }
                pFVar19 = (FPCGTaggedData *)(*plVar22 + (longlong)(int)uVar32 * 0x78);
                if (((*(FPCGTaggedData **)pFVar17 <= pFVar19) &&
                    (pFVar19 < *(FPCGTaggedData **)pFVar17 + *(int *)(pFVar17 + 0xc))) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  uVar5 = (*pcVar3)();
                  return (bool)uVar5;
                }
                iVar6 = *(int *)(pFVar17 + 8);
                if (iVar6 == *(int *)(pFVar17 + 0xc)) {
                  iVar6 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x878,(ForAnyElementType *)pFVar17,(int *)(pFVar17 + 0xc));
                }
                *(int *)(pFVar17 + 8) = iVar6 + 1;
                FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)((longlong)iVar6 * 0x78 + *(longlong *)pFVar17),pFVar19
                          );
                uVar27 = (ulonglong)(uVar32 + 1);
                uVar12 = uVar12 + 1;
                uVar28 = uVar28 + 0x30;
              } while ((longlong)uVar12 < (longlong)local_198);
              uVar28 = local_198 & 0xffffffff;
              uVar12 = local_198;
              pFVar13 = local_178;
              pFVar21 = local_190;
              FVar7 = local_150;
            }
          }
          else {
            uVar11 = uVar24;
            if ((int)uVar30 < local_50[0]) {
              uVar11 = ~uVar30 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            FVar8 = (ForElementType<FPCGDataCollection>)&local_118;
            if (local_118.SecondaryData != (ForElementType<FPCGDataCollection>)0x0) {
              FVar8 = local_118.SecondaryData;
            }
            if ((*(int *)((longlong)((longlong)FVar8 + 8) + (longlong)pFVar21) != 1) &&
               (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<7664289111586373802>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                                   ,0xaa,
                                   "DataPerRequiredPin[RequiredPinIndex].TaggedData.Num() == 1"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            uVar11 = uVar24;
            if ((int)uVar30 < local_50[0]) {
              uVar11 = ~uVar30 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            FVar8 = (ForElementType<FPCGDataCollection>)&local_118;
            if (local_118.SecondaryData != (ForElementType<FPCGDataCollection>)0x0) {
              FVar8 = local_118.SecondaryData;
            }
            pFVar23 = (FPCGDataCollection *)
                      ((longlong)&(pFVar21->TaggedData).AllocatorInstance.Data + (longlong)FVar8);
            if ((local_1a0 == pFVar23) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(void*)this != (void*)&Source",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x96e,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            iVar6 = (pFVar23->TaggedData).ArrayNum;
            if (iVar6 != 0) {
              iVar29 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x78,8,iVar6,(ForAnyElementType *)local_1a0,(int *)pFVar13,
                                  (int *)FVar7);
              ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                        ((local_1a0->TaggedData).AllocatorInstance.Data + (longlong)iVar29 * 0x78,
                         (FPCGTaggedData *)(pFVar23->TaggedData).AllocatorInstance.Data,iVar6);
            }
            uVar28 = local_198 & 0xffffffff;
            uVar12 = local_198;
          }
          local_190 = pFVar21 + 1;
          uVar27 = (ulonglong)(uVar30 + 1);
        } while ((int)(uVar30 + 1) < local_50[0]);
      }
      goto LAB_149f13a6a;
    }
LAB_149f13be2:
    bVar4 = false;
  }
LAB_149f13be4:
  FVar8 = (ForElementType<FPCGDataCollection>)&local_118;
  if (local_118.SecondaryData != (ForElementType<FPCGDataCollection>)0x0) {
    FVar8 = local_118.SecondaryData;
  }
  DestructItems<FPCGDataCollection,int>((FPCGDataCollection *)FVar8,local_50[0]);
  if (local_118.SecondaryData != (ForElementType<FPCGDataCollection>)0x0) {
    FMemory::Free((void *)local_118.SecondaryData);
  }
  if (local_148.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_148.SecondaryData);
  }
LAB_149f13c20:
  DestructItems<FPCGPinProperties,int>(local_168,local_160);
  if (local_168 != (FPCGPinProperties *)0x0) {
    FMemory::Free(local_168);
  }
  return bVar4;
}

// UnboundedGridSize @ 149f14b90

uint __cdecl PCGHiGenGrid::UnboundedGridSize(void)

{
  return 0x80000000;
}

// UninitializedGridSize @ 149f14e30

uint __cdecl PCGHiGenGrid::UninitializedGridSize(void)

{
  return 0;
}

// Z_Construct_UClass_UPCGAssetExporterUtils_NoRegister @ 149f155f0

UClass * __cdecl Z_Construct_UClass_UPCGAssetExporterUtils_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAssetExporterUtils.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAssetExporterUtils",
               &Z_Registration_Info_UClass_UPCGAssetExporterUtils.InnerSingleton,
               UPCGAssetExporterUtils::StaticRegisterNativesUPCGAssetExporterUtils,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGAssetExporterUtils>,
               InternalVTableHelperCtorCaller<UPCGAssetExporterUtils>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAssetExporterUtils.InnerSingleton;
}

// Z_Construct_UClass_UPCGDataFunctionLibrary_NoRegister @ 149f156b0

UClass * __cdecl Z_Construct_UClass_UPCGDataFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataFunctionLibrary",
               &Z_Registration_Info_UClass_UPCGDataFunctionLibrary.InnerSingleton,
               UPCGDataFunctionLibrary::StaticRegisterNativesUPCGDataFunctionLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGDataFunctionLibrary>
               ,InternalVTableHelperCtorCaller<UPCGDataFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UPCGDebugDrawComponent_NoRegister @ 149f15770

UClass * __cdecl Z_Construct_UClass_UPCGDebugDrawComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDebugDrawComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDebugDrawComponent",
               &Z_Registration_Info_UClass_UPCGDebugDrawComponent.InnerSingleton,
               UPCGDebugDrawComponent::StaticRegisterNativesUPCGDebugDrawComponent,0x5c0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGDebugDrawComponent>,
               InternalVTableHelperCtorCaller<UPCGDebugDrawComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDebugDrawComponent.InnerSingleton;
}

// Z_Construct_UClass_UPCGDefaultExecutionSource_NoRegister @ 149f15830

UClass * __cdecl Z_Construct_UClass_UPCGDefaultExecutionSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDefaultExecutionSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGDefaultExecutionSource::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDefaultExecutionSource",
               &Z_Registration_Info_UClass_UPCGDefaultExecutionSource.InnerSingleton,
               UPCGDefaultExecutionSource::StaticRegisterNativesUPCGDefaultExecutionSource,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGDefaultExecutionSource>,
               InternalVTableHelperCtorCaller<UPCGDefaultExecutionSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDefaultExecutionSource.InnerSingleton;
}

// Z_Construct_UClass_UPCGEdge_NoRegister @ 149f158e0

UClass * __cdecl Z_Construct_UClass_UPCGEdge_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGEdge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGEdge",&Z_Registration_Info_UClass_UPCGEdge.InnerSingleton,
               UPCGEdge::StaticRegisterNativesUPCGEdge,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGEdge>,InternalVTableHelperCtorCaller<UPCGEdge>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGEdge.InnerSingleton;
}

// Z_Construct_UClass_UPCGEngineSettings_NoRegister @ 149f15990

UClass * __cdecl Z_Construct_UClass_UPCGEngineSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGEngineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGEngineSettings",
               &Z_Registration_Info_UClass_UPCGEngineSettings.InnerSingleton,
               UPCGEngineSettings::StaticRegisterNativesUPCGEngineSettings,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGEngineSettings>,
               InternalVTableHelperCtorCaller<UPCGEngineSettings>,local_res8,
               UDeveloperSettingsBackedByCVars::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGEngineSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGGraphExecutionSource_NoRegister @ 149f15a50

UClass * __cdecl Z_Construct_UClass_UPCGGraphExecutionSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphExecutionSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphExecutionSource",
               &Z_Registration_Info_UClass_UPCGGraphExecutionSource.InnerSingleton,
               UPCGGraphExecutionSource::StaticRegisterNativesUPCGGraphExecutionSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGraphExecutionSource>,
               InternalVTableHelperCtorCaller<UPCGGraphExecutionSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphExecutionSource.InnerSingleton;
}

// Z_Construct_UClass_UPCGGraphInputOutputSettings_NoRegister @ 149f15b10

UClass * __cdecl Z_Construct_UClass_UPCGGraphInputOutputSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphInputOutputSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphInputOutputSettings",
               &Z_Registration_Info_UClass_UPCGGraphInputOutputSettings.InnerSingleton,
               UPCGGraphInputOutputSettings::StaticRegisterNativesUPCGGraphInputOutputSettings,0x140
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGraphInputOutputSettings>,
               InternalVTableHelperCtorCaller<UPCGGraphInputOutputSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphInputOutputSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGManagedDebugDrawComponent_NoRegister @ 149f15bd0

UClass * __cdecl Z_Construct_UClass_UPCGManagedDebugDrawComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedDebugDrawComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedDebugDrawComponent",
               &Z_Registration_Info_UClass_UPCGManagedDebugDrawComponent.InnerSingleton,
               UPCGManagedDebugDrawComponent::StaticRegisterNativesUPCGManagedDebugDrawComponent,
               0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGManagedDebugDrawComponent>,
               InternalVTableHelperCtorCaller<UPCGManagedDebugDrawComponent>,local_res8,
               UPCGManagedComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedDebugDrawComponent.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGAttachOptions @ 149f15c90

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGAttachOptions(void)

{
  if (Z_Registration_Info_UEnum_EPCGAttachOptions.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGAttachOptions.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGAttachOptions_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGAttachOptions.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGChangeType @ 149f15cd0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGChangeType(void)

{
  if (Z_Registration_Info_UEnum_EPCGChangeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGChangeType.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGChangeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGChangeType.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGComponentDirtyFlag @ 149f15d10

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGComponentDirtyFlag(void)

{
  if (Z_Registration_Info_UEnum_EPCGComponentDirtyFlag.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGComponentDirtyFlag.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGComponentDirtyFlag_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGComponentDirtyFlag.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGContainerType @ 149f15d50

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGContainerType(void)

{
  if (Z_Registration_Info_UEnum_EPCGContainerType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGContainerType.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGContainerType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGContainerType.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGCoordinateSpace @ 149f15d90

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGCoordinateSpace(void)

{
  if (Z_Registration_Info_UEnum_EPCGCoordinateSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGCoordinateSpace.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGCoordinateSpace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGCoordinateSpace.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGDataType @ 149f15dd0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGDataType(void)

{
  if (Z_Registration_Info_UEnum_EPCGDataType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGDataType.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGDataType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGDataType.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGDataUsage @ 149f15e10

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGDataUsage(void)

{
  if (Z_Registration_Info_UEnum_EPCGDataUsage.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGDataUsage.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGDataUsage_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGDataUsage.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGDensityMergeOperation @ 149f15e50

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGDensityMergeOperation(void)

{
  if (Z_Registration_Info_UEnum_EPCGDensityMergeOperation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGDensityMergeOperation.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGDensityMergeOperation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGDensityMergeOperation.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGExclusiveDataType @ 149f15e90

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGExclusiveDataType(void)

{
  if (Z_Registration_Info_UEnum_EPCGExclusiveDataType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGExclusiveDataType.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGExclusiveDataType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGExclusiveDataType.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGExecutionPhase @ 149f15ed0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGExecutionPhase(void)

{
  if (Z_Registration_Info_UEnum_EPCGExecutionPhase.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGExecutionPhase.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGExecutionPhase_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGExecutionPhase.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGGenerationStatus @ 149f15f10

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGGenerationStatus(void)

{
  if (Z_Registration_Info_UEnum_EPCGGenerationStatus.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGGenerationStatus.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGGenerationStatus_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGGenerationStatus.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGNodeTitleType @ 149f15f50

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGNodeTitleType(void)

{
  if (Z_Registration_Info_UEnum_EPCGNodeTitleType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGNodeTitleType.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGNodeTitleType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGNodeTitleType.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGStringMatchingOperator @ 149f15f90

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGStringMatchingOperator(void)

{
  if (Z_Registration_Info_UEnum_EPCGStringMatchingOperator.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGStringMatchingOperator.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGStringMatchingOperator_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGStringMatchingOperator.InnerSingleton;
}

// Z_Construct_UScriptStruct_FDynamicTrackedKeyInstanceData @ 149f15fd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDynamicTrackedKeyInstanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDynamicTrackedKeyInstanceData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDynamicTrackedKeyInstanceData.InnerSingleton,
               &Z_Construct_UScriptStruct_FDynamicTrackedKeyInstanceData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDynamicTrackedKeyInstanceData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDynamicTrackedKeyInstanceData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPCGBlueprintContextHandle @ 149f16050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGBlueprintContextHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGBlueprintContextHandle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGBlueprintContextHandle.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGBlueprintContextHandle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGBlueprintContextHandle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGBlueprintContextHandle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPCGComponentInstanceData @ 149f160d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGComponentInstanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGComponentInstanceData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGComponentInstanceData.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGComponentInstanceData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGComponentInstanceData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPCGContext @ 149f16150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGContext.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGContext.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGContext.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings @ 149f161d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDebugVisualizationSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDebugVisualizationSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDebugVisualizationSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDebugVisualizationSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPCGPartitionActorRecord @ 149f16250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGPartitionActorRecord(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGPartitionActorRecord.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGPartitionActorRecord.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGPartitionActorRecord_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGPartitionActorRecord.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGPartitionActorRecord.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPCGSoftGraphExecutionSource @ 149f162d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGSoftGraphExecutionSource(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGSoftGraphExecutionSource.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGSoftGraphExecutionSource.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGSoftGraphExecutionSource_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGSoftGraphExecutionSource.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGSoftGraphExecutionSource.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NoPin'' @ 150418cf0

void __cdecl `dynamic_atexit_destructor_for_'FPCGGraphTaskInput::NoPin__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FPCGGraphTaskInput::NoPin.TypedValue.AllowedTypes.Ids.AllocatorInstance.Data;
  if ((FPCGGraphTaskInput::NoPin.bIsSet) &&
     (FPCGGraphTaskInput::NoPin.TypedValue.AllowedTypes.Ids.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    if (FPCGGraphTaskInput::NoPin.TypedValue.AllowedTypes.Ids.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
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
  return;
}

// `dynamic_atexit_destructor_for_'CVarCheckSamplerMemory'' @ 150418d10

void __cdecl PCGFeatureSwitches::_dynamic_atexit_destructor_for__CVarCheckSamplerMemory__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCheckSamplerMemory);
  return;
}

// `dynamic_atexit_destructor_for_'CVarConvertToPointDataInPostProcessGraph'' @ 150418d30

void __cdecl
PCGComponent::_dynamic_atexit_destructor_for__CVarConvertToPointDataInPostProcessGraph__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarConvertToPointDataInPostProcessGraph);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDeletePreviewResourcesWhenUnloading'' @ 150418d50

void __cdecl
PCGComponent::_dynamic_atexit_destructor_for__CVarDeletePreviewResourcesWhenUnloading__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDeletePreviewResourcesWhenUnloading);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableStealingForFlattenInPostProcessGraph'' @ 150418d70

void __cdecl
PCGComponent::_dynamic_atexit_destructor_for__CVarDisableStealingForFlattenInPostProcessGraph__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDisableStealingForFlattenInPostProcessGraph);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableComputeGraphInstancePooling'' @ 150418d90

void __cdecl PCGGraph::_dynamic_atexit_destructor_for__CVarEnableComputeGraphInstancePooling__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableComputeGraphInstancePooling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFixInvalidEdgesOnPostLoad'' @ 150418db0

void __cdecl PCGGraph::_dynamic_atexit_destructor_for__CVarFixInvalidEdgesOnPostLoad__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFixInvalidEdgesOnPostLoad);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFuzzGPUMemory'' @ 150418dd0

void __cdecl PCGSystemSwitches::_dynamic_atexit_destructor_for__CVarFuzzGPUMemory__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFuzzGPUMemory);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPCGAllowPerDataCaching'' @ 150418df0

void __cdecl _dynamic_atexit_destructor_for__CVarPCGAllowPerDataCaching__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPCGAllowPerDataCaching);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPCGDebugDrawGeneratedCells'' @ 150418e10

void __cdecl
PCGSystemSwitches::_dynamic_atexit_destructor_for__CVarPCGDebugDrawGeneratedCells__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPCGDebugDrawGeneratedCells);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPCGEnablePointArrayData'' @ 150418e30

void __cdecl _dynamic_atexit_destructor_for__CVarPCGEnablePointArrayData__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPCGEnablePointArrayData);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPCGEnablePointArrayDataToPointDataConversionWarnings'' @ 150418e50

void __cdecl
_dynamic_atexit_destructor_for__CVarPCGEnablePointArrayDataToPointDataConversionWarnings__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPCGEnablePointArrayDataToPointDataConversionWarnings);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPCGFullDataCrcInCommandlets'' @ 150418e70

void __cdecl _dynamic_atexit_destructor_for__CVarPCGFullDataCrcInCommandlets__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPCGFullDataCrcInCommandlets);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPCGShouldVerifyIfOutputsAreUsedMultipleTimes'' @ 150418e90

void __cdecl
_dynamic_atexit_destructor_for__CVarPCGShouldVerifyIfOutputsAreUsedMultipleTimes__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPCGShouldVerifyIfOutputsAreUsedMultipleTimes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPCGValidatePointMetadata'' @ 150418eb0

void __cdecl _dynamic_atexit_destructor_for__CVarPCGValidatePointMetadata__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPCGValidatePointMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPassGPUDataThroughGridLinks'' @ 150418ed0

void __cdecl
PCGSystemSwitches::_dynamic_atexit_destructor_for__CVarPassGPUDataThroughGridLinks__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPassGPUDataThroughGridLinks);
  return;
}

// `dynamic_atexit_destructor_for_'CVarReleaseTransientResourcesEarly'' @ 150418ef0

void __cdecl
PCGSystemSwitches::_dynamic_atexit_destructor_for__CVarReleaseTransientResourcesEarly__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarReleaseTransientResourcesEarly)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarSamplerMemoryThreshold'' @ 150418f10

void __cdecl PCGFeatureSwitches::_dynamic_atexit_destructor_for__CVarSamplerMemoryThreshold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSamplerMemoryThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultPointMesh'' @ 150418f30

void __cdecl PCGDebugVisConstants::_dynamic_atexit_destructor_for__DefaultPointMesh__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DefaultPointMesh.SubPathString.Data.AllocatorInstance.Data;
  if (DefaultPointMesh.SubPathString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (DefaultPointMesh.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'GRegisterPCGCustomVersion'' @ 150418f50

void __cdecl _dynamic_atexit_destructor_for__GRegisterPCGCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterPCGCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'MaterialForDefaultPointMesh'' @ 150418f70

void __cdecl
PCGDebugVisConstants::_dynamic_atexit_destructor_for__MaterialForDefaultPointMesh__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MaterialForDefaultPointMesh.SubPathString.Data.AllocatorInstance.Data;
  if (MaterialForDefaultPointMesh.SubPathString.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (MaterialForDefaultPointMesh.SubPathString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NonEditorError'' @ 150418f90

void __cdecl PCGAssetExporterUtils::_dynamic_atexit_destructor_for__NonEditorError__(void)

{
  if (NonEditorError.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150418f9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*NonEditorError.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticInLabels'' @ 150418fb0

void __cdecl
`PCGInputOutputPrivate::GetStaticInLabels'::__l2::_dynamic_atexit_destructor_for__StaticInLabels__
          (void)

{
  DestructItems<PCGInputOutputPrivate::FLabelAndTooltip,int>
            ((FLabelAndTooltip *)StaticInLabels.AllocatorInstance.Data,StaticInLabels.ArrayNum);
  if (StaticInLabels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(StaticInLabels.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticOutLabels'' @ 150418ff0

void __cdecl
`PCGInputOutputPrivate::GetStaticOutLabels'::__l2::_dynamic_atexit_destructor_for__StaticOutLabels__
          (void)

{
  DestructItems<PCGInputOutputPrivate::FLabelAndTooltip,int>
            ((FLabelAndTooltip *)StaticOutLabels.AllocatorInstance.Data,StaticOutLabels.ArrayNum);
  if (StaticOutLabels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(StaticOutLabels.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SubtitleEnum'' @ 150419030

void __cdecl PCGControlFlowConstants::_dynamic_atexit_destructor_for__SubtitleEnum__(void)

{
  if (SubtitleEnum.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041903f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SubtitleEnum.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SubtitleInt'' @ 150419050

void __cdecl PCGControlFlowConstants::_dynamic_atexit_destructor_for__SubtitleInt__(void)

{
  if (SubtitleInt.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041905f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SubtitleInt.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SubtitleString'' @ 150419070

void __cdecl PCGControlFlowConstants::_dynamic_atexit_destructor_for__SubtitleString__(void)

{
  if (SubtitleString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041907f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SubtitleString.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'UserParameterTagData'' @ 150419090

void __cdecl PCGBaseSubgraphConstants::_dynamic_atexit_destructor_for__UserParameterTagData__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UserParameterTagData.Data.AllocatorInstance.Data;
  if (UserParameterTagData.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UserParameterTagData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

