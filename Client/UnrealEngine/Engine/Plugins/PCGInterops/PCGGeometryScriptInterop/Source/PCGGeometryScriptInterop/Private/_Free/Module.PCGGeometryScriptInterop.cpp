// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 340

// PositionCurve'' @ 1413bbee0

void __cdecl `dynamic_initializer_for_'FSpline::PositionCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::PositionCurve__);
  return;
}

// RotationCurve'' @ 1413bbf00

void __cdecl `dynamic_initializer_for_'FSpline::RotationCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::RotationCurve__);
  return;
}

// ScaleCurve'' @ 1413bbf20

void __cdecl `dynamic_initializer_for_'FSpline::ScaleCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::ScaleCurve__);
  return;
}

// `dynamic_initializer_for_'ActorIndexAttributeName'' @ 1413bbf40

void __cdecl PCGLevelToAssetConstants::_dynamic_initializer_for__ActorIndexAttributeName__(void)

{
  ::FName::FName(&ActorIndexAttributeName,L"ActorIndex");
  return;
}

// `dynamic_initializer_for_'ActorReferenceAttribute'' @ 1413bbf60

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ActorReferenceAttribute__(void)

{
  ::FName::FName(&ActorReferenceAttribute,L"ActorReference");
  return;
}

// `dynamic_initializer_for_'CVarPCGDynamicMeshAllowSteal'' @ 1413bbf80

void __cdecl
PCGDynamicMeshBaseElement::_dynamic_initializer_for__CVarPCGDynamicMeshAllowSteal__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarPCGDynamicMeshAllowSteal,L"pcg.DynamamicMesh.AllowDataSteal",local_res8,
             L"Allows to steal dynamic meshes pcg data, avoiding a copy when possible.",0);
  atexit(_dynamic_atexit_destructor_for__CVarPCGDynamicMeshAllowSteal__);
  return;
}

// `dynamic_initializer_for_'CVarPCGDynamicMeshStealVerbose'' @ 1413bbfd0

void __cdecl
PCGDynamicMeshBaseElement::_dynamic_initializer_for__CVarPCGDynamicMeshStealVerbose__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPCGDynamicMeshStealVerbose,L"pcg.DynamamicMesh.DataStealVerbose",local_res8,
             L"Verbosity to track steal. 0 = None, 1 = Log, 2 = Log + Graph message",0);
  atexit(_dynamic_atexit_destructor_for__CVarPCGDynamicMeshStealVerbose__);
  return;
}

// `dynamic_initializer_for_'CompactNodeConvert'' @ 1413bc020

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeConvert__(void)

{
  ::FName::FName(&CompactNodeConvert,L"PCG.Node.Compact.Convert");
  return;
}

// `dynamic_initializer_for_'CompactNodeFilter'' @ 1413bc040

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeFilter__(void)

{
  ::FName::FName(&CompactNodeFilter,L"PCG.Node.Compact.Filter");
  return;
}

// `dynamic_initializer_for_'ControlPointDomainName'' @ 1413bc060

void __cdecl PCGSplineData::_dynamic_initializer_for__ControlPointDomainName__(void)

{
  ::FName::FName(&ControlPointDomainName,"ControlPoints");
  return;
}

// `dynamic_initializer_for_'Data'' @ 1413bc080

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

// `dynamic_initializer_for_'DataDomainName'' @ 1413bc0c0

void __cdecl PCGDataConstants::_dynamic_initializer_for__DataDomainName__(void)

{
  ::FName::FName(&DataDomainName,"Data");
  return;
}

// `dynamic_initializer_for_'Default'' @ 1413bc0e0

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

// `dynamic_initializer_for_'DefaultDependencyOnlyLabel'' @ 1413bc120

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultDependencyOnlyLabel__(void)

{
  ::FName::FName(&DefaultDependencyOnlyLabel,L"Dependency Only");
  return;
}

// `dynamic_initializer_for_'DefaultDomainName'' @ 1413bc140

void __cdecl PCGDataConstants::_dynamic_initializer_for__DefaultDomainName__(void)

{
  ::FName::FName(&DefaultDomainName,"Default");
  return;
}

// `dynamic_initializer_for_'DefaultExecutionDependencyLabel'' @ 1413bc160

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultExecutionDependencyLabel__(void)

{
  ::FName::FName(&DefaultExecutionDependencyLabel,L"Execution Dependency");
  return;
}

// `dynamic_initializer_for_'DefaultExtrusionVectorAttributeName'' @ 1413bc180

void __cdecl
PCGPrimitiveCrossSection::Constants::_dynamic_initializer_for__DefaultExtrusionVectorAttributeName__
          (void)

{
  ::FName::FName(&DefaultExtrusionVectorAttributeName,L"ExtrusionVector");
  return;
}

// `dynamic_initializer_for_'DefaultInFilterLabel'' @ 1413bc1a0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInFilterLabel__(void)

{
  ::FName::FName(&DefaultInFilterLabel,L"InsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultInputLabel'' @ 1413bc1c0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInputLabel__(void)

{
  ::FName::FName(&DefaultInputLabel,L"In");
  return;
}

// `dynamic_initializer_for_'DefaultOutFilterLabel'' @ 1413bc1e0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutFilterLabel__(void)

{
  ::FName::FName(&DefaultOutFilterLabel,L"OutsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultOutputLabel'' @ 1413bc200

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutputLabel__(void)

{
  ::FName::FName(&DefaultOutputLabel,L"Out");
  return;
}

// `dynamic_initializer_for_'DefaultPCGActorTag'' @ 1413bc220

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGActorTag__(void)

{
  ::FName::FName(&DefaultPCGActorTag,L"PCG Generated Actor");
  return;
}

// `dynamic_initializer_for_'DefaultPCGDebugTag'' @ 1413bc240

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGDebugTag__(void)

{
  ::FName::FName(&DefaultPCGDebugTag,L"PCG Generated Debug Component");
  return;
}

// `dynamic_initializer_for_'DefaultPCGTag'' @ 1413bc260

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGTag__(void)

{
  ::FName::FName(&DefaultPCGTag,L"PCG Generated Component");
  return;
}

// `dynamic_initializer_for_'DefaultParamsLabel'' @ 1413bc280

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultParamsLabel__(void)

{
  ::FName::FName(&DefaultParamsLabel,L"Overrides");
  return;
}

// `dynamic_initializer_for_'Elements'' @ 1413bc2a0

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

// `dynamic_initializer_for_'ElementsDomainName'' @ 1413bc2e0

void __cdecl PCGParamDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Elements");
  return;
}

// `dynamic_initializer_for_'ElementsDomainName'' @ 1413bc300

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Points");
  return;
}

// `dynamic_initializer_for_'ExcludedActorTag'' @ 1413bc320

void __cdecl PCGLevelToAssetConstants::_dynamic_initializer_for__ExcludedActorTag__(void)

{
  ::FName::FName(&ExcludedActorTag,L"PCGLevelToAssetExclude");
  return;
}

// `dynamic_initializer_for_'ExtentsName'' @ 1413bc340

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ExtentsName__(void)

{
  ::FName::FName(&ExtentsName,L"Extents");
  return;
}

// `dynamic_initializer_for_'FeedbackPinIcon'' @ 1413bc360

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__FeedbackPinIcon__(void)

{
  ::FName::FName(&FeedbackPinIcon,L"GraphEditor.GetSequenceBinding");
  return;
}

// `dynamic_initializer_for_'HierarchyDepthAttributeName'' @ 1413bc380

void __cdecl PCGLevelToAssetConstants::_dynamic_initializer_for__HierarchyDepthAttributeName__(void)

{
  ::FName::FName(&HierarchyDepthAttributeName,L"HierarchyDepth");
  return;
}

// `dynamic_initializer_for_'IgnoreParentRotationAttributeName'' @ 1413bc3a0

void __cdecl
PCGLevelToAssetConstants::_dynamic_initializer_for__IgnoreParentRotationAttributeName__(void)

{
  ::FName::FName(&IgnoreParentRotationAttributeName,L"IgnoreParentRotation");
  return;
}

// `dynamic_initializer_for_'IgnoreParentScaleAttributeName'' @ 1413bc3c0

void __cdecl
PCGLevelToAssetConstants::_dynamic_initializer_for__IgnoreParentScaleAttributeName__(void)

{
  ::FName::FName(&IgnoreParentScaleAttributeName,L"IgnoreParentScale");
  return;
}

// `dynamic_initializer_for_'InAppendMeshPinLabel'' @ 1413bc3e0

void __cdecl PCGAppendMeshesFromPoints::_dynamic_initializer_for__InAppendMeshPinLabel__(void)

{
  ::FName::FName(&InAppendMeshPinLabel,L"AppendDynMesh");
  return;
}

// `dynamic_initializer_for_'InDynMeshPinLabel'' @ 1413bc400

void __cdecl PCGAppendMeshesFromPoints::_dynamic_initializer_for__InDynMeshPinLabel__(void)

{
  ::FName::FName(&InDynMeshPinLabel,L"InDynMesh");
  return;
}

// `dynamic_initializer_for_'InPointsPinLabel'' @ 1413bc420

void __cdecl PCGAppendMeshesFromPoints::_dynamic_initializer_for__InPointsPinLabel__(void)

{
  ::FName::FName(&InPointsPinLabel,L"InPoints");
  return;
}

// `dynamic_initializer_for_'InputAPinLabel'' @ 1413bc440

void __cdecl PCGBooleanOperation::_dynamic_initializer_for__InputAPinLabel__(void)

{
  ::FName::FName(&InputAPinLabel,L"InA");
  return;
}

// `dynamic_initializer_for_'InputBPinLabel'' @ 1413bc460

void __cdecl PCGBooleanOperation::_dynamic_initializer_for__InputBPinLabel__(void)

{
  ::FName::FName(&InputBPinLabel,L"InB");
  return;
}

// `dynamic_initializer_for_'Invalid'' @ 1413bc480

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

// `dynamic_initializer_for_'LastAttributeName'' @ 1413bc4c0

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__LastAttributeName__(void)

{
  ::FName::FName(&LastAttributeName,L"@Last");
  return;
}

// `dynamic_initializer_for_'LastCreatedAttributeName'' @ 1413bc4e0

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__LastCreatedAttributeName__(void)

{
  ::FName::FName(&LastCreatedAttributeName,L"@LastCreated");
  return;
}

// `dynamic_initializer_for_'LocalCenterName'' @ 1413bc500

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalCenterName__(void)

{
  ::FName::FName(&LocalCenterName,L"LocalCenter");
  return;
}

// `dynamic_initializer_for_'LocalSizeName'' @ 1413bc520

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalSizeName__(void)

{
  ::FName::FName(&LocalSizeName,L"LocalSize");
  return;
}

// `dynamic_initializer_for_'LogSpline'' @ 1413bc540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_initializer_for__LogSpline__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSpline,L"LogSpline",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSpline__);
  return;
}

// `dynamic_initializer_for_'LoopPinIcon'' @ 1413bc580

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__LoopPinIcon__(void)

{
  ::FName::FName(&LoopPinIcon,L"GraphEditor.Macro.Loop_16x");
  return;
}

// `dynamic_initializer_for_'MarkedForCleanupPCGTag'' @ 1413bc5a0

void __cdecl PCGHelpers::_dynamic_initializer_for__MarkedForCleanupPCGTag__(void)

{
  ::FName::FName(&MarkedForCleanupPCGTag,L"PCG Marked For Cleanup");
  return;
}

// `dynamic_initializer_for_'MaterialAttributeName'' @ 1413bc5c0

void __cdecl PCGLevelToAssetConstants::_dynamic_initializer_for__MaterialAttributeName__(void)

{
  ::FName::FName(&MaterialAttributeName,L"Material");
  return;
}

// `dynamic_initializer_for_'MeshAttributeName'' @ 1413bc5e0

void __cdecl PCGLevelToAssetConstants::_dynamic_initializer_for__MeshAttributeName__(void)

{
  ::FName::FName(&MeshAttributeName,L"Mesh");
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1413bc600

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantPCGGeometryScriptInterop'' @ 1413bc620

void __cdecl _dynamic_initializer_for__ModuleRegistrantPCGGeometryScriptInterop__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "PCGGeometryScriptInterop";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"PCGGeometryScriptInterop",0x18);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FPCGGeometryScriptInteropModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_UPCGGeometryBlueprintElement_ProcessDynamicMesh'' @ 1413bc670

void __cdecl _dynamic_initializer_for__NAME_UPCGGeometryBlueprintElement_ProcessDynamicMesh__(void)

{
  FName::FName(&NAME_UPCGGeometryBlueprintElement_ProcessDynamicMesh,L"ProcessDynamicMesh");
  return;
}

// `dynamic_initializer_for_'OldDefaultParamsLabel'' @ 1413bc690

void __cdecl PCGPinConstants::Private::_dynamic_initializer_for__OldDefaultParamsLabel__(void)

{
  ::FName::FName(&OldDefaultParamsLabel,L"Params");
  return;
}

// `dynamic_initializer_for_'ParentIndexAttributeName'' @ 1413bc6b0

void __cdecl PCGLevelToAssetConstants::_dynamic_initializer_for__ParentIndexAttributeName__(void)

{
  ::FName::FName(&ParentIndexAttributeName,L"ParentIndex");
  return;
}

// `dynamic_initializer_for_'PinLabelCinematic'' @ 1413bc6d0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelCinematic__(void)

{
  ::FName::FName(&PinLabelCinematic,L"Cinematic");
  return;
}

// `dynamic_initializer_for_'PinLabelDefault'' @ 1413bc6f0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelDefault__(void)

{
  ::FName::FName(&PinLabelDefault,L"Default");
  return;
}

// `dynamic_initializer_for_'PinLabelEpic'' @ 1413bc710

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelEpic__(void)

{
  ::FName::FName(&PinLabelEpic,L"Epic");
  return;
}

// `dynamic_initializer_for_'PinLabelHigh'' @ 1413bc730

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelHigh__(void)

{
  ::FName::FName(&PinLabelHigh,L"High");
  return;
}

// `dynamic_initializer_for_'PinLabelLow'' @ 1413bc750

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelLow__(void)

{
  ::FName::FName(&PinLabelLow,L"Low");
  return;
}

// `dynamic_initializer_for_'PinLabelMedium'' @ 1413bc770

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelMedium__(void)

{
  ::FName::FName(&PinLabelMedium,L"Medium");
  return;
}

// `dynamic_initializer_for_'PositionName'' @ 1413bc790

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__PositionName__(void)

{
  ::FName::FName(&PositionName,L"Position");
  return;
}

// `dynamic_initializer_for_'RelativeTransformAttributeName'' @ 1413bc7b0

void __cdecl
PCGLevelToAssetConstants::_dynamic_initializer_for__RelativeTransformAttributeName__(void)

{
  ::FName::FName(&RelativeTransformAttributeName,L"RelativeTransform");
  return;
}

// `dynamic_initializer_for_'RotationName'' @ 1413bc7d0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__RotationName__(void)

{
  ::FName::FName(&RotationName,L"Rotation");
  return;
}

// `dynamic_initializer_for_'ScaleName'' @ 1413bc7f0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaleName__(void)

{
  ::FName::FName(&ScaleName,L"Scale");
  return;
}

// `dynamic_initializer_for_'ScaledLocalSizeName'' @ 1413bc810

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaledLocalSizeName__(void)

{
  ::FName::FName(&ScaledLocalSizeName,L"ScaledLocalSize");
  return;
}

// `dynamic_initializer_for_'SourceAttributeName'' @ 1413bc830

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceAttributeName__(void)

{
  ::FName::FName(&SourceAttributeName,L"@Source");
  return;
}

// `dynamic_initializer_for_'SourceNameAttributeName'' @ 1413bc850

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceNameAttributeName__(void)

{
  ::FName::FName(&SourceNameAttributeName,L"@SourceName");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1413bc870

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1413bc900

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1413bc990

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1413bca20

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1413bcab0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1413bcb40

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1413bcbd0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1413bcc60

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1413bccf0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1413bcd80

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGAppendMeshesFromPoints_h__Script_PCGGeometryScriptInterop_21068283'' @ 1413bce10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGAppendMeshesFromPoints_h__Script_PCGGeometryScriptInterop_21068283__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCGGeometryScriptInterop",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGAppendMeshesFromPoints_h__Script_PCGGeometryScriptInterop_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGAppendMeshesFromPoints_h__Script_PCGGeometryScriptInterop_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGBooleanOperation_h__Script_PCGGeometryScriptInterop_4129987233'' @ 1413bce60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGBooleanOperation_h__Script_PCGGeometryScriptInterop_4129987233__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCGGeometryScriptInterop",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGBooleanOperation_h__Script_PCGGeometryScriptInterop_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGBooleanOperation_h__Script_PCGGeometryScriptInterop_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGCreateEmptyDynamicMesh_h__Script_PCGGeometryScriptInterop_3648196629'' @ 1413bceb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGCreateEmptyDynamicMesh_h__Script_PCGGeometryScriptInterop_3648196629__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCGGeometryScriptInterop",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGCreateEmptyDynamicMesh_h__Script_PCGGeometryScriptInterop_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGDynamicMeshBaseElement_h__Script_PCGGeometryScriptInterop_3872305241'' @ 1413bcef0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGDynamicMeshBaseElement_h__Script_PCGGeometryScriptInterop_3872305241__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCGGeometryScriptInterop",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGDynamicMeshBaseElement_h__Script_PCGGeometryScriptInterop_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGDynamicMeshTransform_h__Script_PCGGeometryScriptInterop_218452825'' @ 1413bcf30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGDynamicMeshTransform_h__Script_PCGGeometryScriptInterop_218452825__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCGGeometryScriptInterop",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGDynamicMeshTransform_h__Script_PCGGeometryScriptInterop_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGGeometryBlueprintElement_h__Script_PCGGeometryScriptInterop_3228942957'' @ 1413bcf70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGGeometryBlueprintElement_h__Script_PCGGeometryScriptInterop_3228942957__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCGGeometryScriptInterop",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGGeometryBlueprintElement_h__Script_PCGGeometryScriptInterop_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGGetDynamicMeshData_h__Script_PCGGeometryScriptInterop_2374881576'' @ 1413bcfb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGGetDynamicMeshData_h__Script_PCGGeometryScriptInterop_2374881576__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCGGeometryScriptInterop",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGGetDynamicMeshData_h__Script_PCGGeometryScriptInterop_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMergeDynamicMeshes_h__Script_PCGGeometryScriptInterop_2206586997'' @ 1413bcff0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMergeDynamicMeshes_h__Script_PCGGeometryScriptInterop_2206586997__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCGGeometryScriptInterop",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMergeDynamicMeshes_h__Script_PCGGeometryScriptInterop_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h__Script_PCGGeometryScriptInterop_1977435657'' @ 1413bd030

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h__Script_PCGGeometryScriptInterop_1977435657__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCGGeometryScriptInterop",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h__Script_PCGGeometryScriptInterop_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h__Script_PCGGeometryScriptInterop_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGPrimitiveCrossSection_h__Script_PCGGeometryScriptInterop_2068600018'' @ 1413bd080

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGPrimitiveCrossSection_h__Script_PCGGeometryScriptInterop_2068600018__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCGGeometryScriptInterop",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGPrimitiveCrossSection_h__Script_PCGGeometryScriptInterop_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSaveDynamicMeshToAsset_h__Script_PCGGeometryScriptInterop_594541982'' @ 1413bd0c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSaveDynamicMeshToAsset_h__Script_PCGGeometryScriptInterop_594541982__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCGGeometryScriptInterop",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSaveDynamicMeshToAsset_h__Script_PCGGeometryScriptInterop_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSpawnDynamicMesh_h__Script_PCGGeometryScriptInterop_4076594726'' @ 1413bd100

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSpawnDynamicMesh_h__Script_PCGGeometryScriptInterop_4076594726__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCGGeometryScriptInterop",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSpawnDynamicMesh_h__Script_PCGGeometryScriptInterop_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSplineToMesh_h__Script_PCGGeometryScriptInterop_2875669657'' @ 1413bd140

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSplineToMesh_h__Script_PCGGeometryScriptInterop_2875669657__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCGGeometryScriptInterop",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSplineToMesh_h__Script_PCGGeometryScriptInterop_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGStaticMeshToDynamicMeshElement_h__Script_PCGGeometryScriptInterop_3822929957'' @ 1413bd180

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGStaticMeshToDynamicMeshElement_h__Script_PCGGeometryScriptInterop_3822929957__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCGGeometryScriptInterop",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGStaticMeshToDynamicMeshElement_h__Script_PCGGeometryScriptInterop_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Resources_PCGDynamicMeshManagedComponent_h__Script_PCGGeometryScriptInterop_3787219527'' @ 1413bd1c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Resources_PCGDynamicMeshManagedComponent_h__Script_PCGGeometryScriptInterop_3787219527__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCGGeometryScriptInterop",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Resources_PCGDynamicMeshManagedComponent_h__Script_PCGGeometryScriptInterop_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_PCGGeometryScriptInterop'' @ 1413bd200

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_PCGGeometryScriptInterop__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xe74955c0;
  local_res8[0].DeclarationsHash = 0x771df68d;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_PCGGeometryScriptInterop,
             L"/Script/PCGGeometryScriptInterop",
             &Z_Registration_Info_UPackage__Script_PCGGeometryScriptInterop,local_res8);
  return;
}

// Z_Construct_UClass_UPCGDynamicMeshManagedComponent @ 14cedbd30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDynamicMeshManagedComponent(void)

{
  if (Z_Registration_Info_UClass_UPCGDynamicMeshManagedComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDynamicMeshManagedComponent.OuterSingleton,
               &Z_Construct_UClass_UPCGDynamicMeshManagedComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDynamicMeshManagedComponent.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14cedbd70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NPEAUFPCGContext__AEBUFPCGGetDataFunctionRegistryParams__PEAVAActor__AEAUFPCGGetDataFunctionRegistryOutput___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cedbdf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NPEAUFPCGContext__AEBUFPCGGetDataFunctionRegistryParams__PEAVUActorComponent__AEAUFPCGGetDataFunctionRegistryOutput___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UClass_UPCGGeometryBlueprintElement @ 14cedc160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGeometryBlueprintElement(void)

{
  if (Z_Registration_Info_UClass_UPCGGeometryBlueprintElement.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGeometryBlueprintElement.OuterSingleton,
               &Z_Construct_UClass_UPCGGeometryBlueprintElement_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGeometryBlueprintElement.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14cedc1a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPCGGeometryScriptInteropModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FPCGGeometryScriptInteropModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UFunction_UPCGGeometryBlueprintElement_CopyOrStealInputData @ 14cedc1d0

UFunction * __cdecl Z_Construct_UFunction_UPCGGeometryBlueprintElement_CopyOrStealInputData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGGeometryBlueprintElement_CopyOrStealInputData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGGeometryBlueprintElement_ProcessDynamicMesh @ 14cedc210

UFunction * __cdecl Z_Construct_UFunction_UPCGGeometryBlueprintElement_ProcessDynamicMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGGeometryBlueprintElement_ProcessDynamicMesh_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_PCGGeometryScriptInterop @ 14cedc3d0

UPackage * __cdecl Z_Construct_UPackage__Script_PCGGeometryScriptInterop(void)

{
  if (Z_Registration_Info_UPackage__Script_PCGGeometryScriptInterop.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_PCGGeometryScriptInterop.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_PCGGeometryScriptInterop.OuterSingleton;
}

// Z_Construct_UClass_UPCGSplineToMeshSettings @ 14cedc4d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSplineToMeshSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGSplineToMeshSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSplineToMeshSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGSplineToMeshSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSplineToMeshSettings.OuterSingleton;
}

// NewProp_bFlipResult_SetBit @ 14cedc510

void __cdecl
Z_Construct_UClass_UPCGSplineToMeshSettings_Statics::NewProp_bFlipResult_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe0) = 1;
  return;
}

// Z_Construct_UClass_UPCGStaticMeshToDynamicMeshSettings @ 14cedc6a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGStaticMeshToDynamicMeshSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGStaticMeshToDynamicMeshSettings.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGStaticMeshToDynamicMeshSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGStaticMeshToDynamicMeshSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshToDynamicMeshSettings.OuterSingleton;
}

// NewProp_bExtractMaterials_SetBit @ 14cedc6e0

void __cdecl
Z_Construct_UClass_UPCGStaticMeshToDynamicMeshSettings_Statics::NewProp_bExtractMaterials_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf0) = 1;
  return;
}

// NewProp_bSynchronousLoad_SetBit @ 14cedc6f0

void __cdecl
Z_Construct_UClass_UPCGStaticMeshToDynamicMeshSettings_Statics::NewProp_bSynchronousLoad_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x110) = 1;
  return;
}

// Z_Construct_UClass_UPCGSaveDynamicMeshToAssetSettings @ 14cedc7c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSaveDynamicMeshToAssetSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGSaveDynamicMeshToAssetSettings.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSaveDynamicMeshToAssetSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGSaveDynamicMeshToAssetSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSaveDynamicMeshToAssetSettings.OuterSingleton;
}

// NewProp_bExportMaterialsFromDynamicMesh_SetBit @ 14cedc800

void __cdecl
Z_Construct_UClass_UPCGSaveDynamicMeshToAssetSettings_Statics::
NewProp_bExportMaterialsFromDynamicMesh_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf8) = 1;
  return;
}

// Z_Construct_UClass_UPCGMeshSamplerSettings @ 14cedc810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGMeshSamplerSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGMeshSamplerSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGMeshSamplerSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGMeshSamplerSettings.OuterSingleton;
}

// Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGColorChannel @ 14cedc850

UEnum * __cdecl Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGColorChannel(void)

{
  if (Z_Registration_Info_UEnum_EPCGColorChannel.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGColorChannel.InnerSingleton,
               &Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGColorChannel_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGColorChannel.InnerSingleton;
}

// Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod @ 14cedc890

UEnum * __cdecl Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod(void)

{
  if (Z_Registration_Info_UEnum_EPCGMeshSamplingMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGMeshSamplingMethod.InnerSingleton,
               &Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGMeshSamplingMethod.InnerSingleton;
}

// EPCGMeshSamplingMethod_StaticEnum @ 14cedc8d0

UEnum * __cdecl EPCGMeshSamplingMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGMeshSamplingMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCGGeometryScriptInterop();
    Z_Registration_Info_UEnum_EPCGMeshSamplingMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod,
                       (UObject *)pUVar1,L"EPCGMeshSamplingMethod");
  }
  return Z_Registration_Info_UEnum_EPCGMeshSamplingMethod.OuterSingleton;
}

// EPCGColorChannel_StaticEnum @ 14cedc910

UEnum * __cdecl EPCGColorChannel_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGColorChannel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCGGeometryScriptInterop();
    Z_Registration_Info_UEnum_EPCGColorChannel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGColorChannel,(UObject *)pUVar1
                       ,L"EPCGColorChannel");
  }
  return Z_Registration_Info_UEnum_EPCGColorChannel.OuterSingleton;
}

// NewProp_bExtractMeshFromInput_SetBit @ 14cedc950

void __cdecl
Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bExtractMeshFromInput_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 200) = 1;
  return;
}

// NewProp_bUseColorChannelAsDensity_SetBit @ 14cedc960

void __cdecl
Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bUseColorChannelAsDensity_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x139) = 1;
  return;
}

// NewProp_bVoxelize_SetBit @ 14cedc970

void __cdecl
Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bVoxelize_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x140) = 1;
  return;
}

// NewProp_bRemoveHiddenTriangles_SetBit @ 14cedc980

void __cdecl
Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bRemoveHiddenTriangles_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x148) = 1;
  return;
}

// NewProp_bExtractUVAsAttribute_SetBit @ 14cedc990

void __cdecl
Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bExtractUVAsAttribute_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x188) = 1;
  return;
}

// NewProp_bOutputTriangleIds_SetBit @ 14cedc9a0

void __cdecl
Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bOutputTriangleIds_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x198) = 1;
  return;
}

// NewProp_bOutputMaterialInfo_SetBit @ 14cedc9b0

void __cdecl
Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bOutputMaterialInfo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 1;
  return;
}

// NewProp_bSynchronousLoad_SetBit @ 14cedc9c0

void __cdecl
Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bSynchronousLoad_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1bc) = 1;
  return;
}

// Z_Construct_UClass_UPCGGetDynamicMeshDataSettings @ 14cedcb50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGetDynamicMeshDataSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGGetDynamicMeshDataSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGetDynamicMeshDataSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGGetDynamicMeshDataSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGetDynamicMeshDataSettings.OuterSingleton;
}

// Z_Construct_UClass_UPCGBooleanOperationSettings @ 14cedcb90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGBooleanOperationSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGBooleanOperationSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGBooleanOperationSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGBooleanOperationSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGBooleanOperationSettings.OuterSingleton;
}

// Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGBooleanOperationMode @ 14cedcbd0

UEnum * __cdecl Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGBooleanOperationMode(void)

{
  if (Z_Registration_Info_UEnum_EPCGBooleanOperationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGBooleanOperationMode.InnerSingleton,
               &Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGBooleanOperationMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGBooleanOperationMode.InnerSingleton;
}

// Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGBooleanOperationTagInheritanceMode @ 14cedcc10

UEnum * __cdecl
Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGBooleanOperationTagInheritanceMode(void)

{
  if (Z_Registration_Info_UEnum_EPCGBooleanOperationTagInheritanceMode.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGBooleanOperationTagInheritanceMode.InnerSingleton,
               &Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGBooleanOperationTagInheritanceMode_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGBooleanOperationTagInheritanceMode.InnerSingleton;
}

// EPCGBooleanOperationTagInheritanceMode_StaticEnum @ 14cedcc50

UEnum * __cdecl EPCGBooleanOperationTagInheritanceMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGBooleanOperationTagInheritanceMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCGGeometryScriptInterop();
    Z_Registration_Info_UEnum_EPCGBooleanOperationTagInheritanceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGBooleanOperationTagInheritanceMode
                       ,(UObject *)pUVar1,L"EPCGBooleanOperationTagInheritanceMode");
  }
  return Z_Registration_Info_UEnum_EPCGBooleanOperationTagInheritanceMode.OuterSingleton;
}

// EPCGBooleanOperationMode_StaticEnum @ 14cedcc90

UEnum * __cdecl EPCGBooleanOperationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGBooleanOperationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCGGeometryScriptInterop();
    Z_Registration_Info_UEnum_EPCGBooleanOperationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGBooleanOperationMode,
                       (UObject *)pUVar1,L"EPCGBooleanOperationMode");
  }
  return Z_Registration_Info_UEnum_EPCGBooleanOperationMode.OuterSingleton;
}

// Z_Construct_UClass_UPCGPrimitiveCrossSectionSettings @ 14cedce50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGPrimitiveCrossSectionSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGPrimitiveCrossSectionSettings.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGPrimitiveCrossSectionSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGPrimitiveCrossSectionSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGPrimitiveCrossSectionSettings.OuterSingleton;
}

// NewProp_bEnableTierMerging_SetBit @ 14cedce90

void __cdecl
Z_Construct_UClass_UPCGPrimitiveCrossSectionSettings_Statics::NewProp_bEnableTierMerging_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x128) = 1;
  return;
}

// NewProp_bEnableMinAreaCulling_SetBit @ 14cedcea0

void __cdecl
Z_Construct_UClass_UPCGPrimitiveCrossSectionSettings_Statics::NewProp_bEnableMinAreaCulling_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x138) = 1;
  return;
}

// NewProp_bEnableMinHeightCulling_SetBit @ 14cedceb0

void __cdecl
Z_Construct_UClass_UPCGPrimitiveCrossSectionSettings_Statics::NewProp_bEnableMinHeightCulling_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x148) = 1;
  return;
}

// NewProp_bRemoveRedundantSections_SetBit @ 14cedcec0

void __cdecl
Z_Construct_UClass_UPCGPrimitiveCrossSectionSettings_Statics::
NewProp_bRemoveRedundantSections_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x158) = 1;
  return;
}

// Z_Construct_UClass_UPCGCreateEmptyDynamicMeshSettings @ 14cedced0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCreateEmptyDynamicMeshSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGCreateEmptyDynamicMeshSettings.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCreateEmptyDynamicMeshSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGCreateEmptyDynamicMeshSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGCreateEmptyDynamicMeshSettings.OuterSingleton;
}

// Z_Construct_UClass_UPCGMergeDynamicMeshesSettings @ 14cedcf10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGMergeDynamicMeshesSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGMergeDynamicMeshesSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGMergeDynamicMeshesSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGMergeDynamicMeshesSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGMergeDynamicMeshesSettings.OuterSingleton;
}

// Z_Construct_UClass_UPCGAppendMeshesFromPointsSettings @ 14cedcf50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGAppendMeshesFromPointsSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGAppendMeshesFromPointsSettings.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGAppendMeshesFromPointsSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGAppendMeshesFromPointsSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGAppendMeshesFromPointsSettings.OuterSingleton;
}

// Z_Construct_UClass_UPCGDynamicMeshBaseSettings @ 14cedcf90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDynamicMeshBaseSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGDynamicMeshBaseSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDynamicMeshBaseSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGDynamicMeshBaseSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDynamicMeshBaseSettings.OuterSingleton;
}

// Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGAppendMeshesFromPointsMode @ 14cedcfd0

UEnum * __cdecl Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGAppendMeshesFromPointsMode(void)

{
  if (Z_Registration_Info_UEnum_EPCGAppendMeshesFromPointsMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGAppendMeshesFromPointsMode.InnerSingleton,
               &Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGAppendMeshesFromPointsMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGAppendMeshesFromPointsMode.InnerSingleton;
}

// EPCGAppendMeshesFromPointsMode_StaticEnum @ 14cedd010

UEnum * __cdecl EPCGAppendMeshesFromPointsMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGAppendMeshesFromPointsMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCGGeometryScriptInterop();
    Z_Registration_Info_UEnum_EPCGAppendMeshesFromPointsMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGAppendMeshesFromPointsMode,
                       (UObject *)pUVar1,L"EPCGAppendMeshesFromPointsMode");
  }
  return Z_Registration_Info_UEnum_EPCGAppendMeshesFromPointsMode.OuterSingleton;
}

// NewProp_bExtractMaterials_SetBit @ 14cedd1d0

void __cdecl
Z_Construct_UClass_UPCGAppendMeshesFromPointsSettings_Statics::NewProp_bExtractMaterials_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x138) = 1;
  return;
}

// NewProp_bSynchronousLoad_SetBit @ 14cedd1e0

void __cdecl
Z_Construct_UClass_UPCGAppendMeshesFromPointsSettings_Statics::NewProp_bSynchronousLoad_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x140) = 1;
  return;
}

// Z_Construct_UClass_UPCGDynamicMeshTransformSettings @ 14cedd1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDynamicMeshTransformSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGDynamicMeshTransformSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDynamicMeshTransformSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGDynamicMeshTransformSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDynamicMeshTransformSettings.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14cedd460

void * __thiscall
FPCGGeometryScriptInteropModule::_scalar_deleting_destructor_
          (FPCGGeometryScriptInteropModule *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UClass_UPCGSpawnDynamicMeshSettings @ 14cedd560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSpawnDynamicMeshSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGSpawnDynamicMeshSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSpawnDynamicMeshSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGSpawnDynamicMeshSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSpawnDynamicMeshSettings.OuterSingleton;
}

// ApplyOnAccessorRange<FSoftObjectPath,`PCGMetadataElementCommon::ApplyOnAccessor<FSoftObjectPath,`FPCGAppendMeshesFromPointsElement::PrepareDataInternal'::__l28::<lambda_1>_>'::__l2::<lambda_1>_> @ 14cedd8e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
PCGMetadataElementCommon::
ApplyOnAccessorRange<FSoftObjectPath,_PCGMetadataElementCommon::ApplyOnAccessor<FSoftObjectPath,_FPCGAppendMeshesFromPointsElement::PrepareDataInternal_::__l28::<lambda_1>_>_::__l2::<lambda_1>_>
          (IPCGAttributeAccessorKeys *param_1,IPCGAttributeAccessor *param_2,<lambda_1> *param_3,
          EPCGAttributeAccessorFlags param_4,int param_5,int param_6)

{
  FPCGAppendMeshesFromPointsContext *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  <lambda_1> *p<Var4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  ForElementType<FSoftObjectPath> FVar11;
  int iVar12;
  int iVar13;
  undefined1 auStackY_2108 [32];
  int local_20b8 [2];
  int local_20b0;
  EPCGAttributeAccessorFlags local_20ac;
  int local_20a8;
  <lambda_1> *local_20a0;
  IPCGAttributeAccessor *local_2098;
  IPCGAttributeAccessorKeys *local_2090;
  ForElementType<FSoftObjectPath> local_2088;
  int iStack_2080;
  undefined4 uStack_207c;
  TArrayView<FSoftObjectPath,int> local_2078;
  ForElementType<FSoftObjectPath> local_2068;
  int local_60 [2];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2108;
  local_20ac = param_4;
  local_20a0 = param_3;
  local_2098 = param_2;
  local_2090 = param_1;
  if (param_6 < 0) {
    param_6 = (**(code **)(param_1->_padding_ + 0x10))();
  }
  if (param_6 == 0) {
    bVar5 = false;
  }
  else {
    local_2068.SecondaryData = (ForElementType<FSoftObjectPath>)0x0;
    local_60[0] = 0;
    local_60[1] = 0x100;
    if (param_5 < 1) {
      if (param_5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_5);
      }
    }
    else {
      iVar7 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
                        (0x20,8,param_5,&local_2068,local_60,local_60 + 1);
      FVar11 = (ForElementType<FSoftObjectPath>)&local_2068;
      if (local_2068.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
        FVar11 = local_2068.SecondaryData;
      }
      DefaultConstructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)((longlong)iVar7 * 0x20 + (longlong)FVar11),param_5);
    }
    local_20a8 = (param_5 + -1 + param_6) / param_5;
    local_20b0 = 0;
    if (0 < local_20a8) {
      iVar7 = 0;
      do {
        iVar13 = param_5;
        if (param_6 < param_5) {
          iVar13 = param_6;
        }
        FVar11 = (ForElementType<FSoftObjectPath>)&local_2068;
        if (local_2068.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
          FVar11 = local_2068.SecondaryData;
        }
        local_2088 = FVar11;
        iStack_2080 = iVar13;
        if ((iVar13 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        local_2078._12_4_ = uStack_207c;
        local_2078.ArrayNum = iStack_2080;
        local_2078.DataPtr = (FSoftObjectPath *)local_2088;
        bVar5 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                          (param_2,&local_2078,iVar7,param_1,local_20ac);
        p<Var4 = local_20a0;
        if (!bVar5) {
          bVar5 = false;
          goto LAB_14ceddc0d;
        }
        iVar12 = 0;
        if (0 < iVar13) {
          do {
            if ((iVar12 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            local_20b8[0] = iVar12 + iVar7;
            if (*(longlong *)FVar11 != 0) {
              TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<FSoftObjectPath_const_&>
                        ((p<Var4->Callback).StaticMeshesToLoad,(FSoftObjectPath *)FVar11);
              pFVar1 = (p<Var4->Callback).Context;
              uVar8 = ::GetTypeHash((FSoftObjectPath *)FVar11);
              pTVar10 = TMapBase<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                        ::FindOrAddImpl<FSoftObjectPath_const_&>
                                  ((TMapBase<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                    *)&pFVar1->MeshToPointIndicesMapping,uVar8,
                                   (FSoftObjectPath *)FVar11);
              pFVar2 = (pTVar10->AllocatorInstance).Data;
              if (((pFVar2 <= (FScriptContainerElement *)local_20b8) &&
                  ((FScriptContainerElement *)local_20b8 < pFVar2 + (longlong)pTVar10->ArrayMax * 4)
                  ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              iVar9 = pTVar10->ArrayNum;
              if (iVar9 == pTVar10->ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
              }
              pTVar10->ArrayNum = iVar9 + 1;
              *(int *)((pTVar10->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_20b8[0];
            }
            iVar12 = iVar12 + 1;
            FVar11 = (ForElementType<FSoftObjectPath>)((longlong)FVar11 + 0x20);
            param_2 = local_2098;
          } while (iVar12 < iVar13);
        }
        param_6 = param_6 - param_5;
        local_20b0 = local_20b0 + 1;
        iVar7 = iVar7 + param_5;
        param_1 = local_2090;
      } while (local_20b0 < local_20a8);
    }
    bVar5 = true;
LAB_14ceddc0d:
    FVar11 = (ForElementType<FSoftObjectPath>)&local_2068;
    if (local_2068.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
      FVar11 = local_2068.SecondaryData;
    }
    DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)FVar11,local_60[0]);
    if (local_2068.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
      FMemory::Free((void *)local_2068.SecondaryData);
    }
  }
  return bVar5;
}

// Async<`PCGMeshSampler::PoissonSampling'::__l14::<lambda_2>_> @ 14ceddc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<bool> * __cdecl
Async<_PCGMeshSampler::PoissonSampling_::__l14::<lambda_2>_>
          (TFuture<bool> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_2> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  FPCGMeshSamplerContext *pFVar6;
  _func___cdecl_void_FLinearColor_ptr_FPCGPoint_ptr *p_Var7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  atomic<unsigned_char> aVar10;
  int iVar11;
  FTaskBase *pFVar12;
  TFuture<bool> *pTVar13;
  FTaskBase *pFVar14;
  FTSTicker *this;
  undefined8 uVar15;
  FTaskBase *pFVar16;
  FRunnableThread *pFVar17;
  undefined8 *puVar18;
  code **ppcVar19;
  FPipe *pFVar20;
  FSharedReferencer<1> FVar21;
  longlong *plVar22;
  ForAnyElementType FVar23;
  FTaskBase *pFVar24;
  FTaskBase *pFVar25;
  Type TVar26;
  FTaskBase *pFVar27;
  FTaskBase *this_00;
  undefined1 auStackY_1e8 [32];
  EExtendedTaskPriority local_1a8;
  ETaskPriority local_1a7 [7];
  FTaskBase *local_1a0;
  EAsyncExecution local_198;
  TFuture<bool> *local_190;
  FTaskBase *local_188;
  FRunnableThread *local_180;
  FRunnableThread *local_178;
  TPromise<FRunnableThread_*> local_170;
  TPromise<FRunnableThread_*> local_158;
  FString local_130;
  FString local_120;
  TWeakPtr<FTSTicker::FElement,1> local_110;
  FTaskBase *local_f8;
  FPipe local_e8;
  code *local_b8;
  code *pcStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  FTaskBase *local_98;
  FTaskBase *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pFVar25 = (FTaskBase *)0x0;
  local_1a0 = (FTaskBase *)((ulonglong)local_1a0 & 0xffffffff00000000);
  local_f8 = (FTaskBase *)0x0;
  local_198 = param_1;
  local_190 = __return_storage_ptr__;
  local_188 = (FTaskBase *)param_3;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController = FMemory::Malloc(0x30,8);
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`PCGMeshSampler::PoissonSampling'::`14'::<lambda_2>,1,1>::_vftable_;
  pFVar6 = param_2->Context;
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount =
       (atomic<unsigned___int64>)param_2->Settings;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).Object
       = (TEventCount<unsigned_int> *)pFVar6;
  p_Var7 = param_2->SetPointDensityPtr;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).
  SharedReferenceCount.ReferenceController = *(TReferenceControllerBase<1> **)&param_2->Seed;
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->DebugName =
       (wchar_t *)p_Var7;
  ((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x28))->
  LastTask = *(atomic<UE::Tasks::Private::FTaskBase_*> *)&param_2->DataIndex;
  if (&((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount !=
      (atomic<unsigned___int64> *)0x0) {
    local_f8 = (FTaskBase *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`PCGMeshSampler::PoissonSampling'::__l14::<lambda_2>,bool>::Call;
  }
  pFVar12 = operator_new(0x90);
  if (pFVar12 == (FTaskBase *)0x0) {
    local_1a0 = (FTaskBase *)0x0;
    this_00 = (FTaskBase *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar12 = pFVar25;
  }
  else {
    *(atomic<int> *)&pFVar12->_padding_ = (atomic<int>)0x1;
    ((atomic<int> *)&pFVar12->_padding_)[1] = (atomic<int>)0x1;
    pFVar12->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TFutureState__N___00_SharedPointerInternals__6B_;
    FFutureState::FFutureState((FFutureState *)&pFVar12->_padding_,param_3);
    this_00 = (FTaskBase *)&pFVar12->_padding_;
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
    LOCK();
    *(atomic<int> *)&pFVar12->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pFVar12->_padding_ + 1);
    UNLOCK();
    local_1a0 = pFVar12;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
    LOCK();
    *(atomic<int> *)&pFVar12->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pFVar12->_padding_ + 1);
    UNLOCK();
  }
  pFVar24 = this_00;
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar26 = GameThread;
    if (local_198 == TaskGraph) {
      TVar26 = AnyNormalThreadNormalTask;
    }
    pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar24 = pFVar25;
    if (pFVar14 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar14,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar14->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask__N____6B_;
      pFVar24 = pFVar14;
    }
    pFVar24[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar24[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar24[1]._padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pFVar24[1]._padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_1a0 = (FTaskBase *)0x0;
    pFVar24[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar24[1]._padding_ != 0) {
      local_f8 = pFVar25;
    }
    pFVar24[1].Pipe = (FPipe *)this_00;
    *(FTaskBase **)&pFVar24[1].StateChangeEvent = pFVar12;
    *(undefined1 *)&pFVar24[1].ExecutingThreadId = 1;
    *(Type *)&pFVar24[1].TraceId = TVar26;
    UE::Tasks::Private::TranslatePriority(TVar26,local_1a7,&local_1a8);
    FBaseGraphTask::Init((FBaseGraphTask *)pFVar24,L"GraphTask",local_1a7[0],local_1a8,None);
    if (pFVar24 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar24->RefCount = (atomic<unsigned_int>)((int)pFVar24->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar24,0x130);
      LOCK();
      paVar1 = &pFVar24->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar24->_padding_)(pFVar24,1);
      }
    }
    goto LAB_14ceddf44;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pcStack_b0 = (code *)CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_1a0 = (FTaskBase *)0x0;
    local_88 = 1;
    local_78[0] = (code *)0x0;
    local_98 = this_00;
    local_90 = pFVar12;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`PCGMeshSampler::PoissonSampling'::`14'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar19 = local_50 + 2;
    *ppcVar19 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    local_50[4] = local_b8;
    local_50[5] = pcStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar19 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (FTaskBase *)0x0;
    local_98 = (FTaskBase *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar19 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`PCGMeshSampler::PoissonSampling'::__l14::<lambda_2>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_110,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_110.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_110.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_110.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_110.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar19 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar19 = local_50;
      }
      (**(code **)(*ppcVar19 + 0x10))();
    }
    if (((local_98 != (FTaskBase *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0')) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar20 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar20 = local_a0;
      }
      (**(code **)(*(code **)pFVar20 + 0x10))();
    }
LAB_14ceddf44:
    pTVar13 = local_190;
    *(FTaskBase **)local_190 = this_00;
    *(FTaskBase **)&local_190->field_0x8 = pFVar12;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    goto LAB_14cede76a;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_170);
      pFVar16 = operator_new(0x70);
      pFVar14 = local_188;
      pFVar27 = pFVar25;
      if (pFVar16 != (FTaskBase *)0x0) {
        if ((local_170.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
        pTVar8 = local_170.State.Object;
        local_170.bFutureRetrieved = true;
        if ((local_170.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
        if (local_170.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_170.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1a0 = (FTaskBase *)0x0;
        pFVar16->_padding_ = (longlong)&___7__TAsyncRunnable__N__6B_;
        pFVar16->_padding_ = (longlong)local_f8;
        pFVar16->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar16->_padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar16->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar16->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (pFVar16->_padding_ != 0) {
          local_f8 = pFVar25;
        }
        *(TReferenceControllerBase<1> **)
         &(pFVar16->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_170.State.SharedReferenceCount.ReferenceController;
        *(FTaskBase **)&(pFVar16->StateChangeEvent).Count = this_00;
        *(FTaskBase **)&pFVar16->ExecutingThreadId = pFVar12;
        (pFVar16->TraceId).field_0x0 = 1;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar16->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar14 = pFVar25;
        pFVar24 = pFVar25;
        pFVar25 = (FTaskBase *)&DAT_00000001;
        pFVar27 = pFVar16;
      }
      if (pFVar25 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar14);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_130,L"TAsync %d");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        FVar23.Data = local_130.Data.AllocatorInstance.Data;
      }
      pFVar17 = FRunnableThread::Create
                          ((FRunnable *)pFVar27,(wchar_t *)FVar23.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_180 = pFVar17;
      if ((pFVar17 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      iVar11 = (**(code **)(pFVar17->_padding_ + 0x28))(pFVar17);
      if ((iVar11 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_170,&local_180);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (((local_170.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_170.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.State.SharedReferenceCount.ReferenceController);
    }
    else {
LAB_14cede328:
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar25 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar15 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      aVar10 = (atomic<unsigned_char>)(*(code *)pFVar25)(uVar15);
      if (this_00 == (FTaskBase *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
      }
      if (((char)(this_00->Prerequisites).Prerequisites.ArrayNum != '\0') &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      (this_00->Prerequisites).Mutex.State = aVar10;
      FFutureState::MarkComplete((FFutureState *)this_00);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((!bVar9) && (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), !bVar9))
    goto LAB_14cede328;
    TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
    pFVar16 = operator_new(0x70);
    pFVar14 = local_188;
    pFVar27 = pFVar25;
    if (pFVar16 != (FTaskBase *)0x0) {
      if ((local_158.bFutureRetrieved != false) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!bFutureRetrieved",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x24d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      pTVar8 = local_158.State.Object;
      local_158.bFutureRetrieved = true;
      if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x283,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      if (local_158.State.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      local_1a0 = (FTaskBase *)0x0;
      pFVar16->_padding_ = (longlong)&___7__TAsyncRunnable__N__6B_;
      pFVar16->_padding_ = (longlong)local_f8;
      pFVar16->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
      local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar16->_padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
      pFVar16->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
      *(TEventCount<unsigned_int> **)&(pFVar16->RefCount).field_0x0 = local_e8.EmptyEventRef.Object;
      if (pFVar16->_padding_ != 0) {
        local_f8 = pFVar25;
      }
      *(TReferenceControllerBase<1> **)
       &(pFVar16->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
           local_158.State.SharedReferenceCount.ReferenceController;
      *(FTaskBase **)&(pFVar16->StateChangeEvent).Count = this_00;
      *(FTaskBase **)&pFVar16->ExecutingThreadId = pFVar12;
      (pFVar16->TraceId).field_0x0 = 1;
      *(TFutureState<FRunnableThread_*> **)
       (pFVar16->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
      pFVar14 = pFVar25;
      pFVar24 = pFVar25;
      pFVar25 = (FTaskBase *)&DAT_00000002;
      pFVar27 = pFVar16;
    }
    if (pFVar25 != (FTaskBase *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar14);
    }
    FAsyncThreadIndex::GetNext();
    FString::PrintfImpl(&local_120,L"TAsync %d");
    FVar23.Data = (FScriptContainerElement *)L"";
    if (local_120.Data.ArrayNum != 0) {
      FVar23.Data = local_120.Data.AllocatorInstance.Data;
    }
    pFVar17 = FForkProcessHelper::CreateForkableThread
                        ((FRunnable *)pFVar27,(wchar_t *)FVar23.Data,0,TPri_Normal,
                         0xffffffffffffffff,None,false);
    local_178 = pFVar17;
    if ((pFVar17 == (FRunnableThread *)0x0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("RunnableThread != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                           ,0x161,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
    iVar11 = (**(code **)(pFVar17->_padding_ + 0x28))(pFVar17);
    if ((iVar11 != 0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                           ,0x162,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
    TPromise<FRunnableThread_*>::SetValue(&local_158,&local_178);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
        ((local_158.State.Object)->field_0x68 == '\0')) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.State.SharedReferenceCount.ReferenceController);
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (!bVar9) goto LAB_14cede328;
    if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("GThreadPool != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                           ,0x16f,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
    pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
    puVar18 = operator_new(0x60);
    if (puVar18 == (undefined8 *)0x0) {
      (*pcVar5)(GThreadPool,0,3);
    }
    else {
      puVar18[1] = 0;
      local_1a0 = (FTaskBase *)0x0;
      *puVar18 = &___7__TAsyncQueuedWork__N__6B_;
      puVar18[2] = local_f8;
      puVar18[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
      local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      *(undefined4 *)(puVar18 + 4) = local_e8.LastTask._0_4_;
      *(undefined4 *)((longlong)puVar18 + 0x24) = local_e8.LastTask._4_4_;
      *(undefined4 *)(puVar18 + 5) = local_e8.TaskCount._0_4_;
      *(undefined4 *)((longlong)puVar18 + 0x2c) = local_e8.TaskCount._4_4_;
      puVar18[6] = local_e8.EmptyEventRef.Object;
      if (puVar18[2] != 0) {
        local_f8 = pFVar25;
      }
      puVar18[8] = this_00;
      puVar18[9] = pFVar12;
      *(undefined1 *)(puVar18 + 10) = 1;
      (*pcVar5)(GThreadPool,puVar18,3);
      pFVar24 = pFVar25;
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
  }
  pTVar13 = local_190;
  *(FTaskBase **)local_190 = this_00;
  *(FTaskBase **)&local_190->field_0x8 = pFVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((pFVar24 != (FTaskBase *)0x0) &&
      ((char)(pFVar24->Prerequisites).Prerequisites.ArrayNum == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TFuture<bool> *)(*pcVar5)();
    return pTVar13;
  }
LAB_14cede76a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1a0);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 0x10))();
  }
  if (local_188->_padding_ != 0) {
    plVar22 = &local_188->_padding_;
    if ((longlong *)local_188->_padding_ != (longlong *)0x0) {
      plVar22 = (longlong *)local_188->_padding_;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  return pTVar13;
}

// AsyncProcessingOneToOneRangeEx<`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_2>,`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_1>_&> @ 14cede820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FPCGAsync::
AsyncProcessingOneToOneRangeEx<_PCGMeshSampler::SampleOnePointPerTriangle_::__l2::<lambda_2>,_PCGMeshSampler::SampleOnePointPerTriangle_::__l2::<lambda_1>_&>
          (FPCGAsyncState *param_1,int param_2,<lambda_2> *param_3,<lambda_1> *param_4,bool param_5,
          int param_6,bool param_7)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStackY_148 [32];
  undefined1 local_f8 [4];
  int local_f4;
  code *local_f0;
  <lambda_2> *local_e8;
  code *local_e0;
  <lambda_1> *local_d8;
  code *local_d0;
  <lambda_1> *local_c8;
  code *local_c0;
  <lambda_2> *local_b8;
  undefined1 local_a8 [56];
  ForAnyElementType local_70;
  undefined8 local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  undefined8 uStack_40;
  void *local_30;
  undefined4 local_28;
  undefined4 local_20;
  bool local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_f4 = param_2;
  if ((param_1 == (FPCGAsyncState *)0x0) || (param_1->bIsRunningAsyncCall != false)) {
    local_b8 = (<lambda_2> *)&local_f4;
    local_a8._0_8_ = 0.0;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_2>,`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_1>_&>'::__l2::<lambda_2>,void,int>
               ::Call;
    local_c8 = (<lambda_1> *)local_f8;
    local_a8._12_4_ = 0;
    local_a8._16_4_ = 0;
    local_d0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_2>,`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_1>_&>'::__l2::<lambda_1>,void,int,int,int>
               ::Call;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_1>,int,int,int,int>
               ::Call;
    local_f0 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_2>,void>
               ::Call;
    local_a8._24_8_ = (FScriptContainerElement *)0x0;
    local_a8._32_4_ = 0;
    local_a8._36_4_ = 0;
    local_a8[0x28] = false;
    local_a8._44_4_ = 0;
    local_a8._48_4_ = 0;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 0;
    local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_60._24_8_ = ___xmm_00000000ffffffff0000008000000000;
    uStack_40 = _UNK_150631d98;
    local_30 = (void *)0x0;
    local_28 = 0;
    local_20._0_1_ = true;
    local_20._1_1_ = true;
    local_20._2_1_ = false;
    local_20._3_1_ = false;
    local_1c = false;
    local_a8._8_4_ = 1;
    local_e8 = param_3;
    local_d8 = param_4;
    bVar3 = Private::AsyncProcessing
                      ((FPCGAsyncState *)local_a8,param_2,
                       (TFunctionRef<void___cdecl(void)> *)&local_f0,
                       (TFunctionRef<int___cdecl(int,int,int)> *)&local_e0,
                       (TFunctionRef<void___cdecl(int,int,int)> *)&local_d0,
                       (TFunctionRef<void___cdecl(int)> *)&local_c0,false,param_6,param_7);
    local_28 = 0;
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
    uVar1 = local_68 >> 0x20;
    local_68 = local_68 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_70,0,(int *)((longlong)&local_68 + 4));
    }
    iVar2 = local_60.MaxBits;
    local_60._24_8_ = (ulonglong)(uint)local_60.MaxBits << 0x20;
    uStack_40 = 0xffffffff;
    if (0x80 < (uint)iVar2) {
      local_60.NumBits = 0;
      local_60.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
    }
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
    }
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
    if ((FScriptContainerElement *)local_a8._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._24_8_);
    }
  }
  else {
    local_e8 = (<lambda_2> *)&local_f4;
    local_f0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_2>,`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_1>_&>'::__l2::<lambda_2>,void,int>
               ::Call;
    local_d8 = (<lambda_1> *)local_f8;
    param_1->bIsRunningAsyncCall = true;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_2>,`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_1>_&>'::__l2::<lambda_1>,void,int,int,int>
               ::Call;
    local_d0 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_1>,int,int,int,int>
               ::Call;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_2>,void>
               ::Call;
    local_c8 = param_4;
    local_b8 = param_3;
    bVar3 = Private::AsyncProcessing
                      (param_1,param_2,(TFunctionRef<void___cdecl(void)> *)&local_c0,
                       (TFunctionRef<int___cdecl(int,int,int)> *)&local_d0,
                       (TFunctionRef<void___cdecl(int,int,int)> *)&local_e0,
                       (TFunctionRef<void___cdecl(int)> *)&local_f0,param_5,param_6,param_7);
    param_1->bIsRunningAsyncCall = false;
  }
  return bVar3;
}

// AsyncProcessingOneToOneRangeEx<`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_2>,`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_1>_&> @ 14cedeaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FPCGAsync::
AsyncProcessingOneToOneRangeEx<_PCGMeshSampler::SampleOnePointPerVertex_::__l2::<lambda_2>,_PCGMeshSampler::SampleOnePointPerVertex_::__l2::<lambda_1>_&>
          (FPCGAsyncState *param_1,int param_2,<lambda_2> *param_3,<lambda_1> *param_4,bool param_5,
          int param_6,bool param_7)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStackY_148 [32];
  undefined1 local_f8 [4];
  int local_f4;
  code *local_f0;
  <lambda_2> *local_e8;
  code *local_e0;
  <lambda_1> *local_d8;
  code *local_d0;
  <lambda_1> *local_c8;
  code *local_c0;
  <lambda_2> *local_b8;
  undefined1 local_a8 [56];
  ForAnyElementType local_70;
  undefined8 local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  undefined8 uStack_40;
  void *local_30;
  undefined4 local_28;
  undefined4 local_20;
  bool local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_f4 = param_2;
  if ((param_1 == (FPCGAsyncState *)0x0) || (param_1->bIsRunningAsyncCall != false)) {
    local_b8 = (<lambda_2> *)&local_f4;
    local_a8._0_8_ = 0.0;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_2>,`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_1>_&>'::__l2::<lambda_2>,void,int>
               ::Call;
    local_c8 = (<lambda_1> *)local_f8;
    local_a8._12_4_ = 0;
    local_a8._16_4_ = 0;
    local_d0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_2>,`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_1>_&>'::__l2::<lambda_1>,void,int,int,int>
               ::Call;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_1>,int,int,int,int>
               ::Call;
    local_f0 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_2>,void>
               ::Call;
    local_a8._24_8_ = (FScriptContainerElement *)0x0;
    local_a8._32_4_ = 0;
    local_a8._36_4_ = 0;
    local_a8[0x28] = false;
    local_a8._44_4_ = 0;
    local_a8._48_4_ = 0;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 0;
    local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_60._24_8_ = ___xmm_00000000ffffffff0000008000000000;
    uStack_40 = _UNK_150631d98;
    local_30 = (void *)0x0;
    local_28 = 0;
    local_20._0_1_ = true;
    local_20._1_1_ = true;
    local_20._2_1_ = false;
    local_20._3_1_ = false;
    local_1c = false;
    local_a8._8_4_ = 1;
    local_e8 = param_3;
    local_d8 = param_4;
    bVar3 = Private::AsyncProcessing
                      ((FPCGAsyncState *)local_a8,param_2,
                       (TFunctionRef<void___cdecl(void)> *)&local_f0,
                       (TFunctionRef<int___cdecl(int,int,int)> *)&local_e0,
                       (TFunctionRef<void___cdecl(int,int,int)> *)&local_d0,
                       (TFunctionRef<void___cdecl(int)> *)&local_c0,false,param_6,param_7);
    local_28 = 0;
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
    uVar1 = local_68 >> 0x20;
    local_68 = local_68 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_70,0,(int *)((longlong)&local_68 + 4));
    }
    iVar2 = local_60.MaxBits;
    local_60._24_8_ = (ulonglong)(uint)local_60.MaxBits << 0x20;
    uStack_40 = 0xffffffff;
    if (0x80 < (uint)iVar2) {
      local_60.NumBits = 0;
      local_60.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
    }
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
    }
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
    if ((FScriptContainerElement *)local_a8._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._24_8_);
    }
  }
  else {
    local_e8 = (<lambda_2> *)&local_f4;
    local_f0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_2>,`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_1>_&>'::__l2::<lambda_2>,void,int>
               ::Call;
    local_d8 = (<lambda_1> *)local_f8;
    param_1->bIsRunningAsyncCall = true;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_2>,`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_1>_&>'::__l2::<lambda_1>,void,int,int,int>
               ::Call;
    local_d0 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_1>,int,int,int,int>
               ::Call;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_2>,void>
               ::Call;
    local_c8 = param_4;
    local_b8 = param_3;
    bVar3 = Private::AsyncProcessing
                      (param_1,param_2,(TFunctionRef<void___cdecl(void)> *)&local_c0,
                       (TFunctionRef<int___cdecl(int,int,int)> *)&local_d0,
                       (TFunctionRef<void___cdecl(int,int,int)> *)&local_e0,
                       (TFunctionRef<void___cdecl(int)> *)&local_f0,param_5,param_6,param_7);
    param_1->bIsRunningAsyncCall = false;
  }
  return bVar3;
}

// Cast<UPCGBasePointData_const_> @ 14ceded20

UPCGBasePointData * __cdecl Cast<UPCGBasePointData_const_>(FPCGDataPtrWrapper *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 local_res8 [4];
  
  local_res8[0] = (FObjectPtr_u_0)(param_1->Data).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if ((UPCGBasePointData *)local_res8[0].Handle == (UPCGBasePointData *)0x0) {
      return (UPCGBasePointData *)0x0;
    }
    UE::GC::MarkAsReachable(local_res8[0].Handle);
  }
  if ((UPCGBasePointData *)local_res8[0].Handle != (UPCGBasePointData *)0x0) {
    pUVar2 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar2);
    if (bVar1) {
      return (UPCGBasePointData *)local_res8[0].Handle;
    }
  }
  return (UPCGBasePointData *)0x0;
}

// Cast<UPCGMergeDynamicMeshesSettings_const_> @ 14ceded80

UPCGMergeDynamicMeshesSettings * __cdecl
Cast<UPCGMergeDynamicMeshesSettings_const_>(FPCGDataPtrWrapper *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 local_res8 [4];
  
  local_res8[0] = (FObjectPtr_u_0)(param_1->Data).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if ((UPCGMergeDynamicMeshesSettings *)local_res8[0].Handle ==
        (UPCGMergeDynamicMeshesSettings *)0x0) {
      return (UPCGMergeDynamicMeshesSettings *)0x0;
    }
    UE::GC::MarkAsReachable(local_res8[0].Handle);
  }
  if ((UPCGMergeDynamicMeshesSettings *)local_res8[0].Handle !=
      (UPCGMergeDynamicMeshesSettings *)0x0) {
    pUVar2 = UPCGMergeDynamicMeshesSettings::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar2);
    if (bVar1) {
      return (UPCGMergeDynamicMeshesSettings *)local_res8[0].Handle;
    }
  }
  return (UPCGMergeDynamicMeshesSettings *)0x0;
}

// Cast<UPCGPrimitiveCrossSectionSettings_const_> @ 14cedede0

UPCGPrimitiveCrossSectionSettings * __cdecl
Cast<UPCGPrimitiveCrossSectionSettings_const_>(FPCGDataPtrWrapper *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 local_res8 [4];
  
  local_res8[0] = (FObjectPtr_u_0)(param_1->Data).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if ((UPCGPrimitiveCrossSectionSettings *)local_res8[0].Handle ==
        (UPCGPrimitiveCrossSectionSettings *)0x0) {
      return (UPCGPrimitiveCrossSectionSettings *)0x0;
    }
    UE::GC::MarkAsReachable(local_res8[0].Handle);
  }
  if ((UPCGPrimitiveCrossSectionSettings *)local_res8[0].Handle !=
      (UPCGPrimitiveCrossSectionSettings *)0x0) {
    pUVar2 = UPCGPrimitiveCrossSectionSettings::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar2);
    if (bVar1) {
      return (UPCGPrimitiveCrossSectionSettings *)local_res8[0].Handle;
    }
  }
  return (UPCGPrimitiveCrossSectionSettings *)0x0;
}

// CastChecked<UPCGDynamicMeshData,UPCGSpatialData> @ 14cedee40

UPCGDynamicMeshData * __cdecl
CastChecked<UPCGDynamicMeshData,UPCGSpatialData>(UPCGSpatialData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGSpatialData *)0x0) {
    pFVar3 = GetTypeName<UPCGDynamicMeshData>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGDynamicMeshData_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGDynamicMeshData *)param_1;
  }
  pFVar3 = GetTypeName<UPCGDynamicMeshData>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGSpatialData>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// DefaultConstructItems<FGeometryScriptColorList,int> @ 14cedef00

void __cdecl DefaultConstructItems<FGeometryScriptColorList,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<FGeometryScriptVectorList,int> @ 14cedef30

void __cdecl DefaultConstructItems<FGeometryScriptVectorList,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DestructItems<FCrossSection,int> @ 14cedef80

void __cdecl DestructItems<FCrossSection,int>(FCrossSection *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->PointLocations;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::FTriangulateCurvesOp::FCurvePath,int> @ 14cedefc0

void __cdecl
DestructItems<UE::Geometry::FTriangulateCurvesOp::FCurvePath,int>(FCurvePath *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Vertices).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FCurvePath *)(&param_1->Vertices + 1);
  }
  return;
}

// DestructItems<FGeometryScriptColorList,int> @ 14cedf000

void __cdecl
DestructItems<FGeometryScriptColorList,int>(FGeometryScriptColorList *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->List).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FGeometryScriptVectorList,int> @ 14cedf040

void __cdecl
DestructItems<FGeometryScriptVectorList,int>(FGeometryScriptVectorList *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->List).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>,int> @ 14cedf080

void __cdecl
DestructItems<TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>,int>
          (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGAppendMeshesFromPointsSettings>'::__l2::<lambda_1>_> @ 14cedf440

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAppendMeshesFromPointsSettings>_::__l2::<lambda_1>_>
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
LAB_14cedf483:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGAppendMeshesFromPointsSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_14cedf483;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGBooleanOperationSettings>'::__l2::<lambda_1>_> @ 14cedf4d0

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBooleanOperationSettings>_::__l2::<lambda_1>_>
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
LAB_14cedf513:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGBooleanOperationSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_14cedf513;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGCreateEmptyDynamicMeshSettings>'::__l2::<lambda_1>_> @ 14cedf560

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateEmptyDynamicMeshSettings>_::__l2::<lambda_1>_>
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
LAB_14cedf5a3:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGCreateEmptyDynamicMeshSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_14cedf5a3;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGDynamicMeshTransformSettings>'::__l2::<lambda_1>_> @ 14cedf5f0

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDynamicMeshTransformSettings>_::__l2::<lambda_1>_>
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
LAB_14cedf633:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGDynamicMeshTransformSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_14cedf633;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGGetDynamicMeshDataSettings>'::__l2::<lambda_1>_> @ 14cedf680

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetDynamicMeshDataSettings>_::__l2::<lambda_1>_>
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
LAB_14cedf6c3:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGGetDynamicMeshDataSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_14cedf6c3;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGMergeDynamicMeshesSettings>'::__l2::<lambda_1>_> @ 14cedf710

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMergeDynamicMeshesSettings>_::__l2::<lambda_1>_>
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
LAB_14cedf753:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGMergeDynamicMeshesSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_14cedf753;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGMeshSamplerSettings>'::__l2::<lambda_1>_> @ 14cedf7a0

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMeshSamplerSettings>_::__l2::<lambda_1>_>
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
LAB_14cedf7e3:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGMeshSamplerSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_14cedf7e3;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGPrimitiveCrossSectionSettings>'::__l2::<lambda_1>_> @ 14cedf830

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPrimitiveCrossSectionSettings>_::__l2::<lambda_1>_>
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
LAB_14cedf873:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGPrimitiveCrossSectionSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_14cedf873;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGSpawnDynamicMeshSettings>'::__l2::<lambda_1>_> @ 14cedf8c0

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpawnDynamicMeshSettings>_::__l2::<lambda_1>_>
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
LAB_14cedf903:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGSpawnDynamicMeshSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_14cedf903;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGSplineToMeshSettings>'::__l2::<lambda_1>_> @ 14cedf950

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplineToMeshSettings>_::__l2::<lambda_1>_>
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
LAB_14cedf993:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGSplineToMeshSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_14cedf993;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGStaticMeshToDynamicMeshSettings>'::__l2::<lambda_1>_> @ 14cedf9e0

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGStaticMeshToDynamicMeshSettings>_::__l2::<lambda_1>_>
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
LAB_14cedfa23:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGStaticMeshToDynamicMeshSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_14cedfa23;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGStaticMeshToDynamicMeshElement::ExecuteInternal'::__l30::<lambda_1>_> @ 14cedfa70

TSoftObjectPtr<UMaterialInterface> * __thiscall
TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGStaticMeshToDynamicMeshElement::ExecuteInternal_::__l30::<lambda_1>_>
          (TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  int iVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->AllocatorInstance).Data;
  pTVar1 = this_00 + this->ArrayNum;
  while( true ) {
    if (this_00 == pTVar1) {
      return (TSoftObjectPtr<UMaterialInterface> *)0x0;
    }
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (pUVar3 == (UObject *)0x0) {
      return (TSoftObjectPtr<UMaterialInterface> *)this_00;
    }
    pUVar4 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if (*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar2) {
      return (TSoftObjectPtr<UMaterialInterface> *)this_00;
    }
    if ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar4->_padding_) break;
    this_00 = this_00 + 1;
  }
  return (TSoftObjectPtr<UMaterialInterface> *)this_00;
}

// GetInputSettings<UPCGAppendMeshesFromPointsSettings> @ 14cedfdf0

UPCGAppendMeshesFromPointsSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGAppendMeshesFromPointsSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGAppendMeshesFromPointsSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAppendMeshesFromPointsSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGAppendMeshesFromPointsSettings *)local_res8.Handle ==
            (UPCGAppendMeshesFromPointsSettings *)0x0) {
          return (UPCGAppendMeshesFromPointsSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGAppendMeshesFromPointsSettings *)local_res8.Handle !=
          (UPCGAppendMeshesFromPointsSettings *)0x0) {
        pUVar5 = UPCGAppendMeshesFromPointsSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGAppendMeshesFromPointsSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGAppendMeshesFromPointsSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGAppendMeshesFromPointsSettings *)0x0) {
      pUVar5 = UPCGAppendMeshesFromPointsSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGAppendMeshesFromPointsSettings *)0x0;
}

// GetInputSettings<UPCGBooleanOperationSettings> @ 14cedfed0

UPCGBooleanOperationSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGBooleanOperationSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGBooleanOperationSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBooleanOperationSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGBooleanOperationSettings *)local_res8.Handle == (UPCGBooleanOperationSettings *)0x0
           ) {
          return (UPCGBooleanOperationSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGBooleanOperationSettings *)local_res8.Handle != (UPCGBooleanOperationSettings *)0x0)
      {
        pUVar5 = UPCGBooleanOperationSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGBooleanOperationSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGBooleanOperationSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGBooleanOperationSettings *)0x0) {
      pUVar5 = UPCGBooleanOperationSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGBooleanOperationSettings *)0x0;
}

// GetInputSettings<UPCGCreateEmptyDynamicMeshSettings> @ 14cedffb0

UPCGCreateEmptyDynamicMeshSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGCreateEmptyDynamicMeshSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UClass *pUVar4;
  FObjectPtr_u_0 *pFVar5;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar5 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateEmptyDynamicMeshSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar5 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar5->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGCreateEmptyDynamicMeshSettings *)local_res8.Handle ==
            (UPCGCreateEmptyDynamicMeshSettings *)0x0) {
          return (UPCGCreateEmptyDynamicMeshSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGCreateEmptyDynamicMeshSettings *)local_res8.Handle !=
          (UPCGCreateEmptyDynamicMeshSettings *)0x0) {
        pUVar4 = UPCGCreateEmptyDynamicMeshSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar4);
        if (bVar2) {
          return (UPCGCreateEmptyDynamicMeshSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar3 = FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar3 != (UPCGSettings *)0x0) {
      pUVar4 = UPCGCreateEmptyDynamicMeshSettings::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        return (UPCGCreateEmptyDynamicMeshSettings *)pUVar3;
      }
    }
  }
  return (UPCGCreateEmptyDynamicMeshSettings *)0x0;
}

// GetInputSettings<UPCGDynamicMeshTransformSettings> @ 14cee0090

UPCGDynamicMeshTransformSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGDynamicMeshTransformSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGDynamicMeshTransformSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDynamicMeshTransformSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGDynamicMeshTransformSettings *)local_res8.Handle ==
            (UPCGDynamicMeshTransformSettings *)0x0) {
          return (UPCGDynamicMeshTransformSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGDynamicMeshTransformSettings *)local_res8.Handle !=
          (UPCGDynamicMeshTransformSettings *)0x0) {
        pUVar5 = UPCGDynamicMeshTransformSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGDynamicMeshTransformSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGDynamicMeshTransformSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGDynamicMeshTransformSettings *)0x0) {
      pUVar5 = UPCGDynamicMeshTransformSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGDynamicMeshTransformSettings *)0x0;
}

// GetInputSettings<UPCGGetDynamicMeshDataSettings> @ 14cee0170

UPCGGetDynamicMeshDataSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGGetDynamicMeshDataSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGGetDynamicMeshDataSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetDynamicMeshDataSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGGetDynamicMeshDataSettings *)local_res8.Handle ==
            (UPCGGetDynamicMeshDataSettings *)0x0) {
          return (UPCGGetDynamicMeshDataSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGGetDynamicMeshDataSettings *)local_res8.Handle !=
          (UPCGGetDynamicMeshDataSettings *)0x0) {
        pUVar5 = UPCGGetDynamicMeshDataSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGGetDynamicMeshDataSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGGetDynamicMeshDataSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGGetDynamicMeshDataSettings *)0x0) {
      pUVar5 = UPCGGetDynamicMeshDataSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGGetDynamicMeshDataSettings *)0x0;
}

// GetInputSettings<UPCGMergeDynamicMeshesSettings> @ 14cee0250

UPCGMergeDynamicMeshesSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGMergeDynamicMeshesSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UClass *pUVar4;
  FObjectPtr_u_0 *pFVar5;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar5 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMergeDynamicMeshesSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar5 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar5->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGMergeDynamicMeshesSettings *)local_res8.Handle ==
            (UPCGMergeDynamicMeshesSettings *)0x0) {
          return (UPCGMergeDynamicMeshesSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGMergeDynamicMeshesSettings *)local_res8.Handle !=
          (UPCGMergeDynamicMeshesSettings *)0x0) {
        pUVar4 = UPCGMergeDynamicMeshesSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar4);
        if (bVar2) {
          return (UPCGMergeDynamicMeshesSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar3 = FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar3 != (UPCGSettings *)0x0) {
      pUVar4 = UPCGMergeDynamicMeshesSettings::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        return (UPCGMergeDynamicMeshesSettings *)pUVar3;
      }
    }
  }
  return (UPCGMergeDynamicMeshesSettings *)0x0;
}

// GetInputSettings<UPCGMeshSamplerSettings> @ 14cee0450

UPCGMeshSamplerSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGMeshSamplerSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGMeshSamplerSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMeshSamplerSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGMeshSamplerSettings *)local_res8.Handle == (UPCGMeshSamplerSettings *)0x0) {
          return (UPCGMeshSamplerSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGMeshSamplerSettings *)local_res8.Handle != (UPCGMeshSamplerSettings *)0x0) {
        pUVar5 = UPCGMeshSamplerSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGMeshSamplerSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGMeshSamplerSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGMeshSamplerSettings *)0x0) {
      pUVar5 = UPCGMeshSamplerSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGMeshSamplerSettings *)0x0;
}

// GetInputSettings<UPCGPrimitiveCrossSectionSettings> @ 14cee0530

UPCGPrimitiveCrossSectionSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGPrimitiveCrossSectionSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGPrimitiveCrossSectionSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPrimitiveCrossSectionSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGPrimitiveCrossSectionSettings *)local_res8.Handle ==
            (UPCGPrimitiveCrossSectionSettings *)0x0) {
          return (UPCGPrimitiveCrossSectionSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGPrimitiveCrossSectionSettings *)local_res8.Handle !=
          (UPCGPrimitiveCrossSectionSettings *)0x0) {
        pUVar5 = UPCGPrimitiveCrossSectionSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGPrimitiveCrossSectionSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGPrimitiveCrossSectionSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGPrimitiveCrossSectionSettings *)0x0) {
      pUVar5 = UPCGPrimitiveCrossSectionSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGPrimitiveCrossSectionSettings *)0x0;
}

// GetInputSettings<UPCGSpawnDynamicMeshSettings> @ 14cee0610

UPCGSpawnDynamicMeshSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGSpawnDynamicMeshSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGSpawnDynamicMeshSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpawnDynamicMeshSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSpawnDynamicMeshSettings *)local_res8.Handle == (UPCGSpawnDynamicMeshSettings *)0x0
           ) {
          return (UPCGSpawnDynamicMeshSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGSpawnDynamicMeshSettings *)local_res8.Handle != (UPCGSpawnDynamicMeshSettings *)0x0)
      {
        pUVar5 = UPCGSpawnDynamicMeshSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGSpawnDynamicMeshSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGSpawnDynamicMeshSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGSpawnDynamicMeshSettings *)0x0) {
      pUVar5 = UPCGSpawnDynamicMeshSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGSpawnDynamicMeshSettings *)0x0;
}

// GetInputSettings<UPCGSplineToMeshSettings> @ 14cee06f0

UPCGSplineToMeshSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGSplineToMeshSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGSplineToMeshSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplineToMeshSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSplineToMeshSettings *)local_res8.Handle == (UPCGSplineToMeshSettings *)0x0) {
          return (UPCGSplineToMeshSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGSplineToMeshSettings *)local_res8.Handle != (UPCGSplineToMeshSettings *)0x0) {
        pUVar5 = UPCGSplineToMeshSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGSplineToMeshSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGSplineToMeshSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGSplineToMeshSettings *)0x0) {
      pUVar5 = UPCGSplineToMeshSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGSplineToMeshSettings *)0x0;
}

// GetInputSettings<UPCGStaticMeshToDynamicMeshSettings> @ 14cee08f0

UPCGStaticMeshToDynamicMeshSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGStaticMeshToDynamicMeshSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGStaticMeshToDynamicMeshSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGStaticMeshToDynamicMeshSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGStaticMeshToDynamicMeshSettings *)local_res8.Handle ==
            (UPCGStaticMeshToDynamicMeshSettings *)0x0) {
          return (UPCGStaticMeshToDynamicMeshSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGStaticMeshToDynamicMeshSettings *)local_res8.Handle !=
          (UPCGStaticMeshToDynamicMeshSettings *)0x0) {
        pUVar5 = UPCGStaticMeshToDynamicMeshSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGStaticMeshToDynamicMeshSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGStaticMeshToDynamicMeshSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGStaticMeshToDynamicMeshSettings *)0x0) {
      pUVar5 = UPCGStaticMeshToDynamicMeshSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGStaticMeshToDynamicMeshSettings *)0x0;
}

// GetTypeName<UPCGDynamicMeshData> @ 14cee0ea0

FString * __cdecl GetTypeName<UPCGDynamicMeshData>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGDynamicMeshData_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FPCGPrimitiveCrossSectionElement::ExecuteInternal'::__l80::<lambda_4>_>_> @ 14cee0ee0

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FPCGPrimitiveCrossSectionElement::ExecuteInternal_::__l80::<lambda_4>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_protected:_virtual_bool___cdecl_FPCGPrimitiveCrossSectionElement::ExecuteInternal(FPCGContext_*)const_::_80_::<lambda_4>_>
          param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar2 = iVar6;
  iVar7 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_14cee0fbe:
      if (iVar7 == 0) {
        iVar6 = param_2 + -1;
        lVar9 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar2 = *param_1;
            iVar5 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar2;
            if (1 < iVar6) {
              do {
                iVar2 = iVar5 * 2;
                iVar7 = iVar2 + 1;
                if (iVar2 + 2 < iVar6) {
                  if (param_1[iVar7] < param_1[(longlong)iVar2 + 2]) {
                    iVar7 = iVar2;
                  }
                  iVar7 = iVar7 + 1;
                }
                iVar2 = param_1[iVar5];
                if (iVar2 <= param_1[iVar7]) break;
                param_1[iVar5] = param_1[iVar7];
                param_1[iVar7] = iVar2;
                iVar5 = iVar7;
              } while (iVar7 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar5 = iVar7 + -1;
      iVar6 = iVar2 + -2;
      iVar2 = iVar6;
      iVar7 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar8 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (param_1[iVar8] < param_1[(longlong)iVar6 + 2]) {
        iVar8 = iVar6;
      }
      iVar8 = iVar8 + 1;
    }
    iVar1 = param_1[iVar5];
    if (iVar1 <= param_1[iVar8]) goto LAB_14cee0fbe;
    param_1[iVar5] = param_1[iVar8];
    iVar6 = iVar8 * 2 + 1;
    param_1[iVar8] = iVar1;
    iVar5 = iVar8;
  } while( true );
}

// HeapSortInternal<FCrossSection,int,FIdentityFunctor,TDereferenceWrapper<FCrossSection,`FPCGPrimitiveCrossSectionElement::ExecuteInternal'::__l80::<lambda_2>_>_> @ 14cee1070

void __cdecl
AlgoImpl::
HeapSortInternal<FCrossSection,int,FIdentityFunctor,TDereferenceWrapper<FCrossSection,_FPCGPrimitiveCrossSectionElement::ExecuteInternal_::__l80::<lambda_2>_>_>
          (FCrossSection *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FCrossSection,_protected:_virtual_bool___cdecl_FPCGPrimitiveCrossSectionElement::ExecuteInternal(FPCGContext_*)const_::_80_::<lambda_2>_>
          param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  FCrossSection *pFVar16;
  FCrossSection *pFVar17;
  int iVar18;
  int iVar19;
  FCrossSection *pFVar20;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar13 = iVar12;
  iVar19 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_14cee1176:
      if (iVar19 == 0) {
        iVar12 = param_2 + -1;
        lVar15 = (longlong)iVar12;
        if (0 < iVar12) {
          pFVar20 = param_1 + lVar15;
          do {
            uVar5 = *(undefined4 *)&pFVar20->field_0x4;
            dVar2 = pFVar20->Height;
            iVar18 = 0;
            iVar19 = param_1->Tier;
            uVar7 = *(undefined4 *)&param_1->field_0x4;
            dVar3 = param_1->Height;
            pFVar4 = (param_1->PointLocations).AllocatorInstance.Data;
            iVar14 = (param_1->PointLocations).ArrayNum;
            iVar6 = (param_1->PointLocations).ArrayMax;
            param_1->Tier = pFVar20->Tier;
            *(undefined4 *)&param_1->field_0x4 = uVar5;
            param_1->Height = dVar2;
            iVar13 = (pFVar20->PointLocations).ArrayNum;
            iVar11 = (pFVar20->PointLocations).ArrayMax;
            (param_1->PointLocations).AllocatorInstance.Data =
                 (pFVar20->PointLocations).AllocatorInstance.Data;
            (param_1->PointLocations).ArrayNum = iVar13;
            (param_1->PointLocations).ArrayMax = iVar11;
            pFVar20->Tier = iVar19;
            *(undefined4 *)&pFVar20->field_0x4 = uVar7;
            pFVar20->Height = dVar3;
            (pFVar20->PointLocations).AllocatorInstance.Data = pFVar4;
            (pFVar20->PointLocations).ArrayNum = iVar14;
            (pFVar20->PointLocations).ArrayMax = iVar6;
            if (1 < iVar12) {
              do {
                iVar11 = iVar18 * 2;
                iVar13 = iVar11 + 1;
                if (iVar11 + 2 < iVar12) {
                  if (param_1[(longlong)iVar11 + 2].Tier < param_1[iVar13].Tier) {
                    iVar13 = iVar11;
                  }
                  iVar13 = iVar13 + 1;
                }
                pFVar16 = param_1 + iVar13;
                pFVar17 = param_1 + iVar18;
                if (pFVar16->Tier <= pFVar17->Tier) break;
                uVar5 = *(undefined4 *)&pFVar16->field_0x4;
                dVar2 = pFVar16->Height;
                iVar14 = pFVar17->Tier;
                uVar7 = *(undefined4 *)&pFVar17->field_0x4;
                dVar3 = pFVar17->Height;
                pFVar4 = (pFVar17->PointLocations).AllocatorInstance.Data;
                iVar6 = (pFVar17->PointLocations).ArrayNum;
                iVar18 = (pFVar17->PointLocations).ArrayMax;
                pFVar17->Tier = pFVar16->Tier;
                *(undefined4 *)&pFVar17->field_0x4 = uVar5;
                pFVar17->Height = dVar2;
                iVar11 = (pFVar16->PointLocations).ArrayNum;
                iVar19 = (pFVar16->PointLocations).ArrayMax;
                (pFVar17->PointLocations).AllocatorInstance.Data =
                     (pFVar16->PointLocations).AllocatorInstance.Data;
                (pFVar17->PointLocations).ArrayNum = iVar11;
                (pFVar17->PointLocations).ArrayMax = iVar19;
                pFVar16->Tier = iVar14;
                *(undefined4 *)&pFVar16->field_0x4 = uVar7;
                pFVar16->Height = dVar3;
                (pFVar16->PointLocations).AllocatorInstance.Data = pFVar4;
                (pFVar16->PointLocations).ArrayNum = iVar6;
                (pFVar16->PointLocations).ArrayMax = iVar18;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar15 = lVar15 + -1;
            pFVar20 = pFVar20 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar11 = iVar19 + -1;
      iVar12 = iVar13 + -2;
      iVar13 = iVar12;
      iVar19 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar14 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (param_1[(longlong)iVar12 + 2].Tier < param_1[iVar14].Tier) {
        iVar14 = iVar12;
      }
      iVar14 = iVar14 + 1;
    }
    pFVar20 = param_1 + iVar14;
    pFVar16 = param_1 + iVar11;
    if (pFVar20->Tier <= pFVar16->Tier) goto LAB_14cee1176;
    uVar5 = *(undefined4 *)&pFVar20->field_0x4;
    dVar2 = pFVar20->Height;
    iVar12 = iVar14 * 2 + 1;
    iVar18 = pFVar16->Tier;
    uVar7 = *(undefined4 *)&pFVar16->field_0x4;
    dVar3 = pFVar16->Height;
    pFVar4 = (pFVar16->PointLocations).AllocatorInstance.Data;
    iVar8 = (pFVar16->PointLocations).ArrayNum;
    iVar9 = (pFVar16->PointLocations).ArrayMax;
    pFVar16->Tier = pFVar20->Tier;
    *(undefined4 *)&pFVar16->field_0x4 = uVar5;
    pFVar16->Height = dVar2;
    iVar11 = (pFVar20->PointLocations).ArrayNum;
    iVar6 = (pFVar20->PointLocations).ArrayMax;
    (pFVar16->PointLocations).AllocatorInstance.Data =
         (pFVar20->PointLocations).AllocatorInstance.Data;
    (pFVar16->PointLocations).ArrayNum = iVar11;
    (pFVar16->PointLocations).ArrayMax = iVar6;
    pFVar20->Tier = iVar18;
    *(undefined4 *)&pFVar20->field_0x4 = uVar7;
    pFVar20->Height = dVar3;
    (pFVar20->PointLocations).AllocatorInstance.Data = pFVar4;
    (pFVar20->PointLocations).ArrayNum = iVar8;
    (pFVar20->PointLocations).ArrayMax = iVar9;
    iVar11 = iVar14;
  } while( true );
}

// InternalConstructor<UPCGAppendMeshesFromPointsSettings> @ 14cee1270

void __cdecl InternalConstructor<UPCGAppendMeshesFromPointsSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGAppendMeshesFromPointsSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    *(undefined4 *)((longlong)&this[1].CachedElement.SharedReferenceCount.ReferenceController + 4) =
         0;
    *(undefined1 *)this[1].CacheLock.CriticalSection.Opaque1 = 0;
    *(undefined2 *)&this[1].CachedElement.SharedReferenceCount.ReferenceController = 0x301;
  }
  return;
}

// InternalConstructor<UPCGBooleanOperationSettings> @ 14cee1300

void __cdecl InternalConstructor<UPCGBooleanOperationSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGBooleanOperationSettings__6B_;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x101;
    *(undefined4 *)&this[1]._padding_ = 0x3c23d70a;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 1) = 0;
  }
  return;
}

// InternalConstructor<UPCGCreateEmptyDynamicMeshSettings> @ 14cee1360

void __cdecl InternalConstructor<UPCGCreateEmptyDynamicMeshSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCreateEmptyDynamicMeshSettings__6B_;
  }
  return;
}

// InternalConstructor<UPCGDynamicMeshBaseSettings> @ 14cee1390

void __cdecl InternalConstructor<UPCGDynamicMeshBaseSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGDynamicMeshBaseSettings__6B_;
  }
  return;
}

// InternalConstructor<UPCGDynamicMeshManagedComponent> @ 14cee13c0

void __cdecl InternalConstructor<UPCGDynamicMeshManagedComponent>(FObjectInitializer *param_1)

{
  UPCGManagedComponent *this;
  
  this = (UPCGManagedComponent *)param_1->Obj;
  if (this != (UPCGManagedComponent *)0x0) {
    UPCGManagedComponent::UPCGManagedComponent(this,param_1);
    this[1]._padding_ = -1;
    this->_padding_ = (longlong)&___7UPCGDynamicMeshManagedComponent__6B_;
  }
  return;
}

// InternalConstructor<UPCGDynamicMeshTransformSettings> @ 14cee1400

void __cdecl InternalConstructor<UPCGDynamicMeshTransformSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGDynamicMeshTransformSettings__6B_;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[1].Seed = (double)fVar1;
    this[1].OriginalSettings = (UPCGSettings *)(double)fVar2;
    *(double *)&this[1].bUseSeed = (double)fVar3;
  }
  return;
}

// InternalConstructor<UPCGGeometryBlueprintElement> @ 14cee1490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __cdecl InternalConstructor<UPCGGeometryBlueprintElement>(FObjectInitializer *param_1)

{
  int *piVar1;
  UPCGBlueprintBaseElement *this;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FObjectInitializer *pFVar4;
  FText *pFVar5;
  FPCGDataTypeIdentifier *pFVar6;
  FPCGPinProperties *pFVar7;
  FPCGDataTypeIdentifier local_28;
  
  this = (UPCGBlueprintBaseElement *)param_1->Obj;
  if (this != (UPCGBlueprintBaseElement *)0x0) {
    pFVar4 = FObjectInitializer::Get();
    UPCGBlueprintBaseElement::UPCGBlueprintBaseElement(this,pFVar4);
    this->bIsCacheable = false;
    this->_padding_ = (longlong)&___7UPCGGeometryBlueprintElement__6B_;
    piVar1 = &(this->CustomInputPins).ArrayMax;
    this->bHasDefaultInPin = false;
    this->bHasDefaultOutPin = false;
    iVar3 = (this->CustomInputPins).ArrayNum;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(this->CustomInputPins).AllocatorInstance,piVar1);
    }
    (this->CustomInputPins).ArrayNum = iVar3 + 1;
    pFVar2 = (this->CustomInputPins).AllocatorInstance.Data;
    pFVar5 = FText::GetEmpty();
    pFVar6 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,DynamicMesh);
    pFVar7 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar2 + (longlong)iVar3 * 0x30),
                        &PCGPinConstants::DefaultInputLabel,pFVar6,true,true,pFVar5);
    piVar1 = &(this->CustomOutputPins).ArrayMax;
    pFVar7->PinStatus = Required;
    iVar3 = (this->CustomOutputPins).ArrayNum;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(this->CustomOutputPins).AllocatorInstance,piVar1);
    }
    (this->CustomOutputPins).ArrayNum = iVar3 + 1;
    pFVar2 = (this->CustomOutputPins).AllocatorInstance.Data;
    pFVar5 = FText::GetEmpty();
    pFVar6 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,DynamicMesh);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar2 + (longlong)iVar3 * 0x30),
               &PCGPinConstants::DefaultOutputLabel,pFVar6,true,true,pFVar5);
  }
  return;
}

// InternalConstructor<UPCGGetDynamicMeshDataSettings> @ 14cee15c0

void __cdecl InternalConstructor<UPCGGetDynamicMeshDataSettings>(FObjectInitializer *param_1)

{
  UPCGDataFromActorSettings *this;
  
  this = (UPCGDataFromActorSettings *)param_1->Obj;
  if (this != (UPCGDataFromActorSettings *)0x0) {
    UPCGDataFromActorSettings::UPCGDataFromActorSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGGetDynamicMeshDataSettings__6B_;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UPCGMergeDynamicMeshesSettings> @ 14cee1610

void __cdecl InternalConstructor<UPCGMergeDynamicMeshesSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGMergeDynamicMeshesSettings__6B_;
  }
  return;
}

// InternalConstructor<UPCGMeshSamplerSettings> @ 14cee1640

void __cdecl InternalConstructor<UPCGMeshSamplerSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  bool bVar1;
  FObjectInitializer *pFVar2;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UPCGSettings::UPCGSettings(this,pFVar2);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGMeshSamplerSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    *(undefined2 *)&this[1].CachedElement.SharedReferenceCount.ReferenceController = 0;
    this[1].CacheLock.CriticalSection.Opaque3[2] = (void *)0x4024000000000000;
    *(undefined4 *)((longlong)&this[1].CachedElement.SharedReferenceCount.ReferenceController + 4) =
         0;
    this[1].OverriddenSettingsPropertyBag.field0_0x0 =
         (TObjectPtr<UPropertyBag_const_>_u_0)0x4000000000000000;
    *(undefined1 *)this[1].CacheLock.CriticalSection.Opaque1 = 0;
    *(undefined4 *)((longlong)this[1].CacheLock.CriticalSection.Opaque1 + 4) = 0x42c80000;
    *(undefined2 *)this[1].CacheLock.CriticalSection.Opaque2 = 0x301;
    this[1].CacheLock.CriticalSection.Opaque2[1] = 0;
    this[1].CacheLock.CriticalSection.Opaque3[0] = (void *)0x41200000;
    *(undefined4 *)(this[1].CacheLock.CriticalSection.Opaque3 + 1) = 0;
    *(undefined4 *)&this[1].CachedOverridableParams.AllocatorInstance.Data = 0xffffffff;
    this[1].CachedOverridableParams.ArrayNum = 0;
    *(undefined1 *)&this[1].CachedOverridableParams.ArrayMax = 0;
    this[1].bHasAnyOverridableHardReferences = true;
    this[1].bExecuteOnGPU = false;
    *(undefined1 *)&this[1].DebugBufferSize = 0;
    FName::FName((FName *)&this[1].field_0xc4,L"UV");
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    FName::FName((FName *)((longlong)&this[2]._padding_ + 4),L"TriangleId");
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    FName::FName((FName *)&this[2]._padding_,L"MaterialId");
    FName::FName((FName *)&this[2]._padding_,L"Material");
    *(undefined4 *)&this[2]._padding_ = 0x3f000000;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
    if (bVar1) {
      *(undefined4 *)&this[2]._padding_ = 0x3f800000;
    }
  }
  return;
}

// InternalConstructor<UPCGPrimitiveCrossSectionSettings> @ 14cee17e0

void __cdecl InternalConstructor<UPCGPrimitiveCrossSectionSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  undefined8 uVar1;
  FObjectInitializer *pFVar2;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UPCGSettings::UPCGSettings(this,pFVar2);
    this->_padding_ = (longlong)&___7UPCGPrimitiveCrossSectionSettings__6B_;
    uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
              ((FPCGAttributePropertyOutputSelector *)&this[1]._padding_);
    *(undefined4 *)&this[1].OriginalSettings = 3;
    this[1].CachedElement.Object = (IPCGElement *)0x3ff0000000000000;
    this[1].CacheLock.CriticalSection.Opaque3[0] = &DAT_3ff0000000000000;
    this[1].CacheLock.CriticalSection.Opaque1[0] = (void *)0x4059000000000000;
    *(undefined4 *)((longlong)&this[1].OriginalSettings + 4) = 0x800;
    this[1].bUseSeed = false;
    *(undefined1 *)&this[1].CachedElement.SharedReferenceCount.ReferenceController = 0;
    *(undefined1 *)this[1].CacheLock.CriticalSection.Opaque2 = 1;
    *(undefined1 *)(this[1].CacheLock.CriticalSection.Opaque3 + 1) = 1;
    FPCGAttributePropertySelector::SetAttributeName
              ((FPCGAttributePropertySelector *)&this[1]._padding_,
               PCGPrimitiveCrossSection::Constants::DefaultExtrusionVectorAttributeName,true);
  }
  return;
}

// InternalConstructor<UPCGSaveDynamicMeshToAssetSettings> @ 14cee18c0

void __cdecl InternalConstructor<UPCGSaveDynamicMeshToAssetSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGSaveDynamicMeshToAssetSettings__6B_;
    *(undefined1 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    FGeometryScriptCopyMeshToAssetOptions::FGeometryScriptCopyMeshToAssetOptions
              ((FGeometryScriptCopyMeshToAssetOptions *)&this[1]._padding_);
    *(undefined1 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UPCGSpawnDynamicMeshSettings> @ 14cee1950

void __cdecl InternalConstructor<UPCGSpawnDynamicMeshSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGSpawnDynamicMeshSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGSplineToMeshSettings> @ 14cee19d0

void __cdecl InternalConstructor<UPCGSplineToMeshSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGSplineToMeshSettings__6B_;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined2 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0x3ff0000000000000;
  }
  return;
}

// InternalConstructor<UPCGStaticMeshToDynamicMeshSettings> @ 14cee1a50

void __cdecl InternalConstructor<UPCGStaticMeshToDynamicMeshSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGStaticMeshToDynamicMeshSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalVTableHelperCtorCaller<UPCGAppendMeshesFromPointsSettings> @ 14cee1ae0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGAppendMeshesFromPointsSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGAppendMeshesFromPointsSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGAppendMeshesFromPointsSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    *(undefined2 *)&this[1].CachedElement.SharedReferenceCount.ReferenceController = 0x301;
    *(undefined4 *)((longlong)&this[1].CachedElement.SharedReferenceCount.ReferenceController + 4) =
         0;
    *(undefined1 *)this[1].CacheLock.CriticalSection.Opaque1 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGBooleanOperationSettings> @ 14cee1be0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGBooleanOperationSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGBooleanOperationSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGBooleanOperationSettings__6B_;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x101;
    *(undefined4 *)&this[1]._padding_ = 0x3c23d70a;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 1) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCreateEmptyDynamicMeshSettings> @ 14cee1cc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGCreateEmptyDynamicMeshSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGCreateEmptyDynamicMeshSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCreateEmptyDynamicMeshSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDynamicMeshBaseSettings> @ 14cee1d70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGDynamicMeshBaseSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDynamicMeshBaseSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGDynamicMeshBaseSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDynamicMeshManagedComponent> @ 14cee1e20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGDynamicMeshManagedComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGManagedComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDynamicMeshManagedComponent::GetPrivateStaticClass();
  this = (UPCGManagedComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGManagedComponent *)0x0) {
    UPCGManagedComponent::UPCGManagedComponent(this,param_1);
    this[1]._padding_ = -1;
    this->_padding_ = (longlong)&___7UPCGDynamicMeshManagedComponent__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDynamicMeshTransformSettings> @ 14cee1ee0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGDynamicMeshTransformSettings>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UPCGSettings *this;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UPCGDynamicMeshTransformSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGDynamicMeshTransformSettings__6B_;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[1].Seed = (double)fVar1;
    this[1].OriginalSettings = (UPCGSettings *)(double)fVar2;
    *(double *)&this[1].bUseSeed = (double)fVar3;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGeometryBlueprintElement> @ 14cee1ff0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGGeometryBlueprintElement>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGBlueprintBaseElement *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGeometryBlueprintElement::GetPrivateStaticClass();
  this = (UPCGBlueprintBaseElement *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGBlueprintBaseElement *)0x0) {
    UPCGBlueprintBaseElement::UPCGBlueprintBaseElement(this,param_1);
    this->_padding_ = (longlong)&___7UPCGGeometryBlueprintElement__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGetDynamicMeshDataSettings> @ 14cee20a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGGetDynamicMeshDataSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGDataFromActorSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGetDynamicMeshDataSettings::GetPrivateStaticClass();
  this = (UPCGDataFromActorSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGDataFromActorSettings *)0x0) {
    UPCGDataFromActorSettings::UPCGDataFromActorSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGGetDynamicMeshDataSettings__6B_;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGMergeDynamicMeshesSettings> @ 14cee2170

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGMergeDynamicMeshesSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGMergeDynamicMeshesSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGMergeDynamicMeshesSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGMeshSamplerSettings> @ 14cee2220

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGMeshSamplerSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGMeshSamplerSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGMeshSamplerSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    *(undefined2 *)&this[1].CachedElement.SharedReferenceCount.ReferenceController = 0;
    this[1].CacheLock.CriticalSection.Opaque3[2] = (void *)0x4024000000000000;
    *(undefined4 *)((longlong)&this[1].CachedElement.SharedReferenceCount.ReferenceController + 4) =
         0;
    this[1].OverriddenSettingsPropertyBag.field0_0x0 =
         (TObjectPtr<UPropertyBag_const_>_u_0)0x4000000000000000;
    *(undefined1 *)this[1].CacheLock.CriticalSection.Opaque1 = 0;
    *(undefined4 *)((longlong)this[1].CacheLock.CriticalSection.Opaque1 + 4) = 0x42c80000;
    *(undefined2 *)this[1].CacheLock.CriticalSection.Opaque2 = 0x301;
    this[1].CacheLock.CriticalSection.Opaque2[1] = 0;
    this[1].CacheLock.CriticalSection.Opaque3[0] = (void *)0x41200000;
    *(undefined4 *)(this[1].CacheLock.CriticalSection.Opaque3 + 1) = 0;
    *(undefined4 *)&this[1].CachedOverridableParams.AllocatorInstance.Data = 0xffffffff;
    this[1].CachedOverridableParams.ArrayNum = 0;
    *(undefined1 *)&this[1].CachedOverridableParams.ArrayMax = 0;
    this[1].bHasAnyOverridableHardReferences = true;
    this[1].bExecuteOnGPU = false;
    *(undefined1 *)&this[1].DebugBufferSize = 0;
    FName::FName((FName *)&this[1].field_0xc4,L"UV");
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    FName::FName((FName *)((longlong)&this[2]._padding_ + 4),L"TriangleId");
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    FName::FName((FName *)&this[2]._padding_,L"MaterialId");
    FName::FName((FName *)&this[2]._padding_,L"Material");
    *(undefined4 *)&this[2]._padding_ = 0x3f000000;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGPrimitiveCrossSectionSettings> @ 14cee2410

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGPrimitiveCrossSectionSettings>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UPCGSettings *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UPCGPrimitiveCrossSectionSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGPrimitiveCrossSectionSettings__6B_;
    uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
              ((FPCGAttributePropertyOutputSelector *)&this[1]._padding_);
    *(undefined4 *)&this[1].OriginalSettings = 3;
    this[1].CacheLock.CriticalSection.Opaque1[0] = (void *)0x4059000000000000;
    *(undefined4 *)((longlong)&this[1].OriginalSettings + 4) = 0x800;
    this[1].bUseSeed = false;
    this[1].CachedElement.Object = (IPCGElement *)0x3ff0000000000000;
    *(undefined1 *)&this[1].CachedElement.SharedReferenceCount.ReferenceController = 0;
    *(undefined1 *)this[1].CacheLock.CriticalSection.Opaque2 = 1;
    this[1].CacheLock.CriticalSection.Opaque3[0] = &DAT_3ff0000000000000;
    *(undefined1 *)(this[1].CacheLock.CriticalSection.Opaque3 + 1) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSaveDynamicMeshToAssetSettings> @ 14cee2550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGSaveDynamicMeshToAssetSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSaveDynamicMeshToAssetSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGSaveDynamicMeshToAssetSettings__6B_;
    *(undefined1 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    FGeometryScriptCopyMeshToAssetOptions::FGeometryScriptCopyMeshToAssetOptions
              ((FGeometryScriptCopyMeshToAssetOptions *)&this[1]._padding_);
    *(undefined1 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSpawnDynamicMeshSettings> @ 14cee2650

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGSpawnDynamicMeshSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSpawnDynamicMeshSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGSpawnDynamicMeshSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSplineToMeshSettings> @ 14cee2740

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSplineToMeshSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSplineToMeshSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGSplineToMeshSettings__6B_;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGStaticMeshToDynamicMeshSettings> @ 14cee2830

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGStaticMeshToDynamicMeshSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGStaticMeshToDynamicMeshSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGStaticMeshToDynamicMeshSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    *(undefined1 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FPCGPrimitiveCrossSectionElement::ExecuteInternal'::__l80::<lambda_4>_>_> @ 14cee2930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FPCGPrimitiveCrossSectionElement::ExecuteInternal_::__l80::<lambda_4>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_protected:_virtual_bool___cdecl_FPCGPrimitiveCrossSectionElement::ExecuteInternal(FPCGContext_*)const_::_80_::<lambda_4>_>
          param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int **ppiVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  int *local_338;
  int *local_328;
  int *local_320;
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
    ppiVar5 = &local_328;
    do {
      piVar8 = ppiVar5[1];
      piVar4 = *ppiVar5;
      piVar1 = ppiVar5[2];
      iVar3 = (int)((longlong)piVar8 - (longlong)piVar4 >> 2) + 1;
      local_338._0_4_ = (int)piVar1;
      piVar9 = piVar4;
      if ((int)local_338 != 0) {
LAB_14cee29e0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar6 = piVar8 + 1;
          iVar2 = piVar9[iVar3 >> 1];
          piVar9[iVar3 >> 1] = *piVar9;
          *piVar9 = iVar2;
          piVar4 = piVar9;
LAB_14cee2a10:
          piVar4 = piVar4 + 1;
          if (piVar4 <= piVar8) goto code_r0x00014cee2a19;
          goto LAB_14cee2a20;
        }
        for (; piVar4 = piVar9, piVar1 = piVar9, piVar9 < piVar8; piVar8 = piVar8 + -1) {
          while (piVar1 = piVar1 + 1, piVar1 <= piVar8) {
            if (*piVar1 < *piVar4) {
              piVar4 = piVar1;
            }
          }
          iVar3 = *piVar4;
          *piVar4 = *piVar8;
          *piVar8 = iVar3;
        }
        goto LAB_14cee2ad8;
      }
LAB_14cee2ac7:
      local_338 = piVar1;
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FPCGPrimitiveCrossSectionElement::ExecuteInternal_::__l80::<lambda_4>_>_>
                (piVar4,iVar3,param_3,param_4);
LAB_14cee2ad8:
      ppiVar5 = ppiVar5 + -3;
    } while (&local_328 <= ppiVar5);
  }
  return;
code_r0x00014cee2a19:
  if (*piVar9 <= *piVar4) goto LAB_14cee2a10;
LAB_14cee2a20:
  do {
    piVar7 = piVar6;
    piVar6 = piVar7 + -1;
    if (piVar6 <= piVar9) break;
  } while (*piVar6 <= *piVar9);
  if (piVar4 <= piVar6) {
    iVar3 = *piVar4;
    *piVar4 = *piVar6;
    *piVar6 = iVar3;
    goto LAB_14cee2a10;
  }
  iVar3 = *piVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *piVar9 = *piVar6;
  *piVar6 = iVar3;
  if ((longlong)((longlong)piVar6 + (-4 - (longlong)piVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar8 - (longlong)piVar4 & 0xfffffffffffffffcU)) {
    if (piVar4 < piVar8) {
      *ppiVar5 = piVar4;
      ppiVar5[1] = piVar8;
      *(int *)(ppiVar5 + 2) = (int)local_338;
      ppiVar5 = ppiVar5 + 3;
    }
    if (piVar6 <= piVar9 + 1) goto LAB_14cee2ad8;
    piVar8 = piVar7 + -2;
    piVar4 = piVar9;
  }
  else {
    if (piVar9 + 1 < piVar6) {
      *ppiVar5 = piVar9;
      ppiVar5[1] = piVar7 + -2;
      *(int *)(ppiVar5 + 2) = (int)local_338;
      ppiVar5 = ppiVar5 + 3;
    }
    if (piVar8 <= piVar4) goto LAB_14cee2ad8;
  }
  iVar3 = (int)((longlong)piVar8 - (longlong)piVar4 >> 2) + 1;
  piVar9 = piVar4;
  if ((int)local_338 == 0) goto LAB_14cee2ac7;
  goto LAB_14cee29e0;
}

// IntroSortInternal<FCrossSection,int,FIdentityFunctor,TDereferenceWrapper<FCrossSection,`FPCGPrimitiveCrossSectionElement::ExecuteInternal'::__l80::<lambda_2>_>_> @ 14cee2b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FCrossSection,int,FIdentityFunctor,TDereferenceWrapper<FCrossSection,_FPCGPrimitiveCrossSectionElement::ExecuteInternal_::__l80::<lambda_2>_>_>
          (FCrossSection *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FCrossSection,_protected:_virtual_bool___cdecl_FPCGPrimitiveCrossSectionElement::ExecuteInternal(FPCGContext_*)const_::_80_::<lambda_2>_>
          param_4)

{
  FCrossSection *pFVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FCrossSection *pFVar12;
  FCrossSection **ppFVar13;
  FCrossSection *pFVar14;
  FCrossSection *pFVar15;
  FCrossSection *pFVar16;
  FCrossSection *pFVar17;
  FCrossSection *pFVar18;
  float fVar19;
  undefined1 auStack_368 [48];
  FCrossSection *local_338;
  FCrossSection *local_328;
  FCrossSection *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar19;
    memset(local_310,0,0x2e8);
    ppFVar13 = &local_328;
    do {
      pFVar16 = ppFVar13[1];
      pFVar18 = *ppFVar13;
      pFVar1 = ppFVar13[2];
      iVar11 = (int)((longlong)pFVar16 - (longlong)pFVar18 >> 5) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar17 = pFVar18;
      if ((int)local_338 != 0) {
LAB_14cee2c00:
        if (8 < iVar11) {
          uVar5 = *(undefined4 *)&pFVar17->field_0x4;
          dVar2 = pFVar17->Height;
          pFVar14 = pFVar16 + 1;
          pFVar18 = pFVar17 + iVar11 / 2;
          iVar7 = pFVar18->Tier;
          uVar8 = *(undefined4 *)&pFVar18->field_0x4;
          dVar3 = pFVar18->Height;
          pFVar4 = (pFVar18->PointLocations).AllocatorInstance.Data;
          iVar9 = (pFVar18->PointLocations).ArrayNum;
          iVar10 = (pFVar18->PointLocations).ArrayMax;
          pFVar18->Tier = pFVar17->Tier;
          *(undefined4 *)&pFVar18->field_0x4 = uVar5;
          pFVar18->Height = dVar2;
          iVar11 = (pFVar17->PointLocations).ArrayNum;
          iVar6 = (pFVar17->PointLocations).ArrayMax;
          (pFVar18->PointLocations).AllocatorInstance.Data =
               (pFVar17->PointLocations).AllocatorInstance.Data;
          (pFVar18->PointLocations).ArrayNum = iVar11;
          (pFVar18->PointLocations).ArrayMax = iVar6;
          pFVar17->Tier = iVar7;
          *(undefined4 *)&pFVar17->field_0x4 = uVar8;
          pFVar17->Height = dVar3;
          (pFVar17->PointLocations).AllocatorInstance.Data = pFVar4;
          (pFVar17->PointLocations).ArrayNum = iVar9;
          (pFVar17->PointLocations).ArrayMax = iVar10;
          pFVar18 = pFVar17;
LAB_14cee2c40:
          pFVar12 = pFVar18;
          pFVar18 = pFVar12 + 1;
          if (pFVar18 <= pFVar16) goto code_r0x00014cee2c49;
          goto LAB_14cee2c50;
        }
        for (; pFVar18 = pFVar17, pFVar1 = pFVar17, pFVar17 < pFVar16; pFVar16 = pFVar16 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar16) {
            if (pFVar18->Tier < pFVar1->Tier) {
              pFVar18 = pFVar1;
            }
          }
          iVar7 = pFVar18->Tier;
          uVar8 = *(undefined4 *)&pFVar18->field_0x4;
          dVar2 = pFVar18->Height;
          pFVar4 = (pFVar18->PointLocations).AllocatorInstance.Data;
          iVar9 = (pFVar18->PointLocations).ArrayNum;
          iVar10 = (pFVar18->PointLocations).ArrayMax;
          uVar5 = *(undefined4 *)&pFVar16->field_0x4;
          dVar3 = pFVar16->Height;
          pFVar18->Tier = pFVar16->Tier;
          *(undefined4 *)&pFVar18->field_0x4 = uVar5;
          pFVar18->Height = dVar3;
          iVar11 = (pFVar16->PointLocations).ArrayNum;
          iVar6 = (pFVar16->PointLocations).ArrayMax;
          (pFVar18->PointLocations).AllocatorInstance.Data =
               (pFVar16->PointLocations).AllocatorInstance.Data;
          (pFVar18->PointLocations).ArrayNum = iVar11;
          (pFVar18->PointLocations).ArrayMax = iVar6;
          pFVar16->Tier = iVar7;
          *(undefined4 *)&pFVar16->field_0x4 = uVar8;
          pFVar16->Height = dVar2;
          (pFVar16->PointLocations).AllocatorInstance.Data = pFVar4;
          (pFVar16->PointLocations).ArrayNum = iVar9;
          (pFVar16->PointLocations).ArrayMax = iVar10;
        }
        goto LAB_14cee2d35;
      }
LAB_14cee2d24:
      local_338 = pFVar1;
      HeapSortInternal<FCrossSection,int,FIdentityFunctor,TDereferenceWrapper<FCrossSection,_FPCGPrimitiveCrossSectionElement::ExecuteInternal_::__l80::<lambda_2>_>_>
                (pFVar18,iVar11,param_3,param_4);
LAB_14cee2d35:
      ppFVar13 = ppFVar13 + -3;
    } while (&local_328 <= ppFVar13);
  }
  return;
code_r0x00014cee2c49:
  if (pFVar18->Tier <= pFVar17->Tier) goto LAB_14cee2c40;
LAB_14cee2c50:
  do {
    pFVar15 = pFVar14;
    pFVar14 = pFVar15 + -1;
    if (pFVar14 <= pFVar17) break;
  } while (pFVar17->Tier <= pFVar14->Tier);
  dVar2 = pFVar15[-1].Height;
  if (pFVar18 <= pFVar14) {
    iVar7 = pFVar18->Tier;
    uVar5 = *(undefined4 *)&pFVar18->field_0x4;
    dVar3 = pFVar12[1].Height;
    pFVar4 = pFVar12[1].PointLocations.AllocatorInstance.Data;
    iVar9 = pFVar12[1].PointLocations.ArrayNum;
    iVar10 = pFVar12[1].PointLocations.ArrayMax;
    *(undefined8 *)pFVar18 = *(undefined8 *)pFVar14;
    pFVar12[1].Height = dVar2;
    iVar11 = pFVar15[-1].PointLocations.ArrayNum;
    iVar6 = pFVar15[-1].PointLocations.ArrayMax;
    pFVar12[1].PointLocations.AllocatorInstance.Data =
         pFVar15[-1].PointLocations.AllocatorInstance.Data;
    pFVar12[1].PointLocations.ArrayNum = iVar11;
    pFVar12[1].PointLocations.ArrayMax = iVar6;
    pFVar14->Tier = iVar7;
    *(undefined4 *)&pFVar14->field_0x4 = uVar5;
    pFVar15[-1].Height = dVar3;
    pFVar15[-1].PointLocations.AllocatorInstance.Data = pFVar4;
    pFVar15[-1].PointLocations.ArrayNum = iVar9;
    pFVar15[-1].PointLocations.ArrayMax = iVar10;
    goto LAB_14cee2c40;
  }
  iVar7 = pFVar17->Tier;
  uVar5 = *(undefined4 *)&pFVar17->field_0x4;
  dVar3 = pFVar17->Height;
  pFVar4 = (pFVar17->PointLocations).AllocatorInstance.Data;
  iVar9 = (pFVar17->PointLocations).ArrayNum;
  iVar10 = (pFVar17->PointLocations).ArrayMax;
  *(undefined8 *)pFVar17 = *(undefined8 *)pFVar14;
  pFVar17->Height = dVar2;
  local_338._0_4_ = (int)local_338 + -1;
  iVar11 = pFVar15[-1].PointLocations.ArrayNum;
  iVar6 = pFVar15[-1].PointLocations.ArrayMax;
  (pFVar17->PointLocations).AllocatorInstance.Data =
       pFVar15[-1].PointLocations.AllocatorInstance.Data;
  (pFVar17->PointLocations).ArrayNum = iVar11;
  (pFVar17->PointLocations).ArrayMax = iVar6;
  pFVar14->Tier = iVar7;
  *(undefined4 *)&pFVar14->field_0x4 = uVar5;
  pFVar15[-1].Height = dVar3;
  pFVar15[-1].PointLocations.AllocatorInstance.Data = pFVar4;
  pFVar15[-1].PointLocations.ArrayNum = iVar9;
  pFVar15[-1].PointLocations.ArrayMax = iVar10;
  if ((longlong)((longlong)pFVar14 + (-0x20 - (longlong)pFVar17) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar16 - (longlong)pFVar18 & 0xffffffffffffffe0U)) {
    if (pFVar18 < pFVar16) {
      *ppFVar13 = pFVar18;
      ppFVar13[1] = pFVar16;
      *(int *)(ppFVar13 + 2) = (int)local_338;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar14 <= pFVar17 + 1) goto LAB_14cee2d35;
    pFVar16 = pFVar15 + -2;
    pFVar18 = pFVar17;
  }
  else {
    if (pFVar17 + 1 < pFVar14) {
      *ppFVar13 = pFVar17;
      ppFVar13[1] = pFVar15 + -2;
      *(int *)(ppFVar13 + 2) = (int)local_338;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar16 <= pFVar18) goto LAB_14cee2d35;
  }
  iVar11 = (int)((longlong)pFVar16 - (longlong)pFVar18 >> 5) + 1;
  pFVar17 = pFVar18;
  if ((int)local_338 == 0) goto LAB_14cee2d24;
  goto LAB_14cee2c00;
}

// NewObject<UGeometryScriptDebug> @ 14cee2dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGeometryScriptDebug * __cdecl NewObject<UGeometryScriptDebug>(UObject *param_1)

{
  UClass *pUVar1;
  UGeometryScriptDebug *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGeometryScriptDebug *)
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

// NewObject<UPCGDynamicMeshManagedComponent> @ 14cee2e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGDynamicMeshManagedComponent * __cdecl
NewObject<UPCGDynamicMeshManagedComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGDynamicMeshManagedComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGDynamicMeshManagedComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGDynamicMeshManagedComponent *)
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

// StaticEnum<enum_EPCGAppendMeshesFromPointsMode> @ 14cee31b0

UEnum * __cdecl StaticEnum<enum_EPCGAppendMeshesFromPointsMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGAppendMeshesFromPointsMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCGGeometryScriptInterop();
    Z_Registration_Info_UEnum_EPCGAppendMeshesFromPointsMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGAppendMeshesFromPointsMode,
                       (UObject *)pUVar1,L"EPCGAppendMeshesFromPointsMode");
  }
  return Z_Registration_Info_UEnum_EPCGAppendMeshesFromPointsMode.OuterSingleton;
}

// StaticEnum<enum_EPCGBooleanOperationMode> @ 14cee31f0

UEnum * __cdecl StaticEnum<enum_EPCGBooleanOperationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGBooleanOperationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCGGeometryScriptInterop();
    Z_Registration_Info_UEnum_EPCGBooleanOperationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGBooleanOperationMode,
                       (UObject *)pUVar1,L"EPCGBooleanOperationMode");
  }
  return Z_Registration_Info_UEnum_EPCGBooleanOperationMode.OuterSingleton;
}

// StaticEnum<enum_EPCGBooleanOperationTagInheritanceMode> @ 14cee3230

UEnum * __cdecl StaticEnum<enum_EPCGBooleanOperationTagInheritanceMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGBooleanOperationTagInheritanceMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCGGeometryScriptInterop();
    Z_Registration_Info_UEnum_EPCGBooleanOperationTagInheritanceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGBooleanOperationTagInheritanceMode
                       ,(UObject *)pUVar1,L"EPCGBooleanOperationTagInheritanceMode");
  }
  return Z_Registration_Info_UEnum_EPCGBooleanOperationTagInheritanceMode.OuterSingleton;
}

// StaticEnum<enum_EPCGColorChannel> @ 14cee3270

UEnum * __cdecl StaticEnum<enum_EPCGColorChannel>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGColorChannel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCGGeometryScriptInterop();
    Z_Registration_Info_UEnum_EPCGColorChannel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGColorChannel,(UObject *)pUVar1
                       ,L"EPCGColorChannel");
  }
  return Z_Registration_Info_UEnum_EPCGColorChannel.OuterSingleton;
}

// StaticEnum<enum_EPCGMeshSamplingMethod> @ 14cee32b0

UEnum * __cdecl StaticEnum<enum_EPCGMeshSamplingMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGMeshSamplingMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCGGeometryScriptInterop();
    Z_Registration_Info_UEnum_EPCGMeshSamplingMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod,
                       (UObject *)pUVar1,L"EPCGMeshSamplingMethod");
  }
  return Z_Registration_Info_UEnum_EPCGMeshSamplingMethod.OuterSingleton;
}

// Transform<TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,`FPCGStaticMeshToDynamicMeshElement::PrepareDataInternal'::__l22::<lambda_1>_> @ 14cee32f0

/* WARNING: Removing unreachable block (ram,0x00014cee3478) */

void __cdecl
Algo::
Transform<TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,_FPCGStaticMeshToDynamicMeshElement::PrepareDataInternal_::__l22::<lambda_1>_>
          (TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  iVar2 = param_1->ArrayNum;
  pFVar7 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar7 + (longlong)iVar2 * 0x28;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSoftObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return;
    }
    iVar5 = *(int *)(pFVar7 + 0x20);
    _Src = *(void **)(pFVar7 + 0x18);
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = CONCAT44(local_30._4_4_,iVar5);
    local_48 = *(undefined8 *)(pFVar7 + 8);
    uStack_40 = *(undefined8 *)(pFVar7 + 0x10);
    if (iVar5 == 0) {
      local_30 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar5,0,&local_38,iVar5,(int *)((longlong)&local_30 + 4));
      memcpy(local_38.Data,_Src,(longlong)iVar5);
    }
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar6 + (longlong)param_2->ArrayMax * 0x20)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
    *(undefined8 *)pFVar6 = local_48;
    *(undefined8 *)(pFVar6 + 8) = uStack_40;
    *(undefined8 *)(pFVar6 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar6 + 0x10) = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar6 + 0x18) = (undefined4)local_30;
    *(undefined4 *)(pFVar6 + 0x1c) = local_30._4_4_;
    local_30 = 0;
    pFVar7 = pFVar7 + 0x28;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&,`PCGGetDynamicMeshData::GetDynamicMeshDataFromComponent'::__l31::<lambda_1>_> @ 14cee34c0

void __cdecl
Algo::
Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&,_PCGGetDynamicMeshData::GetDynamicMeshDataFromComponent_::__l31::<lambda_1>_>
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2,<lambda_1> param_3)

{
  FName *pFVar1;
  int iVar2;
  FName *this;
  undefined1 local_res8 [8];
  FString local_28;
  
  this = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar1) break;
    ::FName::ToString(this,&local_28);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              (param_2,(FString *)&stack0x00000020,(bool *)&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this = this + 1;
  }
  return;
}

// get<1,TTuple<FSoftObjectPath,int,int>_const_&> @ 14cee3550

int * __cdecl
get<1,TTuple<FSoftObjectPath,int,int>_const_&>(TTuple<FSoftObjectPath,int,int> *param_1)

{
  return (int *)&param_1->field_0x20;
}

// get<2,TTuple<FSoftObjectPath,int,int>_const_&> @ 14cee3560

int * __cdecl
get<2,TTuple<FSoftObjectPath,int,int>_const_&>(TTuple<FSoftObjectPath,int,int> *param_1)

{
  return (int *)&param_1->field_0x24;
}

// get<0,TTuple<FSoftObjectPath,int,int>_const_&> @ 14cee3570

FSoftObjectPath * __cdecl
get<0,TTuple<FSoftObjectPath,int,int>_const_&>(TTuple<FSoftObjectPath,int,int> *param_1)

{
  return (FSoftObjectPath *)param_1;
}

// ~<lambda_1> @ 14cee4420

void __thiscall
`Async<`PCGMeshSampler::PoissonSampling'::__l14::<lambda_2>_>'::__l4::<lambda_1>::~<lambda_1>
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x00014cee4487. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0> @ 14cee44e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__FPCGAppendMeshesFromPointsElement::ExecuteInternal_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Async<`PCGMeshSampler::PoissonSampling'::__l14::<lambda_2>_>'::__l4::<lambda_1>,1,1> @ 14cee4500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`PCGMeshSampler::PoissonSampling'::__l14::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_PCGMeshSampler::PoissonSampling_::__l14::<lambda_2>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`PCGMeshSampler::PoissonSampling'::`14'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`PCGMeshSampler::PoissonSampling'::__l14::<lambda_2>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`PCGMeshSampler::PoissonSampling'::__l12::<lambda_1>,0,0> @ 14cee4520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMeshSampler::PoissonSampling'::__l12::<lambda_1>,0,0>::
~TFunction_OwnedObject<_PCGMeshSampler::PoissonSampling_::__l12::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`PCGMeshSampler::PoissonSampling'::`12'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0> @ 14cee4540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<__FPCGAppendMeshesFromPointsElement::ExecuteInternal_::__l2::<lambda_2>::operator()_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`PCGMeshSampler::PoissonSampling'::__l14::<lambda_2>,1,1> @ 14cee4560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMeshSampler::PoissonSampling'::__l14::<lambda_2>,1,1>::
~TFunction_OwnedObject<_PCGMeshSampler::PoissonSampling_::__l14::<lambda_2>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`PCGMeshSampler::PoissonSampling'::`14'::<lambda_2>,1,1>::_vftable_;
  return;
}

// operator() @ 14cee4dc0

bool __thiscall
``PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  bVar7 = false;
  do {
    lVar1 = *(longlong *)((longlong)this + 8);
    uVar5 = **(uint **)this;
    uVar6 = 0;
    if ((int)uVar5 < *(int *)(lVar1 + 0x2a0)) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (*(longlong *)(*(longlong *)(lVar1 + 0x298) + (longlong)(int)uVar5 * 8) != 0) {
      lVar1 = *(longlong *)((longlong)this + 8);
      uVar6 = **(int **)this + 1;
      uVar5 = 0;
      if ((int)uVar6 < *(int *)(lVar1 + 0x390)) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      if (param_1 < *(int *)(*(longlong *)(lVar1 + 0x388) + (longlong)(int)uVar6 * 4)) {
        return bVar7;
      }
    }
    bVar7 = true;
    **(int **)this = **(int **)this + 1;
  } while( true );
}

// operator() @ 14cee4ee0

bool __thiscall
``PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  bVar7 = false;
  do {
    lVar1 = *(longlong *)((longlong)this + 8);
    uVar5 = **(uint **)this;
    uVar6 = 0;
    if ((int)uVar5 < *(int *)(lVar1 + 0x2a0)) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (*(longlong *)(*(longlong *)(lVar1 + 0x298) + (longlong)(int)uVar5 * 8) != 0) {
      lVar1 = *(longlong *)((longlong)this + 8);
      uVar6 = **(int **)this + 1;
      uVar5 = 0;
      if ((int)uVar6 < *(int *)(lVar1 + 0x390)) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      if (param_1 < *(int *)(*(longlong *)(lVar1 + 0x388) + (longlong)(int)uVar6 * 4)) {
        return bVar7;
      }
    }
    bVar7 = true;
    **(int **)this = **(int **)this + 1;
  } while( true );
}

// operator() @ 14cee5000

void __thiscall
``FPCGPrimitiveCrossSectionElement::ExecuteInternal'::__l57::<lambda_1>::operator()'::__l2::
<lambda_1>::operator()(void *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar9 = (param_1->field0_0x0)._s_0.X;
  dVar10 = (param_1->field0_0x0)._s_0.Y;
  pdVar6 = *(double **)this;
  dVar1 = pdVar6[2];
  dVar2 = pdVar6[3];
  dVar3 = *pdVar6;
  dVar4 = pdVar6[1];
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  dVar8 = dVar4 * dVar5 - dVar1 * dVar10;
  dVar8 = dVar8 + dVar8;
  dVar7 = dVar1 * dVar9 - dVar3 * dVar5;
  dVar11 = dVar3 * dVar10 - dVar4 * dVar9;
  dVar7 = dVar7 + dVar7;
  dVar11 = dVar11 + dVar11;
  (param_1->field0_0x0)._s_0.X = (dVar11 * dVar4 - dVar7 * dVar1) + dVar2 * dVar8 + dVar9;
  (param_1->field0_0x0)._s_0.Y = (dVar8 * dVar1 - dVar11 * dVar3) + dVar2 * dVar7 + dVar10;
  (param_1->field0_0x0)._s_0.Z = (dVar7 * dVar3 - dVar8 * dVar4) + dVar2 * dVar11 + dVar5;
  return;
}

// operator() @ 14cee5320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  FPCGPointValueRanges *pFVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  FPCGPointValueRanges *pFVar17;
  FPCGPointValueRanges *pFVar18;
  TMatrix<double> *this_00;
  TRotator<double> *this_01;
  TQuat<double> *pTVar19;
  FPCGPointValueRanges *pFVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStackY_6e8 [32];
  uint local_6a8;
  bool local_6a4;
  bool local_6a3 [3];
  int local_6a0;
  uint *local_698;
  longlong local_690;
  TVector<double>_u_0 local_688;
  TVector<double>_u_0 local_670;
  TVector<double>_u_0 local_658;
  TVector<double>_u_0 local_638;
  TVector<double> local_618;
  TVector<double>_u_0 local_600;
  TVector<double> local_5e8;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  double dStack_5b0;
  TRotator<double> local_5a8;
  TVector<double> local_590;
  TVector<double> local_578;
  TVector<double> local_560;
  TQuat<double> local_548;
  FPCGPointValueRanges local_528;
  undefined1 local_398 [72];
  undefined4 uStack_350;
  undefined4 uStack_34c;
  __m128d local_348;
  undefined8 local_338;
  TVector<double>_u_0 local_330;
  TVector<double>_u_0 local_318;
  longlong local_300;
  TVector4<double>_u_0 local_2f8;
  undefined8 local_2d8;
  long64 local_2d0;
  TMatrix<double> local_2c8;
  FPCGPointValueRanges local_248;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_6e8;
  local_698 = &local_6a8;
  local_6a8 = 0;
  local_690 = *(longlong *)this;
  ``PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
  operator()(&local_698,param_1);
  lVar23 = (longlong)(int)local_6a8;
  lVar21 = *(longlong *)this;
  uVar25 = 0;
  if ((int)local_6a8 < *(int *)(lVar21 + 0x300)) {
    uVar25 = ~local_6a8 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    iVar15 = (*pcVar3)();
    return iVar15;
  }
  FPCGPointValueRanges::FPCGPointValueRanges
            (&local_248,*(UPCGBasePointData **)(*(longlong *)(lVar21 + 0x2f8) + lVar23 * 8),false);
  dVar11 = __real_3fd5555555555555;
  dVar10 = _UNK_150689688;
  dVar9 = ___xmm_3ff00000000000003ff0000000000000;
  local_6a0 = param_1 + param_3;
  if (local_6a0 <= param_1) {
    if ((param_3 != 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Count == NumWritten",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                            ,0xa9,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      iVar15 = (*pcVar3)();
      return iVar15;
    }
    return param_3;
  }
  uVar25 = (uint)__xmm_80000000000000008000000000000000;
  uVar26 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
LAB_14cee5460:
  bVar13 = false;
  do {
    lVar21 = local_690;
    uVar16 = *local_698;
    uVar22 = 0;
    if ((int)uVar16 < *(int *)(local_690 + 0x2a0)) {
      uVar22 = ~uVar16 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar3 = (code *)swi(3);
      iVar15 = (*pcVar3)();
      return iVar15;
    }
    lVar23 = local_690;
    if (*(longlong *)(*(longlong *)(lVar21 + 0x298) + (longlong)(int)uVar16 * 8) != 0) {
      uVar22 = *local_698 + 1;
      uVar16 = 0;
      if ((int)uVar22 < *(int *)(local_690 + 0x390)) {
        uVar16 = ~uVar22 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar3 = (code *)swi(3);
        iVar15 = (*pcVar3)();
        return iVar15;
      }
      if (param_1 < *(int *)(*(longlong *)(lVar23 + 0x388) + (longlong)(int)uVar22 * 4)) break;
    }
    bVar13 = true;
    *local_698 = *local_698 + 1;
  } while( true );
  if (bVar13) {
    lVar23 = (longlong)(int)local_6a8;
    lVar21 = *(longlong *)this;
    uVar16 = 0;
    if ((int)local_6a8 < *(int *)(lVar21 + 0x300)) {
      uVar16 = ~local_6a8 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      iVar15 = (*pcVar3)();
      return iVar15;
    }
    pFVar17 = FPCGPointValueRanges::FPCGPointValueRanges
                        (&local_528,
                         *(UPCGBasePointData **)(*(longlong *)(lVar21 + 0x2f8) + lVar23 * 8),false);
    lVar21 = 3;
    pFVar12 = &local_248;
    do {
      pFVar20 = pFVar12;
      pFVar18 = pFVar17;
      iVar15 = (pFVar18->TransformRange).ElementView.BytesBetweenElements;
      iVar7 = (pFVar18->TransformRange).ElementView.NumElements;
      (pFVar20->TransformRange).ElementView.FirstElementPtr =
           (pFVar18->TransformRange).ElementView.FirstElementPtr;
      (pFVar20->TransformRange).ElementView.BytesBetweenElements = iVar15;
      (pFVar20->TransformRange).ElementView.NumElements = iVar7;
      uVar8 = *(undefined4 *)&(pFVar18->TransformRange).field_0x14;
      lVar23 = (pFVar18->TransformRange)._padding_;
      (pFVar20->TransformRange).NumElements = (pFVar18->TransformRange).NumElements;
      *(undefined4 *)&(pFVar20->TransformRange).field_0x14 = uVar8;
      (pFVar20->TransformRange)._padding_ = lVar23;
      dVar4 = (pFVar18->TransformRange).StubValue.Rotation.XY.m128d_f64[1];
      (pFVar20->TransformRange).StubValue.Rotation.XY.m128d_f64[0] =
           (pFVar18->TransformRange).StubValue.Rotation.XY.m128d_f64[0];
      (pFVar20->TransformRange).StubValue.Rotation.XY.m128d_f64[1] = dVar4;
      dVar4 = (pFVar18->TransformRange).StubValue.Rotation.ZW.m128d_f64[1];
      (pFVar20->TransformRange).StubValue.Rotation.ZW.m128d_f64[0] =
           (pFVar18->TransformRange).StubValue.Rotation.ZW.m128d_f64[0];
      (pFVar20->TransformRange).StubValue.Rotation.ZW.m128d_f64[1] = dVar4;
      dVar4 = (pFVar18->TransformRange).StubValue.Translation.XY.m128d_f64[1];
      (pFVar20->TransformRange).StubValue.Translation.XY.m128d_f64[0] =
           (pFVar18->TransformRange).StubValue.Translation.XY.m128d_f64[0];
      (pFVar20->TransformRange).StubValue.Translation.XY.m128d_f64[1] = dVar4;
      dVar4 = (pFVar18->TransformRange).StubValue.Translation.ZW.m128d_f64[1];
      (pFVar20->TransformRange).StubValue.Translation.ZW.m128d_f64[0] =
           (pFVar18->TransformRange).StubValue.Translation.ZW.m128d_f64[0];
      (pFVar20->TransformRange).StubValue.Translation.ZW.m128d_f64[1] = dVar4;
      dVar4 = (pFVar18->TransformRange).StubValue.Scale3D.XY.m128d_f64[1];
      (pFVar20->TransformRange).StubValue.Scale3D.XY.m128d_f64[0] =
           (pFVar18->TransformRange).StubValue.Scale3D.XY.m128d_f64[0];
      (pFVar20->TransformRange).StubValue.Scale3D.XY.m128d_f64[1] = dVar4;
      dVar4 = (pFVar18->TransformRange).StubValue.Scale3D.ZW.m128d_f64[1];
      (pFVar20->TransformRange).StubValue.Scale3D.ZW.m128d_f64[0] =
           (pFVar18->TransformRange).StubValue.Scale3D.ZW.m128d_f64[0];
      (pFVar20->TransformRange).StubValue.Scale3D.ZW.m128d_f64[1] = dVar4;
      lVar21 = lVar21 + -1;
      pFVar17 = (FPCGPointValueRanges *)&pFVar18->DensityRange;
      pFVar12 = (FPCGPointValueRanges *)&pFVar20->DensityRange;
    } while (lVar21 != 0);
    iVar15 = (pFVar18->DensityRange).ElementView.BytesBetweenElements;
    iVar7 = (pFVar18->DensityRange).ElementView.NumElements;
    (pFVar20->DensityRange).ElementView.FirstElementPtr =
         (pFVar18->DensityRange).ElementView.FirstElementPtr;
    (pFVar20->DensityRange).ElementView.BytesBetweenElements = iVar15;
    (pFVar20->DensityRange).ElementView.NumElements = iVar7;
  }
  lVar23 = (longlong)(int)local_6a8;
  lVar21 = *(longlong *)this;
  uVar16 = 0;
  if ((int)local_6a8 < *(int *)(lVar21 + 0x2e0)) {
    uVar16 = ~local_6a8 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    iVar15 = (*pcVar3)();
    return iVar15;
  }
  lVar24 = (longlong)(int)local_6a8;
  lVar1 = *(longlong *)this;
  plVar2 = *(longlong **)(*(longlong *)(lVar21 + 0x2d8) + 8 + lVar23 * 0x18);
  uVar16 = 0;
  if ((int)local_6a8 < *(int *)(lVar1 + 0x390)) {
    uVar16 = ~local_6a8 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    iVar15 = (*pcVar3)();
    return iVar15;
  }
  uVar22 = param_1 - *(int *)(*(longlong *)(lVar1 + 0x388) + lVar24 * 4);
  uVar16 = 0;
  if ((int)uVar22 < (int)plVar2[1]) {
    uVar16 = ~uVar22 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    iVar15 = (*pcVar3)();
    return iVar15;
  }
  lVar23 = (longlong)(int)local_6a8;
  lVar21 = *(longlong *)this;
  iVar15 = *(int *)(*plVar2 + (longlong)(int)uVar22 * 4);
  uVar16 = 0;
  if ((int)local_6a8 < *(int *)(lVar21 + 0x2a0)) {
    uVar16 = ~local_6a8 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    iVar15 = (*pcVar3)();
    return iVar15;
  }
  UGeometryScriptLibrary_MeshQueryFunctions::GetTrianglePositions
            (*(UDynamicMesh **)(*(longlong *)(lVar21 + 0x298) + lVar23 * 8),iVar15,&local_6a4,
             (TVector<double> *)&local_688._s_0,(TVector<double> *)&local_670._s_0,
             (TVector<double> *)&local_658._s_0);
  lVar23 = (longlong)(int)local_6a8;
  lVar21 = *(longlong *)this;
  uVar16 = 0;
  if ((int)local_6a8 < *(int *)(lVar21 + 0x2a0)) {
    uVar16 = ~local_6a8 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    iVar15 = (*pcVar3)();
    return iVar15;
  }
  UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleFaceNormal
            (&local_5e8,*(UDynamicMesh **)(*(longlong *)(lVar21 + 0x298) + lVar23 * 8),iVar15,
             &local_6a4);
  dVar4 = local_688._s_0.X + local_670._s_0.X + local_658._s_0.X;
  local_338._0_4_ = 1.0;
  local_338._4_4_ = 0;
  local_300 = 0;
  local_2d8._0_4_ = 0.5;
  local_2d8._4_4_ = 0;
  local_2d0 = -1;
  dVar5 = local_688._s_0.Y + local_670._s_0.Y + local_658._s_0.Y;
  dVar6 = local_688._s_0.Z + local_670._s_0.Z + local_658._s_0.Z;
  local_398._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_398._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_398._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_398._24_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_398._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_398._28_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_398._40_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_398._32_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_398._44_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  uStack_350 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_398._64_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  uStack_34c = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_318._8_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
  local_318._12_4_ =
       (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
  local_398._56_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_398._48_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_398._60_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_348.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_348.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_348.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_330._s_0.Y = (double)CONCAT44(local_318._12_4_ ^ uVar26,local_318._8_4_ ^ uVar25);
  local_330._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar26,
                        UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar25);
  local_330._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                              0x20) ^ uVar26,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar25);
  local_318._0_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  local_318._4_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  local_318._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_2f8._s_0.X = dVar9;
  local_2f8._s_0.Y = dVar10;
  local_2f8._s_0.Z = dVar9;
  local_2f8._s_0.W = dVar10;
  this_00 = UE::Math::TRotationMatrix<double>::MakeFromZ(&local_2c8,&local_5e8);
  this_01 = UE::Math::TMatrix<double>::Rotator(this_00,&local_5a8);
  pTVar19 = UE::Math::TRotator<double>::Quaternion(this_01,&local_548);
  dVar4 = dVar4 * dVar11;
  dVar5 = dVar5 * dVar11;
  local_5c8 = pTVar19->X;
  dStack_5c0 = pTVar19->Y;
  local_398._0_8_ = pTVar19->X;
  local_398._8_8_ = pTVar19->Y;
  local_5b8 = pTVar19->Z;
  dStack_5b0 = pTVar19->W;
  local_398._16_8_ = pTVar19->Z;
  local_398._24_8_ = pTVar19->W;
  dVar6 = dVar6 * dVar11;
  local_398._40_4_ = SUB84(dVar5,0);
  local_398._32_8_ = dVar4;
  local_398._44_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_398._56_8_ = 0;
  local_398._48_8_ = dVar6;
  lVar23 = (longlong)(int)local_6a8;
  lVar21 = *(longlong *)this;
  local_398._68_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  local_398._64_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  uStack_350 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
  uStack_34c = (int)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
  local_348.m128d_f64[1] = 0.0;
  local_348.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_2d8._0_4_ = *(float *)(*(longlong *)((longlong)this + 8) + 0x1b8);
  local_6a3[0] = false;
  uVar16 = 0;
  if ((int)local_6a8 < *(int *)(lVar21 + 0x2a0)) {
    uVar16 = ~local_6a8 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    iVar15 = (*pcVar3)();
    return iVar15;
  }
  local_638._s_0.X = dVar4;
  local_638._s_0.Y = dVar5;
  local_638._s_0.Z = dVar6;
  UGeometryScriptLibrary_MeshQueryFunctions::ComputeTriangleBarycentricCoords
            (*(UDynamicMesh **)(*(longlong *)(lVar21 + 0x298) + lVar23 * 8),iVar15,local_6a3,
             (TVector<double> *)&local_638._s_0,&local_560,&local_578,&local_590,&local_618);
  FPCGMeshSamplerContext::SetPointColorAndDensity
            (*(FPCGMeshSamplerContext **)this,
             *(_func___cdecl_void_FLinearColor_ptr_FPCGPoint_ptr **)((longlong)this + 0x10),iVar15,
             &local_618,(FPCGPoint *)local_398,local_6a8);
  FPCGMeshSamplerContext::SetAttributeValues
            (*(FPCGMeshSamplerContext **)this,*(int *)(*(longlong *)((longlong)this + 8) + 0x194),
             iVar15,&local_618,&local_2d0,local_6a8);
  local_600._s_0.X = (double)local_398._32_8_;
  local_600._s_0.Y = (double)local_398._40_8_;
  local_600._s_0.Z = (double)local_398._48_8_;
  iVar15 = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)&local_600._s_0);
  local_2d8._4_4_ = iVar15;
  FPCGPointValueRanges::SetFromPoint(&local_248,uVar22,(FPCGPoint *)local_398);
  param_1 = param_1 + 1;
  if (local_6a0 <= param_1) {
    return param_3;
  }
  goto LAB_14cee5460;
}

// operator() @ 14cee5c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int __thiscall
`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  int iVar8;
  undefined4 uVar9;
  FPCGPointValueRanges *pFVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FPCGPointValueRanges *pFVar15;
  FPCGPointValueRanges *pFVar16;
  TMatrix<double> *this_00;
  TRotator<double> *this_01;
  TQuat<double> *pTVar17;
  FPCGPointValueRanges *pFVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  float *pfVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStack_5b8 [32];
  longlong local_598;
  longlong local_590;
  uint local_588;
  int local_584;
  int local_580;
  uint *local_578;
  longlong local_570;
  longlong *local_568;
  longlong local_560;
  TVector<double>_u_0 local_558;
  double local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  TRotator<double> local_518;
  TQuat<double> local_4f8;
  FPCGPointValueRanges local_4d8;
  FPCGPoint local_348;
  TMatrix<double> local_278;
  FPCGPointValueRanges local_1f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_5b8;
  local_578 = &local_588;
  local_570 = *(longlong *)((longlong)this + 8);
  local_588 = 0;
  local_580 = param_3;
  ``PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
  operator()(&local_578,param_1);
  lVar21 = (longlong)(int)local_588;
  lVar19 = *(longlong *)((longlong)this + 8);
  iVar13 = *(int *)(lVar19 + 0x300);
  uVar25 = 0;
  if ((int)local_588 < iVar13) {
    uVar25 = ~local_588 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (local_598 = lVar21, local_590 = (longlong)iVar13,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    iVar13 = (*pcVar6)();
    return iVar13;
  }
  FPCGPointValueRanges::FPCGPointValueRanges
            (&local_1f8,*(UPCGBasePointData **)(*(longlong *)(lVar19 + 0x2f8) + lVar21 * 8),false);
  local_584 = param_1 + param_3;
  if (local_584 <= param_1) {
    if ((param_3 != 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Count == NumWritten",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                            ,0x5e,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      iVar13 = (*pcVar6)();
      return iVar13;
    }
    return param_3;
  }
  uVar25 = (uint)__xmm_80000000000000008000000000000000;
  uVar26 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
LAB_14cee5d10:
  bVar11 = false;
  do {
    lVar19 = local_570;
    uVar14 = *local_578;
    uVar20 = 0;
    if ((int)uVar14 < *(int *)(local_570 + 0x2a0)) {
      uVar20 = ~uVar14 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (local_598 = (longlong)(int)uVar14, local_590 = (longlong)*(int *)(local_570 + 0x2a0),
       bVar12 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      iVar13 = (*pcVar6)();
      return iVar13;
    }
    lVar21 = local_570;
    if (*(longlong *)(*(longlong *)(lVar19 + 0x298) + (longlong)(int)uVar14 * 8) != 0) {
      uVar20 = *local_578 + 1;
      uVar14 = 0;
      if ((int)uVar20 < *(int *)(local_570 + 0x390)) {
        uVar14 = ~uVar20 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_598 = (longlong)(int)uVar20;
        local_590 = (longlong)*(int *)(local_570 + 0x390);
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          iVar13 = (*pcVar6)();
          return iVar13;
        }
      }
      if (param_1 < *(int *)(*(longlong *)(lVar21 + 0x388) + (longlong)(int)uVar20 * 4)) break;
    }
    bVar11 = true;
    *local_578 = *local_578 + 1;
  } while( true );
  if (bVar11) {
    lVar21 = (longlong)(int)local_588;
    lVar19 = *(longlong *)((longlong)this + 8);
    iVar13 = *(int *)(lVar19 + 0x300);
    uVar14 = 0;
    if ((int)local_588 < iVar13) {
      uVar14 = ~local_588 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (local_598 = lVar21, local_590 = (longlong)iVar13,
       bVar11 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      iVar13 = (*pcVar6)();
      return iVar13;
    }
    pFVar15 = FPCGPointValueRanges::FPCGPointValueRanges
                        (&local_4d8,
                         *(UPCGBasePointData **)(*(longlong *)(lVar19 + 0x2f8) + lVar21 * 8),false);
    lVar19 = 3;
    pFVar10 = &local_1f8;
    do {
      pFVar18 = pFVar10;
      pFVar16 = pFVar15;
      iVar13 = (pFVar16->TransformRange).ElementView.BytesBetweenElements;
      iVar8 = (pFVar16->TransformRange).ElementView.NumElements;
      (pFVar18->TransformRange).ElementView.FirstElementPtr =
           (pFVar16->TransformRange).ElementView.FirstElementPtr;
      (pFVar18->TransformRange).ElementView.BytesBetweenElements = iVar13;
      (pFVar18->TransformRange).ElementView.NumElements = iVar8;
      uVar9 = *(undefined4 *)&(pFVar16->TransformRange).field_0x14;
      lVar21 = (pFVar16->TransformRange)._padding_;
      (pFVar18->TransformRange).NumElements = (pFVar16->TransformRange).NumElements;
      *(undefined4 *)&(pFVar18->TransformRange).field_0x14 = uVar9;
      (pFVar18->TransformRange)._padding_ = lVar21;
      dVar7 = (pFVar16->TransformRange).StubValue.Rotation.XY.m128d_f64[1];
      (pFVar18->TransformRange).StubValue.Rotation.XY.m128d_f64[0] =
           (pFVar16->TransformRange).StubValue.Rotation.XY.m128d_f64[0];
      (pFVar18->TransformRange).StubValue.Rotation.XY.m128d_f64[1] = dVar7;
      dVar7 = (pFVar16->TransformRange).StubValue.Rotation.ZW.m128d_f64[1];
      (pFVar18->TransformRange).StubValue.Rotation.ZW.m128d_f64[0] =
           (pFVar16->TransformRange).StubValue.Rotation.ZW.m128d_f64[0];
      (pFVar18->TransformRange).StubValue.Rotation.ZW.m128d_f64[1] = dVar7;
      dVar7 = (pFVar16->TransformRange).StubValue.Translation.XY.m128d_f64[1];
      (pFVar18->TransformRange).StubValue.Translation.XY.m128d_f64[0] =
           (pFVar16->TransformRange).StubValue.Translation.XY.m128d_f64[0];
      (pFVar18->TransformRange).StubValue.Translation.XY.m128d_f64[1] = dVar7;
      dVar7 = (pFVar16->TransformRange).StubValue.Translation.ZW.m128d_f64[1];
      (pFVar18->TransformRange).StubValue.Translation.ZW.m128d_f64[0] =
           (pFVar16->TransformRange).StubValue.Translation.ZW.m128d_f64[0];
      (pFVar18->TransformRange).StubValue.Translation.ZW.m128d_f64[1] = dVar7;
      dVar7 = (pFVar16->TransformRange).StubValue.Scale3D.XY.m128d_f64[1];
      (pFVar18->TransformRange).StubValue.Scale3D.XY.m128d_f64[0] =
           (pFVar16->TransformRange).StubValue.Scale3D.XY.m128d_f64[0];
      (pFVar18->TransformRange).StubValue.Scale3D.XY.m128d_f64[1] = dVar7;
      dVar7 = (pFVar16->TransformRange).StubValue.Scale3D.ZW.m128d_f64[1];
      (pFVar18->TransformRange).StubValue.Scale3D.ZW.m128d_f64[0] =
           (pFVar16->TransformRange).StubValue.Scale3D.ZW.m128d_f64[0];
      (pFVar18->TransformRange).StubValue.Scale3D.ZW.m128d_f64[1] = dVar7;
      lVar19 = lVar19 + -1;
      pFVar15 = (FPCGPointValueRanges *)&pFVar16->DensityRange;
      pFVar10 = (FPCGPointValueRanges *)&pFVar18->DensityRange;
    } while (lVar19 != 0);
    iVar13 = (pFVar16->DensityRange).ElementView.BytesBetweenElements;
    iVar8 = (pFVar16->DensityRange).ElementView.NumElements;
    (pFVar18->DensityRange).ElementView.FirstElementPtr =
         (pFVar16->DensityRange).ElementView.FirstElementPtr;
    (pFVar18->DensityRange).ElementView.BytesBetweenElements = iVar13;
    (pFVar18->DensityRange).ElementView.NumElements = iVar8;
  }
  lVar21 = (longlong)(int)local_588;
  lVar19 = *(longlong *)((longlong)this + 8);
  iVar13 = *(int *)(lVar19 + 0x2b0);
  uVar14 = 0;
  if ((int)local_588 < iVar13) {
    uVar14 = ~local_588 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (local_598 = lVar21, local_590 = (longlong)iVar13,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    iVar13 = (*pcVar6)();
    return iVar13;
  }
  lVar22 = (longlong)(int)local_588;
  lVar3 = *(longlong *)((longlong)this + 8);
  plVar4 = *(longlong **)(*(longlong *)(lVar19 + 0x2a8) + lVar21 * 0x10);
  iVar13 = *(int *)(lVar3 + 0x2c0);
  uVar14 = 0;
  if ((int)local_588 < iVar13) {
    uVar14 = ~local_588 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (local_598 = lVar22, local_590 = (longlong)iVar13,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    iVar13 = (*pcVar6)();
    return iVar13;
  }
  lVar21 = (longlong)(int)local_588;
  lVar19 = *(longlong *)((longlong)this + 8);
  plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x2b8) + lVar22 * 0x10);
  iVar13 = *(int *)(lVar19 + 0x2d0);
  uVar14 = 0;
  if ((int)local_588 < iVar13) {
    uVar14 = ~local_588 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (local_598 = lVar21, local_590 = (longlong)iVar13,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    iVar13 = (*pcVar6)();
    return iVar13;
  }
  lVar22 = (longlong)(int)local_588;
  lVar3 = *(longlong *)((longlong)this + 8);
  local_568 = *(longlong **)(*(longlong *)(lVar19 + 0x2c8) + lVar21 * 0x10);
  iVar13 = *(int *)(lVar3 + 0x390);
  uVar14 = 0;
  if ((int)local_588 < iVar13) {
    uVar14 = ~local_588 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (local_598 = lVar22, local_590 = (longlong)iVar13,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    iVar13 = (*pcVar6)();
    return iVar13;
  }
  uVar20 = param_1 - *(int *)(*(longlong *)(lVar3 + 0x388) + lVar22 * 4);
  iVar13 = (int)plVar4[1];
  uVar23 = ~uVar20 >> 0x1f;
  uVar14 = 0;
  if ((int)uVar20 < iVar13) {
    uVar14 = uVar23;
  }
  if (uVar14 == 0) {
    local_598 = (longlong)(int)uVar20;
    local_590 = (longlong)iVar13;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      iVar13 = (*pcVar6)();
      return iVar13;
    }
  }
  local_560 = *plVar4;
  iVar13 = (int)plVar5[1];
  lVar19 = (longlong)(int)uVar20;
  uVar14 = 0;
  if ((int)uVar20 < iVar13) {
    uVar14 = uVar23;
  }
  if ((uVar14 == 0) &&
     (local_598 = lVar19, local_590 = (longlong)iVar13,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    iVar13 = (*pcVar6)();
    return iVar13;
  }
  plVar4 = local_568;
  pfVar24 = (float *)(lVar19 * 0x10 + *plVar5);
  uVar14 = 0;
  if ((int)uVar20 < (int)local_568[1]) {
    uVar14 = uVar23;
  }
  if ((uVar14 == 0) &&
     (local_598 = lVar19, local_590 = (longlong)(int)local_568[1],
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    iVar13 = (*pcVar6)();
    return iVar13;
  }
  local_348.BoundsMax.field0_0x0._8_4_ =
       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
  local_348.BoundsMax.field0_0x0._12_4_ =
       (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
  local_348.BoundsMin.field0_0x0._s_0.Y =
       (double)CONCAT44(local_348.BoundsMax.field0_0x0._12_4_ ^ uVar26,
                        local_348.BoundsMax.field0_0x0._8_4_ ^ uVar25);
  local_348.BoundsMin.field0_0x0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar26,
                        UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar25);
  local_348.BoundsMax.field0_0x0._0_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  local_348.BoundsMax.field0_0x0._4_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  local_348.BoundsMin.field0_0x0._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                              0x20) ^ uVar26,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar25);
  local_348.Density = 1.0;
  local_348._100_4_ = 0;
  local_348._padding_ = 0;
  local_348.BoundsMax.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_348.Seed = 0;
  local_348.MetadataEntry = -1;
  this_00 = UE::Math::TRotationMatrix<double>::MakeFromZ
                      (&local_278,(TVector<double> *)(*plVar4 + lVar19 * 0x18));
  this_01 = UE::Math::TMatrix<double>::Rotator(this_00,&local_518);
  pTVar17 = UE::Math::TRotator<double>::Quaternion(this_01,&local_4f8);
  local_528 = pTVar17->Z;
  dStack_520 = pTVar17->W;
  local_538 = pTVar17->X;
  dStack_530 = pTVar17->Y;
  uVar2 = *(undefined8 *)(local_560 + 8 + lVar19 * 0x18);
  puVar1 = (undefined4 *)(local_560 + lVar19 * 0x18);
  local_348.Transform.Translation.XY.m128d_f64[0]._0_4_ = *puVar1;
  local_348.Transform.Translation.XY.m128d_f64[0]._4_4_ = puVar1[1];
  local_348.Transform.Translation.ZW.m128d_f64[0] = *(double *)(local_560 + 0x10 + lVar19 * 0x18);
  local_348.Transform.Translation.XY.m128d_f64[1]._0_4_ = (undefined4)uVar2;
  local_348.Transform.Translation.XY.m128d_f64[1]._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_348.Transform.Translation.ZW.m128d_f64[1] = 0.0;
  local_348.Transform.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
  local_348.Transform.Scale3D.XY.m128d_f64[1]._4_4_ =
       (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
  local_348.Transform.Scale3D.XY.m128d_f64[0]._0_4_ =
       UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  local_348.Transform.Scale3D.XY.m128d_f64[0]._4_4_ =
       UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  local_348.Transform.Scale3D.ZW.m128d_f64[0] =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_348.Transform.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_348.Color.field0_0x0._s_0.X = (double)*pfVar24;
  local_348.Color.field0_0x0._s_0.Y = (double)pfVar24[1];
  local_348.Color.field0_0x0._s_0.Z = (double)pfVar24[2];
  local_348.Color.field0_0x0._s_0.W = (double)pfVar24[3];
  local_348.Steepness = *(float *)(*(longlong *)this + 0x1b8);
  local_348.Transform.Rotation.XY.m128d_f64[0] = local_538;
  local_348.Transform.Rotation.XY.m128d_f64[1] = dStack_530;
  local_348.Transform.Rotation.ZW.m128d_f64[0] = local_528;
  local_348.Transform.Rotation.ZW.m128d_f64[1] = dStack_520;
  (**(code **)((longlong)this + 0x10))(pfVar24,&local_348);
  local_558._s_0.X =
       (double)CONCAT44(local_348.Transform.Translation.XY.m128d_f64[0]._4_4_,
                        local_348.Transform.Translation.XY.m128d_f64[0]._0_4_);
  local_558._s_0.Y =
       (double)CONCAT44(local_348.Transform.Translation.XY.m128d_f64[1]._4_4_,
                        local_348.Transform.Translation.XY.m128d_f64[1]._0_4_);
  local_558._s_0.Z = local_348.Transform.Translation.ZW.m128d_f64[0];
  local_348.Seed = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)&local_558._s_0);
  FPCGPointValueRanges::SetFromPoint(&local_1f8,uVar20,&local_348);
  param_1 = param_1 + 1;
  if (local_584 <= param_1) {
    return local_580;
  }
  goto LAB_14cee5d10;
}

// operator() @ 14cee67b0

TVector<double> * __thiscall
``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::__l2::<lambda_2>::operator()'::__l2::
<lambda_2>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1,TVector<double> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  pauVar2 = *(undefined1 (**) [16])this;
  dVar8 = *(double *)pauVar2[5];
  dVar12 = *(double *)(pauVar2[4] + 8) * *(double *)pauVar2[4];
  dVar3 = __real_3ff0000000000000;
  if (dVar8 * dVar12 < 0.0) {
    dVar3 = __real_bff0000000000000;
  }
  dVar13 = dVar12 * dVar3 * (param_2->field0_0x0)._s_0.Z;
  dVar12 = *(double *)(pauVar2[4] + 8) * dVar8 * dVar3 * (param_2->field0_0x0)._s_0.X;
  dVar3 = *(double *)pauVar2[4] * dVar8 * dVar3 * (param_2->field0_0x0)._s_0.Y;
  dVar8 = dVar3 * dVar3 + dVar12 * dVar12 + dVar13 * dVar13;
  uVar4 = dVar3;
  uVar5 = dVar12;
  uVar14 = dVar13;
  if ((dVar8 != __real_3ff0000000000000) &&
     (uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar8)) {
    dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
    uVar5 = dVar12 * dVar8;
    uVar4 = dVar3 * dVar8;
    uVar14 = dVar13 * dVar8;
  }
  uVar17 = (undefined4)((ulonglong)uVar4 >> 0x20);
  auVar1 = pauVar2[1];
  dVar13 = *(double *)(pauVar2[1] + 8);
  auVar6 = *pauVar2;
  auVar18._8_4_ = (int)uVar4;
  auVar18._0_8_ = uVar5;
  auVar18._12_4_ = uVar17;
  dVar3 = auVar1._0_8_;
  auVar9 = blendpd(auVar6,auVar1,2);
  auVar19._0_8_ = auVar18._8_8_ * auVar6._0_8_ - auVar6._8_8_ * (double)uVar5;
  auVar19._8_8_ = (double)uVar14 * auVar6._8_8_ - dVar3 * (double)uVar4;
  auVar20._8_4_ = (int)uVar4;
  auVar20._0_8_ = uVar5;
  auVar20._12_4_ = uVar17;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar14;
  auVar6 = blendpd(auVar20,auVar6,2);
  auVar7._0_8_ = auVar6._0_8_ * dVar3 - auVar9._0_8_ * (double)uVar14;
  auVar7._8_8_ = auVar6._8_8_ * auVar1._8_8_ - auVar9._8_8_ * 0.0;
  auVar6 = *pauVar2;
  auVar20 = blendpd(auVar19,auVar7,2);
  auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  dVar8 = auVar19._8_8_ + auVar19._8_8_;
  dVar12 = auVar7._0_8_ + auVar7._0_8_;
  uVar17 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar15._8_4_ = SUB84(dVar12,0);
  auVar15._0_8_ = dVar8;
  auVar15._12_4_ = uVar17;
  auVar10._8_4_ = SUB84(dVar12,0);
  auVar10._0_8_ = dVar8;
  auVar10._12_4_ = uVar17;
  auVar20 = blendpd(auVar10,auVar21,2);
  auVar16._0_8_ = auVar15._8_8_ * auVar6._0_8_ - auVar6._8_8_ * dVar8;
  auVar16._8_8_ = auVar21._0_8_ * auVar6._8_8_ - dVar3 * dVar12;
  auVar9._8_4_ = SUB84(auVar16._8_8_,0);
  auVar9._0_8_ = auVar16._0_8_;
  auVar9._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
  auVar6 = blendpd(auVar6,auVar1,2);
  auVar11._0_8_ = auVar20._0_8_ * dVar3 - auVar6._0_8_ * auVar21._0_8_;
  auVar11._8_8_ = auVar20._8_8_ * auVar1._8_8_ - auVar6._8_8_ * auVar21._8_8_;
  auVar6 = blendpd(auVar16,auVar11,2);
  dVar3 = dVar12 * dVar13 + (double)uVar4 + auVar11._0_8_;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar8 * dVar13 + (double)uVar5 + auVar9._8_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       auVar21._0_8_ * dVar13 + (double)uVar14 + auVar6._0_8_;
  return __return_storage_ptr__;
}

// operator() @ 14cee69a0

void __thiscall
`PCGGeometryHelpers::ConvertDataToDynMeshes'::__l2::<lambda_2>::operator()
          (void *this,TBox<double> *param_1,TTransform<double> *param_2,FDynamicMesh3 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 local_198 [160];
  TVector<double>_u_0 local_f8;
  TQuaternion<double>_u_0 local_e0;
  TVector<double>_u_0 local_c0;
  bool local_a8;
  double local_88;
  TQuaternion<double>_u_0 local_80;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  
  dVar1 = (param_1->Max).field0_0x0._s_0.X;
  dVar2 = (param_1->Max).field0_0x0._s_0.Y;
  dVar3 = (param_1->Max).field0_0x0._s_0.Z;
  local_f8._s_0.X = (dVar1 + (param_1->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
  local_198._0_8_ = &___7FMinimalBoxMeshGenerator_Geometry_UE__6B_;
  local_c0._s_0.X = (dVar1 - (param_1->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
  local_198._8_8_ = (FScriptContainerElement *)0x0;
  local_f8._s_0.Z = ((param_1->Min).field0_0x0._s_0.Z + dVar3) * __real_3fe0000000000000;
  local_198._16_8_ = 0;
  local_c0._s_0.Z = (dVar3 - (param_1->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
  local_198._24_8_ = (FScriptContainerElement *)0x0;
  local_f8._s_0.Y = (dVar2 + (param_1->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
  local_198._32_8_ = 0;
  local_c0._s_0.Y = (dVar2 - (param_1->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
  local_198._40_8_ = (FScriptContainerElement *)0x0;
  local_198._48_8_ = 0;
  local_198._56_8_ = (FScriptContainerElement *)0x0;
  local_198._64_8_ = 0;
  local_198._72_8_ = (FScriptContainerElement *)0x0;
  local_198._80_8_ = 0;
  local_198._88_8_ = (FScriptContainerElement *)0x0;
  local_198._96_8_ = 0;
  local_198._104_8_ = (FScriptContainerElement *)0x0;
  local_198._112_8_ = 0;
  local_198._120_8_ = (FScriptContainerElement *)0x0;
  local_198._128_8_ = 0;
  local_198._136_8_ = (FScriptContainerElement *)0x0;
  local_198._144_8_ = 0;
  local_198[0x98] = false;
  local_e0._s_0.X = 0.0;
  local_e0._s_0.Y = 0.0;
  local_e0._s_0.Z = 0.0;
  local_a8 = true;
  local_e0._s_0.W = 1.0;
  UE::Geometry::FMinimalBoxMeshGenerator::Generate((FMinimalBoxMeshGenerator *)local_198);
  UE::Geometry::FDynamicMesh3::Copy(param_3,(FMeshShapeGenerator *)local_198);
  local_80._s_0.X = (param_2->Rotation).XY.m128d_f64[0];
  local_80._s_0.Y = (param_2->Rotation).XY.m128d_f64[1];
  local_80._s_0.Z = (param_2->Rotation).ZW.m128d_f64[0];
  local_80._s_0.W = (param_2->Rotation).ZW.m128d_f64[1];
  local_50 = (param_2->Translation).ZW.m128d_f64[0];
  local_88 = (param_2->Scale3D).ZW.m128d_f64[0];
  local_60 = (param_2->Translation).XY.m128d_f64[0];
  dStack_58 = (param_2->Translation).XY.m128d_f64[1];
  local_48 = (param_2->Scale3D).XY.m128d_f64[0];
  dStack_40 = (param_2->Scale3D).XY.m128d_f64[1];
  local_38 = local_88;
  MeshTransforms::ApplyTransform(param_3,(TTransformSRT3<double> *)&local_80._s_0,true,All);
  local_198._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((FScriptContainerElement *)local_198._136_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_198._136_8_);
  }
  if ((FScriptContainerElement *)local_198._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_198._120_8_);
  }
  if ((FScriptContainerElement *)local_198._104_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_198._104_8_);
  }
  if ((FScriptContainerElement *)local_198._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_198._88_8_);
  }
  if ((FScriptContainerElement *)local_198._72_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_198._72_8_);
  }
  if ((FScriptContainerElement *)local_198._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_198._56_8_);
  }
  if ((FScriptContainerElement *)local_198._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_198._40_8_);
  }
  if ((FScriptContainerElement *)local_198._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_198._24_8_);
  }
  if ((FScriptContainerElement *)local_198._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_198._8_8_);
  }
  return;
}

// operator() @ 14cee6c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall `PCGMeshSampler::PoissonSampling'::__l14::<lambda_2>::operator()(void *this)

{
  double dVar1;
  longlong lVar2;
  FProgressCancel *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  FPCGPoint *pFVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  bool bVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStackY_3b8 [32];
  ForAnyElementType local_388;
  undefined8 local_380;
  int local_378;
  longlong local_370;
  FMeshSurfacePointSampling local_368;
  FScriptContainerElement *local_298;
  TVector<double>_u_0 local_290;
  TVector<double>_u_0 local_278;
  double local_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  FPCGPointValueRanges local_1f8;
  ulonglong local_68;
  ulonglong uVar21;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId206,"FPCGMeshSamplerElement::Execute::PoissonSampling",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
               ,0xce);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId206);
  }
  lVar2 = *(longlong *)this;
  uVar15 = 0;
  local_368.SizeDistributionPower = __real_4000000000000000;
  local_368.MaxSampleRadius = 0.0;
  local_368.MaxSubSamplePoints = 50000000;
  local_368.SamplingMethodVersion = -1;
  local_368.SizeDistribution = Uniform;
  local_368.bUseVertexWeights = false;
  local_368.VertexWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.VertexWeights.ArrayNum = 0;
  local_368.VertexWeights.ArrayMax = 0;
  local_368.InterpretWeightMode = RadiusInterpWithFill;
  local_368.bInvertWeights = false;
  local_368.Result.Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.Result.Errors.ArrayNum = 0;
  local_368.Result.Errors.ArrayMax = 0;
  local_368.Result.Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.Result.Warnings.ArrayNum = 0;
  local_368.Result.Warnings.ArrayMax = 0;
  local_368.Result.Result = Success;
  local_368.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.Samples.ArrayNum = 0;
  local_368.Samples.ArrayMax = 0;
  local_368.Radii.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.Radii.ArrayNum = 0;
  local_368.Radii.ArrayMax = 0;
  local_368.TriangleIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.TriangleIDs.ArrayNum = 0;
  local_368.TriangleIDs.ArrayMax = 0;
  local_368.BarycentricCoords.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.BarycentricCoords.ArrayNum = 0;
  local_368.BarycentricCoords.ArrayMax = 0;
  local_368.SampleRadius = (double)*(float *)(lVar2 + 0x150);
  local_368.MaxSamples = *(uint *)(lVar2 + 0x154);
  local_368.RandomSeed =
       PCGHelpers::ComputeSeed(*(int *)((longlong)this + 0x10),*(int *)(lVar2 + 0x158));
  lVar2 = *(longlong *)this;
  local_368.SubSampleDensity = *(double *)(lVar2 + 0x160);
  if (local_368.SampleRadius < (double)*(float *)(lVar2 + 0x170)) {
    local_368.SizeDistribution = (ESizeDistribution)*(byte *)(lVar2 + 0x174);
    dVar1 = *(double *)(lVar2 + 0x178);
    uVar23 = SUB84(dVar1,0);
    uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
    if (__real_4024000000000000 <= dVar1) {
      uVar23 = SUB84(__real_4024000000000000,0);
      uVar24 = (undefined4)((ulonglong)__real_4024000000000000 >> 0x20);
    }
    if ((double)CONCAT44(uVar24,uVar23) <= __real_3ff0000000000000) {
      uVar23 = SUB84(__real_3ff0000000000000,0);
      uVar24 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    local_368.SizeDistributionPower = (double)CONCAT44(uVar24,uVar23);
    local_368.MaxSampleRadius = (double)*(float *)(lVar2 + 0x170);
  }
  uVar20 = *(uint *)((longlong)this + 0x20);
  lVar2 = *(longlong *)((longlong)this + 8);
  local_368.bComputeBarycentrics = true;
  pFVar3 = *(FProgressCancel **)(lVar2 + 0x380);
  uVar14 = 0;
  if ((int)uVar20 < *(int *)(lVar2 + 0x2a0)) {
    uVar14 = ~uVar20 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  UE::Geometry::FMeshSurfacePointSampling::ComputePoissonSampling
            (&local_368,
             *(FDynamicMesh3 **)
              (*(longlong *)(*(longlong *)(lVar2 + 0x298) + (longlong)(int)uVar20 * 8) + 0xb8),
             pFVar3);
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x378) == '\0') {
    uVar13 = local_368.Samples._8_8_ & 0xffffffff;
    local_388.Data = (FScriptContainerElement *)0x0;
    local_380 = 0;
    if (local_368.Samples.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13);
    }
    if (0 < local_368.Samples.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,0x10,local_368.Samples.ArrayNum,&local_388,0,(int *)((longlong)&local_380 + 4)
                );
      uVar13 = local_368.Samples._8_8_ & 0xffffffff;
    }
    if (0 < (int)uVar13) {
      local_370 = 0;
      uVar18 = uVar15;
      uVar19 = uVar15;
      uVar21 = uVar15;
      do {
        uVar14 = (uint)uVar15;
        uVar16 = ~uVar14 >> 0x1f;
        uVar20 = 0;
        if ((int)uVar14 < (int)uVar13) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        uVar20 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar20;
        local_298 = local_368.Samples.AllocatorInstance.Data;
        if ((uVar20 == 0x19) &&
           (uVar21 = 0, *(char *)(*(longlong *)((longlong)this + 8) + 0x378) != '\0'))
        goto LAB_14cee72fb;
        uVar20 = 0;
        if ((int)uVar14 < local_368.TriangleIDs.ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        local_378 = *(int *)(local_368.TriangleIDs.AllocatorInstance.Data + uVar18 * 4);
        uVar20 = 0;
        if ((int)uVar14 < local_368.BarycentricCoords.ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        local_290._s_0.X =
             (double)*(undefined8 *)(local_368.BarycentricCoords.AllocatorInstance.Data + uVar19);
        local_290._s_0.Y =
             (double)*(undefined8 *)
                      (local_368.BarycentricCoords.AllocatorInstance.Data + uVar19 + 8);
        local_290._s_0.Z =
             (double)*(undefined8 *)
                      (local_368.BarycentricCoords.AllocatorInstance.Data + uVar19 + 0x10);
        if ((int)local_380 == local_380._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10d0,&local_388,(int *)((longlong)&local_380 + 4));
          local_380 = CONCAT44(local_380._4_4_,iVar12);
        }
        pFVar17 = (FPCGPoint *)(local_388.Data + (longlong)(int)local_380 * 0xd0);
        local_380 = CONCAT44(local_380._4_4_,(int)local_380 + 1);
        memset(pFVar17,0,0xd0);
        pFVar17 = FPCGPoint::FPCGPoint(pFVar17);
        uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        uVar8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        uVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        local_248 = *(double *)(local_298 + local_370 + 0x18);
        dStack_240 = *(double *)(local_298 + local_370 + 0x18 + 8);
        local_238 = *(double *)(local_298 + local_370 + 0x28);
        dStack_230 = *(double *)(local_298 + local_370 + 0x28 + 8);
        dVar1 = *(double *)(local_298 + local_370);
        dVar6 = *(double *)(local_298 + local_370 + 8);
        local_250 = *(double *)(local_298 + local_370 + 0x10);
        (pFVar17->Transform).Rotation.XY.m128d_f64[0] = local_248;
        (pFVar17->Transform).Rotation.XY.m128d_f64[1] = dStack_240;
        (pFVar17->Transform).Rotation.ZW.m128d_f64[0] = local_238;
        (pFVar17->Transform).Rotation.ZW.m128d_f64[1] = dStack_230;
        (pFVar17->Transform).Translation.XY.m128d_f64[0] = dVar1;
        (pFVar17->Transform).Translation.XY.m128d_f64[1] = dVar6;
        (pFVar17->Transform).Translation.ZW.m128d_f64[0] = local_250;
        (pFVar17->Transform).Translation.ZW.m128d_f64[1] = 0.0;
        (pFVar17->Transform).Scale3D.XY.m128d_f64[0] = (double)uVar7;
        (pFVar17->Transform).Scale3D.XY.m128d_f64[1] = (double)uVar8;
        (pFVar17->Transform).Scale3D.ZW.m128d_f64[0] = (double)uVar9;
        (pFVar17->Transform).Scale3D.ZW.m128d_f64[1] = 0.0;
        pFVar17->Steepness = *(float *)(*(longlong *)this + 0x1b8);
        FPCGMeshSamplerContext::SetPointColorAndDensity
                  (*(FPCGMeshSamplerContext **)((longlong)this + 8),
                   *(_func___cdecl_void_FLinearColor_ptr_FPCGPoint_ptr **)((longlong)this + 0x18),
                   local_378,(TVector<double> *)&local_290._s_0,pFVar17,
                   *(int *)((longlong)this + 0x20));
        FPCGMeshSamplerContext::SetAttributeValues
                  (*(FPCGMeshSamplerContext **)((longlong)this + 8),
                   *(int *)(*(longlong *)this + 0x194),local_378,(TVector<double> *)&local_290._s_0,
                   &pFVar17->MetadataEntry,*(int *)((longlong)this + 0x20));
        local_278._s_0.X = (pFVar17->Transform).Translation.XY.m128d_f64[0];
        local_278._s_0.Y = (pFVar17->Transform).Translation.XY.m128d_f64[1];
        local_278._s_0.Z = (pFVar17->Transform).Translation.ZW.m128d_f64[0];
        iVar12 = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)&local_278._s_0);
        local_370 = local_370 + 0x38;
        uVar15 = (ulonglong)(uVar14 + 1);
        uVar18 = uVar18 + 1;
        pFVar17->Seed = iVar12;
        uVar19 = uVar19 + 0x18;
        uVar13 = local_368.Samples._8_8_ & 0xffffffff;
      } while ((int)(uVar14 + 1) < local_368.Samples.ArrayNum);
    }
    uVar16 = 0;
    uVar20 = *(uint *)((longlong)this + 0x20);
    lVar2 = *(longlong *)((longlong)this + 8);
    uVar14 = 0;
    if ((int)uVar20 < *(int *)(lVar2 + 0x300)) {
      uVar14 = ~uVar20 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0x2f8) + (longlong)(int)uVar20 * 8);
    (**(code **)(*plVar4 + 0x490))(plVar4,local_380 & 0xffffffff);
    uVar20 = *(uint *)((longlong)this + 0x20);
    lVar2 = *(longlong *)((longlong)this + 8);
    uVar14 = 0;
    if ((int)uVar20 < *(int *)(lVar2 + 0x300)) {
      uVar14 = ~uVar20 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0x2f8) + (longlong)(int)uVar20 * 8);
    (**(code **)(*plVar4 + 0x498))(plVar4,0xff);
    uVar20 = *(uint *)((longlong)this + 0x20);
    lVar2 = *(longlong *)((longlong)this + 8);
    uVar14 = 0;
    if ((int)uVar20 < *(int *)(lVar2 + 0x300)) {
      uVar14 = ~uVar20 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    FPCGPointValueRanges::FPCGPointValueRanges
              (&local_1f8,
               *(UPCGBasePointData **)(*(longlong *)(lVar2 + 0x2f8) + (longlong)(int)uVar20 * 8),
               false);
    if (0 < (int)local_380) {
      do {
        uVar20 = 0;
        if ((int)uVar16 < (int)local_380) {
          uVar20 = ~uVar16 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        FPCGPointValueRanges::SetFromPoint
                  (&local_1f8,uVar16,(FPCGPoint *)(local_388.Data + (longlong)(int)uVar16 * 0xd0));
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < (int)local_380);
    }
    *(undefined1 *)(*(longlong *)((longlong)this + 8) + 0x138) = 0;
LAB_14cee72fb:
    if (local_388.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data);
    }
  }
  if (local_368.BarycentricCoords.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.BarycentricCoords.AllocatorInstance.Data);
  }
  if (local_368.TriangleIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.TriangleIDs.AllocatorInstance.Data);
  }
  if (local_368.Radii.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Radii.AllocatorInstance.Data);
  }
  if (local_368.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Samples.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FGeometryWarning,int>
            ((FGeometryWarning *)local_368.Result.Warnings.AllocatorInstance.Data,
             local_368.Result.Warnings.ArrayNum);
  if ((FGeometryWarning *)local_368.Result.Warnings.AllocatorInstance.Data !=
      (FGeometryWarning *)0x0) {
    FMemory::Free(local_368.Result.Warnings.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FGeometryError,int>
            ((FGeometryError *)local_368.Result.Errors.AllocatorInstance.Data,
             local_368.Result.Errors.ArrayNum);
  if ((FGeometryError *)local_368.Result.Errors.AllocatorInstance.Data != (FGeometryError *)0x0) {
    FMemory::Free(local_368.Result.Errors.AllocatorInstance.Data);
  }
  if (local_368.VertexWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.VertexWeights.AllocatorInstance.Data);
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14cee7484

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGAppendMeshesFromPointsContext::`vector
   deleting destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
FPCGAppendMeshesFromPointsContext::_vector_deleting_destructor__adjustor_600__
          (FPCGAppendMeshesFromPointsContext *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPCGAppendMeshesFromPointsContext *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14cee7498

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGMeshSamplerContext::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
FPCGMeshSamplerContext::_vector_deleting_destructor__adjustor_600__
          (FPCGMeshSamplerContext *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FPCGMeshSamplerContext *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14cee74ac

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGStaticMeshToDynamicMeshContext::`vector
   deleting destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
FPCGStaticMeshToDynamicMeshContext::_vector_deleting_destructor__adjustor_600__
          (FPCGStaticMeshToDynamicMeshContext *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPCGStaticMeshToDynamicMeshContext *)&this[-1].field_0x30,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14cee74c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`PCGMeshSampler::PoissonSampling'::__l14::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`PCGMeshSampler::PoissonSampling'::`14'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`PCGMeshSampler::PoissonSampling'::__l14::<lambda_2>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMeshSampler::PoissonSampling'::__l12::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`PCGMeshSampler::PoissonSampling'::`12'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee75d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMeshSampler::PoissonSampling'::__l14::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`PCGMeshSampler::PoissonSampling'::`14'::<lambda_2>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7610

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGAppendMeshesFromPointsElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGAppendMeshesFromPointsElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7650

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGBooleanOperationElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGBooleanOperationElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7690

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCreateEmptyDynamicMeshElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGCreateEmptyDynamicMeshElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee76d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGDynamicMeshTransformElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGDynamicMeshTransformElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7710

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMergeDynamicMeshesElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGMergeDynamicMeshesElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7750

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMeshSamplerElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGMeshSamplerElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7790

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGPrimitiveCrossSectionElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGPrimitiveCrossSectionElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee77d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSaveDynamicMeshToAssetElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGSaveDynamicMeshToAssetElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7810

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSpawnDynamicMeshElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGSpawnDynamicMeshElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7850

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSplineToMeshElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGSplineToMeshElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7890

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGStaticMeshToDynamicMeshElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGStaticMeshToDynamicMeshElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee78d0

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
FPCGAppendMeshesFromPointsContext::_scalar_deleting_destructor_
          (FPCGAppendMeshesFromPointsContext *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->MeshToPointIndicesMapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MeshToPointIndicesMapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MeshToPointIndicesMapping);
  IPCGAsyncLoadingContext::~IPCGAsyncLoadingContext((IPCGAsyncLoadingContext *)&this->_padding_);
  FPCGContext::~FPCGContext((FPCGContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7950

void * __thiscall
FPCGAppendMeshesFromPointsElement::_scalar_deleting_destructor_
          (FPCGAppendMeshesFromPointsElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7980

void * __thiscall
FPCGBooleanOperationElement::_scalar_deleting_destructor_
          (FPCGBooleanOperationElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee79b0

void * __thiscall
FPCGCreateEmptyDynamicMeshElement::_scalar_deleting_destructor_
          (FPCGCreateEmptyDynamicMeshElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee79e0

void * __thiscall
FPCGDynamicMeshTransformElement::_scalar_deleting_destructor_
          (FPCGDynamicMeshTransformElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7a10

void * __thiscall
FPCGMergeDynamicMeshesElement::_scalar_deleting_destructor_
          (FPCGMergeDynamicMeshesElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7a40

void * __thiscall
FPCGMeshSamplerContext::_scalar_deleting_destructor_(FPCGMeshSamplerContext *this,uint param_1)

{
  ~FPCGMeshSamplerContext(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7a80

void * __thiscall
FPCGMeshSamplerElement::_scalar_deleting_destructor_(FPCGMeshSamplerElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7ab0

void * __thiscall
FPCGPrimitiveCrossSectionElement::_scalar_deleting_destructor_
          (FPCGPrimitiveCrossSectionElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7ae0

void * __thiscall
FPCGSaveDynamicMeshToAssetElement::_scalar_deleting_destructor_
          (FPCGSaveDynamicMeshToAssetElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7b10

void * __thiscall
FPCGSpawnDynamicMeshElement::_scalar_deleting_destructor_
          (FPCGSpawnDynamicMeshElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7b40

void * __thiscall
FPCGSplineToMeshElement::_scalar_deleting_destructor_(FPCGSplineToMeshElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7b70

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
FPCGStaticMeshToDynamicMeshContext::_scalar_deleting_destructor_
          (FPCGStaticMeshToDynamicMeshContext *this,uint param_1)

{
  IPCGAsyncLoadingContext::~IPCGAsyncLoadingContext((IPCGAsyncLoadingContext *)&this->field_0x258);
  FPCGContext::~FPCGContext((FPCGContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x288);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7bc0

void * __thiscall
FPCGStaticMeshToDynamicMeshElement::_scalar_deleting_destructor_
          (FPCGStaticMeshToDynamicMeshElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7bf0

void * __thiscall
UE::Geometry::FTriangulateCurvesOp::_scalar_deleting_destructor_
          (FTriangulateCurvesOp *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FTriangulateCurvesOp_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FTriangulateCurvesOp::FCurvePath,int>
            ((FCurvePath *)(this->Paths).AllocatorInstance.Data,(this->Paths).ArrayNum);
  pFVar1 = (this->Paths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7c60

void * __thiscall
IPCGDynamicMeshBaseElement::_scalar_deleting_destructor_
          (IPCGDynamicMeshBaseElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7c90

void * __thiscall
UPCGAppendMeshesFromPointsSettings::_scalar_deleting_destructor_
          (UPCGAppendMeshesFromPointsSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGAppendMeshesFromPointsSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->MeshAttribute).field_0x28,
             *(int *)&(this->MeshAttribute).field_0x30);
  pvVar1 = *(void **)&(this->MeshAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->StaticMesh).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7d30

void * __thiscall
UPCGBooleanOperationSettings::_scalar_deleting_destructor_
          (UPCGBooleanOperationSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7d90

void * __thiscall
UPCGCreateEmptyDynamicMeshSettings::_scalar_deleting_destructor_
          (UPCGCreateEmptyDynamicMeshSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7df0

void * __thiscall
UPCGDynamicMeshBaseSettings::_scalar_deleting_destructor_
          (UPCGDynamicMeshBaseSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7e50

void * __thiscall
UPCGDynamicMeshManagedComponent::_scalar_deleting_destructor_
          (UPCGDynamicMeshManagedComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGDynamicMeshManagedComponent__6B_;
  UPCGManagedComponent::~UPCGManagedComponent((UPCGManagedComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7eb0

void * __thiscall
UPCGDynamicMeshTransformSettings::_scalar_deleting_destructor_
          (UPCGDynamicMeshTransformSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7f10

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
UPCGGeometryBlueprintElement::_scalar_deleting_destructor_
          (UPCGGeometryBlueprintElement *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGGeometryBlueprintElement__6B_;
  UPCGBlueprintBaseElement::~UPCGBlueprintBaseElement((UPCGBlueprintBaseElement *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7f70

void * __thiscall
UPCGGetDynamicMeshDataSettings::_scalar_deleting_destructor_
          (UPCGGetDynamicMeshDataSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGGetDynamicMeshDataSettings__6B_;
  UPCGDataFromActorSettings::~UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee7fd0

void * __thiscall
UPCGMergeDynamicMeshesSettings::_scalar_deleting_destructor_
          (UPCGMergeDynamicMeshesSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee8030

void * __thiscall
UPCGMeshSamplerSettings::_scalar_deleting_destructor_(UPCGMeshSamplerSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGMeshSamplerSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->InputSource).field_0x28,*(int *)&(this->InputSource).field_0x30);
  pvVar1 = *(void **)&(this->InputSource).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->StaticMesh).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee80d0

void * __thiscall
UPCGPrimitiveCrossSectionSettings::_scalar_deleting_destructor_
          (UPCGPrimitiveCrossSectionSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGPrimitiveCrossSectionSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->ExtrusionVectorAttribute).field_0x28,
             *(int *)&(this->ExtrusionVectorAttribute).field_0x30);
  pvVar1 = *(void **)&(this->ExtrusionVectorAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee8160

void * __thiscall
UPCGSaveDynamicMeshToAssetSettings::_scalar_deleting_destructor_
          (UPCGSaveDynamicMeshToAssetSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGSaveDynamicMeshToAssetSettings__6B_;
  FGeometryScriptCopyMeshToAssetOptions::~FGeometryScriptCopyMeshToAssetOptions
            (&this->CopyMeshToAssetOptions);
  pFVar1 = (this->ExportParams).AssetPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExportParams).AssetName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee8200

void * __thiscall
UPCGSpawnDynamicMeshSettings::_scalar_deleting_destructor_
          (UPCGSpawnDynamicMeshSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGSpawnDynamicMeshSettings__6B_;
  pFVar1 = (this->PostProcessFunctionNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->TargetActor).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee8290

void * __thiscall
UPCGSplineToMeshSettings::_scalar_deleting_destructor_(UPCGSplineToMeshSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cee82f0

void * __thiscall
UPCGStaticMeshToDynamicMeshSettings::_scalar_deleting_destructor_
          (UPCGStaticMeshToDynamicMeshSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGStaticMeshToDynamicMeshSettings__6B_;
  DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
            ((TSoftObjectPtr<UMaterialInterface> *)(this->OverrideMaterials).AllocatorInstance.Data,
             (this->OverrideMaterials).ArrayNum);
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->StaticMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// ConvertDataToDynMeshes @ 14cee8c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
PCGGeometryHelpers::ConvertDataToDynMeshes
          (UPCGData *param_1,FPCGContext *param_2,
          TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *param_3,bool param_4,
          UGeometryScriptDebug *param_5)

{
  double *pdVar1;
  USceneComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  FDynamicMesh3 *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  UClass *pUVar18;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar19;
  UDynamicMesh *pUVar20;
  TBox<double> *pTVar21;
  UDynamicMesh *pUVar22;
  FBodyInstance *this;
  UBodySetup *pUVar23;
  longlong lVar24;
  UDynamicMesh *this_00;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar25;
  USceneComponent *pUVar26;
  uint uVar27;
  TTransform<double> *pTVar28;
  uint uVar29;
  FPCGCollisionWrapper *this_01;
  undefined8 *puVar30;
  float fVar31;
  undefined1 auStackY_a28 [32];
  undefined1 local_9d8;
  EGeometryScriptOutcomePins local_9d7;
  EGeometryScriptOutcomePins local_9d6;
  char local_9d5;
  char local_9d3;
  FWeakObjectPtr local_9d0;
  undefined1 local_9c8 [160];
  double local_928;
  int local_920;
  int local_91c;
  bool local_918;
  undefined1 local_908 [160];
  double local_868;
  double local_860;
  int local_858;
  undefined8 local_854;
  bool local_84c;
  UObject *local_848;
  FWeakObjectPtr local_840;
  UObject *local_838;
  FPCGContext *local_830;
  FDynamicMesh3 *local_828;
  FPCGCollisionWrapper *local_820;
  FGeometryScriptCopyMeshFromComponentOptions local_818;
  undefined1 local_808 [16];
  double local_7f8;
  double dStack_7f0;
  double local_7e8;
  double dStack_7e0;
  double local_7d8;
  double dStack_7d0;
  double dStack_7c8;
  double dStack_7c0;
  code *local_7b8;
  FDynamicMesh3 **local_7b0;
  double local_7a8;
  double dStack_7a0;
  double local_798;
  double local_790;
  double dStack_788;
  double local_780;
  double local_778;
  double dStack_770;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> local_768;
  TVector<double>_u_0 local_758;
  TQuaternion<double>_u_0 local_738;
  longlong local_718;
  longlong lStack_710;
  longlong local_708;
  FPCGCrc local_700;
  TObjectPtr<UPCGMetadata>_u_0 TStack_6f8;
  undefined8 local_6f0;
  TQuaternion<double>_u_0 local_6e8;
  longlong local_6c8;
  longlong lStack_6c0;
  longlong local_6b8;
  FPCGCrc local_6b0;
  TObjectPtr<UPCGMetadata>_u_0 TStack_6a8;
  undefined8 local_6a0;
  longlong local_698;
  int local_690;
  int local_68c;
  int local_688;
  longlong local_668;
  int local_660;
  int local_65c;
  int local_658;
  longlong local_628;
  undefined8 local_610;
  double local_5f8;
  longlong local_5e0;
  undefined8 local_5c8;
  TFunction<void___cdecl(int,UE::Geometry::FDynamicMesh3_const_&)> local_5b8 [2];
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  FDynamicMesh3 local_528;
  TVector<double>_u_0 local_2f8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  undefined1 local_2c8;
  TVector<double>_u_0 local_2c0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined1 local_290;
  TTransformSequence3<double> local_288;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  longlong local_118;
  int local_110;
  int local_10c;
  int local_108;
  undefined1 local_98 [56];
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_a28;
  if (param_1 != (UPCGData *)0x0) {
    local_9d3 = param_4;
    local_830 = param_2;
    pUVar18 = Z_Construct_UClass_UPCGPrimitiveData_NoRegister();
    iVar15 = (int)pUVar18->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar18->_padding_)) {
      pUVar18 = Z_Construct_UClass_UPCGVolumeData_NoRegister();
      iVar15 = (int)pUVar18->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar15) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
          &pUVar18->_padding_)) {
        pUVar18 = Z_Construct_UClass_UPCGCollisionShapeData_NoRegister();
        iVar15 = (int)pUVar18->_padding_;
        if ((iVar15 <= *(int *)(param_1->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
            &pUVar18->_padding_)) {
          iVar15 = (int)param_1[5]._padding_;
          if (iVar15 == 1) {
            local_2e0 = (double)*(float *)((longlong)&param_1[5]._padding_ + 4);
            local_2c8 = 1;
            local_2f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X - local_2e0;
            local_2e0 = local_2e0 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_2d0 = (double)*(float *)((longlong)&param_1[5]._padding_ + 4);
            local_2f8._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y -
                 (double)*(float *)&param_1[5]._padding_;
            local_2d8 = (double)*(float *)&param_1[5]._padding_ +
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_2f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z - local_2d0;
            local_2d0 = local_2d0 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            pUVar20 = FPCGContext::NewObject_AnyThread<UDynamicMesh>(param_2);
            iVar15 = param_3->ArrayNum;
            if (iVar15 == param_3->ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            param_3->ArrayNum = iVar15 + 1;
            *(UDynamicMesh **)((param_3->AllocatorInstance).Data + (longlong)iVar15 * 8) = pUVar20;
            `PCGGeometryHelpers::ConvertDataToDynMeshes'::__l2::<lambda_2>::operator()
                      (&local_9d8,(TBox<double> *)&local_2f8._s_0,
                       (TTransform<double> *)&param_1[3].Metadata,(pUVar20->Mesh).Ptr);
            return true;
          }
          if (iVar15 == 2) {
            local_9c8._0_8_ = &___7FSphereGenerator_Geometry_UE__6B_;
            local_928 = (double)*(float *)((longlong)&param_1[5]._padding_ + 4);
            local_9c8._8_8_ = (FScriptContainerElement *)0x0;
            local_9c8._16_8_ = 0;
            local_9c8._24_8_ = (FScriptContainerElement *)0x0;
            local_9c8._32_8_ = 0;
            local_9c8._40_8_ = (FScriptContainerElement *)0x0;
            local_9c8._48_8_ = 0;
            local_9c8._56_8_ = (FScriptContainerElement *)0x0;
            local_9c8._64_8_ = 0;
            local_9c8._72_8_ = (FScriptContainerElement *)0x0;
            local_9c8._80_8_ = 0;
            local_9c8._88_8_ = (FScriptContainerElement *)0x0;
            local_9c8._96_8_ = 0;
            local_9c8._104_8_ = (FScriptContainerElement *)0x0;
            local_9c8._112_8_ = 0;
            local_9c8._120_8_ = (FScriptContainerElement *)0x0;
            local_9c8._128_8_ = 0;
            local_9c8._136_8_ = (FScriptContainerElement *)0x0;
            local_9c8._144_8_ = 0;
            local_9c8[0x98] = false;
            local_918 = false;
            local_920 = 0x19;
            local_91c = 0x19;
            UE::Geometry::FMeshShapeGenerator::SetBufferSizes
                      ((FMeshShapeGenerator *)local_9c8,0x241,0x47e,0x288,0x241);
            UE::Geometry::FSphereGenerator::GenerateVertices((FSphereGenerator *)local_9c8);
            UE::Geometry::FSphereGenerator::GenerateUVVertices((FSphereGenerator *)local_9c8);
            UE::Geometry::FSphereGenerator::OutputEquatorialTriangles((FSphereGenerator *)local_9c8)
            ;
            UE::Geometry::FSphereGenerator::OutputPolarTriangles((FSphereGenerator *)local_9c8);
            pUVar20 = FPCGContext::NewObject_AnyThread<UDynamicMesh>(param_2);
            iVar15 = param_3->ArrayNum;
            if (iVar15 == param_3->ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            param_3->ArrayNum = iVar15 + 1;
            *(UDynamicMesh **)((param_3->AllocatorInstance).Data + (longlong)iVar15 * 8) = pUVar20;
            pFVar5 = (pUVar20->Mesh).Ptr;
            UE::Geometry::FDynamicMesh3::Copy(pFVar5,(FMeshShapeGenerator *)local_9c8);
            local_738._s_0.X = (double)param_1[3].Metadata.field0_0x0;
            local_738._s_0.Y = (double)*(undefined8 *)&param_1[3].bIsFullDataCrc;
            local_738._s_0.Z = (double)param_1[4]._padding_;
            local_738._s_0.W = (double)param_1[4]._padding_;
            local_708 = param_1[4]._padding_;
            local_6f0._0_1_ = param_1[4].bIsFullDataCrc;
            local_6f0._1_1_ = param_1[4].Usage;
            local_6f0._2_2_ = param_1[4]._padding_;
            local_6f0._4_4_ = param_1[4].CollectionRefCount;
            local_718 = param_1[4]._padding_;
            lStack_710 = param_1[4]._padding_;
            local_700 = param_1[4].Crc;
            TStack_6f8 = param_1[4].Metadata.field0_0x0;
            local_5e0 = local_708;
            local_5c8 = local_6f0;
            MeshTransforms::ApplyTransform
                      (pFVar5,(TTransformSRT3<double> *)&local_738._s_0,true,All);
            local_9c8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
            if ((FScriptContainerElement *)local_9c8._136_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_9c8._136_8_);
            }
            if ((FScriptContainerElement *)local_9c8._120_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_9c8._120_8_);
            }
            if ((FScriptContainerElement *)local_9c8._104_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_9c8._104_8_);
            }
            if ((FScriptContainerElement *)local_9c8._88_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_9c8._88_8_);
            }
            if ((FScriptContainerElement *)local_9c8._72_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_9c8._72_8_);
            }
            if ((FScriptContainerElement *)local_9c8._56_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_9c8._56_8_);
            }
            if ((FScriptContainerElement *)local_9c8._40_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_9c8._40_8_);
            }
            if ((FScriptContainerElement *)local_9c8._24_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_9c8._24_8_);
            }
            if ((FScriptContainerElement *)local_9c8._8_8_ == (FScriptContainerElement *)0x0) {
              return true;
            }
            FMemory::Free((void *)local_9c8._8_8_);
            return true;
          }
          if (iVar15 != 3) {
            return false;
          }
          fVar31 = *(float *)&param_1[5]._padding_ - *(float *)((longlong)&param_1[5]._padding_ + 4)
          ;
          local_868 = (double)*(float *)((longlong)&param_1[5]._padding_ + 4);
          local_908._0_8_ = &___7FCapsuleGenerator_Geometry_UE__6B_;
          local_908._8_8_ = (FScriptContainerElement *)0x0;
          local_908._16_8_ = 0;
          local_908._24_8_ = (FScriptContainerElement *)0x0;
          local_908._32_8_ = 0;
          if (fVar31 <= __real_38d1b717) {
            fVar31 = __real_38d1b717;
          }
          local_908._40_8_ = (FScriptContainerElement *)0x0;
          local_908._48_8_ = 0;
          local_908._56_8_ = (FScriptContainerElement *)0x0;
          local_908._64_8_ = 0;
          local_908._72_8_ = (FScriptContainerElement *)0x0;
          local_908._80_8_ = 0;
          local_908._88_8_ = (FScriptContainerElement *)0x0;
          local_908._96_8_ = 0;
          local_860 = (double)fVar31 + (double)fVar31;
          local_908._104_8_ = (FScriptContainerElement *)0x0;
          local_908._112_8_ = 0;
          local_908._120_8_ = (FScriptContainerElement *)0x0;
          local_908._128_8_ = 0;
          local_908._136_8_ = (FScriptContainerElement *)0x0;
          local_908._144_8_ = 0;
          local_908[0x98] = false;
          local_854._0_4_ = 0xc;
          local_854._4_4_ = 0;
          local_84c = false;
          local_858 = 0xc;
          UE::Geometry::FMeshShapeGenerator::SetBufferSizes
                    ((FMeshShapeGenerator *)local_908,0x10a,0x210,0x136,0x10a);
          UE::Geometry::FCapsuleGenerator::GenerateVertices((FCapsuleGenerator *)local_908);
          UE::Geometry::FCapsuleGenerator::GenerateUVVertices((FCapsuleGenerator *)local_908);
          UE::Geometry::FCapsuleGenerator::OutputEquatorialTriangles((FCapsuleGenerator *)local_908)
          ;
          UE::Geometry::FCapsuleGenerator::OutputPolarTriangles((FCapsuleGenerator *)local_908);
          pUVar20 = FPCGContext::NewObject_AnyThread<UDynamicMesh>(param_2);
          iVar15 = param_3->ArrayNum;
          if (iVar15 == param_3->ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar15 + 1;
          *(UDynamicMesh **)((param_3->AllocatorInstance).Data + (longlong)iVar15 * 8) = pUVar20;
          pFVar5 = (pUVar20->Mesh).Ptr;
          UE::Geometry::FDynamicMesh3::Copy(pFVar5,(FMeshShapeGenerator *)local_908);
          local_6e8._s_0.X = (double)param_1[3].Metadata.field0_0x0;
          local_6e8._s_0.Y = (double)*(undefined8 *)&param_1[3].bIsFullDataCrc;
          local_6e8._s_0.Z = (double)param_1[4]._padding_;
          local_6e8._s_0.W = (double)param_1[4]._padding_;
          local_6b8 = param_1[4]._padding_;
          local_6a0._0_1_ = param_1[4].bIsFullDataCrc;
          local_6a0._1_1_ = param_1[4].Usage;
          local_6a0._2_2_ = param_1[4]._padding_;
          local_6a0._4_4_ = param_1[4].CollectionRefCount;
          local_6c8 = param_1[4]._padding_;
          lStack_6c0 = param_1[4]._padding_;
          local_6b0 = param_1[4].Crc;
          TStack_6a8 = param_1[4].Metadata.field0_0x0;
          local_628 = local_6b8;
          local_610 = local_6a0;
          MeshTransforms::ApplyTransform(pFVar5,(TTransformSRT3<double> *)&local_6e8._s_0,true,All);
          local_908._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
          if ((FScriptContainerElement *)local_908._136_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_908._136_8_);
          }
          if ((FScriptContainerElement *)local_908._120_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_908._120_8_);
          }
          if ((FScriptContainerElement *)local_908._104_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_908._104_8_);
          }
          if ((FScriptContainerElement *)local_908._88_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_908._88_8_);
          }
          if ((FScriptContainerElement *)local_908._72_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_908._72_8_);
          }
          if ((FScriptContainerElement *)local_908._56_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_908._56_8_);
          }
          if ((FScriptContainerElement *)local_908._40_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_908._40_8_);
          }
          if ((FScriptContainerElement *)local_908._24_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_908._24_8_);
          }
          if ((FScriptContainerElement *)local_908._8_8_ == (FScriptContainerElement *)0x0) {
            return true;
          }
          FMemory::Free((void *)local_908._8_8_);
          return true;
        }
        pUVar18 = Z_Construct_UClass_UPCGCollisionWrapperData_NoRegister();
        pUVar20 = (UDynamicMesh *)0x0;
        iVar15 = (int)pUVar18->_padding_;
        if ((*(int *)(param_1->_padding_ + 0x38) < iVar15) ||
           (pUVar22 = (UDynamicMesh *)param_1,
           (longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
           &pUVar18->_padding_)) {
          pUVar22 = pUVar20;
        }
        if (pUVar22 == (UDynamicMesh *)0x0) {
          pUVar18 = Z_Construct_UClass_UPCGDynamicMeshData_NoRegister();
          iVar15 = (int)pUVar18->_padding_;
          if (*(int *)(param_1->_padding_ + 0x38) < iVar15) {
            return true;
          }
          if ((longlong *)
              *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
              &pUVar18->_padding_) {
            return true;
          }
          if (param_1[2]._padding_ == 0) {
            return true;
          }
          pUVar20 = FPCGContext::NewObject_AnyThread<UDynamicMesh>(param_2);
          iVar15 = param_3->ArrayNum;
          if (iVar15 == param_3->ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar15 + 1;
          *(UDynamicMesh **)((param_3->AllocatorInstance).Data + (longlong)iVar15 * 8) = pUVar20;
          UDynamicMesh::SetMesh(pUVar20,*(FDynamicMesh3 **)(param_1[2]._padding_ + 0xb8));
          return true;
        }
        plVar6 = *(longlong **)&pUVar22->MeshRealtimeUpdateEvent;
        this_01 = (FPCGCollisionWrapper *)&pUVar22[1]._padding_;
        local_9d5 = (char)pUVar22[1]._padding_;
        local_820 = this_01;
        if ((plVar6 == (longlong *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("PointData",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Helpers\\PCGGeometryHelpers.cpp"
                                ,0x11c,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          uVar13 = (*pcVar7)();
          return (bool)uVar13;
        }
        (**(code **)(*plVar6 + 0x500))(plVar6,&local_118);
        (**(code **)(*plVar6 + 0x510))(plVar6,&local_668);
        (**(code **)(*plVar6 + 0x518))(plVar6,&local_698);
        pUVar22 = pUVar20;
        this_00 = pUVar20;
        if (local_108 < 1) {
          return true;
        }
        do {
          uVar27 = (uint)pUVar22;
          uVar29 = ~uVar27 >> 0x1f;
          uVar16 = 0;
          if ((int)uVar27 < local_108) {
            uVar16 = uVar29;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            uVar13 = (*pcVar7)();
            return (bool)uVar13;
          }
          pTVar28 = (TTransform<double> *)
                    ((longlong)((int)uVar27 % local_10c) * (longlong)local_110 + local_118);
          this = FPCGCollisionWrapper::GetBodyInstance(this_01,uVar27);
          UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_528);
          uVar16 = 0;
          if (this == (FBodyInstance *)0x0) {
            uVar17 = uVar16;
            if ((int)uVar27 < local_688) {
              uVar17 = uVar29;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              uVar13 = (*pcVar7)();
              return (bool)uVar13;
            }
            puVar30 = (undefined8 *)
                      ((longlong)((int)uVar27 % local_68c) * (longlong)local_690 + local_698);
            if ((int)uVar27 < local_658) {
              uVar16 = uVar29;
            }
            if ((uVar16 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              uVar13 = (*pcVar7)();
              return (bool)uVar13;
            }
            local_290 = 1;
            lVar24 = (longlong)((int)uVar27 % local_65c) * (longlong)local_660;
            pdVar1 = (double *)(lVar24 + local_668);
            local_2c0._s_0.X = *pdVar1;
            local_2c0._s_0.Y = pdVar1[1];
            local_2c0._s_0.Z = *(double *)(lVar24 + 0x10 + local_668);
            local_2a8 = *puVar30;
            uStack_2a0 = puVar30[1];
            local_298 = puVar30[2];
            `PCGGeometryHelpers::ConvertDataToDynMeshes'::__l2::<lambda_2>::operator()
                      (&local_9d8,(TBox<double> *)&local_2c0._s_0,pTVar28,&local_528);
LAB_14cee9bc5:
            if (this_00 == (UDynamicMesh *)0x0) {
              this_00 = FPCGContext::NewObject_AnyThread<UDynamicMesh>(local_830);
              iVar15 = param_3->ArrayNum;
              if (iVar15 == param_3->ArrayMax) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
              }
              param_3->ArrayNum = iVar15 + 1;
              *(UDynamicMesh **)((param_3->AllocatorInstance).Data + (longlong)iVar15 * 8) = this_00
              ;
            }
            if (local_9d3 == '\0') {
              UDynamicMesh::SetMesh(this_00,&local_528);
              this_00 = pUVar20;
            }
            else {
              local_828 = &local_528;
              local_7b0 = &local_828;
              local_7b8 = UE::Core::Private::Function::
                          TFunctionRefCaller<`PCGGeometryHelpers::ConvertDataToDynMeshes'::__l81::<lambda_4>,void,UE::Geometry::FDynamicMesh3_&>
                          ::Call;
              UDynamicMesh::EditMesh
                        (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)
                                 &local_7b8,GeneralEdit,Unknown,false);
            }
          }
          else {
            pUVar23 = FBodyInstance::GetBodySetup(this);
            if (pUVar23 != (UBodySetup *)0x0) {
              local_798 = (pTVar28->Scale3D).ZW.m128d_f64[0];
              dStack_530 = (pTVar28->Scale3D).ZW.m128d_f64[1];
              local_808._0_8_ = (pTVar28->Rotation).XY.m128d_f64[0];
              local_808._8_8_ = (pTVar28->Rotation).XY.m128d_f64[1];
              local_7f8 = (pTVar28->Rotation).ZW.m128d_f64[0];
              dStack_7f0 = (pTVar28->Rotation).ZW.m128d_f64[1];
              dVar8 = (pTVar28->Scale3D).XY.m128d_f64[0];
              dVar9 = (pTVar28->Scale3D).XY.m128d_f64[1];
              local_7e8 = (pTVar28->Translation).XY.m128d_f64[0];
              dStack_7e0 = (pTVar28->Translation).XY.m128d_f64[1];
              local_7d8 = (pTVar28->Translation).ZW.m128d_f64[0];
              local_768 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)
                          UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
              dStack_7c0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
              local_288.Transforms.AllocatorInstance.SecondaryData =
                   (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0;
              local_288.Transforms.ArrayNum = 0;
              local_288.Transforms.ArrayMax = 2;
              local_778 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
              dStack_770 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
              dStack_7d0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
              dStack_7c8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
              local_7a8 = dVar8;
              dStack_7a0 = dVar9;
              local_790 = local_7e8;
              dStack_788 = dStack_7e0;
              local_780 = local_7d8;
              local_548 = dVar8;
              dStack_540 = dVar9;
              local_538 = local_798;
              if ((&local_288 <= (TTransformSequence3<double> *)local_808) &&
                 (local_808 < &local_288.Transforms.AllocatorInstance.SecondaryData)) {
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar12) {
                  pcVar7 = (code *)swi(3);
                  uVar13 = (*pcVar7)();
                  return (bool)uVar13;
                }
                uVar16 = local_288.Transforms.ArrayNum;
                if (local_288.Transforms.ArrayNum == local_288.Transforms.ArrayMax) {
                  uVar16 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TTransformSRT3<double>_>_>
                                     (0x850,(ForElementType<UE::Geometry::TTransformSRT3<double>_> *
                                            )&local_288,&local_288.Transforms.ArrayMax);
                }
              }
              local_288.Transforms.ArrayNum = uVar16 + 1;
              FVar25 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)&local_288;
              if (local_288.Transforms.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
                FVar25 = local_288.Transforms.AllocatorInstance.SecondaryData;
              }
              lVar24 = (longlong)(int)uVar16;
              bVar12 = local_9d5 != '\x01';
              pdVar1 = (double *)((longlong)FVar25 + lVar24 * 0x50);
              *pdVar1 = (double)local_808._0_8_;
              pdVar1[1] = (double)local_808._8_8_;
              *(double *)((uchar *)((longlong)FVar25 + 0x10) + lVar24 * 0x50) = local_7f8;
              *(double *)((uchar *)((longlong)FVar25 + 0x10) + lVar24 * 0x50 + 8) = dStack_7f0;
              *(double *)((uchar *)((longlong)FVar25 + 0x20) + lVar24 * 0x50) = local_7e8;
              *(double *)((uchar *)((longlong)FVar25 + 0x20) + lVar24 * 0x50 + 8) = dStack_7e0;
              *(double *)((uchar *)((longlong)FVar25 + 0x30) + lVar24 * 0x50) = local_7d8;
              *(double *)((uchar *)((longlong)FVar25 + 0x30) + lVar24 * 0x50 + 8) = dStack_7d0;
              *(double *)((uchar *)((longlong)FVar25 + 0x40) + lVar24 * 0x50) = dStack_7c8;
              *(double *)((uchar *)((longlong)FVar25 + 0x40) + lVar24 * 0x50 + 8) = dStack_7c0;
              if (bVar12) {
                local_5f8 = local_798;
                local_5b8[0]._0_8_ = 0;
                local_5b8[0]._40_8_ = 0;
                local_758._s_0.Z = local_798;
                local_758._s_0.X = dVar8;
                local_758._s_0.Y = dVar9;
                UE::Geometry::ConvertSimpleCollisionToMeshes
                          (&pUVar23->AggGeom,&local_528,&local_288,0x10,false,false,local_5b8,false,
                           (TVector<double> *)&local_758._s_0);
              }
              if (local_288.Transforms.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
                FMemory::Free((void *)local_288.Transforms.AllocatorInstance.SecondaryData);
              }
              if (bVar12) goto LAB_14cee9bc5;
            }
          }
          UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_528);
          pUVar22 = (UDynamicMesh *)(ulonglong)(uVar27 + 1);
          this_01 = local_820;
          if (local_108 <= (int)(uVar27 + 1)) {
            return true;
          }
        } while( true );
      }
      local_840 = (FWeakObjectPtr)param_1[4]._padding_;
      TVar19 = FWeakObjectPtr::Pin(&local_840);
                    /* WARNING: Load size is inaccurate */
      pUVar4 = *TVar19.Object;
      *(undefined8 *)TVar19.Object = 0;
      if (local_838 != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(local_838);
      }
      if (pUVar4 == (UObject *)0x0) {
        pTVar21 = (TBox<double> *)(**(code **)(param_1->_padding_ + 0x388))(param_1,local_98);
        pUVar20 = FPCGContext::NewObject_AnyThread<UDynamicMesh>(param_2);
        iVar15 = param_3->ArrayNum;
        if (iVar15 == param_3->ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar15 + 1;
        *(UDynamicMesh **)((param_3->AllocatorInstance).Data + (longlong)iVar15 * 8) = pUVar20;
        `PCGGeometryHelpers::ConvertDataToDynMeshes'::__l2::<lambda_2>::operator()
                  (&local_9d8,pTVar21,&UE::Math::TTransform<double>::Identity,(pUVar20->Mesh).Ptr);
        return true;
      }
      local_178.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_178.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_178.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_178.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_178.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_178.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_178.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_178.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_178.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_178.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_178.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_178.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_178.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_178.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_178.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_178.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_178.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_178.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      pUVar20 = FPCGContext::NewObject_AnyThread<UDynamicMesh>(param_2);
      iVar15 = param_3->ArrayNum;
      if (iVar15 == param_3->ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar15 + 1;
      *(UDynamicMesh **)((param_3->AllocatorInstance).Data + (longlong)iVar15 * 8) = pUVar20;
      UGeometryScriptLibrary_SceneUtilityFunctions::CopyCollisionMeshesFromObject
                (*(UObject **)&pUVar4[0x12].field_0x8,pUVar20,true,&local_178,&local_9d6,false,0x19,
                 param_5);
      if (local_9d6 == Success) {
        UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
        return true;
      }
      TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_>::Pop(param_3,Default);
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
    }
    else {
      local_9d0 = (FWeakObjectPtr)param_1[4]._padding_;
      bVar12 = FWeakObjectPtr::IsValid(&local_9d0);
      if (bVar12) {
        TVar19 = FWeakObjectPtr::Pin(&local_9d0);
        pUVar26 = (USceneComponent *)0x0;
        pUVar2 = *(USceneComponent **)TVar19.Object;
        *(undefined8 *)TVar19.Object = 0;
        if (local_848 != (UObject *)0x0) {
          UEStrongObjectPtr_Private::ReleaseUObject(local_848);
        }
        if (pUVar2 != (USceneComponent *)0x0) {
          UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
          pUVar26 = pUVar2;
        }
        iVar15 = Constants::CopyMeshFromComponentOptions.RequestedLOD.LODIndex;
        uVar10 = Constants::CopyMeshFromComponentOptions._0_8_;
        if (pUVar26 != (USceneComponent *)0x0) {
          local_1d8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_1d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_1d8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_1d8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_1d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_1d8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_1d8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_1d8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_1d8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_1d8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_1d8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1d8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_1d8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_1d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1d8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_1d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          pUVar20 = FPCGContext::NewObject_AnyThread<UDynamicMesh>(param_2);
          iVar14 = param_3->ArrayNum;
          if (iVar14 == param_3->ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          pFVar3 = (param_3->AllocatorInstance).Data;
          param_3->ArrayNum = iVar14 + 1;
          uVar11 = Constants::CopyMeshFromComponentOptions._0_8_;
          Constants::CopyMeshFromComponentOptions.bWantNormals = SUB81(uVar10,0);
          Constants::CopyMeshFromComponentOptions.bWantTangents = SUB81(uVar10,1);
          Constants::CopyMeshFromComponentOptions.bWantInstanceColors = SUB81(uVar10,2);
          Constants::CopyMeshFromComponentOptions._3_1_ = SUB81(uVar10,3);
          Constants::CopyMeshFromComponentOptions.RequestedLOD.LODType = SUB81(uVar10,4);
          Constants::CopyMeshFromComponentOptions.RequestedLOD._1_3_ = SUB83(uVar10,5);
          local_818.bWantNormals = Constants::CopyMeshFromComponentOptions.bWantNormals;
          local_818.bWantTangents = Constants::CopyMeshFromComponentOptions.bWantTangents;
          local_818.bWantInstanceColors =
               Constants::CopyMeshFromComponentOptions.bWantInstanceColors;
          local_818._3_1_ = Constants::CopyMeshFromComponentOptions._3_1_;
          local_818.RequestedLOD.LODType =
               Constants::CopyMeshFromComponentOptions.RequestedLOD.LODType;
          local_818.RequestedLOD._1_3_ = Constants::CopyMeshFromComponentOptions.RequestedLOD._1_3_;
          Constants::CopyMeshFromComponentOptions._0_8_ = uVar11;
          *(UDynamicMesh **)(pFVar3 + (longlong)iVar14 * 8) = pUVar20;
          local_818.RequestedLOD.LODIndex = iVar15;
          UGeometryScriptLibrary_SceneUtilityFunctions::CopyMeshFromComponent
                    (pUVar26,pUVar20,&local_818,true,&local_1d8,&local_9d7,param_5);
          if (local_9d7 != Success) {
            TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_>::Pop(param_3,Default);
            return false;
          }
        }
        return true;
      }
    }
  }
  return false;
}

// EmptyLinkFunctionForGeneratedCodePCGAppendMeshesFromPoints @ 14ceeafd0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGAppendMeshesFromPoints(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGBooleanOperation @ 14ceeafe0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGBooleanOperation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGCreateEmptyDynamicMesh @ 14ceeaff0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGCreateEmptyDynamicMesh(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDynamicMeshBaseElement @ 14ceeb000

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDynamicMeshBaseElement(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDynamicMeshManagedComponent @ 14ceeb010

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDynamicMeshManagedComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDynamicMeshTransform @ 14ceeb020

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDynamicMeshTransform(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGGeometryBlueprintElement @ 14ceeb030

void __cdecl EmptyLinkFunctionForGeneratedCodePCGGeometryBlueprintElement(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGGeometryScriptInterop_init @ 14ceeb040

void __cdecl EmptyLinkFunctionForGeneratedCodePCGGeometryScriptInterop_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGGetDynamicMeshData @ 14ceeb050

void __cdecl EmptyLinkFunctionForGeneratedCodePCGGetDynamicMeshData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGMergeDynamicMeshes @ 14ceeb060

void __cdecl EmptyLinkFunctionForGeneratedCodePCGMergeDynamicMeshes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGMeshSampler @ 14ceeb070

void __cdecl EmptyLinkFunctionForGeneratedCodePCGMeshSampler(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGPrimitiveCrossSection @ 14ceeb080

void __cdecl EmptyLinkFunctionForGeneratedCodePCGPrimitiveCrossSection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSaveDynamicMeshToAsset @ 14ceeb090

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSaveDynamicMeshToAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSpawnDynamicMesh @ 14ceeb0a0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSpawnDynamicMesh(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSplineToMesh @ 14ceeb0b0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSplineToMesh(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGStaticMeshToDynamicMeshElement @ 14ceeb0c0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGStaticMeshToDynamicMeshElement(void)

{
  return;
}

// GeometryScriptDebugToPCGLog @ 14cef1c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
PCGGeometryHelpers::GeometryScriptDebugToPCGLog(FPCGContext *param_1,UGeometryScriptDebug *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FText *pFVar6;
  undefined1 local_res8 [8];
  
  if ((param_1 == (FPCGContext *)0x0) || (param_2 == (UGeometryScriptDebug *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context && Debug",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Helpers\\PCGGeometryHelpers.cpp"
                       ,0x28,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = (param_2->Messages).AllocatorInstance.Data;
  iVar2 = (param_2->Messages).ArrayNum;
  pFVar6 = (FText *)(pFVar5 + 8);
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((param_2->Messages).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FGeometryScriptDebugMessage_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*pFVar5 == (FScriptContainerElement)0x0) {
      PCGLog::LogErrorOnGraph(pFVar6,param_1);
      pFVar5 = pFVar5 + 0x18;
      pFVar6 = (FText *)&pFVar6[1].Flags;
    }
    else {
      PCGLog::LogWarningOnGraph(pFVar6,param_1);
      pFVar5 = pFVar5 + 0x18;
      pFVar6 = (FText *)&pFVar6[1].Flags;
    }
  }
  return;
}

// GetDynamicMeshDataFromActor @ 14cef1e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
PCGGetDynamicMeshData::GetDynamicMeshDataFromActor
          (FPCGContext *param_1,FPCGGetDataFunctionRegistryParams *param_2,AActor *param_3,
          FPCGGetDataFunctionRegistryOutput *param_4)

{
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  FName *pFVar4;
  longlong *plVar5;
  FPCGGetDataFunctionRegistryOutput *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UClass *pUVar13;
  AActor *pAVar14;
  longlong lVar15;
  ulonglong uVar16;
  UPCGDynamicMeshData *this;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar17;
  UDynamicMesh *pUVar18;
  byte bVar19;
  ForAnyElementType FVar20;
  ulonglong uVar21;
  FPCGDataPtrWrapper *this_00;
  uint uVar22;
  ForElementType<unsigned_int> FVar23;
  FScriptContainerElement *pFVar24;
  ulonglong uVar25;
  wchar_t *pwVar26;
  undefined8 *puVar27;
  uint uVar28;
  ulonglong uVar29;
  FName *this_01;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [8];
  FString local_150;
  uint local_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_138;
  undefined4 local_130;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_118;
  FName *local_f0;
  FPCGContext *local_e8;
  longlong *local_e0;
  FPCGGetDataFunctionRegistryOutput *local_d8;
  FSparseArrayAllocationInfo local_d0;
  void *local_c0 [3];
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  int local_80;
  uint local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_2->DataTypeFilter != DynamicMesh) {
    return false;
  }
  local_e8 = param_1;
  local_d8 = param_4;
  if ((param_3 == (AActor *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InActor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGGetDynamicMeshData.cpp"
                         ,0x2f,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  if ((param_2->ComponentSelector != (FPCGComponentSelectorSettings *)0x0) &&
     (bVar7 = FPCGComponentSelectorSettings::FilterActor(param_2->ComponentSelector,param_3), !bVar7
     )) {
    return false;
  }
  if (param_3 != (AActor *)0x0) {
    pUVar13 = Z_Construct_UClass_ADynamicMeshActor_NoRegister();
    iVar12 = (int)pUVar13->_padding_;
    if ((iVar12 <= *(int *)(param_3->_padding_ + 0x38)) &&
       (pAVar14 = param_3,
       (longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar12 * 8)
       == &pUVar13->_padding_)) goto LAB_14cef1ee1;
  }
  pAVar14 = (AActor *)0x0;
LAB_14cef1ee1:
  if (((pAVar14 == (AActor *)0x0) ||
      (local_e0 = (longlong *)pAVar14[1]._padding_, local_e0 == (longlong *)0x0)) ||
     (lVar15 = (**(code **)(*local_e0 + 0xb48))(local_e0), lVar15 == 0)) {
    return false;
  }
  iVar12 = (param_3->Tags).ArrayNum;
  this_01 = (FName *)(param_3->Tags).AllocatorInstance.Data;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_f0 = this_01 + iVar12;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  do {
    pFVar4 = local_f0;
    puVar27 = (undefined8 *)0x0;
    if ((param_3->Tags).ArrayNum != iVar12) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_158);
    }
    if (this_01 == pFVar4) {
      this = FPCGContext::NewObject_AnyThread<UPCGDynamicMeshData>(local_e8);
      plVar5 = local_e0;
      pTVar17 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
                (**(code **)(*local_e0 + 0xa90))(local_e0,local_c0);
      pUVar18 = (UDynamicMesh *)(**(code **)(*plVar5 + 0xb48))(plVar5);
      UPCGDynamicMeshData::Initialize(this,pUVar18,false,pTVar17);
      if (local_c0[0] != (void *)0x0) {
        FMemory::Free(local_c0[0]);
      }
      pFVar6 = local_d8;
      piVar1 = &(local_d8->Collection).TaggedData.ArrayMax;
      iVar12 = (local_d8->Collection).TaggedData.ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)local_d8,piVar1);
      }
      (pFVar6->Collection).TaggedData.ArrayNum = iVar12 + 1;
      this_00 = (FPCGDataPtrWrapper *)
                ((pFVar6->Collection).TaggedData.AllocatorInstance.Data + (longlong)iVar12 * 0x78);
      this_00[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_00[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_00[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_00[5].WeakData.WeakPtr.ObjectSerialNumber = 0;
      *(undefined2 *)((longlong)&this_00[6].WeakData.WeakPtr.ObjectIndex + 2) = 0;
      (this_00->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
      (this_00->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
      *(undefined8 *)
       &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1))->Elements =
           0;
      this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
      this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
      *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
      *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
      this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_00[5].WeakData.WeakPtr.ObjectIndex = 0;
      this_00[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      *(undefined2 *)&this_00[6].WeakData.WeakPtr.ObjectIndex = 0x100;
      *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
      *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = 0xffffffff;
      FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)this);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1),
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_a8);
      local_60 = 0;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_a8,0,local_a8._8_4_);
      iVar12 = SUB84(local_a8._8_8_,4);
      local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
      if (iVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
      }
      local_78 = -1;
      local_74 = 0;
      local_80 = 0;
      if (0x80 < local_7c) {
        local_7c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
      }
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_88);
      }
      if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_a8._0_8_);
      }
      return true;
    }
    ::FName::ToString(this_01,&local_150);
    if (local_74 == 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x18,8,1,(ForAnyElementType *)local_a8,(int *)(local_a8 + 8),
                          (int *)(local_a8 + 0xc));
      iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                         ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),1);
      FVar23 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar23 = local_88;
      }
      bVar19 = (byte)iVar10 & 0x1f;
      if (iVar10 < 0) {
        iVar10 = iVar10 + 0x1f;
        bVar19 = bVar19 - 0x20;
      }
      puVar2 = (uint *)((longlong)FVar23 + (longlong)(iVar10 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar19 & 0x1f));
      iVar10 = local_78;
    }
    else {
      local_74 = local_74 + -1;
      iVar10 = *(int *)(local_a8._0_8_ + (longlong)local_78 * 0x18 + 4);
      iVar11 = local_78;
      if (local_74 != 0) {
        *(undefined4 *)(local_a8._0_8_ + (longlong)iVar10 * 0x18) = 0xffffffff;
      }
    }
    local_78 = iVar10;
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a8,&local_d0,iVar11);
    if (local_d0.Pointer != (undefined8 *)0x0) {
      *(undefined8 *)local_d0.Pointer = 0;
      *(FScriptContainerElement **)local_d0.Pointer = local_150.Data.AllocatorInstance.Data;
      local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)((longlong)local_d0.Pointer + 8) = local_150.Data.ArrayNum;
      *(int *)((longlong)local_d0.Pointer + 0xc) = local_150.Data.ArrayMax;
      local_150.Data.ArrayNum = 0;
      local_150.Data.ArrayMax = 0;
      *(undefined4 *)((longlong)local_d0.Pointer + 0x10) = 0xffffffff;
      puVar27 = local_d0.Pointer;
    }
    if (*(int *)(puVar27 + 1) == 0) {
      pwVar26 = L"";
      iVar11 = 0;
    }
    else {
      pwVar26 = (wchar_t *)*puVar27;
      iVar11 = *(int *)(puVar27 + 1) + -1;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar26);
    if ((local_a8._8_4_ - local_74 != 1) && (local_a8._8_4_ != local_74)) {
      FVar20.Data = local_70;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FVar20.Data = local_68.Data;
      }
      iVar11 = *(int *)(FVar20.Data + (ulonglong)(local_60 - 1 & uVar9) * 4);
      pFVar24 = (FScriptContainerElement *)local_a8._0_8_;
      while (iVar11 != -1) {
        lVar15 = (longlong)iVar11 * 0x18;
        iVar10 = *(int *)(pFVar24 + lVar15 + 8);
        if (iVar10 == *(int *)(puVar27 + 1)) {
          if (1 < iVar10) {
            iVar10 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)(pFVar24 + lVar15),(wchar_t *)*puVar27);
            bVar7 = iVar10 == 0;
            pFVar24 = (FScriptContainerElement *)local_a8._0_8_;
            goto LAB_14cef211f;
          }
LAB_14cef219e:
          if (iVar11 != -1) {
            if (*(void **)(pFVar24 + (longlong)iVar11 * 0x18) != (void *)0x0) {
              FMemory::Free(*(void **)(pFVar24 + (longlong)iVar11 * 0x18));
            }
            memmove(pFVar24 + (longlong)iVar11 * 0x18,puVar27,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_a8,local_d0.Index,1);
            goto LAB_14cef23ea;
          }
          break;
        }
        bVar7 = iVar10 + *(int *)(puVar27 + 1) == 1;
LAB_14cef211f:
        if (bVar7) goto LAB_14cef219e;
        iVar11 = *(int *)(pFVar24 + lVar15 + 0x10);
      }
    }
    uVar21 = 0;
    uVar28 = 1;
    uVar22 = local_a8._8_4_ - local_74;
    if (3 < uVar22) {
      uVar25 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar28 = 1 << ((byte)lVar15 & 0x1f);
    }
    if (((int)uVar22 < 1) || ((int)uVar28 <= (int)local_60)) {
      uVar9 = local_60 - 1 & uVar9;
      *(uint *)((longlong)puVar27 + 0x14) = uVar9;
      FVar20.Data = local_70;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FVar20.Data = local_68.Data;
      }
      lVar15 = (longlong)(int)(local_60 - 1 & uVar9);
      *(undefined4 *)(puVar27 + 2) = *(undefined4 *)(FVar20.Data + lVar15 * 4);
      *(int *)(FVar20.Data + lVar15 * 4) = local_d0.Index;
    }
    else {
      local_60 = uVar28;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
      }
      if (uVar28 != 0) {
        uVar9 = uVar28;
        if (uVar28 < 2) {
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            uVar9 = 0;
            goto LAB_14cef21e7;
          }
        }
        else {
LAB_14cef21e7:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar9,4);
        }
        if (0 < (int)uVar28) {
          uVar29 = (ulonglong)uVar28;
          uVar25 = uVar21;
          do {
            FVar20.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar20.Data = local_68.Data;
            }
            uVar16 = uVar25 & (longlong)(int)uVar28 - 1U;
            uVar25 = uVar25 + 1;
            *(undefined4 *)(FVar20.Data + uVar16 * 4) = 0xffffffff;
            uVar29 = uVar29 - 1;
          } while (uVar29 != 0);
        }
      }
      if (local_60 != 0) {
        pTStack_138 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
        local_140 = 0;
        uStack_13c = 1;
        uStack_12c = 0;
        if (local_80 != 0) {
          FVar23 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
          if (local_88 != (ForElementType<unsigned_int>)0x0) {
            FVar23 = local_88;
          }
          uVar9 = *(uint *)FVar23;
          uVar22 = 0;
          uVar25 = uVar21;
          while (uVar9 == 0) {
            uVar22 = (int)uVar25 + 0x20;
            uVar25 = (ulonglong)uVar22;
            iVar11 = (int)uVar21;
            local_140 = iVar11 + 1;
            uVar21 = (ulonglong)local_140;
            uStack_12c = (ulonglong)uVar22 << 0x20;
            if ((int)(local_80 + -1 + (local_80 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_140) {
              uStack_12c = CONCAT44(uVar22,local_80);
              goto LAB_14cef22f1;
            }
            uVar9 = ((uint *)((longlong)FVar23 + 4))[iVar11];
          }
          uStack_13c = -uVar9 & uVar9;
          uVar21 = (ulonglong)uStack_13c * 2 + 1;
          lVar15 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar11 = (int)lVar15 + -1 + uVar22;
          if (local_80 < iVar11) {
            iVar11 = local_80;
          }
          uStack_12c._4_4_ = (int)((ulonglong)uStack_12c >> 0x20);
          uStack_12c = CONCAT44(uStack_12c._4_4_,iVar11);
        }
LAB_14cef22f1:
        local_130 = 0xffffffff;
        local_120 = (longlong *)local_a8;
        local_118._padding_ = CONCAT44(uStack_13c,local_140);
        local_118.UnvisitedBitMask = 0xffffffff;
        local_118.CurrentBitIndex = (int)uStack_12c;
        local_118.BaseBitIndex = uStack_12c._4_4_;
        local_118._28_4_ = uStack_124;
        local_118.Array = pTStack_138;
        if ((int)uStack_12c < local_80) {
          do {
            iVar10 = local_118.CurrentBitIndex;
            puVar27 = (undefined8 *)(*local_120 + (longlong)local_118.CurrentBitIndex * 0x18);
            iVar11 = *(int *)(*local_120 + 8 + (longlong)local_118.CurrentBitIndex * 0x18);
            if (iVar11 == 0) {
              pwVar26 = L"";
              uVar9 = 0;
            }
            else {
              pwVar26 = (wchar_t *)*puVar27;
              uVar9 = iVar11 - 1;
            }
            uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar9,pwVar26);
            uVar9 = local_60 - 1 & uVar9;
            *(uint *)((longlong)puVar27 + 0x14) = uVar9;
            FVar20.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar20.Data = local_68.Data;
            }
            lVar15 = (longlong)(int)(local_60 - 1 & uVar9);
            *(undefined4 *)(puVar27 + 2) = *(undefined4 *)(FVar20.Data + lVar15 * 4);
            *(int *)(FVar20.Data + lVar15 * 4) = iVar10;
            local_118.UnvisitedBitMask = local_118.UnvisitedBitMask & ~local_118._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_118);
          } while (local_118.CurrentBitIndex < (local_118.Array)->NumBits);
        }
      }
    }
LAB_14cef23ea:
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    this_01 = this_01 + 1;
  } while( true );
}

// GetDynamicMeshDataFromComponent @ 14cef25d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __cdecl
PCGGetDynamicMeshData::GetDynamicMeshDataFromComponent
          (FPCGContext *param_1,FPCGGetDataFunctionRegistryParams *param_2,UActorComponent *param_3,
          FPCGGetDataFunctionRegistryOutput *param_4)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this;
  FName *pFVar1;
  int *piVar2;
  char cVar3;
  UDynamicMesh *pUVar4;
  UPCGNode *this_00;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UClass *pUVar9;
  UPCGDynamicMeshData *this_01;
  UPCGSettings *pUVar10;
  TObjectPtr<UPCGSettings>_u_0 TVar11;
  FPCGTaggedData *pFVar12;
  FName *pFVar13;
  FPCGDataPtrWrapper *this_02;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined1 auStackY_198 [32];
  <lambda_1> local_158;
  FToMeshOptions local_150;
  TObjectPtr<UPCGSettings>_u_0 local_140;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_138;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_128;
  FText local_110;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_3 == (UActorComponent *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InActorComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGGetDynamicMeshData.cpp"
                         ,0x53,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if (param_2->DataTypeFilter != DynamicMesh) {
    return false;
  }
  if (param_2->bIgnorePCGGeneratedComponents != false) {
    pFVar13 = (FName *)(param_3->ComponentTags).AllocatorInstance.Data;
    pFVar1 = pFVar13 + (param_3->ComponentTags).ArrayNum;
    for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 1) {
      if (*pFVar13 == PCGHelpers::DefaultPCGTag) {
        return false;
      }
    }
  }
  if (param_3 == (UActorComponent *)0x0) {
LAB_14cef2690:
    param_3 = (UActorComponent *)0x0;
  }
  else {
    pUVar9 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar8 = (int)pUVar9->_padding_;
    if ((*(int *)(param_3->_padding_ + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar8 * 8)
        != &pUVar9->_padding_)) goto LAB_14cef2690;
  }
  if ((USceneComponent *)param_3 == (USceneComponent *)0x0) {
    return false;
  }
  this_01 = FPCGContext::NewObject_AnyThread<UPCGDynamicMeshData>(param_1);
  pUVar4 = (this_01->DynamicMesh).field0_0x0.DebugPtr;
  this_01->bDynamicMeshBoundsAreDirty = true;
  this_01->bDynamicMeshOctreeIsDirty = true;
  if ((pUVar4 == (UDynamicMesh *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewDynamicMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGGetDynamicMeshData.cpp"
                         ,0x65,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if (param_1 != (FPCGContext *)0x0) {
    if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
      this_00 = param_1->Node;
      if ((this_00 == (UPCGNode *)0x0) ||
         (pUVar10 = UPCGNode::GetSettings(this_00), pUVar10 == (UPCGSettings *)0x0)) {
        pFVar12 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                  FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetDynamicMeshDataSettings>_::__l2::<lambda_1>_>
                            (&(param_1->InputData).TaggedData,local_158);
        if (pFVar12 != (FPCGTaggedData *)0x0) {
          local_140.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar12->Data).Data.field0_0x0.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (local_140.DebugPtr == (UPCGSettings *)0x0) goto LAB_14cef2792;
            UE::GC::MarkAsReachable((UObject *)local_140.DebugPtr);
          }
          if (local_140.DebugPtr != (UPCGSettings *)0x0) {
            pUVar9 = UPCGGetDynamicMeshDataSettings::StaticClass();
            bVar6 = FObjectPtr::IsA(&local_140.ObjectPtr,pUVar9);
            TVar11 = local_140;
            if (bVar6) goto LAB_14cef2794;
          }
        }
      }
      else {
        pUVar10 = UPCGNode::GetSettings(this_00);
        TVar11.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar10);
        if (TVar11.DebugPtr != (UPCGSettings *)0x0) {
          pUVar9 = UPCGGetDynamicMeshDataSettings::StaticClass();
          iVar8 = (int)pUVar9->_padding_;
          if ((iVar8 <= *(int *)((TVar11.DebugPtr)->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)((TVar11.DebugPtr)->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
              &pUVar9->_padding_)) goto LAB_14cef2794;
        }
      }
    }
    else {
      pUVar9 = UPCGGetDynamicMeshDataSettings::StaticClass();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar9);
      if (bVar6) {
        TVar11.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
        goto LAB_14cef2794;
      }
    }
  }
LAB_14cef2792:
  TVar11.DebugPtr = (UPCGSettings *)0x0;
LAB_14cef2794:
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_a8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_a8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FText::FText(&local_110);
  local_150.bUseClosestLOD = true;
  local_150.bWantNormals = true;
  local_150.bWantTangents = true;
  local_150.bWantInstanceColors = false;
  local_150.LODType = MaxAvailable;
  local_150._1_3_ = 0;
  local_150.LODIndex = 0;
  if (TVar11.DebugPtr != (UPCGSettings *)0x0) {
    local_150.LODType = 0;
    local_150.bWantNormals = SUB81(TVar11.DebugPtr[2]._padding_,0);
    local_150.bUseClosestLOD = true;
    local_150.bWantTangents = *(bool *)((longlong)&TVar11.DebugPtr[2]._padding_ + 1);
    local_150.bWantInstanceColors = *(bool *)((longlong)&TVar11.DebugPtr[2]._padding_ + 2);
    cVar3 = *(char *)((longlong)&TVar11.DebugPtr[2]._padding_ + 4);
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        local_150.LODType = 1;
      }
      else if (cVar3 == '\x02') {
        local_150.LODType = 2;
      }
      else if (cVar3 == '\x03') {
        local_150.LODType = 3;
      }
    }
    local_150._1_3_ = 0;
    local_150.LODIndex = (int)TVar11.DebugPtr[2]._padding_;
  }
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  bVar6 = UE::Conversion::SceneComponentToDynamicMesh
                    ((USceneComponent *)param_3,&local_150,false,(pUVar4->Mesh).Ptr,&local_a8,
                     &local_110,&local_138,&local_128);
  if (bVar6) {
    pTVar14 = &local_138;
    if (local_138.ArrayNum == 0) {
      pTVar14 = &local_128;
    }
    UPCGDynamicMeshData::SetMaterials(this_01,pTVar14);
    iVar8 = (param_4->Collection).TaggedData.ArrayNum;
    piVar2 = &(param_4->Collection).TaggedData.ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)param_4,piVar2);
    }
    (param_4->Collection).TaggedData.ArrayNum = iVar8 + 1;
    this_02 = (FPCGDataPtrWrapper *)
              ((param_4->Collection).TaggedData.AllocatorInstance.Data + (longlong)iVar8 * 0x78);
    this_02[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_02[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_02[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_02 + 1);
    this_02[5].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined2 *)((longlong)&this_02[6].WeakData.WeakPtr.ObjectIndex + 2) = 0;
    (this_02->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
    (this_02->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&this->Elements = 0;
    this_02[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_02[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_02[3].WeakData.WeakPtr.ObjectIndex = 0;
    this_02[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&this_02[4].Data.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this_02[4].Data.field0_0x0 + 4) = 0;
    this_02[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_02[5].WeakData.WeakPtr.ObjectIndex = 0;
    this_02[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    *(undefined2 *)&this_02[6].WeakData.WeakPtr.ObjectIndex = 0x100;
    *(undefined8 *)&this_02[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined4 *)((longlong)&this_02[7].Data.field0_0x0 + 4) = 0xffffffff;
    FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)this_01);
    Algo::
    Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&,_PCGGetDynamicMeshData::GetDynamicMeshDataFromComponent_::__l31::<lambda_1>_>
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)&((USceneComponent *)param_3)->_padding_
               ,this,(<lambda_1>)local_158);
    if ((param_2->bAddActorTags != false) && (((USceneComponent *)param_3)->_padding_ != 0)) {
      local_f8._0_8_ = (FScriptContainerElement *)0x0;
      local_f8._8_8_ = 0;
      local_d8 = (void *)0x0;
      local_d0 = 0;
      local_cc = 0x80;
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_b8 = (ForElementType<FSetElementId>)0x0;
      local_b0 = 0;
      Algo::
      Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&,_PCGGetDynamicMeshData::GetDynamicMeshDataFromComponent_::__l31::<lambda_1>_>
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)
                 (((USceneComponent *)param_3)->_padding_ + 0x1f8),
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_f8,
                 (<lambda_1>)local_158);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                (this,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_f8);
      local_b0 = 0;
      if (local_b8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_f8,0,local_f8._8_4_);
      iVar8 = SUB84(local_f8._8_8_,4);
      local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
      if (iVar8 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
      }
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_d0 = 0;
      if (0x80 < local_cc) {
        local_cc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
      }
      if (local_d8 != (void *)0x0) {
        FMemory::Free(local_d8);
      }
      if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_f8._0_8_);
      }
    }
  }
  else {
    PCGLog::LogErrorOnGraph(&local_110,param_1);
  }
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (local_110.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
  }
  return true;
}

// GetOrCreateDynamicMeshManagedComponent @ 14cef2b60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGDynamicMeshManagedComponent * __cdecl
PCGDynamicMeshManagedComponent::GetOrCreateDynamicMeshManagedComponent
          (FPCGContext *param_1,UPCGSettingsInterface *param_2,UPCGDynamicMeshData *param_3,
          AActor *param_4,TOptional<EPCGEditorDirtyMode> param_5)

{
  int iVar1;
  IPCGGraphExecutionSource *pIVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  UPCGDynamicMeshManagedComponent *pUVar6;
  FText *pFVar7;
  UPCGComponent *this;
  UClass *pUVar8;
  UDynamicMeshComponent *this_00;
  EPCGEditorDirtyMode EVar9;
  FGCScopeGuard local_res18 [8];
  FGCScopeGuard local_res20 [8];
  undefined6 in_stack_0000002a;
  UPCGDynamicMeshManagedComponent *local_b8;
  undefined4 local_b0 [2];
  uint local_a8 [2];
  undefined8 local_a0;
  undefined1 local_98 [8];
  UPCGDynamicMeshManagedComponent *local_90;
  UDynamicMeshComponent *local_88;
  UDynamicMeshComponent *local_80;
  FName local_78;
  code *local_70;
  UPCGDynamicMeshManagedComponent ***local_68;
  UPCGDynamicMeshManagedComponent **local_60;
  uint *local_58;
  AActor *local_50;
  FText local_48;
  
  if ((param_3 == (UPCGDynamicMeshData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMeshData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Resources\\PCGDynamicMeshManagedComponent.cpp"
                         ,0x32,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (UPCGDynamicMeshManagedComponent *)(*pcVar3)();
    return pUVar6;
  }
  if (param_4 == (AActor *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"PCGDynamicMeshManagedComponent",L"NoTargetActor",
                        L"Cannot execute debug display for Dynamic Mesh data with no target actor.")
    ;
    PCGLog::LogErrorOnGraph(pFVar7,param_1);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    return (UPCGDynamicMeshManagedComponent *)0x0;
  }
  if ((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) {
    return (UPCGDynamicMeshManagedComponent *)0x0;
  }
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource);
  if (!bVar4) {
    return (UPCGDynamicMeshManagedComponent *)0x0;
  }
  pIVar2 = (param_1->ExecutionSource).InterfaceInstance;
  if (pIVar2 == (IPCGGraphExecutionSource *)0x0) {
    return (UPCGDynamicMeshManagedComponent *)0x0;
  }
  this = (UPCGComponent *)(**(code **)((longlong)*pIVar2 + 8))();
  if (this == (UPCGComponent *)0x0) {
    return (UPCGDynamicMeshManagedComponent *)0x0;
  }
  pUVar8 = Z_Construct_UClass_UPCGComponent_NoRegister();
  iVar1 = (int)pUVar8->_padding_;
  if (*(int *)(this->_padding_ + 0x38) < iVar1) {
    return (UPCGDynamicMeshManagedComponent *)0x0;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar8->_padding_) {
    return (UPCGDynamicMeshManagedComponent *)0x0;
  }
  if (param_2 == (UPCGSettingsInterface *)0x0) {
    return (UPCGDynamicMeshManagedComponent *)0x0;
  }
  UPCGData::GetOrComputeCrc((UPCGData *)param_3,SUB81(local_a8,0));
  local_60 = &local_b8;
  local_b8 = (UPCGDynamicMeshManagedComponent *)0x0;
  local_58 = local_a8;
  local_68 = &local_60;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`PCGDynamicMeshManagedComponent::GetOrCreateDynamicMeshManagedComponent'::__l2::<lambda_1>,void,UPCGManagedResource_*>
             ::Call;
  local_50 = param_4;
  UPCGComponent::ForEachManagedResource
            (this,(TFunctionRef<void___cdecl(UPCGManagedResource_*)> *)&local_70);
  if (local_b8 == (UPCGDynamicMeshManagedComponent *)0x0) {
    bVar4 = IsInGameThread();
    if (param_1 == (FPCGContext *)0x0) {
      if ((!bVar4) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4331830188552749225>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0xa9,"Context != nullptr || IsInGameThread()"), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UPCGDynamicMeshManagedComponent *)(*pcVar3)();
        return pUVar6;
      }
LAB_14cef2d13:
      pUVar6 = NewObject<UPCGDynamicMeshManagedComponent>((UObject *)this);
    }
    else {
      if (bVar4) goto LAB_14cef2d13;
      if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4331830188552749348>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UPCGDynamicMeshManagedComponent *)(*pcVar3)();
        return pUVar6;
      }
      FGCScopeGuard::FGCScopeGuard(local_res18);
      pUVar6 = NewObject<UPCGDynamicMeshManagedComponent>((UObject *)this);
      FGCScopeGuard::~FGCScopeGuard(local_res18);
      if ((pUVar6 == (UPCGDynamicMeshManagedComponent *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x12a,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UPCGDynamicMeshManagedComponent *)(*pcVar3)();
        return pUVar6;
      }
      local_90 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UPCGDynamicMeshManagedComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>
                (&param_1->AsyncObjects,(TObjectPtr<UObject> *)local_98,(bool *)&local_90);
    }
    local_b8 = pUVar6;
    UPCGComponent::AddToManagedResources(this,(UPCGManagedResource *)pUVar6);
    local_b8->DataUID = (ulonglong)local_a8[0];
    if ((local_b8 == (UPCGDynamicMeshManagedComponent *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExistingResource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Resources\\PCGDynamicMeshManagedComponent.cpp"
                           ,100,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UPCGDynamicMeshManagedComponent *)(*pcVar3)();
      return pUVar6;
    }
  }
  (**(code **)(local_b8->_padding_ + 0x2d8))();
  if (((EPCGEditorDirtyMode *)CONCAT62(in_stack_0000002a,param_5))[1] == Normal) {
    EVar9 = this->CurrentEditingMode;
  }
  else {
    EVar9 = *(EPCGEditorDirtyMode *)CONCAT62(in_stack_0000002a,param_5);
  }
  this_00 = UPCGDynamicMeshManagedComponent::GetComponent(local_b8);
  if (this_00 != (UDynamicMeshComponent *)0x0) goto LAB_14cef2f22;
  bVar4 = IsInGameThread();
  if (param_1 == (FPCGContext *)0x0) {
    if ((!bVar4) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749225>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0xa9,"Context != nullptr || IsInGameThread()"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UPCGDynamicMeshManagedComponent *)(*pcVar3)();
      return pUVar6;
    }
LAB_14cef2e97:
    this_00 = NewObject<UDynamicMeshComponent>((UObject *)param_4);
  }
  else {
    if (bVar4) goto LAB_14cef2e97;
    if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749348>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UPCGDynamicMeshManagedComponent *)(*pcVar3)();
      return pUVar6;
    }
    FGCScopeGuard::FGCScopeGuard(local_res20);
    this_00 = NewObject<UDynamicMeshComponent>((UObject *)param_4);
    FGCScopeGuard::~FGCScopeGuard(local_res20);
    if ((this_00 == (UDynamicMeshComponent *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x12a,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UPCGDynamicMeshManagedComponent *)(*pcVar3)();
      return pUVar6;
    }
    local_88 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDynamicMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>
              (&param_1->AsyncObjects,(TObjectPtr<UObject> *)(local_98 + 4),(bool *)&local_88);
  }
  if (EVar9 == Preview) {
    UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_Transient);
  }
  UActorComponent::RegisterComponent((UActorComponent *)this_00);
  AActor::AddInstanceComponent(param_4,(UActorComponent *)this_00);
  local_b0[0] = 0x10100;
  local_a0 = 0;
  cVar5 = (**(code **)(this_00->_padding_ + 0x508))
                    (this_00,(param_4->RootComponent).field0_0x0.DebugPtr,local_b0,0);
  if (cVar5 == '\0') {
    PCGLog::Component::LogComponentAttachmentFailedWarning(param_1);
  }
  pUVar6 = local_b8;
  local_80 = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&pUVar6->_padding_,(FObjectPtr)&local_80);
LAB_14cef2f22:
  local_78 = (FName)this->_padding_;
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&this_00->_padding_,&local_78);
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&this_00->_padding_,
             &PCGHelpers::DefaultPCGTag);
  return local_b8;
}

// PoissonSampling @ 14cef4820

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

bool __cdecl
PCGMeshSampler::PoissonSampling
          (UPCGMeshSamplerSettings *param_1,FPCGMeshSamplerContext *param_2,
          _func___cdecl_void_FLinearColor_ptr_FPCGPoint_ptr *param_3)

{
  int *piVar1;
  TUniquePtr<FProgressCancel,TDefaultDelete<FProgressCancel>_> *this;
  TArray<TFuture<bool>,TSizedDefaultAllocator<32>_> *pTVar2;
  ITextData *pIVar3;
  TFuture<bool> *pTVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar5;
  PRTL_CRITICAL_SECTION_DEBUG p_Var6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ULONG_PTR UVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  int iVar17;
  FProgressCancel *pFVar18;
  FProgressCancel *pFVar19;
  TFuture<bool> *pTVar20;
  undefined8 uVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  FProgressCancel *pFVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStack_178 [32];
  TFuture<bool> *local_158;
  TFuture<bool> *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined1 local_128;
  undefined1 local_127 [7];
  undefined8 local_120;
  FSharedReferencer<1> FStack_118;
  <lambda_2> local_110;
  TDefaultDelete<FProgressCancel> local_e8 [8];
  undefined1 local_e0 [24];
  TUniqueFunction<void___cdecl(void)> local_c8;
  code *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  if ((((param_1 == (UPCGMeshSamplerSettings *)0x0) || (param_2 == (FPCGMeshSamplerContext *)0x0))
      || (param_3 == (_func___cdecl_void_FLinearColor_ptr_FPCGPoint_ptr *)0x0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings && Context && SetPointDensityPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                          ,0xb8,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  pFVar27 = (FProgressCancel *)0x0;
  if ((param_2->SamplingFutures).ArrayNum == 0) {
    *(undefined1 *)&param_2->_padding_ = 1;
    pFVar18 = ::operator_new(0xb0);
    pFVar19 = pFVar27;
    if (pFVar18 != (FProgressCancel *)0x0) {
      memset(pFVar18,0,0xb0);
      pFVar19 = FProgressCancel::FProgressCancel(pFVar18);
    }
    this = &param_2->SamplingProgess;
    if ((TDefaultDelete<FProgressCancel> *)this == local_e8) {
      if (pFVar19 != (FProgressCancel *)0x0) {
        DestructItems<FProgressCancel::FMessageInfo,int>
                  ((FMessageInfo *)(pFVar19->Warnings).AllocatorInstance.Data,
                   (pFVar19->Warnings).ArrayNum);
        pFVar25 = (pFVar19->Warnings).AllocatorInstance.Data;
        if (pFVar25 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar25);
        }
        if (*(longlong *)&pFVar19->CancelF != 0) {
          plVar23 = *(longlong **)&(pFVar19->CancelF).field_0x28;
          plVar22 = (longlong *)&(pFVar19->CancelF).field_0x10;
          if (plVar23 != (longlong *)0x0) {
            plVar22 = plVar23;
          }
          (**(code **)(*plVar22 + 0x10))();
        }
        DeleteCriticalSection((LPCRITICAL_SECTION)&pFVar19->MessageCS);
        pIVar3 = (pFVar19->ProgressMessage).TextData.Reference;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 0x10))();
        }
        pIVar3 = (pFVar19->Progress).Message.TextData.Reference;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 0x10))();
        }
        ::operator_delete(pFVar19,0xb0);
      }
    }
    else {
      pFVar18 = this->Ptr;
      this->Ptr = pFVar19;
      TDefaultDelete<FProgressCancel>::operator()((TDefaultDelete<FProgressCancel> *)this,pFVar18);
    }
    pFVar19 = this->Ptr;
    local_68 = *(longlong *)&pFVar19->CancelF;
    uVar12 = *(undefined8 *)&(pFVar19->CancelF).field_0x8;
    local_58 = *(longlong *)&(pFVar19->CancelF).field_0x10;
    uStack_50 = *(undefined8 *)&(pFVar19->CancelF).field_0x18;
    uVar21 = *(undefined8 *)&(pFVar19->CancelF).field_0x20;
    plStack_40 = *(longlong **)&(pFVar19->CancelF).field_0x28;
    *(code **)&pFVar19->CancelF =
         UE::Core::Private::Function::
         TFunctionRefCaller<`PCGMeshSampler::PoissonSampling'::__l12::<lambda_1>,bool>::Call;
    *(undefined8 *)&(pFVar19->CancelF).field_0x8 = uStack_60;
    *(undefined4 *)&(pFVar19->CancelF).field_0x10 = 0x52a22fc0;
    *(undefined4 *)&(pFVar19->CancelF).field_0x14 = 1;
    *(FPCGMeshSamplerContext **)&(pFVar19->CancelF).field_0x18 = param_2;
    *(undefined4 *)&(pFVar19->CancelF).field_0x20 = (undefined4)local_48;
    *(undefined4 *)&(pFVar19->CancelF).field_0x24 = local_48._4_4_;
    *(undefined4 *)&(pFVar19->CancelF).field_0x28 = 0;
    *(undefined4 *)&(pFVar19->CancelF).field_0x2c = 0;
    uStack_60 = uVar12;
    local_48 = uVar21;
    if (local_68 != 0) {
      plVar23 = &local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar23 = plStack_40;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
    pFVar19 = pFVar27;
    if (0 < (param_2->DynamicMeshes).ArrayNum) {
      do {
        iVar17 = (param_2->DynamicMeshes).ArrayNum;
        uVar26 = (uint)pFVar27;
        uVar16 = 0;
        if ((int)uVar26 < iVar17) {
          uVar16 = ~uVar26 >> 0x1f;
        }
        if (uVar16 == 0) {
          local_158 = (TFuture<bool> *)(longlong)(int)uVar26;
          local_150 = (TFuture<bool> *)(longlong)iVar17;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar5 = (code *)swi(3);
            uVar15 = (*pcVar5)();
            return (bool)uVar15;
          }
        }
        if (*(longlong *)
             ((param_2->DynamicMeshes).AllocatorInstance.Data + -0x40 +
             (longlong)&(pFVar19->MessageCS).CriticalSection) != 0) {
          local_110.Settings = param_1;
          local_110.Context = param_2;
          local_110.Seed = FPCGContext::GetSeed((FPCGContext *)param_2);
          local_c8._0_8_ = 0;
          pTVar2 = &param_2->SamplingFutures;
          local_c8._40_8_ = 0;
          local_110.SetPointDensityPtr = param_3;
          local_110.DataIndex = uVar26;
          pTVar20 = Async<_PCGMeshSampler::PoissonSampling_::__l14::<lambda_2>_>
                              ((TFuture<bool> *)local_e0,ThreadPool,&local_110,&local_c8);
          pTVar4 = (TFuture<bool> *)(pTVar2->AllocatorInstance).Data;
          if ((pTVar4 <= pTVar20) &&
             (lVar24 = (longlong)(param_2->SamplingFutures).ArrayMax, pTVar20 < pTVar4 + lVar24)) {
            local_140 = (longlong)(param_2->SamplingFutures).ArrayNum;
            local_138 = 0x10;
            local_158 = pTVar20;
            local_150 = pTVar4;
            local_148 = lVar24;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar14) {
              pcVar5 = (code *)swi(3);
              uVar15 = (*pcVar5)();
              return (bool)uVar15;
            }
          }
          iVar17 = (param_2->SamplingFutures).ArrayNum;
          piVar1 = &(param_2->SamplingFutures).ArrayMax;
          if (iVar17 == *piVar1) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar2->AllocatorInstance,piVar1);
          }
          (param_2->SamplingFutures).ArrayNum = iVar17 + 1;
          pFVar25 = (pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
          *(undefined8 *)pFVar25 = *(undefined8 *)pTVar20;
          *(undefined8 *)(pFVar25 + 8) = *(undefined8 *)&pTVar20->field_0x8;
          *(undefined8 *)&pTVar20->field_0x8 = 0;
          *(undefined8 *)pTVar20 = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_e0._8_8_);
        }
        pFVar27 = (FProgressCancel *)(ulonglong)(uVar26 + 1);
        pFVar19 = (FProgressCancel *)&pFVar19->Progress;
      } while ((int)(uVar26 + 1) < (param_2->DynamicMeshes).ArrayNum);
    }
  }
  iVar17 = (param_2->SamplingFutures).ArrayNum;
  pFVar25 = (param_2->SamplingFutures).AllocatorInstance.Data;
  pFVar28 = pFVar25 + (longlong)iVar17 * 0x10;
  while( true ) {
    if ((param_2->SamplingFutures).ArrayNum != iVar17) {
      `TCheckedPointerIterator<TFuture<bool>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_128);
    }
    if (pFVar25 == pFVar28) break;
    if ((*(longlong *)pFVar25 == 0) || (*(char *)(*(longlong *)pFVar25 + 0x68) == '\0')) {
      return false;
    }
    pFVar25 = pFVar25 + 0x10;
  }
  iVar17 = (param_2->SamplingFutures).ArrayNum;
  pFVar25 = (param_2->SamplingFutures).AllocatorInstance.Data;
  pFVar28 = pFVar25 + (longlong)iVar17 * 0x10;
  do {
    if ((param_2->SamplingFutures).ArrayNum != iVar17) {
      `TCheckedPointerIterator<TFuture<bool>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_127);
    }
    if (pFVar25 == pFVar28) {
      return true;
    }
    lpCriticalSection = *(LPCRITICAL_SECTION *)pFVar25;
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      local_98 = (code *)0x0;
      uStack_70 = (longlong *)0x0;
      if (*(char *)&lpCriticalSection[2].LockSemaphore == '\0') {
        EnterCriticalSection(lpCriticalSection);
        if (*(char *)&lpCriticalSection[2].LockSemaphore != '\0') {
          LeaveCriticalSection(lpCriticalSection);
          goto LAB_14cef4c72;
        }
        pcVar5 = *(code **)&lpCriticalSection[1].LockCount;
        uVar7 = *(undefined4 *)&lpCriticalSection[1].OwningThread;
        uVar8 = *(undefined4 *)((longlong)&lpCriticalSection[1].OwningThread + 4);
        uVar9 = *(undefined4 *)&lpCriticalSection[1].LockSemaphore;
        uVar10 = *(undefined4 *)((longlong)&lpCriticalSection[1].LockSemaphore + 4);
        UVar13 = lpCriticalSection[1].SpinCount;
        uVar11 = *(undefined4 *)((longlong)&lpCriticalSection[1].SpinCount + 4);
        p_Var6 = lpCriticalSection[2].DebugInfo;
        plVar23 = *(longlong **)&lpCriticalSection[2].LockCount;
        *(code **)&lpCriticalSection[1].LockCount = local_98;
        lpCriticalSection[1].OwningThread = (HANDLE)CONCAT44(uStack_8c,uStack_90);
        *(undefined4 *)&lpCriticalSection[1].LockSemaphore = local_88;
        *(undefined4 *)((longlong)&lpCriticalSection[1].LockSemaphore + 4) = uStack_84;
        *(undefined4 *)&lpCriticalSection[1].SpinCount = uStack_80;
        *(undefined4 *)((longlong)&lpCriticalSection[1].SpinCount + 4) = uStack_7c;
        *(undefined4 *)&lpCriticalSection[2].DebugInfo = (undefined4)local_78;
        *(undefined4 *)((longlong)&lpCriticalSection[2].DebugInfo + 4) = local_78._4_4_;
        lpCriticalSection[2].LockCount = (LONG)uStack_70;
        lpCriticalSection[2].RecursionCount = uStack_70._4_4_;
        local_98 = pcVar5;
        uStack_90 = uVar7;
        uStack_8c = uVar8;
        local_88 = uVar9;
        uStack_84 = uVar10;
        uStack_80 = (int)UVar13;
        uStack_7c = uVar11;
        local_78 = p_Var6;
        uStack_70 = plVar23;
        LeaveCriticalSection(lpCriticalSection);
LAB_14cef4c9e:
        if (local_98 != (code *)0x0) {
          plVar23 = (longlong *)&local_88;
          if (uStack_70 != (longlong *)0x0) {
            plVar23 = uStack_70;
          }
          (**(code **)(*plVar23 + 0x10))();
        }
      }
      else {
LAB_14cef4c72:
        if (local_98 != (code *)0x0) {
          UE::Core::Private::Function::CheckCallable(local_98);
          pcVar5 = local_98;
          plVar23 = (longlong *)&local_88;
          if (uStack_70 != (longlong *)0x0) {
            plVar23 = uStack_70;
          }
          uVar21 = (**(code **)(*plVar23 + 8))();
          (*pcVar5)(uVar21);
          goto LAB_14cef4c9e;
        }
      }
      local_120 = 0;
      FStack_118.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pFVar25 != (FScriptContainerElement *)&local_120) {
        *(undefined8 *)pFVar25 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar25 + 8),&FStack_118);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_118.ReferenceController);
    }
    pFVar25 = pFVar25 + 0x10;
  } while( true );
}

// RemapMaterials @ 14cef7e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
PCGGeometryHelpers::RemapMaterials
          (FDynamicMesh3 *param_1,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_3,
          FMeshIndexMappings *param_4)

{
  undefined1 *puVar1;
  TIndexMap<int> *pTVar2;
  uint uVar3;
  UObject *pUVar4;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  code *pcVar6;
  longlong lVar7;
  undefined8 uVar8;
  TIndexMap<int> *pTVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  FDynamicMeshAttributeSet *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  FDynamicMeshAttributeSet *pFVar23;
  undefined1 *puVar24;
  ulonglong uVar25;
  uint *puVar26;
  undefined1 auStackY_1d8 [32];
  uint local_188;
  undefined1 local_184 [4];
  uint local_180 [2];
  undefined8 local_178;
  UObject *local_170;
  undefined4 local_168;
  undefined1 local_164 [20];
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_148;
  TIndexMap<int> *local_128;
  int iStack_120;
  uint uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  TIndexMap<int> *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  uint *local_c8;
  uint *local_c0;
  undefined4 local_9c;
  undefined1 local_98 [40];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  uVar22 = param_2->ArrayNum;
  if (uVar22 == 0) {
    return;
  }
  pFVar23 = (param_1->AttributeSet).Ptr;
  if (pFVar23 == (FDynamicMeshAttributeSet *)0x0) {
    return;
  }
  if ((pFVar23->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    return;
  }
  local_164._12_8_ = param_4;
  if (param_3->ArrayNum == 0) {
    pFVar17 = (param_2->AllocatorInstance).Data;
    param_3->ArrayNum = uVar22;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar22,param_3->ArrayMax,&param_3->AllocatorInstance,uVar22,&param_3->ArrayMax);
    ConstructItems<TObjectPtr<UMaterialInterface>,UMaterialInterface_*,int>
              ((param_3->AllocatorInstance).Data,(UMaterialInterface **)pFVar17,uVar22);
    return;
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_98._32_8_ = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar22);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar22);
  local_178 = 1;
  uVar19 = 1;
  if (3 < uVar22) {
    uVar25 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_168 = (undefined4)lVar16;
    uVar19 = 1 << ((byte)lVar16 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar19 <= (int)local_50)) goto LAB_14cef80cc;
  local_50 = uVar19;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar19 != 0) {
    uVar22 = uVar19;
    if (uVar19 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar22 = 0;
        goto LAB_14cef7feb;
      }
    }
    else {
LAB_14cef7feb:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar22,4);
    }
    if (0 < (int)uVar19) {
      uVar25 = (ulonglong)uVar19;
      pFVar23 = (FDynamicMeshAttributeSet *)0x0;
      do {
        FVar14.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_58.Data;
        }
        uVar12 = (longlong)(int)uVar19 - 1U & (ulonglong)pFVar23;
        pFVar23 = (FDynamicMeshAttributeSet *)((longlong)&pFVar23->_padding_ + 1);
        *(undefined4 *)(FVar14.Data + uVar12 * 4) = 0xffffffff;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  if ((local_50 != 0) &&
     (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator
                ((TConstIterator *)&local_150,
                 (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98), local_148.CurrentBitIndex < (local_148.Array)->NumBits)) {
    do {
      puVar26 = (uint *)((longlong)local_148.CurrentBitIndex * 0x10 + *local_150);
      uVar22 = local_50 - 1 & *puVar26;
      puVar26[3] = uVar22;
      FVar14.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar14.Data = local_58.Data;
      }
      uVar25 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar22;
      puVar26[2] = *(uint *)(FVar14.Data + uVar25 * 4);
      *(int *)(FVar14.Data + uVar25 * 4) = local_148.CurrentBitIndex;
      local_148.UnvisitedBitMask = local_148.UnvisitedBitMask & ~local_148._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_148);
    } while (local_148.CurrentBitIndex < (local_148.Array)->NumBits);
  }
LAB_14cef80cc:
  iVar18 = param_2->ArrayNum;
  local_188 = 0;
  if (0 < iVar18) {
    do {
      uVar22 = local_188;
      uVar19 = 0;
      if ((int)local_188 < iVar18) {
        uVar19 = ~local_188 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar17 = (param_3->AllocatorInstance).Data;
      pUVar4 = *(UObject **)((param_2->AllocatorInstance).Data + (longlong)(int)uVar22 * 8);
      for (pFVar13 = pFVar17; pFVar13 != pFVar17 + (longlong)param_3->ArrayNum * 8;
          pFVar13 = pFVar13 + 8) {
        if (*(UObject **)pFVar13 == (UObject *)0x0) {
          bVar10 = pUVar4 == (UObject *)0x0;
        }
        else {
          bVar10 = *(UObject **)pFVar13 == pUVar4;
        }
        if (bVar10) {
          uVar22 = (uint)((longlong)pFVar13 - (longlong)pFVar17 >> 3);
          if (uVar22 != 0xffffffff) goto LAB_14cef8246;
          break;
        }
      }
      local_180[0] = 0xffffffff;
      local_170 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      pFVar17 = (param_3->AllocatorInstance).Data;
      if (((pFVar17 <= (FScriptContainerElement *)&local_170) &&
          ((FScriptContainerElement *)&local_170 < pFVar17 + (longlong)param_3->ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar22 = param_3->ArrayNum;
      if (uVar22 == param_3->ArrayMax) {
        uVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      pFVar17 = (param_3->AllocatorInstance).Data;
      param_3->ArrayNum = uVar22 + 1;
      *(UObject **)(pFVar17 + (longlong)(int)uVar22 * 8) = local_170;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_170 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_170);
      }
LAB_14cef8246:
      local_180[0] = uVar22;
      if (uVar22 != local_188) {
        local_c8 = &local_188;
        local_c0 = local_180;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_&,int_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)local_98,(TPairInitializer<int_&,int_&> *)local_164,(bool *)&local_c8);
      }
      iVar18 = param_2->ArrayNum;
      local_188 = local_188 + 1;
    } while ((int)local_188 < iVar18);
  }
  if (local_98._8_4_ != local_64) {
    bVar10 = -1 < CpuChannel->Enabled;
    if (bVar10) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId115,"PCGGeometryHelpers::RemapMaterials",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Helpers\\PCGGeometryHelpers.cpp"
                 ,0x73);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId115);
    }
    uVar8 = local_164._12_8_;
    pFVar23 = (param_1->AttributeSet).Ptr;
    pFVar15 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar23 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar15 = pFVar23;
    }
    pTVar5 = (pFVar15->MaterialIDAttrib).Ptr;
    if ((FMeshIndexMappings *)local_164._12_8_ == (FMeshIndexMappings *)0x0) {
      uVar22 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
      uVar25 = 0;
      if (((uVar22 != 0) &&
          (pFVar17 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
          uVar25 = 0, 0xfffd < (ushort)(**(short **)pFVar17 - 1U))) && (uVar25 = 1, 1 < (int)uVar22)
         ) {
        do {
          lVar16 = (ulonglong)((uint)uVar25 & 0x1ff) * 2;
          if ((*(short *)(lVar16 + *(longlong *)(pFVar17 + (uVar25 >> 9) * 8)) != 0) &&
             (*(short *)(lVar16 + *(longlong *)(pFVar17 + (uVar25 >> 9) * 8)) != -1)) break;
          uVar19 = (uint)uVar25 + 1;
          uVar25 = (ulonglong)uVar19;
        } while ((int)uVar19 < (int)uVar22);
      }
      uVar19 = (uint)uVar25;
      while (uVar19 != uVar22) {
        uVar19 = (uint)uVar25;
        uVar20 = *(uint *)(*(longlong *)(*(longlong *)&pTVar5->field_0x20 + (uVar25 >> 9) * 8) +
                          (ulonglong)(uVar19 & 0x1ff) * 4);
        if (local_98._8_4_ != local_64) {
          FVar14.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar14.Data = local_58.Data;
          }
          uVar3 = *(uint *)(FVar14.Data + (ulonglong)(local_50 - 1 & uVar20) * 4);
          while (uVar3 != 0xffffffff) {
            pFVar17 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)(int)uVar3 * 0x10);
            if (*(uint *)pFVar17 == uVar20) {
              pFVar13 = pFVar17 + 4;
              if (pFVar17 == (FScriptContainerElement *)0x0) {
                pFVar13 = (FScriptContainerElement *)0x0;
              }
              if (pFVar13 != (FScriptContainerElement *)0x0) {
                *(uint *)(*(longlong *)(*(longlong *)&pTVar5->field_0x20 + (uVar25 >> 9) * 8) +
                         (ulonglong)(uVar19 & 0x1ff) * 4) = *(uint *)pFVar13;
              }
              break;
            }
            uVar3 = *(uint *)(pFVar17 + 8);
          }
        }
        uVar19 = uVar19 + 1;
        uVar25 = (ulonglong)uVar19;
        if ((int)uVar19 < (int)uVar22) {
          pFVar17 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
          do {
            lVar16 = (uVar25 >> 9) * 8;
            lVar7 = (ulonglong)((uint)uVar25 & 0x1ff) * 2;
            if ((*(short *)(lVar7 + *(longlong *)(pFVar17 + lVar16)) != 0) &&
               (*(short *)(lVar7 + *(longlong *)(pFVar17 + lVar16)) != -1)) break;
            uVar19 = (uint)uVar25 + 1;
            uVar25 = (ulonglong)uVar19;
          } while ((int)uVar19 < (int)uVar22);
          uVar19 = (uint)uVar25;
        }
      }
    }
    else {
      puVar1 = &(((TIndexMap<int> *)(local_164._12_8_ + 0xa8))->ForwardMap).field_0x10;
      iVar18 = *(int *)&(((TIndexMap<int> *)(local_164._12_8_ + 0xa8))->ForwardMap).field_0x28;
      pTVar2 = (TIndexMap<int> *)(local_164._12_8_ + 0xa8);
      iStack_120 = 0;
      local_108 = 0;
      iStack_10c = 0;
      if (iVar18 == 0) {
LAB_14cef83a1:
        uStack_11c = (uint)local_178;
      }
      else {
        puVar26 = *(uint **)&(((TIndexMap<int> *)(local_164._12_8_ + 0xa8))->ForwardMap).field_0x20;
        if (puVar26 == (uint *)0x0) {
          puVar26 = (uint *)puVar1;
        }
        uStack_11c = *puVar26;
        while (uStack_11c == 0) {
          lVar16 = (longlong)iStack_120;
          local_108 = local_108 + 0x20;
          iStack_120 = iStack_120 + 1;
          iStack_10c = iVar18;
          if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_120)
          goto LAB_14cef83a1;
          uStack_11c = puVar26[lVar16 + 1];
        }
        uStack_11c = -uStack_11c & uStack_11c;
        uVar25 = (ulonglong)uStack_11c * 2 + 1;
        lVar16 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_164._4_4_ = (undefined4)lVar16;
        iStack_10c = local_108 + -1 + local_164._4_4_;
        if (iVar18 < iStack_10c) {
          iStack_10c = iVar18;
        }
      }
      uVar22 = *(uint *)&(((TIndexMap<int> *)(local_164._12_8_ + 0xa8))->ForwardMap).field_0x28;
      uStack_104 = local_9c;
      iStack_100 = *(int *)&(((TIndexMap<int> *)(local_164._12_8_ + 0xa8))->ForwardMap).field_0x8 -
                   *(int *)&(((TIndexMap<int> *)(local_164._12_8_ + 0xa8))->ForwardMap).field_0x34;
      uVar20 = uVar22 & 0xffffffe0;
      uStack_110 = 0xffffffff;
      uVar19 = -1 << ((byte)uVar22 & 0x1f);
      TStack_f0._padding_ = CONCAT44(uStack_11c,iStack_120);
      TStack_f0.CurrentBitIndex = iStack_10c;
      TStack_f0.UnvisitedBitMask = 0xffffffff;
      iVar21 = (int)uVar22 >> 5;
      local_178 = CONCAT44(local_178._4_4_,uVar19);
      TStack_f0._28_4_ = local_9c;
      TStack_f0.BaseBitIndex = local_108;
      uStack_d0 = CONCAT44(uStack_fc,iStack_100);
      local_128 = pTVar2;
      local_118 = puVar1;
      local_f8 = pTVar2;
      TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if (((int)uVar22 < 0) || (iVar18 < (int)uVar22)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar19 = (uint)local_178;
      }
      uVar3 = *(uint *)&(((TIndexMap<int> *)(uVar8 + 0xa8))->ForwardMap).field_0x28;
      if (uVar22 != uVar3) {
        puVar24 = *(undefined1 **)&(((TIndexMap<int> *)(uVar8 + 0xa8))->ForwardMap).field_0x20;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = puVar1;
        }
        uVar19 = uVar19 & *(uint *)(puVar24 + (longlong)iVar21 * 4);
        while (uVar19 == 0) {
          lVar16 = (longlong)iVar21;
          uVar20 = uVar20 + 0x20;
          iVar21 = iVar21 + 1;
          uVar22 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
          goto LAB_14cef84b0;
          uVar19 = *(uint *)(puVar24 + lVar16 * 4 + 4);
        }
        uVar25 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar22 = (uVar20 - 1) + (int)lVar16;
        if ((int)uVar3 < (int)uVar22) {
          uVar22 = uVar3;
        }
      }
LAB_14cef84b0:
      while( true ) {
        pTVar9 = local_f8;
        if (*(int *)&(local_f8->ForwardMap).field_0x8 - *(int *)&(local_f8->ForwardMap).field_0x34
            != (int)uStack_d0) {
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_184);
        }
        if (((TStack_f0.CurrentBitIndex == uVar22) &&
            (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar9 == pTVar2)) break;
        uVar19 = *(uint *)(*(longlong *)&pTVar9->ForwardMap + 4 +
                          (longlong)TStack_f0.CurrentBitIndex * 0x10);
        uVar25 = (ulonglong)(uVar19 & 0x1ff);
        lVar16 = *(longlong *)(*(longlong *)&pTVar5->field_0x20 + (ulonglong)(uVar19 >> 9) * 8);
        uVar19 = *(uint *)(lVar16 + uVar25 * 4);
        if (local_98._8_4_ != local_64) {
          FVar14.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar14.Data = local_58.Data;
          }
          uVar20 = *(uint *)(FVar14.Data + (ulonglong)(local_50 - 1 & uVar19) * 4);
          while (uVar20 != 0xffffffff) {
            pFVar17 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)(int)uVar20 * 0x10);
            if (*(uint *)pFVar17 == uVar19) {
              pFVar13 = pFVar17 + 4;
              if (pFVar17 == (FScriptContainerElement *)0x0) {
                pFVar13 = (FScriptContainerElement *)0x0;
              }
              if (pFVar13 != (FScriptContainerElement *)0x0) {
                *(uint *)(lVar16 + uVar25 * 4) = *(uint *)pFVar13;
              }
              break;
            }
            uVar20 = *(uint *)(pFVar17 + 8);
          }
        }
        TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
      }
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// SafeConversionLODType @ 14cef8a90

EMeshLODType __cdecl PCGGeometryHelpers::SafeConversionLODType(EGeometryScriptLODType param_1)

{
  if (param_1 != MaxAvailable) {
    if (param_1 == HiResSourceModel) {
      return HiResSourceModel;
    }
    if (param_1 == SourceModel) {
      return SourceModel;
    }
    if (param_1 == RenderData) {
      return RenderData;
    }
  }
  return MaxAvailable;
}

// SampleOnePointPerTriangle @ 14cef8ac0

bool __cdecl
PCGMeshSampler::SampleOnePointPerTriangle
          (UPCGMeshSamplerSettings *param_1,FPCGMeshSamplerContext *param_2,
          _func___cdecl_void_FLinearColor_ptr_FPCGPoint_ptr *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  <lambda_2> local_res8 [8];
  <lambda_1> local_28;
  
  if ((((param_1 == (UPCGMeshSamplerSettings *)0x0) || (param_2 == (FPCGMeshSamplerContext *)0x0))
      || (param_3 == (_func___cdecl_void_FLinearColor_ptr_FPCGPoint_ptr *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings && Context && SetPointDensityPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                         ,0x6d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId111,"FPCGMeshSamplerElement::Execute::OnePointPerTriangle",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
               ,0x6f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId111);
  }
  iVar1 = (param_2->DynamicMeshes).ArrayNum;
  local_28.Context = param_2;
  local_28.Settings = param_1;
  local_28.SetPointDensityPtr = param_3;
  if (iVar1 != 0) {
    iVar2 = (param_2->StartingIndices).ArrayNum;
    if (iVar1 + 1 == iVar2) {
      uVar7 = 0;
      if ((int)(iVar2 - 1U) < iVar2) {
        uVar7 = ~(iVar2 - 1U) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      bVar6 = FPCGAsync::
              AsyncProcessingOneToOneRangeEx<_PCGMeshSampler::SampleOnePointPerTriangle_::__l2::<lambda_2>,_PCGMeshSampler::SampleOnePointPerTriangle_::__l2::<lambda_1>_&>
                        ((FPCGAsyncState *)&param_2->_padding_,
                         *(int *)((param_2->StartingIndices).AllocatorInstance.Data +
                                 (longlong)(param_2->StartingIndices).ArrayNum * 4 + -4),local_res8,
                         &local_28,true,0x40,true);
      goto LAB_14cef8baa;
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<676982181238669486>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                       ,0xae,"Context->DynamicMeshes.Num() + 1 == Context->StartingIndices.Num()");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  bVar6 = true;
LAB_14cef8baa:
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar6;
}

// SampleOnePointPerVertex @ 14cef8c60

bool __cdecl
PCGMeshSampler::SampleOnePointPerVertex
          (UPCGMeshSamplerSettings *param_1,FPCGMeshSamplerContext *param_2,
          _func___cdecl_void_FLinearColor_ptr_FPCGPoint_ptr *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  <lambda_2> local_res8 [8];
  <lambda_1> local_28;
  
  if ((((param_1 == (UPCGMeshSamplerSettings *)0x0) || (param_2 == (FPCGMeshSamplerContext *)0x0))
      || (param_3 == (_func___cdecl_void_FLinearColor_ptr_FPCGPoint_ptr *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings && Context && SetPointDensityPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                         ,0x29,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId43,"PCGMeshSampler::SampleOnePointPerVertex",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
               ,0x2b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId43);
  }
  iVar1 = (param_2->DynamicMeshes).ArrayNum;
  local_28.Settings = param_1;
  local_28.Context = param_2;
  local_28.SetPointDensityPtr = param_3;
  if (iVar1 != 0) {
    iVar2 = (param_2->StartingIndices).ArrayNum;
    if (iVar1 + 1 == iVar2) {
      uVar7 = 0;
      if ((int)(iVar2 - 1U) < iVar2) {
        uVar7 = ~(iVar2 - 1U) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      bVar6 = FPCGAsync::
              AsyncProcessingOneToOneRangeEx<_PCGMeshSampler::SampleOnePointPerVertex_::__l2::<lambda_2>,_PCGMeshSampler::SampleOnePointPerVertex_::__l2::<lambda_1>_&>
                        ((FPCGAsyncState *)&param_2->_padding_,
                         *(int *)((param_2->StartingIndices).AllocatorInstance.Data +
                                 (longlong)(param_2->StartingIndices).ArrayNum * 4 + -4),local_res8,
                         &local_28,true,0x40,true);
      goto LAB_14cef8d4a;
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<676982181238669411>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                       ,99,"Context->DynamicMeshes.Num() + 1 == Context->StartingIndices.Num()");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  bVar6 = true;
LAB_14cef8d4a:
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar6;
}

// Z_Construct_UClass_UPCGAppendMeshesFromPointsSettings_NoRegister @ 14cefa0e0

UClass * __cdecl Z_Construct_UClass_UPCGAppendMeshesFromPointsSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAppendMeshesFromPointsSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGAppendMeshesFromPointsSettings",
               &Z_Registration_Info_UClass_UPCGAppendMeshesFromPointsSettings.InnerSingleton,
               UPCGAppendMeshesFromPointsSettings::
               StaticRegisterNativesUPCGAppendMeshesFromPointsSettings,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAppendMeshesFromPointsSettings>,
               InternalVTableHelperCtorCaller<UPCGAppendMeshesFromPointsSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAppendMeshesFromPointsSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGBooleanOperationSettings_NoRegister @ 14cefa1a0

UClass * __cdecl Z_Construct_UClass_UPCGBooleanOperationSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBooleanOperationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGBooleanOperationSettings",
               &Z_Registration_Info_UClass_UPCGBooleanOperationSettings.InnerSingleton,
               UPCGBooleanOperationSettings::StaticRegisterNativesUPCGBooleanOperationSettings,0xe0,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGBooleanOperationSettings>,
               InternalVTableHelperCtorCaller<UPCGBooleanOperationSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBooleanOperationSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGCreateEmptyDynamicMeshSettings_NoRegister @ 14cefa260

UClass * __cdecl Z_Construct_UClass_UPCGCreateEmptyDynamicMeshSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreateEmptyDynamicMeshSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGCreateEmptyDynamicMeshSettings",
               &Z_Registration_Info_UClass_UPCGCreateEmptyDynamicMeshSettings.InnerSingleton,
               UPCGCreateEmptyDynamicMeshSettings::
               StaticRegisterNativesUPCGCreateEmptyDynamicMeshSettings,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreateEmptyDynamicMeshSettings>,
               InternalVTableHelperCtorCaller<UPCGCreateEmptyDynamicMeshSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreateEmptyDynamicMeshSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGDynamicMeshBaseSettings_NoRegister @ 14cefa320

UClass * __cdecl Z_Construct_UClass_UPCGDynamicMeshBaseSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDynamicMeshBaseSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGDynamicMeshBaseSettings",
               &Z_Registration_Info_UClass_UPCGDynamicMeshBaseSettings.InnerSingleton,
               UPCGDynamicMeshBaseSettings::StaticRegisterNativesUPCGDynamicMeshBaseSettings,200,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGDynamicMeshBaseSettings>,
               InternalVTableHelperCtorCaller<UPCGDynamicMeshBaseSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDynamicMeshBaseSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGDynamicMeshManagedComponent_NoRegister @ 14cefa3e0

UClass * __cdecl Z_Construct_UClass_UPCGDynamicMeshManagedComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDynamicMeshManagedComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGDynamicMeshManagedComponent",
               &Z_Registration_Info_UClass_UPCGDynamicMeshManagedComponent.InnerSingleton,
               UPCGDynamicMeshManagedComponent::StaticRegisterNativesUPCGDynamicMeshManagedComponent
               ,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGDynamicMeshManagedComponent>,
               InternalVTableHelperCtorCaller<UPCGDynamicMeshManagedComponent>,local_res8,
               UPCGManagedComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDynamicMeshManagedComponent.InnerSingleton;
}

// Z_Construct_UClass_UPCGDynamicMeshTransformSettings_NoRegister @ 14cefa4a0

UClass * __cdecl Z_Construct_UClass_UPCGDynamicMeshTransformSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDynamicMeshTransformSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGDynamicMeshTransformSettings",
               &Z_Registration_Info_UClass_UPCGDynamicMeshTransformSettings.InnerSingleton,
               UPCGDynamicMeshTransformSettings::
               StaticRegisterNativesUPCGDynamicMeshTransformSettings,0x130,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDynamicMeshTransformSettings>,
               InternalVTableHelperCtorCaller<UPCGDynamicMeshTransformSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDynamicMeshTransformSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGGeometryBlueprintElement_NoRegister @ 14cefa560

UClass * __cdecl Z_Construct_UClass_UPCGGeometryBlueprintElement_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGeometryBlueprintElement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGGeometryBlueprintElement",
               &Z_Registration_Info_UClass_UPCGGeometryBlueprintElement.InnerSingleton,
               UPCGGeometryBlueprintElement::StaticRegisterNativesUPCGGeometryBlueprintElement,0x68,
               8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGeometryBlueprintElement>,
               InternalVTableHelperCtorCaller<UPCGGeometryBlueprintElement>,local_res8,
               UPCGBlueprintBaseElement::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGeometryBlueprintElement.InnerSingleton;
}

// Z_Construct_UClass_UPCGGetDynamicMeshDataSettings_NoRegister @ 14cefa620

UClass * __cdecl Z_Construct_UClass_UPCGGetDynamicMeshDataSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetDynamicMeshDataSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGGetDynamicMeshDataSettings",
               &Z_Registration_Info_UClass_UPCGGetDynamicMeshDataSettings.InnerSingleton,
               UPCGGetDynamicMeshDataSettings::StaticRegisterNativesUPCGGetDynamicMeshDataSettings,
               0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGetDynamicMeshDataSettings>,
               InternalVTableHelperCtorCaller<UPCGGetDynamicMeshDataSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetDynamicMeshDataSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGMergeDynamicMeshesSettings_NoRegister @ 14cefa6e0

UClass * __cdecl Z_Construct_UClass_UPCGMergeDynamicMeshesSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMergeDynamicMeshesSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGMergeDynamicMeshesSettings",
               &Z_Registration_Info_UClass_UPCGMergeDynamicMeshesSettings.InnerSingleton,
               UPCGMergeDynamicMeshesSettings::StaticRegisterNativesUPCGMergeDynamicMeshesSettings,
               200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGMergeDynamicMeshesSettings>,
               InternalVTableHelperCtorCaller<UPCGMergeDynamicMeshesSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMergeDynamicMeshesSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGMeshSamplerSettings_NoRegister @ 14cefa7a0

UClass * __cdecl Z_Construct_UClass_UPCGMeshSamplerSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMeshSamplerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGMeshSamplerSettings",
               &Z_Registration_Info_UClass_UPCGMeshSamplerSettings.InnerSingleton,
               UPCGMeshSamplerSettings::StaticRegisterNativesUPCGMeshSamplerSettings,0x1c0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGMeshSamplerSettings>
               ,InternalVTableHelperCtorCaller<UPCGMeshSamplerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMeshSamplerSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGPrimitiveCrossSectionSettings_NoRegister @ 14cefa860

UClass * __cdecl Z_Construct_UClass_UPCGPrimitiveCrossSectionSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPrimitiveCrossSectionSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGPrimitiveCrossSectionSettings",
               &Z_Registration_Info_UClass_UPCGPrimitiveCrossSectionSettings.InnerSingleton,
               UPCGPrimitiveCrossSectionSettings::
               StaticRegisterNativesUPCGPrimitiveCrossSectionSettings,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPrimitiveCrossSectionSettings>,
               InternalVTableHelperCtorCaller<UPCGPrimitiveCrossSectionSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPrimitiveCrossSectionSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGSaveDynamicMeshToAssetSettings_NoRegister @ 14cefa920

UClass * __cdecl Z_Construct_UClass_UPCGSaveDynamicMeshToAssetSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSaveDynamicMeshToAssetSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGSaveDynamicMeshToAssetSettings",
               &Z_Registration_Info_UClass_UPCGSaveDynamicMeshToAssetSettings.InnerSingleton,
               UPCGSaveDynamicMeshToAssetSettings::
               StaticRegisterNativesUPCGSaveDynamicMeshToAssetSettings,0x1c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSaveDynamicMeshToAssetSettings>,
               InternalVTableHelperCtorCaller<UPCGSaveDynamicMeshToAssetSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSaveDynamicMeshToAssetSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGSpawnDynamicMeshSettings_NoRegister @ 14cefa9e0

UClass * __cdecl Z_Construct_UClass_UPCGSpawnDynamicMeshSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpawnDynamicMeshSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGSpawnDynamicMeshSettings",
               &Z_Registration_Info_UClass_UPCGSpawnDynamicMeshSettings.InnerSingleton,
               UPCGSpawnDynamicMeshSettings::StaticRegisterNativesUPCGSpawnDynamicMeshSettings,0x100
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSpawnDynamicMeshSettings>,
               InternalVTableHelperCtorCaller<UPCGSpawnDynamicMeshSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpawnDynamicMeshSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGSplineToMeshSettings_NoRegister @ 14cefaaa0

UClass * __cdecl Z_Construct_UClass_UPCGSplineToMeshSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineToMeshSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGSplineToMeshSettings",
               &Z_Registration_Info_UClass_UPCGSplineToMeshSettings.InnerSingleton,
               UPCGSplineToMeshSettings::StaticRegisterNativesUPCGSplineToMeshSettings,0x100,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSplineToMeshSettings>,
               InternalVTableHelperCtorCaller<UPCGSplineToMeshSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineToMeshSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGStaticMeshToDynamicMeshSettings_NoRegister @ 14cefab60

UClass * __cdecl Z_Construct_UClass_UPCGStaticMeshToDynamicMeshSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshToDynamicMeshSettings.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGStaticMeshToDynamicMeshSettings",
               &Z_Registration_Info_UClass_UPCGStaticMeshToDynamicMeshSettings.InnerSingleton,
               UPCGStaticMeshToDynamicMeshSettings::
               StaticRegisterNativesUPCGStaticMeshToDynamicMeshSettings,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGStaticMeshToDynamicMeshSettings>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshToDynamicMeshSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshToDynamicMeshSettings.InnerSingleton;
}

// IMPLEMENT_MODULE_PCGGeometryScriptInterop @ 14cefadc0

void __cdecl IMPLEMENT_MODULE_PCGGeometryScriptInterop(void)

{
  return;
}

// PositionCurve'' @ 150453d70

void __cdecl `dynamic_atexit_destructor_for_'FSpline::PositionCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::PositionCurve._0_8_;
  if (FSpline::PositionCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::PositionCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// RotationCurve'' @ 150453d90

void __cdecl `dynamic_atexit_destructor_for_'FSpline::RotationCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::RotationCurve._0_8_;
  if (FSpline::RotationCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::RotationCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// ScaleCurve'' @ 150453db0

void __cdecl `dynamic_atexit_destructor_for_'FSpline::ScaleCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::ScaleCurve._0_8_;
  if (FSpline::ScaleCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::ScaleCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarPCGDynamicMeshAllowSteal'' @ 150453dd0

void __cdecl
PCGDynamicMeshBaseElement::_dynamic_atexit_destructor_for__CVarPCGDynamicMeshAllowSteal__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPCGDynamicMeshAllowSteal);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPCGDynamicMeshStealVerbose'' @ 150453df0

void __cdecl
PCGDynamicMeshBaseElement::_dynamic_atexit_destructor_for__CVarPCGDynamicMeshStealVerbose__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPCGDynamicMeshStealVerbose);
  return;
}

// `dynamic_atexit_destructor_for_'LogSpline'' @ 150453e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_atexit_destructor_for__LogSpline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSpline);
  return;
}

